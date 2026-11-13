#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C92EE4"))) PPC_WEAK_FUNC(sub_83C92EE4);
PPC_FUNC_IMPL(__imp__sub_83C92EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92EE8"))) PPC_WEAK_FUNC(sub_83C92EE8);
PPC_FUNC_IMPL(__imp__sub_83C92EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22888
	ctx.r3.s64 = ctx.r11.s64 + 22888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92EF4"))) PPC_WEAK_FUNC(sub_83C92EF4);
PPC_FUNC_IMPL(__imp__sub_83C92EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92EF8"))) PPC_WEAK_FUNC(sub_83C92EF8);
PPC_FUNC_IMPL(__imp__sub_83C92EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22896
	ctx.r3.s64 = ctx.r11.s64 + 22896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92F04"))) PPC_WEAK_FUNC(sub_83C92F04);
PPC_FUNC_IMPL(__imp__sub_83C92F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92F08"))) PPC_WEAK_FUNC(sub_83C92F08);
PPC_FUNC_IMPL(__imp__sub_83C92F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22904
	ctx.r3.s64 = ctx.r11.s64 + 22904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92F14"))) PPC_WEAK_FUNC(sub_83C92F14);
PPC_FUNC_IMPL(__imp__sub_83C92F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92F18"))) PPC_WEAK_FUNC(sub_83C92F18);
PPC_FUNC_IMPL(__imp__sub_83C92F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22912
	ctx.r3.s64 = ctx.r11.s64 + 22912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92F24"))) PPC_WEAK_FUNC(sub_83C92F24);
PPC_FUNC_IMPL(__imp__sub_83C92F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92F28"))) PPC_WEAK_FUNC(sub_83C92F28);
PPC_FUNC_IMPL(__imp__sub_83C92F28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3376
	ctx.r7.s64 = ctx.r8.s64 + -3376;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3376(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3376);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3376(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3376, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C92F50"))) PPC_WEAK_FUNC(sub_83C92F50);
PPC_FUNC_IMPL(__imp__sub_83C92F50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-2388
	ctx.r6.s64 = ctx.r7.s64 + -2388;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2460(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2460);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3376(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3376);
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
	// std r9,-2388(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2388, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C92F98"))) PPC_WEAK_FUNC(sub_83C92F98);
PPC_FUNC_IMPL(__imp__sub_83C92F98) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-3392
	ctx.r3.s64 = ctx.r11.s64 + -3392;
	// bl 0x83523120
	ctx.lr = 0x83C92FB0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,22920
	ctx.r3.s64 = ctx.r10.s64 + 22920;
	// bl 0x831cdcc8
	ctx.lr = 0x83C92FBC;
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

__attribute__((alias("__imp__sub_83C92FCC"))) PPC_WEAK_FUNC(sub_83C92FCC);
PPC_FUNC_IMPL(__imp__sub_83C92FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92FD0"))) PPC_WEAK_FUNC(sub_83C92FD0);
PPC_FUNC_IMPL(__imp__sub_83C92FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22936
	ctx.r3.s64 = ctx.r11.s64 + 22936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92FDC"))) PPC_WEAK_FUNC(sub_83C92FDC);
PPC_FUNC_IMPL(__imp__sub_83C92FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92FE0"))) PPC_WEAK_FUNC(sub_83C92FE0);
PPC_FUNC_IMPL(__imp__sub_83C92FE0) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-3368
	ctx.r3.s64 = ctx.r11.s64 + -3368;
	// bl 0x8259af80
	ctx.lr = 0x83C92FF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,22952
	ctx.r3.s64 = ctx.r10.s64 + 22952;
	// bl 0x831cdcc8
	ctx.lr = 0x83C93004;
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

__attribute__((alias("__imp__sub_83C93014"))) PPC_WEAK_FUNC(sub_83C93014);
PPC_FUNC_IMPL(__imp__sub_83C93014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93018"))) PPC_WEAK_FUNC(sub_83C93018);
PPC_FUNC_IMPL(__imp__sub_83C93018) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3388
	ctx.r11.s64 = ctx.r8.s64 + -3388;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-2412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2412);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22944
	ctx.r3.s64 = ctx.r6.s64 + 22944;
	// stw r10,-3388(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3388, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93048"))) PPC_WEAK_FUNC(sub_83C93048);
PPC_FUNC_IMPL(__imp__sub_83C93048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22960
	ctx.r3.s64 = ctx.r11.s64 + 22960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93054"))) PPC_WEAK_FUNC(sub_83C93054);
PPC_FUNC_IMPL(__imp__sub_83C93054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93058"))) PPC_WEAK_FUNC(sub_83C93058);
PPC_FUNC_IMPL(__imp__sub_83C93058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22968
	ctx.r3.s64 = ctx.r11.s64 + 22968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93064"))) PPC_WEAK_FUNC(sub_83C93064);
PPC_FUNC_IMPL(__imp__sub_83C93064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93068"))) PPC_WEAK_FUNC(sub_83C93068);
PPC_FUNC_IMPL(__imp__sub_83C93068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22976
	ctx.r3.s64 = ctx.r11.s64 + 22976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93074"))) PPC_WEAK_FUNC(sub_83C93074);
PPC_FUNC_IMPL(__imp__sub_83C93074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93078"))) PPC_WEAK_FUNC(sub_83C93078);
PPC_FUNC_IMPL(__imp__sub_83C93078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22984
	ctx.r3.s64 = ctx.r11.s64 + 22984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93084"))) PPC_WEAK_FUNC(sub_83C93084);
PPC_FUNC_IMPL(__imp__sub_83C93084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93088"))) PPC_WEAK_FUNC(sub_83C93088);
PPC_FUNC_IMPL(__imp__sub_83C93088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22992
	ctx.r3.s64 = ctx.r11.s64 + 22992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93094"))) PPC_WEAK_FUNC(sub_83C93094);
PPC_FUNC_IMPL(__imp__sub_83C93094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93098"))) PPC_WEAK_FUNC(sub_83C93098);
PPC_FUNC_IMPL(__imp__sub_83C93098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23000
	ctx.r3.s64 = ctx.r11.s64 + 23000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C930A4"))) PPC_WEAK_FUNC(sub_83C930A4);
PPC_FUNC_IMPL(__imp__sub_83C930A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C930A8"))) PPC_WEAK_FUNC(sub_83C930A8);
PPC_FUNC_IMPL(__imp__sub_83C930A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23008
	ctx.r3.s64 = ctx.r11.s64 + 23008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C930B4"))) PPC_WEAK_FUNC(sub_83C930B4);
PPC_FUNC_IMPL(__imp__sub_83C930B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C930B8"))) PPC_WEAK_FUNC(sub_83C930B8);
PPC_FUNC_IMPL(__imp__sub_83C930B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23016
	ctx.r3.s64 = ctx.r11.s64 + 23016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C930C4"))) PPC_WEAK_FUNC(sub_83C930C4);
PPC_FUNC_IMPL(__imp__sub_83C930C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C930C8"))) PPC_WEAK_FUNC(sub_83C930C8);
PPC_FUNC_IMPL(__imp__sub_83C930C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23024
	ctx.r3.s64 = ctx.r11.s64 + 23024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C930D4"))) PPC_WEAK_FUNC(sub_83C930D4);
PPC_FUNC_IMPL(__imp__sub_83C930D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C930D8"))) PPC_WEAK_FUNC(sub_83C930D8);
PPC_FUNC_IMPL(__imp__sub_83C930D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23032
	ctx.r3.s64 = ctx.r11.s64 + 23032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C930E4"))) PPC_WEAK_FUNC(sub_83C930E4);
PPC_FUNC_IMPL(__imp__sub_83C930E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C930E8"))) PPC_WEAK_FUNC(sub_83C930E8);
PPC_FUNC_IMPL(__imp__sub_83C930E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23040
	ctx.r3.s64 = ctx.r11.s64 + 23040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C930F4"))) PPC_WEAK_FUNC(sub_83C930F4);
PPC_FUNC_IMPL(__imp__sub_83C930F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C930F8"))) PPC_WEAK_FUNC(sub_83C930F8);
PPC_FUNC_IMPL(__imp__sub_83C930F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23048
	ctx.r3.s64 = ctx.r11.s64 + 23048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93104"))) PPC_WEAK_FUNC(sub_83C93104);
PPC_FUNC_IMPL(__imp__sub_83C93104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93108"))) PPC_WEAK_FUNC(sub_83C93108);
PPC_FUNC_IMPL(__imp__sub_83C93108) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3008
	ctx.r7.s64 = ctx.r8.s64 + -3008;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3008(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3008);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3008(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3008, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C93130"))) PPC_WEAK_FUNC(sub_83C93130);
PPC_FUNC_IMPL(__imp__sub_83C93130) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-2260
	ctx.r6.s64 = ctx.r7.s64 + -2260;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2332(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2332);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3008(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3008);
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
	// std r9,-2260(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2260, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C93178"))) PPC_WEAK_FUNC(sub_83C93178);
PPC_FUNC_IMPL(__imp__sub_83C93178) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-3024
	ctx.r3.s64 = ctx.r11.s64 + -3024;
	// bl 0x83523120
	ctx.lr = 0x83C93190;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,23056
	ctx.r3.s64 = ctx.r10.s64 + 23056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9319C;
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

__attribute__((alias("__imp__sub_83C931AC"))) PPC_WEAK_FUNC(sub_83C931AC);
PPC_FUNC_IMPL(__imp__sub_83C931AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C931B0"))) PPC_WEAK_FUNC(sub_83C931B0);
PPC_FUNC_IMPL(__imp__sub_83C931B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23072
	ctx.r3.s64 = ctx.r11.s64 + 23072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C931BC"))) PPC_WEAK_FUNC(sub_83C931BC);
PPC_FUNC_IMPL(__imp__sub_83C931BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C931C0"))) PPC_WEAK_FUNC(sub_83C931C0);
PPC_FUNC_IMPL(__imp__sub_83C931C0) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-3000
	ctx.r3.s64 = ctx.r11.s64 + -3000;
	// bl 0x8259af80
	ctx.lr = 0x83C931D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,23088
	ctx.r3.s64 = ctx.r10.s64 + 23088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C931E4;
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

__attribute__((alias("__imp__sub_83C931F4"))) PPC_WEAK_FUNC(sub_83C931F4);
PPC_FUNC_IMPL(__imp__sub_83C931F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C931F8"))) PPC_WEAK_FUNC(sub_83C931F8);
PPC_FUNC_IMPL(__imp__sub_83C931F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3020
	ctx.r11.s64 = ctx.r8.s64 + -3020;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-2284(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2284);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23080
	ctx.r3.s64 = ctx.r6.s64 + 23080;
	// stw r10,-3020(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3020, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93228"))) PPC_WEAK_FUNC(sub_83C93228);
PPC_FUNC_IMPL(__imp__sub_83C93228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23096
	ctx.r3.s64 = ctx.r11.s64 + 23096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93234"))) PPC_WEAK_FUNC(sub_83C93234);
PPC_FUNC_IMPL(__imp__sub_83C93234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93238"))) PPC_WEAK_FUNC(sub_83C93238);
PPC_FUNC_IMPL(__imp__sub_83C93238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23104
	ctx.r3.s64 = ctx.r11.s64 + 23104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93244"))) PPC_WEAK_FUNC(sub_83C93244);
PPC_FUNC_IMPL(__imp__sub_83C93244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93248"))) PPC_WEAK_FUNC(sub_83C93248);
PPC_FUNC_IMPL(__imp__sub_83C93248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23112
	ctx.r3.s64 = ctx.r11.s64 + 23112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93254"))) PPC_WEAK_FUNC(sub_83C93254);
PPC_FUNC_IMPL(__imp__sub_83C93254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93258"))) PPC_WEAK_FUNC(sub_83C93258);
PPC_FUNC_IMPL(__imp__sub_83C93258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23120
	ctx.r3.s64 = ctx.r11.s64 + 23120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93264"))) PPC_WEAK_FUNC(sub_83C93264);
PPC_FUNC_IMPL(__imp__sub_83C93264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93268"))) PPC_WEAK_FUNC(sub_83C93268);
PPC_FUNC_IMPL(__imp__sub_83C93268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23128
	ctx.r3.s64 = ctx.r11.s64 + 23128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93274"))) PPC_WEAK_FUNC(sub_83C93274);
PPC_FUNC_IMPL(__imp__sub_83C93274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93278"))) PPC_WEAK_FUNC(sub_83C93278);
PPC_FUNC_IMPL(__imp__sub_83C93278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23136
	ctx.r3.s64 = ctx.r11.s64 + 23136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93284"))) PPC_WEAK_FUNC(sub_83C93284);
PPC_FUNC_IMPL(__imp__sub_83C93284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93288"))) PPC_WEAK_FUNC(sub_83C93288);
PPC_FUNC_IMPL(__imp__sub_83C93288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23144
	ctx.r3.s64 = ctx.r11.s64 + 23144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93294"))) PPC_WEAK_FUNC(sub_83C93294);
PPC_FUNC_IMPL(__imp__sub_83C93294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93298"))) PPC_WEAK_FUNC(sub_83C93298);
PPC_FUNC_IMPL(__imp__sub_83C93298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23152
	ctx.r3.s64 = ctx.r11.s64 + 23152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C932A4"))) PPC_WEAK_FUNC(sub_83C932A4);
PPC_FUNC_IMPL(__imp__sub_83C932A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C932A8"))) PPC_WEAK_FUNC(sub_83C932A8);
PPC_FUNC_IMPL(__imp__sub_83C932A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23160
	ctx.r3.s64 = ctx.r11.s64 + 23160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C932B4"))) PPC_WEAK_FUNC(sub_83C932B4);
PPC_FUNC_IMPL(__imp__sub_83C932B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C932B8"))) PPC_WEAK_FUNC(sub_83C932B8);
PPC_FUNC_IMPL(__imp__sub_83C932B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23168
	ctx.r3.s64 = ctx.r11.s64 + 23168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C932C4"))) PPC_WEAK_FUNC(sub_83C932C4);
PPC_FUNC_IMPL(__imp__sub_83C932C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C932C8"))) PPC_WEAK_FUNC(sub_83C932C8);
PPC_FUNC_IMPL(__imp__sub_83C932C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23176
	ctx.r3.s64 = ctx.r11.s64 + 23176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C932D4"))) PPC_WEAK_FUNC(sub_83C932D4);
PPC_FUNC_IMPL(__imp__sub_83C932D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C932D8"))) PPC_WEAK_FUNC(sub_83C932D8);
PPC_FUNC_IMPL(__imp__sub_83C932D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23184
	ctx.r3.s64 = ctx.r11.s64 + 23184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C932E4"))) PPC_WEAK_FUNC(sub_83C932E4);
PPC_FUNC_IMPL(__imp__sub_83C932E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C932E8"))) PPC_WEAK_FUNC(sub_83C932E8);
PPC_FUNC_IMPL(__imp__sub_83C932E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2640
	ctx.r7.s64 = ctx.r8.s64 + -2640;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2640(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2640);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2640(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2640, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C93310"))) PPC_WEAK_FUNC(sub_83C93310);
PPC_FUNC_IMPL(__imp__sub_83C93310) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-1880
	ctx.r6.s64 = ctx.r7.s64 + -1880;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1952(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1952);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2640(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2640);
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
	// std r9,-1880(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1880, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C93358"))) PPC_WEAK_FUNC(sub_83C93358);
PPC_FUNC_IMPL(__imp__sub_83C93358) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-2656
	ctx.r3.s64 = ctx.r11.s64 + -2656;
	// bl 0x83523120
	ctx.lr = 0x83C93370;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,23192
	ctx.r3.s64 = ctx.r10.s64 + 23192;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9337C;
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

__attribute__((alias("__imp__sub_83C9338C"))) PPC_WEAK_FUNC(sub_83C9338C);
PPC_FUNC_IMPL(__imp__sub_83C9338C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93390"))) PPC_WEAK_FUNC(sub_83C93390);
PPC_FUNC_IMPL(__imp__sub_83C93390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23208
	ctx.r3.s64 = ctx.r11.s64 + 23208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9339C"))) PPC_WEAK_FUNC(sub_83C9339C);
PPC_FUNC_IMPL(__imp__sub_83C9339C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C933A0"))) PPC_WEAK_FUNC(sub_83C933A0);
PPC_FUNC_IMPL(__imp__sub_83C933A0) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-2632
	ctx.r3.s64 = ctx.r11.s64 + -2632;
	// bl 0x8259af80
	ctx.lr = 0x83C933B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,23224
	ctx.r3.s64 = ctx.r10.s64 + 23224;
	// bl 0x831cdcc8
	ctx.lr = 0x83C933C4;
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

__attribute__((alias("__imp__sub_83C933D4"))) PPC_WEAK_FUNC(sub_83C933D4);
PPC_FUNC_IMPL(__imp__sub_83C933D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C933D8"))) PPC_WEAK_FUNC(sub_83C933D8);
PPC_FUNC_IMPL(__imp__sub_83C933D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-2652
	ctx.r11.s64 = ctx.r8.s64 + -2652;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-1904(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1904);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23216
	ctx.r3.s64 = ctx.r6.s64 + 23216;
	// stw r10,-2652(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2652, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93408"))) PPC_WEAK_FUNC(sub_83C93408);
PPC_FUNC_IMPL(__imp__sub_83C93408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23232
	ctx.r3.s64 = ctx.r11.s64 + 23232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93414"))) PPC_WEAK_FUNC(sub_83C93414);
PPC_FUNC_IMPL(__imp__sub_83C93414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93418"))) PPC_WEAK_FUNC(sub_83C93418);
PPC_FUNC_IMPL(__imp__sub_83C93418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23240
	ctx.r3.s64 = ctx.r11.s64 + 23240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93424"))) PPC_WEAK_FUNC(sub_83C93424);
PPC_FUNC_IMPL(__imp__sub_83C93424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93428"))) PPC_WEAK_FUNC(sub_83C93428);
PPC_FUNC_IMPL(__imp__sub_83C93428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23248
	ctx.r3.s64 = ctx.r11.s64 + 23248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93434"))) PPC_WEAK_FUNC(sub_83C93434);
PPC_FUNC_IMPL(__imp__sub_83C93434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93438"))) PPC_WEAK_FUNC(sub_83C93438);
PPC_FUNC_IMPL(__imp__sub_83C93438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23256
	ctx.r3.s64 = ctx.r11.s64 + 23256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93444"))) PPC_WEAK_FUNC(sub_83C93444);
PPC_FUNC_IMPL(__imp__sub_83C93444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93448"))) PPC_WEAK_FUNC(sub_83C93448);
PPC_FUNC_IMPL(__imp__sub_83C93448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23264
	ctx.r3.s64 = ctx.r11.s64 + 23264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93454"))) PPC_WEAK_FUNC(sub_83C93454);
PPC_FUNC_IMPL(__imp__sub_83C93454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93458"))) PPC_WEAK_FUNC(sub_83C93458);
PPC_FUNC_IMPL(__imp__sub_83C93458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23272
	ctx.r3.s64 = ctx.r11.s64 + 23272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93464"))) PPC_WEAK_FUNC(sub_83C93464);
PPC_FUNC_IMPL(__imp__sub_83C93464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93468"))) PPC_WEAK_FUNC(sub_83C93468);
PPC_FUNC_IMPL(__imp__sub_83C93468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23280
	ctx.r3.s64 = ctx.r11.s64 + 23280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93474"))) PPC_WEAK_FUNC(sub_83C93474);
PPC_FUNC_IMPL(__imp__sub_83C93474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93478"))) PPC_WEAK_FUNC(sub_83C93478);
PPC_FUNC_IMPL(__imp__sub_83C93478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23288
	ctx.r3.s64 = ctx.r11.s64 + 23288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93484"))) PPC_WEAK_FUNC(sub_83C93484);
PPC_FUNC_IMPL(__imp__sub_83C93484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93488"))) PPC_WEAK_FUNC(sub_83C93488);
PPC_FUNC_IMPL(__imp__sub_83C93488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23296
	ctx.r3.s64 = ctx.r11.s64 + 23296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93494"))) PPC_WEAK_FUNC(sub_83C93494);
PPC_FUNC_IMPL(__imp__sub_83C93494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93498"))) PPC_WEAK_FUNC(sub_83C93498);
PPC_FUNC_IMPL(__imp__sub_83C93498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23304
	ctx.r3.s64 = ctx.r11.s64 + 23304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C934A4"))) PPC_WEAK_FUNC(sub_83C934A4);
PPC_FUNC_IMPL(__imp__sub_83C934A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C934A8"))) PPC_WEAK_FUNC(sub_83C934A8);
PPC_FUNC_IMPL(__imp__sub_83C934A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23312
	ctx.r3.s64 = ctx.r11.s64 + 23312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C934B4"))) PPC_WEAK_FUNC(sub_83C934B4);
PPC_FUNC_IMPL(__imp__sub_83C934B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C934B8"))) PPC_WEAK_FUNC(sub_83C934B8);
PPC_FUNC_IMPL(__imp__sub_83C934B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23320
	ctx.r3.s64 = ctx.r11.s64 + 23320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C934C4"))) PPC_WEAK_FUNC(sub_83C934C4);
PPC_FUNC_IMPL(__imp__sub_83C934C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C934C8"))) PPC_WEAK_FUNC(sub_83C934C8);
PPC_FUNC_IMPL(__imp__sub_83C934C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2272
	ctx.r7.s64 = ctx.r8.s64 + -2272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2272);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2272(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2272, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C934F0"))) PPC_WEAK_FUNC(sub_83C934F0);
PPC_FUNC_IMPL(__imp__sub_83C934F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-1736
	ctx.r6.s64 = ctx.r7.s64 + -1736;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1808(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1808);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2272(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2272);
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
	// std r9,-1736(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1736, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C93538"))) PPC_WEAK_FUNC(sub_83C93538);
PPC_FUNC_IMPL(__imp__sub_83C93538) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-2288
	ctx.r3.s64 = ctx.r11.s64 + -2288;
	// bl 0x83523120
	ctx.lr = 0x83C93550;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,23328
	ctx.r3.s64 = ctx.r10.s64 + 23328;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9355C;
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

__attribute__((alias("__imp__sub_83C9356C"))) PPC_WEAK_FUNC(sub_83C9356C);
PPC_FUNC_IMPL(__imp__sub_83C9356C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93570"))) PPC_WEAK_FUNC(sub_83C93570);
PPC_FUNC_IMPL(__imp__sub_83C93570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23344
	ctx.r3.s64 = ctx.r11.s64 + 23344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9357C"))) PPC_WEAK_FUNC(sub_83C9357C);
PPC_FUNC_IMPL(__imp__sub_83C9357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93580"))) PPC_WEAK_FUNC(sub_83C93580);
PPC_FUNC_IMPL(__imp__sub_83C93580) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-2264
	ctx.r3.s64 = ctx.r11.s64 + -2264;
	// bl 0x8259af80
	ctx.lr = 0x83C93598;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,23360
	ctx.r3.s64 = ctx.r10.s64 + 23360;
	// bl 0x831cdcc8
	ctx.lr = 0x83C935A4;
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

__attribute__((alias("__imp__sub_83C935B4"))) PPC_WEAK_FUNC(sub_83C935B4);
PPC_FUNC_IMPL(__imp__sub_83C935B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C935B8"))) PPC_WEAK_FUNC(sub_83C935B8);
PPC_FUNC_IMPL(__imp__sub_83C935B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-2284
	ctx.r11.s64 = ctx.r8.s64 + -2284;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-1760(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1760);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23352
	ctx.r3.s64 = ctx.r6.s64 + 23352;
	// stw r10,-2284(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2284, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C935E8"))) PPC_WEAK_FUNC(sub_83C935E8);
PPC_FUNC_IMPL(__imp__sub_83C935E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23368
	ctx.r3.s64 = ctx.r11.s64 + 23368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C935F4"))) PPC_WEAK_FUNC(sub_83C935F4);
PPC_FUNC_IMPL(__imp__sub_83C935F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C935F8"))) PPC_WEAK_FUNC(sub_83C935F8);
PPC_FUNC_IMPL(__imp__sub_83C935F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23376
	ctx.r3.s64 = ctx.r11.s64 + 23376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93604"))) PPC_WEAK_FUNC(sub_83C93604);
PPC_FUNC_IMPL(__imp__sub_83C93604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93608"))) PPC_WEAK_FUNC(sub_83C93608);
PPC_FUNC_IMPL(__imp__sub_83C93608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23384
	ctx.r3.s64 = ctx.r11.s64 + 23384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93614"))) PPC_WEAK_FUNC(sub_83C93614);
PPC_FUNC_IMPL(__imp__sub_83C93614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93618"))) PPC_WEAK_FUNC(sub_83C93618);
PPC_FUNC_IMPL(__imp__sub_83C93618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23392
	ctx.r3.s64 = ctx.r11.s64 + 23392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93624"))) PPC_WEAK_FUNC(sub_83C93624);
PPC_FUNC_IMPL(__imp__sub_83C93624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93628"))) PPC_WEAK_FUNC(sub_83C93628);
PPC_FUNC_IMPL(__imp__sub_83C93628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23400
	ctx.r3.s64 = ctx.r11.s64 + 23400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93634"))) PPC_WEAK_FUNC(sub_83C93634);
PPC_FUNC_IMPL(__imp__sub_83C93634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93638"))) PPC_WEAK_FUNC(sub_83C93638);
PPC_FUNC_IMPL(__imp__sub_83C93638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23408
	ctx.r3.s64 = ctx.r11.s64 + 23408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93644"))) PPC_WEAK_FUNC(sub_83C93644);
PPC_FUNC_IMPL(__imp__sub_83C93644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93648"))) PPC_WEAK_FUNC(sub_83C93648);
PPC_FUNC_IMPL(__imp__sub_83C93648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23416
	ctx.r3.s64 = ctx.r11.s64 + 23416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93654"))) PPC_WEAK_FUNC(sub_83C93654);
PPC_FUNC_IMPL(__imp__sub_83C93654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93658"))) PPC_WEAK_FUNC(sub_83C93658);
PPC_FUNC_IMPL(__imp__sub_83C93658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23424
	ctx.r3.s64 = ctx.r11.s64 + 23424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93664"))) PPC_WEAK_FUNC(sub_83C93664);
PPC_FUNC_IMPL(__imp__sub_83C93664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93668"))) PPC_WEAK_FUNC(sub_83C93668);
PPC_FUNC_IMPL(__imp__sub_83C93668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23432
	ctx.r3.s64 = ctx.r11.s64 + 23432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93674"))) PPC_WEAK_FUNC(sub_83C93674);
PPC_FUNC_IMPL(__imp__sub_83C93674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93678"))) PPC_WEAK_FUNC(sub_83C93678);
PPC_FUNC_IMPL(__imp__sub_83C93678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23440
	ctx.r3.s64 = ctx.r11.s64 + 23440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93684"))) PPC_WEAK_FUNC(sub_83C93684);
PPC_FUNC_IMPL(__imp__sub_83C93684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93688"))) PPC_WEAK_FUNC(sub_83C93688);
PPC_FUNC_IMPL(__imp__sub_83C93688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23448
	ctx.r3.s64 = ctx.r11.s64 + 23448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93694"))) PPC_WEAK_FUNC(sub_83C93694);
PPC_FUNC_IMPL(__imp__sub_83C93694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93698"))) PPC_WEAK_FUNC(sub_83C93698);
PPC_FUNC_IMPL(__imp__sub_83C93698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23456
	ctx.r3.s64 = ctx.r11.s64 + 23456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C936A4"))) PPC_WEAK_FUNC(sub_83C936A4);
PPC_FUNC_IMPL(__imp__sub_83C936A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C936A8"))) PPC_WEAK_FUNC(sub_83C936A8);
PPC_FUNC_IMPL(__imp__sub_83C936A8) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-1920
	ctx.r3.s64 = ctx.r11.s64 + -1920;
	// bl 0x83523120
	ctx.lr = 0x83C936C0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,23464
	ctx.r3.s64 = ctx.r10.s64 + 23464;
	// bl 0x831cdcc8
	ctx.lr = 0x83C936CC;
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

__attribute__((alias("__imp__sub_83C936DC"))) PPC_WEAK_FUNC(sub_83C936DC);
PPC_FUNC_IMPL(__imp__sub_83C936DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C936E0"))) PPC_WEAK_FUNC(sub_83C936E0);
PPC_FUNC_IMPL(__imp__sub_83C936E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1904
	ctx.r7.s64 = ctx.r8.s64 + -1904;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1904(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1904);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1904(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1904, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C93708"))) PPC_WEAK_FUNC(sub_83C93708);
PPC_FUNC_IMPL(__imp__sub_83C93708) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-1608
	ctx.r6.s64 = ctx.r7.s64 + -1608;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1680(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1680);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1904(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1904);
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
	// std r9,-1608(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1608, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C93750"))) PPC_WEAK_FUNC(sub_83C93750);
PPC_FUNC_IMPL(__imp__sub_83C93750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23480
	ctx.r3.s64 = ctx.r11.s64 + 23480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9375C"))) PPC_WEAK_FUNC(sub_83C9375C);
PPC_FUNC_IMPL(__imp__sub_83C9375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93760"))) PPC_WEAK_FUNC(sub_83C93760);
PPC_FUNC_IMPL(__imp__sub_83C93760) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-1896
	ctx.r3.s64 = ctx.r11.s64 + -1896;
	// bl 0x8259af80
	ctx.lr = 0x83C93778;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,23496
	ctx.r3.s64 = ctx.r10.s64 + 23496;
	// bl 0x831cdcc8
	ctx.lr = 0x83C93784;
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

__attribute__((alias("__imp__sub_83C93794"))) PPC_WEAK_FUNC(sub_83C93794);
PPC_FUNC_IMPL(__imp__sub_83C93794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93798"))) PPC_WEAK_FUNC(sub_83C93798);
PPC_FUNC_IMPL(__imp__sub_83C93798) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1916
	ctx.r11.s64 = ctx.r8.s64 + -1916;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-1632(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1632);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23488
	ctx.r3.s64 = ctx.r6.s64 + 23488;
	// stw r10,-1916(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1916, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C937C8"))) PPC_WEAK_FUNC(sub_83C937C8);
PPC_FUNC_IMPL(__imp__sub_83C937C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C937D4"))) PPC_WEAK_FUNC(sub_83C937D4);
PPC_FUNC_IMPL(__imp__sub_83C937D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C937D8"))) PPC_WEAK_FUNC(sub_83C937D8);
PPC_FUNC_IMPL(__imp__sub_83C937D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23512
	ctx.r3.s64 = ctx.r11.s64 + 23512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C937E4"))) PPC_WEAK_FUNC(sub_83C937E4);
PPC_FUNC_IMPL(__imp__sub_83C937E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C937E8"))) PPC_WEAK_FUNC(sub_83C937E8);
PPC_FUNC_IMPL(__imp__sub_83C937E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23520
	ctx.r3.s64 = ctx.r11.s64 + 23520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C937F4"))) PPC_WEAK_FUNC(sub_83C937F4);
PPC_FUNC_IMPL(__imp__sub_83C937F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C937F8"))) PPC_WEAK_FUNC(sub_83C937F8);
PPC_FUNC_IMPL(__imp__sub_83C937F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23528
	ctx.r3.s64 = ctx.r11.s64 + 23528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93804"))) PPC_WEAK_FUNC(sub_83C93804);
PPC_FUNC_IMPL(__imp__sub_83C93804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93808"))) PPC_WEAK_FUNC(sub_83C93808);
PPC_FUNC_IMPL(__imp__sub_83C93808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23536
	ctx.r3.s64 = ctx.r11.s64 + 23536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93814"))) PPC_WEAK_FUNC(sub_83C93814);
PPC_FUNC_IMPL(__imp__sub_83C93814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93818"))) PPC_WEAK_FUNC(sub_83C93818);
PPC_FUNC_IMPL(__imp__sub_83C93818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23544
	ctx.r3.s64 = ctx.r11.s64 + 23544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93824"))) PPC_WEAK_FUNC(sub_83C93824);
PPC_FUNC_IMPL(__imp__sub_83C93824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93828"))) PPC_WEAK_FUNC(sub_83C93828);
PPC_FUNC_IMPL(__imp__sub_83C93828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23552
	ctx.r3.s64 = ctx.r11.s64 + 23552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93834"))) PPC_WEAK_FUNC(sub_83C93834);
PPC_FUNC_IMPL(__imp__sub_83C93834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93838"))) PPC_WEAK_FUNC(sub_83C93838);
PPC_FUNC_IMPL(__imp__sub_83C93838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23560
	ctx.r3.s64 = ctx.r11.s64 + 23560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93844"))) PPC_WEAK_FUNC(sub_83C93844);
PPC_FUNC_IMPL(__imp__sub_83C93844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93848"))) PPC_WEAK_FUNC(sub_83C93848);
PPC_FUNC_IMPL(__imp__sub_83C93848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23568
	ctx.r3.s64 = ctx.r11.s64 + 23568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93854"))) PPC_WEAK_FUNC(sub_83C93854);
PPC_FUNC_IMPL(__imp__sub_83C93854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93858"))) PPC_WEAK_FUNC(sub_83C93858);
PPC_FUNC_IMPL(__imp__sub_83C93858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23576
	ctx.r3.s64 = ctx.r11.s64 + 23576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93864"))) PPC_WEAK_FUNC(sub_83C93864);
PPC_FUNC_IMPL(__imp__sub_83C93864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93868"))) PPC_WEAK_FUNC(sub_83C93868);
PPC_FUNC_IMPL(__imp__sub_83C93868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23584
	ctx.r3.s64 = ctx.r11.s64 + 23584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93874"))) PPC_WEAK_FUNC(sub_83C93874);
PPC_FUNC_IMPL(__imp__sub_83C93874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93878"))) PPC_WEAK_FUNC(sub_83C93878);
PPC_FUNC_IMPL(__imp__sub_83C93878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23592
	ctx.r3.s64 = ctx.r11.s64 + 23592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93884"))) PPC_WEAK_FUNC(sub_83C93884);
PPC_FUNC_IMPL(__imp__sub_83C93884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93888"))) PPC_WEAK_FUNC(sub_83C93888);
PPC_FUNC_IMPL(__imp__sub_83C93888) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1536
	ctx.r7.s64 = ctx.r8.s64 + -1536;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1536(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1536);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1536(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1536, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C938B0"))) PPC_WEAK_FUNC(sub_83C938B0);
PPC_FUNC_IMPL(__imp__sub_83C938B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-1480
	ctx.r6.s64 = ctx.r7.s64 + -1480;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1552(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1552);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1536(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1536);
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
	// std r9,-1480(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1480, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C938F8"))) PPC_WEAK_FUNC(sub_83C938F8);
PPC_FUNC_IMPL(__imp__sub_83C938F8) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-1552
	ctx.r3.s64 = ctx.r11.s64 + -1552;
	// bl 0x83523120
	ctx.lr = 0x83C93910;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,23600
	ctx.r3.s64 = ctx.r10.s64 + 23600;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9391C;
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

__attribute__((alias("__imp__sub_83C9392C"))) PPC_WEAK_FUNC(sub_83C9392C);
PPC_FUNC_IMPL(__imp__sub_83C9392C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93930"))) PPC_WEAK_FUNC(sub_83C93930);
PPC_FUNC_IMPL(__imp__sub_83C93930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23616
	ctx.r3.s64 = ctx.r11.s64 + 23616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9393C"))) PPC_WEAK_FUNC(sub_83C9393C);
PPC_FUNC_IMPL(__imp__sub_83C9393C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93940"))) PPC_WEAK_FUNC(sub_83C93940);
PPC_FUNC_IMPL(__imp__sub_83C93940) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-1528
	ctx.r3.s64 = ctx.r11.s64 + -1528;
	// bl 0x8259af80
	ctx.lr = 0x83C93958;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,23632
	ctx.r3.s64 = ctx.r10.s64 + 23632;
	// bl 0x831cdcc8
	ctx.lr = 0x83C93964;
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

__attribute__((alias("__imp__sub_83C93974"))) PPC_WEAK_FUNC(sub_83C93974);
PPC_FUNC_IMPL(__imp__sub_83C93974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93978"))) PPC_WEAK_FUNC(sub_83C93978);
PPC_FUNC_IMPL(__imp__sub_83C93978) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1548
	ctx.r11.s64 = ctx.r8.s64 + -1548;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-1504(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1504);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23624
	ctx.r3.s64 = ctx.r6.s64 + 23624;
	// stw r10,-1548(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1548, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C939A8"))) PPC_WEAK_FUNC(sub_83C939A8);
PPC_FUNC_IMPL(__imp__sub_83C939A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23640
	ctx.r3.s64 = ctx.r11.s64 + 23640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C939B4"))) PPC_WEAK_FUNC(sub_83C939B4);
PPC_FUNC_IMPL(__imp__sub_83C939B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C939B8"))) PPC_WEAK_FUNC(sub_83C939B8);
PPC_FUNC_IMPL(__imp__sub_83C939B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23648
	ctx.r3.s64 = ctx.r11.s64 + 23648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C939C4"))) PPC_WEAK_FUNC(sub_83C939C4);
PPC_FUNC_IMPL(__imp__sub_83C939C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C939C8"))) PPC_WEAK_FUNC(sub_83C939C8);
PPC_FUNC_IMPL(__imp__sub_83C939C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23656
	ctx.r3.s64 = ctx.r11.s64 + 23656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C939D4"))) PPC_WEAK_FUNC(sub_83C939D4);
PPC_FUNC_IMPL(__imp__sub_83C939D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C939D8"))) PPC_WEAK_FUNC(sub_83C939D8);
PPC_FUNC_IMPL(__imp__sub_83C939D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23664
	ctx.r3.s64 = ctx.r11.s64 + 23664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C939E4"))) PPC_WEAK_FUNC(sub_83C939E4);
PPC_FUNC_IMPL(__imp__sub_83C939E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C939E8"))) PPC_WEAK_FUNC(sub_83C939E8);
PPC_FUNC_IMPL(__imp__sub_83C939E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23672
	ctx.r3.s64 = ctx.r11.s64 + 23672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C939F4"))) PPC_WEAK_FUNC(sub_83C939F4);
PPC_FUNC_IMPL(__imp__sub_83C939F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C939F8"))) PPC_WEAK_FUNC(sub_83C939F8);
PPC_FUNC_IMPL(__imp__sub_83C939F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23680
	ctx.r3.s64 = ctx.r11.s64 + 23680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93A04"))) PPC_WEAK_FUNC(sub_83C93A04);
PPC_FUNC_IMPL(__imp__sub_83C93A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93A08"))) PPC_WEAK_FUNC(sub_83C93A08);
PPC_FUNC_IMPL(__imp__sub_83C93A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23688
	ctx.r3.s64 = ctx.r11.s64 + 23688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93A14"))) PPC_WEAK_FUNC(sub_83C93A14);
PPC_FUNC_IMPL(__imp__sub_83C93A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93A18"))) PPC_WEAK_FUNC(sub_83C93A18);
PPC_FUNC_IMPL(__imp__sub_83C93A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23696
	ctx.r3.s64 = ctx.r11.s64 + 23696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93A24"))) PPC_WEAK_FUNC(sub_83C93A24);
PPC_FUNC_IMPL(__imp__sub_83C93A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93A28"))) PPC_WEAK_FUNC(sub_83C93A28);
PPC_FUNC_IMPL(__imp__sub_83C93A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23704
	ctx.r3.s64 = ctx.r11.s64 + 23704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93A34"))) PPC_WEAK_FUNC(sub_83C93A34);
PPC_FUNC_IMPL(__imp__sub_83C93A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93A38"))) PPC_WEAK_FUNC(sub_83C93A38);
PPC_FUNC_IMPL(__imp__sub_83C93A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23712
	ctx.r3.s64 = ctx.r11.s64 + 23712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93A44"))) PPC_WEAK_FUNC(sub_83C93A44);
PPC_FUNC_IMPL(__imp__sub_83C93A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93A48"))) PPC_WEAK_FUNC(sub_83C93A48);
PPC_FUNC_IMPL(__imp__sub_83C93A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23720
	ctx.r3.s64 = ctx.r11.s64 + 23720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93A54"))) PPC_WEAK_FUNC(sub_83C93A54);
PPC_FUNC_IMPL(__imp__sub_83C93A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93A58"))) PPC_WEAK_FUNC(sub_83C93A58);
PPC_FUNC_IMPL(__imp__sub_83C93A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23728
	ctx.r3.s64 = ctx.r11.s64 + 23728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93A64"))) PPC_WEAK_FUNC(sub_83C93A64);
PPC_FUNC_IMPL(__imp__sub_83C93A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93A68"))) PPC_WEAK_FUNC(sub_83C93A68);
PPC_FUNC_IMPL(__imp__sub_83C93A68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1168
	ctx.r7.s64 = ctx.r8.s64 + -1168;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1168);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1168(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1168, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C93A90"))) PPC_WEAK_FUNC(sub_83C93A90);
PPC_FUNC_IMPL(__imp__sub_83C93A90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-1280
	ctx.r6.s64 = ctx.r7.s64 + -1280;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1352(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1352);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1168(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1168);
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
	// std r9,-1280(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1280, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C93AD8"))) PPC_WEAK_FUNC(sub_83C93AD8);
PPC_FUNC_IMPL(__imp__sub_83C93AD8) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-1184
	ctx.r3.s64 = ctx.r11.s64 + -1184;
	// bl 0x83523120
	ctx.lr = 0x83C93AF0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,23736
	ctx.r3.s64 = ctx.r10.s64 + 23736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C93AFC;
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

__attribute__((alias("__imp__sub_83C93B0C"))) PPC_WEAK_FUNC(sub_83C93B0C);
PPC_FUNC_IMPL(__imp__sub_83C93B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93B10"))) PPC_WEAK_FUNC(sub_83C93B10);
PPC_FUNC_IMPL(__imp__sub_83C93B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23752
	ctx.r3.s64 = ctx.r11.s64 + 23752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93B1C"))) PPC_WEAK_FUNC(sub_83C93B1C);
PPC_FUNC_IMPL(__imp__sub_83C93B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93B20"))) PPC_WEAK_FUNC(sub_83C93B20);
PPC_FUNC_IMPL(__imp__sub_83C93B20) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-1160
	ctx.r3.s64 = ctx.r11.s64 + -1160;
	// bl 0x8259af80
	ctx.lr = 0x83C93B38;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,23768
	ctx.r3.s64 = ctx.r10.s64 + 23768;
	// bl 0x831cdcc8
	ctx.lr = 0x83C93B44;
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

__attribute__((alias("__imp__sub_83C93B54"))) PPC_WEAK_FUNC(sub_83C93B54);
PPC_FUNC_IMPL(__imp__sub_83C93B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93B58"))) PPC_WEAK_FUNC(sub_83C93B58);
PPC_FUNC_IMPL(__imp__sub_83C93B58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1180
	ctx.r11.s64 = ctx.r8.s64 + -1180;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-1304(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1304);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23760
	ctx.r3.s64 = ctx.r6.s64 + 23760;
	// stw r10,-1180(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1180, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93B88"))) PPC_WEAK_FUNC(sub_83C93B88);
PPC_FUNC_IMPL(__imp__sub_83C93B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23776
	ctx.r3.s64 = ctx.r11.s64 + 23776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93B94"))) PPC_WEAK_FUNC(sub_83C93B94);
PPC_FUNC_IMPL(__imp__sub_83C93B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93B98"))) PPC_WEAK_FUNC(sub_83C93B98);
PPC_FUNC_IMPL(__imp__sub_83C93B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23784
	ctx.r3.s64 = ctx.r11.s64 + 23784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93BA4"))) PPC_WEAK_FUNC(sub_83C93BA4);
PPC_FUNC_IMPL(__imp__sub_83C93BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93BA8"))) PPC_WEAK_FUNC(sub_83C93BA8);
PPC_FUNC_IMPL(__imp__sub_83C93BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23792
	ctx.r3.s64 = ctx.r11.s64 + 23792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93BB4"))) PPC_WEAK_FUNC(sub_83C93BB4);
PPC_FUNC_IMPL(__imp__sub_83C93BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93BB8"))) PPC_WEAK_FUNC(sub_83C93BB8);
PPC_FUNC_IMPL(__imp__sub_83C93BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23800
	ctx.r3.s64 = ctx.r11.s64 + 23800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93BC4"))) PPC_WEAK_FUNC(sub_83C93BC4);
PPC_FUNC_IMPL(__imp__sub_83C93BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93BC8"))) PPC_WEAK_FUNC(sub_83C93BC8);
PPC_FUNC_IMPL(__imp__sub_83C93BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23808
	ctx.r3.s64 = ctx.r11.s64 + 23808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93BD4"))) PPC_WEAK_FUNC(sub_83C93BD4);
PPC_FUNC_IMPL(__imp__sub_83C93BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93BD8"))) PPC_WEAK_FUNC(sub_83C93BD8);
PPC_FUNC_IMPL(__imp__sub_83C93BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23816
	ctx.r3.s64 = ctx.r11.s64 + 23816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93BE4"))) PPC_WEAK_FUNC(sub_83C93BE4);
PPC_FUNC_IMPL(__imp__sub_83C93BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93BE8"))) PPC_WEAK_FUNC(sub_83C93BE8);
PPC_FUNC_IMPL(__imp__sub_83C93BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23824
	ctx.r3.s64 = ctx.r11.s64 + 23824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93BF4"))) PPC_WEAK_FUNC(sub_83C93BF4);
PPC_FUNC_IMPL(__imp__sub_83C93BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93BF8"))) PPC_WEAK_FUNC(sub_83C93BF8);
PPC_FUNC_IMPL(__imp__sub_83C93BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23832
	ctx.r3.s64 = ctx.r11.s64 + 23832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93C04"))) PPC_WEAK_FUNC(sub_83C93C04);
PPC_FUNC_IMPL(__imp__sub_83C93C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93C08"))) PPC_WEAK_FUNC(sub_83C93C08);
PPC_FUNC_IMPL(__imp__sub_83C93C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23840
	ctx.r3.s64 = ctx.r11.s64 + 23840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93C14"))) PPC_WEAK_FUNC(sub_83C93C14);
PPC_FUNC_IMPL(__imp__sub_83C93C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93C18"))) PPC_WEAK_FUNC(sub_83C93C18);
PPC_FUNC_IMPL(__imp__sub_83C93C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23848
	ctx.r3.s64 = ctx.r11.s64 + 23848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93C24"))) PPC_WEAK_FUNC(sub_83C93C24);
PPC_FUNC_IMPL(__imp__sub_83C93C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93C28"))) PPC_WEAK_FUNC(sub_83C93C28);
PPC_FUNC_IMPL(__imp__sub_83C93C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23856
	ctx.r3.s64 = ctx.r11.s64 + 23856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93C34"))) PPC_WEAK_FUNC(sub_83C93C34);
PPC_FUNC_IMPL(__imp__sub_83C93C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93C38"))) PPC_WEAK_FUNC(sub_83C93C38);
PPC_FUNC_IMPL(__imp__sub_83C93C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23864
	ctx.r3.s64 = ctx.r11.s64 + 23864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93C44"))) PPC_WEAK_FUNC(sub_83C93C44);
PPC_FUNC_IMPL(__imp__sub_83C93C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93C48"))) PPC_WEAK_FUNC(sub_83C93C48);
PPC_FUNC_IMPL(__imp__sub_83C93C48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-800
	ctx.r7.s64 = ctx.r8.s64 + -800;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-800(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -800);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-800(r8)
	PPC_STORE_U32(ctx.r8.u32 + -800, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C93C70"))) PPC_WEAK_FUNC(sub_83C93C70);
PPC_FUNC_IMPL(__imp__sub_83C93C70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-1152
	ctx.r6.s64 = ctx.r7.s64 + -1152;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1224(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1224);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-800(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -800);
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
	// std r9,-1152(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1152, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C93CB8"))) PPC_WEAK_FUNC(sub_83C93CB8);
PPC_FUNC_IMPL(__imp__sub_83C93CB8) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-816
	ctx.r3.s64 = ctx.r11.s64 + -816;
	// bl 0x83523120
	ctx.lr = 0x83C93CD0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,23872
	ctx.r3.s64 = ctx.r10.s64 + 23872;
	// bl 0x831cdcc8
	ctx.lr = 0x83C93CDC;
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

__attribute__((alias("__imp__sub_83C93CEC"))) PPC_WEAK_FUNC(sub_83C93CEC);
PPC_FUNC_IMPL(__imp__sub_83C93CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93CF0"))) PPC_WEAK_FUNC(sub_83C93CF0);
PPC_FUNC_IMPL(__imp__sub_83C93CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23888
	ctx.r3.s64 = ctx.r11.s64 + 23888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93CFC"))) PPC_WEAK_FUNC(sub_83C93CFC);
PPC_FUNC_IMPL(__imp__sub_83C93CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93D00"))) PPC_WEAK_FUNC(sub_83C93D00);
PPC_FUNC_IMPL(__imp__sub_83C93D00) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-792
	ctx.r3.s64 = ctx.r11.s64 + -792;
	// bl 0x8259af80
	ctx.lr = 0x83C93D18;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,23904
	ctx.r3.s64 = ctx.r10.s64 + 23904;
	// bl 0x831cdcc8
	ctx.lr = 0x83C93D24;
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

__attribute__((alias("__imp__sub_83C93D34"))) PPC_WEAK_FUNC(sub_83C93D34);
PPC_FUNC_IMPL(__imp__sub_83C93D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93D38"))) PPC_WEAK_FUNC(sub_83C93D38);
PPC_FUNC_IMPL(__imp__sub_83C93D38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-812
	ctx.r11.s64 = ctx.r8.s64 + -812;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-1176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1176);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23896
	ctx.r3.s64 = ctx.r6.s64 + 23896;
	// stw r10,-812(r8)
	PPC_STORE_U32(ctx.r8.u32 + -812, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93D68"))) PPC_WEAK_FUNC(sub_83C93D68);
PPC_FUNC_IMPL(__imp__sub_83C93D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23912
	ctx.r3.s64 = ctx.r11.s64 + 23912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93D74"))) PPC_WEAK_FUNC(sub_83C93D74);
PPC_FUNC_IMPL(__imp__sub_83C93D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93D78"))) PPC_WEAK_FUNC(sub_83C93D78);
PPC_FUNC_IMPL(__imp__sub_83C93D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23920
	ctx.r3.s64 = ctx.r11.s64 + 23920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93D84"))) PPC_WEAK_FUNC(sub_83C93D84);
PPC_FUNC_IMPL(__imp__sub_83C93D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93D88"))) PPC_WEAK_FUNC(sub_83C93D88);
PPC_FUNC_IMPL(__imp__sub_83C93D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23928
	ctx.r3.s64 = ctx.r11.s64 + 23928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C93D94"))) PPC_WEAK_FUNC(sub_83C93D94);
PPC_FUNC_IMPL(__imp__sub_83C93D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C93D98"))) PPC_WEAK_FUNC(sub_83C93D98);
PPC_FUNC_IMPL(__imp__sub_83C93D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,23936
	ctx.r3.s64 = ctx.r11.s64 + 23936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

