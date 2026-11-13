#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BBF2AC"))) PPC_WEAK_FUNC(sub_83BBF2AC);
PPC_FUNC_IMPL(__imp__sub_83BBF2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF2B0"))) PPC_WEAK_FUNC(sub_83BBF2B0);
PPC_FUNC_IMPL(__imp__sub_83BBF2B0) {
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
	// addi r3,r11,27616
	ctx.r3.s64 = ctx.r11.s64 + 27616;
	// bl 0x8259af80
	ctx.lr = 0x83BBF2C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-6536
	ctx.r3.s64 = ctx.r10.s64 + -6536;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBF2D4;
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

__attribute__((alias("__imp__sub_83BBF2E4"))) PPC_WEAK_FUNC(sub_83BBF2E4);
PPC_FUNC_IMPL(__imp__sub_83BBF2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF2E8"))) PPC_WEAK_FUNC(sub_83BBF2E8);
PPC_FUNC_IMPL(__imp__sub_83BBF2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27596
	ctx.r11.s64 = ctx.r8.s64 + 27596;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-2924(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2924);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6544
	ctx.r3.s64 = ctx.r6.s64 + -6544;
	// stw r10,27596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27596, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF318"))) PPC_WEAK_FUNC(sub_83BBF318);
PPC_FUNC_IMPL(__imp__sub_83BBF318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6528
	ctx.r3.s64 = ctx.r11.s64 + -6528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF324"))) PPC_WEAK_FUNC(sub_83BBF324);
PPC_FUNC_IMPL(__imp__sub_83BBF324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF328"))) PPC_WEAK_FUNC(sub_83BBF328);
PPC_FUNC_IMPL(__imp__sub_83BBF328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6520
	ctx.r3.s64 = ctx.r11.s64 + -6520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF334"))) PPC_WEAK_FUNC(sub_83BBF334);
PPC_FUNC_IMPL(__imp__sub_83BBF334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF338"))) PPC_WEAK_FUNC(sub_83BBF338);
PPC_FUNC_IMPL(__imp__sub_83BBF338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6512
	ctx.r3.s64 = ctx.r11.s64 + -6512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF344"))) PPC_WEAK_FUNC(sub_83BBF344);
PPC_FUNC_IMPL(__imp__sub_83BBF344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF348"))) PPC_WEAK_FUNC(sub_83BBF348);
PPC_FUNC_IMPL(__imp__sub_83BBF348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6504
	ctx.r3.s64 = ctx.r11.s64 + -6504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF354"))) PPC_WEAK_FUNC(sub_83BBF354);
PPC_FUNC_IMPL(__imp__sub_83BBF354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF358"))) PPC_WEAK_FUNC(sub_83BBF358);
PPC_FUNC_IMPL(__imp__sub_83BBF358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6496
	ctx.r3.s64 = ctx.r11.s64 + -6496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF364"))) PPC_WEAK_FUNC(sub_83BBF364);
PPC_FUNC_IMPL(__imp__sub_83BBF364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF368"))) PPC_WEAK_FUNC(sub_83BBF368);
PPC_FUNC_IMPL(__imp__sub_83BBF368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6488
	ctx.r3.s64 = ctx.r11.s64 + -6488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF374"))) PPC_WEAK_FUNC(sub_83BBF374);
PPC_FUNC_IMPL(__imp__sub_83BBF374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF378"))) PPC_WEAK_FUNC(sub_83BBF378);
PPC_FUNC_IMPL(__imp__sub_83BBF378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6480
	ctx.r3.s64 = ctx.r11.s64 + -6480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF384"))) PPC_WEAK_FUNC(sub_83BBF384);
PPC_FUNC_IMPL(__imp__sub_83BBF384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF388"))) PPC_WEAK_FUNC(sub_83BBF388);
PPC_FUNC_IMPL(__imp__sub_83BBF388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6472
	ctx.r3.s64 = ctx.r11.s64 + -6472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF394"))) PPC_WEAK_FUNC(sub_83BBF394);
PPC_FUNC_IMPL(__imp__sub_83BBF394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF398"))) PPC_WEAK_FUNC(sub_83BBF398);
PPC_FUNC_IMPL(__imp__sub_83BBF398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6464
	ctx.r3.s64 = ctx.r11.s64 + -6464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF3A4"))) PPC_WEAK_FUNC(sub_83BBF3A4);
PPC_FUNC_IMPL(__imp__sub_83BBF3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF3A8"))) PPC_WEAK_FUNC(sub_83BBF3A8);
PPC_FUNC_IMPL(__imp__sub_83BBF3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6456
	ctx.r3.s64 = ctx.r11.s64 + -6456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF3B4"))) PPC_WEAK_FUNC(sub_83BBF3B4);
PPC_FUNC_IMPL(__imp__sub_83BBF3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF3B8"))) PPC_WEAK_FUNC(sub_83BBF3B8);
PPC_FUNC_IMPL(__imp__sub_83BBF3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6448
	ctx.r3.s64 = ctx.r11.s64 + -6448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF3C4"))) PPC_WEAK_FUNC(sub_83BBF3C4);
PPC_FUNC_IMPL(__imp__sub_83BBF3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF3C8"))) PPC_WEAK_FUNC(sub_83BBF3C8);
PPC_FUNC_IMPL(__imp__sub_83BBF3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6440
	ctx.r3.s64 = ctx.r11.s64 + -6440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF3D4"))) PPC_WEAK_FUNC(sub_83BBF3D4);
PPC_FUNC_IMPL(__imp__sub_83BBF3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF3D8"))) PPC_WEAK_FUNC(sub_83BBF3D8);
PPC_FUNC_IMPL(__imp__sub_83BBF3D8) {
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
	// addi r3,r11,28240
	ctx.r3.s64 = ctx.r11.s64 + 28240;
	// bl 0x83523120
	ctx.lr = 0x83BBF3F0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-6432
	ctx.r3.s64 = ctx.r10.s64 + -6432;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBF3FC;
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

__attribute__((alias("__imp__sub_83BBF40C"))) PPC_WEAK_FUNC(sub_83BBF40C);
PPC_FUNC_IMPL(__imp__sub_83BBF40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF410"))) PPC_WEAK_FUNC(sub_83BBF410);
PPC_FUNC_IMPL(__imp__sub_83BBF410) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28256
	ctx.r7.s64 = ctx.r8.s64 + 28256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBF438"))) PPC_WEAK_FUNC(sub_83BBF438);
PPC_FUNC_IMPL(__imp__sub_83BBF438) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-2756
	ctx.r6.s64 = ctx.r7.s64 + -2756;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2828(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2828);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28256);
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
	// std r9,-2756(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2756, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBF480"))) PPC_WEAK_FUNC(sub_83BBF480);
PPC_FUNC_IMPL(__imp__sub_83BBF480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6416
	ctx.r3.s64 = ctx.r11.s64 + -6416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF48C"))) PPC_WEAK_FUNC(sub_83BBF48C);
PPC_FUNC_IMPL(__imp__sub_83BBF48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF490"))) PPC_WEAK_FUNC(sub_83BBF490);
PPC_FUNC_IMPL(__imp__sub_83BBF490) {
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
	// addi r3,r11,28264
	ctx.r3.s64 = ctx.r11.s64 + 28264;
	// bl 0x8259af80
	ctx.lr = 0x83BBF4A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-6400
	ctx.r3.s64 = ctx.r10.s64 + -6400;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBF4B4;
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

__attribute__((alias("__imp__sub_83BBF4C4"))) PPC_WEAK_FUNC(sub_83BBF4C4);
PPC_FUNC_IMPL(__imp__sub_83BBF4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF4C8"))) PPC_WEAK_FUNC(sub_83BBF4C8);
PPC_FUNC_IMPL(__imp__sub_83BBF4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28244
	ctx.r11.s64 = ctx.r8.s64 + 28244;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-2780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2780);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6408
	ctx.r3.s64 = ctx.r6.s64 + -6408;
	// stw r10,28244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28244, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF4F8"))) PPC_WEAK_FUNC(sub_83BBF4F8);
PPC_FUNC_IMPL(__imp__sub_83BBF4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6256
	ctx.r3.s64 = ctx.r11.s64 + -6256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF504"))) PPC_WEAK_FUNC(sub_83BBF504);
PPC_FUNC_IMPL(__imp__sub_83BBF504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF508"))) PPC_WEAK_FUNC(sub_83BBF508);
PPC_FUNC_IMPL(__imp__sub_83BBF508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6248
	ctx.r3.s64 = ctx.r11.s64 + -6248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF514"))) PPC_WEAK_FUNC(sub_83BBF514);
PPC_FUNC_IMPL(__imp__sub_83BBF514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF518"))) PPC_WEAK_FUNC(sub_83BBF518);
PPC_FUNC_IMPL(__imp__sub_83BBF518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6240
	ctx.r3.s64 = ctx.r11.s64 + -6240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF524"))) PPC_WEAK_FUNC(sub_83BBF524);
PPC_FUNC_IMPL(__imp__sub_83BBF524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF528"))) PPC_WEAK_FUNC(sub_83BBF528);
PPC_FUNC_IMPL(__imp__sub_83BBF528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6232
	ctx.r3.s64 = ctx.r11.s64 + -6232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF534"))) PPC_WEAK_FUNC(sub_83BBF534);
PPC_FUNC_IMPL(__imp__sub_83BBF534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF538"))) PPC_WEAK_FUNC(sub_83BBF538);
PPC_FUNC_IMPL(__imp__sub_83BBF538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6224
	ctx.r3.s64 = ctx.r11.s64 + -6224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF544"))) PPC_WEAK_FUNC(sub_83BBF544);
PPC_FUNC_IMPL(__imp__sub_83BBF544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF548"))) PPC_WEAK_FUNC(sub_83BBF548);
PPC_FUNC_IMPL(__imp__sub_83BBF548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6216
	ctx.r3.s64 = ctx.r11.s64 + -6216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF554"))) PPC_WEAK_FUNC(sub_83BBF554);
PPC_FUNC_IMPL(__imp__sub_83BBF554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF558"))) PPC_WEAK_FUNC(sub_83BBF558);
PPC_FUNC_IMPL(__imp__sub_83BBF558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6208
	ctx.r3.s64 = ctx.r11.s64 + -6208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF564"))) PPC_WEAK_FUNC(sub_83BBF564);
PPC_FUNC_IMPL(__imp__sub_83BBF564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF568"))) PPC_WEAK_FUNC(sub_83BBF568);
PPC_FUNC_IMPL(__imp__sub_83BBF568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6200
	ctx.r3.s64 = ctx.r11.s64 + -6200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF574"))) PPC_WEAK_FUNC(sub_83BBF574);
PPC_FUNC_IMPL(__imp__sub_83BBF574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF578"))) PPC_WEAK_FUNC(sub_83BBF578);
PPC_FUNC_IMPL(__imp__sub_83BBF578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6192
	ctx.r3.s64 = ctx.r11.s64 + -6192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF584"))) PPC_WEAK_FUNC(sub_83BBF584);
PPC_FUNC_IMPL(__imp__sub_83BBF584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF588"))) PPC_WEAK_FUNC(sub_83BBF588);
PPC_FUNC_IMPL(__imp__sub_83BBF588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6184
	ctx.r3.s64 = ctx.r11.s64 + -6184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF594"))) PPC_WEAK_FUNC(sub_83BBF594);
PPC_FUNC_IMPL(__imp__sub_83BBF594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF598"))) PPC_WEAK_FUNC(sub_83BBF598);
PPC_FUNC_IMPL(__imp__sub_83BBF598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6176
	ctx.r3.s64 = ctx.r11.s64 + -6176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF5A4"))) PPC_WEAK_FUNC(sub_83BBF5A4);
PPC_FUNC_IMPL(__imp__sub_83BBF5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF5A8"))) PPC_WEAK_FUNC(sub_83BBF5A8);
PPC_FUNC_IMPL(__imp__sub_83BBF5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6168
	ctx.r3.s64 = ctx.r11.s64 + -6168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF5B4"))) PPC_WEAK_FUNC(sub_83BBF5B4);
PPC_FUNC_IMPL(__imp__sub_83BBF5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF5B8"))) PPC_WEAK_FUNC(sub_83BBF5B8);
PPC_FUNC_IMPL(__imp__sub_83BBF5B8) {
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
	// addi r3,r11,28608
	ctx.r3.s64 = ctx.r11.s64 + 28608;
	// bl 0x83523120
	ctx.lr = 0x83BBF5D0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-6160
	ctx.r3.s64 = ctx.r10.s64 + -6160;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBF5DC;
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

__attribute__((alias("__imp__sub_83BBF5EC"))) PPC_WEAK_FUNC(sub_83BBF5EC);
PPC_FUNC_IMPL(__imp__sub_83BBF5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF5F0"))) PPC_WEAK_FUNC(sub_83BBF5F0);
PPC_FUNC_IMPL(__imp__sub_83BBF5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28624
	ctx.r7.s64 = ctx.r8.s64 + 28624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28624);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28624(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28624, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBF618"))) PPC_WEAK_FUNC(sub_83BBF618);
PPC_FUNC_IMPL(__imp__sub_83BBF618) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-2600
	ctx.r6.s64 = ctx.r7.s64 + -2600;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2672(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2672);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28624(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28624);
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
	// std r9,-2600(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2600, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBF660"))) PPC_WEAK_FUNC(sub_83BBF660);
PPC_FUNC_IMPL(__imp__sub_83BBF660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6144
	ctx.r3.s64 = ctx.r11.s64 + -6144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF66C"))) PPC_WEAK_FUNC(sub_83BBF66C);
PPC_FUNC_IMPL(__imp__sub_83BBF66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF670"))) PPC_WEAK_FUNC(sub_83BBF670);
PPC_FUNC_IMPL(__imp__sub_83BBF670) {
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
	// addi r3,r11,28632
	ctx.r3.s64 = ctx.r11.s64 + 28632;
	// bl 0x8259af80
	ctx.lr = 0x83BBF688;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-6128
	ctx.r3.s64 = ctx.r10.s64 + -6128;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBF694;
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

__attribute__((alias("__imp__sub_83BBF6A4"))) PPC_WEAK_FUNC(sub_83BBF6A4);
PPC_FUNC_IMPL(__imp__sub_83BBF6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF6A8"))) PPC_WEAK_FUNC(sub_83BBF6A8);
PPC_FUNC_IMPL(__imp__sub_83BBF6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28612
	ctx.r11.s64 = ctx.r8.s64 + 28612;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-2624(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2624);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6136
	ctx.r3.s64 = ctx.r6.s64 + -6136;
	// stw r10,28612(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF6D8"))) PPC_WEAK_FUNC(sub_83BBF6D8);
PPC_FUNC_IMPL(__imp__sub_83BBF6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6120
	ctx.r3.s64 = ctx.r11.s64 + -6120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF6E4"))) PPC_WEAK_FUNC(sub_83BBF6E4);
PPC_FUNC_IMPL(__imp__sub_83BBF6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF6E8"))) PPC_WEAK_FUNC(sub_83BBF6E8);
PPC_FUNC_IMPL(__imp__sub_83BBF6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6112
	ctx.r3.s64 = ctx.r11.s64 + -6112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF6F4"))) PPC_WEAK_FUNC(sub_83BBF6F4);
PPC_FUNC_IMPL(__imp__sub_83BBF6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF6F8"))) PPC_WEAK_FUNC(sub_83BBF6F8);
PPC_FUNC_IMPL(__imp__sub_83BBF6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6104
	ctx.r3.s64 = ctx.r11.s64 + -6104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF704"))) PPC_WEAK_FUNC(sub_83BBF704);
PPC_FUNC_IMPL(__imp__sub_83BBF704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF708"))) PPC_WEAK_FUNC(sub_83BBF708);
PPC_FUNC_IMPL(__imp__sub_83BBF708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6096
	ctx.r3.s64 = ctx.r11.s64 + -6096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF714"))) PPC_WEAK_FUNC(sub_83BBF714);
PPC_FUNC_IMPL(__imp__sub_83BBF714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF718"))) PPC_WEAK_FUNC(sub_83BBF718);
PPC_FUNC_IMPL(__imp__sub_83BBF718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6088
	ctx.r3.s64 = ctx.r11.s64 + -6088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF724"))) PPC_WEAK_FUNC(sub_83BBF724);
PPC_FUNC_IMPL(__imp__sub_83BBF724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF728"))) PPC_WEAK_FUNC(sub_83BBF728);
PPC_FUNC_IMPL(__imp__sub_83BBF728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6080
	ctx.r3.s64 = ctx.r11.s64 + -6080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF734"))) PPC_WEAK_FUNC(sub_83BBF734);
PPC_FUNC_IMPL(__imp__sub_83BBF734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF738"))) PPC_WEAK_FUNC(sub_83BBF738);
PPC_FUNC_IMPL(__imp__sub_83BBF738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6072
	ctx.r3.s64 = ctx.r11.s64 + -6072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF744"))) PPC_WEAK_FUNC(sub_83BBF744);
PPC_FUNC_IMPL(__imp__sub_83BBF744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF748"))) PPC_WEAK_FUNC(sub_83BBF748);
PPC_FUNC_IMPL(__imp__sub_83BBF748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6064
	ctx.r3.s64 = ctx.r11.s64 + -6064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF754"))) PPC_WEAK_FUNC(sub_83BBF754);
PPC_FUNC_IMPL(__imp__sub_83BBF754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF758"))) PPC_WEAK_FUNC(sub_83BBF758);
PPC_FUNC_IMPL(__imp__sub_83BBF758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6056
	ctx.r3.s64 = ctx.r11.s64 + -6056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF764"))) PPC_WEAK_FUNC(sub_83BBF764);
PPC_FUNC_IMPL(__imp__sub_83BBF764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF768"))) PPC_WEAK_FUNC(sub_83BBF768);
PPC_FUNC_IMPL(__imp__sub_83BBF768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6048
	ctx.r3.s64 = ctx.r11.s64 + -6048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF774"))) PPC_WEAK_FUNC(sub_83BBF774);
PPC_FUNC_IMPL(__imp__sub_83BBF774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF778"))) PPC_WEAK_FUNC(sub_83BBF778);
PPC_FUNC_IMPL(__imp__sub_83BBF778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6040
	ctx.r3.s64 = ctx.r11.s64 + -6040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF784"))) PPC_WEAK_FUNC(sub_83BBF784);
PPC_FUNC_IMPL(__imp__sub_83BBF784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF788"))) PPC_WEAK_FUNC(sub_83BBF788);
PPC_FUNC_IMPL(__imp__sub_83BBF788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6032
	ctx.r3.s64 = ctx.r11.s64 + -6032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF794"))) PPC_WEAK_FUNC(sub_83BBF794);
PPC_FUNC_IMPL(__imp__sub_83BBF794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF798"))) PPC_WEAK_FUNC(sub_83BBF798);
PPC_FUNC_IMPL(__imp__sub_83BBF798) {
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
	// addi r3,r11,28976
	ctx.r3.s64 = ctx.r11.s64 + 28976;
	// bl 0x83523120
	ctx.lr = 0x83BBF7B0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-6024
	ctx.r3.s64 = ctx.r10.s64 + -6024;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBF7BC;
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

__attribute__((alias("__imp__sub_83BBF7CC"))) PPC_WEAK_FUNC(sub_83BBF7CC);
PPC_FUNC_IMPL(__imp__sub_83BBF7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF7D0"))) PPC_WEAK_FUNC(sub_83BBF7D0);
PPC_FUNC_IMPL(__imp__sub_83BBF7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28992
	ctx.r7.s64 = ctx.r8.s64 + 28992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28992(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBF7F8"))) PPC_WEAK_FUNC(sub_83BBF7F8);
PPC_FUNC_IMPL(__imp__sub_83BBF7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-2464
	ctx.r6.s64 = ctx.r7.s64 + -2464;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2536(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2536);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28992);
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
	// std r9,-2464(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2464, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBF840"))) PPC_WEAK_FUNC(sub_83BBF840);
PPC_FUNC_IMPL(__imp__sub_83BBF840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-6008
	ctx.r3.s64 = ctx.r11.s64 + -6008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF84C"))) PPC_WEAK_FUNC(sub_83BBF84C);
PPC_FUNC_IMPL(__imp__sub_83BBF84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF850"))) PPC_WEAK_FUNC(sub_83BBF850);
PPC_FUNC_IMPL(__imp__sub_83BBF850) {
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
	// addi r3,r11,29000
	ctx.r3.s64 = ctx.r11.s64 + 29000;
	// bl 0x8259af80
	ctx.lr = 0x83BBF868;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-5992
	ctx.r3.s64 = ctx.r10.s64 + -5992;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBF874;
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

__attribute__((alias("__imp__sub_83BBF884"))) PPC_WEAK_FUNC(sub_83BBF884);
PPC_FUNC_IMPL(__imp__sub_83BBF884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF888"))) PPC_WEAK_FUNC(sub_83BBF888);
PPC_FUNC_IMPL(__imp__sub_83BBF888) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28980
	ctx.r11.s64 = ctx.r8.s64 + 28980;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-2488(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2488);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6000
	ctx.r3.s64 = ctx.r6.s64 + -6000;
	// stw r10,28980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF8B8"))) PPC_WEAK_FUNC(sub_83BBF8B8);
PPC_FUNC_IMPL(__imp__sub_83BBF8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5984
	ctx.r3.s64 = ctx.r11.s64 + -5984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF8C4"))) PPC_WEAK_FUNC(sub_83BBF8C4);
PPC_FUNC_IMPL(__imp__sub_83BBF8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF8C8"))) PPC_WEAK_FUNC(sub_83BBF8C8);
PPC_FUNC_IMPL(__imp__sub_83BBF8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5976
	ctx.r3.s64 = ctx.r11.s64 + -5976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF8D4"))) PPC_WEAK_FUNC(sub_83BBF8D4);
PPC_FUNC_IMPL(__imp__sub_83BBF8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF8D8"))) PPC_WEAK_FUNC(sub_83BBF8D8);
PPC_FUNC_IMPL(__imp__sub_83BBF8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5968
	ctx.r3.s64 = ctx.r11.s64 + -5968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF8E4"))) PPC_WEAK_FUNC(sub_83BBF8E4);
PPC_FUNC_IMPL(__imp__sub_83BBF8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF8E8"))) PPC_WEAK_FUNC(sub_83BBF8E8);
PPC_FUNC_IMPL(__imp__sub_83BBF8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5960
	ctx.r3.s64 = ctx.r11.s64 + -5960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF8F4"))) PPC_WEAK_FUNC(sub_83BBF8F4);
PPC_FUNC_IMPL(__imp__sub_83BBF8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF8F8"))) PPC_WEAK_FUNC(sub_83BBF8F8);
PPC_FUNC_IMPL(__imp__sub_83BBF8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5952
	ctx.r3.s64 = ctx.r11.s64 + -5952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF904"))) PPC_WEAK_FUNC(sub_83BBF904);
PPC_FUNC_IMPL(__imp__sub_83BBF904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF908"))) PPC_WEAK_FUNC(sub_83BBF908);
PPC_FUNC_IMPL(__imp__sub_83BBF908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5944
	ctx.r3.s64 = ctx.r11.s64 + -5944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF914"))) PPC_WEAK_FUNC(sub_83BBF914);
PPC_FUNC_IMPL(__imp__sub_83BBF914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF918"))) PPC_WEAK_FUNC(sub_83BBF918);
PPC_FUNC_IMPL(__imp__sub_83BBF918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5936
	ctx.r3.s64 = ctx.r11.s64 + -5936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF924"))) PPC_WEAK_FUNC(sub_83BBF924);
PPC_FUNC_IMPL(__imp__sub_83BBF924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF928"))) PPC_WEAK_FUNC(sub_83BBF928);
PPC_FUNC_IMPL(__imp__sub_83BBF928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5928
	ctx.r3.s64 = ctx.r11.s64 + -5928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF934"))) PPC_WEAK_FUNC(sub_83BBF934);
PPC_FUNC_IMPL(__imp__sub_83BBF934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF938"))) PPC_WEAK_FUNC(sub_83BBF938);
PPC_FUNC_IMPL(__imp__sub_83BBF938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5920
	ctx.r3.s64 = ctx.r11.s64 + -5920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF944"))) PPC_WEAK_FUNC(sub_83BBF944);
PPC_FUNC_IMPL(__imp__sub_83BBF944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF948"))) PPC_WEAK_FUNC(sub_83BBF948);
PPC_FUNC_IMPL(__imp__sub_83BBF948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5912
	ctx.r3.s64 = ctx.r11.s64 + -5912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF954"))) PPC_WEAK_FUNC(sub_83BBF954);
PPC_FUNC_IMPL(__imp__sub_83BBF954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF958"))) PPC_WEAK_FUNC(sub_83BBF958);
PPC_FUNC_IMPL(__imp__sub_83BBF958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5904
	ctx.r3.s64 = ctx.r11.s64 + -5904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF964"))) PPC_WEAK_FUNC(sub_83BBF964);
PPC_FUNC_IMPL(__imp__sub_83BBF964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF968"))) PPC_WEAK_FUNC(sub_83BBF968);
PPC_FUNC_IMPL(__imp__sub_83BBF968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5896
	ctx.r3.s64 = ctx.r11.s64 + -5896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBF974"))) PPC_WEAK_FUNC(sub_83BBF974);
PPC_FUNC_IMPL(__imp__sub_83BBF974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF978"))) PPC_WEAK_FUNC(sub_83BBF978);
PPC_FUNC_IMPL(__imp__sub_83BBF978) {
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
	// addi r3,r11,29344
	ctx.r3.s64 = ctx.r11.s64 + 29344;
	// bl 0x83523120
	ctx.lr = 0x83BBF990;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-5888
	ctx.r3.s64 = ctx.r10.s64 + -5888;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBF99C;
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

__attribute__((alias("__imp__sub_83BBF9AC"))) PPC_WEAK_FUNC(sub_83BBF9AC);
PPC_FUNC_IMPL(__imp__sub_83BBF9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBF9B0"))) PPC_WEAK_FUNC(sub_83BBF9B0);
PPC_FUNC_IMPL(__imp__sub_83BBF9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29360
	ctx.r7.s64 = ctx.r8.s64 + 29360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29360(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBF9D8"))) PPC_WEAK_FUNC(sub_83BBF9D8);
PPC_FUNC_IMPL(__imp__sub_83BBF9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-2332
	ctx.r6.s64 = ctx.r7.s64 + -2332;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2404(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2404);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29360);
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
	// std r9,-2332(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2332, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBFA20"))) PPC_WEAK_FUNC(sub_83BBFA20);
PPC_FUNC_IMPL(__imp__sub_83BBFA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5872
	ctx.r3.s64 = ctx.r11.s64 + -5872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFA2C"))) PPC_WEAK_FUNC(sub_83BBFA2C);
PPC_FUNC_IMPL(__imp__sub_83BBFA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFA30"))) PPC_WEAK_FUNC(sub_83BBFA30);
PPC_FUNC_IMPL(__imp__sub_83BBFA30) {
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
	// addi r3,r11,29368
	ctx.r3.s64 = ctx.r11.s64 + 29368;
	// bl 0x8259af80
	ctx.lr = 0x83BBFA48;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-5856
	ctx.r3.s64 = ctx.r10.s64 + -5856;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBFA54;
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

__attribute__((alias("__imp__sub_83BBFA64"))) PPC_WEAK_FUNC(sub_83BBFA64);
PPC_FUNC_IMPL(__imp__sub_83BBFA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFA68"))) PPC_WEAK_FUNC(sub_83BBFA68);
PPC_FUNC_IMPL(__imp__sub_83BBFA68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29348
	ctx.r11.s64 = ctx.r8.s64 + 29348;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-2356(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2356);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5864
	ctx.r3.s64 = ctx.r6.s64 + -5864;
	// stw r10,29348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFA98"))) PPC_WEAK_FUNC(sub_83BBFA98);
PPC_FUNC_IMPL(__imp__sub_83BBFA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5848
	ctx.r3.s64 = ctx.r11.s64 + -5848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFAA4"))) PPC_WEAK_FUNC(sub_83BBFAA4);
PPC_FUNC_IMPL(__imp__sub_83BBFAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFAA8"))) PPC_WEAK_FUNC(sub_83BBFAA8);
PPC_FUNC_IMPL(__imp__sub_83BBFAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5840
	ctx.r3.s64 = ctx.r11.s64 + -5840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFAB4"))) PPC_WEAK_FUNC(sub_83BBFAB4);
PPC_FUNC_IMPL(__imp__sub_83BBFAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFAB8"))) PPC_WEAK_FUNC(sub_83BBFAB8);
PPC_FUNC_IMPL(__imp__sub_83BBFAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5832
	ctx.r3.s64 = ctx.r11.s64 + -5832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFAC4"))) PPC_WEAK_FUNC(sub_83BBFAC4);
PPC_FUNC_IMPL(__imp__sub_83BBFAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFAC8"))) PPC_WEAK_FUNC(sub_83BBFAC8);
PPC_FUNC_IMPL(__imp__sub_83BBFAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5824
	ctx.r3.s64 = ctx.r11.s64 + -5824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFAD4"))) PPC_WEAK_FUNC(sub_83BBFAD4);
PPC_FUNC_IMPL(__imp__sub_83BBFAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFAD8"))) PPC_WEAK_FUNC(sub_83BBFAD8);
PPC_FUNC_IMPL(__imp__sub_83BBFAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5816
	ctx.r3.s64 = ctx.r11.s64 + -5816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFAE4"))) PPC_WEAK_FUNC(sub_83BBFAE4);
PPC_FUNC_IMPL(__imp__sub_83BBFAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFAE8"))) PPC_WEAK_FUNC(sub_83BBFAE8);
PPC_FUNC_IMPL(__imp__sub_83BBFAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5808
	ctx.r3.s64 = ctx.r11.s64 + -5808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFAF4"))) PPC_WEAK_FUNC(sub_83BBFAF4);
PPC_FUNC_IMPL(__imp__sub_83BBFAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFAF8"))) PPC_WEAK_FUNC(sub_83BBFAF8);
PPC_FUNC_IMPL(__imp__sub_83BBFAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5800
	ctx.r3.s64 = ctx.r11.s64 + -5800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFB04"))) PPC_WEAK_FUNC(sub_83BBFB04);
PPC_FUNC_IMPL(__imp__sub_83BBFB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFB08"))) PPC_WEAK_FUNC(sub_83BBFB08);
PPC_FUNC_IMPL(__imp__sub_83BBFB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5792
	ctx.r3.s64 = ctx.r11.s64 + -5792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFB14"))) PPC_WEAK_FUNC(sub_83BBFB14);
PPC_FUNC_IMPL(__imp__sub_83BBFB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFB18"))) PPC_WEAK_FUNC(sub_83BBFB18);
PPC_FUNC_IMPL(__imp__sub_83BBFB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5784
	ctx.r3.s64 = ctx.r11.s64 + -5784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFB24"))) PPC_WEAK_FUNC(sub_83BBFB24);
PPC_FUNC_IMPL(__imp__sub_83BBFB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFB28"))) PPC_WEAK_FUNC(sub_83BBFB28);
PPC_FUNC_IMPL(__imp__sub_83BBFB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5776
	ctx.r3.s64 = ctx.r11.s64 + -5776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFB34"))) PPC_WEAK_FUNC(sub_83BBFB34);
PPC_FUNC_IMPL(__imp__sub_83BBFB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFB38"))) PPC_WEAK_FUNC(sub_83BBFB38);
PPC_FUNC_IMPL(__imp__sub_83BBFB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5768
	ctx.r3.s64 = ctx.r11.s64 + -5768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFB44"))) PPC_WEAK_FUNC(sub_83BBFB44);
PPC_FUNC_IMPL(__imp__sub_83BBFB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFB48"))) PPC_WEAK_FUNC(sub_83BBFB48);
PPC_FUNC_IMPL(__imp__sub_83BBFB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5760
	ctx.r3.s64 = ctx.r11.s64 + -5760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFB54"))) PPC_WEAK_FUNC(sub_83BBFB54);
PPC_FUNC_IMPL(__imp__sub_83BBFB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFB58"))) PPC_WEAK_FUNC(sub_83BBFB58);
PPC_FUNC_IMPL(__imp__sub_83BBFB58) {
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
	// addi r3,r11,29712
	ctx.r3.s64 = ctx.r11.s64 + 29712;
	// bl 0x83523120
	ctx.lr = 0x83BBFB70;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-5752
	ctx.r3.s64 = ctx.r10.s64 + -5752;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBFB7C;
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

__attribute__((alias("__imp__sub_83BBFB8C"))) PPC_WEAK_FUNC(sub_83BBFB8C);
PPC_FUNC_IMPL(__imp__sub_83BBFB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFB90"))) PPC_WEAK_FUNC(sub_83BBFB90);
PPC_FUNC_IMPL(__imp__sub_83BBFB90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29728
	ctx.r7.s64 = ctx.r8.s64 + 29728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29728(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29728);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29728(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29728, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBFBB8"))) PPC_WEAK_FUNC(sub_83BBFBB8);
PPC_FUNC_IMPL(__imp__sub_83BBFBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-2164
	ctx.r6.s64 = ctx.r7.s64 + -2164;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2236(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2236);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29728(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29728);
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
	// std r9,-2164(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2164, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBFC00"))) PPC_WEAK_FUNC(sub_83BBFC00);
PPC_FUNC_IMPL(__imp__sub_83BBFC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5736
	ctx.r3.s64 = ctx.r11.s64 + -5736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFC0C"))) PPC_WEAK_FUNC(sub_83BBFC0C);
PPC_FUNC_IMPL(__imp__sub_83BBFC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFC10"))) PPC_WEAK_FUNC(sub_83BBFC10);
PPC_FUNC_IMPL(__imp__sub_83BBFC10) {
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
	// addi r3,r11,29736
	ctx.r3.s64 = ctx.r11.s64 + 29736;
	// bl 0x8259af80
	ctx.lr = 0x83BBFC28;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-5720
	ctx.r3.s64 = ctx.r10.s64 + -5720;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBFC34;
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

__attribute__((alias("__imp__sub_83BBFC44"))) PPC_WEAK_FUNC(sub_83BBFC44);
PPC_FUNC_IMPL(__imp__sub_83BBFC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFC48"))) PPC_WEAK_FUNC(sub_83BBFC48);
PPC_FUNC_IMPL(__imp__sub_83BBFC48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29716
	ctx.r11.s64 = ctx.r8.s64 + 29716;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-2188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2188);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5728
	ctx.r3.s64 = ctx.r6.s64 + -5728;
	// stw r10,29716(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29716, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFC78"))) PPC_WEAK_FUNC(sub_83BBFC78);
PPC_FUNC_IMPL(__imp__sub_83BBFC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5712
	ctx.r3.s64 = ctx.r11.s64 + -5712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFC84"))) PPC_WEAK_FUNC(sub_83BBFC84);
PPC_FUNC_IMPL(__imp__sub_83BBFC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFC88"))) PPC_WEAK_FUNC(sub_83BBFC88);
PPC_FUNC_IMPL(__imp__sub_83BBFC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5704
	ctx.r3.s64 = ctx.r11.s64 + -5704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFC94"))) PPC_WEAK_FUNC(sub_83BBFC94);
PPC_FUNC_IMPL(__imp__sub_83BBFC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFC98"))) PPC_WEAK_FUNC(sub_83BBFC98);
PPC_FUNC_IMPL(__imp__sub_83BBFC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5696
	ctx.r3.s64 = ctx.r11.s64 + -5696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFCA4"))) PPC_WEAK_FUNC(sub_83BBFCA4);
PPC_FUNC_IMPL(__imp__sub_83BBFCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFCA8"))) PPC_WEAK_FUNC(sub_83BBFCA8);
PPC_FUNC_IMPL(__imp__sub_83BBFCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5688
	ctx.r3.s64 = ctx.r11.s64 + -5688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFCB4"))) PPC_WEAK_FUNC(sub_83BBFCB4);
PPC_FUNC_IMPL(__imp__sub_83BBFCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFCB8"))) PPC_WEAK_FUNC(sub_83BBFCB8);
PPC_FUNC_IMPL(__imp__sub_83BBFCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5680
	ctx.r3.s64 = ctx.r11.s64 + -5680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFCC4"))) PPC_WEAK_FUNC(sub_83BBFCC4);
PPC_FUNC_IMPL(__imp__sub_83BBFCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFCC8"))) PPC_WEAK_FUNC(sub_83BBFCC8);
PPC_FUNC_IMPL(__imp__sub_83BBFCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5672
	ctx.r3.s64 = ctx.r11.s64 + -5672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFCD4"))) PPC_WEAK_FUNC(sub_83BBFCD4);
PPC_FUNC_IMPL(__imp__sub_83BBFCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFCD8"))) PPC_WEAK_FUNC(sub_83BBFCD8);
PPC_FUNC_IMPL(__imp__sub_83BBFCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5664
	ctx.r3.s64 = ctx.r11.s64 + -5664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFCE4"))) PPC_WEAK_FUNC(sub_83BBFCE4);
PPC_FUNC_IMPL(__imp__sub_83BBFCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFCE8"))) PPC_WEAK_FUNC(sub_83BBFCE8);
PPC_FUNC_IMPL(__imp__sub_83BBFCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5656
	ctx.r3.s64 = ctx.r11.s64 + -5656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFCF4"))) PPC_WEAK_FUNC(sub_83BBFCF4);
PPC_FUNC_IMPL(__imp__sub_83BBFCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFCF8"))) PPC_WEAK_FUNC(sub_83BBFCF8);
PPC_FUNC_IMPL(__imp__sub_83BBFCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5648
	ctx.r3.s64 = ctx.r11.s64 + -5648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFD04"))) PPC_WEAK_FUNC(sub_83BBFD04);
PPC_FUNC_IMPL(__imp__sub_83BBFD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFD08"))) PPC_WEAK_FUNC(sub_83BBFD08);
PPC_FUNC_IMPL(__imp__sub_83BBFD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5640
	ctx.r3.s64 = ctx.r11.s64 + -5640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFD14"))) PPC_WEAK_FUNC(sub_83BBFD14);
PPC_FUNC_IMPL(__imp__sub_83BBFD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFD18"))) PPC_WEAK_FUNC(sub_83BBFD18);
PPC_FUNC_IMPL(__imp__sub_83BBFD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5632
	ctx.r3.s64 = ctx.r11.s64 + -5632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFD24"))) PPC_WEAK_FUNC(sub_83BBFD24);
PPC_FUNC_IMPL(__imp__sub_83BBFD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFD28"))) PPC_WEAK_FUNC(sub_83BBFD28);
PPC_FUNC_IMPL(__imp__sub_83BBFD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5624
	ctx.r3.s64 = ctx.r11.s64 + -5624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFD34"))) PPC_WEAK_FUNC(sub_83BBFD34);
PPC_FUNC_IMPL(__imp__sub_83BBFD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFD38"))) PPC_WEAK_FUNC(sub_83BBFD38);
PPC_FUNC_IMPL(__imp__sub_83BBFD38) {
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
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// bl 0x83523120
	ctx.lr = 0x83BBFD50;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-5616
	ctx.r3.s64 = ctx.r10.s64 + -5616;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBFD5C;
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

__attribute__((alias("__imp__sub_83BBFD6C"))) PPC_WEAK_FUNC(sub_83BBFD6C);
PPC_FUNC_IMPL(__imp__sub_83BBFD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFD70"))) PPC_WEAK_FUNC(sub_83BBFD70);
PPC_FUNC_IMPL(__imp__sub_83BBFD70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30096
	ctx.r7.s64 = ctx.r8.s64 + 30096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBFD98"))) PPC_WEAK_FUNC(sub_83BBFD98);
PPC_FUNC_IMPL(__imp__sub_83BBFD98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-2032
	ctx.r6.s64 = ctx.r7.s64 + -2032;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2104(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2104);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30096(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30096);
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
	// std r9,-2032(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2032, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBFDE0"))) PPC_WEAK_FUNC(sub_83BBFDE0);
PPC_FUNC_IMPL(__imp__sub_83BBFDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5600
	ctx.r3.s64 = ctx.r11.s64 + -5600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFDEC"))) PPC_WEAK_FUNC(sub_83BBFDEC);
PPC_FUNC_IMPL(__imp__sub_83BBFDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFDF0"))) PPC_WEAK_FUNC(sub_83BBFDF0);
PPC_FUNC_IMPL(__imp__sub_83BBFDF0) {
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
	// addi r3,r11,30104
	ctx.r3.s64 = ctx.r11.s64 + 30104;
	// bl 0x8259af80
	ctx.lr = 0x83BBFE08;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-5584
	ctx.r3.s64 = ctx.r10.s64 + -5584;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBFE14;
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

__attribute__((alias("__imp__sub_83BBFE24"))) PPC_WEAK_FUNC(sub_83BBFE24);
PPC_FUNC_IMPL(__imp__sub_83BBFE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFE28"))) PPC_WEAK_FUNC(sub_83BBFE28);
PPC_FUNC_IMPL(__imp__sub_83BBFE28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30084
	ctx.r11.s64 = ctx.r8.s64 + 30084;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-2056(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2056);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5592
	ctx.r3.s64 = ctx.r6.s64 + -5592;
	// stw r10,30084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30084, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFE58"))) PPC_WEAK_FUNC(sub_83BBFE58);
PPC_FUNC_IMPL(__imp__sub_83BBFE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5576
	ctx.r3.s64 = ctx.r11.s64 + -5576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFE64"))) PPC_WEAK_FUNC(sub_83BBFE64);
PPC_FUNC_IMPL(__imp__sub_83BBFE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFE68"))) PPC_WEAK_FUNC(sub_83BBFE68);
PPC_FUNC_IMPL(__imp__sub_83BBFE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5568
	ctx.r3.s64 = ctx.r11.s64 + -5568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFE74"))) PPC_WEAK_FUNC(sub_83BBFE74);
PPC_FUNC_IMPL(__imp__sub_83BBFE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFE78"))) PPC_WEAK_FUNC(sub_83BBFE78);
PPC_FUNC_IMPL(__imp__sub_83BBFE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5560
	ctx.r3.s64 = ctx.r11.s64 + -5560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFE84"))) PPC_WEAK_FUNC(sub_83BBFE84);
PPC_FUNC_IMPL(__imp__sub_83BBFE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFE88"))) PPC_WEAK_FUNC(sub_83BBFE88);
PPC_FUNC_IMPL(__imp__sub_83BBFE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5552
	ctx.r3.s64 = ctx.r11.s64 + -5552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFE94"))) PPC_WEAK_FUNC(sub_83BBFE94);
PPC_FUNC_IMPL(__imp__sub_83BBFE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFE98"))) PPC_WEAK_FUNC(sub_83BBFE98);
PPC_FUNC_IMPL(__imp__sub_83BBFE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5544
	ctx.r3.s64 = ctx.r11.s64 + -5544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFEA4"))) PPC_WEAK_FUNC(sub_83BBFEA4);
PPC_FUNC_IMPL(__imp__sub_83BBFEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFEA8"))) PPC_WEAK_FUNC(sub_83BBFEA8);
PPC_FUNC_IMPL(__imp__sub_83BBFEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5536
	ctx.r3.s64 = ctx.r11.s64 + -5536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFEB4"))) PPC_WEAK_FUNC(sub_83BBFEB4);
PPC_FUNC_IMPL(__imp__sub_83BBFEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFEB8"))) PPC_WEAK_FUNC(sub_83BBFEB8);
PPC_FUNC_IMPL(__imp__sub_83BBFEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5528
	ctx.r3.s64 = ctx.r11.s64 + -5528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFEC4"))) PPC_WEAK_FUNC(sub_83BBFEC4);
PPC_FUNC_IMPL(__imp__sub_83BBFEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFEC8"))) PPC_WEAK_FUNC(sub_83BBFEC8);
PPC_FUNC_IMPL(__imp__sub_83BBFEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5520
	ctx.r3.s64 = ctx.r11.s64 + -5520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFED4"))) PPC_WEAK_FUNC(sub_83BBFED4);
PPC_FUNC_IMPL(__imp__sub_83BBFED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFED8"))) PPC_WEAK_FUNC(sub_83BBFED8);
PPC_FUNC_IMPL(__imp__sub_83BBFED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5512
	ctx.r3.s64 = ctx.r11.s64 + -5512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFEE4"))) PPC_WEAK_FUNC(sub_83BBFEE4);
PPC_FUNC_IMPL(__imp__sub_83BBFEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFEE8"))) PPC_WEAK_FUNC(sub_83BBFEE8);
PPC_FUNC_IMPL(__imp__sub_83BBFEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5504
	ctx.r3.s64 = ctx.r11.s64 + -5504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFEF4"))) PPC_WEAK_FUNC(sub_83BBFEF4);
PPC_FUNC_IMPL(__imp__sub_83BBFEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFEF8"))) PPC_WEAK_FUNC(sub_83BBFEF8);
PPC_FUNC_IMPL(__imp__sub_83BBFEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5496
	ctx.r3.s64 = ctx.r11.s64 + -5496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFF04"))) PPC_WEAK_FUNC(sub_83BBFF04);
PPC_FUNC_IMPL(__imp__sub_83BBFF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFF08"))) PPC_WEAK_FUNC(sub_83BBFF08);
PPC_FUNC_IMPL(__imp__sub_83BBFF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5488
	ctx.r3.s64 = ctx.r11.s64 + -5488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFF14"))) PPC_WEAK_FUNC(sub_83BBFF14);
PPC_FUNC_IMPL(__imp__sub_83BBFF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFF18"))) PPC_WEAK_FUNC(sub_83BBFF18);
PPC_FUNC_IMPL(__imp__sub_83BBFF18) {
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
	// addi r3,r11,30448
	ctx.r3.s64 = ctx.r11.s64 + 30448;
	// bl 0x83523120
	ctx.lr = 0x83BBFF30;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-5480
	ctx.r3.s64 = ctx.r10.s64 + -5480;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBFF3C;
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

__attribute__((alias("__imp__sub_83BBFF4C"))) PPC_WEAK_FUNC(sub_83BBFF4C);
PPC_FUNC_IMPL(__imp__sub_83BBFF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFF50"))) PPC_WEAK_FUNC(sub_83BBFF50);
PPC_FUNC_IMPL(__imp__sub_83BBFF50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30464
	ctx.r7.s64 = ctx.r8.s64 + 30464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30464(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30464);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30464, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBFF78"))) PPC_WEAK_FUNC(sub_83BBFF78);
PPC_FUNC_IMPL(__imp__sub_83BBFF78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-1864
	ctx.r6.s64 = ctx.r7.s64 + -1864;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1936(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1936);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30464(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30464);
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
	// std r9,-1864(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1864, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBFFC0"))) PPC_WEAK_FUNC(sub_83BBFFC0);
PPC_FUNC_IMPL(__imp__sub_83BBFFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5464
	ctx.r3.s64 = ctx.r11.s64 + -5464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBFFCC"))) PPC_WEAK_FUNC(sub_83BBFFCC);
PPC_FUNC_IMPL(__imp__sub_83BBFFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBFFD0"))) PPC_WEAK_FUNC(sub_83BBFFD0);
PPC_FUNC_IMPL(__imp__sub_83BBFFD0) {
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
	// addi r3,r11,30472
	ctx.r3.s64 = ctx.r11.s64 + 30472;
	// bl 0x8259af80
	ctx.lr = 0x83BBFFE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-5448
	ctx.r3.s64 = ctx.r10.s64 + -5448;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBFFF4;
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

__attribute__((alias("__imp__sub_83BC0004"))) PPC_WEAK_FUNC(sub_83BC0004);
PPC_FUNC_IMPL(__imp__sub_83BC0004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0008"))) PPC_WEAK_FUNC(sub_83BC0008);
PPC_FUNC_IMPL(__imp__sub_83BC0008) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30452
	ctx.r11.s64 = ctx.r8.s64 + 30452;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-1888(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1888);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5456
	ctx.r3.s64 = ctx.r6.s64 + -5456;
	// stw r10,30452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30452, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0038"))) PPC_WEAK_FUNC(sub_83BC0038);
PPC_FUNC_IMPL(__imp__sub_83BC0038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5440
	ctx.r3.s64 = ctx.r11.s64 + -5440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0044"))) PPC_WEAK_FUNC(sub_83BC0044);
PPC_FUNC_IMPL(__imp__sub_83BC0044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0048"))) PPC_WEAK_FUNC(sub_83BC0048);
PPC_FUNC_IMPL(__imp__sub_83BC0048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5432
	ctx.r3.s64 = ctx.r11.s64 + -5432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0054"))) PPC_WEAK_FUNC(sub_83BC0054);
PPC_FUNC_IMPL(__imp__sub_83BC0054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0058"))) PPC_WEAK_FUNC(sub_83BC0058);
PPC_FUNC_IMPL(__imp__sub_83BC0058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5424
	ctx.r3.s64 = ctx.r11.s64 + -5424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0064"))) PPC_WEAK_FUNC(sub_83BC0064);
PPC_FUNC_IMPL(__imp__sub_83BC0064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0068"))) PPC_WEAK_FUNC(sub_83BC0068);
PPC_FUNC_IMPL(__imp__sub_83BC0068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5416
	ctx.r3.s64 = ctx.r11.s64 + -5416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0074"))) PPC_WEAK_FUNC(sub_83BC0074);
PPC_FUNC_IMPL(__imp__sub_83BC0074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0078"))) PPC_WEAK_FUNC(sub_83BC0078);
PPC_FUNC_IMPL(__imp__sub_83BC0078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5408
	ctx.r3.s64 = ctx.r11.s64 + -5408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0084"))) PPC_WEAK_FUNC(sub_83BC0084);
PPC_FUNC_IMPL(__imp__sub_83BC0084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0088"))) PPC_WEAK_FUNC(sub_83BC0088);
PPC_FUNC_IMPL(__imp__sub_83BC0088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5400
	ctx.r3.s64 = ctx.r11.s64 + -5400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0094"))) PPC_WEAK_FUNC(sub_83BC0094);
PPC_FUNC_IMPL(__imp__sub_83BC0094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0098"))) PPC_WEAK_FUNC(sub_83BC0098);
PPC_FUNC_IMPL(__imp__sub_83BC0098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5392
	ctx.r3.s64 = ctx.r11.s64 + -5392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC00A4"))) PPC_WEAK_FUNC(sub_83BC00A4);
PPC_FUNC_IMPL(__imp__sub_83BC00A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC00A8"))) PPC_WEAK_FUNC(sub_83BC00A8);
PPC_FUNC_IMPL(__imp__sub_83BC00A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5384
	ctx.r3.s64 = ctx.r11.s64 + -5384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC00B4"))) PPC_WEAK_FUNC(sub_83BC00B4);
PPC_FUNC_IMPL(__imp__sub_83BC00B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC00B8"))) PPC_WEAK_FUNC(sub_83BC00B8);
PPC_FUNC_IMPL(__imp__sub_83BC00B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5376
	ctx.r3.s64 = ctx.r11.s64 + -5376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC00C4"))) PPC_WEAK_FUNC(sub_83BC00C4);
PPC_FUNC_IMPL(__imp__sub_83BC00C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC00C8"))) PPC_WEAK_FUNC(sub_83BC00C8);
PPC_FUNC_IMPL(__imp__sub_83BC00C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5368
	ctx.r3.s64 = ctx.r11.s64 + -5368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC00D4"))) PPC_WEAK_FUNC(sub_83BC00D4);
PPC_FUNC_IMPL(__imp__sub_83BC00D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC00D8"))) PPC_WEAK_FUNC(sub_83BC00D8);
PPC_FUNC_IMPL(__imp__sub_83BC00D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-5360
	ctx.r3.s64 = ctx.r11.s64 + -5360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

