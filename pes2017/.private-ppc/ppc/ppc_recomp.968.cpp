#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CEE170"))) PPC_WEAK_FUNC(sub_83CEE170);
PPC_FUNC_IMPL(__imp__sub_83CEE170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17416
	ctx.r3.s64 = ctx.r11.s64 + 17416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE17C"))) PPC_WEAK_FUNC(sub_83CEE17C);
PPC_FUNC_IMPL(__imp__sub_83CEE17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE180"))) PPC_WEAK_FUNC(sub_83CEE180);
PPC_FUNC_IMPL(__imp__sub_83CEE180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17424
	ctx.r3.s64 = ctx.r11.s64 + 17424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE18C"))) PPC_WEAK_FUNC(sub_83CEE18C);
PPC_FUNC_IMPL(__imp__sub_83CEE18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE190"))) PPC_WEAK_FUNC(sub_83CEE190);
PPC_FUNC_IMPL(__imp__sub_83CEE190) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,8360
	ctx.r3.s64 = ctx.r11.s64 + 8360;
	// bl 0x83523120
	ctx.lr = 0x83CEE1A8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,17432
	ctx.r3.s64 = ctx.r10.s64 + 17432;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEE1B4;
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

__attribute__((alias("__imp__sub_83CEE1C4"))) PPC_WEAK_FUNC(sub_83CEE1C4);
PPC_FUNC_IMPL(__imp__sub_83CEE1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE1C8"))) PPC_WEAK_FUNC(sub_83CEE1C8);
PPC_FUNC_IMPL(__imp__sub_83CEE1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17448
	ctx.r3.s64 = ctx.r11.s64 + 17448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE1D4"))) PPC_WEAK_FUNC(sub_83CEE1D4);
PPC_FUNC_IMPL(__imp__sub_83CEE1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE1D8"))) PPC_WEAK_FUNC(sub_83CEE1D8);
PPC_FUNC_IMPL(__imp__sub_83CEE1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17456
	ctx.r3.s64 = ctx.r11.s64 + 17456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE1E4"))) PPC_WEAK_FUNC(sub_83CEE1E4);
PPC_FUNC_IMPL(__imp__sub_83CEE1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE1E8"))) PPC_WEAK_FUNC(sub_83CEE1E8);
PPC_FUNC_IMPL(__imp__sub_83CEE1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17464
	ctx.r3.s64 = ctx.r11.s64 + 17464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE1F4"))) PPC_WEAK_FUNC(sub_83CEE1F4);
PPC_FUNC_IMPL(__imp__sub_83CEE1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE1F8"))) PPC_WEAK_FUNC(sub_83CEE1F8);
PPC_FUNC_IMPL(__imp__sub_83CEE1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17472
	ctx.r3.s64 = ctx.r11.s64 + 17472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE204"))) PPC_WEAK_FUNC(sub_83CEE204);
PPC_FUNC_IMPL(__imp__sub_83CEE204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE208"))) PPC_WEAK_FUNC(sub_83CEE208);
PPC_FUNC_IMPL(__imp__sub_83CEE208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17480
	ctx.r3.s64 = ctx.r11.s64 + 17480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE214"))) PPC_WEAK_FUNC(sub_83CEE214);
PPC_FUNC_IMPL(__imp__sub_83CEE214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE218"))) PPC_WEAK_FUNC(sub_83CEE218);
PPC_FUNC_IMPL(__imp__sub_83CEE218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17488
	ctx.r3.s64 = ctx.r11.s64 + 17488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE224"))) PPC_WEAK_FUNC(sub_83CEE224);
PPC_FUNC_IMPL(__imp__sub_83CEE224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE228"))) PPC_WEAK_FUNC(sub_83CEE228);
PPC_FUNC_IMPL(__imp__sub_83CEE228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17496
	ctx.r3.s64 = ctx.r11.s64 + 17496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE234"))) PPC_WEAK_FUNC(sub_83CEE234);
PPC_FUNC_IMPL(__imp__sub_83CEE234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE238"))) PPC_WEAK_FUNC(sub_83CEE238);
PPC_FUNC_IMPL(__imp__sub_83CEE238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17504
	ctx.r3.s64 = ctx.r11.s64 + 17504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE244"))) PPC_WEAK_FUNC(sub_83CEE244);
PPC_FUNC_IMPL(__imp__sub_83CEE244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE248"))) PPC_WEAK_FUNC(sub_83CEE248);
PPC_FUNC_IMPL(__imp__sub_83CEE248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17512
	ctx.r3.s64 = ctx.r11.s64 + 17512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE254"))) PPC_WEAK_FUNC(sub_83CEE254);
PPC_FUNC_IMPL(__imp__sub_83CEE254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE258"))) PPC_WEAK_FUNC(sub_83CEE258);
PPC_FUNC_IMPL(__imp__sub_83CEE258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17520
	ctx.r3.s64 = ctx.r11.s64 + 17520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE264"))) PPC_WEAK_FUNC(sub_83CEE264);
PPC_FUNC_IMPL(__imp__sub_83CEE264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE268"))) PPC_WEAK_FUNC(sub_83CEE268);
PPC_FUNC_IMPL(__imp__sub_83CEE268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17528
	ctx.r3.s64 = ctx.r11.s64 + 17528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE274"))) PPC_WEAK_FUNC(sub_83CEE274);
PPC_FUNC_IMPL(__imp__sub_83CEE274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE278"))) PPC_WEAK_FUNC(sub_83CEE278);
PPC_FUNC_IMPL(__imp__sub_83CEE278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17536
	ctx.r3.s64 = ctx.r11.s64 + 17536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE284"))) PPC_WEAK_FUNC(sub_83CEE284);
PPC_FUNC_IMPL(__imp__sub_83CEE284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE288"))) PPC_WEAK_FUNC(sub_83CEE288);
PPC_FUNC_IMPL(__imp__sub_83CEE288) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,8368
	ctx.r3.s64 = ctx.r11.s64 + 8368;
	// bl 0x83523120
	ctx.lr = 0x83CEE2A0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,17544
	ctx.r3.s64 = ctx.r10.s64 + 17544;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEE2AC;
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

__attribute__((alias("__imp__sub_83CEE2BC"))) PPC_WEAK_FUNC(sub_83CEE2BC);
PPC_FUNC_IMPL(__imp__sub_83CEE2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE2C0"))) PPC_WEAK_FUNC(sub_83CEE2C0);
PPC_FUNC_IMPL(__imp__sub_83CEE2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8384
	ctx.r7.s64 = ctx.r8.s64 + 8384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8384);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8384(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8384, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEE2E8"))) PPC_WEAK_FUNC(sub_83CEE2E8);
PPC_FUNC_IMPL(__imp__sub_83CEE2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-25508
	ctx.r6.s64 = ctx.r7.s64 + -25508;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-25580(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -25580);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8384);
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
	// std r9,-25508(r7)
	PPC_STORE_U64(ctx.r7.u32 + -25508, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEE330"))) PPC_WEAK_FUNC(sub_83CEE330);
PPC_FUNC_IMPL(__imp__sub_83CEE330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17560
	ctx.r3.s64 = ctx.r11.s64 + 17560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE33C"))) PPC_WEAK_FUNC(sub_83CEE33C);
PPC_FUNC_IMPL(__imp__sub_83CEE33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE340"))) PPC_WEAK_FUNC(sub_83CEE340);
PPC_FUNC_IMPL(__imp__sub_83CEE340) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,8392
	ctx.r3.s64 = ctx.r11.s64 + 8392;
	// bl 0x8259af80
	ctx.lr = 0x83CEE358;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,17576
	ctx.r3.s64 = ctx.r10.s64 + 17576;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEE364;
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

__attribute__((alias("__imp__sub_83CEE374"))) PPC_WEAK_FUNC(sub_83CEE374);
PPC_FUNC_IMPL(__imp__sub_83CEE374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE378"))) PPC_WEAK_FUNC(sub_83CEE378);
PPC_FUNC_IMPL(__imp__sub_83CEE378) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8372
	ctx.r11.s64 = ctx.r8.s64 + 8372;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-25532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25532);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17568
	ctx.r3.s64 = ctx.r6.s64 + 17568;
	// stw r10,8372(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8372, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE3A8"))) PPC_WEAK_FUNC(sub_83CEE3A8);
PPC_FUNC_IMPL(__imp__sub_83CEE3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17584
	ctx.r3.s64 = ctx.r11.s64 + 17584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE3B4"))) PPC_WEAK_FUNC(sub_83CEE3B4);
PPC_FUNC_IMPL(__imp__sub_83CEE3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE3B8"))) PPC_WEAK_FUNC(sub_83CEE3B8);
PPC_FUNC_IMPL(__imp__sub_83CEE3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17592
	ctx.r3.s64 = ctx.r11.s64 + 17592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE3C4"))) PPC_WEAK_FUNC(sub_83CEE3C4);
PPC_FUNC_IMPL(__imp__sub_83CEE3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE3C8"))) PPC_WEAK_FUNC(sub_83CEE3C8);
PPC_FUNC_IMPL(__imp__sub_83CEE3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17600
	ctx.r3.s64 = ctx.r11.s64 + 17600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE3D4"))) PPC_WEAK_FUNC(sub_83CEE3D4);
PPC_FUNC_IMPL(__imp__sub_83CEE3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE3D8"))) PPC_WEAK_FUNC(sub_83CEE3D8);
PPC_FUNC_IMPL(__imp__sub_83CEE3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17608
	ctx.r3.s64 = ctx.r11.s64 + 17608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE3E4"))) PPC_WEAK_FUNC(sub_83CEE3E4);
PPC_FUNC_IMPL(__imp__sub_83CEE3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE3E8"))) PPC_WEAK_FUNC(sub_83CEE3E8);
PPC_FUNC_IMPL(__imp__sub_83CEE3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17616
	ctx.r3.s64 = ctx.r11.s64 + 17616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE3F4"))) PPC_WEAK_FUNC(sub_83CEE3F4);
PPC_FUNC_IMPL(__imp__sub_83CEE3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE3F8"))) PPC_WEAK_FUNC(sub_83CEE3F8);
PPC_FUNC_IMPL(__imp__sub_83CEE3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17624
	ctx.r3.s64 = ctx.r11.s64 + 17624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE404"))) PPC_WEAK_FUNC(sub_83CEE404);
PPC_FUNC_IMPL(__imp__sub_83CEE404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE408"))) PPC_WEAK_FUNC(sub_83CEE408);
PPC_FUNC_IMPL(__imp__sub_83CEE408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17632
	ctx.r3.s64 = ctx.r11.s64 + 17632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE414"))) PPC_WEAK_FUNC(sub_83CEE414);
PPC_FUNC_IMPL(__imp__sub_83CEE414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE418"))) PPC_WEAK_FUNC(sub_83CEE418);
PPC_FUNC_IMPL(__imp__sub_83CEE418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17640
	ctx.r3.s64 = ctx.r11.s64 + 17640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE424"))) PPC_WEAK_FUNC(sub_83CEE424);
PPC_FUNC_IMPL(__imp__sub_83CEE424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE428"))) PPC_WEAK_FUNC(sub_83CEE428);
PPC_FUNC_IMPL(__imp__sub_83CEE428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17648
	ctx.r3.s64 = ctx.r11.s64 + 17648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE434"))) PPC_WEAK_FUNC(sub_83CEE434);
PPC_FUNC_IMPL(__imp__sub_83CEE434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE438"))) PPC_WEAK_FUNC(sub_83CEE438);
PPC_FUNC_IMPL(__imp__sub_83CEE438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17656
	ctx.r3.s64 = ctx.r11.s64 + 17656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE444"))) PPC_WEAK_FUNC(sub_83CEE444);
PPC_FUNC_IMPL(__imp__sub_83CEE444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE448"))) PPC_WEAK_FUNC(sub_83CEE448);
PPC_FUNC_IMPL(__imp__sub_83CEE448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17664
	ctx.r3.s64 = ctx.r11.s64 + 17664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE454"))) PPC_WEAK_FUNC(sub_83CEE454);
PPC_FUNC_IMPL(__imp__sub_83CEE454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE458"))) PPC_WEAK_FUNC(sub_83CEE458);
PPC_FUNC_IMPL(__imp__sub_83CEE458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17672
	ctx.r3.s64 = ctx.r11.s64 + 17672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE464"))) PPC_WEAK_FUNC(sub_83CEE464);
PPC_FUNC_IMPL(__imp__sub_83CEE464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE468"))) PPC_WEAK_FUNC(sub_83CEE468);
PPC_FUNC_IMPL(__imp__sub_83CEE468) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8740
	ctx.r7.s64 = ctx.r8.s64 + 8740;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8740(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8740);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8740(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8740, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEE490"))) PPC_WEAK_FUNC(sub_83CEE490);
PPC_FUNC_IMPL(__imp__sub_83CEE490) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,8736
	ctx.r3.s64 = ctx.r11.s64 + 8736;
	// bl 0x83523120
	ctx.lr = 0x83CEE4A8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,17680
	ctx.r3.s64 = ctx.r10.s64 + 17680;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEE4B4;
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

__attribute__((alias("__imp__sub_83CEE4C4"))) PPC_WEAK_FUNC(sub_83CEE4C4);
PPC_FUNC_IMPL(__imp__sub_83CEE4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE4C8"))) PPC_WEAK_FUNC(sub_83CEE4C8);
PPC_FUNC_IMPL(__imp__sub_83CEE4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17696
	ctx.r3.s64 = ctx.r11.s64 + 17696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE4D4"))) PPC_WEAK_FUNC(sub_83CEE4D4);
PPC_FUNC_IMPL(__imp__sub_83CEE4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE4D8"))) PPC_WEAK_FUNC(sub_83CEE4D8);
PPC_FUNC_IMPL(__imp__sub_83CEE4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17704
	ctx.r3.s64 = ctx.r11.s64 + 17704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE4E4"))) PPC_WEAK_FUNC(sub_83CEE4E4);
PPC_FUNC_IMPL(__imp__sub_83CEE4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE4E8"))) PPC_WEAK_FUNC(sub_83CEE4E8);
PPC_FUNC_IMPL(__imp__sub_83CEE4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17712
	ctx.r3.s64 = ctx.r11.s64 + 17712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE4F4"))) PPC_WEAK_FUNC(sub_83CEE4F4);
PPC_FUNC_IMPL(__imp__sub_83CEE4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE4F8"))) PPC_WEAK_FUNC(sub_83CEE4F8);
PPC_FUNC_IMPL(__imp__sub_83CEE4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17720
	ctx.r3.s64 = ctx.r11.s64 + 17720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE504"))) PPC_WEAK_FUNC(sub_83CEE504);
PPC_FUNC_IMPL(__imp__sub_83CEE504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE508"))) PPC_WEAK_FUNC(sub_83CEE508);
PPC_FUNC_IMPL(__imp__sub_83CEE508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17728
	ctx.r3.s64 = ctx.r11.s64 + 17728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE514"))) PPC_WEAK_FUNC(sub_83CEE514);
PPC_FUNC_IMPL(__imp__sub_83CEE514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE518"))) PPC_WEAK_FUNC(sub_83CEE518);
PPC_FUNC_IMPL(__imp__sub_83CEE518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17736
	ctx.r3.s64 = ctx.r11.s64 + 17736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE524"))) PPC_WEAK_FUNC(sub_83CEE524);
PPC_FUNC_IMPL(__imp__sub_83CEE524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE528"))) PPC_WEAK_FUNC(sub_83CEE528);
PPC_FUNC_IMPL(__imp__sub_83CEE528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17744
	ctx.r3.s64 = ctx.r11.s64 + 17744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE534"))) PPC_WEAK_FUNC(sub_83CEE534);
PPC_FUNC_IMPL(__imp__sub_83CEE534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE538"))) PPC_WEAK_FUNC(sub_83CEE538);
PPC_FUNC_IMPL(__imp__sub_83CEE538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17752
	ctx.r3.s64 = ctx.r11.s64 + 17752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE544"))) PPC_WEAK_FUNC(sub_83CEE544);
PPC_FUNC_IMPL(__imp__sub_83CEE544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE548"))) PPC_WEAK_FUNC(sub_83CEE548);
PPC_FUNC_IMPL(__imp__sub_83CEE548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17760
	ctx.r3.s64 = ctx.r11.s64 + 17760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE554"))) PPC_WEAK_FUNC(sub_83CEE554);
PPC_FUNC_IMPL(__imp__sub_83CEE554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE558"))) PPC_WEAK_FUNC(sub_83CEE558);
PPC_FUNC_IMPL(__imp__sub_83CEE558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17768
	ctx.r3.s64 = ctx.r11.s64 + 17768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE564"))) PPC_WEAK_FUNC(sub_83CEE564);
PPC_FUNC_IMPL(__imp__sub_83CEE564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE568"))) PPC_WEAK_FUNC(sub_83CEE568);
PPC_FUNC_IMPL(__imp__sub_83CEE568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17776
	ctx.r3.s64 = ctx.r11.s64 + 17776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE574"))) PPC_WEAK_FUNC(sub_83CEE574);
PPC_FUNC_IMPL(__imp__sub_83CEE574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE578"))) PPC_WEAK_FUNC(sub_83CEE578);
PPC_FUNC_IMPL(__imp__sub_83CEE578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17784
	ctx.r3.s64 = ctx.r11.s64 + 17784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE584"))) PPC_WEAK_FUNC(sub_83CEE584);
PPC_FUNC_IMPL(__imp__sub_83CEE584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE588"))) PPC_WEAK_FUNC(sub_83CEE588);
PPC_FUNC_IMPL(__imp__sub_83CEE588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17792
	ctx.r3.s64 = ctx.r11.s64 + 17792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE594"))) PPC_WEAK_FUNC(sub_83CEE594);
PPC_FUNC_IMPL(__imp__sub_83CEE594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE598"))) PPC_WEAK_FUNC(sub_83CEE598);
PPC_FUNC_IMPL(__imp__sub_83CEE598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17800
	ctx.r3.s64 = ctx.r11.s64 + 17800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE5A4"))) PPC_WEAK_FUNC(sub_83CEE5A4);
PPC_FUNC_IMPL(__imp__sub_83CEE5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE5A8"))) PPC_WEAK_FUNC(sub_83CEE5A8);
PPC_FUNC_IMPL(__imp__sub_83CEE5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17808
	ctx.r3.s64 = ctx.r11.s64 + 17808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE5B4"))) PPC_WEAK_FUNC(sub_83CEE5B4);
PPC_FUNC_IMPL(__imp__sub_83CEE5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE5B8"))) PPC_WEAK_FUNC(sub_83CEE5B8);
PPC_FUNC_IMPL(__imp__sub_83CEE5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17816
	ctx.r3.s64 = ctx.r11.s64 + 17816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE5C4"))) PPC_WEAK_FUNC(sub_83CEE5C4);
PPC_FUNC_IMPL(__imp__sub_83CEE5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE5C8"))) PPC_WEAK_FUNC(sub_83CEE5C8);
PPC_FUNC_IMPL(__imp__sub_83CEE5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17824
	ctx.r3.s64 = ctx.r11.s64 + 17824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE5D4"))) PPC_WEAK_FUNC(sub_83CEE5D4);
PPC_FUNC_IMPL(__imp__sub_83CEE5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE5D8"))) PPC_WEAK_FUNC(sub_83CEE5D8);
PPC_FUNC_IMPL(__imp__sub_83CEE5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17832
	ctx.r3.s64 = ctx.r11.s64 + 17832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE5E4"))) PPC_WEAK_FUNC(sub_83CEE5E4);
PPC_FUNC_IMPL(__imp__sub_83CEE5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE5E8"))) PPC_WEAK_FUNC(sub_83CEE5E8);
PPC_FUNC_IMPL(__imp__sub_83CEE5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17840
	ctx.r3.s64 = ctx.r11.s64 + 17840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE5F4"))) PPC_WEAK_FUNC(sub_83CEE5F4);
PPC_FUNC_IMPL(__imp__sub_83CEE5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE5F8"))) PPC_WEAK_FUNC(sub_83CEE5F8);
PPC_FUNC_IMPL(__imp__sub_83CEE5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17848
	ctx.r3.s64 = ctx.r11.s64 + 17848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE604"))) PPC_WEAK_FUNC(sub_83CEE604);
PPC_FUNC_IMPL(__imp__sub_83CEE604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE608"))) PPC_WEAK_FUNC(sub_83CEE608);
PPC_FUNC_IMPL(__imp__sub_83CEE608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17856
	ctx.r3.s64 = ctx.r11.s64 + 17856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE614"))) PPC_WEAK_FUNC(sub_83CEE614);
PPC_FUNC_IMPL(__imp__sub_83CEE614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE618"))) PPC_WEAK_FUNC(sub_83CEE618);
PPC_FUNC_IMPL(__imp__sub_83CEE618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17864
	ctx.r3.s64 = ctx.r11.s64 + 17864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE624"))) PPC_WEAK_FUNC(sub_83CEE624);
PPC_FUNC_IMPL(__imp__sub_83CEE624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE628"))) PPC_WEAK_FUNC(sub_83CEE628);
PPC_FUNC_IMPL(__imp__sub_83CEE628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17872
	ctx.r3.s64 = ctx.r11.s64 + 17872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE634"))) PPC_WEAK_FUNC(sub_83CEE634);
PPC_FUNC_IMPL(__imp__sub_83CEE634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE638"))) PPC_WEAK_FUNC(sub_83CEE638);
PPC_FUNC_IMPL(__imp__sub_83CEE638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17880
	ctx.r3.s64 = ctx.r11.s64 + 17880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE644"))) PPC_WEAK_FUNC(sub_83CEE644);
PPC_FUNC_IMPL(__imp__sub_83CEE644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE648"))) PPC_WEAK_FUNC(sub_83CEE648);
PPC_FUNC_IMPL(__imp__sub_83CEE648) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,8768
	ctx.r3.s64 = ctx.r11.s64 + 8768;
	// bl 0x83523120
	ctx.lr = 0x83CEE660;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,17888
	ctx.r3.s64 = ctx.r10.s64 + 17888;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEE66C;
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

__attribute__((alias("__imp__sub_83CEE67C"))) PPC_WEAK_FUNC(sub_83CEE67C);
PPC_FUNC_IMPL(__imp__sub_83CEE67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE680"))) PPC_WEAK_FUNC(sub_83CEE680);
PPC_FUNC_IMPL(__imp__sub_83CEE680) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8784
	ctx.r7.s64 = ctx.r8.s64 + 8784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8784);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8784(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8784, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEE6A8"))) PPC_WEAK_FUNC(sub_83CEE6A8);
PPC_FUNC_IMPL(__imp__sub_83CEE6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-25148
	ctx.r6.s64 = ctx.r7.s64 + -25148;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-25220(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -25220);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8784(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8784);
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
	// std r9,-25148(r7)
	PPC_STORE_U64(ctx.r7.u32 + -25148, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEE6F0"))) PPC_WEAK_FUNC(sub_83CEE6F0);
PPC_FUNC_IMPL(__imp__sub_83CEE6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,17904
	ctx.r3.s64 = ctx.r11.s64 + 17904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE6FC"))) PPC_WEAK_FUNC(sub_83CEE6FC);
PPC_FUNC_IMPL(__imp__sub_83CEE6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE700"))) PPC_WEAK_FUNC(sub_83CEE700);
PPC_FUNC_IMPL(__imp__sub_83CEE700) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,8792
	ctx.r3.s64 = ctx.r11.s64 + 8792;
	// bl 0x8259af80
	ctx.lr = 0x83CEE718;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,17920
	ctx.r3.s64 = ctx.r10.s64 + 17920;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEE724;
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

__attribute__((alias("__imp__sub_83CEE734"))) PPC_WEAK_FUNC(sub_83CEE734);
PPC_FUNC_IMPL(__imp__sub_83CEE734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEE738"))) PPC_WEAK_FUNC(sub_83CEE738);
PPC_FUNC_IMPL(__imp__sub_83CEE738) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8772
	ctx.r11.s64 = ctx.r8.s64 + 8772;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-25172(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25172);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17912
	ctx.r3.s64 = ctx.r6.s64 + 17912;
	// stw r10,8772(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8772, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEE768"))) PPC_WEAK_FUNC(sub_83CEE768);
PPC_FUNC_IMPL(__imp__sub_83CEE768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r5,504
	ctx.r5.s64 = 504;
	// addi r31,r11,-25024
	ctx.r31.s64 = ctx.r11.s64 + -25024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x831cdcf0
	ctx.lr = 0x83CEE790;
	sub_831CDCF0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-18560
	ctx.r4.s64 = ctx.r11.s64 + -18560;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x83CEE7A4;
	sub_831CE980(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x831cdcf0
	ctx.lr = 0x83CEE7B4;
	sub_831CDCF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEE7F8"))) PPC_WEAK_FUNC(sub_83CEE7F8);
PPC_FUNC_IMPL(__imp__sub_83CEE7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r5,502
	ctx.r5.s64 = 502;
	// addi r31,r11,-23952
	ctx.r31.s64 = ctx.r11.s64 + -23952;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,26
	ctx.r3.s64 = ctx.r31.s64 + 26;
	// bl 0x831cdcf0
	ctx.lr = 0x83CEE820;
	sub_831CDCF0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-18560
	ctx.r4.s64 = ctx.r11.s64 + -18560;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x83CEE834;
	sub_831CE980(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x831cdcf0
	ctx.lr = 0x83CEE844;
	sub_831CDCF0(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEE888"))) PPC_WEAK_FUNC(sub_83CEE888);
PPC_FUNC_IMPL(__imp__sub_83CEE888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,-22880
	ctx.r31.s64 = ctx.r11.s64 + -22880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x831cdcf0
	ctx.lr = 0x83CEE8B0;
	sub_831CDCF0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-18560
	ctx.r4.s64 = ctx.r11.s64 + -18560;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x83CEE8C4;
	sub_831CE980(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x831cdcf0
	ctx.lr = 0x83CEE8D4;
	sub_831CDCF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEE918"))) PPC_WEAK_FUNC(sub_83CEE918);
PPC_FUNC_IMPL(__imp__sub_83CEE918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r31,r11,-21808
	ctx.r31.s64 = ctx.r11.s64 + -21808;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x831cdcf0
	ctx.lr = 0x83CEE940;
	sub_831CDCF0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-18560
	ctx.r4.s64 = ctx.r11.s64 + -18560;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x83CEE954;
	sub_831CE980(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x831cdcf0
	ctx.lr = 0x83CEE964;
	sub_831CDCF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEE9A8"))) PPC_WEAK_FUNC(sub_83CEE9A8);
PPC_FUNC_IMPL(__imp__sub_83CEE9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r5,484
	ctx.r5.s64 = 484;
	// addi r31,r11,-20736
	ctx.r31.s64 = ctx.r11.s64 + -20736;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x831cdcf0
	ctx.lr = 0x83CEE9D0;
	sub_831CDCF0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-18560
	ctx.r4.s64 = ctx.r11.s64 + -18560;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x83CEE9E4;
	sub_831CE980(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x831cdcf0
	ctx.lr = 0x83CEE9F4;
	sub_831CDCF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEEA38"))) PPC_WEAK_FUNC(sub_83CEEA38);
PPC_FUNC_IMPL(__imp__sub_83CEEA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r5,488
	ctx.r5.s64 = 488;
	// addi r31,r11,-19664
	ctx.r31.s64 = ctx.r11.s64 + -19664;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x831cdcf0
	ctx.lr = 0x83CEEA60;
	sub_831CDCF0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-18560
	ctx.r4.s64 = ctx.r11.s64 + -18560;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x83CEEA74;
	sub_831CE980(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x831cdcf0
	ctx.lr = 0x83CEEA84;
	sub_831CDCF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEEAC8"))) PPC_WEAK_FUNC(sub_83CEEAC8);
PPC_FUNC_IMPL(__imp__sub_83CEEAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,-18592
	ctx.r31.s64 = ctx.r11.s64 + -18592;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x831cdcf0
	ctx.lr = 0x83CEEAF0;
	sub_831CDCF0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-18560
	ctx.r4.s64 = ctx.r11.s64 + -18560;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x83CEEB04;
	sub_831CE980(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x831cdcf0
	ctx.lr = 0x83CEEB14;
	sub_831CDCF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEEB58"))) PPC_WEAK_FUNC(sub_83CEEB58);
PPC_FUNC_IMPL(__imp__sub_83CEEB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// addi r4,r11,26256
	ctx.r4.s64 = ctx.r11.s64 + 26256;
	// addi r3,r10,-1484
	ctx.r3.s64 = ctx.r10.s64 + -1484;
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,-20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -20);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEEB7C"))) PPC_WEAK_FUNC(sub_83CEEB7C);
PPC_FUNC_IMPL(__imp__sub_83CEEB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEEB80"))) PPC_WEAK_FUNC(sub_83CEEB80);
PPC_FUNC_IMPL(__imp__sub_83CEEB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// addi r4,r11,26312
	ctx.r4.s64 = ctx.r11.s64 + 26312;
	// addi r3,r10,-1472
	ctx.r3.s64 = ctx.r10.s64 + -1472;
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,-20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -20);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEEBA4"))) PPC_WEAK_FUNC(sub_83CEEBA4);
PPC_FUNC_IMPL(__imp__sub_83CEEBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEEBA8"))) PPC_WEAK_FUNC(sub_83CEEBA8);
PPC_FUNC_IMPL(__imp__sub_83CEEBA8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-1456
	ctx.r3.s64 = ctx.r11.s64 + -1456;
	// bl 0x82572fa0
	ctx.lr = 0x83CEEBC4;
	sub_82572FA0(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,17928
	ctx.r3.s64 = ctx.r10.s64 + 17928;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEEBD0;
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

__attribute__((alias("__imp__sub_83CEEBE0"))) PPC_WEAK_FUNC(sub_83CEEBE0);
PPC_FUNC_IMPL(__imp__sub_83CEEBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-1304
	ctx.r3.s64 = ctx.r11.s64 + -1304;
	// b 0x8257efb8
	sub_8257EFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEEBF0"))) PPC_WEAK_FUNC(sub_83CEEBF0);
PPC_FUNC_IMPL(__imp__sub_83CEEBF0) {
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
	// addi r3,r11,-1296
	ctx.r3.s64 = ctx.r11.s64 + -1296;
	// bl 0x83a759f8
	ctx.lr = 0x83CEEC08;
	sub_83A759F8(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,17944
	ctx.r3.s64 = ctx.r10.s64 + 17944;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEEC14;
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

__attribute__((alias("__imp__sub_83CEEC24"))) PPC_WEAK_FUNC(sub_83CEEC24);
PPC_FUNC_IMPL(__imp__sub_83CEEC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEEC28"))) PPC_WEAK_FUNC(sub_83CEEC28);
PPC_FUNC_IMPL(__imp__sub_83CEEC28) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-1280
	ctx.r3.s64 = ctx.r11.s64 + -1280;
	// bl 0x83b2d9f0
	ctx.lr = 0x83CEEC44;
	sub_83B2D9F0(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,17960
	ctx.r3.s64 = ctx.r10.s64 + 17960;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEEC50;
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

__attribute__((alias("__imp__sub_83CEEC60"))) PPC_WEAK_FUNC(sub_83CEEC60);
PPC_FUNC_IMPL(__imp__sub_83CEEC60) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-1264
	ctx.r3.s64 = ctx.r11.s64 + -1264;
	// bl 0x83b2d9f0
	ctx.lr = 0x83CEEC7C;
	sub_83B2D9F0(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,17976
	ctx.r3.s64 = ctx.r10.s64 + 17976;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEEC88;
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

__attribute__((alias("__imp__sub_83CEEC98"))) PPC_WEAK_FUNC(sub_83CEEC98);
PPC_FUNC_IMPL(__imp__sub_83CEEC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r9,-31738
	ctx.r9.s64 = -2079981568;
	// addi r11,r10,28056
	ctx.r11.s64 = ctx.r10.s64 + 28056;
	// addi r3,r9,-1240
	ctx.r3.s64 = ctx.r9.s64 + -1240;
	// addi r5,r11,76
	ctx.r5.s64 = ctx.r11.s64 + 76;
	// lfs f3,28056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28056);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r11,92
	ctx.r4.s64 = ctx.r11.s64 + 92;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEECC0"))) PPC_WEAK_FUNC(sub_83CEECC0);
PPC_FUNC_IMPL(__imp__sub_83CEECC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-1248
	ctx.r3.s64 = ctx.r11.s64 + -1248;
	// b 0x8257efb8
	sub_8257EFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEECD0"))) PPC_WEAK_FUNC(sub_83CEECD0);
PPC_FUNC_IMPL(__imp__sub_83CEECD0) {
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
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// addi r5,r11,28160
	ctx.r5.s64 = ctx.r11.s64 + 28160;
	// addi r3,r10,-1224
	ctx.r3.s64 = ctx.r10.s64 + -1224;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83CEECF4;
	sub_8241F1E8(ctx, base);
	// lis r9,-31785
	ctx.r9.s64 = -2083061760;
	// addi r3,r9,17992
	ctx.r3.s64 = ctx.r9.s64 + 17992;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEED00;
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

__attribute__((alias("__imp__sub_83CEED10"))) PPC_WEAK_FUNC(sub_83CEED10);
PPC_FUNC_IMPL(__imp__sub_83CEED10) {
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
	// addi r3,r11,-1200
	ctx.r3.s64 = ctx.r11.s64 + -1200;
	// bl 0x83523120
	ctx.lr = 0x83CEED28;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,18008
	ctx.r3.s64 = ctx.r10.s64 + 18008;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEED34;
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

__attribute__((alias("__imp__sub_83CEED44"))) PPC_WEAK_FUNC(sub_83CEED44);
PPC_FUNC_IMPL(__imp__sub_83CEED44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEED48"))) PPC_WEAK_FUNC(sub_83CEED48);
PPC_FUNC_IMPL(__imp__sub_83CEED48) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83CEED50;
	__savegprlr_19(ctx, base);
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// addi r11,r11,29120
	ctx.r11.s64 = ctx.r11.s64 + 29120;
	// addi r10,r10,29104
	ctx.r10.s64 = ctx.r10.s64 + 29104;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// lis r8,-32204
	ctx.r8.s64 = -2110521344;
	// addi r9,r9,29088
	ctx.r9.s64 = ctx.r9.s64 + 29088;
	// lis r7,-32204
	ctx.r7.s64 = -2110521344;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-32204
	ctx.r6.s64 = -2110521344;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r4,-32204
	ctx.r4.s64 = -2110521344;
	// lis r3,-32204
	ctx.r3.s64 = -2110521344;
	// lis r31,-32204
	ctx.r31.s64 = -2110521344;
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r30,-32204
	ctx.r30.s64 = -2110521344;
	// addi r8,r8,29072
	ctx.r8.s64 = ctx.r8.s64 + 29072;
	// addi r7,r7,29056
	ctx.r7.s64 = ctx.r7.s64 + 29056;
	// addi r6,r6,29040
	ctx.r6.s64 = ctx.r6.s64 + 29040;
	// addi r4,r4,29024
	ctx.r4.s64 = ctx.r4.s64 + 29024;
	// addi r3,r3,29008
	ctx.r3.s64 = ctx.r3.s64 + 29008;
	// addi r11,r31,28992
	ctx.r11.s64 = ctx.r31.s64 + 28992;
	// lvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r30,28976
	ctx.r10.s64 = ctx.r30.s64 + 28976;
	// lvx128 v59,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r29,-32204
	ctx.r29.s64 = -2110521344;
	// lvx128 v58,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r28,-32204
	ctx.r28.s64 = -2110521344;
	// lvx128 v57,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r29,28960
	ctx.r9.s64 = ctx.r29.s64 + 28960;
	// lvx128 v56,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r27,-32204
	ctx.r27.s64 = -2110521344;
	// lvx128 v55,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r26,-32204
	ctx.r26.s64 = -2110521344;
	// lvx128 v54,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r25,-32204
	ctx.r25.s64 = -2110521344;
	// lis r24,-32204
	ctx.r24.s64 = -2110521344;
	// lis r23,-32204
	ctx.r23.s64 = -2110521344;
	// lvx128 v53,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r22,-32204
	ctx.r22.s64 = -2110521344;
	// addi r8,r28,28944
	ctx.r8.s64 = ctx.r28.s64 + 28944;
	// addi r7,r27,28928
	ctx.r7.s64 = ctx.r27.s64 + 28928;
	// addi r6,r26,28912
	ctx.r6.s64 = ctx.r26.s64 + 28912;
	// addi r4,r25,28896
	ctx.r4.s64 = ctx.r25.s64 + 28896;
	// addi r3,r24,28880
	ctx.r3.s64 = ctx.r24.s64 + 28880;
	// addi r11,r23,28864
	ctx.r11.s64 = ctx.r23.s64 + 28864;
	// lvx128 v52,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r22,28848
	ctx.r10.s64 = ctx.r22.s64 + 28848;
	// lvx128 v51,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r21,-32204
	ctx.r21.s64 = -2110521344;
	// lvx128 v50,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r5,-31738
	ctx.r5.s64 = -2079981568;
	// lvx128 v49,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r21,28832
	ctx.r9.s64 = ctx.r21.s64 + 28832;
	// lvx128 v48,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r20,-32204
	ctx.r20.s64 = -2110521344;
	// lvx128 v47,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r19,-32204
	ctx.r19.s64 = -2110521344;
	// lvx128 v46,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,-1152
	ctx.r5.s64 = ctx.r5.s64 + -1152;
	// addi r8,r20,28816
	ctx.r8.s64 = ctx.r20.s64 + 28816;
	// li r7,16
	ctx.r7.s64 = 16;
	// lvx128 v45,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,32
	ctx.r6.s64 = 32;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,64
	ctx.r3.s64 = 64;
	// stvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,80
	ctx.r11.s64 = 80;
	// lvx128 v44,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r19,28800
	ctx.r10.s64 = ctx.r19.s64 + 28800;
	// stvx128 v62,r5,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// stvx128 v61,r5,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r5,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,96
	ctx.r8.s64 = 96;
	// stvx128 v59,r5,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r9,28784
	ctx.r7.s64 = ctx.r9.s64 + 28784;
	// stvx128 v58,r5,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,112
	ctx.r6.s64 = 112;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,128
	ctx.r4.s64 = 128;
	// stvx128 v57,r5,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,144
	ctx.r3.s64 = 144;
	// li r11,160
	ctx.r11.s64 = 160;
	// lvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,176
	ctx.r10.s64 = 176;
	// stvx128 v56,r5,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,192
	ctx.r9.s64 = 192;
	// stvx128 v55,r5,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,208
	ctx.r8.s64 = 208;
	// stvx128 v54,r5,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,224
	ctx.r7.s64 = 224;
	// stvx128 v53,r5,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,240
	ctx.r6.s64 = 240;
	// stvx128 v52,r5,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,256
	ctx.r4.s64 = 256;
	// stvx128 v51,r5,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,272
	ctx.r3.s64 = 272;
	// stvx128 v50,r5,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,288
	ctx.r11.s64 = 288;
	// li r10,304
	ctx.r10.s64 = 304;
	// stvx128 v49,r5,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,320
	ctx.r9.s64 = 320;
	// stvx128 v48,r5,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,336
	ctx.r8.s64 = 336;
	// stvx128 v47,r5,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v46,r5,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v45,r5,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v44,r5,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r5,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEEF10"))) PPC_WEAK_FUNC(sub_83CEEF10);
PPC_FUNC_IMPL(__imp__sub_83CEEF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r7,255
	ctx.r7.s64 = 255;
	// addi r3,r11,-1164
	ctx.r3.s64 = ctx.r11.s64 + -1164;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x82bee188
	sub_82BEE188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEEF2C"))) PPC_WEAK_FUNC(sub_83CEEF2C);
PPC_FUNC_IMPL(__imp__sub_83CEEF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEEF30"))) PPC_WEAK_FUNC(sub_83CEEF30);
PPC_FUNC_IMPL(__imp__sub_83CEEF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r7,255
	ctx.r7.s64 = 255;
	// addi r31,r11,-1196
	ctx.r31.s64 = ctx.r11.s64 + -1196;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82bee188
	ctx.lr = 0x83CEEF60;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82bee188
	ctx.lr = 0x83CEEF78;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,37
	ctx.r6.s64 = 37;
	// li r5,33
	ctx.r5.s64 = 33;
	// li r4,170
	ctx.r4.s64 = 170;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82bee188
	ctx.lr = 0x83CEEF90;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,78
	ctx.r5.s64 = 78;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82bee188
	ctx.lr = 0x83CEEFA8;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,212
	ctx.r5.s64 = 212;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82bee188
	ctx.lr = 0x83CEEFC0;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,49
	ctx.r6.s64 = 49;
	// li r5,95
	ctx.r5.s64 = 95;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82bee188
	ctx.lr = 0x83CEEFD8;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,139
	ctx.r6.s64 = 139;
	// li r5,70
	ctx.r5.s64 = 70;
	// li r4,211
	ctx.r4.s64 = 211;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82bee188
	ctx.lr = 0x83CEEFF0;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,210
	ctx.r6.s64 = 210;
	// li r5,187
	ctx.r5.s64 = 187;
	// li r4,93
	ctx.r4.s64 = 93;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82bee188
	ctx.lr = 0x83CEF008;
	sub_82BEE188(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEF01C"))) PPC_WEAK_FUNC(sub_83CEF01C);
PPC_FUNC_IMPL(__imp__sub_83CEF01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF020"))) PPC_WEAK_FUNC(sub_83CEF020);
PPC_FUNC_IMPL(__imp__sub_83CEF020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r7,255
	ctx.r7.s64 = 255;
	// addi r31,r11,-788
	ctx.r31.s64 = ctx.r11.s64 + -788;
	// li r6,210
	ctx.r6.s64 = 210;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,210
	ctx.r5.s64 = 210;
	// li r4,210
	ctx.r4.s64 = 210;
	// bl 0x82bee188
	ctx.lr = 0x83CEF050;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82bee188
	ctx.lr = 0x83CEF068;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,58
	ctx.r6.s64 = 58;
	// li r5,55
	ctx.r5.s64 = 55;
	// li r4,170
	ctx.r4.s64 = 170;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82bee188
	ctx.lr = 0x83CEF080;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,195
	ctx.r6.s64 = 195;
	// li r5,103
	ctx.r5.s64 = 103;
	// li r4,63
	ctx.r4.s64 = 63;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82bee188
	ctx.lr = 0x83CEF098;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,59
	ctx.r6.s64 = 59;
	// li r5,201
	ctx.r5.s64 = 201;
	// li r4,230
	ctx.r4.s64 = 230;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82bee188
	ctx.lr = 0x83CEF0B0;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,66
	ctx.r6.s64 = 66;
	// li r5,110
	ctx.r5.s64 = 110;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82bee188
	ctx.lr = 0x83CEF0C8;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,151
	ctx.r6.s64 = 151;
	// li r5,99
	ctx.r5.s64 = 99;
	// li r4,205
	ctx.r4.s64 = 205;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82bee188
	ctx.lr = 0x83CEF0E0;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,206
	ctx.r6.s64 = 206;
	// li r5,191
	ctx.r5.s64 = 191;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82bee188
	ctx.lr = 0x83CEF0F8;
	sub_82BEE188(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEF10C"))) PPC_WEAK_FUNC(sub_83CEF10C);
PPC_FUNC_IMPL(__imp__sub_83CEF10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF110"))) PPC_WEAK_FUNC(sub_83CEF110);
PPC_FUNC_IMPL(__imp__sub_83CEF110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r7,255
	ctx.r7.s64 = 255;
	// addi r31,r11,-800
	ctx.r31.s64 = ctx.r11.s64 + -800;
	// li r6,210
	ctx.r6.s64 = 210;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,210
	ctx.r5.s64 = 210;
	// li r4,210
	ctx.r4.s64 = 210;
	// bl 0x82bee188
	ctx.lr = 0x83CEF140;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82bee188
	ctx.lr = 0x83CEF158;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,169
	ctx.r6.s64 = 169;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,231
	ctx.r4.s64 = 231;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82bee188
	ctx.lr = 0x83CEF170;
	sub_82BEE188(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEF184"))) PPC_WEAK_FUNC(sub_83CEF184);
PPC_FUNC_IMPL(__imp__sub_83CEF184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF188"))) PPC_WEAK_FUNC(sub_83CEF188);
PPC_FUNC_IMPL(__imp__sub_83CEF188) {
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
	// addi r3,r11,-756
	ctx.r3.s64 = ctx.r11.s64 + -756;
	// bl 0x83523120
	ctx.lr = 0x83CEF1A0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,18024
	ctx.r3.s64 = ctx.r10.s64 + 18024;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEF1AC;
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

__attribute__((alias("__imp__sub_83CEF1BC"))) PPC_WEAK_FUNC(sub_83CEF1BC);
PPC_FUNC_IMPL(__imp__sub_83CEF1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF1C0"))) PPC_WEAK_FUNC(sub_83CEF1C0);
PPC_FUNC_IMPL(__imp__sub_83CEF1C0) {
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
	// addi r3,r11,-755
	ctx.r3.s64 = ctx.r11.s64 + -755;
	// bl 0x83523120
	ctx.lr = 0x83CEF1D8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,18040
	ctx.r3.s64 = ctx.r10.s64 + 18040;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEF1E4;
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

__attribute__((alias("__imp__sub_83CEF1F4"))) PPC_WEAK_FUNC(sub_83CEF1F4);
PPC_FUNC_IMPL(__imp__sub_83CEF1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF1F8"))) PPC_WEAK_FUNC(sub_83CEF1F8);
PPC_FUNC_IMPL(__imp__sub_83CEF1F8) {
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
	// addi r3,r11,-754
	ctx.r3.s64 = ctx.r11.s64 + -754;
	// bl 0x83523120
	ctx.lr = 0x83CEF210;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,18056
	ctx.r3.s64 = ctx.r10.s64 + 18056;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEF21C;
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

__attribute__((alias("__imp__sub_83CEF22C"))) PPC_WEAK_FUNC(sub_83CEF22C);
PPC_FUNC_IMPL(__imp__sub_83CEF22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF230"))) PPC_WEAK_FUNC(sub_83CEF230);
PPC_FUNC_IMPL(__imp__sub_83CEF230) {
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
	// addi r3,r11,-753
	ctx.r3.s64 = ctx.r11.s64 + -753;
	// bl 0x83523120
	ctx.lr = 0x83CEF248;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,18072
	ctx.r3.s64 = ctx.r10.s64 + 18072;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEF254;
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

__attribute__((alias("__imp__sub_83CEF264"))) PPC_WEAK_FUNC(sub_83CEF264);
PPC_FUNC_IMPL(__imp__sub_83CEF264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF268"))) PPC_WEAK_FUNC(sub_83CEF268);
PPC_FUNC_IMPL(__imp__sub_83CEF268) {
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
	// addi r3,r11,-752
	ctx.r3.s64 = ctx.r11.s64 + -752;
	// bl 0x83523120
	ctx.lr = 0x83CEF280;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,18088
	ctx.r3.s64 = ctx.r10.s64 + 18088;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEF28C;
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

__attribute__((alias("__imp__sub_83CEF29C"))) PPC_WEAK_FUNC(sub_83CEF29C);
PPC_FUNC_IMPL(__imp__sub_83CEF29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF2A0"))) PPC_WEAK_FUNC(sub_83CEF2A0);
PPC_FUNC_IMPL(__imp__sub_83CEF2A0) {
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
	// addi r3,r11,-751
	ctx.r3.s64 = ctx.r11.s64 + -751;
	// bl 0x83523120
	ctx.lr = 0x83CEF2B8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,18104
	ctx.r3.s64 = ctx.r10.s64 + 18104;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEF2C4;
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

__attribute__((alias("__imp__sub_83CEF2D4"))) PPC_WEAK_FUNC(sub_83CEF2D4);
PPC_FUNC_IMPL(__imp__sub_83CEF2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF2D8"))) PPC_WEAK_FUNC(sub_83CEF2D8);
PPC_FUNC_IMPL(__imp__sub_83CEF2D8) {
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
	// addi r3,r11,-750
	ctx.r3.s64 = ctx.r11.s64 + -750;
	// bl 0x83523120
	ctx.lr = 0x83CEF2F0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,18120
	ctx.r3.s64 = ctx.r10.s64 + 18120;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEF2FC;
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

__attribute__((alias("__imp__sub_83CEF30C"))) PPC_WEAK_FUNC(sub_83CEF30C);
PPC_FUNC_IMPL(__imp__sub_83CEF30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF310"))) PPC_WEAK_FUNC(sub_83CEF310);
PPC_FUNC_IMPL(__imp__sub_83CEF310) {
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
	// addi r3,r11,-749
	ctx.r3.s64 = ctx.r11.s64 + -749;
	// bl 0x83523120
	ctx.lr = 0x83CEF328;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,18136
	ctx.r3.s64 = ctx.r10.s64 + 18136;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEF334;
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

__attribute__((alias("__imp__sub_83CEF344"))) PPC_WEAK_FUNC(sub_83CEF344);
PPC_FUNC_IMPL(__imp__sub_83CEF344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF348"))) PPC_WEAK_FUNC(sub_83CEF348);
PPC_FUNC_IMPL(__imp__sub_83CEF348) {
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
	// addi r3,r11,-748
	ctx.r3.s64 = ctx.r11.s64 + -748;
	// bl 0x83523120
	ctx.lr = 0x83CEF360;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,18152
	ctx.r3.s64 = ctx.r10.s64 + 18152;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEF36C;
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

__attribute__((alias("__imp__sub_83CEF37C"))) PPC_WEAK_FUNC(sub_83CEF37C);
PPC_FUNC_IMPL(__imp__sub_83CEF37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF380"))) PPC_WEAK_FUNC(sub_83CEF380);
PPC_FUNC_IMPL(__imp__sub_83CEF380) {
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
	// addi r3,r11,-747
	ctx.r3.s64 = ctx.r11.s64 + -747;
	// bl 0x83523120
	ctx.lr = 0x83CEF398;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,18168
	ctx.r3.s64 = ctx.r10.s64 + 18168;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEF3A4;
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

__attribute__((alias("__imp__sub_83CEF3B4"))) PPC_WEAK_FUNC(sub_83CEF3B4);
PPC_FUNC_IMPL(__imp__sub_83CEF3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF3B8"))) PPC_WEAK_FUNC(sub_83CEF3B8);
PPC_FUNC_IMPL(__imp__sub_83CEF3B8) {
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
	// addi r3,r11,-746
	ctx.r3.s64 = ctx.r11.s64 + -746;
	// bl 0x83523120
	ctx.lr = 0x83CEF3D0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,18184
	ctx.r3.s64 = ctx.r10.s64 + 18184;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEF3DC;
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

__attribute__((alias("__imp__sub_83CEF3EC"))) PPC_WEAK_FUNC(sub_83CEF3EC);
PPC_FUNC_IMPL(__imp__sub_83CEF3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF3F0"))) PPC_WEAK_FUNC(sub_83CEF3F0);
PPC_FUNC_IMPL(__imp__sub_83CEF3F0) {
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
	// addi r3,r11,-745
	ctx.r3.s64 = ctx.r11.s64 + -745;
	// bl 0x83523120
	ctx.lr = 0x83CEF408;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,18200
	ctx.r3.s64 = ctx.r10.s64 + 18200;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEF414;
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

__attribute__((alias("__imp__sub_83CEF424"))) PPC_WEAK_FUNC(sub_83CEF424);
PPC_FUNC_IMPL(__imp__sub_83CEF424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF428"))) PPC_WEAK_FUNC(sub_83CEF428);
PPC_FUNC_IMPL(__imp__sub_83CEF428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18224
	ctx.r3.s64 = ctx.r11.s64 + 18224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF434"))) PPC_WEAK_FUNC(sub_83CEF434);
PPC_FUNC_IMPL(__imp__sub_83CEF434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF438"))) PPC_WEAK_FUNC(sub_83CEF438);
PPC_FUNC_IMPL(__imp__sub_83CEF438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18232
	ctx.r3.s64 = ctx.r11.s64 + 18232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF444"))) PPC_WEAK_FUNC(sub_83CEF444);
PPC_FUNC_IMPL(__imp__sub_83CEF444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF448"))) PPC_WEAK_FUNC(sub_83CEF448);
PPC_FUNC_IMPL(__imp__sub_83CEF448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18240
	ctx.r3.s64 = ctx.r11.s64 + 18240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF454"))) PPC_WEAK_FUNC(sub_83CEF454);
PPC_FUNC_IMPL(__imp__sub_83CEF454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF458"))) PPC_WEAK_FUNC(sub_83CEF458);
PPC_FUNC_IMPL(__imp__sub_83CEF458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18248
	ctx.r3.s64 = ctx.r11.s64 + 18248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF464"))) PPC_WEAK_FUNC(sub_83CEF464);
PPC_FUNC_IMPL(__imp__sub_83CEF464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF468"))) PPC_WEAK_FUNC(sub_83CEF468);
PPC_FUNC_IMPL(__imp__sub_83CEF468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18256
	ctx.r3.s64 = ctx.r11.s64 + 18256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF474"))) PPC_WEAK_FUNC(sub_83CEF474);
PPC_FUNC_IMPL(__imp__sub_83CEF474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF478"))) PPC_WEAK_FUNC(sub_83CEF478);
PPC_FUNC_IMPL(__imp__sub_83CEF478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18264
	ctx.r3.s64 = ctx.r11.s64 + 18264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF484"))) PPC_WEAK_FUNC(sub_83CEF484);
PPC_FUNC_IMPL(__imp__sub_83CEF484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF488"))) PPC_WEAK_FUNC(sub_83CEF488);
PPC_FUNC_IMPL(__imp__sub_83CEF488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18272
	ctx.r3.s64 = ctx.r11.s64 + 18272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF494"))) PPC_WEAK_FUNC(sub_83CEF494);
PPC_FUNC_IMPL(__imp__sub_83CEF494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF498"))) PPC_WEAK_FUNC(sub_83CEF498);
PPC_FUNC_IMPL(__imp__sub_83CEF498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18280
	ctx.r3.s64 = ctx.r11.s64 + 18280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF4A4"))) PPC_WEAK_FUNC(sub_83CEF4A4);
PPC_FUNC_IMPL(__imp__sub_83CEF4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF4A8"))) PPC_WEAK_FUNC(sub_83CEF4A8);
PPC_FUNC_IMPL(__imp__sub_83CEF4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18288
	ctx.r3.s64 = ctx.r11.s64 + 18288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF4B4"))) PPC_WEAK_FUNC(sub_83CEF4B4);
PPC_FUNC_IMPL(__imp__sub_83CEF4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF4B8"))) PPC_WEAK_FUNC(sub_83CEF4B8);
PPC_FUNC_IMPL(__imp__sub_83CEF4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18296
	ctx.r3.s64 = ctx.r11.s64 + 18296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF4C4"))) PPC_WEAK_FUNC(sub_83CEF4C4);
PPC_FUNC_IMPL(__imp__sub_83CEF4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF4C8"))) PPC_WEAK_FUNC(sub_83CEF4C8);
PPC_FUNC_IMPL(__imp__sub_83CEF4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18304
	ctx.r3.s64 = ctx.r11.s64 + 18304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF4D4"))) PPC_WEAK_FUNC(sub_83CEF4D4);
PPC_FUNC_IMPL(__imp__sub_83CEF4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF4D8"))) PPC_WEAK_FUNC(sub_83CEF4D8);
PPC_FUNC_IMPL(__imp__sub_83CEF4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18312
	ctx.r3.s64 = ctx.r11.s64 + 18312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF4E4"))) PPC_WEAK_FUNC(sub_83CEF4E4);
PPC_FUNC_IMPL(__imp__sub_83CEF4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF4E8"))) PPC_WEAK_FUNC(sub_83CEF4E8);
PPC_FUNC_IMPL(__imp__sub_83CEF4E8) {
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
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// bl 0x83523120
	ctx.lr = 0x83CEF500;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,18320
	ctx.r3.s64 = ctx.r10.s64 + 18320;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEF50C;
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

__attribute__((alias("__imp__sub_83CEF51C"))) PPC_WEAK_FUNC(sub_83CEF51C);
PPC_FUNC_IMPL(__imp__sub_83CEF51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF520"))) PPC_WEAK_FUNC(sub_83CEF520);
PPC_FUNC_IMPL(__imp__sub_83CEF520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18336
	ctx.r3.s64 = ctx.r11.s64 + 18336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF52C"))) PPC_WEAK_FUNC(sub_83CEF52C);
PPC_FUNC_IMPL(__imp__sub_83CEF52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF530"))) PPC_WEAK_FUNC(sub_83CEF530);
PPC_FUNC_IMPL(__imp__sub_83CEF530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18344
	ctx.r3.s64 = ctx.r11.s64 + 18344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF53C"))) PPC_WEAK_FUNC(sub_83CEF53C);
PPC_FUNC_IMPL(__imp__sub_83CEF53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF540"))) PPC_WEAK_FUNC(sub_83CEF540);
PPC_FUNC_IMPL(__imp__sub_83CEF540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18352
	ctx.r3.s64 = ctx.r11.s64 + 18352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF54C"))) PPC_WEAK_FUNC(sub_83CEF54C);
PPC_FUNC_IMPL(__imp__sub_83CEF54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF550"))) PPC_WEAK_FUNC(sub_83CEF550);
PPC_FUNC_IMPL(__imp__sub_83CEF550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18360
	ctx.r3.s64 = ctx.r11.s64 + 18360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF55C"))) PPC_WEAK_FUNC(sub_83CEF55C);
PPC_FUNC_IMPL(__imp__sub_83CEF55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF560"))) PPC_WEAK_FUNC(sub_83CEF560);
PPC_FUNC_IMPL(__imp__sub_83CEF560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18368
	ctx.r3.s64 = ctx.r11.s64 + 18368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF56C"))) PPC_WEAK_FUNC(sub_83CEF56C);
PPC_FUNC_IMPL(__imp__sub_83CEF56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF570"))) PPC_WEAK_FUNC(sub_83CEF570);
PPC_FUNC_IMPL(__imp__sub_83CEF570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18376
	ctx.r3.s64 = ctx.r11.s64 + 18376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF57C"))) PPC_WEAK_FUNC(sub_83CEF57C);
PPC_FUNC_IMPL(__imp__sub_83CEF57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF580"))) PPC_WEAK_FUNC(sub_83CEF580);
PPC_FUNC_IMPL(__imp__sub_83CEF580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18384
	ctx.r3.s64 = ctx.r11.s64 + 18384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF58C"))) PPC_WEAK_FUNC(sub_83CEF58C);
PPC_FUNC_IMPL(__imp__sub_83CEF58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF590"))) PPC_WEAK_FUNC(sub_83CEF590);
PPC_FUNC_IMPL(__imp__sub_83CEF590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18392
	ctx.r3.s64 = ctx.r11.s64 + 18392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF59C"))) PPC_WEAK_FUNC(sub_83CEF59C);
PPC_FUNC_IMPL(__imp__sub_83CEF59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF5A0"))) PPC_WEAK_FUNC(sub_83CEF5A0);
PPC_FUNC_IMPL(__imp__sub_83CEF5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18400
	ctx.r3.s64 = ctx.r11.s64 + 18400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF5AC"))) PPC_WEAK_FUNC(sub_83CEF5AC);
PPC_FUNC_IMPL(__imp__sub_83CEF5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF5B0"))) PPC_WEAK_FUNC(sub_83CEF5B0);
PPC_FUNC_IMPL(__imp__sub_83CEF5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18408
	ctx.r3.s64 = ctx.r11.s64 + 18408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF5BC"))) PPC_WEAK_FUNC(sub_83CEF5BC);
PPC_FUNC_IMPL(__imp__sub_83CEF5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF5C0"))) PPC_WEAK_FUNC(sub_83CEF5C0);
PPC_FUNC_IMPL(__imp__sub_83CEF5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18416
	ctx.r3.s64 = ctx.r11.s64 + 18416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF5CC"))) PPC_WEAK_FUNC(sub_83CEF5CC);
PPC_FUNC_IMPL(__imp__sub_83CEF5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF5D0"))) PPC_WEAK_FUNC(sub_83CEF5D0);
PPC_FUNC_IMPL(__imp__sub_83CEF5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18424
	ctx.r3.s64 = ctx.r11.s64 + 18424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF5DC"))) PPC_WEAK_FUNC(sub_83CEF5DC);
PPC_FUNC_IMPL(__imp__sub_83CEF5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF5E0"))) PPC_WEAK_FUNC(sub_83CEF5E0);
PPC_FUNC_IMPL(__imp__sub_83CEF5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18432
	ctx.r3.s64 = ctx.r11.s64 + 18432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF5EC"))) PPC_WEAK_FUNC(sub_83CEF5EC);
PPC_FUNC_IMPL(__imp__sub_83CEF5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF5F0"))) PPC_WEAK_FUNC(sub_83CEF5F0);
PPC_FUNC_IMPL(__imp__sub_83CEF5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18440
	ctx.r3.s64 = ctx.r11.s64 + 18440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF5FC"))) PPC_WEAK_FUNC(sub_83CEF5FC);
PPC_FUNC_IMPL(__imp__sub_83CEF5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF600"))) PPC_WEAK_FUNC(sub_83CEF600);
PPC_FUNC_IMPL(__imp__sub_83CEF600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18448
	ctx.r3.s64 = ctx.r11.s64 + 18448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF60C"))) PPC_WEAK_FUNC(sub_83CEF60C);
PPC_FUNC_IMPL(__imp__sub_83CEF60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF610"))) PPC_WEAK_FUNC(sub_83CEF610);
PPC_FUNC_IMPL(__imp__sub_83CEF610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18456
	ctx.r3.s64 = ctx.r11.s64 + 18456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF61C"))) PPC_WEAK_FUNC(sub_83CEF61C);
PPC_FUNC_IMPL(__imp__sub_83CEF61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF620"))) PPC_WEAK_FUNC(sub_83CEF620);
PPC_FUNC_IMPL(__imp__sub_83CEF620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18464
	ctx.r3.s64 = ctx.r11.s64 + 18464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF62C"))) PPC_WEAK_FUNC(sub_83CEF62C);
PPC_FUNC_IMPL(__imp__sub_83CEF62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF630"))) PPC_WEAK_FUNC(sub_83CEF630);
PPC_FUNC_IMPL(__imp__sub_83CEF630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18472
	ctx.r3.s64 = ctx.r11.s64 + 18472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF63C"))) PPC_WEAK_FUNC(sub_83CEF63C);
PPC_FUNC_IMPL(__imp__sub_83CEF63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF640"))) PPC_WEAK_FUNC(sub_83CEF640);
PPC_FUNC_IMPL(__imp__sub_83CEF640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18480
	ctx.r3.s64 = ctx.r11.s64 + 18480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF64C"))) PPC_WEAK_FUNC(sub_83CEF64C);
PPC_FUNC_IMPL(__imp__sub_83CEF64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF650"))) PPC_WEAK_FUNC(sub_83CEF650);
PPC_FUNC_IMPL(__imp__sub_83CEF650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18488
	ctx.r3.s64 = ctx.r11.s64 + 18488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF65C"))) PPC_WEAK_FUNC(sub_83CEF65C);
PPC_FUNC_IMPL(__imp__sub_83CEF65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF660"))) PPC_WEAK_FUNC(sub_83CEF660);
PPC_FUNC_IMPL(__imp__sub_83CEF660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18496
	ctx.r3.s64 = ctx.r11.s64 + 18496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF66C"))) PPC_WEAK_FUNC(sub_83CEF66C);
PPC_FUNC_IMPL(__imp__sub_83CEF66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF670"))) PPC_WEAK_FUNC(sub_83CEF670);
PPC_FUNC_IMPL(__imp__sub_83CEF670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18504
	ctx.r3.s64 = ctx.r11.s64 + 18504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF67C"))) PPC_WEAK_FUNC(sub_83CEF67C);
PPC_FUNC_IMPL(__imp__sub_83CEF67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF680"))) PPC_WEAK_FUNC(sub_83CEF680);
PPC_FUNC_IMPL(__imp__sub_83CEF680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18512
	ctx.r3.s64 = ctx.r11.s64 + 18512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF68C"))) PPC_WEAK_FUNC(sub_83CEF68C);
PPC_FUNC_IMPL(__imp__sub_83CEF68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF690"))) PPC_WEAK_FUNC(sub_83CEF690);
PPC_FUNC_IMPL(__imp__sub_83CEF690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18520
	ctx.r3.s64 = ctx.r11.s64 + 18520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF69C"))) PPC_WEAK_FUNC(sub_83CEF69C);
PPC_FUNC_IMPL(__imp__sub_83CEF69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF6A0"))) PPC_WEAK_FUNC(sub_83CEF6A0);
PPC_FUNC_IMPL(__imp__sub_83CEF6A0) {
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
	// addi r3,r11,-612
	ctx.r3.s64 = ctx.r11.s64 + -612;
	// bl 0x83523120
	ctx.lr = 0x83CEF6B8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,18528
	ctx.r3.s64 = ctx.r10.s64 + 18528;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEF6C4;
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

__attribute__((alias("__imp__sub_83CEF6D4"))) PPC_WEAK_FUNC(sub_83CEF6D4);
PPC_FUNC_IMPL(__imp__sub_83CEF6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEF6D8"))) PPC_WEAK_FUNC(sub_83CEF6D8);
PPC_FUNC_IMPL(__imp__sub_83CEF6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,18544
	ctx.r3.s64 = ctx.r11.s64 + 18544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEF6E4"))) PPC_WEAK_FUNC(sub_83CEF6E4);
PPC_FUNC_IMPL(__imp__sub_83CEF6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

