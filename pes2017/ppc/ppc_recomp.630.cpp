#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BC00E4"))) PPC_WEAK_FUNC(sub_83BC00E4);
PPC_FUNC_IMPL(__imp__sub_83BC00E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC00E8"))) PPC_WEAK_FUNC(sub_83BC00E8);
PPC_FUNC_IMPL(__imp__sub_83BC00E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5352
	ctx.r3.s64 = ctx.r11.s64 + -5352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC00F4"))) PPC_WEAK_FUNC(sub_83BC00F4);
PPC_FUNC_IMPL(__imp__sub_83BC00F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC00F8"))) PPC_WEAK_FUNC(sub_83BC00F8);
PPC_FUNC_IMPL(__imp__sub_83BC00F8) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,30816
	ctx.r3.s64 = ctx.r11.s64 + 30816;
	// bl 0x83523120
	ctx.lr = 0x83BC0110;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-5344
	ctx.r3.s64 = ctx.r10.s64 + -5344;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC011C;
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

__attribute__((alias("__imp__sub_83BC012C"))) PPC_WEAK_FUNC(sub_83BC012C);
PPC_FUNC_IMPL(__imp__sub_83BC012C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0130"))) PPC_WEAK_FUNC(sub_83BC0130);
PPC_FUNC_IMPL(__imp__sub_83BC0130) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30832
	ctx.r7.s64 = ctx.r8.s64 + 30832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30832);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30832(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30832, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC0158"))) PPC_WEAK_FUNC(sub_83BC0158);
PPC_FUNC_IMPL(__imp__sub_83BC0158) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-1680
	ctx.r6.s64 = ctx.r7.s64 + -1680;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1752(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1752);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30832);
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
	// std r9,-1680(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1680, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC01A0"))) PPC_WEAK_FUNC(sub_83BC01A0);
PPC_FUNC_IMPL(__imp__sub_83BC01A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5328
	ctx.r3.s64 = ctx.r11.s64 + -5328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC01AC"))) PPC_WEAK_FUNC(sub_83BC01AC);
PPC_FUNC_IMPL(__imp__sub_83BC01AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC01B0"))) PPC_WEAK_FUNC(sub_83BC01B0);
PPC_FUNC_IMPL(__imp__sub_83BC01B0) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,30840
	ctx.r3.s64 = ctx.r11.s64 + 30840;
	// bl 0x8259af80
	ctx.lr = 0x83BC01C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-5312
	ctx.r3.s64 = ctx.r10.s64 + -5312;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC01D4;
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

__attribute__((alias("__imp__sub_83BC01E4"))) PPC_WEAK_FUNC(sub_83BC01E4);
PPC_FUNC_IMPL(__imp__sub_83BC01E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC01E8"))) PPC_WEAK_FUNC(sub_83BC01E8);
PPC_FUNC_IMPL(__imp__sub_83BC01E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30820
	ctx.r11.s64 = ctx.r8.s64 + 30820;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-1704(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1704);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5320
	ctx.r3.s64 = ctx.r6.s64 + -5320;
	// stw r10,30820(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30820, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0218"))) PPC_WEAK_FUNC(sub_83BC0218);
PPC_FUNC_IMPL(__imp__sub_83BC0218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5304
	ctx.r3.s64 = ctx.r11.s64 + -5304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0224"))) PPC_WEAK_FUNC(sub_83BC0224);
PPC_FUNC_IMPL(__imp__sub_83BC0224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0228"))) PPC_WEAK_FUNC(sub_83BC0228);
PPC_FUNC_IMPL(__imp__sub_83BC0228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5296
	ctx.r3.s64 = ctx.r11.s64 + -5296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0234"))) PPC_WEAK_FUNC(sub_83BC0234);
PPC_FUNC_IMPL(__imp__sub_83BC0234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0238"))) PPC_WEAK_FUNC(sub_83BC0238);
PPC_FUNC_IMPL(__imp__sub_83BC0238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5288
	ctx.r3.s64 = ctx.r11.s64 + -5288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0244"))) PPC_WEAK_FUNC(sub_83BC0244);
PPC_FUNC_IMPL(__imp__sub_83BC0244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0248"))) PPC_WEAK_FUNC(sub_83BC0248);
PPC_FUNC_IMPL(__imp__sub_83BC0248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5280
	ctx.r3.s64 = ctx.r11.s64 + -5280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0254"))) PPC_WEAK_FUNC(sub_83BC0254);
PPC_FUNC_IMPL(__imp__sub_83BC0254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0258"))) PPC_WEAK_FUNC(sub_83BC0258);
PPC_FUNC_IMPL(__imp__sub_83BC0258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5272
	ctx.r3.s64 = ctx.r11.s64 + -5272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0264"))) PPC_WEAK_FUNC(sub_83BC0264);
PPC_FUNC_IMPL(__imp__sub_83BC0264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0268"))) PPC_WEAK_FUNC(sub_83BC0268);
PPC_FUNC_IMPL(__imp__sub_83BC0268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5264
	ctx.r3.s64 = ctx.r11.s64 + -5264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0274"))) PPC_WEAK_FUNC(sub_83BC0274);
PPC_FUNC_IMPL(__imp__sub_83BC0274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0278"))) PPC_WEAK_FUNC(sub_83BC0278);
PPC_FUNC_IMPL(__imp__sub_83BC0278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5256
	ctx.r3.s64 = ctx.r11.s64 + -5256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0284"))) PPC_WEAK_FUNC(sub_83BC0284);
PPC_FUNC_IMPL(__imp__sub_83BC0284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0288"))) PPC_WEAK_FUNC(sub_83BC0288);
PPC_FUNC_IMPL(__imp__sub_83BC0288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5248
	ctx.r3.s64 = ctx.r11.s64 + -5248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0294"))) PPC_WEAK_FUNC(sub_83BC0294);
PPC_FUNC_IMPL(__imp__sub_83BC0294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0298"))) PPC_WEAK_FUNC(sub_83BC0298);
PPC_FUNC_IMPL(__imp__sub_83BC0298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5240
	ctx.r3.s64 = ctx.r11.s64 + -5240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC02A4"))) PPC_WEAK_FUNC(sub_83BC02A4);
PPC_FUNC_IMPL(__imp__sub_83BC02A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC02A8"))) PPC_WEAK_FUNC(sub_83BC02A8);
PPC_FUNC_IMPL(__imp__sub_83BC02A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5232
	ctx.r3.s64 = ctx.r11.s64 + -5232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC02B4"))) PPC_WEAK_FUNC(sub_83BC02B4);
PPC_FUNC_IMPL(__imp__sub_83BC02B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC02B8"))) PPC_WEAK_FUNC(sub_83BC02B8);
PPC_FUNC_IMPL(__imp__sub_83BC02B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5224
	ctx.r3.s64 = ctx.r11.s64 + -5224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC02C4"))) PPC_WEAK_FUNC(sub_83BC02C4);
PPC_FUNC_IMPL(__imp__sub_83BC02C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC02C8"))) PPC_WEAK_FUNC(sub_83BC02C8);
PPC_FUNC_IMPL(__imp__sub_83BC02C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5216
	ctx.r3.s64 = ctx.r11.s64 + -5216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC02D4"))) PPC_WEAK_FUNC(sub_83BC02D4);
PPC_FUNC_IMPL(__imp__sub_83BC02D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC02D8"))) PPC_WEAK_FUNC(sub_83BC02D8);
PPC_FUNC_IMPL(__imp__sub_83BC02D8) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,31184
	ctx.r3.s64 = ctx.r11.s64 + 31184;
	// bl 0x83523120
	ctx.lr = 0x83BC02F0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-5208
	ctx.r3.s64 = ctx.r10.s64 + -5208;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC02FC;
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

__attribute__((alias("__imp__sub_83BC030C"))) PPC_WEAK_FUNC(sub_83BC030C);
PPC_FUNC_IMPL(__imp__sub_83BC030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0310"))) PPC_WEAK_FUNC(sub_83BC0310);
PPC_FUNC_IMPL(__imp__sub_83BC0310) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31200
	ctx.r7.s64 = ctx.r8.s64 + 31200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31200);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31200, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC0338"))) PPC_WEAK_FUNC(sub_83BC0338);
PPC_FUNC_IMPL(__imp__sub_83BC0338) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-1428
	ctx.r6.s64 = ctx.r7.s64 + -1428;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1500(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1500);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31200);
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
	// std r9,-1428(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1428, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC0380"))) PPC_WEAK_FUNC(sub_83BC0380);
PPC_FUNC_IMPL(__imp__sub_83BC0380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5192
	ctx.r3.s64 = ctx.r11.s64 + -5192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC038C"))) PPC_WEAK_FUNC(sub_83BC038C);
PPC_FUNC_IMPL(__imp__sub_83BC038C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0390"))) PPC_WEAK_FUNC(sub_83BC0390);
PPC_FUNC_IMPL(__imp__sub_83BC0390) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,31208
	ctx.r3.s64 = ctx.r11.s64 + 31208;
	// bl 0x8259af80
	ctx.lr = 0x83BC03A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-5176
	ctx.r3.s64 = ctx.r10.s64 + -5176;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC03B4;
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

__attribute__((alias("__imp__sub_83BC03C4"))) PPC_WEAK_FUNC(sub_83BC03C4);
PPC_FUNC_IMPL(__imp__sub_83BC03C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC03C8"))) PPC_WEAK_FUNC(sub_83BC03C8);
PPC_FUNC_IMPL(__imp__sub_83BC03C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31188
	ctx.r11.s64 = ctx.r8.s64 + 31188;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-1452(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1452);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5184
	ctx.r3.s64 = ctx.r6.s64 + -5184;
	// stw r10,31188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31188, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC03F8"))) PPC_WEAK_FUNC(sub_83BC03F8);
PPC_FUNC_IMPL(__imp__sub_83BC03F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5168
	ctx.r3.s64 = ctx.r11.s64 + -5168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0404"))) PPC_WEAK_FUNC(sub_83BC0404);
PPC_FUNC_IMPL(__imp__sub_83BC0404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0408"))) PPC_WEAK_FUNC(sub_83BC0408);
PPC_FUNC_IMPL(__imp__sub_83BC0408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5160
	ctx.r3.s64 = ctx.r11.s64 + -5160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0414"))) PPC_WEAK_FUNC(sub_83BC0414);
PPC_FUNC_IMPL(__imp__sub_83BC0414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0418"))) PPC_WEAK_FUNC(sub_83BC0418);
PPC_FUNC_IMPL(__imp__sub_83BC0418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5152
	ctx.r3.s64 = ctx.r11.s64 + -5152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0424"))) PPC_WEAK_FUNC(sub_83BC0424);
PPC_FUNC_IMPL(__imp__sub_83BC0424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0428"))) PPC_WEAK_FUNC(sub_83BC0428);
PPC_FUNC_IMPL(__imp__sub_83BC0428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5144
	ctx.r3.s64 = ctx.r11.s64 + -5144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0434"))) PPC_WEAK_FUNC(sub_83BC0434);
PPC_FUNC_IMPL(__imp__sub_83BC0434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0438"))) PPC_WEAK_FUNC(sub_83BC0438);
PPC_FUNC_IMPL(__imp__sub_83BC0438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5136
	ctx.r3.s64 = ctx.r11.s64 + -5136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0444"))) PPC_WEAK_FUNC(sub_83BC0444);
PPC_FUNC_IMPL(__imp__sub_83BC0444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0448"))) PPC_WEAK_FUNC(sub_83BC0448);
PPC_FUNC_IMPL(__imp__sub_83BC0448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5128
	ctx.r3.s64 = ctx.r11.s64 + -5128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0454"))) PPC_WEAK_FUNC(sub_83BC0454);
PPC_FUNC_IMPL(__imp__sub_83BC0454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0458"))) PPC_WEAK_FUNC(sub_83BC0458);
PPC_FUNC_IMPL(__imp__sub_83BC0458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5120
	ctx.r3.s64 = ctx.r11.s64 + -5120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0464"))) PPC_WEAK_FUNC(sub_83BC0464);
PPC_FUNC_IMPL(__imp__sub_83BC0464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0468"))) PPC_WEAK_FUNC(sub_83BC0468);
PPC_FUNC_IMPL(__imp__sub_83BC0468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5112
	ctx.r3.s64 = ctx.r11.s64 + -5112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0474"))) PPC_WEAK_FUNC(sub_83BC0474);
PPC_FUNC_IMPL(__imp__sub_83BC0474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0478"))) PPC_WEAK_FUNC(sub_83BC0478);
PPC_FUNC_IMPL(__imp__sub_83BC0478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5104
	ctx.r3.s64 = ctx.r11.s64 + -5104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0484"))) PPC_WEAK_FUNC(sub_83BC0484);
PPC_FUNC_IMPL(__imp__sub_83BC0484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0488"))) PPC_WEAK_FUNC(sub_83BC0488);
PPC_FUNC_IMPL(__imp__sub_83BC0488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5096
	ctx.r3.s64 = ctx.r11.s64 + -5096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0494"))) PPC_WEAK_FUNC(sub_83BC0494);
PPC_FUNC_IMPL(__imp__sub_83BC0494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0498"))) PPC_WEAK_FUNC(sub_83BC0498);
PPC_FUNC_IMPL(__imp__sub_83BC0498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5088
	ctx.r3.s64 = ctx.r11.s64 + -5088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC04A4"))) PPC_WEAK_FUNC(sub_83BC04A4);
PPC_FUNC_IMPL(__imp__sub_83BC04A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC04A8"))) PPC_WEAK_FUNC(sub_83BC04A8);
PPC_FUNC_IMPL(__imp__sub_83BC04A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5080
	ctx.r3.s64 = ctx.r11.s64 + -5080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC04B4"))) PPC_WEAK_FUNC(sub_83BC04B4);
PPC_FUNC_IMPL(__imp__sub_83BC04B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC04B8"))) PPC_WEAK_FUNC(sub_83BC04B8);
PPC_FUNC_IMPL(__imp__sub_83BC04B8) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,31552
	ctx.r3.s64 = ctx.r11.s64 + 31552;
	// bl 0x83523120
	ctx.lr = 0x83BC04D0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-5072
	ctx.r3.s64 = ctx.r10.s64 + -5072;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC04DC;
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

__attribute__((alias("__imp__sub_83BC04EC"))) PPC_WEAK_FUNC(sub_83BC04EC);
PPC_FUNC_IMPL(__imp__sub_83BC04EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC04F0"))) PPC_WEAK_FUNC(sub_83BC04F0);
PPC_FUNC_IMPL(__imp__sub_83BC04F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31568
	ctx.r7.s64 = ctx.r8.s64 + 31568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31568);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31568, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC0518"))) PPC_WEAK_FUNC(sub_83BC0518);
PPC_FUNC_IMPL(__imp__sub_83BC0518) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-1288
	ctx.r6.s64 = ctx.r7.s64 + -1288;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1360(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1360);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31568(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31568);
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
	// std r9,-1288(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1288, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC0560"))) PPC_WEAK_FUNC(sub_83BC0560);
PPC_FUNC_IMPL(__imp__sub_83BC0560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5056
	ctx.r3.s64 = ctx.r11.s64 + -5056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC056C"))) PPC_WEAK_FUNC(sub_83BC056C);
PPC_FUNC_IMPL(__imp__sub_83BC056C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0570"))) PPC_WEAK_FUNC(sub_83BC0570);
PPC_FUNC_IMPL(__imp__sub_83BC0570) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,31576
	ctx.r3.s64 = ctx.r11.s64 + 31576;
	// bl 0x8259af80
	ctx.lr = 0x83BC0588;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-5040
	ctx.r3.s64 = ctx.r10.s64 + -5040;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC0594;
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

__attribute__((alias("__imp__sub_83BC05A4"))) PPC_WEAK_FUNC(sub_83BC05A4);
PPC_FUNC_IMPL(__imp__sub_83BC05A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC05A8"))) PPC_WEAK_FUNC(sub_83BC05A8);
PPC_FUNC_IMPL(__imp__sub_83BC05A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31556
	ctx.r11.s64 = ctx.r8.s64 + 31556;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-1312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1312);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5048
	ctx.r3.s64 = ctx.r6.s64 + -5048;
	// stw r10,31556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31556, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC05D8"))) PPC_WEAK_FUNC(sub_83BC05D8);
PPC_FUNC_IMPL(__imp__sub_83BC05D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5032
	ctx.r3.s64 = ctx.r11.s64 + -5032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC05E4"))) PPC_WEAK_FUNC(sub_83BC05E4);
PPC_FUNC_IMPL(__imp__sub_83BC05E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC05E8"))) PPC_WEAK_FUNC(sub_83BC05E8);
PPC_FUNC_IMPL(__imp__sub_83BC05E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5024
	ctx.r3.s64 = ctx.r11.s64 + -5024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC05F4"))) PPC_WEAK_FUNC(sub_83BC05F4);
PPC_FUNC_IMPL(__imp__sub_83BC05F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC05F8"))) PPC_WEAK_FUNC(sub_83BC05F8);
PPC_FUNC_IMPL(__imp__sub_83BC05F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5016
	ctx.r3.s64 = ctx.r11.s64 + -5016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0604"))) PPC_WEAK_FUNC(sub_83BC0604);
PPC_FUNC_IMPL(__imp__sub_83BC0604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0608"))) PPC_WEAK_FUNC(sub_83BC0608);
PPC_FUNC_IMPL(__imp__sub_83BC0608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5008
	ctx.r3.s64 = ctx.r11.s64 + -5008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0614"))) PPC_WEAK_FUNC(sub_83BC0614);
PPC_FUNC_IMPL(__imp__sub_83BC0614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0618"))) PPC_WEAK_FUNC(sub_83BC0618);
PPC_FUNC_IMPL(__imp__sub_83BC0618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5000
	ctx.r3.s64 = ctx.r11.s64 + -5000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0624"))) PPC_WEAK_FUNC(sub_83BC0624);
PPC_FUNC_IMPL(__imp__sub_83BC0624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0628"))) PPC_WEAK_FUNC(sub_83BC0628);
PPC_FUNC_IMPL(__imp__sub_83BC0628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4992
	ctx.r3.s64 = ctx.r11.s64 + -4992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0634"))) PPC_WEAK_FUNC(sub_83BC0634);
PPC_FUNC_IMPL(__imp__sub_83BC0634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0638"))) PPC_WEAK_FUNC(sub_83BC0638);
PPC_FUNC_IMPL(__imp__sub_83BC0638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4984
	ctx.r3.s64 = ctx.r11.s64 + -4984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0644"))) PPC_WEAK_FUNC(sub_83BC0644);
PPC_FUNC_IMPL(__imp__sub_83BC0644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0648"))) PPC_WEAK_FUNC(sub_83BC0648);
PPC_FUNC_IMPL(__imp__sub_83BC0648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4976
	ctx.r3.s64 = ctx.r11.s64 + -4976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0654"))) PPC_WEAK_FUNC(sub_83BC0654);
PPC_FUNC_IMPL(__imp__sub_83BC0654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0658"))) PPC_WEAK_FUNC(sub_83BC0658);
PPC_FUNC_IMPL(__imp__sub_83BC0658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4968
	ctx.r3.s64 = ctx.r11.s64 + -4968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0664"))) PPC_WEAK_FUNC(sub_83BC0664);
PPC_FUNC_IMPL(__imp__sub_83BC0664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0668"))) PPC_WEAK_FUNC(sub_83BC0668);
PPC_FUNC_IMPL(__imp__sub_83BC0668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4960
	ctx.r3.s64 = ctx.r11.s64 + -4960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0674"))) PPC_WEAK_FUNC(sub_83BC0674);
PPC_FUNC_IMPL(__imp__sub_83BC0674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0678"))) PPC_WEAK_FUNC(sub_83BC0678);
PPC_FUNC_IMPL(__imp__sub_83BC0678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4952
	ctx.r3.s64 = ctx.r11.s64 + -4952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0684"))) PPC_WEAK_FUNC(sub_83BC0684);
PPC_FUNC_IMPL(__imp__sub_83BC0684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0688"))) PPC_WEAK_FUNC(sub_83BC0688);
PPC_FUNC_IMPL(__imp__sub_83BC0688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4944
	ctx.r3.s64 = ctx.r11.s64 + -4944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0694"))) PPC_WEAK_FUNC(sub_83BC0694);
PPC_FUNC_IMPL(__imp__sub_83BC0694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0698"))) PPC_WEAK_FUNC(sub_83BC0698);
PPC_FUNC_IMPL(__imp__sub_83BC0698) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,31920
	ctx.r3.s64 = ctx.r11.s64 + 31920;
	// bl 0x83523120
	ctx.lr = 0x83BC06B0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-4936
	ctx.r3.s64 = ctx.r10.s64 + -4936;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC06BC;
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

__attribute__((alias("__imp__sub_83BC06CC"))) PPC_WEAK_FUNC(sub_83BC06CC);
PPC_FUNC_IMPL(__imp__sub_83BC06CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC06D0"))) PPC_WEAK_FUNC(sub_83BC06D0);
PPC_FUNC_IMPL(__imp__sub_83BC06D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31936
	ctx.r7.s64 = ctx.r8.s64 + 31936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31936(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC06F8"))) PPC_WEAK_FUNC(sub_83BC06F8);
PPC_FUNC_IMPL(__imp__sub_83BC06F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-956
	ctx.r6.s64 = ctx.r7.s64 + -956;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1028(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1028);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31936(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31936);
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
	// std r9,-956(r7)
	PPC_STORE_U64(ctx.r7.u32 + -956, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC0740"))) PPC_WEAK_FUNC(sub_83BC0740);
PPC_FUNC_IMPL(__imp__sub_83BC0740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4920
	ctx.r3.s64 = ctx.r11.s64 + -4920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC074C"))) PPC_WEAK_FUNC(sub_83BC074C);
PPC_FUNC_IMPL(__imp__sub_83BC074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0750"))) PPC_WEAK_FUNC(sub_83BC0750);
PPC_FUNC_IMPL(__imp__sub_83BC0750) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,31944
	ctx.r3.s64 = ctx.r11.s64 + 31944;
	// bl 0x8259af80
	ctx.lr = 0x83BC0768;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-4904
	ctx.r3.s64 = ctx.r10.s64 + -4904;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC0774;
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

__attribute__((alias("__imp__sub_83BC0784"))) PPC_WEAK_FUNC(sub_83BC0784);
PPC_FUNC_IMPL(__imp__sub_83BC0784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0788"))) PPC_WEAK_FUNC(sub_83BC0788);
PPC_FUNC_IMPL(__imp__sub_83BC0788) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31924
	ctx.r11.s64 = ctx.r8.s64 + 31924;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-980(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -980);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4912
	ctx.r3.s64 = ctx.r6.s64 + -4912;
	// stw r10,31924(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31924, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC07B8"))) PPC_WEAK_FUNC(sub_83BC07B8);
PPC_FUNC_IMPL(__imp__sub_83BC07B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4896
	ctx.r3.s64 = ctx.r11.s64 + -4896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC07C4"))) PPC_WEAK_FUNC(sub_83BC07C4);
PPC_FUNC_IMPL(__imp__sub_83BC07C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC07C8"))) PPC_WEAK_FUNC(sub_83BC07C8);
PPC_FUNC_IMPL(__imp__sub_83BC07C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4888
	ctx.r3.s64 = ctx.r11.s64 + -4888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC07D4"))) PPC_WEAK_FUNC(sub_83BC07D4);
PPC_FUNC_IMPL(__imp__sub_83BC07D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC07D8"))) PPC_WEAK_FUNC(sub_83BC07D8);
PPC_FUNC_IMPL(__imp__sub_83BC07D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4880
	ctx.r3.s64 = ctx.r11.s64 + -4880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC07E4"))) PPC_WEAK_FUNC(sub_83BC07E4);
PPC_FUNC_IMPL(__imp__sub_83BC07E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC07E8"))) PPC_WEAK_FUNC(sub_83BC07E8);
PPC_FUNC_IMPL(__imp__sub_83BC07E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4872
	ctx.r3.s64 = ctx.r11.s64 + -4872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC07F4"))) PPC_WEAK_FUNC(sub_83BC07F4);
PPC_FUNC_IMPL(__imp__sub_83BC07F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC07F8"))) PPC_WEAK_FUNC(sub_83BC07F8);
PPC_FUNC_IMPL(__imp__sub_83BC07F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4864
	ctx.r3.s64 = ctx.r11.s64 + -4864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0804"))) PPC_WEAK_FUNC(sub_83BC0804);
PPC_FUNC_IMPL(__imp__sub_83BC0804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0808"))) PPC_WEAK_FUNC(sub_83BC0808);
PPC_FUNC_IMPL(__imp__sub_83BC0808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4856
	ctx.r3.s64 = ctx.r11.s64 + -4856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0814"))) PPC_WEAK_FUNC(sub_83BC0814);
PPC_FUNC_IMPL(__imp__sub_83BC0814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0818"))) PPC_WEAK_FUNC(sub_83BC0818);
PPC_FUNC_IMPL(__imp__sub_83BC0818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4848
	ctx.r3.s64 = ctx.r11.s64 + -4848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0824"))) PPC_WEAK_FUNC(sub_83BC0824);
PPC_FUNC_IMPL(__imp__sub_83BC0824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0828"))) PPC_WEAK_FUNC(sub_83BC0828);
PPC_FUNC_IMPL(__imp__sub_83BC0828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4840
	ctx.r3.s64 = ctx.r11.s64 + -4840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0834"))) PPC_WEAK_FUNC(sub_83BC0834);
PPC_FUNC_IMPL(__imp__sub_83BC0834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0838"))) PPC_WEAK_FUNC(sub_83BC0838);
PPC_FUNC_IMPL(__imp__sub_83BC0838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4832
	ctx.r3.s64 = ctx.r11.s64 + -4832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0844"))) PPC_WEAK_FUNC(sub_83BC0844);
PPC_FUNC_IMPL(__imp__sub_83BC0844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0848"))) PPC_WEAK_FUNC(sub_83BC0848);
PPC_FUNC_IMPL(__imp__sub_83BC0848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4824
	ctx.r3.s64 = ctx.r11.s64 + -4824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0854"))) PPC_WEAK_FUNC(sub_83BC0854);
PPC_FUNC_IMPL(__imp__sub_83BC0854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0858"))) PPC_WEAK_FUNC(sub_83BC0858);
PPC_FUNC_IMPL(__imp__sub_83BC0858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4816
	ctx.r3.s64 = ctx.r11.s64 + -4816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0864"))) PPC_WEAK_FUNC(sub_83BC0864);
PPC_FUNC_IMPL(__imp__sub_83BC0864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0868"))) PPC_WEAK_FUNC(sub_83BC0868);
PPC_FUNC_IMPL(__imp__sub_83BC0868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4808
	ctx.r3.s64 = ctx.r11.s64 + -4808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0874"))) PPC_WEAK_FUNC(sub_83BC0874);
PPC_FUNC_IMPL(__imp__sub_83BC0874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0878"))) PPC_WEAK_FUNC(sub_83BC0878);
PPC_FUNC_IMPL(__imp__sub_83BC0878) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,32288
	ctx.r3.s64 = ctx.r11.s64 + 32288;
	// bl 0x83523120
	ctx.lr = 0x83BC0890;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-4800
	ctx.r3.s64 = ctx.r10.s64 + -4800;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC089C;
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

__attribute__((alias("__imp__sub_83BC08AC"))) PPC_WEAK_FUNC(sub_83BC08AC);
PPC_FUNC_IMPL(__imp__sub_83BC08AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC08B0"))) PPC_WEAK_FUNC(sub_83BC08B0);
PPC_FUNC_IMPL(__imp__sub_83BC08B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32304
	ctx.r7.s64 = ctx.r8.s64 + 32304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32304(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32304);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32304(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32304, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC08D8"))) PPC_WEAK_FUNC(sub_83BC08D8);
PPC_FUNC_IMPL(__imp__sub_83BC08D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-820
	ctx.r6.s64 = ctx.r7.s64 + -820;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-892(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -892);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32304);
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
	// std r9,-820(r7)
	PPC_STORE_U64(ctx.r7.u32 + -820, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC0920"))) PPC_WEAK_FUNC(sub_83BC0920);
PPC_FUNC_IMPL(__imp__sub_83BC0920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4784
	ctx.r3.s64 = ctx.r11.s64 + -4784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC092C"))) PPC_WEAK_FUNC(sub_83BC092C);
PPC_FUNC_IMPL(__imp__sub_83BC092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0930"))) PPC_WEAK_FUNC(sub_83BC0930);
PPC_FUNC_IMPL(__imp__sub_83BC0930) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,32312
	ctx.r3.s64 = ctx.r11.s64 + 32312;
	// bl 0x8259af80
	ctx.lr = 0x83BC0948;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-4768
	ctx.r3.s64 = ctx.r10.s64 + -4768;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC0954;
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

__attribute__((alias("__imp__sub_83BC0964"))) PPC_WEAK_FUNC(sub_83BC0964);
PPC_FUNC_IMPL(__imp__sub_83BC0964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0968"))) PPC_WEAK_FUNC(sub_83BC0968);
PPC_FUNC_IMPL(__imp__sub_83BC0968) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32292
	ctx.r11.s64 = ctx.r8.s64 + 32292;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-844(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -844);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4776
	ctx.r3.s64 = ctx.r6.s64 + -4776;
	// stw r10,32292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32292, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0998"))) PPC_WEAK_FUNC(sub_83BC0998);
PPC_FUNC_IMPL(__imp__sub_83BC0998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4760
	ctx.r3.s64 = ctx.r11.s64 + -4760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC09A4"))) PPC_WEAK_FUNC(sub_83BC09A4);
PPC_FUNC_IMPL(__imp__sub_83BC09A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC09A8"))) PPC_WEAK_FUNC(sub_83BC09A8);
PPC_FUNC_IMPL(__imp__sub_83BC09A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4752
	ctx.r3.s64 = ctx.r11.s64 + -4752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC09B4"))) PPC_WEAK_FUNC(sub_83BC09B4);
PPC_FUNC_IMPL(__imp__sub_83BC09B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC09B8"))) PPC_WEAK_FUNC(sub_83BC09B8);
PPC_FUNC_IMPL(__imp__sub_83BC09B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4744
	ctx.r3.s64 = ctx.r11.s64 + -4744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC09C4"))) PPC_WEAK_FUNC(sub_83BC09C4);
PPC_FUNC_IMPL(__imp__sub_83BC09C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC09C8"))) PPC_WEAK_FUNC(sub_83BC09C8);
PPC_FUNC_IMPL(__imp__sub_83BC09C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4736
	ctx.r3.s64 = ctx.r11.s64 + -4736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC09D4"))) PPC_WEAK_FUNC(sub_83BC09D4);
PPC_FUNC_IMPL(__imp__sub_83BC09D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC09D8"))) PPC_WEAK_FUNC(sub_83BC09D8);
PPC_FUNC_IMPL(__imp__sub_83BC09D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4728
	ctx.r3.s64 = ctx.r11.s64 + -4728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC09E4"))) PPC_WEAK_FUNC(sub_83BC09E4);
PPC_FUNC_IMPL(__imp__sub_83BC09E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC09E8"))) PPC_WEAK_FUNC(sub_83BC09E8);
PPC_FUNC_IMPL(__imp__sub_83BC09E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4720
	ctx.r3.s64 = ctx.r11.s64 + -4720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC09F4"))) PPC_WEAK_FUNC(sub_83BC09F4);
PPC_FUNC_IMPL(__imp__sub_83BC09F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC09F8"))) PPC_WEAK_FUNC(sub_83BC09F8);
PPC_FUNC_IMPL(__imp__sub_83BC09F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4712
	ctx.r3.s64 = ctx.r11.s64 + -4712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0A04"))) PPC_WEAK_FUNC(sub_83BC0A04);
PPC_FUNC_IMPL(__imp__sub_83BC0A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0A08"))) PPC_WEAK_FUNC(sub_83BC0A08);
PPC_FUNC_IMPL(__imp__sub_83BC0A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4704
	ctx.r3.s64 = ctx.r11.s64 + -4704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0A14"))) PPC_WEAK_FUNC(sub_83BC0A14);
PPC_FUNC_IMPL(__imp__sub_83BC0A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0A18"))) PPC_WEAK_FUNC(sub_83BC0A18);
PPC_FUNC_IMPL(__imp__sub_83BC0A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4696
	ctx.r3.s64 = ctx.r11.s64 + -4696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0A24"))) PPC_WEAK_FUNC(sub_83BC0A24);
PPC_FUNC_IMPL(__imp__sub_83BC0A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0A28"))) PPC_WEAK_FUNC(sub_83BC0A28);
PPC_FUNC_IMPL(__imp__sub_83BC0A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4688
	ctx.r3.s64 = ctx.r11.s64 + -4688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0A34"))) PPC_WEAK_FUNC(sub_83BC0A34);
PPC_FUNC_IMPL(__imp__sub_83BC0A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0A38"))) PPC_WEAK_FUNC(sub_83BC0A38);
PPC_FUNC_IMPL(__imp__sub_83BC0A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4680
	ctx.r3.s64 = ctx.r11.s64 + -4680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0A44"))) PPC_WEAK_FUNC(sub_83BC0A44);
PPC_FUNC_IMPL(__imp__sub_83BC0A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0A48"))) PPC_WEAK_FUNC(sub_83BC0A48);
PPC_FUNC_IMPL(__imp__sub_83BC0A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4672
	ctx.r3.s64 = ctx.r11.s64 + -4672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0A54"))) PPC_WEAK_FUNC(sub_83BC0A54);
PPC_FUNC_IMPL(__imp__sub_83BC0A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0A58"))) PPC_WEAK_FUNC(sub_83BC0A58);
PPC_FUNC_IMPL(__imp__sub_83BC0A58) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,32656
	ctx.r3.s64 = ctx.r11.s64 + 32656;
	// bl 0x83523120
	ctx.lr = 0x83BC0A70;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-4664
	ctx.r3.s64 = ctx.r10.s64 + -4664;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC0A7C;
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

__attribute__((alias("__imp__sub_83BC0A8C"))) PPC_WEAK_FUNC(sub_83BC0A8C);
PPC_FUNC_IMPL(__imp__sub_83BC0A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0A90"))) PPC_WEAK_FUNC(sub_83BC0A90);
PPC_FUNC_IMPL(__imp__sub_83BC0A90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32672
	ctx.r7.s64 = ctx.r8.s64 + 32672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32672);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32672(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32672, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC0AB8"))) PPC_WEAK_FUNC(sub_83BC0AB8);
PPC_FUNC_IMPL(__imp__sub_83BC0AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-688
	ctx.r6.s64 = ctx.r7.s64 + -688;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-760(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -760);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32672(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32672);
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
	// std r9,-688(r7)
	PPC_STORE_U64(ctx.r7.u32 + -688, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC0B00"))) PPC_WEAK_FUNC(sub_83BC0B00);
PPC_FUNC_IMPL(__imp__sub_83BC0B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4648
	ctx.r3.s64 = ctx.r11.s64 + -4648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0B0C"))) PPC_WEAK_FUNC(sub_83BC0B0C);
PPC_FUNC_IMPL(__imp__sub_83BC0B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0B10"))) PPC_WEAK_FUNC(sub_83BC0B10);
PPC_FUNC_IMPL(__imp__sub_83BC0B10) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,32680
	ctx.r3.s64 = ctx.r11.s64 + 32680;
	// bl 0x8259af80
	ctx.lr = 0x83BC0B28;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-4632
	ctx.r3.s64 = ctx.r10.s64 + -4632;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC0B34;
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

__attribute__((alias("__imp__sub_83BC0B44"))) PPC_WEAK_FUNC(sub_83BC0B44);
PPC_FUNC_IMPL(__imp__sub_83BC0B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0B48"))) PPC_WEAK_FUNC(sub_83BC0B48);
PPC_FUNC_IMPL(__imp__sub_83BC0B48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32660
	ctx.r11.s64 = ctx.r8.s64 + 32660;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-712(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -712);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4640
	ctx.r3.s64 = ctx.r6.s64 + -4640;
	// stw r10,32660(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32660, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0B78"))) PPC_WEAK_FUNC(sub_83BC0B78);
PPC_FUNC_IMPL(__imp__sub_83BC0B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4624
	ctx.r3.s64 = ctx.r11.s64 + -4624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0B84"))) PPC_WEAK_FUNC(sub_83BC0B84);
PPC_FUNC_IMPL(__imp__sub_83BC0B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0B88"))) PPC_WEAK_FUNC(sub_83BC0B88);
PPC_FUNC_IMPL(__imp__sub_83BC0B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4616
	ctx.r3.s64 = ctx.r11.s64 + -4616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0B94"))) PPC_WEAK_FUNC(sub_83BC0B94);
PPC_FUNC_IMPL(__imp__sub_83BC0B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0B98"))) PPC_WEAK_FUNC(sub_83BC0B98);
PPC_FUNC_IMPL(__imp__sub_83BC0B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4608
	ctx.r3.s64 = ctx.r11.s64 + -4608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0BA4"))) PPC_WEAK_FUNC(sub_83BC0BA4);
PPC_FUNC_IMPL(__imp__sub_83BC0BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0BA8"))) PPC_WEAK_FUNC(sub_83BC0BA8);
PPC_FUNC_IMPL(__imp__sub_83BC0BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4600
	ctx.r3.s64 = ctx.r11.s64 + -4600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0BB4"))) PPC_WEAK_FUNC(sub_83BC0BB4);
PPC_FUNC_IMPL(__imp__sub_83BC0BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0BB8"))) PPC_WEAK_FUNC(sub_83BC0BB8);
PPC_FUNC_IMPL(__imp__sub_83BC0BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4592
	ctx.r3.s64 = ctx.r11.s64 + -4592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0BC4"))) PPC_WEAK_FUNC(sub_83BC0BC4);
PPC_FUNC_IMPL(__imp__sub_83BC0BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0BC8"))) PPC_WEAK_FUNC(sub_83BC0BC8);
PPC_FUNC_IMPL(__imp__sub_83BC0BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4584
	ctx.r3.s64 = ctx.r11.s64 + -4584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0BD4"))) PPC_WEAK_FUNC(sub_83BC0BD4);
PPC_FUNC_IMPL(__imp__sub_83BC0BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0BD8"))) PPC_WEAK_FUNC(sub_83BC0BD8);
PPC_FUNC_IMPL(__imp__sub_83BC0BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4576
	ctx.r3.s64 = ctx.r11.s64 + -4576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0BE4"))) PPC_WEAK_FUNC(sub_83BC0BE4);
PPC_FUNC_IMPL(__imp__sub_83BC0BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0BE8"))) PPC_WEAK_FUNC(sub_83BC0BE8);
PPC_FUNC_IMPL(__imp__sub_83BC0BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4568
	ctx.r3.s64 = ctx.r11.s64 + -4568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0BF4"))) PPC_WEAK_FUNC(sub_83BC0BF4);
PPC_FUNC_IMPL(__imp__sub_83BC0BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0BF8"))) PPC_WEAK_FUNC(sub_83BC0BF8);
PPC_FUNC_IMPL(__imp__sub_83BC0BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4560
	ctx.r3.s64 = ctx.r11.s64 + -4560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0C04"))) PPC_WEAK_FUNC(sub_83BC0C04);
PPC_FUNC_IMPL(__imp__sub_83BC0C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0C08"))) PPC_WEAK_FUNC(sub_83BC0C08);
PPC_FUNC_IMPL(__imp__sub_83BC0C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4552
	ctx.r3.s64 = ctx.r11.s64 + -4552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0C14"))) PPC_WEAK_FUNC(sub_83BC0C14);
PPC_FUNC_IMPL(__imp__sub_83BC0C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0C18"))) PPC_WEAK_FUNC(sub_83BC0C18);
PPC_FUNC_IMPL(__imp__sub_83BC0C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4544
	ctx.r3.s64 = ctx.r11.s64 + -4544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0C24"))) PPC_WEAK_FUNC(sub_83BC0C24);
PPC_FUNC_IMPL(__imp__sub_83BC0C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0C28"))) PPC_WEAK_FUNC(sub_83BC0C28);
PPC_FUNC_IMPL(__imp__sub_83BC0C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4536
	ctx.r3.s64 = ctx.r11.s64 + -4536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0C34"))) PPC_WEAK_FUNC(sub_83BC0C34);
PPC_FUNC_IMPL(__imp__sub_83BC0C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0C38"))) PPC_WEAK_FUNC(sub_83BC0C38);
PPC_FUNC_IMPL(__imp__sub_83BC0C38) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-32512
	ctx.r3.s64 = ctx.r11.s64 + -32512;
	// bl 0x83523120
	ctx.lr = 0x83BC0C50;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-4528
	ctx.r3.s64 = ctx.r10.s64 + -4528;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC0C5C;
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

__attribute__((alias("__imp__sub_83BC0C6C"))) PPC_WEAK_FUNC(sub_83BC0C6C);
PPC_FUNC_IMPL(__imp__sub_83BC0C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0C70"))) PPC_WEAK_FUNC(sub_83BC0C70);
PPC_FUNC_IMPL(__imp__sub_83BC0C70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32496
	ctx.r7.s64 = ctx.r8.s64 + -32496;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32496);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32496(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32496, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC0C98"))) PPC_WEAK_FUNC(sub_83BC0C98);
PPC_FUNC_IMPL(__imp__sub_83BC0C98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-560
	ctx.r6.s64 = ctx.r7.s64 + -560;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-632(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -632);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32496(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32496);
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
	// std r9,-560(r7)
	PPC_STORE_U64(ctx.r7.u32 + -560, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC0CE0"))) PPC_WEAK_FUNC(sub_83BC0CE0);
PPC_FUNC_IMPL(__imp__sub_83BC0CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4512
	ctx.r3.s64 = ctx.r11.s64 + -4512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0CEC"))) PPC_WEAK_FUNC(sub_83BC0CEC);
PPC_FUNC_IMPL(__imp__sub_83BC0CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0CF0"))) PPC_WEAK_FUNC(sub_83BC0CF0);
PPC_FUNC_IMPL(__imp__sub_83BC0CF0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-32488
	ctx.r3.s64 = ctx.r11.s64 + -32488;
	// bl 0x8259af80
	ctx.lr = 0x83BC0D08;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-4496
	ctx.r3.s64 = ctx.r10.s64 + -4496;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC0D14;
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

__attribute__((alias("__imp__sub_83BC0D24"))) PPC_WEAK_FUNC(sub_83BC0D24);
PPC_FUNC_IMPL(__imp__sub_83BC0D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0D28"))) PPC_WEAK_FUNC(sub_83BC0D28);
PPC_FUNC_IMPL(__imp__sub_83BC0D28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-32508
	ctx.r11.s64 = ctx.r8.s64 + -32508;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -584);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4504
	ctx.r3.s64 = ctx.r6.s64 + -4504;
	// stw r10,-32508(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32508, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0D58"))) PPC_WEAK_FUNC(sub_83BC0D58);
PPC_FUNC_IMPL(__imp__sub_83BC0D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4488
	ctx.r3.s64 = ctx.r11.s64 + -4488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0D64"))) PPC_WEAK_FUNC(sub_83BC0D64);
PPC_FUNC_IMPL(__imp__sub_83BC0D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0D68"))) PPC_WEAK_FUNC(sub_83BC0D68);
PPC_FUNC_IMPL(__imp__sub_83BC0D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4480
	ctx.r3.s64 = ctx.r11.s64 + -4480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0D74"))) PPC_WEAK_FUNC(sub_83BC0D74);
PPC_FUNC_IMPL(__imp__sub_83BC0D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0D78"))) PPC_WEAK_FUNC(sub_83BC0D78);
PPC_FUNC_IMPL(__imp__sub_83BC0D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4472
	ctx.r3.s64 = ctx.r11.s64 + -4472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0D84"))) PPC_WEAK_FUNC(sub_83BC0D84);
PPC_FUNC_IMPL(__imp__sub_83BC0D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0D88"))) PPC_WEAK_FUNC(sub_83BC0D88);
PPC_FUNC_IMPL(__imp__sub_83BC0D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4464
	ctx.r3.s64 = ctx.r11.s64 + -4464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0D94"))) PPC_WEAK_FUNC(sub_83BC0D94);
PPC_FUNC_IMPL(__imp__sub_83BC0D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0D98"))) PPC_WEAK_FUNC(sub_83BC0D98);
PPC_FUNC_IMPL(__imp__sub_83BC0D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4456
	ctx.r3.s64 = ctx.r11.s64 + -4456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0DA4"))) PPC_WEAK_FUNC(sub_83BC0DA4);
PPC_FUNC_IMPL(__imp__sub_83BC0DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0DA8"))) PPC_WEAK_FUNC(sub_83BC0DA8);
PPC_FUNC_IMPL(__imp__sub_83BC0DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4448
	ctx.r3.s64 = ctx.r11.s64 + -4448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0DB4"))) PPC_WEAK_FUNC(sub_83BC0DB4);
PPC_FUNC_IMPL(__imp__sub_83BC0DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0DB8"))) PPC_WEAK_FUNC(sub_83BC0DB8);
PPC_FUNC_IMPL(__imp__sub_83BC0DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4440
	ctx.r3.s64 = ctx.r11.s64 + -4440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0DC4"))) PPC_WEAK_FUNC(sub_83BC0DC4);
PPC_FUNC_IMPL(__imp__sub_83BC0DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0DC8"))) PPC_WEAK_FUNC(sub_83BC0DC8);
PPC_FUNC_IMPL(__imp__sub_83BC0DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4432
	ctx.r3.s64 = ctx.r11.s64 + -4432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0DD4"))) PPC_WEAK_FUNC(sub_83BC0DD4);
PPC_FUNC_IMPL(__imp__sub_83BC0DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0DD8"))) PPC_WEAK_FUNC(sub_83BC0DD8);
PPC_FUNC_IMPL(__imp__sub_83BC0DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4424
	ctx.r3.s64 = ctx.r11.s64 + -4424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0DE4"))) PPC_WEAK_FUNC(sub_83BC0DE4);
PPC_FUNC_IMPL(__imp__sub_83BC0DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0DE8"))) PPC_WEAK_FUNC(sub_83BC0DE8);
PPC_FUNC_IMPL(__imp__sub_83BC0DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4416
	ctx.r3.s64 = ctx.r11.s64 + -4416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0DF4"))) PPC_WEAK_FUNC(sub_83BC0DF4);
PPC_FUNC_IMPL(__imp__sub_83BC0DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0DF8"))) PPC_WEAK_FUNC(sub_83BC0DF8);
PPC_FUNC_IMPL(__imp__sub_83BC0DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4408
	ctx.r3.s64 = ctx.r11.s64 + -4408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0E04"))) PPC_WEAK_FUNC(sub_83BC0E04);
PPC_FUNC_IMPL(__imp__sub_83BC0E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0E08"))) PPC_WEAK_FUNC(sub_83BC0E08);
PPC_FUNC_IMPL(__imp__sub_83BC0E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4400
	ctx.r3.s64 = ctx.r11.s64 + -4400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0E14"))) PPC_WEAK_FUNC(sub_83BC0E14);
PPC_FUNC_IMPL(__imp__sub_83BC0E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0E18"))) PPC_WEAK_FUNC(sub_83BC0E18);
PPC_FUNC_IMPL(__imp__sub_83BC0E18) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-32144
	ctx.r3.s64 = ctx.r11.s64 + -32144;
	// bl 0x83523120
	ctx.lr = 0x83BC0E30;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-4392
	ctx.r3.s64 = ctx.r10.s64 + -4392;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC0E3C;
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

__attribute__((alias("__imp__sub_83BC0E4C"))) PPC_WEAK_FUNC(sub_83BC0E4C);
PPC_FUNC_IMPL(__imp__sub_83BC0E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0E50"))) PPC_WEAK_FUNC(sub_83BC0E50);
PPC_FUNC_IMPL(__imp__sub_83BC0E50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32128
	ctx.r7.s64 = ctx.r8.s64 + -32128;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32128);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32128(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32128, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC0E78"))) PPC_WEAK_FUNC(sub_83BC0E78);
PPC_FUNC_IMPL(__imp__sub_83BC0E78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-408
	ctx.r6.s64 = ctx.r7.s64 + -408;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-480(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -480);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32128);
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
	// std r9,-408(r7)
	PPC_STORE_U64(ctx.r7.u32 + -408, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC0EC0"))) PPC_WEAK_FUNC(sub_83BC0EC0);
PPC_FUNC_IMPL(__imp__sub_83BC0EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4376
	ctx.r3.s64 = ctx.r11.s64 + -4376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0ECC"))) PPC_WEAK_FUNC(sub_83BC0ECC);
PPC_FUNC_IMPL(__imp__sub_83BC0ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0ED0"))) PPC_WEAK_FUNC(sub_83BC0ED0);
PPC_FUNC_IMPL(__imp__sub_83BC0ED0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-32120
	ctx.r3.s64 = ctx.r11.s64 + -32120;
	// bl 0x8259af80
	ctx.lr = 0x83BC0EE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-4360
	ctx.r3.s64 = ctx.r10.s64 + -4360;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC0EF4;
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

__attribute__((alias("__imp__sub_83BC0F04"))) PPC_WEAK_FUNC(sub_83BC0F04);
PPC_FUNC_IMPL(__imp__sub_83BC0F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0F08"))) PPC_WEAK_FUNC(sub_83BC0F08);
PPC_FUNC_IMPL(__imp__sub_83BC0F08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-32140
	ctx.r11.s64 = ctx.r8.s64 + -32140;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-432(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -432);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4368
	ctx.r3.s64 = ctx.r6.s64 + -4368;
	// stw r10,-32140(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32140, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0F38"))) PPC_WEAK_FUNC(sub_83BC0F38);
PPC_FUNC_IMPL(__imp__sub_83BC0F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4352
	ctx.r3.s64 = ctx.r11.s64 + -4352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0F44"))) PPC_WEAK_FUNC(sub_83BC0F44);
PPC_FUNC_IMPL(__imp__sub_83BC0F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0F48"))) PPC_WEAK_FUNC(sub_83BC0F48);
PPC_FUNC_IMPL(__imp__sub_83BC0F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4344
	ctx.r3.s64 = ctx.r11.s64 + -4344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0F54"))) PPC_WEAK_FUNC(sub_83BC0F54);
PPC_FUNC_IMPL(__imp__sub_83BC0F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0F58"))) PPC_WEAK_FUNC(sub_83BC0F58);
PPC_FUNC_IMPL(__imp__sub_83BC0F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4336
	ctx.r3.s64 = ctx.r11.s64 + -4336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0F64"))) PPC_WEAK_FUNC(sub_83BC0F64);
PPC_FUNC_IMPL(__imp__sub_83BC0F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0F68"))) PPC_WEAK_FUNC(sub_83BC0F68);
PPC_FUNC_IMPL(__imp__sub_83BC0F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4328
	ctx.r3.s64 = ctx.r11.s64 + -4328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0F74"))) PPC_WEAK_FUNC(sub_83BC0F74);
PPC_FUNC_IMPL(__imp__sub_83BC0F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0F78"))) PPC_WEAK_FUNC(sub_83BC0F78);
PPC_FUNC_IMPL(__imp__sub_83BC0F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4320
	ctx.r3.s64 = ctx.r11.s64 + -4320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0F84"))) PPC_WEAK_FUNC(sub_83BC0F84);
PPC_FUNC_IMPL(__imp__sub_83BC0F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0F88"))) PPC_WEAK_FUNC(sub_83BC0F88);
PPC_FUNC_IMPL(__imp__sub_83BC0F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4312
	ctx.r3.s64 = ctx.r11.s64 + -4312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0F94"))) PPC_WEAK_FUNC(sub_83BC0F94);
PPC_FUNC_IMPL(__imp__sub_83BC0F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0F98"))) PPC_WEAK_FUNC(sub_83BC0F98);
PPC_FUNC_IMPL(__imp__sub_83BC0F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4304
	ctx.r3.s64 = ctx.r11.s64 + -4304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

