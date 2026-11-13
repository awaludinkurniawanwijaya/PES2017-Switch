#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BDB21C"))) PPC_WEAK_FUNC(sub_83BDB21C);
PPC_FUNC_IMPL(__imp__sub_83BDB21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB220"))) PPC_WEAK_FUNC(sub_83BDB220);
PPC_FUNC_IMPL(__imp__sub_83BDB220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26840
	ctx.r3.s64 = ctx.r11.s64 + 26840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB22C"))) PPC_WEAK_FUNC(sub_83BDB22C);
PPC_FUNC_IMPL(__imp__sub_83BDB22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB230"))) PPC_WEAK_FUNC(sub_83BDB230);
PPC_FUNC_IMPL(__imp__sub_83BDB230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26848
	ctx.r3.s64 = ctx.r11.s64 + 26848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB23C"))) PPC_WEAK_FUNC(sub_83BDB23C);
PPC_FUNC_IMPL(__imp__sub_83BDB23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB240"))) PPC_WEAK_FUNC(sub_83BDB240);
PPC_FUNC_IMPL(__imp__sub_83BDB240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26856
	ctx.r3.s64 = ctx.r11.s64 + 26856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB24C"))) PPC_WEAK_FUNC(sub_83BDB24C);
PPC_FUNC_IMPL(__imp__sub_83BDB24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB250"))) PPC_WEAK_FUNC(sub_83BDB250);
PPC_FUNC_IMPL(__imp__sub_83BDB250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26864
	ctx.r3.s64 = ctx.r11.s64 + 26864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB25C"))) PPC_WEAK_FUNC(sub_83BDB25C);
PPC_FUNC_IMPL(__imp__sub_83BDB25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB260"))) PPC_WEAK_FUNC(sub_83BDB260);
PPC_FUNC_IMPL(__imp__sub_83BDB260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26872
	ctx.r3.s64 = ctx.r11.s64 + 26872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB26C"))) PPC_WEAK_FUNC(sub_83BDB26C);
PPC_FUNC_IMPL(__imp__sub_83BDB26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB270"))) PPC_WEAK_FUNC(sub_83BDB270);
PPC_FUNC_IMPL(__imp__sub_83BDB270) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-21984
	ctx.r3.s64 = ctx.r11.s64 + -21984;
	// bl 0x83523120
	ctx.lr = 0x83BDB288;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,26880
	ctx.r3.s64 = ctx.r10.s64 + 26880;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDB294;
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

__attribute__((alias("__imp__sub_83BDB2A4"))) PPC_WEAK_FUNC(sub_83BDB2A4);
PPC_FUNC_IMPL(__imp__sub_83BDB2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB2A8"))) PPC_WEAK_FUNC(sub_83BDB2A8);
PPC_FUNC_IMPL(__imp__sub_83BDB2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21968
	ctx.r7.s64 = ctx.r8.s64 + -21968;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21968);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21968(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21968, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDB2D0"))) PPC_WEAK_FUNC(sub_83BDB2D0);
PPC_FUNC_IMPL(__imp__sub_83BDB2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-27340
	ctx.r6.s64 = ctx.r7.s64 + -27340;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27412(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27412);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21968(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21968);
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
	// std r9,-27340(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27340, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDB318"))) PPC_WEAK_FUNC(sub_83BDB318);
PPC_FUNC_IMPL(__imp__sub_83BDB318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26896
	ctx.r3.s64 = ctx.r11.s64 + 26896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB324"))) PPC_WEAK_FUNC(sub_83BDB324);
PPC_FUNC_IMPL(__imp__sub_83BDB324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB328"))) PPC_WEAK_FUNC(sub_83BDB328);
PPC_FUNC_IMPL(__imp__sub_83BDB328) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-21960
	ctx.r3.s64 = ctx.r11.s64 + -21960;
	// bl 0x8259af80
	ctx.lr = 0x83BDB340;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,26912
	ctx.r3.s64 = ctx.r10.s64 + 26912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDB34C;
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

__attribute__((alias("__imp__sub_83BDB35C"))) PPC_WEAK_FUNC(sub_83BDB35C);
PPC_FUNC_IMPL(__imp__sub_83BDB35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB360"))) PPC_WEAK_FUNC(sub_83BDB360);
PPC_FUNC_IMPL(__imp__sub_83BDB360) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21980
	ctx.r11.s64 = ctx.r8.s64 + -21980;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-27364(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27364);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26904
	ctx.r3.s64 = ctx.r6.s64 + 26904;
	// stw r10,-21980(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB390"))) PPC_WEAK_FUNC(sub_83BDB390);
PPC_FUNC_IMPL(__imp__sub_83BDB390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26920
	ctx.r3.s64 = ctx.r11.s64 + 26920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB39C"))) PPC_WEAK_FUNC(sub_83BDB39C);
PPC_FUNC_IMPL(__imp__sub_83BDB39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB3A0"))) PPC_WEAK_FUNC(sub_83BDB3A0);
PPC_FUNC_IMPL(__imp__sub_83BDB3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26928
	ctx.r3.s64 = ctx.r11.s64 + 26928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB3AC"))) PPC_WEAK_FUNC(sub_83BDB3AC);
PPC_FUNC_IMPL(__imp__sub_83BDB3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB3B0"))) PPC_WEAK_FUNC(sub_83BDB3B0);
PPC_FUNC_IMPL(__imp__sub_83BDB3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26936
	ctx.r3.s64 = ctx.r11.s64 + 26936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB3BC"))) PPC_WEAK_FUNC(sub_83BDB3BC);
PPC_FUNC_IMPL(__imp__sub_83BDB3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB3C0"))) PPC_WEAK_FUNC(sub_83BDB3C0);
PPC_FUNC_IMPL(__imp__sub_83BDB3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26944
	ctx.r3.s64 = ctx.r11.s64 + 26944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB3CC"))) PPC_WEAK_FUNC(sub_83BDB3CC);
PPC_FUNC_IMPL(__imp__sub_83BDB3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB3D0"))) PPC_WEAK_FUNC(sub_83BDB3D0);
PPC_FUNC_IMPL(__imp__sub_83BDB3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26952
	ctx.r3.s64 = ctx.r11.s64 + 26952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB3DC"))) PPC_WEAK_FUNC(sub_83BDB3DC);
PPC_FUNC_IMPL(__imp__sub_83BDB3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB3E0"))) PPC_WEAK_FUNC(sub_83BDB3E0);
PPC_FUNC_IMPL(__imp__sub_83BDB3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26960
	ctx.r3.s64 = ctx.r11.s64 + 26960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB3EC"))) PPC_WEAK_FUNC(sub_83BDB3EC);
PPC_FUNC_IMPL(__imp__sub_83BDB3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB3F0"))) PPC_WEAK_FUNC(sub_83BDB3F0);
PPC_FUNC_IMPL(__imp__sub_83BDB3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26968
	ctx.r3.s64 = ctx.r11.s64 + 26968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB3FC"))) PPC_WEAK_FUNC(sub_83BDB3FC);
PPC_FUNC_IMPL(__imp__sub_83BDB3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB400"))) PPC_WEAK_FUNC(sub_83BDB400);
PPC_FUNC_IMPL(__imp__sub_83BDB400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26976
	ctx.r3.s64 = ctx.r11.s64 + 26976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB40C"))) PPC_WEAK_FUNC(sub_83BDB40C);
PPC_FUNC_IMPL(__imp__sub_83BDB40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB410"))) PPC_WEAK_FUNC(sub_83BDB410);
PPC_FUNC_IMPL(__imp__sub_83BDB410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26984
	ctx.r3.s64 = ctx.r11.s64 + 26984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB41C"))) PPC_WEAK_FUNC(sub_83BDB41C);
PPC_FUNC_IMPL(__imp__sub_83BDB41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB420"))) PPC_WEAK_FUNC(sub_83BDB420);
PPC_FUNC_IMPL(__imp__sub_83BDB420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,26992
	ctx.r3.s64 = ctx.r11.s64 + 26992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB42C"))) PPC_WEAK_FUNC(sub_83BDB42C);
PPC_FUNC_IMPL(__imp__sub_83BDB42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB430"))) PPC_WEAK_FUNC(sub_83BDB430);
PPC_FUNC_IMPL(__imp__sub_83BDB430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27000
	ctx.r3.s64 = ctx.r11.s64 + 27000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB43C"))) PPC_WEAK_FUNC(sub_83BDB43C);
PPC_FUNC_IMPL(__imp__sub_83BDB43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB440"))) PPC_WEAK_FUNC(sub_83BDB440);
PPC_FUNC_IMPL(__imp__sub_83BDB440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27008
	ctx.r3.s64 = ctx.r11.s64 + 27008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB44C"))) PPC_WEAK_FUNC(sub_83BDB44C);
PPC_FUNC_IMPL(__imp__sub_83BDB44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB450"))) PPC_WEAK_FUNC(sub_83BDB450);
PPC_FUNC_IMPL(__imp__sub_83BDB450) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-21616
	ctx.r3.s64 = ctx.r11.s64 + -21616;
	// bl 0x83523120
	ctx.lr = 0x83BDB468;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,27016
	ctx.r3.s64 = ctx.r10.s64 + 27016;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDB474;
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

__attribute__((alias("__imp__sub_83BDB484"))) PPC_WEAK_FUNC(sub_83BDB484);
PPC_FUNC_IMPL(__imp__sub_83BDB484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB488"))) PPC_WEAK_FUNC(sub_83BDB488);
PPC_FUNC_IMPL(__imp__sub_83BDB488) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21600
	ctx.r7.s64 = ctx.r8.s64 + -21600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21600);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21600(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21600, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDB4B0"))) PPC_WEAK_FUNC(sub_83BDB4B0);
PPC_FUNC_IMPL(__imp__sub_83BDB4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-27200
	ctx.r6.s64 = ctx.r7.s64 + -27200;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27272(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27272);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21600(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21600);
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
	// std r9,-27200(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27200, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDB4F8"))) PPC_WEAK_FUNC(sub_83BDB4F8);
PPC_FUNC_IMPL(__imp__sub_83BDB4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27032
	ctx.r3.s64 = ctx.r11.s64 + 27032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB504"))) PPC_WEAK_FUNC(sub_83BDB504);
PPC_FUNC_IMPL(__imp__sub_83BDB504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB508"))) PPC_WEAK_FUNC(sub_83BDB508);
PPC_FUNC_IMPL(__imp__sub_83BDB508) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-21592
	ctx.r3.s64 = ctx.r11.s64 + -21592;
	// bl 0x8259af80
	ctx.lr = 0x83BDB520;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,27048
	ctx.r3.s64 = ctx.r10.s64 + 27048;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDB52C;
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

__attribute__((alias("__imp__sub_83BDB53C"))) PPC_WEAK_FUNC(sub_83BDB53C);
PPC_FUNC_IMPL(__imp__sub_83BDB53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB540"))) PPC_WEAK_FUNC(sub_83BDB540);
PPC_FUNC_IMPL(__imp__sub_83BDB540) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21612
	ctx.r11.s64 = ctx.r8.s64 + -21612;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-27224(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27224);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27040
	ctx.r3.s64 = ctx.r6.s64 + 27040;
	// stw r10,-21612(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB570"))) PPC_WEAK_FUNC(sub_83BDB570);
PPC_FUNC_IMPL(__imp__sub_83BDB570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27056
	ctx.r3.s64 = ctx.r11.s64 + 27056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB57C"))) PPC_WEAK_FUNC(sub_83BDB57C);
PPC_FUNC_IMPL(__imp__sub_83BDB57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB580"))) PPC_WEAK_FUNC(sub_83BDB580);
PPC_FUNC_IMPL(__imp__sub_83BDB580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27064
	ctx.r3.s64 = ctx.r11.s64 + 27064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB58C"))) PPC_WEAK_FUNC(sub_83BDB58C);
PPC_FUNC_IMPL(__imp__sub_83BDB58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB590"))) PPC_WEAK_FUNC(sub_83BDB590);
PPC_FUNC_IMPL(__imp__sub_83BDB590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27072
	ctx.r3.s64 = ctx.r11.s64 + 27072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB59C"))) PPC_WEAK_FUNC(sub_83BDB59C);
PPC_FUNC_IMPL(__imp__sub_83BDB59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB5A0"))) PPC_WEAK_FUNC(sub_83BDB5A0);
PPC_FUNC_IMPL(__imp__sub_83BDB5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27080
	ctx.r3.s64 = ctx.r11.s64 + 27080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB5AC"))) PPC_WEAK_FUNC(sub_83BDB5AC);
PPC_FUNC_IMPL(__imp__sub_83BDB5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB5B0"))) PPC_WEAK_FUNC(sub_83BDB5B0);
PPC_FUNC_IMPL(__imp__sub_83BDB5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27088
	ctx.r3.s64 = ctx.r11.s64 + 27088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB5BC"))) PPC_WEAK_FUNC(sub_83BDB5BC);
PPC_FUNC_IMPL(__imp__sub_83BDB5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB5C0"))) PPC_WEAK_FUNC(sub_83BDB5C0);
PPC_FUNC_IMPL(__imp__sub_83BDB5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27096
	ctx.r3.s64 = ctx.r11.s64 + 27096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB5CC"))) PPC_WEAK_FUNC(sub_83BDB5CC);
PPC_FUNC_IMPL(__imp__sub_83BDB5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB5D0"))) PPC_WEAK_FUNC(sub_83BDB5D0);
PPC_FUNC_IMPL(__imp__sub_83BDB5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27104
	ctx.r3.s64 = ctx.r11.s64 + 27104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB5DC"))) PPC_WEAK_FUNC(sub_83BDB5DC);
PPC_FUNC_IMPL(__imp__sub_83BDB5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB5E0"))) PPC_WEAK_FUNC(sub_83BDB5E0);
PPC_FUNC_IMPL(__imp__sub_83BDB5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27112
	ctx.r3.s64 = ctx.r11.s64 + 27112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB5EC"))) PPC_WEAK_FUNC(sub_83BDB5EC);
PPC_FUNC_IMPL(__imp__sub_83BDB5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB5F0"))) PPC_WEAK_FUNC(sub_83BDB5F0);
PPC_FUNC_IMPL(__imp__sub_83BDB5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27120
	ctx.r3.s64 = ctx.r11.s64 + 27120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB5FC"))) PPC_WEAK_FUNC(sub_83BDB5FC);
PPC_FUNC_IMPL(__imp__sub_83BDB5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB600"))) PPC_WEAK_FUNC(sub_83BDB600);
PPC_FUNC_IMPL(__imp__sub_83BDB600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27128
	ctx.r3.s64 = ctx.r11.s64 + 27128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB60C"))) PPC_WEAK_FUNC(sub_83BDB60C);
PPC_FUNC_IMPL(__imp__sub_83BDB60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB610"))) PPC_WEAK_FUNC(sub_83BDB610);
PPC_FUNC_IMPL(__imp__sub_83BDB610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27136
	ctx.r3.s64 = ctx.r11.s64 + 27136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB61C"))) PPC_WEAK_FUNC(sub_83BDB61C);
PPC_FUNC_IMPL(__imp__sub_83BDB61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB620"))) PPC_WEAK_FUNC(sub_83BDB620);
PPC_FUNC_IMPL(__imp__sub_83BDB620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27144
	ctx.r3.s64 = ctx.r11.s64 + 27144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB62C"))) PPC_WEAK_FUNC(sub_83BDB62C);
PPC_FUNC_IMPL(__imp__sub_83BDB62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB630"))) PPC_WEAK_FUNC(sub_83BDB630);
PPC_FUNC_IMPL(__imp__sub_83BDB630) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-21244
	ctx.r3.s64 = ctx.r11.s64 + -21244;
	// bl 0x83523120
	ctx.lr = 0x83BDB648;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,27152
	ctx.r3.s64 = ctx.r10.s64 + 27152;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDB654;
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

__attribute__((alias("__imp__sub_83BDB664"))) PPC_WEAK_FUNC(sub_83BDB664);
PPC_FUNC_IMPL(__imp__sub_83BDB664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB668"))) PPC_WEAK_FUNC(sub_83BDB668);
PPC_FUNC_IMPL(__imp__sub_83BDB668) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21228
	ctx.r7.s64 = ctx.r8.s64 + -21228;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21228(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21228);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21228(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21228, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDB690"))) PPC_WEAK_FUNC(sub_83BDB690);
PPC_FUNC_IMPL(__imp__sub_83BDB690) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-27064
	ctx.r6.s64 = ctx.r7.s64 + -27064;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27144(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27144);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21228(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21228);
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
	// std r9,-27064(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27064, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDB6D8"))) PPC_WEAK_FUNC(sub_83BDB6D8);
PPC_FUNC_IMPL(__imp__sub_83BDB6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27168
	ctx.r3.s64 = ctx.r11.s64 + 27168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB6E4"))) PPC_WEAK_FUNC(sub_83BDB6E4);
PPC_FUNC_IMPL(__imp__sub_83BDB6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB6E8"))) PPC_WEAK_FUNC(sub_83BDB6E8);
PPC_FUNC_IMPL(__imp__sub_83BDB6E8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-21216
	ctx.r3.s64 = ctx.r11.s64 + -21216;
	// bl 0x8259af80
	ctx.lr = 0x83BDB700;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,27184
	ctx.r3.s64 = ctx.r10.s64 + 27184;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDB70C;
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

__attribute__((alias("__imp__sub_83BDB71C"))) PPC_WEAK_FUNC(sub_83BDB71C);
PPC_FUNC_IMPL(__imp__sub_83BDB71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB720"))) PPC_WEAK_FUNC(sub_83BDB720);
PPC_FUNC_IMPL(__imp__sub_83BDB720) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21240
	ctx.r11.s64 = ctx.r8.s64 + -21240;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-27096(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27096);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27176
	ctx.r3.s64 = ctx.r6.s64 + 27176;
	// stw r10,-21240(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21240, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB750"))) PPC_WEAK_FUNC(sub_83BDB750);
PPC_FUNC_IMPL(__imp__sub_83BDB750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27192
	ctx.r3.s64 = ctx.r11.s64 + 27192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB75C"))) PPC_WEAK_FUNC(sub_83BDB75C);
PPC_FUNC_IMPL(__imp__sub_83BDB75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB760"))) PPC_WEAK_FUNC(sub_83BDB760);
PPC_FUNC_IMPL(__imp__sub_83BDB760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27200
	ctx.r3.s64 = ctx.r11.s64 + 27200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB76C"))) PPC_WEAK_FUNC(sub_83BDB76C);
PPC_FUNC_IMPL(__imp__sub_83BDB76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB770"))) PPC_WEAK_FUNC(sub_83BDB770);
PPC_FUNC_IMPL(__imp__sub_83BDB770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27208
	ctx.r3.s64 = ctx.r11.s64 + 27208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB77C"))) PPC_WEAK_FUNC(sub_83BDB77C);
PPC_FUNC_IMPL(__imp__sub_83BDB77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB780"))) PPC_WEAK_FUNC(sub_83BDB780);
PPC_FUNC_IMPL(__imp__sub_83BDB780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27216
	ctx.r3.s64 = ctx.r11.s64 + 27216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB78C"))) PPC_WEAK_FUNC(sub_83BDB78C);
PPC_FUNC_IMPL(__imp__sub_83BDB78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB790"))) PPC_WEAK_FUNC(sub_83BDB790);
PPC_FUNC_IMPL(__imp__sub_83BDB790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27224
	ctx.r3.s64 = ctx.r11.s64 + 27224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB79C"))) PPC_WEAK_FUNC(sub_83BDB79C);
PPC_FUNC_IMPL(__imp__sub_83BDB79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB7A0"))) PPC_WEAK_FUNC(sub_83BDB7A0);
PPC_FUNC_IMPL(__imp__sub_83BDB7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27232
	ctx.r3.s64 = ctx.r11.s64 + 27232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB7AC"))) PPC_WEAK_FUNC(sub_83BDB7AC);
PPC_FUNC_IMPL(__imp__sub_83BDB7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB7B0"))) PPC_WEAK_FUNC(sub_83BDB7B0);
PPC_FUNC_IMPL(__imp__sub_83BDB7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27240
	ctx.r3.s64 = ctx.r11.s64 + 27240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB7BC"))) PPC_WEAK_FUNC(sub_83BDB7BC);
PPC_FUNC_IMPL(__imp__sub_83BDB7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB7C0"))) PPC_WEAK_FUNC(sub_83BDB7C0);
PPC_FUNC_IMPL(__imp__sub_83BDB7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27248
	ctx.r3.s64 = ctx.r11.s64 + 27248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB7CC"))) PPC_WEAK_FUNC(sub_83BDB7CC);
PPC_FUNC_IMPL(__imp__sub_83BDB7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB7D0"))) PPC_WEAK_FUNC(sub_83BDB7D0);
PPC_FUNC_IMPL(__imp__sub_83BDB7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27256
	ctx.r3.s64 = ctx.r11.s64 + 27256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB7DC"))) PPC_WEAK_FUNC(sub_83BDB7DC);
PPC_FUNC_IMPL(__imp__sub_83BDB7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB7E0"))) PPC_WEAK_FUNC(sub_83BDB7E0);
PPC_FUNC_IMPL(__imp__sub_83BDB7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27264
	ctx.r3.s64 = ctx.r11.s64 + 27264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB7EC"))) PPC_WEAK_FUNC(sub_83BDB7EC);
PPC_FUNC_IMPL(__imp__sub_83BDB7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB7F0"))) PPC_WEAK_FUNC(sub_83BDB7F0);
PPC_FUNC_IMPL(__imp__sub_83BDB7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27272
	ctx.r3.s64 = ctx.r11.s64 + 27272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB7FC"))) PPC_WEAK_FUNC(sub_83BDB7FC);
PPC_FUNC_IMPL(__imp__sub_83BDB7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB800"))) PPC_WEAK_FUNC(sub_83BDB800);
PPC_FUNC_IMPL(__imp__sub_83BDB800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27280
	ctx.r3.s64 = ctx.r11.s64 + 27280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB80C"))) PPC_WEAK_FUNC(sub_83BDB80C);
PPC_FUNC_IMPL(__imp__sub_83BDB80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB810"))) PPC_WEAK_FUNC(sub_83BDB810);
PPC_FUNC_IMPL(__imp__sub_83BDB810) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-20872
	ctx.r3.s64 = ctx.r11.s64 + -20872;
	// bl 0x83523120
	ctx.lr = 0x83BDB828;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,27288
	ctx.r3.s64 = ctx.r10.s64 + 27288;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDB834;
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

__attribute__((alias("__imp__sub_83BDB844"))) PPC_WEAK_FUNC(sub_83BDB844);
PPC_FUNC_IMPL(__imp__sub_83BDB844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB848"))) PPC_WEAK_FUNC(sub_83BDB848);
PPC_FUNC_IMPL(__imp__sub_83BDB848) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20856
	ctx.r7.s64 = ctx.r8.s64 + -20856;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20856(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20856);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20856(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20856, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDB870"))) PPC_WEAK_FUNC(sub_83BDB870);
PPC_FUNC_IMPL(__imp__sub_83BDB870) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-26848
	ctx.r6.s64 = ctx.r7.s64 + -26848;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26920(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26920);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20856(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20856);
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
	// std r9,-26848(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26848, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDB8B8"))) PPC_WEAK_FUNC(sub_83BDB8B8);
PPC_FUNC_IMPL(__imp__sub_83BDB8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27304
	ctx.r3.s64 = ctx.r11.s64 + 27304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB8C4"))) PPC_WEAK_FUNC(sub_83BDB8C4);
PPC_FUNC_IMPL(__imp__sub_83BDB8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB8C8"))) PPC_WEAK_FUNC(sub_83BDB8C8);
PPC_FUNC_IMPL(__imp__sub_83BDB8C8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-20848
	ctx.r3.s64 = ctx.r11.s64 + -20848;
	// bl 0x8259af80
	ctx.lr = 0x83BDB8E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,27320
	ctx.r3.s64 = ctx.r10.s64 + 27320;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDB8EC;
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

__attribute__((alias("__imp__sub_83BDB8FC"))) PPC_WEAK_FUNC(sub_83BDB8FC);
PPC_FUNC_IMPL(__imp__sub_83BDB8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB900"))) PPC_WEAK_FUNC(sub_83BDB900);
PPC_FUNC_IMPL(__imp__sub_83BDB900) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20868
	ctx.r11.s64 = ctx.r8.s64 + -20868;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-26872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26872);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27312
	ctx.r3.s64 = ctx.r6.s64 + 27312;
	// stw r10,-20868(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20868, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB930"))) PPC_WEAK_FUNC(sub_83BDB930);
PPC_FUNC_IMPL(__imp__sub_83BDB930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27328
	ctx.r3.s64 = ctx.r11.s64 + 27328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB93C"))) PPC_WEAK_FUNC(sub_83BDB93C);
PPC_FUNC_IMPL(__imp__sub_83BDB93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB940"))) PPC_WEAK_FUNC(sub_83BDB940);
PPC_FUNC_IMPL(__imp__sub_83BDB940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27336
	ctx.r3.s64 = ctx.r11.s64 + 27336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB94C"))) PPC_WEAK_FUNC(sub_83BDB94C);
PPC_FUNC_IMPL(__imp__sub_83BDB94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB950"))) PPC_WEAK_FUNC(sub_83BDB950);
PPC_FUNC_IMPL(__imp__sub_83BDB950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27344
	ctx.r3.s64 = ctx.r11.s64 + 27344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB95C"))) PPC_WEAK_FUNC(sub_83BDB95C);
PPC_FUNC_IMPL(__imp__sub_83BDB95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB960"))) PPC_WEAK_FUNC(sub_83BDB960);
PPC_FUNC_IMPL(__imp__sub_83BDB960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27352
	ctx.r3.s64 = ctx.r11.s64 + 27352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB96C"))) PPC_WEAK_FUNC(sub_83BDB96C);
PPC_FUNC_IMPL(__imp__sub_83BDB96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB970"))) PPC_WEAK_FUNC(sub_83BDB970);
PPC_FUNC_IMPL(__imp__sub_83BDB970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27360
	ctx.r3.s64 = ctx.r11.s64 + 27360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB97C"))) PPC_WEAK_FUNC(sub_83BDB97C);
PPC_FUNC_IMPL(__imp__sub_83BDB97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB980"))) PPC_WEAK_FUNC(sub_83BDB980);
PPC_FUNC_IMPL(__imp__sub_83BDB980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27368
	ctx.r3.s64 = ctx.r11.s64 + 27368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB98C"))) PPC_WEAK_FUNC(sub_83BDB98C);
PPC_FUNC_IMPL(__imp__sub_83BDB98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB990"))) PPC_WEAK_FUNC(sub_83BDB990);
PPC_FUNC_IMPL(__imp__sub_83BDB990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27376
	ctx.r3.s64 = ctx.r11.s64 + 27376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB99C"))) PPC_WEAK_FUNC(sub_83BDB99C);
PPC_FUNC_IMPL(__imp__sub_83BDB99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB9A0"))) PPC_WEAK_FUNC(sub_83BDB9A0);
PPC_FUNC_IMPL(__imp__sub_83BDB9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27384
	ctx.r3.s64 = ctx.r11.s64 + 27384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB9AC"))) PPC_WEAK_FUNC(sub_83BDB9AC);
PPC_FUNC_IMPL(__imp__sub_83BDB9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB9B0"))) PPC_WEAK_FUNC(sub_83BDB9B0);
PPC_FUNC_IMPL(__imp__sub_83BDB9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27392
	ctx.r3.s64 = ctx.r11.s64 + 27392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB9BC"))) PPC_WEAK_FUNC(sub_83BDB9BC);
PPC_FUNC_IMPL(__imp__sub_83BDB9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB9C0"))) PPC_WEAK_FUNC(sub_83BDB9C0);
PPC_FUNC_IMPL(__imp__sub_83BDB9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27400
	ctx.r3.s64 = ctx.r11.s64 + 27400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB9CC"))) PPC_WEAK_FUNC(sub_83BDB9CC);
PPC_FUNC_IMPL(__imp__sub_83BDB9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB9D0"))) PPC_WEAK_FUNC(sub_83BDB9D0);
PPC_FUNC_IMPL(__imp__sub_83BDB9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27408
	ctx.r3.s64 = ctx.r11.s64 + 27408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB9DC"))) PPC_WEAK_FUNC(sub_83BDB9DC);
PPC_FUNC_IMPL(__imp__sub_83BDB9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB9E0"))) PPC_WEAK_FUNC(sub_83BDB9E0);
PPC_FUNC_IMPL(__imp__sub_83BDB9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27416
	ctx.r3.s64 = ctx.r11.s64 + 27416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDB9EC"))) PPC_WEAK_FUNC(sub_83BDB9EC);
PPC_FUNC_IMPL(__imp__sub_83BDB9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDB9F0"))) PPC_WEAK_FUNC(sub_83BDB9F0);
PPC_FUNC_IMPL(__imp__sub_83BDB9F0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-20504
	ctx.r3.s64 = ctx.r11.s64 + -20504;
	// bl 0x83523120
	ctx.lr = 0x83BDBA08;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,27424
	ctx.r3.s64 = ctx.r10.s64 + 27424;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDBA14;
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

__attribute__((alias("__imp__sub_83BDBA24"))) PPC_WEAK_FUNC(sub_83BDBA24);
PPC_FUNC_IMPL(__imp__sub_83BDBA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBA28"))) PPC_WEAK_FUNC(sub_83BDBA28);
PPC_FUNC_IMPL(__imp__sub_83BDBA28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20488
	ctx.r7.s64 = ctx.r8.s64 + -20488;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20488(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20488);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20488(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20488, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDBA50"))) PPC_WEAK_FUNC(sub_83BDBA50);
PPC_FUNC_IMPL(__imp__sub_83BDBA50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-26628
	ctx.r6.s64 = ctx.r7.s64 + -26628;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26700(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26700);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20488(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20488);
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
	// std r9,-26628(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26628, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDBA98"))) PPC_WEAK_FUNC(sub_83BDBA98);
PPC_FUNC_IMPL(__imp__sub_83BDBA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27440
	ctx.r3.s64 = ctx.r11.s64 + 27440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBAA4"))) PPC_WEAK_FUNC(sub_83BDBAA4);
PPC_FUNC_IMPL(__imp__sub_83BDBAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBAA8"))) PPC_WEAK_FUNC(sub_83BDBAA8);
PPC_FUNC_IMPL(__imp__sub_83BDBAA8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-20480
	ctx.r3.s64 = ctx.r11.s64 + -20480;
	// bl 0x8259af80
	ctx.lr = 0x83BDBAC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,27456
	ctx.r3.s64 = ctx.r10.s64 + 27456;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDBACC;
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

__attribute__((alias("__imp__sub_83BDBADC"))) PPC_WEAK_FUNC(sub_83BDBADC);
PPC_FUNC_IMPL(__imp__sub_83BDBADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBAE0"))) PPC_WEAK_FUNC(sub_83BDBAE0);
PPC_FUNC_IMPL(__imp__sub_83BDBAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20500
	ctx.r11.s64 = ctx.r8.s64 + -20500;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-26652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26652);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27448
	ctx.r3.s64 = ctx.r6.s64 + 27448;
	// stw r10,-20500(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20500, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBB10"))) PPC_WEAK_FUNC(sub_83BDBB10);
PPC_FUNC_IMPL(__imp__sub_83BDBB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27464
	ctx.r3.s64 = ctx.r11.s64 + 27464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBB1C"))) PPC_WEAK_FUNC(sub_83BDBB1C);
PPC_FUNC_IMPL(__imp__sub_83BDBB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBB20"))) PPC_WEAK_FUNC(sub_83BDBB20);
PPC_FUNC_IMPL(__imp__sub_83BDBB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27472
	ctx.r3.s64 = ctx.r11.s64 + 27472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBB2C"))) PPC_WEAK_FUNC(sub_83BDBB2C);
PPC_FUNC_IMPL(__imp__sub_83BDBB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBB30"))) PPC_WEAK_FUNC(sub_83BDBB30);
PPC_FUNC_IMPL(__imp__sub_83BDBB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27480
	ctx.r3.s64 = ctx.r11.s64 + 27480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBB3C"))) PPC_WEAK_FUNC(sub_83BDBB3C);
PPC_FUNC_IMPL(__imp__sub_83BDBB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBB40"))) PPC_WEAK_FUNC(sub_83BDBB40);
PPC_FUNC_IMPL(__imp__sub_83BDBB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27488
	ctx.r3.s64 = ctx.r11.s64 + 27488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBB4C"))) PPC_WEAK_FUNC(sub_83BDBB4C);
PPC_FUNC_IMPL(__imp__sub_83BDBB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBB50"))) PPC_WEAK_FUNC(sub_83BDBB50);
PPC_FUNC_IMPL(__imp__sub_83BDBB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27496
	ctx.r3.s64 = ctx.r11.s64 + 27496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBB5C"))) PPC_WEAK_FUNC(sub_83BDBB5C);
PPC_FUNC_IMPL(__imp__sub_83BDBB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBB60"))) PPC_WEAK_FUNC(sub_83BDBB60);
PPC_FUNC_IMPL(__imp__sub_83BDBB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27504
	ctx.r3.s64 = ctx.r11.s64 + 27504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBB6C"))) PPC_WEAK_FUNC(sub_83BDBB6C);
PPC_FUNC_IMPL(__imp__sub_83BDBB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBB70"))) PPC_WEAK_FUNC(sub_83BDBB70);
PPC_FUNC_IMPL(__imp__sub_83BDBB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27512
	ctx.r3.s64 = ctx.r11.s64 + 27512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBB7C"))) PPC_WEAK_FUNC(sub_83BDBB7C);
PPC_FUNC_IMPL(__imp__sub_83BDBB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBB80"))) PPC_WEAK_FUNC(sub_83BDBB80);
PPC_FUNC_IMPL(__imp__sub_83BDBB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27520
	ctx.r3.s64 = ctx.r11.s64 + 27520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBB8C"))) PPC_WEAK_FUNC(sub_83BDBB8C);
PPC_FUNC_IMPL(__imp__sub_83BDBB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBB90"))) PPC_WEAK_FUNC(sub_83BDBB90);
PPC_FUNC_IMPL(__imp__sub_83BDBB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27528
	ctx.r3.s64 = ctx.r11.s64 + 27528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBB9C"))) PPC_WEAK_FUNC(sub_83BDBB9C);
PPC_FUNC_IMPL(__imp__sub_83BDBB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBBA0"))) PPC_WEAK_FUNC(sub_83BDBBA0);
PPC_FUNC_IMPL(__imp__sub_83BDBBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27536
	ctx.r3.s64 = ctx.r11.s64 + 27536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBBAC"))) PPC_WEAK_FUNC(sub_83BDBBAC);
PPC_FUNC_IMPL(__imp__sub_83BDBBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBBB0"))) PPC_WEAK_FUNC(sub_83BDBBB0);
PPC_FUNC_IMPL(__imp__sub_83BDBBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27544
	ctx.r3.s64 = ctx.r11.s64 + 27544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBBBC"))) PPC_WEAK_FUNC(sub_83BDBBBC);
PPC_FUNC_IMPL(__imp__sub_83BDBBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBBC0"))) PPC_WEAK_FUNC(sub_83BDBBC0);
PPC_FUNC_IMPL(__imp__sub_83BDBBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27552
	ctx.r3.s64 = ctx.r11.s64 + 27552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBBCC"))) PPC_WEAK_FUNC(sub_83BDBBCC);
PPC_FUNC_IMPL(__imp__sub_83BDBBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBBD0"))) PPC_WEAK_FUNC(sub_83BDBBD0);
PPC_FUNC_IMPL(__imp__sub_83BDBBD0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-20136
	ctx.r3.s64 = ctx.r11.s64 + -20136;
	// bl 0x83523120
	ctx.lr = 0x83BDBBE8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,27560
	ctx.r3.s64 = ctx.r10.s64 + 27560;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDBBF4;
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

__attribute__((alias("__imp__sub_83BDBC04"))) PPC_WEAK_FUNC(sub_83BDBC04);
PPC_FUNC_IMPL(__imp__sub_83BDBC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBC08"))) PPC_WEAK_FUNC(sub_83BDBC08);
PPC_FUNC_IMPL(__imp__sub_83BDBC08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20120
	ctx.r7.s64 = ctx.r8.s64 + -20120;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20120);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20120(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20120, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDBC30"))) PPC_WEAK_FUNC(sub_83BDBC30);
PPC_FUNC_IMPL(__imp__sub_83BDBC30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-26480
	ctx.r6.s64 = ctx.r7.s64 + -26480;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26552(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26552);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20120(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20120);
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
	// std r9,-26480(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26480, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDBC78"))) PPC_WEAK_FUNC(sub_83BDBC78);
PPC_FUNC_IMPL(__imp__sub_83BDBC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27576
	ctx.r3.s64 = ctx.r11.s64 + 27576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBC84"))) PPC_WEAK_FUNC(sub_83BDBC84);
PPC_FUNC_IMPL(__imp__sub_83BDBC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBC88"))) PPC_WEAK_FUNC(sub_83BDBC88);
PPC_FUNC_IMPL(__imp__sub_83BDBC88) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-20112
	ctx.r3.s64 = ctx.r11.s64 + -20112;
	// bl 0x8259af80
	ctx.lr = 0x83BDBCA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,27592
	ctx.r3.s64 = ctx.r10.s64 + 27592;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDBCAC;
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

__attribute__((alias("__imp__sub_83BDBCBC"))) PPC_WEAK_FUNC(sub_83BDBCBC);
PPC_FUNC_IMPL(__imp__sub_83BDBCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBCC0"))) PPC_WEAK_FUNC(sub_83BDBCC0);
PPC_FUNC_IMPL(__imp__sub_83BDBCC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20132
	ctx.r11.s64 = ctx.r8.s64 + -20132;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-26504(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26504);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27584
	ctx.r3.s64 = ctx.r6.s64 + 27584;
	// stw r10,-20132(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20132, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBCF0"))) PPC_WEAK_FUNC(sub_83BDBCF0);
PPC_FUNC_IMPL(__imp__sub_83BDBCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27600
	ctx.r3.s64 = ctx.r11.s64 + 27600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBCFC"))) PPC_WEAK_FUNC(sub_83BDBCFC);
PPC_FUNC_IMPL(__imp__sub_83BDBCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBD00"))) PPC_WEAK_FUNC(sub_83BDBD00);
PPC_FUNC_IMPL(__imp__sub_83BDBD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27608
	ctx.r3.s64 = ctx.r11.s64 + 27608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBD0C"))) PPC_WEAK_FUNC(sub_83BDBD0C);
PPC_FUNC_IMPL(__imp__sub_83BDBD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBD10"))) PPC_WEAK_FUNC(sub_83BDBD10);
PPC_FUNC_IMPL(__imp__sub_83BDBD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27616
	ctx.r3.s64 = ctx.r11.s64 + 27616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBD1C"))) PPC_WEAK_FUNC(sub_83BDBD1C);
PPC_FUNC_IMPL(__imp__sub_83BDBD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBD20"))) PPC_WEAK_FUNC(sub_83BDBD20);
PPC_FUNC_IMPL(__imp__sub_83BDBD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27624
	ctx.r3.s64 = ctx.r11.s64 + 27624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBD2C"))) PPC_WEAK_FUNC(sub_83BDBD2C);
PPC_FUNC_IMPL(__imp__sub_83BDBD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBD30"))) PPC_WEAK_FUNC(sub_83BDBD30);
PPC_FUNC_IMPL(__imp__sub_83BDBD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27632
	ctx.r3.s64 = ctx.r11.s64 + 27632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBD3C"))) PPC_WEAK_FUNC(sub_83BDBD3C);
PPC_FUNC_IMPL(__imp__sub_83BDBD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBD40"))) PPC_WEAK_FUNC(sub_83BDBD40);
PPC_FUNC_IMPL(__imp__sub_83BDBD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27640
	ctx.r3.s64 = ctx.r11.s64 + 27640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBD4C"))) PPC_WEAK_FUNC(sub_83BDBD4C);
PPC_FUNC_IMPL(__imp__sub_83BDBD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBD50"))) PPC_WEAK_FUNC(sub_83BDBD50);
PPC_FUNC_IMPL(__imp__sub_83BDBD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27648
	ctx.r3.s64 = ctx.r11.s64 + 27648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBD5C"))) PPC_WEAK_FUNC(sub_83BDBD5C);
PPC_FUNC_IMPL(__imp__sub_83BDBD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBD60"))) PPC_WEAK_FUNC(sub_83BDBD60);
PPC_FUNC_IMPL(__imp__sub_83BDBD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27656
	ctx.r3.s64 = ctx.r11.s64 + 27656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBD6C"))) PPC_WEAK_FUNC(sub_83BDBD6C);
PPC_FUNC_IMPL(__imp__sub_83BDBD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBD70"))) PPC_WEAK_FUNC(sub_83BDBD70);
PPC_FUNC_IMPL(__imp__sub_83BDBD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27664
	ctx.r3.s64 = ctx.r11.s64 + 27664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBD7C"))) PPC_WEAK_FUNC(sub_83BDBD7C);
PPC_FUNC_IMPL(__imp__sub_83BDBD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBD80"))) PPC_WEAK_FUNC(sub_83BDBD80);
PPC_FUNC_IMPL(__imp__sub_83BDBD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27672
	ctx.r3.s64 = ctx.r11.s64 + 27672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBD8C"))) PPC_WEAK_FUNC(sub_83BDBD8C);
PPC_FUNC_IMPL(__imp__sub_83BDBD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBD90"))) PPC_WEAK_FUNC(sub_83BDBD90);
PPC_FUNC_IMPL(__imp__sub_83BDBD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27680
	ctx.r3.s64 = ctx.r11.s64 + 27680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBD9C"))) PPC_WEAK_FUNC(sub_83BDBD9C);
PPC_FUNC_IMPL(__imp__sub_83BDBD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBDA0"))) PPC_WEAK_FUNC(sub_83BDBDA0);
PPC_FUNC_IMPL(__imp__sub_83BDBDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27688
	ctx.r3.s64 = ctx.r11.s64 + 27688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBDAC"))) PPC_WEAK_FUNC(sub_83BDBDAC);
PPC_FUNC_IMPL(__imp__sub_83BDBDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBDB0"))) PPC_WEAK_FUNC(sub_83BDBDB0);
PPC_FUNC_IMPL(__imp__sub_83BDBDB0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-19768
	ctx.r3.s64 = ctx.r11.s64 + -19768;
	// bl 0x83523120
	ctx.lr = 0x83BDBDC8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,27696
	ctx.r3.s64 = ctx.r10.s64 + 27696;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDBDD4;
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

__attribute__((alias("__imp__sub_83BDBDE4"))) PPC_WEAK_FUNC(sub_83BDBDE4);
PPC_FUNC_IMPL(__imp__sub_83BDBDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBDE8"))) PPC_WEAK_FUNC(sub_83BDBDE8);
PPC_FUNC_IMPL(__imp__sub_83BDBDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19752
	ctx.r7.s64 = ctx.r8.s64 + -19752;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19752(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19752);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19752(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19752, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDBE10"))) PPC_WEAK_FUNC(sub_83BDBE10);
PPC_FUNC_IMPL(__imp__sub_83BDBE10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-26240
	ctx.r6.s64 = ctx.r7.s64 + -26240;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26312(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26312);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19752(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19752);
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
	// std r9,-26240(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26240, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDBE58"))) PPC_WEAK_FUNC(sub_83BDBE58);
PPC_FUNC_IMPL(__imp__sub_83BDBE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27712
	ctx.r3.s64 = ctx.r11.s64 + 27712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBE64"))) PPC_WEAK_FUNC(sub_83BDBE64);
PPC_FUNC_IMPL(__imp__sub_83BDBE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBE68"))) PPC_WEAK_FUNC(sub_83BDBE68);
PPC_FUNC_IMPL(__imp__sub_83BDBE68) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-19744
	ctx.r3.s64 = ctx.r11.s64 + -19744;
	// bl 0x8259af80
	ctx.lr = 0x83BDBE80;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,27728
	ctx.r3.s64 = ctx.r10.s64 + 27728;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDBE8C;
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

__attribute__((alias("__imp__sub_83BDBE9C"))) PPC_WEAK_FUNC(sub_83BDBE9C);
PPC_FUNC_IMPL(__imp__sub_83BDBE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBEA0"))) PPC_WEAK_FUNC(sub_83BDBEA0);
PPC_FUNC_IMPL(__imp__sub_83BDBEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19764
	ctx.r11.s64 = ctx.r8.s64 + -19764;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-26264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26264);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27720
	ctx.r3.s64 = ctx.r6.s64 + 27720;
	// stw r10,-19764(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19764, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBED0"))) PPC_WEAK_FUNC(sub_83BDBED0);
PPC_FUNC_IMPL(__imp__sub_83BDBED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27736
	ctx.r3.s64 = ctx.r11.s64 + 27736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBEDC"))) PPC_WEAK_FUNC(sub_83BDBEDC);
PPC_FUNC_IMPL(__imp__sub_83BDBEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBEE0"))) PPC_WEAK_FUNC(sub_83BDBEE0);
PPC_FUNC_IMPL(__imp__sub_83BDBEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27744
	ctx.r3.s64 = ctx.r11.s64 + 27744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBEEC"))) PPC_WEAK_FUNC(sub_83BDBEEC);
PPC_FUNC_IMPL(__imp__sub_83BDBEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBEF0"))) PPC_WEAK_FUNC(sub_83BDBEF0);
PPC_FUNC_IMPL(__imp__sub_83BDBEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27752
	ctx.r3.s64 = ctx.r11.s64 + 27752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBEFC"))) PPC_WEAK_FUNC(sub_83BDBEFC);
PPC_FUNC_IMPL(__imp__sub_83BDBEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBF00"))) PPC_WEAK_FUNC(sub_83BDBF00);
PPC_FUNC_IMPL(__imp__sub_83BDBF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27760
	ctx.r3.s64 = ctx.r11.s64 + 27760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBF0C"))) PPC_WEAK_FUNC(sub_83BDBF0C);
PPC_FUNC_IMPL(__imp__sub_83BDBF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBF10"))) PPC_WEAK_FUNC(sub_83BDBF10);
PPC_FUNC_IMPL(__imp__sub_83BDBF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27768
	ctx.r3.s64 = ctx.r11.s64 + 27768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBF1C"))) PPC_WEAK_FUNC(sub_83BDBF1C);
PPC_FUNC_IMPL(__imp__sub_83BDBF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBF20"))) PPC_WEAK_FUNC(sub_83BDBF20);
PPC_FUNC_IMPL(__imp__sub_83BDBF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27776
	ctx.r3.s64 = ctx.r11.s64 + 27776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBF2C"))) PPC_WEAK_FUNC(sub_83BDBF2C);
PPC_FUNC_IMPL(__imp__sub_83BDBF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBF30"))) PPC_WEAK_FUNC(sub_83BDBF30);
PPC_FUNC_IMPL(__imp__sub_83BDBF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27784
	ctx.r3.s64 = ctx.r11.s64 + 27784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBF3C"))) PPC_WEAK_FUNC(sub_83BDBF3C);
PPC_FUNC_IMPL(__imp__sub_83BDBF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBF40"))) PPC_WEAK_FUNC(sub_83BDBF40);
PPC_FUNC_IMPL(__imp__sub_83BDBF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBF4C"))) PPC_WEAK_FUNC(sub_83BDBF4C);
PPC_FUNC_IMPL(__imp__sub_83BDBF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBF50"))) PPC_WEAK_FUNC(sub_83BDBF50);
PPC_FUNC_IMPL(__imp__sub_83BDBF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27800
	ctx.r3.s64 = ctx.r11.s64 + 27800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBF5C"))) PPC_WEAK_FUNC(sub_83BDBF5C);
PPC_FUNC_IMPL(__imp__sub_83BDBF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBF60"))) PPC_WEAK_FUNC(sub_83BDBF60);
PPC_FUNC_IMPL(__imp__sub_83BDBF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27808
	ctx.r3.s64 = ctx.r11.s64 + 27808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBF6C"))) PPC_WEAK_FUNC(sub_83BDBF6C);
PPC_FUNC_IMPL(__imp__sub_83BDBF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBF70"))) PPC_WEAK_FUNC(sub_83BDBF70);
PPC_FUNC_IMPL(__imp__sub_83BDBF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27816
	ctx.r3.s64 = ctx.r11.s64 + 27816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBF7C"))) PPC_WEAK_FUNC(sub_83BDBF7C);
PPC_FUNC_IMPL(__imp__sub_83BDBF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBF80"))) PPC_WEAK_FUNC(sub_83BDBF80);
PPC_FUNC_IMPL(__imp__sub_83BDBF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27824
	ctx.r3.s64 = ctx.r11.s64 + 27824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDBF8C"))) PPC_WEAK_FUNC(sub_83BDBF8C);
PPC_FUNC_IMPL(__imp__sub_83BDBF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBF90"))) PPC_WEAK_FUNC(sub_83BDBF90);
PPC_FUNC_IMPL(__imp__sub_83BDBF90) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-19400
	ctx.r3.s64 = ctx.r11.s64 + -19400;
	// bl 0x83523120
	ctx.lr = 0x83BDBFA8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,27832
	ctx.r3.s64 = ctx.r10.s64 + 27832;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDBFB4;
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

__attribute__((alias("__imp__sub_83BDBFC4"))) PPC_WEAK_FUNC(sub_83BDBFC4);
PPC_FUNC_IMPL(__imp__sub_83BDBFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDBFC8"))) PPC_WEAK_FUNC(sub_83BDBFC8);
PPC_FUNC_IMPL(__imp__sub_83BDBFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19384
	ctx.r7.s64 = ctx.r8.s64 + -19384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19384);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19384(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19384, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDBFF0"))) PPC_WEAK_FUNC(sub_83BDBFF0);
PPC_FUNC_IMPL(__imp__sub_83BDBFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-26104
	ctx.r6.s64 = ctx.r7.s64 + -26104;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26176(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26176);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19384);
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
	// std r9,-26104(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26104, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDC038"))) PPC_WEAK_FUNC(sub_83BDC038);
PPC_FUNC_IMPL(__imp__sub_83BDC038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27848
	ctx.r3.s64 = ctx.r11.s64 + 27848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDC044"))) PPC_WEAK_FUNC(sub_83BDC044);
PPC_FUNC_IMPL(__imp__sub_83BDC044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDC048"))) PPC_WEAK_FUNC(sub_83BDC048);
PPC_FUNC_IMPL(__imp__sub_83BDC048) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x8259af80
	ctx.lr = 0x83BDC060;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,27864
	ctx.r3.s64 = ctx.r10.s64 + 27864;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDC06C;
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

__attribute__((alias("__imp__sub_83BDC07C"))) PPC_WEAK_FUNC(sub_83BDC07C);
PPC_FUNC_IMPL(__imp__sub_83BDC07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDC080"))) PPC_WEAK_FUNC(sub_83BDC080);
PPC_FUNC_IMPL(__imp__sub_83BDC080) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19396
	ctx.r11.s64 = ctx.r8.s64 + -19396;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-26128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26128);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27856
	ctx.r3.s64 = ctx.r6.s64 + 27856;
	// stw r10,-19396(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19396, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDC0B0"))) PPC_WEAK_FUNC(sub_83BDC0B0);
PPC_FUNC_IMPL(__imp__sub_83BDC0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27872
	ctx.r3.s64 = ctx.r11.s64 + 27872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDC0BC"))) PPC_WEAK_FUNC(sub_83BDC0BC);
PPC_FUNC_IMPL(__imp__sub_83BDC0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDC0C0"))) PPC_WEAK_FUNC(sub_83BDC0C0);
PPC_FUNC_IMPL(__imp__sub_83BDC0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27880
	ctx.r3.s64 = ctx.r11.s64 + 27880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDC0CC"))) PPC_WEAK_FUNC(sub_83BDC0CC);
PPC_FUNC_IMPL(__imp__sub_83BDC0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDC0D0"))) PPC_WEAK_FUNC(sub_83BDC0D0);
PPC_FUNC_IMPL(__imp__sub_83BDC0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,27888
	ctx.r3.s64 = ctx.r11.s64 + 27888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

