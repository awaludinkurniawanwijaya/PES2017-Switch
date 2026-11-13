#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B7DB84"))) PPC_WEAK_FUNC(sub_83B7DB84);
PPC_FUNC_IMPL(__imp__sub_83B7DB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DB88"))) PPC_WEAK_FUNC(sub_83B7DB88);
PPC_FUNC_IMPL(__imp__sub_83B7DB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31400
	ctx.r3.s64 = ctx.r11.s64 + -31400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DB94"))) PPC_WEAK_FUNC(sub_83B7DB94);
PPC_FUNC_IMPL(__imp__sub_83B7DB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DB98"))) PPC_WEAK_FUNC(sub_83B7DB98);
PPC_FUNC_IMPL(__imp__sub_83B7DB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31392
	ctx.r3.s64 = ctx.r11.s64 + -31392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DBA4"))) PPC_WEAK_FUNC(sub_83B7DBA4);
PPC_FUNC_IMPL(__imp__sub_83B7DBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DBA8"))) PPC_WEAK_FUNC(sub_83B7DBA8);
PPC_FUNC_IMPL(__imp__sub_83B7DBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31384
	ctx.r3.s64 = ctx.r11.s64 + -31384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DBB4"))) PPC_WEAK_FUNC(sub_83B7DBB4);
PPC_FUNC_IMPL(__imp__sub_83B7DBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DBB8"))) PPC_WEAK_FUNC(sub_83B7DBB8);
PPC_FUNC_IMPL(__imp__sub_83B7DBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31376
	ctx.r3.s64 = ctx.r11.s64 + -31376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DBC4"))) PPC_WEAK_FUNC(sub_83B7DBC4);
PPC_FUNC_IMPL(__imp__sub_83B7DBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DBC8"))) PPC_WEAK_FUNC(sub_83B7DBC8);
PPC_FUNC_IMPL(__imp__sub_83B7DBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31368
	ctx.r3.s64 = ctx.r11.s64 + -31368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DBD4"))) PPC_WEAK_FUNC(sub_83B7DBD4);
PPC_FUNC_IMPL(__imp__sub_83B7DBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DBD8"))) PPC_WEAK_FUNC(sub_83B7DBD8);
PPC_FUNC_IMPL(__imp__sub_83B7DBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13952
	ctx.r7.s64 = ctx.r8.s64 + -13952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13952(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13952);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13952(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13952, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7DC00"))) PPC_WEAK_FUNC(sub_83B7DC00);
PPC_FUNC_IMPL(__imp__sub_83B7DC00) {
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
	// addi r3,r11,-13956
	ctx.r3.s64 = ctx.r11.s64 + -13956;
	// bl 0x83523120
	ctx.lr = 0x83B7DC18;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-31360
	ctx.r3.s64 = ctx.r10.s64 + -31360;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7DC24;
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

__attribute__((alias("__imp__sub_83B7DC34"))) PPC_WEAK_FUNC(sub_83B7DC34);
PPC_FUNC_IMPL(__imp__sub_83B7DC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DC38"))) PPC_WEAK_FUNC(sub_83B7DC38);
PPC_FUNC_IMPL(__imp__sub_83B7DC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31344
	ctx.r3.s64 = ctx.r11.s64 + -31344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DC44"))) PPC_WEAK_FUNC(sub_83B7DC44);
PPC_FUNC_IMPL(__imp__sub_83B7DC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DC48"))) PPC_WEAK_FUNC(sub_83B7DC48);
PPC_FUNC_IMPL(__imp__sub_83B7DC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31336
	ctx.r3.s64 = ctx.r11.s64 + -31336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DC54"))) PPC_WEAK_FUNC(sub_83B7DC54);
PPC_FUNC_IMPL(__imp__sub_83B7DC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DC58"))) PPC_WEAK_FUNC(sub_83B7DC58);
PPC_FUNC_IMPL(__imp__sub_83B7DC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31328
	ctx.r3.s64 = ctx.r11.s64 + -31328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DC64"))) PPC_WEAK_FUNC(sub_83B7DC64);
PPC_FUNC_IMPL(__imp__sub_83B7DC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DC68"))) PPC_WEAK_FUNC(sub_83B7DC68);
PPC_FUNC_IMPL(__imp__sub_83B7DC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31320
	ctx.r3.s64 = ctx.r11.s64 + -31320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DC74"))) PPC_WEAK_FUNC(sub_83B7DC74);
PPC_FUNC_IMPL(__imp__sub_83B7DC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DC78"))) PPC_WEAK_FUNC(sub_83B7DC78);
PPC_FUNC_IMPL(__imp__sub_83B7DC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31312
	ctx.r3.s64 = ctx.r11.s64 + -31312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DC84"))) PPC_WEAK_FUNC(sub_83B7DC84);
PPC_FUNC_IMPL(__imp__sub_83B7DC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DC88"))) PPC_WEAK_FUNC(sub_83B7DC88);
PPC_FUNC_IMPL(__imp__sub_83B7DC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31304
	ctx.r3.s64 = ctx.r11.s64 + -31304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DC94"))) PPC_WEAK_FUNC(sub_83B7DC94);
PPC_FUNC_IMPL(__imp__sub_83B7DC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DC98"))) PPC_WEAK_FUNC(sub_83B7DC98);
PPC_FUNC_IMPL(__imp__sub_83B7DC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31296
	ctx.r3.s64 = ctx.r11.s64 + -31296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DCA4"))) PPC_WEAK_FUNC(sub_83B7DCA4);
PPC_FUNC_IMPL(__imp__sub_83B7DCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DCA8"))) PPC_WEAK_FUNC(sub_83B7DCA8);
PPC_FUNC_IMPL(__imp__sub_83B7DCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31288
	ctx.r3.s64 = ctx.r11.s64 + -31288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DCB4"))) PPC_WEAK_FUNC(sub_83B7DCB4);
PPC_FUNC_IMPL(__imp__sub_83B7DCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DCB8"))) PPC_WEAK_FUNC(sub_83B7DCB8);
PPC_FUNC_IMPL(__imp__sub_83B7DCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31280
	ctx.r3.s64 = ctx.r11.s64 + -31280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DCC4"))) PPC_WEAK_FUNC(sub_83B7DCC4);
PPC_FUNC_IMPL(__imp__sub_83B7DCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DCC8"))) PPC_WEAK_FUNC(sub_83B7DCC8);
PPC_FUNC_IMPL(__imp__sub_83B7DCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31272
	ctx.r3.s64 = ctx.r11.s64 + -31272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DCD4"))) PPC_WEAK_FUNC(sub_83B7DCD4);
PPC_FUNC_IMPL(__imp__sub_83B7DCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DCD8"))) PPC_WEAK_FUNC(sub_83B7DCD8);
PPC_FUNC_IMPL(__imp__sub_83B7DCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31264
	ctx.r3.s64 = ctx.r11.s64 + -31264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DCE4"))) PPC_WEAK_FUNC(sub_83B7DCE4);
PPC_FUNC_IMPL(__imp__sub_83B7DCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DCE8"))) PPC_WEAK_FUNC(sub_83B7DCE8);
PPC_FUNC_IMPL(__imp__sub_83B7DCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31256
	ctx.r3.s64 = ctx.r11.s64 + -31256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DCF4"))) PPC_WEAK_FUNC(sub_83B7DCF4);
PPC_FUNC_IMPL(__imp__sub_83B7DCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DCF8"))) PPC_WEAK_FUNC(sub_83B7DCF8);
PPC_FUNC_IMPL(__imp__sub_83B7DCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13940
	ctx.r7.s64 = ctx.r8.s64 + -13940;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13940(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13940);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13940(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13940, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7DD20"))) PPC_WEAK_FUNC(sub_83B7DD20);
PPC_FUNC_IMPL(__imp__sub_83B7DD20) {
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
	// addi r3,r11,-13944
	ctx.r3.s64 = ctx.r11.s64 + -13944;
	// bl 0x83523120
	ctx.lr = 0x83B7DD38;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-31248
	ctx.r3.s64 = ctx.r10.s64 + -31248;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7DD44;
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

__attribute__((alias("__imp__sub_83B7DD54"))) PPC_WEAK_FUNC(sub_83B7DD54);
PPC_FUNC_IMPL(__imp__sub_83B7DD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DD58"))) PPC_WEAK_FUNC(sub_83B7DD58);
PPC_FUNC_IMPL(__imp__sub_83B7DD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31232
	ctx.r3.s64 = ctx.r11.s64 + -31232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DD64"))) PPC_WEAK_FUNC(sub_83B7DD64);
PPC_FUNC_IMPL(__imp__sub_83B7DD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DD68"))) PPC_WEAK_FUNC(sub_83B7DD68);
PPC_FUNC_IMPL(__imp__sub_83B7DD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31224
	ctx.r3.s64 = ctx.r11.s64 + -31224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DD74"))) PPC_WEAK_FUNC(sub_83B7DD74);
PPC_FUNC_IMPL(__imp__sub_83B7DD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DD78"))) PPC_WEAK_FUNC(sub_83B7DD78);
PPC_FUNC_IMPL(__imp__sub_83B7DD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31216
	ctx.r3.s64 = ctx.r11.s64 + -31216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DD84"))) PPC_WEAK_FUNC(sub_83B7DD84);
PPC_FUNC_IMPL(__imp__sub_83B7DD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DD88"))) PPC_WEAK_FUNC(sub_83B7DD88);
PPC_FUNC_IMPL(__imp__sub_83B7DD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31208
	ctx.r3.s64 = ctx.r11.s64 + -31208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DD94"))) PPC_WEAK_FUNC(sub_83B7DD94);
PPC_FUNC_IMPL(__imp__sub_83B7DD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DD98"))) PPC_WEAK_FUNC(sub_83B7DD98);
PPC_FUNC_IMPL(__imp__sub_83B7DD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31200
	ctx.r3.s64 = ctx.r11.s64 + -31200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DDA4"))) PPC_WEAK_FUNC(sub_83B7DDA4);
PPC_FUNC_IMPL(__imp__sub_83B7DDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DDA8"))) PPC_WEAK_FUNC(sub_83B7DDA8);
PPC_FUNC_IMPL(__imp__sub_83B7DDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31192
	ctx.r3.s64 = ctx.r11.s64 + -31192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DDB4"))) PPC_WEAK_FUNC(sub_83B7DDB4);
PPC_FUNC_IMPL(__imp__sub_83B7DDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DDB8"))) PPC_WEAK_FUNC(sub_83B7DDB8);
PPC_FUNC_IMPL(__imp__sub_83B7DDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31184
	ctx.r3.s64 = ctx.r11.s64 + -31184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DDC4"))) PPC_WEAK_FUNC(sub_83B7DDC4);
PPC_FUNC_IMPL(__imp__sub_83B7DDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DDC8"))) PPC_WEAK_FUNC(sub_83B7DDC8);
PPC_FUNC_IMPL(__imp__sub_83B7DDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31176
	ctx.r3.s64 = ctx.r11.s64 + -31176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DDD4"))) PPC_WEAK_FUNC(sub_83B7DDD4);
PPC_FUNC_IMPL(__imp__sub_83B7DDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DDD8"))) PPC_WEAK_FUNC(sub_83B7DDD8);
PPC_FUNC_IMPL(__imp__sub_83B7DDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31168
	ctx.r3.s64 = ctx.r11.s64 + -31168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DDE4"))) PPC_WEAK_FUNC(sub_83B7DDE4);
PPC_FUNC_IMPL(__imp__sub_83B7DDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DDE8"))) PPC_WEAK_FUNC(sub_83B7DDE8);
PPC_FUNC_IMPL(__imp__sub_83B7DDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31160
	ctx.r3.s64 = ctx.r11.s64 + -31160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DDF4"))) PPC_WEAK_FUNC(sub_83B7DDF4);
PPC_FUNC_IMPL(__imp__sub_83B7DDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DDF8"))) PPC_WEAK_FUNC(sub_83B7DDF8);
PPC_FUNC_IMPL(__imp__sub_83B7DDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31152
	ctx.r3.s64 = ctx.r11.s64 + -31152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DE04"))) PPC_WEAK_FUNC(sub_83B7DE04);
PPC_FUNC_IMPL(__imp__sub_83B7DE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DE08"))) PPC_WEAK_FUNC(sub_83B7DE08);
PPC_FUNC_IMPL(__imp__sub_83B7DE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31144
	ctx.r3.s64 = ctx.r11.s64 + -31144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DE14"))) PPC_WEAK_FUNC(sub_83B7DE14);
PPC_FUNC_IMPL(__imp__sub_83B7DE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DE18"))) PPC_WEAK_FUNC(sub_83B7DE18);
PPC_FUNC_IMPL(__imp__sub_83B7DE18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13928
	ctx.r7.s64 = ctx.r8.s64 + -13928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13928(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13928);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13928(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13928, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7DE40"))) PPC_WEAK_FUNC(sub_83B7DE40);
PPC_FUNC_IMPL(__imp__sub_83B7DE40) {
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
	// addi r3,r11,-13932
	ctx.r3.s64 = ctx.r11.s64 + -13932;
	// bl 0x83523120
	ctx.lr = 0x83B7DE58;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-31136
	ctx.r3.s64 = ctx.r10.s64 + -31136;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7DE64;
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

__attribute__((alias("__imp__sub_83B7DE74"))) PPC_WEAK_FUNC(sub_83B7DE74);
PPC_FUNC_IMPL(__imp__sub_83B7DE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DE78"))) PPC_WEAK_FUNC(sub_83B7DE78);
PPC_FUNC_IMPL(__imp__sub_83B7DE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31120
	ctx.r3.s64 = ctx.r11.s64 + -31120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DE84"))) PPC_WEAK_FUNC(sub_83B7DE84);
PPC_FUNC_IMPL(__imp__sub_83B7DE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DE88"))) PPC_WEAK_FUNC(sub_83B7DE88);
PPC_FUNC_IMPL(__imp__sub_83B7DE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31112
	ctx.r3.s64 = ctx.r11.s64 + -31112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DE94"))) PPC_WEAK_FUNC(sub_83B7DE94);
PPC_FUNC_IMPL(__imp__sub_83B7DE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DE98"))) PPC_WEAK_FUNC(sub_83B7DE98);
PPC_FUNC_IMPL(__imp__sub_83B7DE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31104
	ctx.r3.s64 = ctx.r11.s64 + -31104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DEA4"))) PPC_WEAK_FUNC(sub_83B7DEA4);
PPC_FUNC_IMPL(__imp__sub_83B7DEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DEA8"))) PPC_WEAK_FUNC(sub_83B7DEA8);
PPC_FUNC_IMPL(__imp__sub_83B7DEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31096
	ctx.r3.s64 = ctx.r11.s64 + -31096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DEB4"))) PPC_WEAK_FUNC(sub_83B7DEB4);
PPC_FUNC_IMPL(__imp__sub_83B7DEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DEB8"))) PPC_WEAK_FUNC(sub_83B7DEB8);
PPC_FUNC_IMPL(__imp__sub_83B7DEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31088
	ctx.r3.s64 = ctx.r11.s64 + -31088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DEC4"))) PPC_WEAK_FUNC(sub_83B7DEC4);
PPC_FUNC_IMPL(__imp__sub_83B7DEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DEC8"))) PPC_WEAK_FUNC(sub_83B7DEC8);
PPC_FUNC_IMPL(__imp__sub_83B7DEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31080
	ctx.r3.s64 = ctx.r11.s64 + -31080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DED4"))) PPC_WEAK_FUNC(sub_83B7DED4);
PPC_FUNC_IMPL(__imp__sub_83B7DED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DED8"))) PPC_WEAK_FUNC(sub_83B7DED8);
PPC_FUNC_IMPL(__imp__sub_83B7DED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31072
	ctx.r3.s64 = ctx.r11.s64 + -31072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DEE4"))) PPC_WEAK_FUNC(sub_83B7DEE4);
PPC_FUNC_IMPL(__imp__sub_83B7DEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DEE8"))) PPC_WEAK_FUNC(sub_83B7DEE8);
PPC_FUNC_IMPL(__imp__sub_83B7DEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31064
	ctx.r3.s64 = ctx.r11.s64 + -31064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DEF4"))) PPC_WEAK_FUNC(sub_83B7DEF4);
PPC_FUNC_IMPL(__imp__sub_83B7DEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DEF8"))) PPC_WEAK_FUNC(sub_83B7DEF8);
PPC_FUNC_IMPL(__imp__sub_83B7DEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31056
	ctx.r3.s64 = ctx.r11.s64 + -31056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DF04"))) PPC_WEAK_FUNC(sub_83B7DF04);
PPC_FUNC_IMPL(__imp__sub_83B7DF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DF08"))) PPC_WEAK_FUNC(sub_83B7DF08);
PPC_FUNC_IMPL(__imp__sub_83B7DF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31048
	ctx.r3.s64 = ctx.r11.s64 + -31048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DF14"))) PPC_WEAK_FUNC(sub_83B7DF14);
PPC_FUNC_IMPL(__imp__sub_83B7DF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DF18"))) PPC_WEAK_FUNC(sub_83B7DF18);
PPC_FUNC_IMPL(__imp__sub_83B7DF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31040
	ctx.r3.s64 = ctx.r11.s64 + -31040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DF24"))) PPC_WEAK_FUNC(sub_83B7DF24);
PPC_FUNC_IMPL(__imp__sub_83B7DF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DF28"))) PPC_WEAK_FUNC(sub_83B7DF28);
PPC_FUNC_IMPL(__imp__sub_83B7DF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31032
	ctx.r3.s64 = ctx.r11.s64 + -31032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DF34"))) PPC_WEAK_FUNC(sub_83B7DF34);
PPC_FUNC_IMPL(__imp__sub_83B7DF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DF38"))) PPC_WEAK_FUNC(sub_83B7DF38);
PPC_FUNC_IMPL(__imp__sub_83B7DF38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13916
	ctx.r7.s64 = ctx.r8.s64 + -13916;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13916(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13916);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13916(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13916, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7DF60"))) PPC_WEAK_FUNC(sub_83B7DF60);
PPC_FUNC_IMPL(__imp__sub_83B7DF60) {
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
	// addi r3,r11,-13920
	ctx.r3.s64 = ctx.r11.s64 + -13920;
	// bl 0x83523120
	ctx.lr = 0x83B7DF78;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-31024
	ctx.r3.s64 = ctx.r10.s64 + -31024;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7DF84;
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

__attribute__((alias("__imp__sub_83B7DF94"))) PPC_WEAK_FUNC(sub_83B7DF94);
PPC_FUNC_IMPL(__imp__sub_83B7DF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DF98"))) PPC_WEAK_FUNC(sub_83B7DF98);
PPC_FUNC_IMPL(__imp__sub_83B7DF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31008
	ctx.r3.s64 = ctx.r11.s64 + -31008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DFA4"))) PPC_WEAK_FUNC(sub_83B7DFA4);
PPC_FUNC_IMPL(__imp__sub_83B7DFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DFA8"))) PPC_WEAK_FUNC(sub_83B7DFA8);
PPC_FUNC_IMPL(__imp__sub_83B7DFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-31000
	ctx.r3.s64 = ctx.r11.s64 + -31000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DFB4"))) PPC_WEAK_FUNC(sub_83B7DFB4);
PPC_FUNC_IMPL(__imp__sub_83B7DFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DFB8"))) PPC_WEAK_FUNC(sub_83B7DFB8);
PPC_FUNC_IMPL(__imp__sub_83B7DFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30992
	ctx.r3.s64 = ctx.r11.s64 + -30992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DFC4"))) PPC_WEAK_FUNC(sub_83B7DFC4);
PPC_FUNC_IMPL(__imp__sub_83B7DFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DFC8"))) PPC_WEAK_FUNC(sub_83B7DFC8);
PPC_FUNC_IMPL(__imp__sub_83B7DFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30984
	ctx.r3.s64 = ctx.r11.s64 + -30984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DFD4"))) PPC_WEAK_FUNC(sub_83B7DFD4);
PPC_FUNC_IMPL(__imp__sub_83B7DFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DFD8"))) PPC_WEAK_FUNC(sub_83B7DFD8);
PPC_FUNC_IMPL(__imp__sub_83B7DFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30976
	ctx.r3.s64 = ctx.r11.s64 + -30976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DFE4"))) PPC_WEAK_FUNC(sub_83B7DFE4);
PPC_FUNC_IMPL(__imp__sub_83B7DFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DFE8"))) PPC_WEAK_FUNC(sub_83B7DFE8);
PPC_FUNC_IMPL(__imp__sub_83B7DFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30968
	ctx.r3.s64 = ctx.r11.s64 + -30968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7DFF4"))) PPC_WEAK_FUNC(sub_83B7DFF4);
PPC_FUNC_IMPL(__imp__sub_83B7DFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7DFF8"))) PPC_WEAK_FUNC(sub_83B7DFF8);
PPC_FUNC_IMPL(__imp__sub_83B7DFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30960
	ctx.r3.s64 = ctx.r11.s64 + -30960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E004"))) PPC_WEAK_FUNC(sub_83B7E004);
PPC_FUNC_IMPL(__imp__sub_83B7E004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E008"))) PPC_WEAK_FUNC(sub_83B7E008);
PPC_FUNC_IMPL(__imp__sub_83B7E008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30952
	ctx.r3.s64 = ctx.r11.s64 + -30952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E014"))) PPC_WEAK_FUNC(sub_83B7E014);
PPC_FUNC_IMPL(__imp__sub_83B7E014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E018"))) PPC_WEAK_FUNC(sub_83B7E018);
PPC_FUNC_IMPL(__imp__sub_83B7E018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30944
	ctx.r3.s64 = ctx.r11.s64 + -30944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E024"))) PPC_WEAK_FUNC(sub_83B7E024);
PPC_FUNC_IMPL(__imp__sub_83B7E024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E028"))) PPC_WEAK_FUNC(sub_83B7E028);
PPC_FUNC_IMPL(__imp__sub_83B7E028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30936
	ctx.r3.s64 = ctx.r11.s64 + -30936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E034"))) PPC_WEAK_FUNC(sub_83B7E034);
PPC_FUNC_IMPL(__imp__sub_83B7E034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E038"))) PPC_WEAK_FUNC(sub_83B7E038);
PPC_FUNC_IMPL(__imp__sub_83B7E038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30928
	ctx.r3.s64 = ctx.r11.s64 + -30928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E044"))) PPC_WEAK_FUNC(sub_83B7E044);
PPC_FUNC_IMPL(__imp__sub_83B7E044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E048"))) PPC_WEAK_FUNC(sub_83B7E048);
PPC_FUNC_IMPL(__imp__sub_83B7E048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30920
	ctx.r3.s64 = ctx.r11.s64 + -30920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E054"))) PPC_WEAK_FUNC(sub_83B7E054);
PPC_FUNC_IMPL(__imp__sub_83B7E054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E058"))) PPC_WEAK_FUNC(sub_83B7E058);
PPC_FUNC_IMPL(__imp__sub_83B7E058) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13896
	ctx.r7.s64 = ctx.r8.s64 + -13896;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13896);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13896(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13896, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7E080"))) PPC_WEAK_FUNC(sub_83B7E080);
PPC_FUNC_IMPL(__imp__sub_83B7E080) {
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
	// addi r3,r11,-13900
	ctx.r3.s64 = ctx.r11.s64 + -13900;
	// bl 0x83523120
	ctx.lr = 0x83B7E098;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-30912
	ctx.r3.s64 = ctx.r10.s64 + -30912;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7E0A4;
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

__attribute__((alias("__imp__sub_83B7E0B4"))) PPC_WEAK_FUNC(sub_83B7E0B4);
PPC_FUNC_IMPL(__imp__sub_83B7E0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E0B8"))) PPC_WEAK_FUNC(sub_83B7E0B8);
PPC_FUNC_IMPL(__imp__sub_83B7E0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30896
	ctx.r3.s64 = ctx.r11.s64 + -30896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E0C4"))) PPC_WEAK_FUNC(sub_83B7E0C4);
PPC_FUNC_IMPL(__imp__sub_83B7E0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E0C8"))) PPC_WEAK_FUNC(sub_83B7E0C8);
PPC_FUNC_IMPL(__imp__sub_83B7E0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30888
	ctx.r3.s64 = ctx.r11.s64 + -30888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E0D4"))) PPC_WEAK_FUNC(sub_83B7E0D4);
PPC_FUNC_IMPL(__imp__sub_83B7E0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E0D8"))) PPC_WEAK_FUNC(sub_83B7E0D8);
PPC_FUNC_IMPL(__imp__sub_83B7E0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30880
	ctx.r3.s64 = ctx.r11.s64 + -30880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E0E4"))) PPC_WEAK_FUNC(sub_83B7E0E4);
PPC_FUNC_IMPL(__imp__sub_83B7E0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E0E8"))) PPC_WEAK_FUNC(sub_83B7E0E8);
PPC_FUNC_IMPL(__imp__sub_83B7E0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30872
	ctx.r3.s64 = ctx.r11.s64 + -30872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E0F4"))) PPC_WEAK_FUNC(sub_83B7E0F4);
PPC_FUNC_IMPL(__imp__sub_83B7E0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E0F8"))) PPC_WEAK_FUNC(sub_83B7E0F8);
PPC_FUNC_IMPL(__imp__sub_83B7E0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30864
	ctx.r3.s64 = ctx.r11.s64 + -30864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E104"))) PPC_WEAK_FUNC(sub_83B7E104);
PPC_FUNC_IMPL(__imp__sub_83B7E104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E108"))) PPC_WEAK_FUNC(sub_83B7E108);
PPC_FUNC_IMPL(__imp__sub_83B7E108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30856
	ctx.r3.s64 = ctx.r11.s64 + -30856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E114"))) PPC_WEAK_FUNC(sub_83B7E114);
PPC_FUNC_IMPL(__imp__sub_83B7E114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E118"))) PPC_WEAK_FUNC(sub_83B7E118);
PPC_FUNC_IMPL(__imp__sub_83B7E118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30848
	ctx.r3.s64 = ctx.r11.s64 + -30848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E124"))) PPC_WEAK_FUNC(sub_83B7E124);
PPC_FUNC_IMPL(__imp__sub_83B7E124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E128"))) PPC_WEAK_FUNC(sub_83B7E128);
PPC_FUNC_IMPL(__imp__sub_83B7E128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30840
	ctx.r3.s64 = ctx.r11.s64 + -30840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E134"))) PPC_WEAK_FUNC(sub_83B7E134);
PPC_FUNC_IMPL(__imp__sub_83B7E134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E138"))) PPC_WEAK_FUNC(sub_83B7E138);
PPC_FUNC_IMPL(__imp__sub_83B7E138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30832
	ctx.r3.s64 = ctx.r11.s64 + -30832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E144"))) PPC_WEAK_FUNC(sub_83B7E144);
PPC_FUNC_IMPL(__imp__sub_83B7E144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E148"))) PPC_WEAK_FUNC(sub_83B7E148);
PPC_FUNC_IMPL(__imp__sub_83B7E148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30824
	ctx.r3.s64 = ctx.r11.s64 + -30824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E154"))) PPC_WEAK_FUNC(sub_83B7E154);
PPC_FUNC_IMPL(__imp__sub_83B7E154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E158"))) PPC_WEAK_FUNC(sub_83B7E158);
PPC_FUNC_IMPL(__imp__sub_83B7E158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30816
	ctx.r3.s64 = ctx.r11.s64 + -30816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E164"))) PPC_WEAK_FUNC(sub_83B7E164);
PPC_FUNC_IMPL(__imp__sub_83B7E164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E168"))) PPC_WEAK_FUNC(sub_83B7E168);
PPC_FUNC_IMPL(__imp__sub_83B7E168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30808
	ctx.r3.s64 = ctx.r11.s64 + -30808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E174"))) PPC_WEAK_FUNC(sub_83B7E174);
PPC_FUNC_IMPL(__imp__sub_83B7E174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E178"))) PPC_WEAK_FUNC(sub_83B7E178);
PPC_FUNC_IMPL(__imp__sub_83B7E178) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13884
	ctx.r7.s64 = ctx.r8.s64 + -13884;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13884(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13884);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13884(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13884, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7E1A0"))) PPC_WEAK_FUNC(sub_83B7E1A0);
PPC_FUNC_IMPL(__imp__sub_83B7E1A0) {
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
	// addi r3,r11,-13888
	ctx.r3.s64 = ctx.r11.s64 + -13888;
	// bl 0x83523120
	ctx.lr = 0x83B7E1B8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-30800
	ctx.r3.s64 = ctx.r10.s64 + -30800;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7E1C4;
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

__attribute__((alias("__imp__sub_83B7E1D4"))) PPC_WEAK_FUNC(sub_83B7E1D4);
PPC_FUNC_IMPL(__imp__sub_83B7E1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E1D8"))) PPC_WEAK_FUNC(sub_83B7E1D8);
PPC_FUNC_IMPL(__imp__sub_83B7E1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30784
	ctx.r3.s64 = ctx.r11.s64 + -30784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E1E4"))) PPC_WEAK_FUNC(sub_83B7E1E4);
PPC_FUNC_IMPL(__imp__sub_83B7E1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E1E8"))) PPC_WEAK_FUNC(sub_83B7E1E8);
PPC_FUNC_IMPL(__imp__sub_83B7E1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30776
	ctx.r3.s64 = ctx.r11.s64 + -30776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E1F4"))) PPC_WEAK_FUNC(sub_83B7E1F4);
PPC_FUNC_IMPL(__imp__sub_83B7E1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E1F8"))) PPC_WEAK_FUNC(sub_83B7E1F8);
PPC_FUNC_IMPL(__imp__sub_83B7E1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30768
	ctx.r3.s64 = ctx.r11.s64 + -30768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E204"))) PPC_WEAK_FUNC(sub_83B7E204);
PPC_FUNC_IMPL(__imp__sub_83B7E204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E208"))) PPC_WEAK_FUNC(sub_83B7E208);
PPC_FUNC_IMPL(__imp__sub_83B7E208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30760
	ctx.r3.s64 = ctx.r11.s64 + -30760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E214"))) PPC_WEAK_FUNC(sub_83B7E214);
PPC_FUNC_IMPL(__imp__sub_83B7E214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E218"))) PPC_WEAK_FUNC(sub_83B7E218);
PPC_FUNC_IMPL(__imp__sub_83B7E218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30752
	ctx.r3.s64 = ctx.r11.s64 + -30752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E224"))) PPC_WEAK_FUNC(sub_83B7E224);
PPC_FUNC_IMPL(__imp__sub_83B7E224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E228"))) PPC_WEAK_FUNC(sub_83B7E228);
PPC_FUNC_IMPL(__imp__sub_83B7E228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30744
	ctx.r3.s64 = ctx.r11.s64 + -30744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E234"))) PPC_WEAK_FUNC(sub_83B7E234);
PPC_FUNC_IMPL(__imp__sub_83B7E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E238"))) PPC_WEAK_FUNC(sub_83B7E238);
PPC_FUNC_IMPL(__imp__sub_83B7E238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30736
	ctx.r3.s64 = ctx.r11.s64 + -30736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E244"))) PPC_WEAK_FUNC(sub_83B7E244);
PPC_FUNC_IMPL(__imp__sub_83B7E244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E248"))) PPC_WEAK_FUNC(sub_83B7E248);
PPC_FUNC_IMPL(__imp__sub_83B7E248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30728
	ctx.r3.s64 = ctx.r11.s64 + -30728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E254"))) PPC_WEAK_FUNC(sub_83B7E254);
PPC_FUNC_IMPL(__imp__sub_83B7E254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E258"))) PPC_WEAK_FUNC(sub_83B7E258);
PPC_FUNC_IMPL(__imp__sub_83B7E258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30720
	ctx.r3.s64 = ctx.r11.s64 + -30720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E264"))) PPC_WEAK_FUNC(sub_83B7E264);
PPC_FUNC_IMPL(__imp__sub_83B7E264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E268"))) PPC_WEAK_FUNC(sub_83B7E268);
PPC_FUNC_IMPL(__imp__sub_83B7E268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30712
	ctx.r3.s64 = ctx.r11.s64 + -30712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E274"))) PPC_WEAK_FUNC(sub_83B7E274);
PPC_FUNC_IMPL(__imp__sub_83B7E274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E278"))) PPC_WEAK_FUNC(sub_83B7E278);
PPC_FUNC_IMPL(__imp__sub_83B7E278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30704
	ctx.r3.s64 = ctx.r11.s64 + -30704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E284"))) PPC_WEAK_FUNC(sub_83B7E284);
PPC_FUNC_IMPL(__imp__sub_83B7E284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E288"))) PPC_WEAK_FUNC(sub_83B7E288);
PPC_FUNC_IMPL(__imp__sub_83B7E288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30696
	ctx.r3.s64 = ctx.r11.s64 + -30696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E294"))) PPC_WEAK_FUNC(sub_83B7E294);
PPC_FUNC_IMPL(__imp__sub_83B7E294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E298"))) PPC_WEAK_FUNC(sub_83B7E298);
PPC_FUNC_IMPL(__imp__sub_83B7E298) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13820
	ctx.r7.s64 = ctx.r8.s64 + -13820;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13820(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13820);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13820(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13820, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7E2C0"))) PPC_WEAK_FUNC(sub_83B7E2C0);
PPC_FUNC_IMPL(__imp__sub_83B7E2C0) {
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
	// addi r3,r11,-13824
	ctx.r3.s64 = ctx.r11.s64 + -13824;
	// bl 0x83523120
	ctx.lr = 0x83B7E2D8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-30688
	ctx.r3.s64 = ctx.r10.s64 + -30688;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7E2E4;
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

__attribute__((alias("__imp__sub_83B7E2F4"))) PPC_WEAK_FUNC(sub_83B7E2F4);
PPC_FUNC_IMPL(__imp__sub_83B7E2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E2F8"))) PPC_WEAK_FUNC(sub_83B7E2F8);
PPC_FUNC_IMPL(__imp__sub_83B7E2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30672
	ctx.r3.s64 = ctx.r11.s64 + -30672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E304"))) PPC_WEAK_FUNC(sub_83B7E304);
PPC_FUNC_IMPL(__imp__sub_83B7E304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E308"))) PPC_WEAK_FUNC(sub_83B7E308);
PPC_FUNC_IMPL(__imp__sub_83B7E308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30664
	ctx.r3.s64 = ctx.r11.s64 + -30664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E314"))) PPC_WEAK_FUNC(sub_83B7E314);
PPC_FUNC_IMPL(__imp__sub_83B7E314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E318"))) PPC_WEAK_FUNC(sub_83B7E318);
PPC_FUNC_IMPL(__imp__sub_83B7E318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30656
	ctx.r3.s64 = ctx.r11.s64 + -30656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E324"))) PPC_WEAK_FUNC(sub_83B7E324);
PPC_FUNC_IMPL(__imp__sub_83B7E324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E328"))) PPC_WEAK_FUNC(sub_83B7E328);
PPC_FUNC_IMPL(__imp__sub_83B7E328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30648
	ctx.r3.s64 = ctx.r11.s64 + -30648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E334"))) PPC_WEAK_FUNC(sub_83B7E334);
PPC_FUNC_IMPL(__imp__sub_83B7E334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E338"))) PPC_WEAK_FUNC(sub_83B7E338);
PPC_FUNC_IMPL(__imp__sub_83B7E338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30640
	ctx.r3.s64 = ctx.r11.s64 + -30640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E344"))) PPC_WEAK_FUNC(sub_83B7E344);
PPC_FUNC_IMPL(__imp__sub_83B7E344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E348"))) PPC_WEAK_FUNC(sub_83B7E348);
PPC_FUNC_IMPL(__imp__sub_83B7E348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30632
	ctx.r3.s64 = ctx.r11.s64 + -30632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E354"))) PPC_WEAK_FUNC(sub_83B7E354);
PPC_FUNC_IMPL(__imp__sub_83B7E354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E358"))) PPC_WEAK_FUNC(sub_83B7E358);
PPC_FUNC_IMPL(__imp__sub_83B7E358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30624
	ctx.r3.s64 = ctx.r11.s64 + -30624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E364"))) PPC_WEAK_FUNC(sub_83B7E364);
PPC_FUNC_IMPL(__imp__sub_83B7E364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E368"))) PPC_WEAK_FUNC(sub_83B7E368);
PPC_FUNC_IMPL(__imp__sub_83B7E368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30616
	ctx.r3.s64 = ctx.r11.s64 + -30616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E374"))) PPC_WEAK_FUNC(sub_83B7E374);
PPC_FUNC_IMPL(__imp__sub_83B7E374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E378"))) PPC_WEAK_FUNC(sub_83B7E378);
PPC_FUNC_IMPL(__imp__sub_83B7E378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30608
	ctx.r3.s64 = ctx.r11.s64 + -30608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E384"))) PPC_WEAK_FUNC(sub_83B7E384);
PPC_FUNC_IMPL(__imp__sub_83B7E384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E388"))) PPC_WEAK_FUNC(sub_83B7E388);
PPC_FUNC_IMPL(__imp__sub_83B7E388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30600
	ctx.r3.s64 = ctx.r11.s64 + -30600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E394"))) PPC_WEAK_FUNC(sub_83B7E394);
PPC_FUNC_IMPL(__imp__sub_83B7E394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E398"))) PPC_WEAK_FUNC(sub_83B7E398);
PPC_FUNC_IMPL(__imp__sub_83B7E398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30592
	ctx.r3.s64 = ctx.r11.s64 + -30592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E3A4"))) PPC_WEAK_FUNC(sub_83B7E3A4);
PPC_FUNC_IMPL(__imp__sub_83B7E3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E3A8"))) PPC_WEAK_FUNC(sub_83B7E3A8);
PPC_FUNC_IMPL(__imp__sub_83B7E3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30584
	ctx.r3.s64 = ctx.r11.s64 + -30584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E3B4"))) PPC_WEAK_FUNC(sub_83B7E3B4);
PPC_FUNC_IMPL(__imp__sub_83B7E3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E3B8"))) PPC_WEAK_FUNC(sub_83B7E3B8);
PPC_FUNC_IMPL(__imp__sub_83B7E3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13808
	ctx.r7.s64 = ctx.r8.s64 + -13808;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13808(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13808);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13808(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13808, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7E3E0"))) PPC_WEAK_FUNC(sub_83B7E3E0);
PPC_FUNC_IMPL(__imp__sub_83B7E3E0) {
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
	// addi r3,r11,-13812
	ctx.r3.s64 = ctx.r11.s64 + -13812;
	// bl 0x83523120
	ctx.lr = 0x83B7E3F8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-30576
	ctx.r3.s64 = ctx.r10.s64 + -30576;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7E404;
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

__attribute__((alias("__imp__sub_83B7E414"))) PPC_WEAK_FUNC(sub_83B7E414);
PPC_FUNC_IMPL(__imp__sub_83B7E414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E418"))) PPC_WEAK_FUNC(sub_83B7E418);
PPC_FUNC_IMPL(__imp__sub_83B7E418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30560
	ctx.r3.s64 = ctx.r11.s64 + -30560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E424"))) PPC_WEAK_FUNC(sub_83B7E424);
PPC_FUNC_IMPL(__imp__sub_83B7E424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E428"))) PPC_WEAK_FUNC(sub_83B7E428);
PPC_FUNC_IMPL(__imp__sub_83B7E428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30552
	ctx.r3.s64 = ctx.r11.s64 + -30552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E434"))) PPC_WEAK_FUNC(sub_83B7E434);
PPC_FUNC_IMPL(__imp__sub_83B7E434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E438"))) PPC_WEAK_FUNC(sub_83B7E438);
PPC_FUNC_IMPL(__imp__sub_83B7E438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30544
	ctx.r3.s64 = ctx.r11.s64 + -30544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E444"))) PPC_WEAK_FUNC(sub_83B7E444);
PPC_FUNC_IMPL(__imp__sub_83B7E444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E448"))) PPC_WEAK_FUNC(sub_83B7E448);
PPC_FUNC_IMPL(__imp__sub_83B7E448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30536
	ctx.r3.s64 = ctx.r11.s64 + -30536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E454"))) PPC_WEAK_FUNC(sub_83B7E454);
PPC_FUNC_IMPL(__imp__sub_83B7E454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E458"))) PPC_WEAK_FUNC(sub_83B7E458);
PPC_FUNC_IMPL(__imp__sub_83B7E458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30528
	ctx.r3.s64 = ctx.r11.s64 + -30528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E464"))) PPC_WEAK_FUNC(sub_83B7E464);
PPC_FUNC_IMPL(__imp__sub_83B7E464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E468"))) PPC_WEAK_FUNC(sub_83B7E468);
PPC_FUNC_IMPL(__imp__sub_83B7E468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30520
	ctx.r3.s64 = ctx.r11.s64 + -30520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E474"))) PPC_WEAK_FUNC(sub_83B7E474);
PPC_FUNC_IMPL(__imp__sub_83B7E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E478"))) PPC_WEAK_FUNC(sub_83B7E478);
PPC_FUNC_IMPL(__imp__sub_83B7E478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30512
	ctx.r3.s64 = ctx.r11.s64 + -30512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E484"))) PPC_WEAK_FUNC(sub_83B7E484);
PPC_FUNC_IMPL(__imp__sub_83B7E484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E488"))) PPC_WEAK_FUNC(sub_83B7E488);
PPC_FUNC_IMPL(__imp__sub_83B7E488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30504
	ctx.r3.s64 = ctx.r11.s64 + -30504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E494"))) PPC_WEAK_FUNC(sub_83B7E494);
PPC_FUNC_IMPL(__imp__sub_83B7E494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E498"))) PPC_WEAK_FUNC(sub_83B7E498);
PPC_FUNC_IMPL(__imp__sub_83B7E498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30496
	ctx.r3.s64 = ctx.r11.s64 + -30496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E4A4"))) PPC_WEAK_FUNC(sub_83B7E4A4);
PPC_FUNC_IMPL(__imp__sub_83B7E4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E4A8"))) PPC_WEAK_FUNC(sub_83B7E4A8);
PPC_FUNC_IMPL(__imp__sub_83B7E4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30488
	ctx.r3.s64 = ctx.r11.s64 + -30488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E4B4"))) PPC_WEAK_FUNC(sub_83B7E4B4);
PPC_FUNC_IMPL(__imp__sub_83B7E4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E4B8"))) PPC_WEAK_FUNC(sub_83B7E4B8);
PPC_FUNC_IMPL(__imp__sub_83B7E4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30480
	ctx.r3.s64 = ctx.r11.s64 + -30480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E4C4"))) PPC_WEAK_FUNC(sub_83B7E4C4);
PPC_FUNC_IMPL(__imp__sub_83B7E4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E4C8"))) PPC_WEAK_FUNC(sub_83B7E4C8);
PPC_FUNC_IMPL(__imp__sub_83B7E4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30472
	ctx.r3.s64 = ctx.r11.s64 + -30472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E4D4"))) PPC_WEAK_FUNC(sub_83B7E4D4);
PPC_FUNC_IMPL(__imp__sub_83B7E4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E4D8"))) PPC_WEAK_FUNC(sub_83B7E4D8);
PPC_FUNC_IMPL(__imp__sub_83B7E4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13796
	ctx.r7.s64 = ctx.r8.s64 + -13796;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13796(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13796);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13796(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13796, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7E500"))) PPC_WEAK_FUNC(sub_83B7E500);
PPC_FUNC_IMPL(__imp__sub_83B7E500) {
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
	// addi r3,r11,-13800
	ctx.r3.s64 = ctx.r11.s64 + -13800;
	// bl 0x83523120
	ctx.lr = 0x83B7E518;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-30464
	ctx.r3.s64 = ctx.r10.s64 + -30464;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7E524;
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

__attribute__((alias("__imp__sub_83B7E534"))) PPC_WEAK_FUNC(sub_83B7E534);
PPC_FUNC_IMPL(__imp__sub_83B7E534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E538"))) PPC_WEAK_FUNC(sub_83B7E538);
PPC_FUNC_IMPL(__imp__sub_83B7E538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30448
	ctx.r3.s64 = ctx.r11.s64 + -30448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E544"))) PPC_WEAK_FUNC(sub_83B7E544);
PPC_FUNC_IMPL(__imp__sub_83B7E544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E548"))) PPC_WEAK_FUNC(sub_83B7E548);
PPC_FUNC_IMPL(__imp__sub_83B7E548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30440
	ctx.r3.s64 = ctx.r11.s64 + -30440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E554"))) PPC_WEAK_FUNC(sub_83B7E554);
PPC_FUNC_IMPL(__imp__sub_83B7E554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E558"))) PPC_WEAK_FUNC(sub_83B7E558);
PPC_FUNC_IMPL(__imp__sub_83B7E558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30432
	ctx.r3.s64 = ctx.r11.s64 + -30432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E564"))) PPC_WEAK_FUNC(sub_83B7E564);
PPC_FUNC_IMPL(__imp__sub_83B7E564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E568"))) PPC_WEAK_FUNC(sub_83B7E568);
PPC_FUNC_IMPL(__imp__sub_83B7E568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30424
	ctx.r3.s64 = ctx.r11.s64 + -30424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E574"))) PPC_WEAK_FUNC(sub_83B7E574);
PPC_FUNC_IMPL(__imp__sub_83B7E574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E578"))) PPC_WEAK_FUNC(sub_83B7E578);
PPC_FUNC_IMPL(__imp__sub_83B7E578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30416
	ctx.r3.s64 = ctx.r11.s64 + -30416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E584"))) PPC_WEAK_FUNC(sub_83B7E584);
PPC_FUNC_IMPL(__imp__sub_83B7E584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E588"))) PPC_WEAK_FUNC(sub_83B7E588);
PPC_FUNC_IMPL(__imp__sub_83B7E588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30408
	ctx.r3.s64 = ctx.r11.s64 + -30408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E594"))) PPC_WEAK_FUNC(sub_83B7E594);
PPC_FUNC_IMPL(__imp__sub_83B7E594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E598"))) PPC_WEAK_FUNC(sub_83B7E598);
PPC_FUNC_IMPL(__imp__sub_83B7E598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30400
	ctx.r3.s64 = ctx.r11.s64 + -30400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E5A4"))) PPC_WEAK_FUNC(sub_83B7E5A4);
PPC_FUNC_IMPL(__imp__sub_83B7E5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E5A8"))) PPC_WEAK_FUNC(sub_83B7E5A8);
PPC_FUNC_IMPL(__imp__sub_83B7E5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30392
	ctx.r3.s64 = ctx.r11.s64 + -30392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E5B4"))) PPC_WEAK_FUNC(sub_83B7E5B4);
PPC_FUNC_IMPL(__imp__sub_83B7E5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E5B8"))) PPC_WEAK_FUNC(sub_83B7E5B8);
PPC_FUNC_IMPL(__imp__sub_83B7E5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30384
	ctx.r3.s64 = ctx.r11.s64 + -30384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E5C4"))) PPC_WEAK_FUNC(sub_83B7E5C4);
PPC_FUNC_IMPL(__imp__sub_83B7E5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E5C8"))) PPC_WEAK_FUNC(sub_83B7E5C8);
PPC_FUNC_IMPL(__imp__sub_83B7E5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30376
	ctx.r3.s64 = ctx.r11.s64 + -30376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E5D4"))) PPC_WEAK_FUNC(sub_83B7E5D4);
PPC_FUNC_IMPL(__imp__sub_83B7E5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E5D8"))) PPC_WEAK_FUNC(sub_83B7E5D8);
PPC_FUNC_IMPL(__imp__sub_83B7E5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30368
	ctx.r3.s64 = ctx.r11.s64 + -30368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E5E4"))) PPC_WEAK_FUNC(sub_83B7E5E4);
PPC_FUNC_IMPL(__imp__sub_83B7E5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E5E8"))) PPC_WEAK_FUNC(sub_83B7E5E8);
PPC_FUNC_IMPL(__imp__sub_83B7E5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-30360
	ctx.r3.s64 = ctx.r11.s64 + -30360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7E5F4"))) PPC_WEAK_FUNC(sub_83B7E5F4);
PPC_FUNC_IMPL(__imp__sub_83B7E5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7E5F8"))) PPC_WEAK_FUNC(sub_83B7E5F8);
PPC_FUNC_IMPL(__imp__sub_83B7E5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13784
	ctx.r7.s64 = ctx.r8.s64 + -13784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13784);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13784(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13784, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7E620"))) PPC_WEAK_FUNC(sub_83B7E620);
PPC_FUNC_IMPL(__imp__sub_83B7E620) {
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
	// addi r3,r11,-13788
	ctx.r3.s64 = ctx.r11.s64 + -13788;
	// bl 0x83523120
	ctx.lr = 0x83B7E638;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-30352
	ctx.r3.s64 = ctx.r10.s64 + -30352;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7E644;
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

