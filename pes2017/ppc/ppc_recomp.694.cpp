#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C03D44"))) PPC_WEAK_FUNC(sub_83C03D44);
PPC_FUNC_IMPL(__imp__sub_83C03D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03D48"))) PPC_WEAK_FUNC(sub_83C03D48);
PPC_FUNC_IMPL(__imp__sub_83C03D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13328
	ctx.r3.s64 = ctx.r11.s64 + 13328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03D54"))) PPC_WEAK_FUNC(sub_83C03D54);
PPC_FUNC_IMPL(__imp__sub_83C03D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03D58"))) PPC_WEAK_FUNC(sub_83C03D58);
PPC_FUNC_IMPL(__imp__sub_83C03D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13336
	ctx.r3.s64 = ctx.r11.s64 + 13336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03D64"))) PPC_WEAK_FUNC(sub_83C03D64);
PPC_FUNC_IMPL(__imp__sub_83C03D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03D68"))) PPC_WEAK_FUNC(sub_83C03D68);
PPC_FUNC_IMPL(__imp__sub_83C03D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13344
	ctx.r3.s64 = ctx.r11.s64 + 13344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03D74"))) PPC_WEAK_FUNC(sub_83C03D74);
PPC_FUNC_IMPL(__imp__sub_83C03D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03D78"))) PPC_WEAK_FUNC(sub_83C03D78);
PPC_FUNC_IMPL(__imp__sub_83C03D78) {
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
	// addi r3,r11,-10520
	ctx.r3.s64 = ctx.r11.s64 + -10520;
	// bl 0x83523120
	ctx.lr = 0x83C03D90;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,13352
	ctx.r3.s64 = ctx.r10.s64 + 13352;
	// bl 0x831cdcc8
	ctx.lr = 0x83C03D9C;
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

__attribute__((alias("__imp__sub_83C03DAC"))) PPC_WEAK_FUNC(sub_83C03DAC);
PPC_FUNC_IMPL(__imp__sub_83C03DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03DB0"))) PPC_WEAK_FUNC(sub_83C03DB0);
PPC_FUNC_IMPL(__imp__sub_83C03DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10504
	ctx.r7.s64 = ctx.r8.s64 + -10504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10504(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C03DD8"))) PPC_WEAK_FUNC(sub_83C03DD8);
PPC_FUNC_IMPL(__imp__sub_83C03DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,27816
	ctx.r6.s64 = ctx.r7.s64 + 27816;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27744(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27744);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10504);
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
	// std r9,27816(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27816, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C03E20"))) PPC_WEAK_FUNC(sub_83C03E20);
PPC_FUNC_IMPL(__imp__sub_83C03E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13368
	ctx.r3.s64 = ctx.r11.s64 + 13368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03E2C"))) PPC_WEAK_FUNC(sub_83C03E2C);
PPC_FUNC_IMPL(__imp__sub_83C03E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03E30"))) PPC_WEAK_FUNC(sub_83C03E30);
PPC_FUNC_IMPL(__imp__sub_83C03E30) {
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
	// addi r3,r11,-10496
	ctx.r3.s64 = ctx.r11.s64 + -10496;
	// bl 0x8259af80
	ctx.lr = 0x83C03E48;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,13384
	ctx.r3.s64 = ctx.r10.s64 + 13384;
	// bl 0x831cdcc8
	ctx.lr = 0x83C03E54;
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

__attribute__((alias("__imp__sub_83C03E64"))) PPC_WEAK_FUNC(sub_83C03E64);
PPC_FUNC_IMPL(__imp__sub_83C03E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03E68"))) PPC_WEAK_FUNC(sub_83C03E68);
PPC_FUNC_IMPL(__imp__sub_83C03E68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10516
	ctx.r11.s64 = ctx.r8.s64 + -10516;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,27792(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27792);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13376
	ctx.r3.s64 = ctx.r6.s64 + 13376;
	// stw r10,-10516(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10516, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03E98"))) PPC_WEAK_FUNC(sub_83C03E98);
PPC_FUNC_IMPL(__imp__sub_83C03E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13392
	ctx.r3.s64 = ctx.r11.s64 + 13392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03EA4"))) PPC_WEAK_FUNC(sub_83C03EA4);
PPC_FUNC_IMPL(__imp__sub_83C03EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03EA8"))) PPC_WEAK_FUNC(sub_83C03EA8);
PPC_FUNC_IMPL(__imp__sub_83C03EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13400
	ctx.r3.s64 = ctx.r11.s64 + 13400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03EB4"))) PPC_WEAK_FUNC(sub_83C03EB4);
PPC_FUNC_IMPL(__imp__sub_83C03EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03EB8"))) PPC_WEAK_FUNC(sub_83C03EB8);
PPC_FUNC_IMPL(__imp__sub_83C03EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13408
	ctx.r3.s64 = ctx.r11.s64 + 13408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03EC4"))) PPC_WEAK_FUNC(sub_83C03EC4);
PPC_FUNC_IMPL(__imp__sub_83C03EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03EC8"))) PPC_WEAK_FUNC(sub_83C03EC8);
PPC_FUNC_IMPL(__imp__sub_83C03EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13416
	ctx.r3.s64 = ctx.r11.s64 + 13416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03ED4"))) PPC_WEAK_FUNC(sub_83C03ED4);
PPC_FUNC_IMPL(__imp__sub_83C03ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03ED8"))) PPC_WEAK_FUNC(sub_83C03ED8);
PPC_FUNC_IMPL(__imp__sub_83C03ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13424
	ctx.r3.s64 = ctx.r11.s64 + 13424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03EE4"))) PPC_WEAK_FUNC(sub_83C03EE4);
PPC_FUNC_IMPL(__imp__sub_83C03EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03EE8"))) PPC_WEAK_FUNC(sub_83C03EE8);
PPC_FUNC_IMPL(__imp__sub_83C03EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13432
	ctx.r3.s64 = ctx.r11.s64 + 13432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03EF4"))) PPC_WEAK_FUNC(sub_83C03EF4);
PPC_FUNC_IMPL(__imp__sub_83C03EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03EF8"))) PPC_WEAK_FUNC(sub_83C03EF8);
PPC_FUNC_IMPL(__imp__sub_83C03EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13440
	ctx.r3.s64 = ctx.r11.s64 + 13440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03F04"))) PPC_WEAK_FUNC(sub_83C03F04);
PPC_FUNC_IMPL(__imp__sub_83C03F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03F08"))) PPC_WEAK_FUNC(sub_83C03F08);
PPC_FUNC_IMPL(__imp__sub_83C03F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13448
	ctx.r3.s64 = ctx.r11.s64 + 13448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03F14"))) PPC_WEAK_FUNC(sub_83C03F14);
PPC_FUNC_IMPL(__imp__sub_83C03F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03F18"))) PPC_WEAK_FUNC(sub_83C03F18);
PPC_FUNC_IMPL(__imp__sub_83C03F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13456
	ctx.r3.s64 = ctx.r11.s64 + 13456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03F24"))) PPC_WEAK_FUNC(sub_83C03F24);
PPC_FUNC_IMPL(__imp__sub_83C03F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03F28"))) PPC_WEAK_FUNC(sub_83C03F28);
PPC_FUNC_IMPL(__imp__sub_83C03F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13464
	ctx.r3.s64 = ctx.r11.s64 + 13464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03F34"))) PPC_WEAK_FUNC(sub_83C03F34);
PPC_FUNC_IMPL(__imp__sub_83C03F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03F38"))) PPC_WEAK_FUNC(sub_83C03F38);
PPC_FUNC_IMPL(__imp__sub_83C03F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13472
	ctx.r3.s64 = ctx.r11.s64 + 13472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03F44"))) PPC_WEAK_FUNC(sub_83C03F44);
PPC_FUNC_IMPL(__imp__sub_83C03F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03F48"))) PPC_WEAK_FUNC(sub_83C03F48);
PPC_FUNC_IMPL(__imp__sub_83C03F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13480
	ctx.r3.s64 = ctx.r11.s64 + 13480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C03F54"))) PPC_WEAK_FUNC(sub_83C03F54);
PPC_FUNC_IMPL(__imp__sub_83C03F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03F58"))) PPC_WEAK_FUNC(sub_83C03F58);
PPC_FUNC_IMPL(__imp__sub_83C03F58) {
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
	// addi r3,r11,-10152
	ctx.r3.s64 = ctx.r11.s64 + -10152;
	// bl 0x83523120
	ctx.lr = 0x83C03F70;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,13488
	ctx.r3.s64 = ctx.r10.s64 + 13488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C03F7C;
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

__attribute__((alias("__imp__sub_83C03F8C"))) PPC_WEAK_FUNC(sub_83C03F8C);
PPC_FUNC_IMPL(__imp__sub_83C03F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C03F90"))) PPC_WEAK_FUNC(sub_83C03F90);
PPC_FUNC_IMPL(__imp__sub_83C03F90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10136
	ctx.r7.s64 = ctx.r8.s64 + -10136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10136);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10136(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10136, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C03FB8"))) PPC_WEAK_FUNC(sub_83C03FB8);
PPC_FUNC_IMPL(__imp__sub_83C03FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,27984
	ctx.r6.s64 = ctx.r7.s64 + 27984;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27912(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27912);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10136);
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
	// std r9,27984(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27984, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C04000"))) PPC_WEAK_FUNC(sub_83C04000);
PPC_FUNC_IMPL(__imp__sub_83C04000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13504
	ctx.r3.s64 = ctx.r11.s64 + 13504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0400C"))) PPC_WEAK_FUNC(sub_83C0400C);
PPC_FUNC_IMPL(__imp__sub_83C0400C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04010"))) PPC_WEAK_FUNC(sub_83C04010);
PPC_FUNC_IMPL(__imp__sub_83C04010) {
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
	// addi r3,r11,-10128
	ctx.r3.s64 = ctx.r11.s64 + -10128;
	// bl 0x8259af80
	ctx.lr = 0x83C04028;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,13520
	ctx.r3.s64 = ctx.r10.s64 + 13520;
	// bl 0x831cdcc8
	ctx.lr = 0x83C04034;
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

__attribute__((alias("__imp__sub_83C04044"))) PPC_WEAK_FUNC(sub_83C04044);
PPC_FUNC_IMPL(__imp__sub_83C04044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04048"))) PPC_WEAK_FUNC(sub_83C04048);
PPC_FUNC_IMPL(__imp__sub_83C04048) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10148
	ctx.r11.s64 = ctx.r8.s64 + -10148;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,27960(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27960);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13512
	ctx.r3.s64 = ctx.r6.s64 + 13512;
	// stw r10,-10148(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10148, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04078"))) PPC_WEAK_FUNC(sub_83C04078);
PPC_FUNC_IMPL(__imp__sub_83C04078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13528
	ctx.r3.s64 = ctx.r11.s64 + 13528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04084"))) PPC_WEAK_FUNC(sub_83C04084);
PPC_FUNC_IMPL(__imp__sub_83C04084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04088"))) PPC_WEAK_FUNC(sub_83C04088);
PPC_FUNC_IMPL(__imp__sub_83C04088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13536
	ctx.r3.s64 = ctx.r11.s64 + 13536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04094"))) PPC_WEAK_FUNC(sub_83C04094);
PPC_FUNC_IMPL(__imp__sub_83C04094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04098"))) PPC_WEAK_FUNC(sub_83C04098);
PPC_FUNC_IMPL(__imp__sub_83C04098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13544
	ctx.r3.s64 = ctx.r11.s64 + 13544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C040A4"))) PPC_WEAK_FUNC(sub_83C040A4);
PPC_FUNC_IMPL(__imp__sub_83C040A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C040A8"))) PPC_WEAK_FUNC(sub_83C040A8);
PPC_FUNC_IMPL(__imp__sub_83C040A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13552
	ctx.r3.s64 = ctx.r11.s64 + 13552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C040B4"))) PPC_WEAK_FUNC(sub_83C040B4);
PPC_FUNC_IMPL(__imp__sub_83C040B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C040B8"))) PPC_WEAK_FUNC(sub_83C040B8);
PPC_FUNC_IMPL(__imp__sub_83C040B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13560
	ctx.r3.s64 = ctx.r11.s64 + 13560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C040C4"))) PPC_WEAK_FUNC(sub_83C040C4);
PPC_FUNC_IMPL(__imp__sub_83C040C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C040C8"))) PPC_WEAK_FUNC(sub_83C040C8);
PPC_FUNC_IMPL(__imp__sub_83C040C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13568
	ctx.r3.s64 = ctx.r11.s64 + 13568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C040D4"))) PPC_WEAK_FUNC(sub_83C040D4);
PPC_FUNC_IMPL(__imp__sub_83C040D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C040D8"))) PPC_WEAK_FUNC(sub_83C040D8);
PPC_FUNC_IMPL(__imp__sub_83C040D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13576
	ctx.r3.s64 = ctx.r11.s64 + 13576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C040E4"))) PPC_WEAK_FUNC(sub_83C040E4);
PPC_FUNC_IMPL(__imp__sub_83C040E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C040E8"))) PPC_WEAK_FUNC(sub_83C040E8);
PPC_FUNC_IMPL(__imp__sub_83C040E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13584
	ctx.r3.s64 = ctx.r11.s64 + 13584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C040F4"))) PPC_WEAK_FUNC(sub_83C040F4);
PPC_FUNC_IMPL(__imp__sub_83C040F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C040F8"))) PPC_WEAK_FUNC(sub_83C040F8);
PPC_FUNC_IMPL(__imp__sub_83C040F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13592
	ctx.r3.s64 = ctx.r11.s64 + 13592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04104"))) PPC_WEAK_FUNC(sub_83C04104);
PPC_FUNC_IMPL(__imp__sub_83C04104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04108"))) PPC_WEAK_FUNC(sub_83C04108);
PPC_FUNC_IMPL(__imp__sub_83C04108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13600
	ctx.r3.s64 = ctx.r11.s64 + 13600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04114"))) PPC_WEAK_FUNC(sub_83C04114);
PPC_FUNC_IMPL(__imp__sub_83C04114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04118"))) PPC_WEAK_FUNC(sub_83C04118);
PPC_FUNC_IMPL(__imp__sub_83C04118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13608
	ctx.r3.s64 = ctx.r11.s64 + 13608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04124"))) PPC_WEAK_FUNC(sub_83C04124);
PPC_FUNC_IMPL(__imp__sub_83C04124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04128"))) PPC_WEAK_FUNC(sub_83C04128);
PPC_FUNC_IMPL(__imp__sub_83C04128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13616
	ctx.r3.s64 = ctx.r11.s64 + 13616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04134"))) PPC_WEAK_FUNC(sub_83C04134);
PPC_FUNC_IMPL(__imp__sub_83C04134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04138"))) PPC_WEAK_FUNC(sub_83C04138);
PPC_FUNC_IMPL(__imp__sub_83C04138) {
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
	// addi r3,r11,-9784
	ctx.r3.s64 = ctx.r11.s64 + -9784;
	// bl 0x83523120
	ctx.lr = 0x83C04150;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,13624
	ctx.r3.s64 = ctx.r10.s64 + 13624;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0415C;
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

__attribute__((alias("__imp__sub_83C0416C"))) PPC_WEAK_FUNC(sub_83C0416C);
PPC_FUNC_IMPL(__imp__sub_83C0416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04170"))) PPC_WEAK_FUNC(sub_83C04170);
PPC_FUNC_IMPL(__imp__sub_83C04170) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9768
	ctx.r7.s64 = ctx.r8.s64 + -9768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9768(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C04198"))) PPC_WEAK_FUNC(sub_83C04198);
PPC_FUNC_IMPL(__imp__sub_83C04198) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,28116
	ctx.r6.s64 = ctx.r7.s64 + 28116;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28044(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28044);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9768);
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
	// std r9,28116(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28116, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C041E0"))) PPC_WEAK_FUNC(sub_83C041E0);
PPC_FUNC_IMPL(__imp__sub_83C041E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13640
	ctx.r3.s64 = ctx.r11.s64 + 13640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C041EC"))) PPC_WEAK_FUNC(sub_83C041EC);
PPC_FUNC_IMPL(__imp__sub_83C041EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C041F0"))) PPC_WEAK_FUNC(sub_83C041F0);
PPC_FUNC_IMPL(__imp__sub_83C041F0) {
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
	// addi r3,r11,-9760
	ctx.r3.s64 = ctx.r11.s64 + -9760;
	// bl 0x8259af80
	ctx.lr = 0x83C04208;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,13656
	ctx.r3.s64 = ctx.r10.s64 + 13656;
	// bl 0x831cdcc8
	ctx.lr = 0x83C04214;
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

__attribute__((alias("__imp__sub_83C04224"))) PPC_WEAK_FUNC(sub_83C04224);
PPC_FUNC_IMPL(__imp__sub_83C04224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04228"))) PPC_WEAK_FUNC(sub_83C04228);
PPC_FUNC_IMPL(__imp__sub_83C04228) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9780
	ctx.r11.s64 = ctx.r8.s64 + -9780;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,28092(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28092);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13648
	ctx.r3.s64 = ctx.r6.s64 + 13648;
	// stw r10,-9780(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9780, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04258"))) PPC_WEAK_FUNC(sub_83C04258);
PPC_FUNC_IMPL(__imp__sub_83C04258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13664
	ctx.r3.s64 = ctx.r11.s64 + 13664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04264"))) PPC_WEAK_FUNC(sub_83C04264);
PPC_FUNC_IMPL(__imp__sub_83C04264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04268"))) PPC_WEAK_FUNC(sub_83C04268);
PPC_FUNC_IMPL(__imp__sub_83C04268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13672
	ctx.r3.s64 = ctx.r11.s64 + 13672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04274"))) PPC_WEAK_FUNC(sub_83C04274);
PPC_FUNC_IMPL(__imp__sub_83C04274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04278"))) PPC_WEAK_FUNC(sub_83C04278);
PPC_FUNC_IMPL(__imp__sub_83C04278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13680
	ctx.r3.s64 = ctx.r11.s64 + 13680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04284"))) PPC_WEAK_FUNC(sub_83C04284);
PPC_FUNC_IMPL(__imp__sub_83C04284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04288"))) PPC_WEAK_FUNC(sub_83C04288);
PPC_FUNC_IMPL(__imp__sub_83C04288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13688
	ctx.r3.s64 = ctx.r11.s64 + 13688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04294"))) PPC_WEAK_FUNC(sub_83C04294);
PPC_FUNC_IMPL(__imp__sub_83C04294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04298"))) PPC_WEAK_FUNC(sub_83C04298);
PPC_FUNC_IMPL(__imp__sub_83C04298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C042A4"))) PPC_WEAK_FUNC(sub_83C042A4);
PPC_FUNC_IMPL(__imp__sub_83C042A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C042A8"))) PPC_WEAK_FUNC(sub_83C042A8);
PPC_FUNC_IMPL(__imp__sub_83C042A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13704
	ctx.r3.s64 = ctx.r11.s64 + 13704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C042B4"))) PPC_WEAK_FUNC(sub_83C042B4);
PPC_FUNC_IMPL(__imp__sub_83C042B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C042B8"))) PPC_WEAK_FUNC(sub_83C042B8);
PPC_FUNC_IMPL(__imp__sub_83C042B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C042C4"))) PPC_WEAK_FUNC(sub_83C042C4);
PPC_FUNC_IMPL(__imp__sub_83C042C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C042C8"))) PPC_WEAK_FUNC(sub_83C042C8);
PPC_FUNC_IMPL(__imp__sub_83C042C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13720
	ctx.r3.s64 = ctx.r11.s64 + 13720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C042D4"))) PPC_WEAK_FUNC(sub_83C042D4);
PPC_FUNC_IMPL(__imp__sub_83C042D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C042D8"))) PPC_WEAK_FUNC(sub_83C042D8);
PPC_FUNC_IMPL(__imp__sub_83C042D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13728
	ctx.r3.s64 = ctx.r11.s64 + 13728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C042E4"))) PPC_WEAK_FUNC(sub_83C042E4);
PPC_FUNC_IMPL(__imp__sub_83C042E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C042E8"))) PPC_WEAK_FUNC(sub_83C042E8);
PPC_FUNC_IMPL(__imp__sub_83C042E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13736
	ctx.r3.s64 = ctx.r11.s64 + 13736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C042F4"))) PPC_WEAK_FUNC(sub_83C042F4);
PPC_FUNC_IMPL(__imp__sub_83C042F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C042F8"))) PPC_WEAK_FUNC(sub_83C042F8);
PPC_FUNC_IMPL(__imp__sub_83C042F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13744
	ctx.r3.s64 = ctx.r11.s64 + 13744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04304"))) PPC_WEAK_FUNC(sub_83C04304);
PPC_FUNC_IMPL(__imp__sub_83C04304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04308"))) PPC_WEAK_FUNC(sub_83C04308);
PPC_FUNC_IMPL(__imp__sub_83C04308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13752
	ctx.r3.s64 = ctx.r11.s64 + 13752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04314"))) PPC_WEAK_FUNC(sub_83C04314);
PPC_FUNC_IMPL(__imp__sub_83C04314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04318"))) PPC_WEAK_FUNC(sub_83C04318);
PPC_FUNC_IMPL(__imp__sub_83C04318) {
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
	// addi r3,r11,-9416
	ctx.r3.s64 = ctx.r11.s64 + -9416;
	// bl 0x83523120
	ctx.lr = 0x83C04330;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,13760
	ctx.r3.s64 = ctx.r10.s64 + 13760;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0433C;
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

__attribute__((alias("__imp__sub_83C0434C"))) PPC_WEAK_FUNC(sub_83C0434C);
PPC_FUNC_IMPL(__imp__sub_83C0434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04350"))) PPC_WEAK_FUNC(sub_83C04350);
PPC_FUNC_IMPL(__imp__sub_83C04350) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9400
	ctx.r7.s64 = ctx.r8.s64 + -9400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9400);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9400(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9400, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C04378"))) PPC_WEAK_FUNC(sub_83C04378);
PPC_FUNC_IMPL(__imp__sub_83C04378) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,28256
	ctx.r6.s64 = ctx.r7.s64 + 28256;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28184(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28184);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9400);
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
	// std r9,28256(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28256, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C043C0"))) PPC_WEAK_FUNC(sub_83C043C0);
PPC_FUNC_IMPL(__imp__sub_83C043C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13776
	ctx.r3.s64 = ctx.r11.s64 + 13776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C043CC"))) PPC_WEAK_FUNC(sub_83C043CC);
PPC_FUNC_IMPL(__imp__sub_83C043CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C043D0"))) PPC_WEAK_FUNC(sub_83C043D0);
PPC_FUNC_IMPL(__imp__sub_83C043D0) {
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
	// addi r3,r11,-9392
	ctx.r3.s64 = ctx.r11.s64 + -9392;
	// bl 0x8259af80
	ctx.lr = 0x83C043E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,13792
	ctx.r3.s64 = ctx.r10.s64 + 13792;
	// bl 0x831cdcc8
	ctx.lr = 0x83C043F4;
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

__attribute__((alias("__imp__sub_83C04404"))) PPC_WEAK_FUNC(sub_83C04404);
PPC_FUNC_IMPL(__imp__sub_83C04404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04408"))) PPC_WEAK_FUNC(sub_83C04408);
PPC_FUNC_IMPL(__imp__sub_83C04408) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9412
	ctx.r11.s64 = ctx.r8.s64 + -9412;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,28232(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28232);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13784
	ctx.r3.s64 = ctx.r6.s64 + 13784;
	// stw r10,-9412(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9412, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04438"))) PPC_WEAK_FUNC(sub_83C04438);
PPC_FUNC_IMPL(__imp__sub_83C04438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13800
	ctx.r3.s64 = ctx.r11.s64 + 13800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04444"))) PPC_WEAK_FUNC(sub_83C04444);
PPC_FUNC_IMPL(__imp__sub_83C04444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04448"))) PPC_WEAK_FUNC(sub_83C04448);
PPC_FUNC_IMPL(__imp__sub_83C04448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13808
	ctx.r3.s64 = ctx.r11.s64 + 13808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04454"))) PPC_WEAK_FUNC(sub_83C04454);
PPC_FUNC_IMPL(__imp__sub_83C04454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04458"))) PPC_WEAK_FUNC(sub_83C04458);
PPC_FUNC_IMPL(__imp__sub_83C04458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13816
	ctx.r3.s64 = ctx.r11.s64 + 13816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04464"))) PPC_WEAK_FUNC(sub_83C04464);
PPC_FUNC_IMPL(__imp__sub_83C04464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04468"))) PPC_WEAK_FUNC(sub_83C04468);
PPC_FUNC_IMPL(__imp__sub_83C04468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13824
	ctx.r3.s64 = ctx.r11.s64 + 13824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04474"))) PPC_WEAK_FUNC(sub_83C04474);
PPC_FUNC_IMPL(__imp__sub_83C04474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04478"))) PPC_WEAK_FUNC(sub_83C04478);
PPC_FUNC_IMPL(__imp__sub_83C04478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13832
	ctx.r3.s64 = ctx.r11.s64 + 13832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04484"))) PPC_WEAK_FUNC(sub_83C04484);
PPC_FUNC_IMPL(__imp__sub_83C04484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04488"))) PPC_WEAK_FUNC(sub_83C04488);
PPC_FUNC_IMPL(__imp__sub_83C04488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13840
	ctx.r3.s64 = ctx.r11.s64 + 13840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04494"))) PPC_WEAK_FUNC(sub_83C04494);
PPC_FUNC_IMPL(__imp__sub_83C04494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04498"))) PPC_WEAK_FUNC(sub_83C04498);
PPC_FUNC_IMPL(__imp__sub_83C04498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13848
	ctx.r3.s64 = ctx.r11.s64 + 13848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C044A4"))) PPC_WEAK_FUNC(sub_83C044A4);
PPC_FUNC_IMPL(__imp__sub_83C044A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C044A8"))) PPC_WEAK_FUNC(sub_83C044A8);
PPC_FUNC_IMPL(__imp__sub_83C044A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13856
	ctx.r3.s64 = ctx.r11.s64 + 13856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C044B4"))) PPC_WEAK_FUNC(sub_83C044B4);
PPC_FUNC_IMPL(__imp__sub_83C044B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C044B8"))) PPC_WEAK_FUNC(sub_83C044B8);
PPC_FUNC_IMPL(__imp__sub_83C044B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13864
	ctx.r3.s64 = ctx.r11.s64 + 13864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C044C4"))) PPC_WEAK_FUNC(sub_83C044C4);
PPC_FUNC_IMPL(__imp__sub_83C044C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C044C8"))) PPC_WEAK_FUNC(sub_83C044C8);
PPC_FUNC_IMPL(__imp__sub_83C044C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13872
	ctx.r3.s64 = ctx.r11.s64 + 13872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C044D4"))) PPC_WEAK_FUNC(sub_83C044D4);
PPC_FUNC_IMPL(__imp__sub_83C044D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C044D8"))) PPC_WEAK_FUNC(sub_83C044D8);
PPC_FUNC_IMPL(__imp__sub_83C044D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13880
	ctx.r3.s64 = ctx.r11.s64 + 13880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C044E4"))) PPC_WEAK_FUNC(sub_83C044E4);
PPC_FUNC_IMPL(__imp__sub_83C044E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C044E8"))) PPC_WEAK_FUNC(sub_83C044E8);
PPC_FUNC_IMPL(__imp__sub_83C044E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13888
	ctx.r3.s64 = ctx.r11.s64 + 13888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C044F4"))) PPC_WEAK_FUNC(sub_83C044F4);
PPC_FUNC_IMPL(__imp__sub_83C044F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C044F8"))) PPC_WEAK_FUNC(sub_83C044F8);
PPC_FUNC_IMPL(__imp__sub_83C044F8) {
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
	// addi r3,r11,-9048
	ctx.r3.s64 = ctx.r11.s64 + -9048;
	// bl 0x83523120
	ctx.lr = 0x83C04510;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,13896
	ctx.r3.s64 = ctx.r10.s64 + 13896;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0451C;
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

__attribute__((alias("__imp__sub_83C0452C"))) PPC_WEAK_FUNC(sub_83C0452C);
PPC_FUNC_IMPL(__imp__sub_83C0452C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04530"))) PPC_WEAK_FUNC(sub_83C04530);
PPC_FUNC_IMPL(__imp__sub_83C04530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13912
	ctx.r3.s64 = ctx.r11.s64 + 13912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0453C"))) PPC_WEAK_FUNC(sub_83C0453C);
PPC_FUNC_IMPL(__imp__sub_83C0453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04540"))) PPC_WEAK_FUNC(sub_83C04540);
PPC_FUNC_IMPL(__imp__sub_83C04540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13920
	ctx.r3.s64 = ctx.r11.s64 + 13920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0454C"))) PPC_WEAK_FUNC(sub_83C0454C);
PPC_FUNC_IMPL(__imp__sub_83C0454C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04550"))) PPC_WEAK_FUNC(sub_83C04550);
PPC_FUNC_IMPL(__imp__sub_83C04550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13928
	ctx.r3.s64 = ctx.r11.s64 + 13928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0455C"))) PPC_WEAK_FUNC(sub_83C0455C);
PPC_FUNC_IMPL(__imp__sub_83C0455C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04560"))) PPC_WEAK_FUNC(sub_83C04560);
PPC_FUNC_IMPL(__imp__sub_83C04560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13936
	ctx.r3.s64 = ctx.r11.s64 + 13936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0456C"))) PPC_WEAK_FUNC(sub_83C0456C);
PPC_FUNC_IMPL(__imp__sub_83C0456C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04570"))) PPC_WEAK_FUNC(sub_83C04570);
PPC_FUNC_IMPL(__imp__sub_83C04570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13944
	ctx.r3.s64 = ctx.r11.s64 + 13944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0457C"))) PPC_WEAK_FUNC(sub_83C0457C);
PPC_FUNC_IMPL(__imp__sub_83C0457C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04580"))) PPC_WEAK_FUNC(sub_83C04580);
PPC_FUNC_IMPL(__imp__sub_83C04580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13952
	ctx.r3.s64 = ctx.r11.s64 + 13952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0458C"))) PPC_WEAK_FUNC(sub_83C0458C);
PPC_FUNC_IMPL(__imp__sub_83C0458C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04590"))) PPC_WEAK_FUNC(sub_83C04590);
PPC_FUNC_IMPL(__imp__sub_83C04590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13960
	ctx.r3.s64 = ctx.r11.s64 + 13960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0459C"))) PPC_WEAK_FUNC(sub_83C0459C);
PPC_FUNC_IMPL(__imp__sub_83C0459C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C045A0"))) PPC_WEAK_FUNC(sub_83C045A0);
PPC_FUNC_IMPL(__imp__sub_83C045A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13968
	ctx.r3.s64 = ctx.r11.s64 + 13968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C045AC"))) PPC_WEAK_FUNC(sub_83C045AC);
PPC_FUNC_IMPL(__imp__sub_83C045AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C045B0"))) PPC_WEAK_FUNC(sub_83C045B0);
PPC_FUNC_IMPL(__imp__sub_83C045B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13976
	ctx.r3.s64 = ctx.r11.s64 + 13976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C045BC"))) PPC_WEAK_FUNC(sub_83C045BC);
PPC_FUNC_IMPL(__imp__sub_83C045BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C045C0"))) PPC_WEAK_FUNC(sub_83C045C0);
PPC_FUNC_IMPL(__imp__sub_83C045C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13984
	ctx.r3.s64 = ctx.r11.s64 + 13984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C045CC"))) PPC_WEAK_FUNC(sub_83C045CC);
PPC_FUNC_IMPL(__imp__sub_83C045CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C045D0"))) PPC_WEAK_FUNC(sub_83C045D0);
PPC_FUNC_IMPL(__imp__sub_83C045D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,13992
	ctx.r3.s64 = ctx.r11.s64 + 13992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C045DC"))) PPC_WEAK_FUNC(sub_83C045DC);
PPC_FUNC_IMPL(__imp__sub_83C045DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C045E0"))) PPC_WEAK_FUNC(sub_83C045E0);
PPC_FUNC_IMPL(__imp__sub_83C045E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14000
	ctx.r3.s64 = ctx.r11.s64 + 14000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C045EC"))) PPC_WEAK_FUNC(sub_83C045EC);
PPC_FUNC_IMPL(__imp__sub_83C045EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C045F0"))) PPC_WEAK_FUNC(sub_83C045F0);
PPC_FUNC_IMPL(__imp__sub_83C045F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14008
	ctx.r3.s64 = ctx.r11.s64 + 14008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C045FC"))) PPC_WEAK_FUNC(sub_83C045FC);
PPC_FUNC_IMPL(__imp__sub_83C045FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04600"))) PPC_WEAK_FUNC(sub_83C04600);
PPC_FUNC_IMPL(__imp__sub_83C04600) {
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
	// addi r3,r11,-9036
	ctx.r3.s64 = ctx.r11.s64 + -9036;
	// bl 0x83523120
	ctx.lr = 0x83C04618;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,14016
	ctx.r3.s64 = ctx.r10.s64 + 14016;
	// bl 0x831cdcc8
	ctx.lr = 0x83C04624;
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

__attribute__((alias("__imp__sub_83C04634"))) PPC_WEAK_FUNC(sub_83C04634);
PPC_FUNC_IMPL(__imp__sub_83C04634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04638"))) PPC_WEAK_FUNC(sub_83C04638);
PPC_FUNC_IMPL(__imp__sub_83C04638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14032
	ctx.r3.s64 = ctx.r11.s64 + 14032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04644"))) PPC_WEAK_FUNC(sub_83C04644);
PPC_FUNC_IMPL(__imp__sub_83C04644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04648"))) PPC_WEAK_FUNC(sub_83C04648);
PPC_FUNC_IMPL(__imp__sub_83C04648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14040
	ctx.r3.s64 = ctx.r11.s64 + 14040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04654"))) PPC_WEAK_FUNC(sub_83C04654);
PPC_FUNC_IMPL(__imp__sub_83C04654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04658"))) PPC_WEAK_FUNC(sub_83C04658);
PPC_FUNC_IMPL(__imp__sub_83C04658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14048
	ctx.r3.s64 = ctx.r11.s64 + 14048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04664"))) PPC_WEAK_FUNC(sub_83C04664);
PPC_FUNC_IMPL(__imp__sub_83C04664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04668"))) PPC_WEAK_FUNC(sub_83C04668);
PPC_FUNC_IMPL(__imp__sub_83C04668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14056
	ctx.r3.s64 = ctx.r11.s64 + 14056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04674"))) PPC_WEAK_FUNC(sub_83C04674);
PPC_FUNC_IMPL(__imp__sub_83C04674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04678"))) PPC_WEAK_FUNC(sub_83C04678);
PPC_FUNC_IMPL(__imp__sub_83C04678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14064
	ctx.r3.s64 = ctx.r11.s64 + 14064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04684"))) PPC_WEAK_FUNC(sub_83C04684);
PPC_FUNC_IMPL(__imp__sub_83C04684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04688"))) PPC_WEAK_FUNC(sub_83C04688);
PPC_FUNC_IMPL(__imp__sub_83C04688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14072
	ctx.r3.s64 = ctx.r11.s64 + 14072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04694"))) PPC_WEAK_FUNC(sub_83C04694);
PPC_FUNC_IMPL(__imp__sub_83C04694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04698"))) PPC_WEAK_FUNC(sub_83C04698);
PPC_FUNC_IMPL(__imp__sub_83C04698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14080
	ctx.r3.s64 = ctx.r11.s64 + 14080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C046A4"))) PPC_WEAK_FUNC(sub_83C046A4);
PPC_FUNC_IMPL(__imp__sub_83C046A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C046A8"))) PPC_WEAK_FUNC(sub_83C046A8);
PPC_FUNC_IMPL(__imp__sub_83C046A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14088
	ctx.r3.s64 = ctx.r11.s64 + 14088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C046B4"))) PPC_WEAK_FUNC(sub_83C046B4);
PPC_FUNC_IMPL(__imp__sub_83C046B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C046B8"))) PPC_WEAK_FUNC(sub_83C046B8);
PPC_FUNC_IMPL(__imp__sub_83C046B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14096
	ctx.r3.s64 = ctx.r11.s64 + 14096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C046C4"))) PPC_WEAK_FUNC(sub_83C046C4);
PPC_FUNC_IMPL(__imp__sub_83C046C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C046C8"))) PPC_WEAK_FUNC(sub_83C046C8);
PPC_FUNC_IMPL(__imp__sub_83C046C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14104
	ctx.r3.s64 = ctx.r11.s64 + 14104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C046D4"))) PPC_WEAK_FUNC(sub_83C046D4);
PPC_FUNC_IMPL(__imp__sub_83C046D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C046D8"))) PPC_WEAK_FUNC(sub_83C046D8);
PPC_FUNC_IMPL(__imp__sub_83C046D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14112
	ctx.r3.s64 = ctx.r11.s64 + 14112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C046E4"))) PPC_WEAK_FUNC(sub_83C046E4);
PPC_FUNC_IMPL(__imp__sub_83C046E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C046E8"))) PPC_WEAK_FUNC(sub_83C046E8);
PPC_FUNC_IMPL(__imp__sub_83C046E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14120
	ctx.r3.s64 = ctx.r11.s64 + 14120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C046F4"))) PPC_WEAK_FUNC(sub_83C046F4);
PPC_FUNC_IMPL(__imp__sub_83C046F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C046F8"))) PPC_WEAK_FUNC(sub_83C046F8);
PPC_FUNC_IMPL(__imp__sub_83C046F8) {
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
	// addi r3,r11,-9024
	ctx.r3.s64 = ctx.r11.s64 + -9024;
	// bl 0x83523120
	ctx.lr = 0x83C04710;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,14128
	ctx.r3.s64 = ctx.r10.s64 + 14128;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0471C;
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

__attribute__((alias("__imp__sub_83C0472C"))) PPC_WEAK_FUNC(sub_83C0472C);
PPC_FUNC_IMPL(__imp__sub_83C0472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04730"))) PPC_WEAK_FUNC(sub_83C04730);
PPC_FUNC_IMPL(__imp__sub_83C04730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14144
	ctx.r3.s64 = ctx.r11.s64 + 14144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0473C"))) PPC_WEAK_FUNC(sub_83C0473C);
PPC_FUNC_IMPL(__imp__sub_83C0473C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04740"))) PPC_WEAK_FUNC(sub_83C04740);
PPC_FUNC_IMPL(__imp__sub_83C04740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14152
	ctx.r3.s64 = ctx.r11.s64 + 14152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0474C"))) PPC_WEAK_FUNC(sub_83C0474C);
PPC_FUNC_IMPL(__imp__sub_83C0474C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04750"))) PPC_WEAK_FUNC(sub_83C04750);
PPC_FUNC_IMPL(__imp__sub_83C04750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14160
	ctx.r3.s64 = ctx.r11.s64 + 14160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0475C"))) PPC_WEAK_FUNC(sub_83C0475C);
PPC_FUNC_IMPL(__imp__sub_83C0475C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04760"))) PPC_WEAK_FUNC(sub_83C04760);
PPC_FUNC_IMPL(__imp__sub_83C04760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14168
	ctx.r3.s64 = ctx.r11.s64 + 14168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0476C"))) PPC_WEAK_FUNC(sub_83C0476C);
PPC_FUNC_IMPL(__imp__sub_83C0476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04770"))) PPC_WEAK_FUNC(sub_83C04770);
PPC_FUNC_IMPL(__imp__sub_83C04770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14176
	ctx.r3.s64 = ctx.r11.s64 + 14176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0477C"))) PPC_WEAK_FUNC(sub_83C0477C);
PPC_FUNC_IMPL(__imp__sub_83C0477C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04780"))) PPC_WEAK_FUNC(sub_83C04780);
PPC_FUNC_IMPL(__imp__sub_83C04780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14184
	ctx.r3.s64 = ctx.r11.s64 + 14184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0478C"))) PPC_WEAK_FUNC(sub_83C0478C);
PPC_FUNC_IMPL(__imp__sub_83C0478C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04790"))) PPC_WEAK_FUNC(sub_83C04790);
PPC_FUNC_IMPL(__imp__sub_83C04790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14192
	ctx.r3.s64 = ctx.r11.s64 + 14192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0479C"))) PPC_WEAK_FUNC(sub_83C0479C);
PPC_FUNC_IMPL(__imp__sub_83C0479C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C047A0"))) PPC_WEAK_FUNC(sub_83C047A0);
PPC_FUNC_IMPL(__imp__sub_83C047A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14200
	ctx.r3.s64 = ctx.r11.s64 + 14200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C047AC"))) PPC_WEAK_FUNC(sub_83C047AC);
PPC_FUNC_IMPL(__imp__sub_83C047AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C047B0"))) PPC_WEAK_FUNC(sub_83C047B0);
PPC_FUNC_IMPL(__imp__sub_83C047B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14208
	ctx.r3.s64 = ctx.r11.s64 + 14208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C047BC"))) PPC_WEAK_FUNC(sub_83C047BC);
PPC_FUNC_IMPL(__imp__sub_83C047BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C047C0"))) PPC_WEAK_FUNC(sub_83C047C0);
PPC_FUNC_IMPL(__imp__sub_83C047C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14216
	ctx.r3.s64 = ctx.r11.s64 + 14216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C047CC"))) PPC_WEAK_FUNC(sub_83C047CC);
PPC_FUNC_IMPL(__imp__sub_83C047CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C047D0"))) PPC_WEAK_FUNC(sub_83C047D0);
PPC_FUNC_IMPL(__imp__sub_83C047D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14224
	ctx.r3.s64 = ctx.r11.s64 + 14224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C047DC"))) PPC_WEAK_FUNC(sub_83C047DC);
PPC_FUNC_IMPL(__imp__sub_83C047DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C047E0"))) PPC_WEAK_FUNC(sub_83C047E0);
PPC_FUNC_IMPL(__imp__sub_83C047E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14232
	ctx.r3.s64 = ctx.r11.s64 + 14232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C047EC"))) PPC_WEAK_FUNC(sub_83C047EC);
PPC_FUNC_IMPL(__imp__sub_83C047EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C047F0"))) PPC_WEAK_FUNC(sub_83C047F0);
PPC_FUNC_IMPL(__imp__sub_83C047F0) {
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
	// addi r3,r11,-9012
	ctx.r3.s64 = ctx.r11.s64 + -9012;
	// bl 0x83523120
	ctx.lr = 0x83C04808;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,14240
	ctx.r3.s64 = ctx.r10.s64 + 14240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C04814;
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

__attribute__((alias("__imp__sub_83C04824"))) PPC_WEAK_FUNC(sub_83C04824);
PPC_FUNC_IMPL(__imp__sub_83C04824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04828"))) PPC_WEAK_FUNC(sub_83C04828);
PPC_FUNC_IMPL(__imp__sub_83C04828) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8996
	ctx.r7.s64 = ctx.r8.s64 + -8996;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8996(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8996);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8996(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8996, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C04850"))) PPC_WEAK_FUNC(sub_83C04850);
PPC_FUNC_IMPL(__imp__sub_83C04850) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,28796
	ctx.r6.s64 = ctx.r7.s64 + 28796;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28724(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28724);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8996(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8996);
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
	// std r9,28796(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28796, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C04898"))) PPC_WEAK_FUNC(sub_83C04898);
PPC_FUNC_IMPL(__imp__sub_83C04898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14256
	ctx.r3.s64 = ctx.r11.s64 + 14256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C048A4"))) PPC_WEAK_FUNC(sub_83C048A4);
PPC_FUNC_IMPL(__imp__sub_83C048A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C048A8"))) PPC_WEAK_FUNC(sub_83C048A8);
PPC_FUNC_IMPL(__imp__sub_83C048A8) {
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
	// addi r3,r11,-8984
	ctx.r3.s64 = ctx.r11.s64 + -8984;
	// bl 0x8259af80
	ctx.lr = 0x83C048C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,14272
	ctx.r3.s64 = ctx.r10.s64 + 14272;
	// bl 0x831cdcc8
	ctx.lr = 0x83C048CC;
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

__attribute__((alias("__imp__sub_83C048DC"))) PPC_WEAK_FUNC(sub_83C048DC);
PPC_FUNC_IMPL(__imp__sub_83C048DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C048E0"))) PPC_WEAK_FUNC(sub_83C048E0);
PPC_FUNC_IMPL(__imp__sub_83C048E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9008
	ctx.r11.s64 = ctx.r8.s64 + -9008;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,28772(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28772);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14264
	ctx.r3.s64 = ctx.r6.s64 + 14264;
	// stw r10,-9008(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9008, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04910"))) PPC_WEAK_FUNC(sub_83C04910);
PPC_FUNC_IMPL(__imp__sub_83C04910) {
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
	// addi r3,r11,-8640
	ctx.r3.s64 = ctx.r11.s64 + -8640;
	// bl 0x82596fa8
	ctx.lr = 0x83C04928;
	sub_82596FA8(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,14280
	ctx.r3.s64 = ctx.r10.s64 + 14280;
	// bl 0x831cdcc8
	ctx.lr = 0x83C04934;
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

__attribute__((alias("__imp__sub_83C04944"))) PPC_WEAK_FUNC(sub_83C04944);
PPC_FUNC_IMPL(__imp__sub_83C04944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04948"))) PPC_WEAK_FUNC(sub_83C04948);
PPC_FUNC_IMPL(__imp__sub_83C04948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14296
	ctx.r3.s64 = ctx.r11.s64 + 14296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04954"))) PPC_WEAK_FUNC(sub_83C04954);
PPC_FUNC_IMPL(__imp__sub_83C04954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04958"))) PPC_WEAK_FUNC(sub_83C04958);
PPC_FUNC_IMPL(__imp__sub_83C04958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14304
	ctx.r3.s64 = ctx.r11.s64 + 14304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04964"))) PPC_WEAK_FUNC(sub_83C04964);
PPC_FUNC_IMPL(__imp__sub_83C04964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04968"))) PPC_WEAK_FUNC(sub_83C04968);
PPC_FUNC_IMPL(__imp__sub_83C04968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14312
	ctx.r3.s64 = ctx.r11.s64 + 14312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04974"))) PPC_WEAK_FUNC(sub_83C04974);
PPC_FUNC_IMPL(__imp__sub_83C04974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04978"))) PPC_WEAK_FUNC(sub_83C04978);
PPC_FUNC_IMPL(__imp__sub_83C04978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14320
	ctx.r3.s64 = ctx.r11.s64 + 14320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04984"))) PPC_WEAK_FUNC(sub_83C04984);
PPC_FUNC_IMPL(__imp__sub_83C04984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04988"))) PPC_WEAK_FUNC(sub_83C04988);
PPC_FUNC_IMPL(__imp__sub_83C04988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14328
	ctx.r3.s64 = ctx.r11.s64 + 14328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04994"))) PPC_WEAK_FUNC(sub_83C04994);
PPC_FUNC_IMPL(__imp__sub_83C04994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04998"))) PPC_WEAK_FUNC(sub_83C04998);
PPC_FUNC_IMPL(__imp__sub_83C04998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14336
	ctx.r3.s64 = ctx.r11.s64 + 14336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C049A4"))) PPC_WEAK_FUNC(sub_83C049A4);
PPC_FUNC_IMPL(__imp__sub_83C049A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C049A8"))) PPC_WEAK_FUNC(sub_83C049A8);
PPC_FUNC_IMPL(__imp__sub_83C049A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14344
	ctx.r3.s64 = ctx.r11.s64 + 14344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C049B4"))) PPC_WEAK_FUNC(sub_83C049B4);
PPC_FUNC_IMPL(__imp__sub_83C049B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C049B8"))) PPC_WEAK_FUNC(sub_83C049B8);
PPC_FUNC_IMPL(__imp__sub_83C049B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14352
	ctx.r3.s64 = ctx.r11.s64 + 14352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C049C4"))) PPC_WEAK_FUNC(sub_83C049C4);
PPC_FUNC_IMPL(__imp__sub_83C049C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C049C8"))) PPC_WEAK_FUNC(sub_83C049C8);
PPC_FUNC_IMPL(__imp__sub_83C049C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14360
	ctx.r3.s64 = ctx.r11.s64 + 14360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C049D4"))) PPC_WEAK_FUNC(sub_83C049D4);
PPC_FUNC_IMPL(__imp__sub_83C049D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C049D8"))) PPC_WEAK_FUNC(sub_83C049D8);
PPC_FUNC_IMPL(__imp__sub_83C049D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14368
	ctx.r3.s64 = ctx.r11.s64 + 14368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C049E4"))) PPC_WEAK_FUNC(sub_83C049E4);
PPC_FUNC_IMPL(__imp__sub_83C049E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C049E8"))) PPC_WEAK_FUNC(sub_83C049E8);
PPC_FUNC_IMPL(__imp__sub_83C049E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14376
	ctx.r3.s64 = ctx.r11.s64 + 14376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C049F4"))) PPC_WEAK_FUNC(sub_83C049F4);
PPC_FUNC_IMPL(__imp__sub_83C049F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C049F8"))) PPC_WEAK_FUNC(sub_83C049F8);
PPC_FUNC_IMPL(__imp__sub_83C049F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,14384
	ctx.r3.s64 = ctx.r11.s64 + 14384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C04A04"))) PPC_WEAK_FUNC(sub_83C04A04);
PPC_FUNC_IMPL(__imp__sub_83C04A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C04A08"))) PPC_WEAK_FUNC(sub_83C04A08);
PPC_FUNC_IMPL(__imp__sub_83C04A08) {
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
	// addi r3,r11,-8604
	ctx.r3.s64 = ctx.r11.s64 + -8604;
	// bl 0x83523120
	ctx.lr = 0x83C04A20;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,14392
	ctx.r3.s64 = ctx.r10.s64 + 14392;
	// bl 0x831cdcc8
	ctx.lr = 0x83C04A2C;
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

__attribute__((alias("__imp__sub_83C04A3C"))) PPC_WEAK_FUNC(sub_83C04A3C);
PPC_FUNC_IMPL(__imp__sub_83C04A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

