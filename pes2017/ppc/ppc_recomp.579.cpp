#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B95E88"))) PPC_WEAK_FUNC(sub_83B95E88);
PPC_FUNC_IMPL(__imp__sub_83B95E88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5292
	ctx.r7.s64 = ctx.r8.s64 + -5292;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5292(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5292);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5292(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5292, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B95EB0"))) PPC_WEAK_FUNC(sub_83B95EB0);
PPC_FUNC_IMPL(__imp__sub_83B95EB0) {
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
	// addi r3,r11,-5296
	ctx.r3.s64 = ctx.r11.s64 + -5296;
	// bl 0x83523120
	ctx.lr = 0x83B95EC8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,5168
	ctx.r3.s64 = ctx.r10.s64 + 5168;
	// bl 0x831cdcc8
	ctx.lr = 0x83B95ED4;
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

__attribute__((alias("__imp__sub_83B95EE4"))) PPC_WEAK_FUNC(sub_83B95EE4);
PPC_FUNC_IMPL(__imp__sub_83B95EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95EE8"))) PPC_WEAK_FUNC(sub_83B95EE8);
PPC_FUNC_IMPL(__imp__sub_83B95EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5184
	ctx.r3.s64 = ctx.r11.s64 + 5184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95EF4"))) PPC_WEAK_FUNC(sub_83B95EF4);
PPC_FUNC_IMPL(__imp__sub_83B95EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95EF8"))) PPC_WEAK_FUNC(sub_83B95EF8);
PPC_FUNC_IMPL(__imp__sub_83B95EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5192
	ctx.r3.s64 = ctx.r11.s64 + 5192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95F04"))) PPC_WEAK_FUNC(sub_83B95F04);
PPC_FUNC_IMPL(__imp__sub_83B95F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95F08"))) PPC_WEAK_FUNC(sub_83B95F08);
PPC_FUNC_IMPL(__imp__sub_83B95F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5200
	ctx.r3.s64 = ctx.r11.s64 + 5200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95F14"))) PPC_WEAK_FUNC(sub_83B95F14);
PPC_FUNC_IMPL(__imp__sub_83B95F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95F18"))) PPC_WEAK_FUNC(sub_83B95F18);
PPC_FUNC_IMPL(__imp__sub_83B95F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5208
	ctx.r3.s64 = ctx.r11.s64 + 5208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95F24"))) PPC_WEAK_FUNC(sub_83B95F24);
PPC_FUNC_IMPL(__imp__sub_83B95F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95F28"))) PPC_WEAK_FUNC(sub_83B95F28);
PPC_FUNC_IMPL(__imp__sub_83B95F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5216
	ctx.r3.s64 = ctx.r11.s64 + 5216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95F34"))) PPC_WEAK_FUNC(sub_83B95F34);
PPC_FUNC_IMPL(__imp__sub_83B95F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95F38"))) PPC_WEAK_FUNC(sub_83B95F38);
PPC_FUNC_IMPL(__imp__sub_83B95F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5224
	ctx.r3.s64 = ctx.r11.s64 + 5224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95F44"))) PPC_WEAK_FUNC(sub_83B95F44);
PPC_FUNC_IMPL(__imp__sub_83B95F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95F48"))) PPC_WEAK_FUNC(sub_83B95F48);
PPC_FUNC_IMPL(__imp__sub_83B95F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5232
	ctx.r3.s64 = ctx.r11.s64 + 5232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95F54"))) PPC_WEAK_FUNC(sub_83B95F54);
PPC_FUNC_IMPL(__imp__sub_83B95F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95F58"))) PPC_WEAK_FUNC(sub_83B95F58);
PPC_FUNC_IMPL(__imp__sub_83B95F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5240
	ctx.r3.s64 = ctx.r11.s64 + 5240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95F64"))) PPC_WEAK_FUNC(sub_83B95F64);
PPC_FUNC_IMPL(__imp__sub_83B95F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95F68"))) PPC_WEAK_FUNC(sub_83B95F68);
PPC_FUNC_IMPL(__imp__sub_83B95F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5248
	ctx.r3.s64 = ctx.r11.s64 + 5248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95F74"))) PPC_WEAK_FUNC(sub_83B95F74);
PPC_FUNC_IMPL(__imp__sub_83B95F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95F78"))) PPC_WEAK_FUNC(sub_83B95F78);
PPC_FUNC_IMPL(__imp__sub_83B95F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5256
	ctx.r3.s64 = ctx.r11.s64 + 5256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95F84"))) PPC_WEAK_FUNC(sub_83B95F84);
PPC_FUNC_IMPL(__imp__sub_83B95F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95F88"))) PPC_WEAK_FUNC(sub_83B95F88);
PPC_FUNC_IMPL(__imp__sub_83B95F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5264
	ctx.r3.s64 = ctx.r11.s64 + 5264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95F94"))) PPC_WEAK_FUNC(sub_83B95F94);
PPC_FUNC_IMPL(__imp__sub_83B95F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95F98"))) PPC_WEAK_FUNC(sub_83B95F98);
PPC_FUNC_IMPL(__imp__sub_83B95F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5272
	ctx.r3.s64 = ctx.r11.s64 + 5272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95FA4"))) PPC_WEAK_FUNC(sub_83B95FA4);
PPC_FUNC_IMPL(__imp__sub_83B95FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95FA8"))) PPC_WEAK_FUNC(sub_83B95FA8);
PPC_FUNC_IMPL(__imp__sub_83B95FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5280
	ctx.r7.s64 = ctx.r8.s64 + -5280;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5280(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5280);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5280(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5280, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B95FD0"))) PPC_WEAK_FUNC(sub_83B95FD0);
PPC_FUNC_IMPL(__imp__sub_83B95FD0) {
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
	// addi r3,r11,-5284
	ctx.r3.s64 = ctx.r11.s64 + -5284;
	// bl 0x83523120
	ctx.lr = 0x83B95FE8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,5280
	ctx.r3.s64 = ctx.r10.s64 + 5280;
	// bl 0x831cdcc8
	ctx.lr = 0x83B95FF4;
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

__attribute__((alias("__imp__sub_83B96004"))) PPC_WEAK_FUNC(sub_83B96004);
PPC_FUNC_IMPL(__imp__sub_83B96004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96008"))) PPC_WEAK_FUNC(sub_83B96008);
PPC_FUNC_IMPL(__imp__sub_83B96008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5296
	ctx.r3.s64 = ctx.r11.s64 + 5296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96014"))) PPC_WEAK_FUNC(sub_83B96014);
PPC_FUNC_IMPL(__imp__sub_83B96014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96018"))) PPC_WEAK_FUNC(sub_83B96018);
PPC_FUNC_IMPL(__imp__sub_83B96018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5304
	ctx.r3.s64 = ctx.r11.s64 + 5304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96024"))) PPC_WEAK_FUNC(sub_83B96024);
PPC_FUNC_IMPL(__imp__sub_83B96024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96028"))) PPC_WEAK_FUNC(sub_83B96028);
PPC_FUNC_IMPL(__imp__sub_83B96028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5312
	ctx.r3.s64 = ctx.r11.s64 + 5312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96034"))) PPC_WEAK_FUNC(sub_83B96034);
PPC_FUNC_IMPL(__imp__sub_83B96034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96038"))) PPC_WEAK_FUNC(sub_83B96038);
PPC_FUNC_IMPL(__imp__sub_83B96038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5320
	ctx.r3.s64 = ctx.r11.s64 + 5320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96044"))) PPC_WEAK_FUNC(sub_83B96044);
PPC_FUNC_IMPL(__imp__sub_83B96044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96048"))) PPC_WEAK_FUNC(sub_83B96048);
PPC_FUNC_IMPL(__imp__sub_83B96048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5328
	ctx.r3.s64 = ctx.r11.s64 + 5328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96054"))) PPC_WEAK_FUNC(sub_83B96054);
PPC_FUNC_IMPL(__imp__sub_83B96054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96058"))) PPC_WEAK_FUNC(sub_83B96058);
PPC_FUNC_IMPL(__imp__sub_83B96058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5336
	ctx.r3.s64 = ctx.r11.s64 + 5336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96064"))) PPC_WEAK_FUNC(sub_83B96064);
PPC_FUNC_IMPL(__imp__sub_83B96064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96068"))) PPC_WEAK_FUNC(sub_83B96068);
PPC_FUNC_IMPL(__imp__sub_83B96068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5344
	ctx.r3.s64 = ctx.r11.s64 + 5344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96074"))) PPC_WEAK_FUNC(sub_83B96074);
PPC_FUNC_IMPL(__imp__sub_83B96074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96078"))) PPC_WEAK_FUNC(sub_83B96078);
PPC_FUNC_IMPL(__imp__sub_83B96078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5352
	ctx.r3.s64 = ctx.r11.s64 + 5352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96084"))) PPC_WEAK_FUNC(sub_83B96084);
PPC_FUNC_IMPL(__imp__sub_83B96084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96088"))) PPC_WEAK_FUNC(sub_83B96088);
PPC_FUNC_IMPL(__imp__sub_83B96088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5360
	ctx.r3.s64 = ctx.r11.s64 + 5360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96094"))) PPC_WEAK_FUNC(sub_83B96094);
PPC_FUNC_IMPL(__imp__sub_83B96094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96098"))) PPC_WEAK_FUNC(sub_83B96098);
PPC_FUNC_IMPL(__imp__sub_83B96098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5368
	ctx.r3.s64 = ctx.r11.s64 + 5368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B960A4"))) PPC_WEAK_FUNC(sub_83B960A4);
PPC_FUNC_IMPL(__imp__sub_83B960A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B960A8"))) PPC_WEAK_FUNC(sub_83B960A8);
PPC_FUNC_IMPL(__imp__sub_83B960A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5376
	ctx.r3.s64 = ctx.r11.s64 + 5376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B960B4"))) PPC_WEAK_FUNC(sub_83B960B4);
PPC_FUNC_IMPL(__imp__sub_83B960B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B960B8"))) PPC_WEAK_FUNC(sub_83B960B8);
PPC_FUNC_IMPL(__imp__sub_83B960B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5384
	ctx.r3.s64 = ctx.r11.s64 + 5384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B960C4"))) PPC_WEAK_FUNC(sub_83B960C4);
PPC_FUNC_IMPL(__imp__sub_83B960C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B960C8"))) PPC_WEAK_FUNC(sub_83B960C8);
PPC_FUNC_IMPL(__imp__sub_83B960C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5268
	ctx.r7.s64 = ctx.r8.s64 + -5268;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5268(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5268);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5268(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5268, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B960F0"))) PPC_WEAK_FUNC(sub_83B960F0);
PPC_FUNC_IMPL(__imp__sub_83B960F0) {
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
	// addi r3,r11,-5272
	ctx.r3.s64 = ctx.r11.s64 + -5272;
	// bl 0x83523120
	ctx.lr = 0x83B96108;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,5392
	ctx.r3.s64 = ctx.r10.s64 + 5392;
	// bl 0x831cdcc8
	ctx.lr = 0x83B96114;
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

__attribute__((alias("__imp__sub_83B96124"))) PPC_WEAK_FUNC(sub_83B96124);
PPC_FUNC_IMPL(__imp__sub_83B96124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96128"))) PPC_WEAK_FUNC(sub_83B96128);
PPC_FUNC_IMPL(__imp__sub_83B96128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5408
	ctx.r3.s64 = ctx.r11.s64 + 5408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96134"))) PPC_WEAK_FUNC(sub_83B96134);
PPC_FUNC_IMPL(__imp__sub_83B96134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96138"))) PPC_WEAK_FUNC(sub_83B96138);
PPC_FUNC_IMPL(__imp__sub_83B96138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5416
	ctx.r3.s64 = ctx.r11.s64 + 5416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96144"))) PPC_WEAK_FUNC(sub_83B96144);
PPC_FUNC_IMPL(__imp__sub_83B96144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96148"))) PPC_WEAK_FUNC(sub_83B96148);
PPC_FUNC_IMPL(__imp__sub_83B96148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5424
	ctx.r3.s64 = ctx.r11.s64 + 5424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96154"))) PPC_WEAK_FUNC(sub_83B96154);
PPC_FUNC_IMPL(__imp__sub_83B96154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96158"))) PPC_WEAK_FUNC(sub_83B96158);
PPC_FUNC_IMPL(__imp__sub_83B96158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5432
	ctx.r3.s64 = ctx.r11.s64 + 5432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96164"))) PPC_WEAK_FUNC(sub_83B96164);
PPC_FUNC_IMPL(__imp__sub_83B96164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96168"))) PPC_WEAK_FUNC(sub_83B96168);
PPC_FUNC_IMPL(__imp__sub_83B96168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5440
	ctx.r3.s64 = ctx.r11.s64 + 5440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96174"))) PPC_WEAK_FUNC(sub_83B96174);
PPC_FUNC_IMPL(__imp__sub_83B96174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96178"))) PPC_WEAK_FUNC(sub_83B96178);
PPC_FUNC_IMPL(__imp__sub_83B96178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5448
	ctx.r3.s64 = ctx.r11.s64 + 5448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96184"))) PPC_WEAK_FUNC(sub_83B96184);
PPC_FUNC_IMPL(__imp__sub_83B96184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96188"))) PPC_WEAK_FUNC(sub_83B96188);
PPC_FUNC_IMPL(__imp__sub_83B96188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5456
	ctx.r3.s64 = ctx.r11.s64 + 5456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96194"))) PPC_WEAK_FUNC(sub_83B96194);
PPC_FUNC_IMPL(__imp__sub_83B96194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96198"))) PPC_WEAK_FUNC(sub_83B96198);
PPC_FUNC_IMPL(__imp__sub_83B96198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5464
	ctx.r3.s64 = ctx.r11.s64 + 5464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B961A4"))) PPC_WEAK_FUNC(sub_83B961A4);
PPC_FUNC_IMPL(__imp__sub_83B961A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B961A8"))) PPC_WEAK_FUNC(sub_83B961A8);
PPC_FUNC_IMPL(__imp__sub_83B961A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5472
	ctx.r3.s64 = ctx.r11.s64 + 5472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B961B4"))) PPC_WEAK_FUNC(sub_83B961B4);
PPC_FUNC_IMPL(__imp__sub_83B961B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B961B8"))) PPC_WEAK_FUNC(sub_83B961B8);
PPC_FUNC_IMPL(__imp__sub_83B961B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5480
	ctx.r3.s64 = ctx.r11.s64 + 5480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B961C4"))) PPC_WEAK_FUNC(sub_83B961C4);
PPC_FUNC_IMPL(__imp__sub_83B961C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B961C8"))) PPC_WEAK_FUNC(sub_83B961C8);
PPC_FUNC_IMPL(__imp__sub_83B961C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5488
	ctx.r3.s64 = ctx.r11.s64 + 5488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B961D4"))) PPC_WEAK_FUNC(sub_83B961D4);
PPC_FUNC_IMPL(__imp__sub_83B961D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B961D8"))) PPC_WEAK_FUNC(sub_83B961D8);
PPC_FUNC_IMPL(__imp__sub_83B961D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5496
	ctx.r3.s64 = ctx.r11.s64 + 5496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B961E4"))) PPC_WEAK_FUNC(sub_83B961E4);
PPC_FUNC_IMPL(__imp__sub_83B961E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B961E8"))) PPC_WEAK_FUNC(sub_83B961E8);
PPC_FUNC_IMPL(__imp__sub_83B961E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5256
	ctx.r7.s64 = ctx.r8.s64 + -5256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B96210"))) PPC_WEAK_FUNC(sub_83B96210);
PPC_FUNC_IMPL(__imp__sub_83B96210) {
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
	// addi r3,r11,-5260
	ctx.r3.s64 = ctx.r11.s64 + -5260;
	// bl 0x83523120
	ctx.lr = 0x83B96228;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,5504
	ctx.r3.s64 = ctx.r10.s64 + 5504;
	// bl 0x831cdcc8
	ctx.lr = 0x83B96234;
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

__attribute__((alias("__imp__sub_83B96244"))) PPC_WEAK_FUNC(sub_83B96244);
PPC_FUNC_IMPL(__imp__sub_83B96244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96248"))) PPC_WEAK_FUNC(sub_83B96248);
PPC_FUNC_IMPL(__imp__sub_83B96248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5520
	ctx.r3.s64 = ctx.r11.s64 + 5520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96254"))) PPC_WEAK_FUNC(sub_83B96254);
PPC_FUNC_IMPL(__imp__sub_83B96254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96258"))) PPC_WEAK_FUNC(sub_83B96258);
PPC_FUNC_IMPL(__imp__sub_83B96258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5528
	ctx.r3.s64 = ctx.r11.s64 + 5528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96264"))) PPC_WEAK_FUNC(sub_83B96264);
PPC_FUNC_IMPL(__imp__sub_83B96264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96268"))) PPC_WEAK_FUNC(sub_83B96268);
PPC_FUNC_IMPL(__imp__sub_83B96268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5536
	ctx.r3.s64 = ctx.r11.s64 + 5536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96274"))) PPC_WEAK_FUNC(sub_83B96274);
PPC_FUNC_IMPL(__imp__sub_83B96274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96278"))) PPC_WEAK_FUNC(sub_83B96278);
PPC_FUNC_IMPL(__imp__sub_83B96278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5544
	ctx.r3.s64 = ctx.r11.s64 + 5544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96284"))) PPC_WEAK_FUNC(sub_83B96284);
PPC_FUNC_IMPL(__imp__sub_83B96284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96288"))) PPC_WEAK_FUNC(sub_83B96288);
PPC_FUNC_IMPL(__imp__sub_83B96288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5552
	ctx.r3.s64 = ctx.r11.s64 + 5552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96294"))) PPC_WEAK_FUNC(sub_83B96294);
PPC_FUNC_IMPL(__imp__sub_83B96294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96298"))) PPC_WEAK_FUNC(sub_83B96298);
PPC_FUNC_IMPL(__imp__sub_83B96298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5560
	ctx.r3.s64 = ctx.r11.s64 + 5560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B962A4"))) PPC_WEAK_FUNC(sub_83B962A4);
PPC_FUNC_IMPL(__imp__sub_83B962A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B962A8"))) PPC_WEAK_FUNC(sub_83B962A8);
PPC_FUNC_IMPL(__imp__sub_83B962A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5568
	ctx.r3.s64 = ctx.r11.s64 + 5568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B962B4"))) PPC_WEAK_FUNC(sub_83B962B4);
PPC_FUNC_IMPL(__imp__sub_83B962B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B962B8"))) PPC_WEAK_FUNC(sub_83B962B8);
PPC_FUNC_IMPL(__imp__sub_83B962B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5576
	ctx.r3.s64 = ctx.r11.s64 + 5576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B962C4"))) PPC_WEAK_FUNC(sub_83B962C4);
PPC_FUNC_IMPL(__imp__sub_83B962C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B962C8"))) PPC_WEAK_FUNC(sub_83B962C8);
PPC_FUNC_IMPL(__imp__sub_83B962C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5584
	ctx.r3.s64 = ctx.r11.s64 + 5584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B962D4"))) PPC_WEAK_FUNC(sub_83B962D4);
PPC_FUNC_IMPL(__imp__sub_83B962D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B962D8"))) PPC_WEAK_FUNC(sub_83B962D8);
PPC_FUNC_IMPL(__imp__sub_83B962D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5592
	ctx.r3.s64 = ctx.r11.s64 + 5592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B962E4"))) PPC_WEAK_FUNC(sub_83B962E4);
PPC_FUNC_IMPL(__imp__sub_83B962E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B962E8"))) PPC_WEAK_FUNC(sub_83B962E8);
PPC_FUNC_IMPL(__imp__sub_83B962E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5600
	ctx.r3.s64 = ctx.r11.s64 + 5600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B962F4"))) PPC_WEAK_FUNC(sub_83B962F4);
PPC_FUNC_IMPL(__imp__sub_83B962F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B962F8"))) PPC_WEAK_FUNC(sub_83B962F8);
PPC_FUNC_IMPL(__imp__sub_83B962F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5608
	ctx.r3.s64 = ctx.r11.s64 + 5608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96304"))) PPC_WEAK_FUNC(sub_83B96304);
PPC_FUNC_IMPL(__imp__sub_83B96304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96308"))) PPC_WEAK_FUNC(sub_83B96308);
PPC_FUNC_IMPL(__imp__sub_83B96308) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5244
	ctx.r7.s64 = ctx.r8.s64 + -5244;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5244(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5244);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5244(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5244, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B96330"))) PPC_WEAK_FUNC(sub_83B96330);
PPC_FUNC_IMPL(__imp__sub_83B96330) {
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
	// addi r3,r11,-5248
	ctx.r3.s64 = ctx.r11.s64 + -5248;
	// bl 0x83523120
	ctx.lr = 0x83B96348;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,5616
	ctx.r3.s64 = ctx.r10.s64 + 5616;
	// bl 0x831cdcc8
	ctx.lr = 0x83B96354;
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

__attribute__((alias("__imp__sub_83B96364"))) PPC_WEAK_FUNC(sub_83B96364);
PPC_FUNC_IMPL(__imp__sub_83B96364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96368"))) PPC_WEAK_FUNC(sub_83B96368);
PPC_FUNC_IMPL(__imp__sub_83B96368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5632
	ctx.r3.s64 = ctx.r11.s64 + 5632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96374"))) PPC_WEAK_FUNC(sub_83B96374);
PPC_FUNC_IMPL(__imp__sub_83B96374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96378"))) PPC_WEAK_FUNC(sub_83B96378);
PPC_FUNC_IMPL(__imp__sub_83B96378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5640
	ctx.r3.s64 = ctx.r11.s64 + 5640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96384"))) PPC_WEAK_FUNC(sub_83B96384);
PPC_FUNC_IMPL(__imp__sub_83B96384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96388"))) PPC_WEAK_FUNC(sub_83B96388);
PPC_FUNC_IMPL(__imp__sub_83B96388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5648
	ctx.r3.s64 = ctx.r11.s64 + 5648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96394"))) PPC_WEAK_FUNC(sub_83B96394);
PPC_FUNC_IMPL(__imp__sub_83B96394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96398"))) PPC_WEAK_FUNC(sub_83B96398);
PPC_FUNC_IMPL(__imp__sub_83B96398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5656
	ctx.r3.s64 = ctx.r11.s64 + 5656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B963A4"))) PPC_WEAK_FUNC(sub_83B963A4);
PPC_FUNC_IMPL(__imp__sub_83B963A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B963A8"))) PPC_WEAK_FUNC(sub_83B963A8);
PPC_FUNC_IMPL(__imp__sub_83B963A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5664
	ctx.r3.s64 = ctx.r11.s64 + 5664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B963B4"))) PPC_WEAK_FUNC(sub_83B963B4);
PPC_FUNC_IMPL(__imp__sub_83B963B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B963B8"))) PPC_WEAK_FUNC(sub_83B963B8);
PPC_FUNC_IMPL(__imp__sub_83B963B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5672
	ctx.r3.s64 = ctx.r11.s64 + 5672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B963C4"))) PPC_WEAK_FUNC(sub_83B963C4);
PPC_FUNC_IMPL(__imp__sub_83B963C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B963C8"))) PPC_WEAK_FUNC(sub_83B963C8);
PPC_FUNC_IMPL(__imp__sub_83B963C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5680
	ctx.r3.s64 = ctx.r11.s64 + 5680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B963D4"))) PPC_WEAK_FUNC(sub_83B963D4);
PPC_FUNC_IMPL(__imp__sub_83B963D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B963D8"))) PPC_WEAK_FUNC(sub_83B963D8);
PPC_FUNC_IMPL(__imp__sub_83B963D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5688
	ctx.r3.s64 = ctx.r11.s64 + 5688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B963E4"))) PPC_WEAK_FUNC(sub_83B963E4);
PPC_FUNC_IMPL(__imp__sub_83B963E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B963E8"))) PPC_WEAK_FUNC(sub_83B963E8);
PPC_FUNC_IMPL(__imp__sub_83B963E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5696
	ctx.r3.s64 = ctx.r11.s64 + 5696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B963F4"))) PPC_WEAK_FUNC(sub_83B963F4);
PPC_FUNC_IMPL(__imp__sub_83B963F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B963F8"))) PPC_WEAK_FUNC(sub_83B963F8);
PPC_FUNC_IMPL(__imp__sub_83B963F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5704
	ctx.r3.s64 = ctx.r11.s64 + 5704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96404"))) PPC_WEAK_FUNC(sub_83B96404);
PPC_FUNC_IMPL(__imp__sub_83B96404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96408"))) PPC_WEAK_FUNC(sub_83B96408);
PPC_FUNC_IMPL(__imp__sub_83B96408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5712
	ctx.r3.s64 = ctx.r11.s64 + 5712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96414"))) PPC_WEAK_FUNC(sub_83B96414);
PPC_FUNC_IMPL(__imp__sub_83B96414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96418"))) PPC_WEAK_FUNC(sub_83B96418);
PPC_FUNC_IMPL(__imp__sub_83B96418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5720
	ctx.r3.s64 = ctx.r11.s64 + 5720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96424"))) PPC_WEAK_FUNC(sub_83B96424);
PPC_FUNC_IMPL(__imp__sub_83B96424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96428"))) PPC_WEAK_FUNC(sub_83B96428);
PPC_FUNC_IMPL(__imp__sub_83B96428) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5232
	ctx.r7.s64 = ctx.r8.s64 + -5232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5232);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5232(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5232, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B96450"))) PPC_WEAK_FUNC(sub_83B96450);
PPC_FUNC_IMPL(__imp__sub_83B96450) {
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
	// addi r3,r11,-5236
	ctx.r3.s64 = ctx.r11.s64 + -5236;
	// bl 0x83523120
	ctx.lr = 0x83B96468;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,5728
	ctx.r3.s64 = ctx.r10.s64 + 5728;
	// bl 0x831cdcc8
	ctx.lr = 0x83B96474;
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

__attribute__((alias("__imp__sub_83B96484"))) PPC_WEAK_FUNC(sub_83B96484);
PPC_FUNC_IMPL(__imp__sub_83B96484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96488"))) PPC_WEAK_FUNC(sub_83B96488);
PPC_FUNC_IMPL(__imp__sub_83B96488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5744
	ctx.r3.s64 = ctx.r11.s64 + 5744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96494"))) PPC_WEAK_FUNC(sub_83B96494);
PPC_FUNC_IMPL(__imp__sub_83B96494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96498"))) PPC_WEAK_FUNC(sub_83B96498);
PPC_FUNC_IMPL(__imp__sub_83B96498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5752
	ctx.r3.s64 = ctx.r11.s64 + 5752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B964A4"))) PPC_WEAK_FUNC(sub_83B964A4);
PPC_FUNC_IMPL(__imp__sub_83B964A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B964A8"))) PPC_WEAK_FUNC(sub_83B964A8);
PPC_FUNC_IMPL(__imp__sub_83B964A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5760
	ctx.r3.s64 = ctx.r11.s64 + 5760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B964B4"))) PPC_WEAK_FUNC(sub_83B964B4);
PPC_FUNC_IMPL(__imp__sub_83B964B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B964B8"))) PPC_WEAK_FUNC(sub_83B964B8);
PPC_FUNC_IMPL(__imp__sub_83B964B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5768
	ctx.r3.s64 = ctx.r11.s64 + 5768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B964C4"))) PPC_WEAK_FUNC(sub_83B964C4);
PPC_FUNC_IMPL(__imp__sub_83B964C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B964C8"))) PPC_WEAK_FUNC(sub_83B964C8);
PPC_FUNC_IMPL(__imp__sub_83B964C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5776
	ctx.r3.s64 = ctx.r11.s64 + 5776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B964D4"))) PPC_WEAK_FUNC(sub_83B964D4);
PPC_FUNC_IMPL(__imp__sub_83B964D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B964D8"))) PPC_WEAK_FUNC(sub_83B964D8);
PPC_FUNC_IMPL(__imp__sub_83B964D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5784
	ctx.r3.s64 = ctx.r11.s64 + 5784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B964E4"))) PPC_WEAK_FUNC(sub_83B964E4);
PPC_FUNC_IMPL(__imp__sub_83B964E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B964E8"))) PPC_WEAK_FUNC(sub_83B964E8);
PPC_FUNC_IMPL(__imp__sub_83B964E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5792
	ctx.r3.s64 = ctx.r11.s64 + 5792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B964F4"))) PPC_WEAK_FUNC(sub_83B964F4);
PPC_FUNC_IMPL(__imp__sub_83B964F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B964F8"))) PPC_WEAK_FUNC(sub_83B964F8);
PPC_FUNC_IMPL(__imp__sub_83B964F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5800
	ctx.r3.s64 = ctx.r11.s64 + 5800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96504"))) PPC_WEAK_FUNC(sub_83B96504);
PPC_FUNC_IMPL(__imp__sub_83B96504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96508"))) PPC_WEAK_FUNC(sub_83B96508);
PPC_FUNC_IMPL(__imp__sub_83B96508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5808
	ctx.r3.s64 = ctx.r11.s64 + 5808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96514"))) PPC_WEAK_FUNC(sub_83B96514);
PPC_FUNC_IMPL(__imp__sub_83B96514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96518"))) PPC_WEAK_FUNC(sub_83B96518);
PPC_FUNC_IMPL(__imp__sub_83B96518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5816
	ctx.r3.s64 = ctx.r11.s64 + 5816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96524"))) PPC_WEAK_FUNC(sub_83B96524);
PPC_FUNC_IMPL(__imp__sub_83B96524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96528"))) PPC_WEAK_FUNC(sub_83B96528);
PPC_FUNC_IMPL(__imp__sub_83B96528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5824
	ctx.r3.s64 = ctx.r11.s64 + 5824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96534"))) PPC_WEAK_FUNC(sub_83B96534);
PPC_FUNC_IMPL(__imp__sub_83B96534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96538"))) PPC_WEAK_FUNC(sub_83B96538);
PPC_FUNC_IMPL(__imp__sub_83B96538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5832
	ctx.r3.s64 = ctx.r11.s64 + 5832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96544"))) PPC_WEAK_FUNC(sub_83B96544);
PPC_FUNC_IMPL(__imp__sub_83B96544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96548"))) PPC_WEAK_FUNC(sub_83B96548);
PPC_FUNC_IMPL(__imp__sub_83B96548) {
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
	// addi r3,r11,-5224
	ctx.r3.s64 = ctx.r11.s64 + -5224;
	// bl 0x83523120
	ctx.lr = 0x83B96560;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,5840
	ctx.r3.s64 = ctx.r10.s64 + 5840;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9656C;
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

__attribute__((alias("__imp__sub_83B9657C"))) PPC_WEAK_FUNC(sub_83B9657C);
PPC_FUNC_IMPL(__imp__sub_83B9657C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96580"))) PPC_WEAK_FUNC(sub_83B96580);
PPC_FUNC_IMPL(__imp__sub_83B96580) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5220
	ctx.r7.s64 = ctx.r8.s64 + -5220;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5220(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5220);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5220(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5220, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B965A8"))) PPC_WEAK_FUNC(sub_83B965A8);
PPC_FUNC_IMPL(__imp__sub_83B965A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-5200
	ctx.r11.s64 = ctx.r11.s64 + -5200;
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

__attribute__((alias("__imp__sub_83B965E8"))) PPC_WEAK_FUNC(sub_83B965E8);
PPC_FUNC_IMPL(__imp__sub_83B965E8) {
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
	// addi r4,r11,-4752
	ctx.r4.s64 = ctx.r11.s64 + -4752;
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
	// addi r3,r7,-5212
	ctx.r3.s64 = ctx.r7.s64 + -5212;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96618"))) PPC_WEAK_FUNC(sub_83B96618);
PPC_FUNC_IMPL(__imp__sub_83B96618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5856
	ctx.r3.s64 = ctx.r11.s64 + 5856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96624"))) PPC_WEAK_FUNC(sub_83B96624);
PPC_FUNC_IMPL(__imp__sub_83B96624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96628"))) PPC_WEAK_FUNC(sub_83B96628);
PPC_FUNC_IMPL(__imp__sub_83B96628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5864
	ctx.r3.s64 = ctx.r11.s64 + 5864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96634"))) PPC_WEAK_FUNC(sub_83B96634);
PPC_FUNC_IMPL(__imp__sub_83B96634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96638"))) PPC_WEAK_FUNC(sub_83B96638);
PPC_FUNC_IMPL(__imp__sub_83B96638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5872
	ctx.r3.s64 = ctx.r11.s64 + 5872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96644"))) PPC_WEAK_FUNC(sub_83B96644);
PPC_FUNC_IMPL(__imp__sub_83B96644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96648"))) PPC_WEAK_FUNC(sub_83B96648);
PPC_FUNC_IMPL(__imp__sub_83B96648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5880
	ctx.r3.s64 = ctx.r11.s64 + 5880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96654"))) PPC_WEAK_FUNC(sub_83B96654);
PPC_FUNC_IMPL(__imp__sub_83B96654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96658"))) PPC_WEAK_FUNC(sub_83B96658);
PPC_FUNC_IMPL(__imp__sub_83B96658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5888
	ctx.r3.s64 = ctx.r11.s64 + 5888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96664"))) PPC_WEAK_FUNC(sub_83B96664);
PPC_FUNC_IMPL(__imp__sub_83B96664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96668"))) PPC_WEAK_FUNC(sub_83B96668);
PPC_FUNC_IMPL(__imp__sub_83B96668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5896
	ctx.r3.s64 = ctx.r11.s64 + 5896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96674"))) PPC_WEAK_FUNC(sub_83B96674);
PPC_FUNC_IMPL(__imp__sub_83B96674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96678"))) PPC_WEAK_FUNC(sub_83B96678);
PPC_FUNC_IMPL(__imp__sub_83B96678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5904
	ctx.r3.s64 = ctx.r11.s64 + 5904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96684"))) PPC_WEAK_FUNC(sub_83B96684);
PPC_FUNC_IMPL(__imp__sub_83B96684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96688"))) PPC_WEAK_FUNC(sub_83B96688);
PPC_FUNC_IMPL(__imp__sub_83B96688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5912
	ctx.r3.s64 = ctx.r11.s64 + 5912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96694"))) PPC_WEAK_FUNC(sub_83B96694);
PPC_FUNC_IMPL(__imp__sub_83B96694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96698"))) PPC_WEAK_FUNC(sub_83B96698);
PPC_FUNC_IMPL(__imp__sub_83B96698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5920
	ctx.r3.s64 = ctx.r11.s64 + 5920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B966A4"))) PPC_WEAK_FUNC(sub_83B966A4);
PPC_FUNC_IMPL(__imp__sub_83B966A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B966A8"))) PPC_WEAK_FUNC(sub_83B966A8);
PPC_FUNC_IMPL(__imp__sub_83B966A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5928
	ctx.r3.s64 = ctx.r11.s64 + 5928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B966B4"))) PPC_WEAK_FUNC(sub_83B966B4);
PPC_FUNC_IMPL(__imp__sub_83B966B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B966B8"))) PPC_WEAK_FUNC(sub_83B966B8);
PPC_FUNC_IMPL(__imp__sub_83B966B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5936
	ctx.r3.s64 = ctx.r11.s64 + 5936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B966C4"))) PPC_WEAK_FUNC(sub_83B966C4);
PPC_FUNC_IMPL(__imp__sub_83B966C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B966C8"))) PPC_WEAK_FUNC(sub_83B966C8);
PPC_FUNC_IMPL(__imp__sub_83B966C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5944
	ctx.r3.s64 = ctx.r11.s64 + 5944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B966D4"))) PPC_WEAK_FUNC(sub_83B966D4);
PPC_FUNC_IMPL(__imp__sub_83B966D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B966D8"))) PPC_WEAK_FUNC(sub_83B966D8);
PPC_FUNC_IMPL(__imp__sub_83B966D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5164
	ctx.r7.s64 = ctx.r8.s64 + -5164;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5164(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5164);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5164(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5164, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B96700"))) PPC_WEAK_FUNC(sub_83B96700);
PPC_FUNC_IMPL(__imp__sub_83B96700) {
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
	// addi r3,r11,-5168
	ctx.r3.s64 = ctx.r11.s64 + -5168;
	// bl 0x83523120
	ctx.lr = 0x83B96718;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,5952
	ctx.r3.s64 = ctx.r10.s64 + 5952;
	// bl 0x831cdcc8
	ctx.lr = 0x83B96724;
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

__attribute__((alias("__imp__sub_83B96734"))) PPC_WEAK_FUNC(sub_83B96734);
PPC_FUNC_IMPL(__imp__sub_83B96734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96738"))) PPC_WEAK_FUNC(sub_83B96738);
PPC_FUNC_IMPL(__imp__sub_83B96738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5968
	ctx.r3.s64 = ctx.r11.s64 + 5968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96744"))) PPC_WEAK_FUNC(sub_83B96744);
PPC_FUNC_IMPL(__imp__sub_83B96744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96748"))) PPC_WEAK_FUNC(sub_83B96748);
PPC_FUNC_IMPL(__imp__sub_83B96748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5976
	ctx.r3.s64 = ctx.r11.s64 + 5976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96754"))) PPC_WEAK_FUNC(sub_83B96754);
PPC_FUNC_IMPL(__imp__sub_83B96754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96758"))) PPC_WEAK_FUNC(sub_83B96758);
PPC_FUNC_IMPL(__imp__sub_83B96758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5984
	ctx.r3.s64 = ctx.r11.s64 + 5984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96764"))) PPC_WEAK_FUNC(sub_83B96764);
PPC_FUNC_IMPL(__imp__sub_83B96764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96768"))) PPC_WEAK_FUNC(sub_83B96768);
PPC_FUNC_IMPL(__imp__sub_83B96768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5992
	ctx.r3.s64 = ctx.r11.s64 + 5992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96774"))) PPC_WEAK_FUNC(sub_83B96774);
PPC_FUNC_IMPL(__imp__sub_83B96774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96778"))) PPC_WEAK_FUNC(sub_83B96778);
PPC_FUNC_IMPL(__imp__sub_83B96778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6000
	ctx.r3.s64 = ctx.r11.s64 + 6000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96784"))) PPC_WEAK_FUNC(sub_83B96784);
PPC_FUNC_IMPL(__imp__sub_83B96784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96788"))) PPC_WEAK_FUNC(sub_83B96788);
PPC_FUNC_IMPL(__imp__sub_83B96788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6008
	ctx.r3.s64 = ctx.r11.s64 + 6008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96794"))) PPC_WEAK_FUNC(sub_83B96794);
PPC_FUNC_IMPL(__imp__sub_83B96794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96798"))) PPC_WEAK_FUNC(sub_83B96798);
PPC_FUNC_IMPL(__imp__sub_83B96798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6016
	ctx.r3.s64 = ctx.r11.s64 + 6016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B967A4"))) PPC_WEAK_FUNC(sub_83B967A4);
PPC_FUNC_IMPL(__imp__sub_83B967A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B967A8"))) PPC_WEAK_FUNC(sub_83B967A8);
PPC_FUNC_IMPL(__imp__sub_83B967A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6024
	ctx.r3.s64 = ctx.r11.s64 + 6024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B967B4"))) PPC_WEAK_FUNC(sub_83B967B4);
PPC_FUNC_IMPL(__imp__sub_83B967B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B967B8"))) PPC_WEAK_FUNC(sub_83B967B8);
PPC_FUNC_IMPL(__imp__sub_83B967B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6032
	ctx.r3.s64 = ctx.r11.s64 + 6032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B967C4"))) PPC_WEAK_FUNC(sub_83B967C4);
PPC_FUNC_IMPL(__imp__sub_83B967C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B967C8"))) PPC_WEAK_FUNC(sub_83B967C8);
PPC_FUNC_IMPL(__imp__sub_83B967C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6040
	ctx.r3.s64 = ctx.r11.s64 + 6040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B967D4"))) PPC_WEAK_FUNC(sub_83B967D4);
PPC_FUNC_IMPL(__imp__sub_83B967D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B967D8"))) PPC_WEAK_FUNC(sub_83B967D8);
PPC_FUNC_IMPL(__imp__sub_83B967D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6048
	ctx.r3.s64 = ctx.r11.s64 + 6048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B967E4"))) PPC_WEAK_FUNC(sub_83B967E4);
PPC_FUNC_IMPL(__imp__sub_83B967E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B967E8"))) PPC_WEAK_FUNC(sub_83B967E8);
PPC_FUNC_IMPL(__imp__sub_83B967E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6056
	ctx.r3.s64 = ctx.r11.s64 + 6056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B967F4"))) PPC_WEAK_FUNC(sub_83B967F4);
PPC_FUNC_IMPL(__imp__sub_83B967F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B967F8"))) PPC_WEAK_FUNC(sub_83B967F8);
PPC_FUNC_IMPL(__imp__sub_83B967F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5152
	ctx.r7.s64 = ctx.r8.s64 + -5152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5152);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5152(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5152, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B96820"))) PPC_WEAK_FUNC(sub_83B96820);
PPC_FUNC_IMPL(__imp__sub_83B96820) {
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
	// addi r3,r11,-5156
	ctx.r3.s64 = ctx.r11.s64 + -5156;
	// bl 0x83523120
	ctx.lr = 0x83B96838;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,6064
	ctx.r3.s64 = ctx.r10.s64 + 6064;
	// bl 0x831cdcc8
	ctx.lr = 0x83B96844;
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

__attribute__((alias("__imp__sub_83B96854"))) PPC_WEAK_FUNC(sub_83B96854);
PPC_FUNC_IMPL(__imp__sub_83B96854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96858"))) PPC_WEAK_FUNC(sub_83B96858);
PPC_FUNC_IMPL(__imp__sub_83B96858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6080
	ctx.r3.s64 = ctx.r11.s64 + 6080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96864"))) PPC_WEAK_FUNC(sub_83B96864);
PPC_FUNC_IMPL(__imp__sub_83B96864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96868"))) PPC_WEAK_FUNC(sub_83B96868);
PPC_FUNC_IMPL(__imp__sub_83B96868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6088
	ctx.r3.s64 = ctx.r11.s64 + 6088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96874"))) PPC_WEAK_FUNC(sub_83B96874);
PPC_FUNC_IMPL(__imp__sub_83B96874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96878"))) PPC_WEAK_FUNC(sub_83B96878);
PPC_FUNC_IMPL(__imp__sub_83B96878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6096
	ctx.r3.s64 = ctx.r11.s64 + 6096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96884"))) PPC_WEAK_FUNC(sub_83B96884);
PPC_FUNC_IMPL(__imp__sub_83B96884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96888"))) PPC_WEAK_FUNC(sub_83B96888);
PPC_FUNC_IMPL(__imp__sub_83B96888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6104
	ctx.r3.s64 = ctx.r11.s64 + 6104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96894"))) PPC_WEAK_FUNC(sub_83B96894);
PPC_FUNC_IMPL(__imp__sub_83B96894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96898"))) PPC_WEAK_FUNC(sub_83B96898);
PPC_FUNC_IMPL(__imp__sub_83B96898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6112
	ctx.r3.s64 = ctx.r11.s64 + 6112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B968A4"))) PPC_WEAK_FUNC(sub_83B968A4);
PPC_FUNC_IMPL(__imp__sub_83B968A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B968A8"))) PPC_WEAK_FUNC(sub_83B968A8);
PPC_FUNC_IMPL(__imp__sub_83B968A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6120
	ctx.r3.s64 = ctx.r11.s64 + 6120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B968B4"))) PPC_WEAK_FUNC(sub_83B968B4);
PPC_FUNC_IMPL(__imp__sub_83B968B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B968B8"))) PPC_WEAK_FUNC(sub_83B968B8);
PPC_FUNC_IMPL(__imp__sub_83B968B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6128
	ctx.r3.s64 = ctx.r11.s64 + 6128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B968C4"))) PPC_WEAK_FUNC(sub_83B968C4);
PPC_FUNC_IMPL(__imp__sub_83B968C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B968C8"))) PPC_WEAK_FUNC(sub_83B968C8);
PPC_FUNC_IMPL(__imp__sub_83B968C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6136
	ctx.r3.s64 = ctx.r11.s64 + 6136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B968D4"))) PPC_WEAK_FUNC(sub_83B968D4);
PPC_FUNC_IMPL(__imp__sub_83B968D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B968D8"))) PPC_WEAK_FUNC(sub_83B968D8);
PPC_FUNC_IMPL(__imp__sub_83B968D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6144
	ctx.r3.s64 = ctx.r11.s64 + 6144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B968E4"))) PPC_WEAK_FUNC(sub_83B968E4);
PPC_FUNC_IMPL(__imp__sub_83B968E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B968E8"))) PPC_WEAK_FUNC(sub_83B968E8);
PPC_FUNC_IMPL(__imp__sub_83B968E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6152
	ctx.r3.s64 = ctx.r11.s64 + 6152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B968F4"))) PPC_WEAK_FUNC(sub_83B968F4);
PPC_FUNC_IMPL(__imp__sub_83B968F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B968F8"))) PPC_WEAK_FUNC(sub_83B968F8);
PPC_FUNC_IMPL(__imp__sub_83B968F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6160
	ctx.r3.s64 = ctx.r11.s64 + 6160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96904"))) PPC_WEAK_FUNC(sub_83B96904);
PPC_FUNC_IMPL(__imp__sub_83B96904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96908"))) PPC_WEAK_FUNC(sub_83B96908);
PPC_FUNC_IMPL(__imp__sub_83B96908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6168
	ctx.r3.s64 = ctx.r11.s64 + 6168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96914"))) PPC_WEAK_FUNC(sub_83B96914);
PPC_FUNC_IMPL(__imp__sub_83B96914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96918"))) PPC_WEAK_FUNC(sub_83B96918);
PPC_FUNC_IMPL(__imp__sub_83B96918) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5140
	ctx.r7.s64 = ctx.r8.s64 + -5140;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5140(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5140);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5140(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5140, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B96940"))) PPC_WEAK_FUNC(sub_83B96940);
PPC_FUNC_IMPL(__imp__sub_83B96940) {
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
	// addi r3,r11,-5144
	ctx.r3.s64 = ctx.r11.s64 + -5144;
	// bl 0x83523120
	ctx.lr = 0x83B96958;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,6176
	ctx.r3.s64 = ctx.r10.s64 + 6176;
	// bl 0x831cdcc8
	ctx.lr = 0x83B96964;
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

__attribute__((alias("__imp__sub_83B96974"))) PPC_WEAK_FUNC(sub_83B96974);
PPC_FUNC_IMPL(__imp__sub_83B96974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96978"))) PPC_WEAK_FUNC(sub_83B96978);
PPC_FUNC_IMPL(__imp__sub_83B96978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6192
	ctx.r3.s64 = ctx.r11.s64 + 6192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96984"))) PPC_WEAK_FUNC(sub_83B96984);
PPC_FUNC_IMPL(__imp__sub_83B96984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96988"))) PPC_WEAK_FUNC(sub_83B96988);
PPC_FUNC_IMPL(__imp__sub_83B96988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6200
	ctx.r3.s64 = ctx.r11.s64 + 6200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B96994"))) PPC_WEAK_FUNC(sub_83B96994);
PPC_FUNC_IMPL(__imp__sub_83B96994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B96998"))) PPC_WEAK_FUNC(sub_83B96998);
PPC_FUNC_IMPL(__imp__sub_83B96998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6208
	ctx.r3.s64 = ctx.r11.s64 + 6208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B969A4"))) PPC_WEAK_FUNC(sub_83B969A4);
PPC_FUNC_IMPL(__imp__sub_83B969A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B969A8"))) PPC_WEAK_FUNC(sub_83B969A8);
PPC_FUNC_IMPL(__imp__sub_83B969A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,6216
	ctx.r3.s64 = ctx.r11.s64 + 6216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B969B4"))) PPC_WEAK_FUNC(sub_83B969B4);
PPC_FUNC_IMPL(__imp__sub_83B969B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

