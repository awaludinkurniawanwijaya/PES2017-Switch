#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BD4304"))) PPC_WEAK_FUNC(sub_83BD4304);
PPC_FUNC_IMPL(__imp__sub_83BD4304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4308"))) PPC_WEAK_FUNC(sub_83BD4308);
PPC_FUNC_IMPL(__imp__sub_83BD4308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20136
	ctx.r3.s64 = ctx.r11.s64 + 20136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD4314"))) PPC_WEAK_FUNC(sub_83BD4314);
PPC_FUNC_IMPL(__imp__sub_83BD4314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4318"))) PPC_WEAK_FUNC(sub_83BD4318);
PPC_FUNC_IMPL(__imp__sub_83BD4318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20144
	ctx.r3.s64 = ctx.r11.s64 + 20144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD4324"))) PPC_WEAK_FUNC(sub_83BD4324);
PPC_FUNC_IMPL(__imp__sub_83BD4324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4328"))) PPC_WEAK_FUNC(sub_83BD4328);
PPC_FUNC_IMPL(__imp__sub_83BD4328) {
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
	// addi r3,r11,30100
	ctx.r3.s64 = ctx.r11.s64 + 30100;
	// bl 0x83523120
	ctx.lr = 0x83BD4340;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,20152
	ctx.r3.s64 = ctx.r10.s64 + 20152;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD434C;
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

__attribute__((alias("__imp__sub_83BD435C"))) PPC_WEAK_FUNC(sub_83BD435C);
PPC_FUNC_IMPL(__imp__sub_83BD435C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4360"))) PPC_WEAK_FUNC(sub_83BD4360);
PPC_FUNC_IMPL(__imp__sub_83BD4360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20168
	ctx.r3.s64 = ctx.r11.s64 + 20168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD436C"))) PPC_WEAK_FUNC(sub_83BD436C);
PPC_FUNC_IMPL(__imp__sub_83BD436C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4370"))) PPC_WEAK_FUNC(sub_83BD4370);
PPC_FUNC_IMPL(__imp__sub_83BD4370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20176
	ctx.r3.s64 = ctx.r11.s64 + 20176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD437C"))) PPC_WEAK_FUNC(sub_83BD437C);
PPC_FUNC_IMPL(__imp__sub_83BD437C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4380"))) PPC_WEAK_FUNC(sub_83BD4380);
PPC_FUNC_IMPL(__imp__sub_83BD4380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20184
	ctx.r3.s64 = ctx.r11.s64 + 20184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD438C"))) PPC_WEAK_FUNC(sub_83BD438C);
PPC_FUNC_IMPL(__imp__sub_83BD438C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4390"))) PPC_WEAK_FUNC(sub_83BD4390);
PPC_FUNC_IMPL(__imp__sub_83BD4390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20192
	ctx.r3.s64 = ctx.r11.s64 + 20192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD439C"))) PPC_WEAK_FUNC(sub_83BD439C);
PPC_FUNC_IMPL(__imp__sub_83BD439C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD43A0"))) PPC_WEAK_FUNC(sub_83BD43A0);
PPC_FUNC_IMPL(__imp__sub_83BD43A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20200
	ctx.r3.s64 = ctx.r11.s64 + 20200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD43AC"))) PPC_WEAK_FUNC(sub_83BD43AC);
PPC_FUNC_IMPL(__imp__sub_83BD43AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD43B0"))) PPC_WEAK_FUNC(sub_83BD43B0);
PPC_FUNC_IMPL(__imp__sub_83BD43B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20208
	ctx.r3.s64 = ctx.r11.s64 + 20208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD43BC"))) PPC_WEAK_FUNC(sub_83BD43BC);
PPC_FUNC_IMPL(__imp__sub_83BD43BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD43C0"))) PPC_WEAK_FUNC(sub_83BD43C0);
PPC_FUNC_IMPL(__imp__sub_83BD43C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20216
	ctx.r3.s64 = ctx.r11.s64 + 20216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD43CC"))) PPC_WEAK_FUNC(sub_83BD43CC);
PPC_FUNC_IMPL(__imp__sub_83BD43CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD43D0"))) PPC_WEAK_FUNC(sub_83BD43D0);
PPC_FUNC_IMPL(__imp__sub_83BD43D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20224
	ctx.r3.s64 = ctx.r11.s64 + 20224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD43DC"))) PPC_WEAK_FUNC(sub_83BD43DC);
PPC_FUNC_IMPL(__imp__sub_83BD43DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD43E0"))) PPC_WEAK_FUNC(sub_83BD43E0);
PPC_FUNC_IMPL(__imp__sub_83BD43E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20232
	ctx.r3.s64 = ctx.r11.s64 + 20232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD43EC"))) PPC_WEAK_FUNC(sub_83BD43EC);
PPC_FUNC_IMPL(__imp__sub_83BD43EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD43F0"))) PPC_WEAK_FUNC(sub_83BD43F0);
PPC_FUNC_IMPL(__imp__sub_83BD43F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20240
	ctx.r3.s64 = ctx.r11.s64 + 20240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD43FC"))) PPC_WEAK_FUNC(sub_83BD43FC);
PPC_FUNC_IMPL(__imp__sub_83BD43FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4400"))) PPC_WEAK_FUNC(sub_83BD4400);
PPC_FUNC_IMPL(__imp__sub_83BD4400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20248
	ctx.r3.s64 = ctx.r11.s64 + 20248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD440C"))) PPC_WEAK_FUNC(sub_83BD440C);
PPC_FUNC_IMPL(__imp__sub_83BD440C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4410"))) PPC_WEAK_FUNC(sub_83BD4410);
PPC_FUNC_IMPL(__imp__sub_83BD4410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20256
	ctx.r3.s64 = ctx.r11.s64 + 20256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD441C"))) PPC_WEAK_FUNC(sub_83BD441C);
PPC_FUNC_IMPL(__imp__sub_83BD441C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4420"))) PPC_WEAK_FUNC(sub_83BD4420);
PPC_FUNC_IMPL(__imp__sub_83BD4420) {
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
	// addi r3,r11,30140
	ctx.r3.s64 = ctx.r11.s64 + 30140;
	// bl 0x83523120
	ctx.lr = 0x83BD4438;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,20264
	ctx.r3.s64 = ctx.r10.s64 + 20264;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD4444;
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

__attribute__((alias("__imp__sub_83BD4454"))) PPC_WEAK_FUNC(sub_83BD4454);
PPC_FUNC_IMPL(__imp__sub_83BD4454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4458"))) PPC_WEAK_FUNC(sub_83BD4458);
PPC_FUNC_IMPL(__imp__sub_83BD4458) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30156
	ctx.r7.s64 = ctx.r8.s64 + 30156;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30156(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30156);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30156, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD4480"))) PPC_WEAK_FUNC(sub_83BD4480);
PPC_FUNC_IMPL(__imp__sub_83BD4480) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,27132
	ctx.r6.s64 = ctx.r7.s64 + 27132;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27060(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27060);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30156(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30156);
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
	// std r9,27132(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27132, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD44C8"))) PPC_WEAK_FUNC(sub_83BD44C8);
PPC_FUNC_IMPL(__imp__sub_83BD44C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20280
	ctx.r3.s64 = ctx.r11.s64 + 20280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD44D4"))) PPC_WEAK_FUNC(sub_83BD44D4);
PPC_FUNC_IMPL(__imp__sub_83BD44D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD44D8"))) PPC_WEAK_FUNC(sub_83BD44D8);
PPC_FUNC_IMPL(__imp__sub_83BD44D8) {
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
	// addi r3,r11,30168
	ctx.r3.s64 = ctx.r11.s64 + 30168;
	// bl 0x8259af80
	ctx.lr = 0x83BD44F0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,20296
	ctx.r3.s64 = ctx.r10.s64 + 20296;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD44FC;
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

__attribute__((alias("__imp__sub_83BD450C"))) PPC_WEAK_FUNC(sub_83BD450C);
PPC_FUNC_IMPL(__imp__sub_83BD450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4510"))) PPC_WEAK_FUNC(sub_83BD4510);
PPC_FUNC_IMPL(__imp__sub_83BD4510) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30144
	ctx.r11.s64 = ctx.r8.s64 + 30144;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,27108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27108);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20288
	ctx.r3.s64 = ctx.r6.s64 + 20288;
	// stw r10,30144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30144, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD4540"))) PPC_WEAK_FUNC(sub_83BD4540);
PPC_FUNC_IMPL(__imp__sub_83BD4540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83BD4548;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31777
	ctx.r29.s64 = -2082537472;
	// lwz r4,26136(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26136);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83BD4558:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4558
	if (!cr6.eq) goto loc_83BD4558;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r31,r11,27160
	ctx.r31.s64 = ctx.r11.s64 + 27160;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cc28
	ctx.lr = 0x83BD4584;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,26136(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26136);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r9.u8);
loc_83BD45A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd45a4
	if (!cr6.eq) goto loc_83BD45A4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD45C8;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,26136(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26136);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// stb r10,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r10.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r9,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// li r10,71
	ctx.r10.s64 = 71;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r10.u8);
loc_83BD4644:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4644
	if (!cr6.eq) goto loc_83BD4644;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4668;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,26136(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26136);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r9.u8);
loc_83BD4688:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4688
	if (!cr6.eq) goto loc_83BD4688;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD46AC;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,26136(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26136);
	// stb r11,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r10,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r10.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r9,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r9.u8);
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,71
	ctx.r10.s64 = 71;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// stb r9,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r9.u8);
loc_83BD471C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd471c
	if (!cr6.eq) goto loc_83BD471C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4740;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,26136(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26136);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r9.u8);
loc_83BD4760:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4760
	if (!cr6.eq) goto loc_83BD4760;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4784;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r11.u8);
	// stb r10,273(r31)
	PPC_STORE_U8(ctx.r31.u32 + 273, ctx.r10.u8);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// stb r9,274(r31)
	PPC_STORE_U8(ctx.r31.u32 + 274, ctx.r9.u8);
	// addi r3,r10,21560
	ctx.r3.s64 = ctx.r10.s64 + 21560;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD47A8;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD47B0"))) PPC_WEAK_FUNC(sub_83BD47B0);
PPC_FUNC_IMPL(__imp__sub_83BD47B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,26136
	ctx.r30.s64 = ctx.r11.s64 + 26136;
	// lwz r4,26136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26136);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83BD47D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd47d4
	if (!cr6.eq) goto loc_83BD47D4;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r31,r11,27440
	ctx.r31.s64 = ctx.r11.s64 + 27440;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cc28
	ctx.lr = 0x83BD4800;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r9.u8);
loc_83BD4820:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4820
	if (!cr6.eq) goto loc_83BD4820;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4844;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r10,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,18
	ctx.r10.s64 = 18;
	// stb r9,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r9.u8);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// ori r11,r11,150
	ctx.r11.u64 = ctx.r11.u64 | 150;
	// li r9,45
	ctx.r9.s64 = 45;
	// ori r10,r10,364
	ctx.r10.u64 = ctx.r10.u64 | 364;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r10.u8);
loc_83BD48C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd48c4
	if (!cr6.eq) goto loc_83BD48C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD48E8;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r9.u8);
loc_83BD4908:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4908
	if (!cr6.eq) goto loc_83BD4908;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD492C;
	sub_8259CC28(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stb r10,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// stb r9,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r9.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// ori r11,r11,151
	ctx.r11.u64 = ctx.r11.u64 | 151;
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// li r9,44
	ctx.r9.s64 = 44;
	// ori r10,r10,365
	ctx.r10.u64 = ctx.r10.u64 | 365;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r9,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r10.u8);
loc_83BD49A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd49a8
	if (!cr6.eq) goto loc_83BD49A8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD49CC;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r9.u8);
loc_83BD49EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd49ec
	if (!cr6.eq) goto loc_83BD49EC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4A10;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stb r11,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r11.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r10,273(r31)
	PPC_STORE_U8(ctx.r31.u32 + 273, ctx.r10.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// stb r9,274(r31)
	PPC_STORE_U8(ctx.r31.u32 + 274, ctx.r9.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// ori r11,r11,153
	ctx.r11.u64 = ctx.r11.u64 | 153;
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// stw r9,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r9.u32);
	// li r9,46
	ctx.r9.s64 = 46;
	// ori r10,r10,312
	ctx.r10.u64 = ctx.r10.u64 | 312;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r9.u32);
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r10.u8);
loc_83BD4A88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4a88
	if (!cr6.eq) goto loc_83BD4A88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4AAC;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r9.u8);
loc_83BD4ACC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4acc
	if (!cr6.eq) goto loc_83BD4ACC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4AF0;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r10,365(r31)
	PPC_STORE_U8(ctx.r31.u32 + 365, ctx.r10.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,21
	ctx.r10.s64 = 21;
	// stb r9,366(r31)
	PPC_STORE_U8(ctx.r31.u32 + 366, ctx.r9.u8);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// stw r9,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r9.u32);
	// ori r11,r11,154
	ctx.r11.u64 = ctx.r11.u64 | 154;
	// li r9,47
	ctx.r9.s64 = 47;
	// ori r10,r10,357
	ctx.r10.u64 = ctx.r10.u64 | 357;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r9.u32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r9,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r10.u8);
loc_83BD4B70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4b70
	if (!cr6.eq) goto loc_83BD4B70;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4B94;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r9.u8);
loc_83BD4BB4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4bb4
	if (!cr6.eq) goto loc_83BD4BB4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4BD8;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,456(r31)
	PPC_STORE_U8(ctx.r31.u32 + 456, ctx.r11.u8);
	// stb r10,457(r31)
	PPC_STORE_U8(ctx.r31.u32 + 457, ctx.r10.u8);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// stb r9,458(r31)
	PPC_STORE_U8(ctx.r31.u32 + 458, ctx.r9.u8);
	// addi r3,r10,20304
	ctx.r3.s64 = ctx.r10.s64 + 20304;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD4BFC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD4C14"))) PPC_WEAK_FUNC(sub_83BD4C14);
PPC_FUNC_IMPL(__imp__sub_83BD4C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4C18"))) PPC_WEAK_FUNC(sub_83BD4C18);
PPC_FUNC_IMPL(__imp__sub_83BD4C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,26136
	ctx.r30.s64 = ctx.r11.s64 + 26136;
	// lwz r4,26136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26136);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83BD4C3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4c3c
	if (!cr6.eq) goto loc_83BD4C3C;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r31,r11,27904
	ctx.r31.s64 = ctx.r11.s64 + 27904;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cc28
	ctx.lr = 0x83BD4C68;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r9.u8);
loc_83BD4C88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4c88
	if (!cr6.eq) goto loc_83BD4C88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4CAC;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r10,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,24
	ctx.r10.s64 = 24;
	// stb r9,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r9.u8);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// ori r11,r11,160
	ctx.r11.u64 = ctx.r11.u64 | 160;
	// li r9,16
	ctx.r9.s64 = 16;
	// ori r10,r10,327
	ctx.r10.u64 = ctx.r10.u64 | 327;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r10.u8);
loc_83BD4D2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4d2c
	if (!cr6.eq) goto loc_83BD4D2C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4D50;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r9.u8);
loc_83BD4D70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4d70
	if (!cr6.eq) goto loc_83BD4D70;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4D94;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r10,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r10.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// stb r9,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r9.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// ori r11,r11,163
	ctx.r11.u64 = ctx.r11.u64 | 163;
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// ori r10,r10,328
	ctx.r10.u64 = ctx.r10.u64 | 328;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r9,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r10.u8);
loc_83BD4E0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4e0c
	if (!cr6.eq) goto loc_83BD4E0C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4E30;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r9.u8);
loc_83BD4E50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4e50
	if (!cr6.eq) goto loc_83BD4E50;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4E74;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,273(r31)
	PPC_STORE_U8(ctx.r31.u32 + 273, ctx.r10.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r9,274(r31)
	PPC_STORE_U8(ctx.r31.u32 + 274, ctx.r9.u8);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// stw r9,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r9.u32);
	// ori r11,r11,164
	ctx.r11.u64 = ctx.r11.u64 | 164;
	// li r9,18
	ctx.r9.s64 = 18;
	// ori r10,r10,370
	ctx.r10.u64 = ctx.r10.u64 | 370;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r9.u32);
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r10.u8);
loc_83BD4EF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4ef4
	if (!cr6.eq) goto loc_83BD4EF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4F18;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r9.u8);
loc_83BD4F38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4f38
	if (!cr6.eq) goto loc_83BD4F38;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4F5C;
	sub_8259CC28(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r10,365(r31)
	PPC_STORE_U8(ctx.r31.u32 + 365, ctx.r10.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// stb r9,366(r31)
	PPC_STORE_U8(ctx.r31.u32 + 366, ctx.r9.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// ori r11,r11,165
	ctx.r11.u64 = ctx.r11.u64 | 165;
	// stw r9,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r9.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// ori r10,r10,371
	ctx.r10.u64 = ctx.r10.u64 | 371;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r9.u32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r9,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r10.u8);
loc_83BD4FD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd4fd8
	if (!cr6.eq) goto loc_83BD4FD8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD4FFC;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r9.u8);
loc_83BD501C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd501c
	if (!cr6.eq) goto loc_83BD501C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5040;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stb r11,456(r31)
	PPC_STORE_U8(ctx.r31.u32 + 456, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r10,457(r31)
	PPC_STORE_U8(ctx.r31.u32 + 457, ctx.r10.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,14
	ctx.r10.s64 = 14;
	// stb r9,458(r31)
	PPC_STORE_U8(ctx.r31.u32 + 458, ctx.r9.u8);
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r10.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
	// ori r11,r11,152
	ctx.r11.u64 = ctx.r11.u64 | 152;
	// li r9,48
	ctx.r9.s64 = 48;
	// ori r10,r10,324
	ctx.r10.u64 = ctx.r10.u64 | 324;
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r9.u32);
	// stw r10,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r9,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,492(r31)
	PPC_STORE_U8(ctx.r31.u32 + 492, ctx.r10.u8);
loc_83BD50C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd50c0
	if (!cr6.eq) goto loc_83BD50C0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD50E4;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 520, ctx.r9.u8);
loc_83BD5104:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5104
	if (!cr6.eq) goto loc_83BD5104;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5128;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 548, ctx.r11.u8);
	// stb r10,549(r31)
	PPC_STORE_U8(ctx.r31.u32 + 549, ctx.r10.u8);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// stb r9,550(r31)
	PPC_STORE_U8(ctx.r31.u32 + 550, ctx.r9.u8);
	// addi r3,r10,20440
	ctx.r3.s64 = ctx.r10.s64 + 20440;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD514C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD5164"))) PPC_WEAK_FUNC(sub_83BD5164);
PPC_FUNC_IMPL(__imp__sub_83BD5164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD5168"))) PPC_WEAK_FUNC(sub_83BD5168);
PPC_FUNC_IMPL(__imp__sub_83BD5168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,26136
	ctx.r30.s64 = ctx.r11.s64 + 26136;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83BD518C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd518c
	if (!cr6.eq) goto loc_83BD518C;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r31,r11,28456
	ctx.r31.s64 = ctx.r11.s64 + 28456;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cc28
	ctx.lr = 0x83BD51B8;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r9.u8);
loc_83BD51D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd51d8
	if (!cr6.eq) goto loc_83BD51D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD51FC;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r10,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r9,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r9.u8);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// ori r11,r11,157
	ctx.r11.u64 = ctx.r11.u64 | 157;
	// li r9,19
	ctx.r9.s64 = 19;
	// ori r10,r10,321
	ctx.r10.u64 = ctx.r10.u64 | 321;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r10.u8);
loc_83BD527C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd527c
	if (!cr6.eq) goto loc_83BD527C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD52A0;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r9.u8);
loc_83BD52C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd52c0
	if (!cr6.eq) goto loc_83BD52C0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD52E4;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r10,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r9.u8);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// ori r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 | 5;
	// li r9,20
	ctx.r9.s64 = 20;
	// ori r10,r10,322
	ctx.r10.u64 = ctx.r10.u64 | 322;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r9,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r10.u8);
loc_83BD5364:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5364
	if (!cr6.eq) goto loc_83BD5364;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5388;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r9.u8);
loc_83BD53A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd53a8
	if (!cr6.eq) goto loc_83BD53A8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD53CC;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r11.u8);
	// stb r10,273(r31)
	PPC_STORE_U8(ctx.r31.u32 + 273, ctx.r10.u8);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// stb r9,274(r31)
	PPC_STORE_U8(ctx.r31.u32 + 274, ctx.r9.u8);
	// addi r3,r10,20576
	ctx.r3.s64 = ctx.r10.s64 + 20576;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD53F0;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD5408"))) PPC_WEAK_FUNC(sub_83BD5408);
PPC_FUNC_IMPL(__imp__sub_83BD5408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,26136
	ctx.r30.s64 = ctx.r11.s64 + 26136;
	// lwz r4,26136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26136);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83BD542C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd542c
	if (!cr6.eq) goto loc_83BD542C;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r31,r11,28736
	ctx.r31.s64 = ctx.r11.s64 + 28736;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cc28
	ctx.lr = 0x83BD5458;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r9.u8);
loc_83BD5478:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5478
	if (!cr6.eq) goto loc_83BD5478;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD549C;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r10.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r9,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r9.u8);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// ori r11,r11,172
	ctx.r11.u64 = ctx.r11.u64 | 172;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r10.u8);
loc_83BD5518:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5518
	if (!cr6.eq) goto loc_83BD5518;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD553C;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r9.u8);
loc_83BD555C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd555c
	if (!cr6.eq) goto loc_83BD555C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5580;
	sub_8259CC28(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stb r10,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r10.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r11,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// stb r9,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r9.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// ori r11,r11,170
	ctx.r11.u64 = ctx.r11.u64 | 170;
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// li r9,66
	ctx.r9.s64 = 66;
	// ori r10,r10,349
	ctx.r10.u64 = ctx.r10.u64 | 349;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r9,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r10.u8);
loc_83BD55FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd55fc
	if (!cr6.eq) goto loc_83BD55FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5620;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r9.u8);
loc_83BD5640:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5640
	if (!cr6.eq) goto loc_83BD5640;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5664;
	sub_8259CC28(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stb r10,273(r31)
	PPC_STORE_U8(ctx.r31.u32 + 273, ctx.r10.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r11,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r11.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// stb r9,274(r31)
	PPC_STORE_U8(ctx.r31.u32 + 274, ctx.r9.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// ori r11,r11,171
	ctx.r11.u64 = ctx.r11.u64 | 171;
	// stw r9,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r9.u32);
	// li r9,69
	ctx.r9.s64 = 69;
	// ori r10,r10,341
	ctx.r10.u64 = ctx.r10.u64 | 341;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r9.u32);
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r10.u8);
loc_83BD56E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd56e0
	if (!cr6.eq) goto loc_83BD56E0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5704;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r9.u8);
loc_83BD5724:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5724
	if (!cr6.eq) goto loc_83BD5724;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5748;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r10,365(r31)
	PPC_STORE_U8(ctx.r31.u32 + 365, ctx.r10.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,17
	ctx.r10.s64 = 17;
	// stb r9,366(r31)
	PPC_STORE_U8(ctx.r31.u32 + 366, ctx.r9.u8);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// stw r9,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r9.u32);
	// ori r11,r11,173
	ctx.r11.u64 = ctx.r11.u64 | 173;
	// li r9,69
	ctx.r9.s64 = 69;
	// ori r10,r10,150
	ctx.r10.u64 = ctx.r10.u64 | 150;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r9.u32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r9,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r10.u8);
loc_83BD57C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd57c8
	if (!cr6.eq) goto loc_83BD57C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD57EC;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r9.u8);
loc_83BD580C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd580c
	if (!cr6.eq) goto loc_83BD580C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5830;
	sub_8259CC28(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stb r10,457(r31)
	PPC_STORE_U8(ctx.r31.u32 + 457, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,456(r31)
	PPC_STORE_U8(ctx.r31.u32 + 456, ctx.r11.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// stb r9,458(r31)
	PPC_STORE_U8(ctx.r31.u32 + 458, ctx.r9.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r10.u32);
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// ori r11,r11,167
	ctx.r11.u64 = ctx.r11.u64 | 167;
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
	// li r9,13
	ctx.r9.s64 = 13;
	// ori r10,r10,310
	ctx.r10.u64 = ctx.r10.u64 | 310;
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r9.u32);
	// stw r10,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r9,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,492(r31)
	PPC_STORE_U8(ctx.r31.u32 + 492, ctx.r10.u8);
loc_83BD58AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd58ac
	if (!cr6.eq) goto loc_83BD58AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD58D0;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 520, ctx.r9.u8);
loc_83BD58F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd58f0
	if (!cr6.eq) goto loc_83BD58F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5914;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stb r11,548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 548, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r10,549(r31)
	PPC_STORE_U8(ctx.r31.u32 + 549, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r9,550(r31)
	PPC_STORE_U8(ctx.r31.u32 + 550, ctx.r9.u8);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r10.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// stw r9,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r9.u32);
	// ori r11,r11,168
	ctx.r11.u64 = ctx.r11.u64 | 168;
	// li r9,62
	ctx.r9.s64 = 62;
	// ori r10,r10,308
	ctx.r10.u64 = ctx.r10.u64 | 308;
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// stw r9,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,584(r31)
	PPC_STORE_U8(ctx.r31.u32 + 584, ctx.r10.u8);
loc_83BD5994:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5994
	if (!cr6.eq) goto loc_83BD5994;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD59B8;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// stw r10,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 612, ctx.r9.u8);
loc_83BD59D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd59d8
	if (!cr6.eq) goto loc_83BD59D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,612
	ctx.r3.s64 = ctx.r31.s64 + 612;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD59FC;
	sub_8259CC28(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stb r10,641(r31)
	PPC_STORE_U8(ctx.r31.u32 + 641, ctx.r10.u8);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,640(r31)
	PPC_STORE_U8(ctx.r31.u32 + 640, ctx.r11.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// stb r9,642(r31)
	PPC_STORE_U8(ctx.r31.u32 + 642, ctx.r9.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r10.u32);
	// lis r10,249
	ctx.r10.s64 = 16318464;
	// ori r11,r11,200
	ctx.r11.u64 = ctx.r11.u64 | 200;
	// stw r9,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r9.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// ori r10,r10,66
	ctx.r10.u64 = ctx.r10.u64 | 66;
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r9.u32);
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// stw r9,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,676(r31)
	PPC_STORE_U8(ctx.r31.u32 + 676, ctx.r10.u8);
loc_83BD5A78:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5a78
	if (!cr6.eq) goto loc_83BD5A78;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,676
	ctx.r3.s64 = ctx.r31.s64 + 676;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5A9C;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// stw r10,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,704(r31)
	PPC_STORE_U8(ctx.r31.u32 + 704, ctx.r9.u8);
loc_83BD5ABC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5abc
	if (!cr6.eq) goto loc_83BD5ABC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5AE0;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stb r11,732(r31)
	PPC_STORE_U8(ctx.r31.u32 + 732, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r10,733(r31)
	PPC_STORE_U8(ctx.r31.u32 + 733, ctx.r10.u8);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r9,734(r31)
	PPC_STORE_U8(ctx.r31.u32 + 734, ctx.r9.u8);
	// stw r11,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r10.u32);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// stw r9,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r9.u32);
	// ori r11,r11,169
	ctx.r11.u64 = ctx.r11.u64 | 169;
	// li r9,69
	ctx.r9.s64 = 69;
	// ori r10,r10,345
	ctx.r10.u64 = ctx.r10.u64 | 345;
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r9.u32);
	// stw r10,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r11.u32);
	// stw r9,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,768(r31)
	PPC_STORE_U8(ctx.r31.u32 + 768, ctx.r10.u8);
loc_83BD5B60:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5b60
	if (!cr6.eq) goto loc_83BD5B60;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,768
	ctx.r3.s64 = ctx.r31.s64 + 768;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5B84;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
	// stw r10,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r9.u8);
loc_83BD5BA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5ba4
	if (!cr6.eq) goto loc_83BD5BA4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,796
	ctx.r3.s64 = ctx.r31.s64 + 796;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5BC8;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,824(r31)
	PPC_STORE_U8(ctx.r31.u32 + 824, ctx.r11.u8);
	// stb r10,825(r31)
	PPC_STORE_U8(ctx.r31.u32 + 825, ctx.r10.u8);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// stb r9,826(r31)
	PPC_STORE_U8(ctx.r31.u32 + 826, ctx.r9.u8);
	// addi r3,r10,20712
	ctx.r3.s64 = ctx.r10.s64 + 20712;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD5BEC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD5C04"))) PPC_WEAK_FUNC(sub_83BD5C04);
PPC_FUNC_IMPL(__imp__sub_83BD5C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD5C08"))) PPC_WEAK_FUNC(sub_83BD5C08);
PPC_FUNC_IMPL(__imp__sub_83BD5C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,26148
	ctx.r30.s64 = ctx.r11.s64 + 26148;
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83BD5C2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5c2c
	if (!cr6.eq) goto loc_83BD5C2C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r31,r10,29568
	ctx.r31.s64 = ctx.r10.s64 + 29568;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cc28
	ctx.lr = 0x83BD5C58;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r9.u8);
loc_83BD5C78:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5c78
	if (!cr6.eq) goto loc_83BD5C78;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5C9C;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// stb r10,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r10.u8);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// stb r9,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r9.u8);
	// addi r3,r10,20848
	ctx.r3.s64 = ctx.r10.s64 + 20848;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD5CC0;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD5CD8"))) PPC_WEAK_FUNC(sub_83BD5CD8);
PPC_FUNC_IMPL(__imp__sub_83BD5CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,26136
	ctx.r30.s64 = ctx.r11.s64 + 26136;
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83BD5CFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5cfc
	if (!cr6.eq) goto loc_83BD5CFC;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r31,r11,29664
	ctx.r31.s64 = ctx.r11.s64 + 29664;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cc28
	ctx.lr = 0x83BD5D28;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r9.u8);
loc_83BD5D48:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5d48
	if (!cr6.eq) goto loc_83BD5D48;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5D6C;
	sub_8259CC28(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stb r10,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lis r11,300
	ctx.r11.s64 = 19660800;
	// stb r9,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r9.u8);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// ori r11,r11,618
	ctx.r11.u64 = ctx.r11.u64 | 618;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// li r9,68
	ctx.r9.s64 = 68;
	// ori r10,r10,368
	ctx.r10.u64 = ctx.r10.u64 | 368;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r10.u8);
loc_83BD5DE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5de8
	if (!cr6.eq) goto loc_83BD5DE8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5E0C;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r9.u8);
loc_83BD5E2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5e2c
	if (!cr6.eq) goto loc_83BD5E2C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5E50;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r11.u8);
	// stb r10,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r10.u8);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// stb r9,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r9.u8);
	// addi r3,r10,20864
	ctx.r3.s64 = ctx.r10.s64 + 20864;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD5E74;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD5E8C"))) PPC_WEAK_FUNC(sub_83BD5E8C);
PPC_FUNC_IMPL(__imp__sub_83BD5E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD5E90"))) PPC_WEAK_FUNC(sub_83BD5E90);
PPC_FUNC_IMPL(__imp__sub_83BD5E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83BD5E98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,26136
	ctx.r30.s64 = ctx.r11.s64 + 26136;
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83BD5EAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5eac
	if (!cr6.eq) goto loc_83BD5EAC;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r31,r11,29848
	ctx.r31.s64 = ctx.r11.s64 + 29848;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cc28
	ctx.lr = 0x83BD5ED8;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r9.u8);
loc_83BD5EF8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5ef8
	if (!cr6.eq) goto loc_83BD5EF8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5F1C;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r10,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,13
	ctx.r10.s64 = 13;
	// stb r9,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r9.u8);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lis r11,300
	ctx.r11.s64 = 19660800;
	// lis r10,200
	ctx.r10.s64 = 13107200;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// ori r11,r11,614
	ctx.r11.u64 = ctx.r11.u64 | 614;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,373
	ctx.r10.u64 = ctx.r10.u64 | 373;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r10.u8);
loc_83BD5F9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5f9c
	if (!cr6.eq) goto loc_83BD5F9C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD5FC0;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r9.u8);
loc_83BD5FE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd5fe0
	if (!cr6.eq) goto loc_83BD5FE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD6004;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stb r11,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r10.u8);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r9,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// li r10,68
	ctx.r10.s64 = 68;
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// ori r11,r11,172
	ctx.r11.u64 = ctx.r11.u64 | 172;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r10.u8);
loc_83BD6084:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6084
	if (!cr6.eq) goto loc_83BD6084;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD60A8;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r9.u8);
loc_83BD60C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd60c8
	if (!cr6.eq) goto loc_83BD60C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD60EC;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,273(r31)
	PPC_STORE_U8(ctx.r31.u32 + 273, ctx.r10.u8);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r9,274(r31)
	PPC_STORE_U8(ctx.r31.u32 + 274, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r11,300
	ctx.r11.s64 = 19660800;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// li r10,68
	ctx.r10.s64 = 68;
	// stw r9,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r9.u32);
	// ori r11,r11,615
	ctx.r11.u64 = ctx.r11.u64 | 615;
	// stw r29,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r9,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r9.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r10.u8);
loc_83BD6168:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6168
	if (!cr6.eq) goto loc_83BD6168;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD618C;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r9.u8);
loc_83BD61AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd61ac
	if (!cr6.eq) goto loc_83BD61AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD61D0;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// stb r10,365(r31)
	PPC_STORE_U8(ctx.r31.u32 + 365, ctx.r10.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r9,366(r31)
	PPC_STORE_U8(ctx.r31.u32 + 366, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// lis r8,930
	ctx.r8.s64 = 60948480;
	// stw r10,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r10.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r9,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r9.u32);
	// li r10,68
	ctx.r10.s64 = 68;
	// stw r29,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r29.u32);
	// ori r28,r8,156
	ctx.r28.u64 = ctx.r8.u64 | 156;
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r10,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r10.u8);
loc_83BD6250:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6250
	if (!cr6.eq) goto loc_83BD6250;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD6274;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r9.u8);
loc_83BD6294:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6294
	if (!cr6.eq) goto loc_83BD6294;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD62B8;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,456(r31)
	PPC_STORE_U8(ctx.r31.u32 + 456, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,457(r31)
	PPC_STORE_U8(ctx.r31.u32 + 457, ctx.r10.u8);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r9,458(r31)
	PPC_STORE_U8(ctx.r31.u32 + 458, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// stw r10,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r10.u32);
	// li r10,68
	ctx.r10.s64 = 68;
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
	// ori r11,r11,152
	ctx.r11.u64 = ctx.r11.u64 | 152;
	// stw r29,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r10.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r9,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r9.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,492(r31)
	PPC_STORE_U8(ctx.r31.u32 + 492, ctx.r10.u8);
loc_83BD6334:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6334
	if (!cr6.eq) goto loc_83BD6334;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD6358;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 520, ctx.r9.u8);
loc_83BD6378:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6378
	if (!cr6.eq) goto loc_83BD6378;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD639C;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 548, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,549(r31)
	PPC_STORE_U8(ctx.r31.u32 + 549, ctx.r10.u8);
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r9,550(r31)
	PPC_STORE_U8(ctx.r31.u32 + 550, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r11,300
	ctx.r11.s64 = 19660800;
	// stw r10,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r10.u32);
	// li r10,68
	ctx.r10.s64 = 68;
	// stw r9,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r9.u32);
	// ori r11,r11,614
	ctx.r11.u64 = ctx.r11.u64 | 614;
	// stw r29,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r10.u32);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,584(r31)
	PPC_STORE_U8(ctx.r31.u32 + 584, ctx.r10.u8);
loc_83BD6418:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6418
	if (!cr6.eq) goto loc_83BD6418;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD643C;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// stw r10,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 612, ctx.r9.u8);
loc_83BD645C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd645c
	if (!cr6.eq) goto loc_83BD645C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,612
	ctx.r3.s64 = ctx.r31.s64 + 612;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD6480;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,640(r31)
	PPC_STORE_U8(ctx.r31.u32 + 640, ctx.r11.u8);
	// stb r10,641(r31)
	PPC_STORE_U8(ctx.r31.u32 + 641, ctx.r10.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r9,642(r31)
	PPC_STORE_U8(ctx.r31.u32 + 642, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// stw r10,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r10.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,68
	ctx.r10.s64 = 68;
	// stw r9,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r9.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// stw r10,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r10.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r28,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r28.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r29.u32);
	// stw r9,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,676(r31)
	PPC_STORE_U8(ctx.r31.u32 + 676, ctx.r10.u8);
loc_83BD64F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd64f8
	if (!cr6.eq) goto loc_83BD64F8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,676
	ctx.r3.s64 = ctx.r31.s64 + 676;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD651C;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// stw r10,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,704(r31)
	PPC_STORE_U8(ctx.r31.u32 + 704, ctx.r9.u8);
loc_83BD653C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd653c
	if (!cr6.eq) goto loc_83BD653C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD6560;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,732(r31)
	PPC_STORE_U8(ctx.r31.u32 + 732, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r10,733(r31)
	PPC_STORE_U8(ctx.r31.u32 + 733, ctx.r10.u8);
	// stb r9,734(r31)
	PPC_STORE_U8(ctx.r31.u32 + 734, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r10,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r10.u32);
	// stw r9,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r9.u32);
	// li r10,68
	ctx.r10.s64 = 68;
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r11,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r10,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r28,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r11.u32);
	// stw r29,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r10.u32);
	// stb r9,768(r31)
	PPC_STORE_U8(ctx.r31.u32 + 768, ctx.r9.u8);
loc_83BD65D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd65d4
	if (!cr6.eq) goto loc_83BD65D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,768
	ctx.r3.s64 = ctx.r31.s64 + 768;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD65F8;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
	// stw r10,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r9.u8);
loc_83BD6618:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6618
	if (!cr6.eq) goto loc_83BD6618;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,796
	ctx.r3.s64 = ctx.r31.s64 + 796;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD663C;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,824(r31)
	PPC_STORE_U8(ctx.r31.u32 + 824, ctx.r11.u8);
	// stb r10,825(r31)
	PPC_STORE_U8(ctx.r31.u32 + 825, ctx.r10.u8);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// stb r9,826(r31)
	PPC_STORE_U8(ctx.r31.u32 + 826, ctx.r9.u8);
	// addi r3,r10,21000
	ctx.r3.s64 = ctx.r10.s64 + 21000;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD6660;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD6668"))) PPC_WEAK_FUNC(sub_83BD6668);
PPC_FUNC_IMPL(__imp__sub_83BD6668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,26136
	ctx.r30.s64 = ctx.r11.s64 + 26136;
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83BD668C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd668c
	if (!cr6.eq) goto loc_83BD668C;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r31,r11,30680
	ctx.r31.s64 = ctx.r11.s64 + 30680;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cc28
	ctx.lr = 0x83BD66B8;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r9.u8);
loc_83BD66D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd66d8
	if (!cr6.eq) goto loc_83BD66D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD66FC;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// stb r10,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r10.u8);
	// lis r8,-31791
	ctx.r8.s64 = -2083454976;
	// sth r9,90(r31)
	PPC_STORE_U16(ctx.r31.u32 + 90, ctx.r9.u16);
	// addi r3,r8,21136
	ctx.r3.s64 = ctx.r8.s64 + 21136;
	// addi r11,r31,90
	ctx.r11.s64 = ctx.r31.s64 + 90;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD6724;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD673C"))) PPC_WEAK_FUNC(sub_83BD673C);
PPC_FUNC_IMPL(__imp__sub_83BD673C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6740"))) PPC_WEAK_FUNC(sub_83BD6740);
PPC_FUNC_IMPL(__imp__sub_83BD6740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,26136
	ctx.r30.s64 = ctx.r11.s64 + 26136;
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83BD6764:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6764
	if (!cr6.eq) goto loc_83BD6764;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r31,r11,30776
	ctx.r31.s64 = ctx.r11.s64 + 30776;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cc28
	ctx.lr = 0x83BD6790;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r9.u8);
loc_83BD67B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd67b0
	if (!cr6.eq) goto loc_83BD67B0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD67D4;
	sub_8259CC28(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,11
	ctx.r9.s64 = 11;
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r10.u8);
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r11,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r11.u8);
	// addi r7,r8,-18588
	ctx.r7.s64 = ctx.r8.s64 + -18588;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// lis r11,109
	ctx.r11.s64 = 7143424;
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r5,-18588(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18588);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_83BD6858:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6858
	if (!cr6.eq) goto loc_83BD6858;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD687C;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r9.u8);
loc_83BD689C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd689c
	if (!cr6.eq) goto loc_83BD689C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD68C0;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r11.u8);
	// stb r10,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r10.u8);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// stb r9,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r9.u8);
	// addi r3,r10,21152
	ctx.r3.s64 = ctx.r10.s64 + 21152;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD68E4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD68FC"))) PPC_WEAK_FUNC(sub_83BD68FC);
PPC_FUNC_IMPL(__imp__sub_83BD68FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6900"))) PPC_WEAK_FUNC(sub_83BD6900);
PPC_FUNC_IMPL(__imp__sub_83BD6900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83BD6908;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,26136
	ctx.r30.s64 = ctx.r11.s64 + 26136;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83BD691C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd691c
	if (!cr6.eq) goto loc_83BD691C;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r31,r11,30960
	ctx.r31.s64 = ctx.r11.s64 + 30960;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cc28
	ctx.lr = 0x83BD6948;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r9.u8);
loc_83BD6968:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6968
	if (!cr6.eq) goto loc_83BD6968;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD698C;
	sub_8259CC28(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r10,-18588
	ctx.r29.s64 = ctx.r10.s64 + -18588;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// lis r9,300
	ctx.r9.s64 = 19660800;
	// stb r10,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r10.u8);
	// li r10,23
	ctx.r10.s64 = 23;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r27,r9,559
	ctx.r27.u64 = ctx.r9.u64 | 559;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r9,21
	ctx.r9.s64 = 21;
	// stb r10,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r10.u8);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// addi r7,r31,92
	ctx.r7.s64 = ctx.r31.s64 + 92;
	// stb r11,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r11.u8);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r27,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r27.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
loc_83BD6A1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6a1c
	if (!cr6.eq) goto loc_83BD6A1C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD6A40;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r9.u8);
loc_83BD6A60:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6a60
	if (!cr6.eq) goto loc_83BD6A60;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD6A84;
	sub_8259CC28(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stb r10,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r10.u8);
	// li r10,22
	ctx.r10.s64 = 22;
	// stb r11,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r11.u8);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r7,r31,184
	ctx.r7.s64 = ctx.r31.s64 + 184;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r9,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r9.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r11.u8);
	// stw r28,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r27,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r27.u32);
	// stw r9,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r9.u32);
	// stw r6,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r6.u32);
	// stw r5,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r5.u32);
	// stw r3,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
loc_83BD6B04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6b04
	if (!cr6.eq) goto loc_83BD6B04;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD6B28;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r9.u8);
loc_83BD6B48:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6b48
	if (!cr6.eq) goto loc_83BD6B48;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD6B6C;
	sub_8259CC28(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,273(r31)
	PPC_STORE_U8(ctx.r31.u32 + 273, ctx.r10.u8);
	// li r10,37
	ctx.r10.s64 = 37;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r8,r31,276
	ctx.r8.s64 = ctx.r31.s64 + 276;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stb r11,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r11.u8);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r9,274(r31)
	PPC_STORE_U8(ctx.r31.u32 + 274, ctx.r9.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r11.u8);
	// stw r28,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r27,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r27.u32);
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// stw r9,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r9.u32);
	// stw r7,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r7.u32);
	// stw r6,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r6.u32);
	// stw r5,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r5.u32);
	// stw r3,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
loc_83BD6BE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6be4
	if (!cr6.eq) goto loc_83BD6BE4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD6C08;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r9.u8);
loc_83BD6C28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6c28
	if (!cr6.eq) goto loc_83BD6C28;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD6C4C;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
	// stb r10,365(r31)
	PPC_STORE_U8(ctx.r31.u32 + 365, ctx.r10.u8);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// stb r9,366(r31)
	PPC_STORE_U8(ctx.r31.u32 + 366, ctx.r9.u8);
	// addi r3,r10,21288
	ctx.r3.s64 = ctx.r10.s64 + 21288;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD6C70;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD6C78"))) PPC_WEAK_FUNC(sub_83BD6C78);
PPC_FUNC_IMPL(__imp__sub_83BD6C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,26136
	ctx.r30.s64 = ctx.r11.s64 + 26136;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83BD6C9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6c9c
	if (!cr6.eq) goto loc_83BD6C9C;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r31,r11,31328
	ctx.r31.s64 = ctx.r11.s64 + 31328;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cc28
	ctx.lr = 0x83BD6CC8;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r9.u8);
loc_83BD6CE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6ce8
	if (!cr6.eq) goto loc_83BD6CE8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD6D0C;
	sub_8259CC28(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// lis r9,200
	ctx.r9.s64 = 13107200;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r10.u8);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// ori r9,r9,376
	ctx.r9.u64 = ctx.r9.u64 | 376;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r11,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r11.u8);
	// addi r7,r8,-18588
	ctx.r7.s64 = ctx.r8.s64 + -18588;
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// lis r11,300
	ctx.r11.s64 = 19660800;
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r5,-18588(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18588);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,559
	ctx.r11.u64 = ctx.r11.u64 | 559;
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stb r9,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r9.u8);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_83BD6D94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6d94
	if (!cr6.eq) goto loc_83BD6D94;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD6DB8;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r9,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r9.u8);
loc_83BD6DD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83bd6dd8
	if (!cr6.eq) goto loc_83BD6DD8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83BD6DFC;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r11.u8);
	// stb r10,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r10.u8);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// stb r9,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r9.u8);
	// addi r3,r10,21424
	ctx.r3.s64 = ctx.r10.s64 + 21424;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD6E20;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD6E38"))) PPC_WEAK_FUNC(sub_83BD6E38);
PPC_FUNC_IMPL(__imp__sub_83BD6E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21696
	ctx.r3.s64 = ctx.r11.s64 + 21696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD6E44"))) PPC_WEAK_FUNC(sub_83BD6E44);
PPC_FUNC_IMPL(__imp__sub_83BD6E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6E48"))) PPC_WEAK_FUNC(sub_83BD6E48);
PPC_FUNC_IMPL(__imp__sub_83BD6E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21704
	ctx.r3.s64 = ctx.r11.s64 + 21704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD6E54"))) PPC_WEAK_FUNC(sub_83BD6E54);
PPC_FUNC_IMPL(__imp__sub_83BD6E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6E58"))) PPC_WEAK_FUNC(sub_83BD6E58);
PPC_FUNC_IMPL(__imp__sub_83BD6E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21712
	ctx.r3.s64 = ctx.r11.s64 + 21712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD6E64"))) PPC_WEAK_FUNC(sub_83BD6E64);
PPC_FUNC_IMPL(__imp__sub_83BD6E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6E68"))) PPC_WEAK_FUNC(sub_83BD6E68);
PPC_FUNC_IMPL(__imp__sub_83BD6E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21720
	ctx.r3.s64 = ctx.r11.s64 + 21720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD6E74"))) PPC_WEAK_FUNC(sub_83BD6E74);
PPC_FUNC_IMPL(__imp__sub_83BD6E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6E78"))) PPC_WEAK_FUNC(sub_83BD6E78);
PPC_FUNC_IMPL(__imp__sub_83BD6E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21728
	ctx.r3.s64 = ctx.r11.s64 + 21728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD6E84"))) PPC_WEAK_FUNC(sub_83BD6E84);
PPC_FUNC_IMPL(__imp__sub_83BD6E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6E88"))) PPC_WEAK_FUNC(sub_83BD6E88);
PPC_FUNC_IMPL(__imp__sub_83BD6E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21736
	ctx.r3.s64 = ctx.r11.s64 + 21736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD6E94"))) PPC_WEAK_FUNC(sub_83BD6E94);
PPC_FUNC_IMPL(__imp__sub_83BD6E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6E98"))) PPC_WEAK_FUNC(sub_83BD6E98);
PPC_FUNC_IMPL(__imp__sub_83BD6E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21744
	ctx.r3.s64 = ctx.r11.s64 + 21744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD6EA4"))) PPC_WEAK_FUNC(sub_83BD6EA4);
PPC_FUNC_IMPL(__imp__sub_83BD6EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6EA8"))) PPC_WEAK_FUNC(sub_83BD6EA8);
PPC_FUNC_IMPL(__imp__sub_83BD6EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21752
	ctx.r3.s64 = ctx.r11.s64 + 21752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD6EB4"))) PPC_WEAK_FUNC(sub_83BD6EB4);
PPC_FUNC_IMPL(__imp__sub_83BD6EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6EB8"))) PPC_WEAK_FUNC(sub_83BD6EB8);
PPC_FUNC_IMPL(__imp__sub_83BD6EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21760
	ctx.r3.s64 = ctx.r11.s64 + 21760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD6EC4"))) PPC_WEAK_FUNC(sub_83BD6EC4);
PPC_FUNC_IMPL(__imp__sub_83BD6EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6EC8"))) PPC_WEAK_FUNC(sub_83BD6EC8);
PPC_FUNC_IMPL(__imp__sub_83BD6EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21768
	ctx.r3.s64 = ctx.r11.s64 + 21768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD6ED4"))) PPC_WEAK_FUNC(sub_83BD6ED4);
PPC_FUNC_IMPL(__imp__sub_83BD6ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6ED8"))) PPC_WEAK_FUNC(sub_83BD6ED8);
PPC_FUNC_IMPL(__imp__sub_83BD6ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21776
	ctx.r3.s64 = ctx.r11.s64 + 21776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD6EE4"))) PPC_WEAK_FUNC(sub_83BD6EE4);
PPC_FUNC_IMPL(__imp__sub_83BD6EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6EE8"))) PPC_WEAK_FUNC(sub_83BD6EE8);
PPC_FUNC_IMPL(__imp__sub_83BD6EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21784
	ctx.r3.s64 = ctx.r11.s64 + 21784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD6EF4"))) PPC_WEAK_FUNC(sub_83BD6EF4);
PPC_FUNC_IMPL(__imp__sub_83BD6EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6EF8"))) PPC_WEAK_FUNC(sub_83BD6EF8);
PPC_FUNC_IMPL(__imp__sub_83BD6EF8) {
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
	// addi r3,r11,30516
	ctx.r3.s64 = ctx.r11.s64 + 30516;
	// bl 0x83523120
	ctx.lr = 0x83BD6F10;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,21792
	ctx.r3.s64 = ctx.r10.s64 + 21792;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD6F1C;
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

__attribute__((alias("__imp__sub_83BD6F2C"))) PPC_WEAK_FUNC(sub_83BD6F2C);
PPC_FUNC_IMPL(__imp__sub_83BD6F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6F30"))) PPC_WEAK_FUNC(sub_83BD6F30);
PPC_FUNC_IMPL(__imp__sub_83BD6F30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30532
	ctx.r7.s64 = ctx.r8.s64 + 30532;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30532(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30532);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30532(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30532, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD6F58"))) PPC_WEAK_FUNC(sub_83BD6F58);
PPC_FUNC_IMPL(__imp__sub_83BD6F58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,31708
	ctx.r6.s64 = ctx.r7.s64 + 31708;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31636(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31636);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30532(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30532);
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
	// std r9,31708(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31708, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD6FA0"))) PPC_WEAK_FUNC(sub_83BD6FA0);
PPC_FUNC_IMPL(__imp__sub_83BD6FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21808
	ctx.r3.s64 = ctx.r11.s64 + 21808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD6FAC"))) PPC_WEAK_FUNC(sub_83BD6FAC);
PPC_FUNC_IMPL(__imp__sub_83BD6FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6FB0"))) PPC_WEAK_FUNC(sub_83BD6FB0);
PPC_FUNC_IMPL(__imp__sub_83BD6FB0) {
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
	// addi r3,r11,30544
	ctx.r3.s64 = ctx.r11.s64 + 30544;
	// bl 0x8259af80
	ctx.lr = 0x83BD6FC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,21824
	ctx.r3.s64 = ctx.r10.s64 + 21824;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD6FD4;
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

__attribute__((alias("__imp__sub_83BD6FE4"))) PPC_WEAK_FUNC(sub_83BD6FE4);
PPC_FUNC_IMPL(__imp__sub_83BD6FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD6FE8"))) PPC_WEAK_FUNC(sub_83BD6FE8);
PPC_FUNC_IMPL(__imp__sub_83BD6FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30520
	ctx.r11.s64 = ctx.r8.s64 + 30520;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,31684(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31684);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,21816
	ctx.r3.s64 = ctx.r6.s64 + 21816;
	// stw r10,30520(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30520, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7018"))) PPC_WEAK_FUNC(sub_83BD7018);
PPC_FUNC_IMPL(__imp__sub_83BD7018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21832
	ctx.r3.s64 = ctx.r11.s64 + 21832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7024"))) PPC_WEAK_FUNC(sub_83BD7024);
PPC_FUNC_IMPL(__imp__sub_83BD7024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7028"))) PPC_WEAK_FUNC(sub_83BD7028);
PPC_FUNC_IMPL(__imp__sub_83BD7028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21840
	ctx.r3.s64 = ctx.r11.s64 + 21840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7034"))) PPC_WEAK_FUNC(sub_83BD7034);
PPC_FUNC_IMPL(__imp__sub_83BD7034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7038"))) PPC_WEAK_FUNC(sub_83BD7038);
PPC_FUNC_IMPL(__imp__sub_83BD7038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21848
	ctx.r3.s64 = ctx.r11.s64 + 21848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7044"))) PPC_WEAK_FUNC(sub_83BD7044);
PPC_FUNC_IMPL(__imp__sub_83BD7044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7048"))) PPC_WEAK_FUNC(sub_83BD7048);
PPC_FUNC_IMPL(__imp__sub_83BD7048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21856
	ctx.r3.s64 = ctx.r11.s64 + 21856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7054"))) PPC_WEAK_FUNC(sub_83BD7054);
PPC_FUNC_IMPL(__imp__sub_83BD7054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7058"))) PPC_WEAK_FUNC(sub_83BD7058);
PPC_FUNC_IMPL(__imp__sub_83BD7058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21864
	ctx.r3.s64 = ctx.r11.s64 + 21864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7064"))) PPC_WEAK_FUNC(sub_83BD7064);
PPC_FUNC_IMPL(__imp__sub_83BD7064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7068"))) PPC_WEAK_FUNC(sub_83BD7068);
PPC_FUNC_IMPL(__imp__sub_83BD7068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21872
	ctx.r3.s64 = ctx.r11.s64 + 21872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7074"))) PPC_WEAK_FUNC(sub_83BD7074);
PPC_FUNC_IMPL(__imp__sub_83BD7074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7078"))) PPC_WEAK_FUNC(sub_83BD7078);
PPC_FUNC_IMPL(__imp__sub_83BD7078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21880
	ctx.r3.s64 = ctx.r11.s64 + 21880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7084"))) PPC_WEAK_FUNC(sub_83BD7084);
PPC_FUNC_IMPL(__imp__sub_83BD7084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7088"))) PPC_WEAK_FUNC(sub_83BD7088);
PPC_FUNC_IMPL(__imp__sub_83BD7088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21888
	ctx.r3.s64 = ctx.r11.s64 + 21888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7094"))) PPC_WEAK_FUNC(sub_83BD7094);
PPC_FUNC_IMPL(__imp__sub_83BD7094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7098"))) PPC_WEAK_FUNC(sub_83BD7098);
PPC_FUNC_IMPL(__imp__sub_83BD7098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21896
	ctx.r3.s64 = ctx.r11.s64 + 21896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD70A4"))) PPC_WEAK_FUNC(sub_83BD70A4);
PPC_FUNC_IMPL(__imp__sub_83BD70A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD70A8"))) PPC_WEAK_FUNC(sub_83BD70A8);
PPC_FUNC_IMPL(__imp__sub_83BD70A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21904
	ctx.r3.s64 = ctx.r11.s64 + 21904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD70B4"))) PPC_WEAK_FUNC(sub_83BD70B4);
PPC_FUNC_IMPL(__imp__sub_83BD70B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD70B8"))) PPC_WEAK_FUNC(sub_83BD70B8);
PPC_FUNC_IMPL(__imp__sub_83BD70B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21912
	ctx.r3.s64 = ctx.r11.s64 + 21912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD70C4"))) PPC_WEAK_FUNC(sub_83BD70C4);
PPC_FUNC_IMPL(__imp__sub_83BD70C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD70C8"))) PPC_WEAK_FUNC(sub_83BD70C8);
PPC_FUNC_IMPL(__imp__sub_83BD70C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21920
	ctx.r3.s64 = ctx.r11.s64 + 21920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD70D4"))) PPC_WEAK_FUNC(sub_83BD70D4);
PPC_FUNC_IMPL(__imp__sub_83BD70D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD70D8"))) PPC_WEAK_FUNC(sub_83BD70D8);
PPC_FUNC_IMPL(__imp__sub_83BD70D8) {
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
	// addi r3,r11,30892
	ctx.r3.s64 = ctx.r11.s64 + 30892;
	// bl 0x83523120
	ctx.lr = 0x83BD70F0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,21928
	ctx.r3.s64 = ctx.r10.s64 + 21928;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD70FC;
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

__attribute__((alias("__imp__sub_83BD710C"))) PPC_WEAK_FUNC(sub_83BD710C);
PPC_FUNC_IMPL(__imp__sub_83BD710C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7110"))) PPC_WEAK_FUNC(sub_83BD7110);
PPC_FUNC_IMPL(__imp__sub_83BD7110) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30908
	ctx.r7.s64 = ctx.r8.s64 + 30908;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30908(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30908);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30908(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30908, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD7138"))) PPC_WEAK_FUNC(sub_83BD7138);
PPC_FUNC_IMPL(__imp__sub_83BD7138) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,31888
	ctx.r6.s64 = ctx.r7.s64 + 31888;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31816(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31816);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30908(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30908);
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
	// std r9,31888(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31888, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD7180"))) PPC_WEAK_FUNC(sub_83BD7180);
PPC_FUNC_IMPL(__imp__sub_83BD7180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21944
	ctx.r3.s64 = ctx.r11.s64 + 21944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD718C"))) PPC_WEAK_FUNC(sub_83BD718C);
PPC_FUNC_IMPL(__imp__sub_83BD718C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7190"))) PPC_WEAK_FUNC(sub_83BD7190);
PPC_FUNC_IMPL(__imp__sub_83BD7190) {
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
	// addi r3,r11,30920
	ctx.r3.s64 = ctx.r11.s64 + 30920;
	// bl 0x8259af80
	ctx.lr = 0x83BD71A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,21960
	ctx.r3.s64 = ctx.r10.s64 + 21960;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD71B4;
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

__attribute__((alias("__imp__sub_83BD71C4"))) PPC_WEAK_FUNC(sub_83BD71C4);
PPC_FUNC_IMPL(__imp__sub_83BD71C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD71C8"))) PPC_WEAK_FUNC(sub_83BD71C8);
PPC_FUNC_IMPL(__imp__sub_83BD71C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30896
	ctx.r11.s64 = ctx.r8.s64 + 30896;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,31864(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31864);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,21952
	ctx.r3.s64 = ctx.r6.s64 + 21952;
	// stw r10,30896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30896, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD71F8"))) PPC_WEAK_FUNC(sub_83BD71F8);
PPC_FUNC_IMPL(__imp__sub_83BD71F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21968
	ctx.r3.s64 = ctx.r11.s64 + 21968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7204"))) PPC_WEAK_FUNC(sub_83BD7204);
PPC_FUNC_IMPL(__imp__sub_83BD7204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7208"))) PPC_WEAK_FUNC(sub_83BD7208);
PPC_FUNC_IMPL(__imp__sub_83BD7208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21976
	ctx.r3.s64 = ctx.r11.s64 + 21976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7214"))) PPC_WEAK_FUNC(sub_83BD7214);
PPC_FUNC_IMPL(__imp__sub_83BD7214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7218"))) PPC_WEAK_FUNC(sub_83BD7218);
PPC_FUNC_IMPL(__imp__sub_83BD7218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21984
	ctx.r3.s64 = ctx.r11.s64 + 21984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7224"))) PPC_WEAK_FUNC(sub_83BD7224);
PPC_FUNC_IMPL(__imp__sub_83BD7224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7228"))) PPC_WEAK_FUNC(sub_83BD7228);
PPC_FUNC_IMPL(__imp__sub_83BD7228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,21992
	ctx.r3.s64 = ctx.r11.s64 + 21992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7234"))) PPC_WEAK_FUNC(sub_83BD7234);
PPC_FUNC_IMPL(__imp__sub_83BD7234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7238"))) PPC_WEAK_FUNC(sub_83BD7238);
PPC_FUNC_IMPL(__imp__sub_83BD7238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22000
	ctx.r3.s64 = ctx.r11.s64 + 22000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7244"))) PPC_WEAK_FUNC(sub_83BD7244);
PPC_FUNC_IMPL(__imp__sub_83BD7244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7248"))) PPC_WEAK_FUNC(sub_83BD7248);
PPC_FUNC_IMPL(__imp__sub_83BD7248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22008
	ctx.r3.s64 = ctx.r11.s64 + 22008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7254"))) PPC_WEAK_FUNC(sub_83BD7254);
PPC_FUNC_IMPL(__imp__sub_83BD7254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7258"))) PPC_WEAK_FUNC(sub_83BD7258);
PPC_FUNC_IMPL(__imp__sub_83BD7258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22016
	ctx.r3.s64 = ctx.r11.s64 + 22016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7264"))) PPC_WEAK_FUNC(sub_83BD7264);
PPC_FUNC_IMPL(__imp__sub_83BD7264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7268"))) PPC_WEAK_FUNC(sub_83BD7268);
PPC_FUNC_IMPL(__imp__sub_83BD7268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22024
	ctx.r3.s64 = ctx.r11.s64 + 22024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7274"))) PPC_WEAK_FUNC(sub_83BD7274);
PPC_FUNC_IMPL(__imp__sub_83BD7274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7278"))) PPC_WEAK_FUNC(sub_83BD7278);
PPC_FUNC_IMPL(__imp__sub_83BD7278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22032
	ctx.r3.s64 = ctx.r11.s64 + 22032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7284"))) PPC_WEAK_FUNC(sub_83BD7284);
PPC_FUNC_IMPL(__imp__sub_83BD7284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7288"))) PPC_WEAK_FUNC(sub_83BD7288);
PPC_FUNC_IMPL(__imp__sub_83BD7288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22040
	ctx.r3.s64 = ctx.r11.s64 + 22040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7294"))) PPC_WEAK_FUNC(sub_83BD7294);
PPC_FUNC_IMPL(__imp__sub_83BD7294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7298"))) PPC_WEAK_FUNC(sub_83BD7298);
PPC_FUNC_IMPL(__imp__sub_83BD7298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22048
	ctx.r3.s64 = ctx.r11.s64 + 22048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD72A4"))) PPC_WEAK_FUNC(sub_83BD72A4);
PPC_FUNC_IMPL(__imp__sub_83BD72A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD72A8"))) PPC_WEAK_FUNC(sub_83BD72A8);
PPC_FUNC_IMPL(__imp__sub_83BD72A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22056
	ctx.r3.s64 = ctx.r11.s64 + 22056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD72B4"))) PPC_WEAK_FUNC(sub_83BD72B4);
PPC_FUNC_IMPL(__imp__sub_83BD72B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD72B8"))) PPC_WEAK_FUNC(sub_83BD72B8);
PPC_FUNC_IMPL(__imp__sub_83BD72B8) {
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
	// addi r3,r11,31264
	ctx.r3.s64 = ctx.r11.s64 + 31264;
	// bl 0x83523120
	ctx.lr = 0x83BD72D0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,22064
	ctx.r3.s64 = ctx.r10.s64 + 22064;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD72DC;
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

__attribute__((alias("__imp__sub_83BD72EC"))) PPC_WEAK_FUNC(sub_83BD72EC);
PPC_FUNC_IMPL(__imp__sub_83BD72EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD72F0"))) PPC_WEAK_FUNC(sub_83BD72F0);
PPC_FUNC_IMPL(__imp__sub_83BD72F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31280
	ctx.r7.s64 = ctx.r8.s64 + 31280;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31280(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31280);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31280, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD7318"))) PPC_WEAK_FUNC(sub_83BD7318);
PPC_FUNC_IMPL(__imp__sub_83BD7318) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,32040
	ctx.r6.s64 = ctx.r7.s64 + 32040;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31968(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31968);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31280(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31280);
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
	// std r9,32040(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32040, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD7360"))) PPC_WEAK_FUNC(sub_83BD7360);
PPC_FUNC_IMPL(__imp__sub_83BD7360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22080
	ctx.r3.s64 = ctx.r11.s64 + 22080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD736C"))) PPC_WEAK_FUNC(sub_83BD736C);
PPC_FUNC_IMPL(__imp__sub_83BD736C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7370"))) PPC_WEAK_FUNC(sub_83BD7370);
PPC_FUNC_IMPL(__imp__sub_83BD7370) {
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
	// addi r3,r11,31288
	ctx.r3.s64 = ctx.r11.s64 + 31288;
	// bl 0x8259af80
	ctx.lr = 0x83BD7388;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,22096
	ctx.r3.s64 = ctx.r10.s64 + 22096;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD7394;
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

__attribute__((alias("__imp__sub_83BD73A4"))) PPC_WEAK_FUNC(sub_83BD73A4);
PPC_FUNC_IMPL(__imp__sub_83BD73A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD73A8"))) PPC_WEAK_FUNC(sub_83BD73A8);
PPC_FUNC_IMPL(__imp__sub_83BD73A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31268
	ctx.r11.s64 = ctx.r8.s64 + 31268;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,32016(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32016);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22088
	ctx.r3.s64 = ctx.r6.s64 + 22088;
	// stw r10,31268(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31268, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD73D8"))) PPC_WEAK_FUNC(sub_83BD73D8);
PPC_FUNC_IMPL(__imp__sub_83BD73D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22104
	ctx.r3.s64 = ctx.r11.s64 + 22104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD73E4"))) PPC_WEAK_FUNC(sub_83BD73E4);
PPC_FUNC_IMPL(__imp__sub_83BD73E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD73E8"))) PPC_WEAK_FUNC(sub_83BD73E8);
PPC_FUNC_IMPL(__imp__sub_83BD73E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22112
	ctx.r3.s64 = ctx.r11.s64 + 22112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD73F4"))) PPC_WEAK_FUNC(sub_83BD73F4);
PPC_FUNC_IMPL(__imp__sub_83BD73F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD73F8"))) PPC_WEAK_FUNC(sub_83BD73F8);
PPC_FUNC_IMPL(__imp__sub_83BD73F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22120
	ctx.r3.s64 = ctx.r11.s64 + 22120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7404"))) PPC_WEAK_FUNC(sub_83BD7404);
PPC_FUNC_IMPL(__imp__sub_83BD7404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7408"))) PPC_WEAK_FUNC(sub_83BD7408);
PPC_FUNC_IMPL(__imp__sub_83BD7408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22128
	ctx.r3.s64 = ctx.r11.s64 + 22128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7414"))) PPC_WEAK_FUNC(sub_83BD7414);
PPC_FUNC_IMPL(__imp__sub_83BD7414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7418"))) PPC_WEAK_FUNC(sub_83BD7418);
PPC_FUNC_IMPL(__imp__sub_83BD7418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22136
	ctx.r3.s64 = ctx.r11.s64 + 22136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7424"))) PPC_WEAK_FUNC(sub_83BD7424);
PPC_FUNC_IMPL(__imp__sub_83BD7424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7428"))) PPC_WEAK_FUNC(sub_83BD7428);
PPC_FUNC_IMPL(__imp__sub_83BD7428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22144
	ctx.r3.s64 = ctx.r11.s64 + 22144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7434"))) PPC_WEAK_FUNC(sub_83BD7434);
PPC_FUNC_IMPL(__imp__sub_83BD7434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7438"))) PPC_WEAK_FUNC(sub_83BD7438);
PPC_FUNC_IMPL(__imp__sub_83BD7438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22152
	ctx.r3.s64 = ctx.r11.s64 + 22152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7444"))) PPC_WEAK_FUNC(sub_83BD7444);
PPC_FUNC_IMPL(__imp__sub_83BD7444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7448"))) PPC_WEAK_FUNC(sub_83BD7448);
PPC_FUNC_IMPL(__imp__sub_83BD7448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22160
	ctx.r3.s64 = ctx.r11.s64 + 22160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7454"))) PPC_WEAK_FUNC(sub_83BD7454);
PPC_FUNC_IMPL(__imp__sub_83BD7454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7458"))) PPC_WEAK_FUNC(sub_83BD7458);
PPC_FUNC_IMPL(__imp__sub_83BD7458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22168
	ctx.r3.s64 = ctx.r11.s64 + 22168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7464"))) PPC_WEAK_FUNC(sub_83BD7464);
PPC_FUNC_IMPL(__imp__sub_83BD7464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7468"))) PPC_WEAK_FUNC(sub_83BD7468);
PPC_FUNC_IMPL(__imp__sub_83BD7468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22176
	ctx.r3.s64 = ctx.r11.s64 + 22176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7474"))) PPC_WEAK_FUNC(sub_83BD7474);
PPC_FUNC_IMPL(__imp__sub_83BD7474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7478"))) PPC_WEAK_FUNC(sub_83BD7478);
PPC_FUNC_IMPL(__imp__sub_83BD7478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22184
	ctx.r3.s64 = ctx.r11.s64 + 22184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7484"))) PPC_WEAK_FUNC(sub_83BD7484);
PPC_FUNC_IMPL(__imp__sub_83BD7484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7488"))) PPC_WEAK_FUNC(sub_83BD7488);
PPC_FUNC_IMPL(__imp__sub_83BD7488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22192
	ctx.r3.s64 = ctx.r11.s64 + 22192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7494"))) PPC_WEAK_FUNC(sub_83BD7494);
PPC_FUNC_IMPL(__imp__sub_83BD7494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7498"))) PPC_WEAK_FUNC(sub_83BD7498);
PPC_FUNC_IMPL(__imp__sub_83BD7498) {
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
	// addi r3,r11,31632
	ctx.r3.s64 = ctx.r11.s64 + 31632;
	// bl 0x83523120
	ctx.lr = 0x83BD74B0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,22200
	ctx.r3.s64 = ctx.r10.s64 + 22200;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD74BC;
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

__attribute__((alias("__imp__sub_83BD74CC"))) PPC_WEAK_FUNC(sub_83BD74CC);
PPC_FUNC_IMPL(__imp__sub_83BD74CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD74D0"))) PPC_WEAK_FUNC(sub_83BD74D0);
PPC_FUNC_IMPL(__imp__sub_83BD74D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31648
	ctx.r7.s64 = ctx.r8.s64 + 31648;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31648(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31648);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31648(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31648, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD74F8"))) PPC_WEAK_FUNC(sub_83BD74F8);
PPC_FUNC_IMPL(__imp__sub_83BD74F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,32168
	ctx.r6.s64 = ctx.r7.s64 + 32168;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32096(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32096);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31648(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31648);
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
	// std r9,32168(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32168, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD7540"))) PPC_WEAK_FUNC(sub_83BD7540);
PPC_FUNC_IMPL(__imp__sub_83BD7540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22216
	ctx.r3.s64 = ctx.r11.s64 + 22216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD754C"))) PPC_WEAK_FUNC(sub_83BD754C);
PPC_FUNC_IMPL(__imp__sub_83BD754C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7550"))) PPC_WEAK_FUNC(sub_83BD7550);
PPC_FUNC_IMPL(__imp__sub_83BD7550) {
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
	// addi r3,r11,31656
	ctx.r3.s64 = ctx.r11.s64 + 31656;
	// bl 0x8259af80
	ctx.lr = 0x83BD7568;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,22232
	ctx.r3.s64 = ctx.r10.s64 + 22232;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD7574;
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

__attribute__((alias("__imp__sub_83BD7584"))) PPC_WEAK_FUNC(sub_83BD7584);
PPC_FUNC_IMPL(__imp__sub_83BD7584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7588"))) PPC_WEAK_FUNC(sub_83BD7588);
PPC_FUNC_IMPL(__imp__sub_83BD7588) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31636
	ctx.r11.s64 = ctx.r8.s64 + 31636;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,32144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32144);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22224
	ctx.r3.s64 = ctx.r6.s64 + 22224;
	// stw r10,31636(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31636, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD75B8"))) PPC_WEAK_FUNC(sub_83BD75B8);
PPC_FUNC_IMPL(__imp__sub_83BD75B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22240
	ctx.r3.s64 = ctx.r11.s64 + 22240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD75C4"))) PPC_WEAK_FUNC(sub_83BD75C4);
PPC_FUNC_IMPL(__imp__sub_83BD75C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD75C8"))) PPC_WEAK_FUNC(sub_83BD75C8);
PPC_FUNC_IMPL(__imp__sub_83BD75C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22248
	ctx.r3.s64 = ctx.r11.s64 + 22248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD75D4"))) PPC_WEAK_FUNC(sub_83BD75D4);
PPC_FUNC_IMPL(__imp__sub_83BD75D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD75D8"))) PPC_WEAK_FUNC(sub_83BD75D8);
PPC_FUNC_IMPL(__imp__sub_83BD75D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22256
	ctx.r3.s64 = ctx.r11.s64 + 22256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD75E4"))) PPC_WEAK_FUNC(sub_83BD75E4);
PPC_FUNC_IMPL(__imp__sub_83BD75E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD75E8"))) PPC_WEAK_FUNC(sub_83BD75E8);
PPC_FUNC_IMPL(__imp__sub_83BD75E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22264
	ctx.r3.s64 = ctx.r11.s64 + 22264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD75F4"))) PPC_WEAK_FUNC(sub_83BD75F4);
PPC_FUNC_IMPL(__imp__sub_83BD75F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD75F8"))) PPC_WEAK_FUNC(sub_83BD75F8);
PPC_FUNC_IMPL(__imp__sub_83BD75F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22272
	ctx.r3.s64 = ctx.r11.s64 + 22272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7604"))) PPC_WEAK_FUNC(sub_83BD7604);
PPC_FUNC_IMPL(__imp__sub_83BD7604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7608"))) PPC_WEAK_FUNC(sub_83BD7608);
PPC_FUNC_IMPL(__imp__sub_83BD7608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22280
	ctx.r3.s64 = ctx.r11.s64 + 22280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7614"))) PPC_WEAK_FUNC(sub_83BD7614);
PPC_FUNC_IMPL(__imp__sub_83BD7614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7618"))) PPC_WEAK_FUNC(sub_83BD7618);
PPC_FUNC_IMPL(__imp__sub_83BD7618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22288
	ctx.r3.s64 = ctx.r11.s64 + 22288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7624"))) PPC_WEAK_FUNC(sub_83BD7624);
PPC_FUNC_IMPL(__imp__sub_83BD7624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7628"))) PPC_WEAK_FUNC(sub_83BD7628);
PPC_FUNC_IMPL(__imp__sub_83BD7628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22296
	ctx.r3.s64 = ctx.r11.s64 + 22296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7634"))) PPC_WEAK_FUNC(sub_83BD7634);
PPC_FUNC_IMPL(__imp__sub_83BD7634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7638"))) PPC_WEAK_FUNC(sub_83BD7638);
PPC_FUNC_IMPL(__imp__sub_83BD7638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22304
	ctx.r3.s64 = ctx.r11.s64 + 22304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7644"))) PPC_WEAK_FUNC(sub_83BD7644);
PPC_FUNC_IMPL(__imp__sub_83BD7644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7648"))) PPC_WEAK_FUNC(sub_83BD7648);
PPC_FUNC_IMPL(__imp__sub_83BD7648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22312
	ctx.r3.s64 = ctx.r11.s64 + 22312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7654"))) PPC_WEAK_FUNC(sub_83BD7654);
PPC_FUNC_IMPL(__imp__sub_83BD7654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7658"))) PPC_WEAK_FUNC(sub_83BD7658);
PPC_FUNC_IMPL(__imp__sub_83BD7658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22320
	ctx.r3.s64 = ctx.r11.s64 + 22320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7664"))) PPC_WEAK_FUNC(sub_83BD7664);
PPC_FUNC_IMPL(__imp__sub_83BD7664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7668"))) PPC_WEAK_FUNC(sub_83BD7668);
PPC_FUNC_IMPL(__imp__sub_83BD7668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22328
	ctx.r3.s64 = ctx.r11.s64 + 22328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7674"))) PPC_WEAK_FUNC(sub_83BD7674);
PPC_FUNC_IMPL(__imp__sub_83BD7674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7678"))) PPC_WEAK_FUNC(sub_83BD7678);
PPC_FUNC_IMPL(__imp__sub_83BD7678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22336
	ctx.r3.s64 = ctx.r11.s64 + 22336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7684"))) PPC_WEAK_FUNC(sub_83BD7684);
PPC_FUNC_IMPL(__imp__sub_83BD7684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7688"))) PPC_WEAK_FUNC(sub_83BD7688);
PPC_FUNC_IMPL(__imp__sub_83BD7688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22344
	ctx.r3.s64 = ctx.r11.s64 + 22344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7694"))) PPC_WEAK_FUNC(sub_83BD7694);
PPC_FUNC_IMPL(__imp__sub_83BD7694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7698"))) PPC_WEAK_FUNC(sub_83BD7698);
PPC_FUNC_IMPL(__imp__sub_83BD7698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22352
	ctx.r3.s64 = ctx.r11.s64 + 22352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD76A4"))) PPC_WEAK_FUNC(sub_83BD76A4);
PPC_FUNC_IMPL(__imp__sub_83BD76A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD76A8"))) PPC_WEAK_FUNC(sub_83BD76A8);
PPC_FUNC_IMPL(__imp__sub_83BD76A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22360
	ctx.r3.s64 = ctx.r11.s64 + 22360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD76B4"))) PPC_WEAK_FUNC(sub_83BD76B4);
PPC_FUNC_IMPL(__imp__sub_83BD76B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD76B8"))) PPC_WEAK_FUNC(sub_83BD76B8);
PPC_FUNC_IMPL(__imp__sub_83BD76B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22368
	ctx.r3.s64 = ctx.r11.s64 + 22368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD76C4"))) PPC_WEAK_FUNC(sub_83BD76C4);
PPC_FUNC_IMPL(__imp__sub_83BD76C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD76C8"))) PPC_WEAK_FUNC(sub_83BD76C8);
PPC_FUNC_IMPL(__imp__sub_83BD76C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22376
	ctx.r3.s64 = ctx.r11.s64 + 22376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD76D4"))) PPC_WEAK_FUNC(sub_83BD76D4);
PPC_FUNC_IMPL(__imp__sub_83BD76D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD76D8"))) PPC_WEAK_FUNC(sub_83BD76D8);
PPC_FUNC_IMPL(__imp__sub_83BD76D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22384
	ctx.r3.s64 = ctx.r11.s64 + 22384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD76E4"))) PPC_WEAK_FUNC(sub_83BD76E4);
PPC_FUNC_IMPL(__imp__sub_83BD76E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD76E8"))) PPC_WEAK_FUNC(sub_83BD76E8);
PPC_FUNC_IMPL(__imp__sub_83BD76E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22392
	ctx.r3.s64 = ctx.r11.s64 + 22392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD76F4"))) PPC_WEAK_FUNC(sub_83BD76F4);
PPC_FUNC_IMPL(__imp__sub_83BD76F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD76F8"))) PPC_WEAK_FUNC(sub_83BD76F8);
PPC_FUNC_IMPL(__imp__sub_83BD76F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22400
	ctx.r3.s64 = ctx.r11.s64 + 22400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7704"))) PPC_WEAK_FUNC(sub_83BD7704);
PPC_FUNC_IMPL(__imp__sub_83BD7704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7708"))) PPC_WEAK_FUNC(sub_83BD7708);
PPC_FUNC_IMPL(__imp__sub_83BD7708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22408
	ctx.r3.s64 = ctx.r11.s64 + 22408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7714"))) PPC_WEAK_FUNC(sub_83BD7714);
PPC_FUNC_IMPL(__imp__sub_83BD7714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7718"))) PPC_WEAK_FUNC(sub_83BD7718);
PPC_FUNC_IMPL(__imp__sub_83BD7718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22416
	ctx.r3.s64 = ctx.r11.s64 + 22416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7724"))) PPC_WEAK_FUNC(sub_83BD7724);
PPC_FUNC_IMPL(__imp__sub_83BD7724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7728"))) PPC_WEAK_FUNC(sub_83BD7728);
PPC_FUNC_IMPL(__imp__sub_83BD7728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22424
	ctx.r3.s64 = ctx.r11.s64 + 22424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7734"))) PPC_WEAK_FUNC(sub_83BD7734);
PPC_FUNC_IMPL(__imp__sub_83BD7734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7738"))) PPC_WEAK_FUNC(sub_83BD7738);
PPC_FUNC_IMPL(__imp__sub_83BD7738) {
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
	// addi r3,r11,32012
	ctx.r3.s64 = ctx.r11.s64 + 32012;
	// bl 0x83523120
	ctx.lr = 0x83BD7750;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,22432
	ctx.r3.s64 = ctx.r10.s64 + 22432;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD775C;
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

__attribute__((alias("__imp__sub_83BD776C"))) PPC_WEAK_FUNC(sub_83BD776C);
PPC_FUNC_IMPL(__imp__sub_83BD776C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7770"))) PPC_WEAK_FUNC(sub_83BD7770);
PPC_FUNC_IMPL(__imp__sub_83BD7770) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32028
	ctx.r7.s64 = ctx.r8.s64 + 32028;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32028(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32028);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32028(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32028, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD7798"))) PPC_WEAK_FUNC(sub_83BD7798);
PPC_FUNC_IMPL(__imp__sub_83BD7798) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-32764
	ctx.r6.s64 = ctx.r7.s64 + -32764;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32700(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32700);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32028(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32028);
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
	// std r9,-32764(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32764, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD77E0"))) PPC_WEAK_FUNC(sub_83BD77E0);
PPC_FUNC_IMPL(__imp__sub_83BD77E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22448
	ctx.r3.s64 = ctx.r11.s64 + 22448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD77EC"))) PPC_WEAK_FUNC(sub_83BD77EC);
PPC_FUNC_IMPL(__imp__sub_83BD77EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD77F0"))) PPC_WEAK_FUNC(sub_83BD77F0);
PPC_FUNC_IMPL(__imp__sub_83BD77F0) {
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
	// addi r3,r11,32040
	ctx.r3.s64 = ctx.r11.s64 + 32040;
	// bl 0x8259af80
	ctx.lr = 0x83BD7808;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,22464
	ctx.r3.s64 = ctx.r10.s64 + 22464;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD7814;
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

__attribute__((alias("__imp__sub_83BD7824"))) PPC_WEAK_FUNC(sub_83BD7824);
PPC_FUNC_IMPL(__imp__sub_83BD7824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7828"))) PPC_WEAK_FUNC(sub_83BD7828);
PPC_FUNC_IMPL(__imp__sub_83BD7828) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32016
	ctx.r11.s64 = ctx.r8.s64 + 32016;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,32748(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32748);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22456
	ctx.r3.s64 = ctx.r6.s64 + 22456;
	// stw r10,32016(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32016, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7858"))) PPC_WEAK_FUNC(sub_83BD7858);
PPC_FUNC_IMPL(__imp__sub_83BD7858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22472
	ctx.r3.s64 = ctx.r11.s64 + 22472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7864"))) PPC_WEAK_FUNC(sub_83BD7864);
PPC_FUNC_IMPL(__imp__sub_83BD7864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7868"))) PPC_WEAK_FUNC(sub_83BD7868);
PPC_FUNC_IMPL(__imp__sub_83BD7868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22480
	ctx.r3.s64 = ctx.r11.s64 + 22480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7874"))) PPC_WEAK_FUNC(sub_83BD7874);
PPC_FUNC_IMPL(__imp__sub_83BD7874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7878"))) PPC_WEAK_FUNC(sub_83BD7878);
PPC_FUNC_IMPL(__imp__sub_83BD7878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22488
	ctx.r3.s64 = ctx.r11.s64 + 22488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7884"))) PPC_WEAK_FUNC(sub_83BD7884);
PPC_FUNC_IMPL(__imp__sub_83BD7884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7888"))) PPC_WEAK_FUNC(sub_83BD7888);
PPC_FUNC_IMPL(__imp__sub_83BD7888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22496
	ctx.r3.s64 = ctx.r11.s64 + 22496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7894"))) PPC_WEAK_FUNC(sub_83BD7894);
PPC_FUNC_IMPL(__imp__sub_83BD7894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7898"))) PPC_WEAK_FUNC(sub_83BD7898);
PPC_FUNC_IMPL(__imp__sub_83BD7898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22504
	ctx.r3.s64 = ctx.r11.s64 + 22504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

