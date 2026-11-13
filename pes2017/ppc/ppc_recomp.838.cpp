#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C78F18"))) PPC_WEAK_FUNC(sub_83C78F18);
PPC_FUNC_IMPL(__imp__sub_83C78F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20600
	ctx.r3.s64 = ctx.r11.s64 + -20600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78F24"))) PPC_WEAK_FUNC(sub_83C78F24);
PPC_FUNC_IMPL(__imp__sub_83C78F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78F28"))) PPC_WEAK_FUNC(sub_83C78F28);
PPC_FUNC_IMPL(__imp__sub_83C78F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20592
	ctx.r3.s64 = ctx.r11.s64 + -20592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78F34"))) PPC_WEAK_FUNC(sub_83C78F34);
PPC_FUNC_IMPL(__imp__sub_83C78F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78F38"))) PPC_WEAK_FUNC(sub_83C78F38);
PPC_FUNC_IMPL(__imp__sub_83C78F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20584
	ctx.r3.s64 = ctx.r11.s64 + -20584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78F44"))) PPC_WEAK_FUNC(sub_83C78F44);
PPC_FUNC_IMPL(__imp__sub_83C78F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78F48"))) PPC_WEAK_FUNC(sub_83C78F48);
PPC_FUNC_IMPL(__imp__sub_83C78F48) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,4004
	ctx.r3.s64 = ctx.r11.s64 + 4004;
	// bl 0x83523120
	ctx.lr = 0x83C78F60;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-20576
	ctx.r3.s64 = ctx.r10.s64 + -20576;
	// bl 0x831cdcc8
	ctx.lr = 0x83C78F6C;
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

__attribute__((alias("__imp__sub_83C78F7C"))) PPC_WEAK_FUNC(sub_83C78F7C);
PPC_FUNC_IMPL(__imp__sub_83C78F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78F80"))) PPC_WEAK_FUNC(sub_83C78F80);
PPC_FUNC_IMPL(__imp__sub_83C78F80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4008
	ctx.r7.s64 = ctx.r8.s64 + 4008;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4008(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4008);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4008(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4008, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C78FA8"))) PPC_WEAK_FUNC(sub_83C78FA8);
PPC_FUNC_IMPL(__imp__sub_83C78FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-7856
	ctx.r6.s64 = ctx.r7.s64 + -7856;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7928(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7928);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4008(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4008);
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
	// std r9,-7856(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7856, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C78FF0"))) PPC_WEAK_FUNC(sub_83C78FF0);
PPC_FUNC_IMPL(__imp__sub_83C78FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20560
	ctx.r3.s64 = ctx.r11.s64 + -20560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78FFC"))) PPC_WEAK_FUNC(sub_83C78FFC);
PPC_FUNC_IMPL(__imp__sub_83C78FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79000"))) PPC_WEAK_FUNC(sub_83C79000);
PPC_FUNC_IMPL(__imp__sub_83C79000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20552
	ctx.r3.s64 = ctx.r11.s64 + -20552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7900C"))) PPC_WEAK_FUNC(sub_83C7900C);
PPC_FUNC_IMPL(__imp__sub_83C7900C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79010"))) PPC_WEAK_FUNC(sub_83C79010);
PPC_FUNC_IMPL(__imp__sub_83C79010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20544
	ctx.r3.s64 = ctx.r11.s64 + -20544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7901C"))) PPC_WEAK_FUNC(sub_83C7901C);
PPC_FUNC_IMPL(__imp__sub_83C7901C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79020"))) PPC_WEAK_FUNC(sub_83C79020);
PPC_FUNC_IMPL(__imp__sub_83C79020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20536
	ctx.r3.s64 = ctx.r11.s64 + -20536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7902C"))) PPC_WEAK_FUNC(sub_83C7902C);
PPC_FUNC_IMPL(__imp__sub_83C7902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79030"))) PPC_WEAK_FUNC(sub_83C79030);
PPC_FUNC_IMPL(__imp__sub_83C79030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20528
	ctx.r3.s64 = ctx.r11.s64 + -20528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7903C"))) PPC_WEAK_FUNC(sub_83C7903C);
PPC_FUNC_IMPL(__imp__sub_83C7903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79040"))) PPC_WEAK_FUNC(sub_83C79040);
PPC_FUNC_IMPL(__imp__sub_83C79040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20520
	ctx.r3.s64 = ctx.r11.s64 + -20520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7904C"))) PPC_WEAK_FUNC(sub_83C7904C);
PPC_FUNC_IMPL(__imp__sub_83C7904C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79050"))) PPC_WEAK_FUNC(sub_83C79050);
PPC_FUNC_IMPL(__imp__sub_83C79050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20512
	ctx.r3.s64 = ctx.r11.s64 + -20512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7905C"))) PPC_WEAK_FUNC(sub_83C7905C);
PPC_FUNC_IMPL(__imp__sub_83C7905C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79060"))) PPC_WEAK_FUNC(sub_83C79060);
PPC_FUNC_IMPL(__imp__sub_83C79060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20504
	ctx.r3.s64 = ctx.r11.s64 + -20504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7906C"))) PPC_WEAK_FUNC(sub_83C7906C);
PPC_FUNC_IMPL(__imp__sub_83C7906C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79070"))) PPC_WEAK_FUNC(sub_83C79070);
PPC_FUNC_IMPL(__imp__sub_83C79070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20496
	ctx.r3.s64 = ctx.r11.s64 + -20496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7907C"))) PPC_WEAK_FUNC(sub_83C7907C);
PPC_FUNC_IMPL(__imp__sub_83C7907C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79080"))) PPC_WEAK_FUNC(sub_83C79080);
PPC_FUNC_IMPL(__imp__sub_83C79080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20488
	ctx.r3.s64 = ctx.r11.s64 + -20488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7908C"))) PPC_WEAK_FUNC(sub_83C7908C);
PPC_FUNC_IMPL(__imp__sub_83C7908C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79090"))) PPC_WEAK_FUNC(sub_83C79090);
PPC_FUNC_IMPL(__imp__sub_83C79090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20480
	ctx.r3.s64 = ctx.r11.s64 + -20480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7909C"))) PPC_WEAK_FUNC(sub_83C7909C);
PPC_FUNC_IMPL(__imp__sub_83C7909C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C790A0"))) PPC_WEAK_FUNC(sub_83C790A0);
PPC_FUNC_IMPL(__imp__sub_83C790A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20472
	ctx.r3.s64 = ctx.r11.s64 + -20472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C790AC"))) PPC_WEAK_FUNC(sub_83C790AC);
PPC_FUNC_IMPL(__imp__sub_83C790AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C790B0"))) PPC_WEAK_FUNC(sub_83C790B0);
PPC_FUNC_IMPL(__imp__sub_83C790B0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,4016
	ctx.r3.s64 = ctx.r11.s64 + 4016;
	// bl 0x83523120
	ctx.lr = 0x83C790C8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-20464
	ctx.r3.s64 = ctx.r10.s64 + -20464;
	// bl 0x831cdcc8
	ctx.lr = 0x83C790D4;
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

__attribute__((alias("__imp__sub_83C790E4"))) PPC_WEAK_FUNC(sub_83C790E4);
PPC_FUNC_IMPL(__imp__sub_83C790E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C790E8"))) PPC_WEAK_FUNC(sub_83C790E8);
PPC_FUNC_IMPL(__imp__sub_83C790E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4032
	ctx.r7.s64 = ctx.r8.s64 + 4032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4032);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4032(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4032, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C79110"))) PPC_WEAK_FUNC(sub_83C79110);
PPC_FUNC_IMPL(__imp__sub_83C79110) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-7732
	ctx.r6.s64 = ctx.r7.s64 + -7732;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7804(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7804);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4032(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4032);
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
	// std r9,-7732(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7732, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C79158"))) PPC_WEAK_FUNC(sub_83C79158);
PPC_FUNC_IMPL(__imp__sub_83C79158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20448
	ctx.r3.s64 = ctx.r11.s64 + -20448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79164"))) PPC_WEAK_FUNC(sub_83C79164);
PPC_FUNC_IMPL(__imp__sub_83C79164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79168"))) PPC_WEAK_FUNC(sub_83C79168);
PPC_FUNC_IMPL(__imp__sub_83C79168) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,4040
	ctx.r3.s64 = ctx.r11.s64 + 4040;
	// bl 0x8259af80
	ctx.lr = 0x83C79180;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-20432
	ctx.r3.s64 = ctx.r10.s64 + -20432;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7918C;
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

__attribute__((alias("__imp__sub_83C7919C"))) PPC_WEAK_FUNC(sub_83C7919C);
PPC_FUNC_IMPL(__imp__sub_83C7919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C791A0"))) PPC_WEAK_FUNC(sub_83C791A0);
PPC_FUNC_IMPL(__imp__sub_83C791A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4020
	ctx.r11.s64 = ctx.r8.s64 + 4020;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-7756(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7756);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-20440
	ctx.r3.s64 = ctx.r6.s64 + -20440;
	// stw r10,4020(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4020, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C791D0"))) PPC_WEAK_FUNC(sub_83C791D0);
PPC_FUNC_IMPL(__imp__sub_83C791D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20424
	ctx.r3.s64 = ctx.r11.s64 + -20424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C791DC"))) PPC_WEAK_FUNC(sub_83C791DC);
PPC_FUNC_IMPL(__imp__sub_83C791DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C791E0"))) PPC_WEAK_FUNC(sub_83C791E0);
PPC_FUNC_IMPL(__imp__sub_83C791E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20416
	ctx.r3.s64 = ctx.r11.s64 + -20416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C791EC"))) PPC_WEAK_FUNC(sub_83C791EC);
PPC_FUNC_IMPL(__imp__sub_83C791EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C791F0"))) PPC_WEAK_FUNC(sub_83C791F0);
PPC_FUNC_IMPL(__imp__sub_83C791F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20408
	ctx.r3.s64 = ctx.r11.s64 + -20408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C791FC"))) PPC_WEAK_FUNC(sub_83C791FC);
PPC_FUNC_IMPL(__imp__sub_83C791FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79200"))) PPC_WEAK_FUNC(sub_83C79200);
PPC_FUNC_IMPL(__imp__sub_83C79200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20400
	ctx.r3.s64 = ctx.r11.s64 + -20400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7920C"))) PPC_WEAK_FUNC(sub_83C7920C);
PPC_FUNC_IMPL(__imp__sub_83C7920C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79210"))) PPC_WEAK_FUNC(sub_83C79210);
PPC_FUNC_IMPL(__imp__sub_83C79210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20392
	ctx.r3.s64 = ctx.r11.s64 + -20392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7921C"))) PPC_WEAK_FUNC(sub_83C7921C);
PPC_FUNC_IMPL(__imp__sub_83C7921C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79220"))) PPC_WEAK_FUNC(sub_83C79220);
PPC_FUNC_IMPL(__imp__sub_83C79220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20384
	ctx.r3.s64 = ctx.r11.s64 + -20384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7922C"))) PPC_WEAK_FUNC(sub_83C7922C);
PPC_FUNC_IMPL(__imp__sub_83C7922C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79230"))) PPC_WEAK_FUNC(sub_83C79230);
PPC_FUNC_IMPL(__imp__sub_83C79230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20376
	ctx.r3.s64 = ctx.r11.s64 + -20376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7923C"))) PPC_WEAK_FUNC(sub_83C7923C);
PPC_FUNC_IMPL(__imp__sub_83C7923C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79240"))) PPC_WEAK_FUNC(sub_83C79240);
PPC_FUNC_IMPL(__imp__sub_83C79240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20368
	ctx.r3.s64 = ctx.r11.s64 + -20368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7924C"))) PPC_WEAK_FUNC(sub_83C7924C);
PPC_FUNC_IMPL(__imp__sub_83C7924C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79250"))) PPC_WEAK_FUNC(sub_83C79250);
PPC_FUNC_IMPL(__imp__sub_83C79250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20360
	ctx.r3.s64 = ctx.r11.s64 + -20360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7925C"))) PPC_WEAK_FUNC(sub_83C7925C);
PPC_FUNC_IMPL(__imp__sub_83C7925C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79260"))) PPC_WEAK_FUNC(sub_83C79260);
PPC_FUNC_IMPL(__imp__sub_83C79260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20352
	ctx.r3.s64 = ctx.r11.s64 + -20352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7926C"))) PPC_WEAK_FUNC(sub_83C7926C);
PPC_FUNC_IMPL(__imp__sub_83C7926C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79270"))) PPC_WEAK_FUNC(sub_83C79270);
PPC_FUNC_IMPL(__imp__sub_83C79270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20344
	ctx.r3.s64 = ctx.r11.s64 + -20344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7927C"))) PPC_WEAK_FUNC(sub_83C7927C);
PPC_FUNC_IMPL(__imp__sub_83C7927C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79280"))) PPC_WEAK_FUNC(sub_83C79280);
PPC_FUNC_IMPL(__imp__sub_83C79280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20336
	ctx.r3.s64 = ctx.r11.s64 + -20336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7928C"))) PPC_WEAK_FUNC(sub_83C7928C);
PPC_FUNC_IMPL(__imp__sub_83C7928C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79290"))) PPC_WEAK_FUNC(sub_83C79290);
PPC_FUNC_IMPL(__imp__sub_83C79290) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// bl 0x83523120
	ctx.lr = 0x83C792A8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-20328
	ctx.r3.s64 = ctx.r10.s64 + -20328;
	// bl 0x831cdcc8
	ctx.lr = 0x83C792B4;
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

__attribute__((alias("__imp__sub_83C792C4"))) PPC_WEAK_FUNC(sub_83C792C4);
PPC_FUNC_IMPL(__imp__sub_83C792C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C792C8"))) PPC_WEAK_FUNC(sub_83C792C8);
PPC_FUNC_IMPL(__imp__sub_83C792C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4388
	ctx.r7.s64 = ctx.r8.s64 + 4388;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4388(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4388);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4388, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C792F0"))) PPC_WEAK_FUNC(sub_83C792F0);
PPC_FUNC_IMPL(__imp__sub_83C792F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-7604
	ctx.r6.s64 = ctx.r7.s64 + -7604;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7676(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7676);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4388(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4388);
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
	// std r9,-7604(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7604, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C79338"))) PPC_WEAK_FUNC(sub_83C79338);
PPC_FUNC_IMPL(__imp__sub_83C79338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20312
	ctx.r3.s64 = ctx.r11.s64 + -20312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79344"))) PPC_WEAK_FUNC(sub_83C79344);
PPC_FUNC_IMPL(__imp__sub_83C79344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79348"))) PPC_WEAK_FUNC(sub_83C79348);
PPC_FUNC_IMPL(__imp__sub_83C79348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20304
	ctx.r3.s64 = ctx.r11.s64 + -20304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79354"))) PPC_WEAK_FUNC(sub_83C79354);
PPC_FUNC_IMPL(__imp__sub_83C79354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79358"))) PPC_WEAK_FUNC(sub_83C79358);
PPC_FUNC_IMPL(__imp__sub_83C79358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20296
	ctx.r3.s64 = ctx.r11.s64 + -20296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79364"))) PPC_WEAK_FUNC(sub_83C79364);
PPC_FUNC_IMPL(__imp__sub_83C79364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79368"))) PPC_WEAK_FUNC(sub_83C79368);
PPC_FUNC_IMPL(__imp__sub_83C79368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20288
	ctx.r3.s64 = ctx.r11.s64 + -20288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79374"))) PPC_WEAK_FUNC(sub_83C79374);
PPC_FUNC_IMPL(__imp__sub_83C79374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79378"))) PPC_WEAK_FUNC(sub_83C79378);
PPC_FUNC_IMPL(__imp__sub_83C79378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20280
	ctx.r3.s64 = ctx.r11.s64 + -20280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79384"))) PPC_WEAK_FUNC(sub_83C79384);
PPC_FUNC_IMPL(__imp__sub_83C79384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79388"))) PPC_WEAK_FUNC(sub_83C79388);
PPC_FUNC_IMPL(__imp__sub_83C79388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20272
	ctx.r3.s64 = ctx.r11.s64 + -20272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79394"))) PPC_WEAK_FUNC(sub_83C79394);
PPC_FUNC_IMPL(__imp__sub_83C79394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79398"))) PPC_WEAK_FUNC(sub_83C79398);
PPC_FUNC_IMPL(__imp__sub_83C79398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20264
	ctx.r3.s64 = ctx.r11.s64 + -20264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C793A4"))) PPC_WEAK_FUNC(sub_83C793A4);
PPC_FUNC_IMPL(__imp__sub_83C793A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C793A8"))) PPC_WEAK_FUNC(sub_83C793A8);
PPC_FUNC_IMPL(__imp__sub_83C793A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20256
	ctx.r3.s64 = ctx.r11.s64 + -20256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C793B4"))) PPC_WEAK_FUNC(sub_83C793B4);
PPC_FUNC_IMPL(__imp__sub_83C793B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C793B8"))) PPC_WEAK_FUNC(sub_83C793B8);
PPC_FUNC_IMPL(__imp__sub_83C793B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20248
	ctx.r3.s64 = ctx.r11.s64 + -20248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C793C4"))) PPC_WEAK_FUNC(sub_83C793C4);
PPC_FUNC_IMPL(__imp__sub_83C793C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C793C8"))) PPC_WEAK_FUNC(sub_83C793C8);
PPC_FUNC_IMPL(__imp__sub_83C793C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20240
	ctx.r3.s64 = ctx.r11.s64 + -20240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C793D4"))) PPC_WEAK_FUNC(sub_83C793D4);
PPC_FUNC_IMPL(__imp__sub_83C793D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C793D8"))) PPC_WEAK_FUNC(sub_83C793D8);
PPC_FUNC_IMPL(__imp__sub_83C793D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20232
	ctx.r3.s64 = ctx.r11.s64 + -20232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C793E4"))) PPC_WEAK_FUNC(sub_83C793E4);
PPC_FUNC_IMPL(__imp__sub_83C793E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C793E8"))) PPC_WEAK_FUNC(sub_83C793E8);
PPC_FUNC_IMPL(__imp__sub_83C793E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20224
	ctx.r3.s64 = ctx.r11.s64 + -20224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C793F4"))) PPC_WEAK_FUNC(sub_83C793F4);
PPC_FUNC_IMPL(__imp__sub_83C793F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C793F8"))) PPC_WEAK_FUNC(sub_83C793F8);
PPC_FUNC_IMPL(__imp__sub_83C793F8) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,4400
	ctx.r3.s64 = ctx.r11.s64 + 4400;
	// bl 0x83523120
	ctx.lr = 0x83C79410;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-20216
	ctx.r3.s64 = ctx.r10.s64 + -20216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7941C;
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

__attribute__((alias("__imp__sub_83C7942C"))) PPC_WEAK_FUNC(sub_83C7942C);
PPC_FUNC_IMPL(__imp__sub_83C7942C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79430"))) PPC_WEAK_FUNC(sub_83C79430);
PPC_FUNC_IMPL(__imp__sub_83C79430) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4416
	ctx.r7.s64 = ctx.r8.s64 + 4416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4416(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4416);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4416, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C79458"))) PPC_WEAK_FUNC(sub_83C79458);
PPC_FUNC_IMPL(__imp__sub_83C79458) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-7480
	ctx.r6.s64 = ctx.r7.s64 + -7480;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7552(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7552);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4416(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4416);
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
	// std r9,-7480(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7480, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C794A0"))) PPC_WEAK_FUNC(sub_83C794A0);
PPC_FUNC_IMPL(__imp__sub_83C794A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20200
	ctx.r3.s64 = ctx.r11.s64 + -20200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C794AC"))) PPC_WEAK_FUNC(sub_83C794AC);
PPC_FUNC_IMPL(__imp__sub_83C794AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C794B0"))) PPC_WEAK_FUNC(sub_83C794B0);
PPC_FUNC_IMPL(__imp__sub_83C794B0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,4424
	ctx.r3.s64 = ctx.r11.s64 + 4424;
	// bl 0x8259af80
	ctx.lr = 0x83C794C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-20184
	ctx.r3.s64 = ctx.r10.s64 + -20184;
	// bl 0x831cdcc8
	ctx.lr = 0x83C794D4;
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

__attribute__((alias("__imp__sub_83C794E4"))) PPC_WEAK_FUNC(sub_83C794E4);
PPC_FUNC_IMPL(__imp__sub_83C794E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C794E8"))) PPC_WEAK_FUNC(sub_83C794E8);
PPC_FUNC_IMPL(__imp__sub_83C794E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4404
	ctx.r11.s64 = ctx.r8.s64 + 4404;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-7504(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7504);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-20192
	ctx.r3.s64 = ctx.r6.s64 + -20192;
	// stw r10,4404(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4404, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79518"))) PPC_WEAK_FUNC(sub_83C79518);
PPC_FUNC_IMPL(__imp__sub_83C79518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20176
	ctx.r3.s64 = ctx.r11.s64 + -20176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79524"))) PPC_WEAK_FUNC(sub_83C79524);
PPC_FUNC_IMPL(__imp__sub_83C79524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79528"))) PPC_WEAK_FUNC(sub_83C79528);
PPC_FUNC_IMPL(__imp__sub_83C79528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20168
	ctx.r3.s64 = ctx.r11.s64 + -20168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79534"))) PPC_WEAK_FUNC(sub_83C79534);
PPC_FUNC_IMPL(__imp__sub_83C79534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79538"))) PPC_WEAK_FUNC(sub_83C79538);
PPC_FUNC_IMPL(__imp__sub_83C79538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20160
	ctx.r3.s64 = ctx.r11.s64 + -20160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79544"))) PPC_WEAK_FUNC(sub_83C79544);
PPC_FUNC_IMPL(__imp__sub_83C79544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79548"))) PPC_WEAK_FUNC(sub_83C79548);
PPC_FUNC_IMPL(__imp__sub_83C79548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20152
	ctx.r3.s64 = ctx.r11.s64 + -20152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79554"))) PPC_WEAK_FUNC(sub_83C79554);
PPC_FUNC_IMPL(__imp__sub_83C79554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79558"))) PPC_WEAK_FUNC(sub_83C79558);
PPC_FUNC_IMPL(__imp__sub_83C79558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20144
	ctx.r3.s64 = ctx.r11.s64 + -20144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79564"))) PPC_WEAK_FUNC(sub_83C79564);
PPC_FUNC_IMPL(__imp__sub_83C79564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79568"))) PPC_WEAK_FUNC(sub_83C79568);
PPC_FUNC_IMPL(__imp__sub_83C79568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20136
	ctx.r3.s64 = ctx.r11.s64 + -20136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79574"))) PPC_WEAK_FUNC(sub_83C79574);
PPC_FUNC_IMPL(__imp__sub_83C79574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79578"))) PPC_WEAK_FUNC(sub_83C79578);
PPC_FUNC_IMPL(__imp__sub_83C79578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20128
	ctx.r3.s64 = ctx.r11.s64 + -20128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79584"))) PPC_WEAK_FUNC(sub_83C79584);
PPC_FUNC_IMPL(__imp__sub_83C79584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79588"))) PPC_WEAK_FUNC(sub_83C79588);
PPC_FUNC_IMPL(__imp__sub_83C79588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20120
	ctx.r3.s64 = ctx.r11.s64 + -20120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79594"))) PPC_WEAK_FUNC(sub_83C79594);
PPC_FUNC_IMPL(__imp__sub_83C79594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79598"))) PPC_WEAK_FUNC(sub_83C79598);
PPC_FUNC_IMPL(__imp__sub_83C79598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20112
	ctx.r3.s64 = ctx.r11.s64 + -20112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C795A4"))) PPC_WEAK_FUNC(sub_83C795A4);
PPC_FUNC_IMPL(__imp__sub_83C795A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C795A8"))) PPC_WEAK_FUNC(sub_83C795A8);
PPC_FUNC_IMPL(__imp__sub_83C795A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20104
	ctx.r3.s64 = ctx.r11.s64 + -20104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C795B4"))) PPC_WEAK_FUNC(sub_83C795B4);
PPC_FUNC_IMPL(__imp__sub_83C795B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C795B8"))) PPC_WEAK_FUNC(sub_83C795B8);
PPC_FUNC_IMPL(__imp__sub_83C795B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20096
	ctx.r3.s64 = ctx.r11.s64 + -20096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C795C4"))) PPC_WEAK_FUNC(sub_83C795C4);
PPC_FUNC_IMPL(__imp__sub_83C795C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C795C8"))) PPC_WEAK_FUNC(sub_83C795C8);
PPC_FUNC_IMPL(__imp__sub_83C795C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20088
	ctx.r3.s64 = ctx.r11.s64 + -20088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C795D4"))) PPC_WEAK_FUNC(sub_83C795D4);
PPC_FUNC_IMPL(__imp__sub_83C795D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C795D8"))) PPC_WEAK_FUNC(sub_83C795D8);
PPC_FUNC_IMPL(__imp__sub_83C795D8) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,4768
	ctx.r3.s64 = ctx.r11.s64 + 4768;
	// bl 0x83523120
	ctx.lr = 0x83C795F0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-20080
	ctx.r3.s64 = ctx.r10.s64 + -20080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C795FC;
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

__attribute__((alias("__imp__sub_83C7960C"))) PPC_WEAK_FUNC(sub_83C7960C);
PPC_FUNC_IMPL(__imp__sub_83C7960C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79610"))) PPC_WEAK_FUNC(sub_83C79610);
PPC_FUNC_IMPL(__imp__sub_83C79610) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4784
	ctx.r7.s64 = ctx.r8.s64 + 4784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4784);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4784(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4784, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C79638"))) PPC_WEAK_FUNC(sub_83C79638);
PPC_FUNC_IMPL(__imp__sub_83C79638) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-7344
	ctx.r6.s64 = ctx.r7.s64 + -7344;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7416(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7416);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4784(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4784);
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
	// std r9,-7344(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7344, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C79680"))) PPC_WEAK_FUNC(sub_83C79680);
PPC_FUNC_IMPL(__imp__sub_83C79680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20064
	ctx.r3.s64 = ctx.r11.s64 + -20064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7968C"))) PPC_WEAK_FUNC(sub_83C7968C);
PPC_FUNC_IMPL(__imp__sub_83C7968C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79690"))) PPC_WEAK_FUNC(sub_83C79690);
PPC_FUNC_IMPL(__imp__sub_83C79690) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,4792
	ctx.r3.s64 = ctx.r11.s64 + 4792;
	// bl 0x8259af80
	ctx.lr = 0x83C796A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-20048
	ctx.r3.s64 = ctx.r10.s64 + -20048;
	// bl 0x831cdcc8
	ctx.lr = 0x83C796B4;
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

__attribute__((alias("__imp__sub_83C796C4"))) PPC_WEAK_FUNC(sub_83C796C4);
PPC_FUNC_IMPL(__imp__sub_83C796C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C796C8"))) PPC_WEAK_FUNC(sub_83C796C8);
PPC_FUNC_IMPL(__imp__sub_83C796C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4772
	ctx.r11.s64 = ctx.r8.s64 + 4772;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-7368(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7368);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-20056
	ctx.r3.s64 = ctx.r6.s64 + -20056;
	// stw r10,4772(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4772, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C796F8"))) PPC_WEAK_FUNC(sub_83C796F8);
PPC_FUNC_IMPL(__imp__sub_83C796F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20040
	ctx.r3.s64 = ctx.r11.s64 + -20040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79704"))) PPC_WEAK_FUNC(sub_83C79704);
PPC_FUNC_IMPL(__imp__sub_83C79704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79708"))) PPC_WEAK_FUNC(sub_83C79708);
PPC_FUNC_IMPL(__imp__sub_83C79708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20032
	ctx.r3.s64 = ctx.r11.s64 + -20032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79714"))) PPC_WEAK_FUNC(sub_83C79714);
PPC_FUNC_IMPL(__imp__sub_83C79714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79718"))) PPC_WEAK_FUNC(sub_83C79718);
PPC_FUNC_IMPL(__imp__sub_83C79718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20024
	ctx.r3.s64 = ctx.r11.s64 + -20024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79724"))) PPC_WEAK_FUNC(sub_83C79724);
PPC_FUNC_IMPL(__imp__sub_83C79724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79728"))) PPC_WEAK_FUNC(sub_83C79728);
PPC_FUNC_IMPL(__imp__sub_83C79728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20016
	ctx.r3.s64 = ctx.r11.s64 + -20016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79734"))) PPC_WEAK_FUNC(sub_83C79734);
PPC_FUNC_IMPL(__imp__sub_83C79734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79738"))) PPC_WEAK_FUNC(sub_83C79738);
PPC_FUNC_IMPL(__imp__sub_83C79738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20008
	ctx.r3.s64 = ctx.r11.s64 + -20008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79744"))) PPC_WEAK_FUNC(sub_83C79744);
PPC_FUNC_IMPL(__imp__sub_83C79744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79748"))) PPC_WEAK_FUNC(sub_83C79748);
PPC_FUNC_IMPL(__imp__sub_83C79748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-20000
	ctx.r3.s64 = ctx.r11.s64 + -20000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79754"))) PPC_WEAK_FUNC(sub_83C79754);
PPC_FUNC_IMPL(__imp__sub_83C79754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79758"))) PPC_WEAK_FUNC(sub_83C79758);
PPC_FUNC_IMPL(__imp__sub_83C79758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19992
	ctx.r3.s64 = ctx.r11.s64 + -19992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79764"))) PPC_WEAK_FUNC(sub_83C79764);
PPC_FUNC_IMPL(__imp__sub_83C79764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79768"))) PPC_WEAK_FUNC(sub_83C79768);
PPC_FUNC_IMPL(__imp__sub_83C79768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19984
	ctx.r3.s64 = ctx.r11.s64 + -19984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79774"))) PPC_WEAK_FUNC(sub_83C79774);
PPC_FUNC_IMPL(__imp__sub_83C79774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79778"))) PPC_WEAK_FUNC(sub_83C79778);
PPC_FUNC_IMPL(__imp__sub_83C79778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19976
	ctx.r3.s64 = ctx.r11.s64 + -19976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79784"))) PPC_WEAK_FUNC(sub_83C79784);
PPC_FUNC_IMPL(__imp__sub_83C79784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79788"))) PPC_WEAK_FUNC(sub_83C79788);
PPC_FUNC_IMPL(__imp__sub_83C79788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19968
	ctx.r3.s64 = ctx.r11.s64 + -19968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79794"))) PPC_WEAK_FUNC(sub_83C79794);
PPC_FUNC_IMPL(__imp__sub_83C79794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79798"))) PPC_WEAK_FUNC(sub_83C79798);
PPC_FUNC_IMPL(__imp__sub_83C79798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19960
	ctx.r3.s64 = ctx.r11.s64 + -19960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C797A4"))) PPC_WEAK_FUNC(sub_83C797A4);
PPC_FUNC_IMPL(__imp__sub_83C797A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C797A8"))) PPC_WEAK_FUNC(sub_83C797A8);
PPC_FUNC_IMPL(__imp__sub_83C797A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19952
	ctx.r3.s64 = ctx.r11.s64 + -19952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C797B4"))) PPC_WEAK_FUNC(sub_83C797B4);
PPC_FUNC_IMPL(__imp__sub_83C797B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C797B8"))) PPC_WEAK_FUNC(sub_83C797B8);
PPC_FUNC_IMPL(__imp__sub_83C797B8) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,5136
	ctx.r3.s64 = ctx.r11.s64 + 5136;
	// bl 0x83523120
	ctx.lr = 0x83C797D0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-19944
	ctx.r3.s64 = ctx.r10.s64 + -19944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C797DC;
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

__attribute__((alias("__imp__sub_83C797EC"))) PPC_WEAK_FUNC(sub_83C797EC);
PPC_FUNC_IMPL(__imp__sub_83C797EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C797F0"))) PPC_WEAK_FUNC(sub_83C797F0);
PPC_FUNC_IMPL(__imp__sub_83C797F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5140
	ctx.r7.s64 = ctx.r8.s64 + 5140;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5140(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5140);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5140, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C79818"))) PPC_WEAK_FUNC(sub_83C79818);
PPC_FUNC_IMPL(__imp__sub_83C79818) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-7216
	ctx.r6.s64 = ctx.r7.s64 + -7216;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7288(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7288);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5140(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5140);
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
	// std r9,-7216(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7216, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C79860"))) PPC_WEAK_FUNC(sub_83C79860);
PPC_FUNC_IMPL(__imp__sub_83C79860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19928
	ctx.r3.s64 = ctx.r11.s64 + -19928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7986C"))) PPC_WEAK_FUNC(sub_83C7986C);
PPC_FUNC_IMPL(__imp__sub_83C7986C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79870"))) PPC_WEAK_FUNC(sub_83C79870);
PPC_FUNC_IMPL(__imp__sub_83C79870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19920
	ctx.r3.s64 = ctx.r11.s64 + -19920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7987C"))) PPC_WEAK_FUNC(sub_83C7987C);
PPC_FUNC_IMPL(__imp__sub_83C7987C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79880"))) PPC_WEAK_FUNC(sub_83C79880);
PPC_FUNC_IMPL(__imp__sub_83C79880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19912
	ctx.r3.s64 = ctx.r11.s64 + -19912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7988C"))) PPC_WEAK_FUNC(sub_83C7988C);
PPC_FUNC_IMPL(__imp__sub_83C7988C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79890"))) PPC_WEAK_FUNC(sub_83C79890);
PPC_FUNC_IMPL(__imp__sub_83C79890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19904
	ctx.r3.s64 = ctx.r11.s64 + -19904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7989C"))) PPC_WEAK_FUNC(sub_83C7989C);
PPC_FUNC_IMPL(__imp__sub_83C7989C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C798A0"))) PPC_WEAK_FUNC(sub_83C798A0);
PPC_FUNC_IMPL(__imp__sub_83C798A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19896
	ctx.r3.s64 = ctx.r11.s64 + -19896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C798AC"))) PPC_WEAK_FUNC(sub_83C798AC);
PPC_FUNC_IMPL(__imp__sub_83C798AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C798B0"))) PPC_WEAK_FUNC(sub_83C798B0);
PPC_FUNC_IMPL(__imp__sub_83C798B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19888
	ctx.r3.s64 = ctx.r11.s64 + -19888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C798BC"))) PPC_WEAK_FUNC(sub_83C798BC);
PPC_FUNC_IMPL(__imp__sub_83C798BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C798C0"))) PPC_WEAK_FUNC(sub_83C798C0);
PPC_FUNC_IMPL(__imp__sub_83C798C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19880
	ctx.r3.s64 = ctx.r11.s64 + -19880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C798CC"))) PPC_WEAK_FUNC(sub_83C798CC);
PPC_FUNC_IMPL(__imp__sub_83C798CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C798D0"))) PPC_WEAK_FUNC(sub_83C798D0);
PPC_FUNC_IMPL(__imp__sub_83C798D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19872
	ctx.r3.s64 = ctx.r11.s64 + -19872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C798DC"))) PPC_WEAK_FUNC(sub_83C798DC);
PPC_FUNC_IMPL(__imp__sub_83C798DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C798E0"))) PPC_WEAK_FUNC(sub_83C798E0);
PPC_FUNC_IMPL(__imp__sub_83C798E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19864
	ctx.r3.s64 = ctx.r11.s64 + -19864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C798EC"))) PPC_WEAK_FUNC(sub_83C798EC);
PPC_FUNC_IMPL(__imp__sub_83C798EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C798F0"))) PPC_WEAK_FUNC(sub_83C798F0);
PPC_FUNC_IMPL(__imp__sub_83C798F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19856
	ctx.r3.s64 = ctx.r11.s64 + -19856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C798FC"))) PPC_WEAK_FUNC(sub_83C798FC);
PPC_FUNC_IMPL(__imp__sub_83C798FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79900"))) PPC_WEAK_FUNC(sub_83C79900);
PPC_FUNC_IMPL(__imp__sub_83C79900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19848
	ctx.r3.s64 = ctx.r11.s64 + -19848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7990C"))) PPC_WEAK_FUNC(sub_83C7990C);
PPC_FUNC_IMPL(__imp__sub_83C7990C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79910"))) PPC_WEAK_FUNC(sub_83C79910);
PPC_FUNC_IMPL(__imp__sub_83C79910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19840
	ctx.r3.s64 = ctx.r11.s64 + -19840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7991C"))) PPC_WEAK_FUNC(sub_83C7991C);
PPC_FUNC_IMPL(__imp__sub_83C7991C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79920"))) PPC_WEAK_FUNC(sub_83C79920);
PPC_FUNC_IMPL(__imp__sub_83C79920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19832
	ctx.r3.s64 = ctx.r11.s64 + -19832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7992C"))) PPC_WEAK_FUNC(sub_83C7992C);
PPC_FUNC_IMPL(__imp__sub_83C7992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79930"))) PPC_WEAK_FUNC(sub_83C79930);
PPC_FUNC_IMPL(__imp__sub_83C79930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19824
	ctx.r3.s64 = ctx.r11.s64 + -19824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7993C"))) PPC_WEAK_FUNC(sub_83C7993C);
PPC_FUNC_IMPL(__imp__sub_83C7993C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79940"))) PPC_WEAK_FUNC(sub_83C79940);
PPC_FUNC_IMPL(__imp__sub_83C79940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19816
	ctx.r3.s64 = ctx.r11.s64 + -19816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7994C"))) PPC_WEAK_FUNC(sub_83C7994C);
PPC_FUNC_IMPL(__imp__sub_83C7994C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79950"))) PPC_WEAK_FUNC(sub_83C79950);
PPC_FUNC_IMPL(__imp__sub_83C79950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19808
	ctx.r3.s64 = ctx.r11.s64 + -19808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7995C"))) PPC_WEAK_FUNC(sub_83C7995C);
PPC_FUNC_IMPL(__imp__sub_83C7995C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79960"))) PPC_WEAK_FUNC(sub_83C79960);
PPC_FUNC_IMPL(__imp__sub_83C79960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19800
	ctx.r3.s64 = ctx.r11.s64 + -19800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7996C"))) PPC_WEAK_FUNC(sub_83C7996C);
PPC_FUNC_IMPL(__imp__sub_83C7996C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79970"))) PPC_WEAK_FUNC(sub_83C79970);
PPC_FUNC_IMPL(__imp__sub_83C79970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19792
	ctx.r3.s64 = ctx.r11.s64 + -19792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7997C"))) PPC_WEAK_FUNC(sub_83C7997C);
PPC_FUNC_IMPL(__imp__sub_83C7997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79980"))) PPC_WEAK_FUNC(sub_83C79980);
PPC_FUNC_IMPL(__imp__sub_83C79980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19784
	ctx.r3.s64 = ctx.r11.s64 + -19784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7998C"))) PPC_WEAK_FUNC(sub_83C7998C);
PPC_FUNC_IMPL(__imp__sub_83C7998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79990"))) PPC_WEAK_FUNC(sub_83C79990);
PPC_FUNC_IMPL(__imp__sub_83C79990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19776
	ctx.r3.s64 = ctx.r11.s64 + -19776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7999C"))) PPC_WEAK_FUNC(sub_83C7999C);
PPC_FUNC_IMPL(__imp__sub_83C7999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C799A0"))) PPC_WEAK_FUNC(sub_83C799A0);
PPC_FUNC_IMPL(__imp__sub_83C799A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19768
	ctx.r3.s64 = ctx.r11.s64 + -19768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C799AC"))) PPC_WEAK_FUNC(sub_83C799AC);
PPC_FUNC_IMPL(__imp__sub_83C799AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C799B0"))) PPC_WEAK_FUNC(sub_83C799B0);
PPC_FUNC_IMPL(__imp__sub_83C799B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19760
	ctx.r3.s64 = ctx.r11.s64 + -19760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C799BC"))) PPC_WEAK_FUNC(sub_83C799BC);
PPC_FUNC_IMPL(__imp__sub_83C799BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C799C0"))) PPC_WEAK_FUNC(sub_83C799C0);
PPC_FUNC_IMPL(__imp__sub_83C799C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19752
	ctx.r3.s64 = ctx.r11.s64 + -19752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C799CC"))) PPC_WEAK_FUNC(sub_83C799CC);
PPC_FUNC_IMPL(__imp__sub_83C799CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C799D0"))) PPC_WEAK_FUNC(sub_83C799D0);
PPC_FUNC_IMPL(__imp__sub_83C799D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19744
	ctx.r3.s64 = ctx.r11.s64 + -19744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C799DC"))) PPC_WEAK_FUNC(sub_83C799DC);
PPC_FUNC_IMPL(__imp__sub_83C799DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C799E0"))) PPC_WEAK_FUNC(sub_83C799E0);
PPC_FUNC_IMPL(__imp__sub_83C799E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19736
	ctx.r3.s64 = ctx.r11.s64 + -19736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C799EC"))) PPC_WEAK_FUNC(sub_83C799EC);
PPC_FUNC_IMPL(__imp__sub_83C799EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C799F0"))) PPC_WEAK_FUNC(sub_83C799F0);
PPC_FUNC_IMPL(__imp__sub_83C799F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19728
	ctx.r3.s64 = ctx.r11.s64 + -19728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C799FC"))) PPC_WEAK_FUNC(sub_83C799FC);
PPC_FUNC_IMPL(__imp__sub_83C799FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79A00"))) PPC_WEAK_FUNC(sub_83C79A00);
PPC_FUNC_IMPL(__imp__sub_83C79A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19720
	ctx.r3.s64 = ctx.r11.s64 + -19720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79A0C"))) PPC_WEAK_FUNC(sub_83C79A0C);
PPC_FUNC_IMPL(__imp__sub_83C79A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79A10"))) PPC_WEAK_FUNC(sub_83C79A10);
PPC_FUNC_IMPL(__imp__sub_83C79A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19712
	ctx.r3.s64 = ctx.r11.s64 + -19712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79A1C"))) PPC_WEAK_FUNC(sub_83C79A1C);
PPC_FUNC_IMPL(__imp__sub_83C79A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79A20"))) PPC_WEAK_FUNC(sub_83C79A20);
PPC_FUNC_IMPL(__imp__sub_83C79A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19704
	ctx.r3.s64 = ctx.r11.s64 + -19704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79A2C"))) PPC_WEAK_FUNC(sub_83C79A2C);
PPC_FUNC_IMPL(__imp__sub_83C79A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79A30"))) PPC_WEAK_FUNC(sub_83C79A30);
PPC_FUNC_IMPL(__imp__sub_83C79A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19696
	ctx.r3.s64 = ctx.r11.s64 + -19696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79A3C"))) PPC_WEAK_FUNC(sub_83C79A3C);
PPC_FUNC_IMPL(__imp__sub_83C79A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79A40"))) PPC_WEAK_FUNC(sub_83C79A40);
PPC_FUNC_IMPL(__imp__sub_83C79A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19688
	ctx.r3.s64 = ctx.r11.s64 + -19688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79A4C"))) PPC_WEAK_FUNC(sub_83C79A4C);
PPC_FUNC_IMPL(__imp__sub_83C79A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79A50"))) PPC_WEAK_FUNC(sub_83C79A50);
PPC_FUNC_IMPL(__imp__sub_83C79A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19680
	ctx.r3.s64 = ctx.r11.s64 + -19680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79A5C"))) PPC_WEAK_FUNC(sub_83C79A5C);
PPC_FUNC_IMPL(__imp__sub_83C79A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79A60"))) PPC_WEAK_FUNC(sub_83C79A60);
PPC_FUNC_IMPL(__imp__sub_83C79A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19672
	ctx.r3.s64 = ctx.r11.s64 + -19672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79A6C"))) PPC_WEAK_FUNC(sub_83C79A6C);
PPC_FUNC_IMPL(__imp__sub_83C79A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79A70"))) PPC_WEAK_FUNC(sub_83C79A70);
PPC_FUNC_IMPL(__imp__sub_83C79A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19664
	ctx.r3.s64 = ctx.r11.s64 + -19664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79A7C"))) PPC_WEAK_FUNC(sub_83C79A7C);
PPC_FUNC_IMPL(__imp__sub_83C79A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79A80"))) PPC_WEAK_FUNC(sub_83C79A80);
PPC_FUNC_IMPL(__imp__sub_83C79A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19656
	ctx.r3.s64 = ctx.r11.s64 + -19656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79A8C"))) PPC_WEAK_FUNC(sub_83C79A8C);
PPC_FUNC_IMPL(__imp__sub_83C79A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79A90"))) PPC_WEAK_FUNC(sub_83C79A90);
PPC_FUNC_IMPL(__imp__sub_83C79A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19648
	ctx.r3.s64 = ctx.r11.s64 + -19648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79A9C"))) PPC_WEAK_FUNC(sub_83C79A9C);
PPC_FUNC_IMPL(__imp__sub_83C79A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79AA0"))) PPC_WEAK_FUNC(sub_83C79AA0);
PPC_FUNC_IMPL(__imp__sub_83C79AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19640
	ctx.r3.s64 = ctx.r11.s64 + -19640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79AAC"))) PPC_WEAK_FUNC(sub_83C79AAC);
PPC_FUNC_IMPL(__imp__sub_83C79AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79AB0"))) PPC_WEAK_FUNC(sub_83C79AB0);
PPC_FUNC_IMPL(__imp__sub_83C79AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19632
	ctx.r3.s64 = ctx.r11.s64 + -19632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79ABC"))) PPC_WEAK_FUNC(sub_83C79ABC);
PPC_FUNC_IMPL(__imp__sub_83C79ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79AC0"))) PPC_WEAK_FUNC(sub_83C79AC0);
PPC_FUNC_IMPL(__imp__sub_83C79AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19624
	ctx.r3.s64 = ctx.r11.s64 + -19624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79ACC"))) PPC_WEAK_FUNC(sub_83C79ACC);
PPC_FUNC_IMPL(__imp__sub_83C79ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79AD0"))) PPC_WEAK_FUNC(sub_83C79AD0);
PPC_FUNC_IMPL(__imp__sub_83C79AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19616
	ctx.r3.s64 = ctx.r11.s64 + -19616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79ADC"))) PPC_WEAK_FUNC(sub_83C79ADC);
PPC_FUNC_IMPL(__imp__sub_83C79ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79AE0"))) PPC_WEAK_FUNC(sub_83C79AE0);
PPC_FUNC_IMPL(__imp__sub_83C79AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19608
	ctx.r3.s64 = ctx.r11.s64 + -19608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79AEC"))) PPC_WEAK_FUNC(sub_83C79AEC);
PPC_FUNC_IMPL(__imp__sub_83C79AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79AF0"))) PPC_WEAK_FUNC(sub_83C79AF0);
PPC_FUNC_IMPL(__imp__sub_83C79AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19600
	ctx.r3.s64 = ctx.r11.s64 + -19600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79AFC"))) PPC_WEAK_FUNC(sub_83C79AFC);
PPC_FUNC_IMPL(__imp__sub_83C79AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79B00"))) PPC_WEAK_FUNC(sub_83C79B00);
PPC_FUNC_IMPL(__imp__sub_83C79B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19592
	ctx.r3.s64 = ctx.r11.s64 + -19592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79B0C"))) PPC_WEAK_FUNC(sub_83C79B0C);
PPC_FUNC_IMPL(__imp__sub_83C79B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79B10"))) PPC_WEAK_FUNC(sub_83C79B10);
PPC_FUNC_IMPL(__imp__sub_83C79B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19584
	ctx.r3.s64 = ctx.r11.s64 + -19584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79B1C"))) PPC_WEAK_FUNC(sub_83C79B1C);
PPC_FUNC_IMPL(__imp__sub_83C79B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79B20"))) PPC_WEAK_FUNC(sub_83C79B20);
PPC_FUNC_IMPL(__imp__sub_83C79B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19576
	ctx.r3.s64 = ctx.r11.s64 + -19576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C79B2C"))) PPC_WEAK_FUNC(sub_83C79B2C);
PPC_FUNC_IMPL(__imp__sub_83C79B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C79B30"))) PPC_WEAK_FUNC(sub_83C79B30);
PPC_FUNC_IMPL(__imp__sub_83C79B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-19568
	ctx.r3.s64 = ctx.r11.s64 + -19568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

