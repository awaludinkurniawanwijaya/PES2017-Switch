#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82DF1290"))) PPC_WEAK_FUNC(sub_82DF1290);
PPC_FUNC_IMPL(__imp__sub_82DF1290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-4240
	ctx.r10.s64 = ctx.r11.s64 + -4240;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df12e0
	if (cr6.eq) goto loc_82DF12E0;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82cbb278
	ctx.lr = 0x82DF12CC;
	sub_82CBB278(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF12E0;
	sub_825952B8(ctx, base);
loc_82DF12E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF1304"))) PPC_WEAK_FUNC(sub_82DF1304);
PPC_FUNC_IMPL(__imp__sub_82DF1304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF1308"))) PPC_WEAK_FUNC(sub_82DF1308);
PPC_FUNC_IMPL(__imp__sub_82DF1308) {
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
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82df1354
	if (cr6.eq) goto loc_82DF1354;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82df1198
	ctx.lr = 0x82DF133C;
	sub_82DF1198(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82cbb278
	ctx.lr = 0x82DF1350;
	sub_82CBB278(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82DF1354:
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

__attribute__((alias("__imp__sub_82DF136C"))) PPC_WEAK_FUNC(sub_82DF136C);
PPC_FUNC_IMPL(__imp__sub_82DF136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF1370"))) PPC_WEAK_FUNC(sub_82DF1370);
PPC_FUNC_IMPL(__imp__sub_82DF1370) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82cbbb50
	sub_82CBBB50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF1378"))) PPC_WEAK_FUNC(sub_82DF1378);
PPC_FUNC_IMPL(__imp__sub_82DF1378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF1380;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-4240
	ctx.r9.s64 = ctx.r10.s64 + -4240;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82df13dc
	if (cr6.eq) goto loc_82DF13DC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82df1198
	ctx.lr = 0x82DF13C4;
	sub_82DF1198(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82cbb278
	ctx.lr = 0x82DF13D8;
	sub_82CBB278(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82DF13DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF13E8"))) PPC_WEAK_FUNC(sub_82DF13E8);
PPC_FUNC_IMPL(__imp__sub_82DF13E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82df1290
	ctx.lr = 0x82DF1408;
	sub_82DF1290(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df1420
	if (cr6.eq) goto loc_82DF1420;
	// bl 0x82416268
	ctx.lr = 0x82DF141C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DF1420:
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

__attribute__((alias("__imp__sub_82DF1438"))) PPC_WEAK_FUNC(sub_82DF1438);
PPC_FUNC_IMPL(__imp__sub_82DF1438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF1454"))) PPC_WEAK_FUNC(sub_82DF1454);
PPC_FUNC_IMPL(__imp__sub_82DF1454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF1458"))) PPC_WEAK_FUNC(sub_82DF1458);
PPC_FUNC_IMPL(__imp__sub_82DF1458) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// bl 0x83a7d958
	ctx.lr = 0x82DF1488;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DF148C;
	sub_83524138(ctx, base);
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_82DF14A4"))) PPC_WEAK_FUNC(sub_82DF14A4);
PPC_FUNC_IMPL(__imp__sub_82DF14A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF14A8"))) PPC_WEAK_FUNC(sub_82DF14A8);
PPC_FUNC_IMPL(__imp__sub_82DF14A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x82DF14C0;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DF14C4;
	sub_83524138(ctx, base);
	// std r3,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_82DF14DC"))) PPC_WEAK_FUNC(sub_82DF14DC);
PPC_FUNC_IMPL(__imp__sub_82DF14DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF14E0"))) PPC_WEAK_FUNC(sub_82DF14E0);
PPC_FUNC_IMPL(__imp__sub_82DF14E0) {
	PPC_FUNC_PROLOGUE();
	// ld r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF14E8"))) PPC_WEAK_FUNC(sub_82DF14E8);
PPC_FUNC_IMPL(__imp__sub_82DF14E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x82DF1500;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DF1504;
	sub_83524138(ctx, base);
	// std r3,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_82DF151C"))) PPC_WEAK_FUNC(sub_82DF151C);
PPC_FUNC_IMPL(__imp__sub_82DF151C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF1520"))) PPC_WEAK_FUNC(sub_82DF1520);
PPC_FUNC_IMPL(__imp__sub_82DF1520) {
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
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x82DF153C;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DF1540;
	sub_83524138(ctx, base);
	// std r3,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_82DF1558"))) PPC_WEAK_FUNC(sub_82DF1558);
PPC_FUNC_IMPL(__imp__sub_82DF1558) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF1560"))) PPC_WEAK_FUNC(sub_82DF1560);
PPC_FUNC_IMPL(__imp__sub_82DF1560) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a7d958
	ctx.lr = 0x82DF1580;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DF1584;
	sub_83524138(ctx, base);
	// std r3,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r3.u64);
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82DF15A4"))) PPC_WEAK_FUNC(sub_82DF15A4);
PPC_FUNC_IMPL(__imp__sub_82DF15A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF15A8"))) PPC_WEAK_FUNC(sub_82DF15A8);
PPC_FUNC_IMPL(__imp__sub_82DF15A8) {
	PPC_FUNC_PROLOGUE();
	// ld r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 80);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF15B0"))) PPC_WEAK_FUNC(sub_82DF15B0);
PPC_FUNC_IMPL(__imp__sub_82DF15B0) {
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
	// stw r4,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x82DF15CC;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DF15D0;
	sub_83524138(ctx, base);
	// std r3,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_82DF15E8"))) PPC_WEAK_FUNC(sub_82DF15E8);
PPC_FUNC_IMPL(__imp__sub_82DF15E8) {
	PPC_FUNC_PROLOGUE();
	// ld r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 96);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF15F0"))) PPC_WEAK_FUNC(sub_82DF15F0);
PPC_FUNC_IMPL(__imp__sub_82DF15F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF160C"))) PPC_WEAK_FUNC(sub_82DF160C);
PPC_FUNC_IMPL(__imp__sub_82DF160C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF1610"))) PPC_WEAK_FUNC(sub_82DF1610);
PPC_FUNC_IMPL(__imp__sub_82DF1610) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// bl 0x83a7d958
	ctx.lr = 0x82DF1640;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DF1644;
	sub_83524138(ctx, base);
	// std r3,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_82DF165C"))) PPC_WEAK_FUNC(sub_82DF165C);
PPC_FUNC_IMPL(__imp__sub_82DF165C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF1660"))) PPC_WEAK_FUNC(sub_82DF1660);
PPC_FUNC_IMPL(__imp__sub_82DF1660) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF1668"))) PPC_WEAK_FUNC(sub_82DF1668);
PPC_FUNC_IMPL(__imp__sub_82DF1668) {
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
	// stw r4,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x82DF1684;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DF1688;
	sub_83524138(ctx, base);
	// std r3,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_82DF16A0"))) PPC_WEAK_FUNC(sub_82DF16A0);
PPC_FUNC_IMPL(__imp__sub_82DF16A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF16A8"))) PPC_WEAK_FUNC(sub_82DF16A8);
PPC_FUNC_IMPL(__imp__sub_82DF16A8) {
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
	// stw r4,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x82DF16C4;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DF16C8;
	sub_83524138(ctx, base);
	// std r3,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_82DF16E0"))) PPC_WEAK_FUNC(sub_82DF16E0);
PPC_FUNC_IMPL(__imp__sub_82DF16E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF16E8"))) PPC_WEAK_FUNC(sub_82DF16E8);
PPC_FUNC_IMPL(__imp__sub_82DF16E8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,188(r3)
	PPC_STORE_U8(ctx.r3.u32 + 188, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF16F0"))) PPC_WEAK_FUNC(sub_82DF16F0);
PPC_FUNC_IMPL(__imp__sub_82DF16F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r10,r3,116
	ctx.r10.s64 = ctx.r3.s64 + 116;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// std r11,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// std r11,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// std r11,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// std r11,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r11.u64);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r9,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r9.u32);
	// stb r11,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r11.u8);
	// stb r11,113(r3)
	PPC_STORE_U8(ctx.r3.u32 + 113, ctx.r11.u8);
	// stb r11,114(r3)
	PPC_STORE_U8(ctx.r3.u32 + 114, ctx.r11.u8);
	// stb r11,115(r3)
	PPC_STORE_U8(ctx.r3.u32 + 115, ctx.r11.u8);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// lwz r9,136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82df1768
	if (cr6.lt) goto loc_82DF1768;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82DF1768:
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// std r11,144(r3)
	PPC_STORE_U64(ctx.r3.u32 + 144, ctx.r11.u64);
	// stw r9,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r9.u32);
	// std r11,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r11.u64);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// std r11,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r11.u64);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stb r11,188(r3)
	PPC_STORE_U8(ctx.r3.u32 + 188, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF1790"))) PPC_WEAK_FUNC(sub_82DF1790);
PPC_FUNC_IMPL(__imp__sub_82DF1790) {
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
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,-4100
	ctx.r6.s64 = ctx.r7.s64 + -4100;
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r5,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r5.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stb r11,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r11.u8);
	// bl 0x82df16f0
	ctx.lr = 0x82DF17C4;
	sub_82DF16F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF17D4"))) PPC_WEAK_FUNC(sub_82DF17D4);
PPC_FUNC_IMPL(__imp__sub_82DF17D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF17D8"))) PPC_WEAK_FUNC(sub_82DF17D8);
PPC_FUNC_IMPL(__imp__sub_82DF17D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF17E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-4100
	ctx.r10.s64 = ctx.r11.s64 + -4100;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r31,r3,116
	ctx.r31.s64 = ctx.r3.s64 + 116;
	// lwz r9,136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82df181c
	if (cr6.lt) goto loc_82DF181C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF181C;
	sub_825952B8(ctx, base);
loc_82DF181C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df1848
	if (cr6.eq) goto loc_82DF1848;
	// bl 0x82416268
	ctx.lr = 0x82DF1844;
	sub_82416268(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82DF1848:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF1850"))) PPC_WEAK_FUNC(sub_82DF1850);
PPC_FUNC_IMPL(__imp__sub_82DF1850) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,116
	ctx.r4.s64 = ctx.r11.s64 + 116;
	// b 0x8259cb28
	sub_8259CB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF1868"))) PPC_WEAK_FUNC(sub_82DF1868);
PPC_FUNC_IMPL(__imp__sub_82DF1868) {
	PPC_FUNC_PROLOGUE();
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x8259cb28
	sub_8259CB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF1878"))) PPC_WEAK_FUNC(sub_82DF1878);
PPC_FUNC_IMPL(__imp__sub_82DF1878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82df18fc
	if (cr6.eq) goto loc_82DF18FC;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_82DF188C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// beq cr6,0x82df18a0
	if (cr6.eq) goto loc_82DF18A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82df18e4
	goto loc_82DF18E4;
loc_82DF18A0:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// beq cr6,0x82df18b8
	if (cr6.eq) goto loc_82DF18B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82df18e4
	goto loc_82DF18E4;
loc_82DF18B8:
	// lhz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// lhz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// beq cr6,0x82df18d0
	if (cr6.eq) goto loc_82DF18D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82df18e4
	goto loc_82DF18E4;
loc_82DF18D0:
	// lbz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 30);
	// lbz r7,10(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
loc_82DF18E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82df1904
	if (!cr6.eq) goto loc_82DF1904;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82df188c
	if (!cr6.eq) goto loc_82DF188C;
loc_82DF18FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82DF1904:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF190C"))) PPC_WEAK_FUNC(sub_82DF190C);
PPC_FUNC_IMPL(__imp__sub_82DF190C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF1910"))) PPC_WEAK_FUNC(sub_82DF1910);
PPC_FUNC_IMPL(__imp__sub_82DF1910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// addi r9,r3,40
	ctx.r9.s64 = ctx.r3.s64 + 40;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blt cr6,0x82df1960
	if (cr6.lt) goto loc_82DF1960;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82DF1960:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// blt cr6,0x82df1978
	if (cr6.lt) goto loc_82DF1978;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82DF1978:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF1980"))) PPC_WEAK_FUNC(sub_82DF1980);
PPC_FUNC_IMPL(__imp__sub_82DF1980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82df19cc
	if (cr6.eq) goto loc_82DF19CC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x82df19c8
	if (cr6.eq) goto loc_82DF19C8;
loc_82DF19A0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82df19a0
	if (!cr6.eq) goto loc_82DF19A0;
loc_82DF19C8:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_82DF19CC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// sth r10,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r10.u16);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// stb r10,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r10.u8);
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// blt cr6,0x82df1a00
	if (cr6.lt) goto loc_82DF1A00;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82DF1A00:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// blt cr6,0x82df1a20
	if (cr6.lt) goto loc_82DF1A20;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
loc_82DF1A20:
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF1A28"))) PPC_WEAK_FUNC(sub_82DF1A28);
PPC_FUNC_IMPL(__imp__sub_82DF1A28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-3964
	ctx.r10.s64 = ctx.r11.s64 + -3964;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c2bd78
	ctx.lr = 0x82DF1A58;
	sub_82C2BD78(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82df1a74
	if (cr6.eq) goto loc_82DF1A74;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF1A74;
	sub_825952B8(ctx, base);
loc_82DF1A74:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82df1a9c
	if (cr6.eq) goto loc_82DF1A9C;
	// bl 0x82416268
	ctx.lr = 0x82DF1A98;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DF1A9C:
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

__attribute__((alias("__imp__sub_82DF1AB4"))) PPC_WEAK_FUNC(sub_82DF1AB4);
PPC_FUNC_IMPL(__imp__sub_82DF1AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF1AB8"))) PPC_WEAK_FUNC(sub_82DF1AB8);
PPC_FUNC_IMPL(__imp__sub_82DF1AB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-3964
	ctx.r9.s64 = ctx.r10.s64 + -3964;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82df1910
	ctx.lr = 0x82DF1AF0;
	sub_82DF1910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df1980
	ctx.lr = 0x82DF1AF8;
	sub_82DF1980(ctx, base);
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

__attribute__((alias("__imp__sub_82DF1B0C"))) PPC_WEAK_FUNC(sub_82DF1B0C);
PPC_FUNC_IMPL(__imp__sub_82DF1B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF1B10"))) PPC_WEAK_FUNC(sub_82DF1B10);
PPC_FUNC_IMPL(__imp__sub_82DF1B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lbz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 30);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df1b4c
	if (cr6.eq) goto loc_82DF1B4C;
	// bl 0x82df1878
	ctx.lr = 0x82DF1B34;
	sub_82DF1878(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82df1b4c
	if (!cr6.eq) goto loc_82DF1B4C;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82d54828
	ctx.lr = 0x82DF1B4C;
	sub_82D54828(ctx, base);
loc_82DF1B4C:
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

__attribute__((alias("__imp__sub_82DF1B60"))) PPC_WEAK_FUNC(sub_82DF1B60);
PPC_FUNC_IMPL(__imp__sub_82DF1B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// lis r7,-31757
	ctx.r7.s64 = -2081226752;
	// lis r6,-31757
	ctx.r6.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,-23308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23308);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-23320(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23320, ctx.r11.u32);
	// stw r10,-23316(r7)
	PPC_STORE_U32(ctx.r7.u32 + -23316, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,-23312(r6)
	PPC_STORE_U32(ctx.r6.u32 + -23312, ctx.r9.u32);
	// beq cr6,0x82df1bbc
	if (cr6.eq) goto loc_82DF1BBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DF1BB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-23308(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23308, ctx.r11.u32);
loc_82DF1BBC:
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

__attribute__((alias("__imp__sub_82DF1BD0"))) PPC_WEAK_FUNC(sub_82DF1BD0);
PPC_FUNC_IMPL(__imp__sub_82DF1BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82DF1BE0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df1c3c
	if (cr6.eq) goto loc_82DF1C3C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82df1c50
	if (cr6.gt) goto loc_82DF1C50;
	// lis r12,-32033
	ctx.r12.s64 = -2099314688;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,7188
	ctx.r12.s64 = ctx.r12.s64 + 7188;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82DF1C3C;
	case 1:
		goto loc_82DF1C50;
	case 2:
		goto loc_82DF1C3C;
	case 3:
		goto loc_82DF1C50;
	case 4:
		goto loc_82DF1C50;
	case 5:
		goto loc_82DF1C50;
	case 6:
		goto loc_82DF1C3C;
	case 7:
		goto loc_82DF1C3C;
	case 8:
		goto loc_82DF1C3C;
	case 9:
		goto loc_82DF1C3C;
	default:
		return;
	}
	// lwz r22,7228(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
	// lwz r22,7248(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7248);
	// lwz r22,7228(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
	// lwz r22,7248(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7248);
	// lwz r22,7248(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7248);
	// lwz r22,7248(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7248);
	// lwz r22,7228(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
	// lwz r22,7228(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
	// lwz r22,7228(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
	// lwz r22,7228(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
loc_82DF1C3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82DF1C50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF1C64"))) PPC_WEAK_FUNC(sub_82DF1C64);
PPC_FUNC_IMPL(__imp__sub_82DF1C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF1C68"))) PPC_WEAK_FUNC(sub_82DF1C68);
PPC_FUNC_IMPL(__imp__sub_82DF1C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF1C70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31757
	ctx.r29.s64 = -2081226752;
	// lwz r11,-23320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23320);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82df1c88
	if (cr6.eq) goto loc_82DF1C88;
	// bl 0x82df1b60
	ctx.lr = 0x82DF1C88;
	sub_82DF1B60(ctx, base);
loc_82DF1C88:
	// bl 0x82e6f960
	ctx.lr = 0x82DF1C8C;
	sub_82E6F960(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82df1cac
	if (!cr6.eq) goto loc_82DF1CAC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,-23320(r29)
	PPC_STORE_U32(ctx.r29.u32 + -23320, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DF1CAC:
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,-23316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23316);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82df1ce8
	if (cr6.lt) goto loc_82DF1CE8;
	// bne cr6,0x82df1d34
	if (!cr6.eq) goto loc_82DF1D34;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e6fa50
	ctx.lr = 0x82DF1CCC;
	sub_82E6FA50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df1d34
	if (cr6.eq) goto loc_82DF1D34;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,-23320(r29)
	PPC_STORE_U32(ctx.r29.u32 + -23320, ctx.r8.u32);
	// b 0x82df1d24
	goto loc_82DF1D24;
loc_82DF1CE8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e6fa50
	ctx.lr = 0x82DF1CF4;
	sub_82E6FA50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df1d14
	if (cr6.eq) goto loc_82DF1D14;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-23320(r29)
	PPC_STORE_U32(ctx.r29.u32 + -23320, ctx.r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DF1D14:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e6fa38
	ctx.lr = 0x82DF1D20;
	sub_82E6FA38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82DF1D24:
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// stw r11,-23316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23316, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-23312(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23312, ctx.r10.u32);
loc_82DF1D34:
	// lwz r3,-23320(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23320);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF1D40"))) PPC_WEAK_FUNC(sub_82DF1D40);
PPC_FUNC_IMPL(__imp__sub_82DF1D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF1D48;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31757
	ctx.r29.s64 = -2081226752;
	// lwz r11,-23312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23312);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82df1dc8
	if (cr6.lt) goto loc_82DF1DC8;
	// bne cr6,0x82df1e34
	if (!cr6.eq) goto loc_82DF1E34;
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r3,-23308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DF1D78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df1e34
	if (cr6.eq) goto loc_82DF1E34;
	// lwz r3,-23308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r30,108(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DF1D9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subfic r8,r30,0
	xer.ca = ctx.r30.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r30.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r11,-23308(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23308, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r10,-23312(r29)
	PPC_STORE_U32(ctx.r29.u32 + -23312, ctx.r10.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DF1DC8:
	// bl 0x831021a0
	ctx.lr = 0x82DF1DCC;
	sub_831021A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da45f8
	ctx.lr = 0x82DF1DD4;
	sub_82DA45F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31757
	ctx.r30.s64 = -2081226752;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df1e10
	if (cr6.eq) goto loc_82DF1E10;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-3644
	ctx.r4.s64 = ctx.r11.s64 + -3644;
	// bl 0x837b0c10
	ctx.lr = 0x82DF1DF4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82DF1E00;
	sub_82D894E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-23308(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23308, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82DF1E10;
	sub_8387E8E0(ctx, base);
loc_82DF1E10:
	// lwz r11,-23308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23308);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82df1e28
	if (!cr6.eq) goto loc_82DF1E28;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DF1E28:
	// lwz r11,-23312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23312);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-23312(r29)
	PPC_STORE_U32(ctx.r29.u32 + -23312, ctx.r11.u32);
loc_82DF1E34:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF1E40"))) PPC_WEAK_FUNC(sub_82DF1E40);
PPC_FUNC_IMPL(__imp__sub_82DF1E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF1E48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31757
	ctx.r30.s64 = -2081226752;
	// lwz r11,-23320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23320);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82df1e60
	if (cr6.eq) goto loc_82DF1E60;
	// bl 0x82df1b60
	ctx.lr = 0x82DF1E60;
	sub_82DF1B60(ctx, base);
loc_82DF1E60:
	// bl 0x82e6f960
	ctx.lr = 0x82DF1E64;
	sub_82E6F960(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82df1e84
	if (!cr6.eq) goto loc_82DF1E84;
loc_82DF1E70:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,-23320(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23320, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DF1E84:
	// bl 0x82d86078
	ctx.lr = 0x82DF1E88;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df1e70
	if (cr6.eq) goto loc_82DF1E70;
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,-23316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23316);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82df1f60
	if (cr6.lt) goto loc_82DF1F60;
	// beq cr6,0x82df1f10
	if (cr6.eq) goto loc_82DF1F10;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82df1ff8
	if (!cr6.lt) goto loc_82DF1FF8;
	// bl 0x82df1d40
	ctx.lr = 0x82DF1EB0;
	sub_82DF1D40(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82df1ee0
	if (!cr6.eq) goto loc_82DF1EE0;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,-23320(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23320, ctx.r8.u32);
	// stw r11,-23316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23316, ctx.r11.u32);
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r10,-23312(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23312, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DF1EE0:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82df1ff8
	if (!cr6.eq) goto loc_82DF1FF8;
loc_82DF1EE8:
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,-23320(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23320, ctx.r8.u32);
	// stw r11,-23316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23316, ctx.r11.u32);
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r10,-23312(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23312, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DF1F10:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e6fa20
	ctx.lr = 0x82DF1F1C;
	sub_82E6FA20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82df1ee8
	if (!cr6.eq) goto loc_82DF1EE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e6fa08
	ctx.lr = 0x82DF1F34;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df1ff8
	if (cr6.eq) goto loc_82DF1FF8;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// lwz r3,-23320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23320);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-23316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23316, ctx.r11.u32);
	// stw r10,-23312(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23312, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DF1F60:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e6fa08
	ctx.lr = 0x82DF1F6C;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82df1ff0
	if (!cr6.eq) goto loc_82DF1FF0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e6fa08
	ctx.lr = 0x82DF1F84;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82df1ff0
	if (!cr6.eq) goto loc_82DF1FF0;
	// bl 0x82df1bd0
	ctx.lr = 0x82DF1F94;
	sub_82DF1BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df1fb4
	if (cr6.eq) goto loc_82DF1FB4;
loc_82DF1FA0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-23320(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23320, ctx.r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DF1FB4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e6f9f0
	ctx.lr = 0x82DF1FC4;
	sub_82E6F9F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df1fa0
	if (cr6.eq) goto loc_82DF1FA0;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// lwz r3,-23320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23320);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-23316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23316, ctx.r11.u32);
	// stw r10,-23312(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23312, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DF1FF0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-23320(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23320, ctx.r11.u32);
loc_82DF1FF8:
	// lwz r3,-23320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23320);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF2004"))) PPC_WEAK_FUNC(sub_82DF2004);
PPC_FUNC_IMPL(__imp__sub_82DF2004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF2008"))) PPC_WEAK_FUNC(sub_82DF2008);
PPC_FUNC_IMPL(__imp__sub_82DF2008) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// b 0x82dd2300
	sub_82DD2300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF2010"))) PPC_WEAK_FUNC(sub_82DF2010);
PPC_FUNC_IMPL(__imp__sub_82DF2010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF2018;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,760
	ctx.r4.s64 = 760;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DF2038;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df204c
	if (cr6.eq) goto loc_82DF204C;
	// bl 0x836011d8
	ctx.lr = 0x82DF2044;
	sub_836011D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82df2050
	goto loc_82DF2050;
loc_82DF204C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DF2050:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,680
	ctx.r4.s64 = 680;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82DF2064;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df2078
	if (cr6.eq) goto loc_82DF2078;
	// bl 0x83601698
	ctx.lr = 0x82DF2070;
	sub_83601698(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82df207c
	goto loc_82DF207C;
loc_82DF2078:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82DF207C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DF2094;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF209C"))) PPC_WEAK_FUNC(sub_82DF209C);
PPC_FUNC_IMPL(__imp__sub_82DF209C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF20A0"))) PPC_WEAK_FUNC(sub_82DF20A0);
PPC_FUNC_IMPL(__imp__sub_82DF20A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82df20cc
	if (cr6.eq) goto loc_82DF20CC;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DF20B8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82df20b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DF20B8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_82DF20CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF20D4"))) PPC_WEAK_FUNC(sub_82DF20D4);
PPC_FUNC_IMPL(__imp__sub_82DF20D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF20D8"))) PPC_WEAK_FUNC(sub_82DF20D8);
PPC_FUNC_IMPL(__imp__sub_82DF20D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DF20E8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82df20e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DF20E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF20F8"))) PPC_WEAK_FUNC(sub_82DF20F8);
PPC_FUNC_IMPL(__imp__sub_82DF20F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82df2124
	if (cr6.eq) goto loc_82DF2124;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DF2110:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82df2110
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DF2110;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_82DF2124:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF212C"))) PPC_WEAK_FUNC(sub_82DF212C);
PPC_FUNC_IMPL(__imp__sub_82DF212C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF2130"))) PPC_WEAK_FUNC(sub_82DF2130);
PPC_FUNC_IMPL(__imp__sub_82DF2130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DF2140:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82df2140
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DF2140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF2150"))) PPC_WEAK_FUNC(sub_82DF2150);
PPC_FUNC_IMPL(__imp__sub_82DF2150) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2636
	ctx.r4.s64 = 2636;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DF2180;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df21b4
	if (cr6.eq) goto loc_82DF21B4;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82DF2198;
	sub_82E8BA80(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// addi r10,r11,-3104
	ctx.r10.s64 = ctx.r11.s64 + -3104;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d78670
	ctx.lr = 0x82DF21AC;
	sub_82D78670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82df21b8
	goto loc_82DF21B8;
loc_82DF21B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF21B8:
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

__attribute__((alias("__imp__sub_82DF21D0"))) PPC_WEAK_FUNC(sub_82DF21D0);
PPC_FUNC_IMPL(__imp__sub_82DF21D0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3104
	ctx.r10.s64 = ctx.r11.s64 + -3104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82DF21FC;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df2214
	if (cr6.eq) goto loc_82DF2214;
	// bl 0x82416268
	ctx.lr = 0x82DF2210;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DF2214:
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

__attribute__((alias("__imp__sub_82DF222C"))) PPC_WEAK_FUNC(sub_82DF222C);
PPC_FUNC_IMPL(__imp__sub_82DF222C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF2230"))) PPC_WEAK_FUNC(sub_82DF2230);
PPC_FUNC_IMPL(__imp__sub_82DF2230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82df229c
	if (!cr6.gt) goto loc_82DF229C;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,-2996
	ctx.r8.s64 = ctx.r10.s64 + -2996;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b270
	ctx.lr = 0x82DF228C;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82DF229C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF22B0"))) PPC_WEAK_FUNC(sub_82DF22B0);
PPC_FUNC_IMPL(__imp__sub_82DF22B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82df231c
	if (!cr6.gt) goto loc_82DF231C;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,-2980
	ctx.r8.s64 = ctx.r10.s64 + -2980;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b270
	ctx.lr = 0x82DF230C;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82DF231C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF2330"))) PPC_WEAK_FUNC(sub_82DF2330);
PPC_FUNC_IMPL(__imp__sub_82DF2330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df2340
	if (cr6.lt) goto loc_82DF2340;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82DF2340:
	// b 0x82df2150
	sub_82DF2150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF2344"))) PPC_WEAK_FUNC(sub_82DF2344);
PPC_FUNC_IMPL(__imp__sub_82DF2344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF2348"))) PPC_WEAK_FUNC(sub_82DF2348);
PPC_FUNC_IMPL(__imp__sub_82DF2348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82df2388
	if (cr6.lt) goto loc_82DF2388;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x83051018
	ctx.lr = 0x82DF237C;
	sub_83051018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df23cc
	if (cr6.eq) goto loc_82DF23CC;
loc_82DF2388:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82df23c0
	if (cr0.eq) goto loc_82DF23C0;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DF23B4:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82df23b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DF23B4;
loc_82DF23C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82DF23CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82DF23E8"))) PPC_WEAK_FUNC(sub_82DF23E8);
PPC_FUNC_IMPL(__imp__sub_82DF23E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// addi r31,r4,12
	ctx.r31.s64 = ctx.r4.s64 + 12;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df2410
	if (cr6.lt) goto loc_82DF2410;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82DF2410;
	sub_8386D088(ctx, base);
loc_82DF2410:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82DF2438"))) PPC_WEAK_FUNC(sub_82DF2438);
PPC_FUNC_IMPL(__imp__sub_82DF2438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82DF2440;
	__savegprlr_14(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DF244C;
	sub_82D86078(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82e8bae0
	ctx.lr = 0x82DF2454;
	sub_82E8BAE0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r14,r11,-3494
	ctx.r14.s64 = ctx.r11.s64 + -3494;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r14,266
	ctx.r4.s64 = ctx.r14.s64 + 266;
	// addi r3,r3,344
	ctx.r3.s64 = ctx.r3.s64 + 344;
	// bl 0x824208c8
	ctx.lr = 0x82DF2470;
	sub_824208C8(ctx, base);
	// addi r4,r14,278
	ctx.r4.s64 = ctx.r14.s64 + 278;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r16,316
	ctx.r3.s64 = ctx.r16.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82DF2480;
	sub_824208C8(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82DF2484;
	sub_82D860F0(ctx, base);
	// stw r3,372(r16)
	PPC_STORE_U32(ctx.r16.u32 + 372, ctx.r3.u32);
	// lwz r11,204(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 204);
	// stw r11,724(r16)
	PPC_STORE_U32(ctx.r16.u32 + 724, ctx.r11.u32);
	// lwz r10,204(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 204);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82df24e0
	if (cr6.eq) goto loc_82DF24E0;
	// lbz r11,224(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 224);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82df24e0
	if (!cr6.eq) goto loc_82DF24E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcbe8
	ctx.lr = 0x82DF24B0;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF24B4;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF24BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df24bc
	if (!cr6.eq) goto loc_82DF24BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,728
	ctx.r3.s64 = ctx.r16.s64 + 728;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DF24E0;
	sub_824208C8(ctx, base);
loc_82DF24E0:
	// lwz r11,208(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 208);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82df25d0
	if (cr6.gt) goto loc_82DF25D0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82df2530
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DF2530;
	// bdzf 4*cr6+eq,0x82df25d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DF25D0;
	// bdzf 4*cr6+eq,0x82df2558
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DF2558;
	// bdzf 4*cr6+eq,0x82df2580
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DF2580;
	// bne cr6,0x82df25a8
	if (!cr6.eq) goto loc_82DF25A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fccc8
	ctx.lr = 0x82DF2510;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF2514;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF251C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df251c
	if (!cr6.eq) goto loc_82DF251C;
	// b 0x82df25f4
	goto loc_82DF25F4;
loc_82DF2530:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fccc8
	ctx.lr = 0x82DF2538;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF253C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF2544:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df2544
	if (!cr6.eq) goto loc_82DF2544;
	// b 0x82df25f4
	goto loc_82DF25F4;
loc_82DF2558:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fccc8
	ctx.lr = 0x82DF2560;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF2564;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF256C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df256c
	if (!cr6.eq) goto loc_82DF256C;
	// b 0x82df25f4
	goto loc_82DF25F4;
loc_82DF2580:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fccc8
	ctx.lr = 0x82DF2588;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF258C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF2594:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df2594
	if (!cr6.eq) goto loc_82DF2594;
	// b 0x82df25f4
	goto loc_82DF25F4;
loc_82DF25A8:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fccc8
	ctx.lr = 0x82DF25B0;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF25B4;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF25BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df25bc
	if (!cr6.eq) goto loc_82DF25BC;
	// b 0x82df25f4
	goto loc_82DF25F4;
loc_82DF25D0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fccc8
	ctx.lr = 0x82DF25D8;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF25DC;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF25E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df25e4
	if (!cr6.eq) goto loc_82DF25E4;
loc_82DF25F4:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,376
	ctx.r3.s64 = ctx.r16.s64 + 376;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DF2608;
	sub_824208C8(ctx, base);
	// lwz r3,212(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 212);
	// bl 0x835fbe58
	ctx.lr = 0x82DF2610;
	sub_835FBE58(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF2614;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF261C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df261c
	if (!cr6.eq) goto loc_82DF261C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,404
	ctx.r3.s64 = ctx.r16.s64 + 404;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DF2640;
	sub_824208C8(ctx, base);
	// lwz r10,696(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 696);
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r11,r16,676
	ctx.r11.s64 = ctx.r16.s64 + 676;
	// stw r17,692(r16)
	PPC_STORE_U32(ctx.r16.u32 + 692, ctx.r17.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82df265c
	if (cr6.lt) goto loc_82DF265C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DF265C:
	// stb r17,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r17.u8);
	// lwz r11,220(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 220);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82df2694
	if (!cr6.eq) goto loc_82DF2694;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835f9d18
	ctx.lr = 0x82DF2674;
	sub_835F9D18(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF2678;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF2680:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df2680
	if (!cr6.eq) goto loc_82DF2680;
	// b 0x82df26e8
	goto loc_82DF26E8;
loc_82DF2694:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82df26c4
	if (!cr6.eq) goto loc_82DF26C4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835f9d18
	ctx.lr = 0x82DF26A4;
	sub_835F9D18(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF26A8;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF26B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df26b0
	if (!cr6.eq) goto loc_82DF26B0;
	// b 0x82df26e8
	goto loc_82DF26E8;
loc_82DF26C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9d18
	ctx.lr = 0x82DF26CC;
	sub_835F9D18(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF26D0;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF26D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df26d8
	if (!cr6.eq) goto loc_82DF26D8;
loc_82DF26E8:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,432
	ctx.r3.s64 = ctx.r16.s64 + 432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DF26FC;
	sub_824208C8(ctx, base);
	// lbz r11,226(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 226);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82df2730
	if (!cr6.eq) goto loc_82DF2730;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcbe8
	ctx.lr = 0x82DF2710;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF2714;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF271C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df271c
	if (!cr6.eq) goto loc_82DF271C;
	// b 0x82df2754
	goto loc_82DF2754;
loc_82DF2730:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcbe8
	ctx.lr = 0x82DF2738;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF273C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF2744:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df2744
	if (!cr6.eq) goto loc_82DF2744;
loc_82DF2754:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,460
	ctx.r3.s64 = ctx.r16.s64 + 460;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DF2768;
	sub_824208C8(ctx, base);
	// lbz r11,227(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 227);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82df279c
	if (!cr6.eq) goto loc_82DF279C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcbe8
	ctx.lr = 0x82DF277C;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF2780;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF2788:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df2788
	if (!cr6.eq) goto loc_82DF2788;
	// b 0x82df27c0
	goto loc_82DF27C0;
loc_82DF279C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcbe8
	ctx.lr = 0x82DF27A4;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF27A8;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF27B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df27b0
	if (!cr6.eq) goto loc_82DF27B0;
loc_82DF27C0:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,488
	ctx.r3.s64 = ctx.r16.s64 + 488;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DF27D4;
	sub_824208C8(ctx, base);
	// addi r31,r16,520
	ctx.r31.s64 = ctx.r16.s64 + 520;
	// lis r9,11
	ctx.r9.s64 = 720896;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// addi r24,r16,536
	ctx.r24.s64 = ctx.r16.s64 + 536;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r29,r18,232
	ctx.r29.s64 = ctx.r18.s64 + 232;
	// addi r28,r18,228
	ctx.r28.s64 = ctx.r18.s64 + 228;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r23,4
	ctx.r23.s64 = 4;
	// ori r21,r9,1
	ctx.r21.u64 = ctx.r9.u64 | 1;
	// li r15,1
	ctx.r15.s64 = 1;
	// addi r22,r11,8980
	ctx.r22.s64 = ctx.r11.s64 + 8980;
	// addi r26,r10,26164
	ctx.r26.s64 = ctx.r10.s64 + 26164;
loc_82DF280C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82df2870
	if (cr6.lt) goto loc_82DF2870;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82df2860
	if (!cr6.gt) goto loc_82DF2860;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r23,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x8247b270
	ctx.lr = 0x82DF2858;
	sub_8247B270(ctx, base);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// b 0x82df2864
	goto loc_82DF2864;
loc_82DF2860:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_82DF2864:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df2894
	if (cr6.eq) goto loc_82DF2894;
loc_82DF2870:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82df2888
	if (cr0.eq) goto loc_82DF2888;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82DF2888:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82DF2894:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwzu r7,20(r29)
	ea = 20 + ctx.r29.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// bl 0x82df2348
	ctx.lr = 0x82DF28C8;
	sub_82DF2348(ctx, base);
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82df280c
	if (!cr0.eq) goto loc_82DF280C;
	// lwz r11,2120(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2120);
	// li r19,15
	ctx.r19.s64 = 15;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// li r20,8
	ctx.r20.s64 = 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82df2a7c
	if (!cr6.gt) goto loc_82DF2A7C;
	// addi r31,r16,632
	ctx.r31.s64 = ctx.r16.s64 + 632;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r30,r18,2128
	ctx.r30.s64 = ctx.r18.s64 + 2128;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// li r27,40
	ctx.r27.s64 = 40;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r28,r11,-2980
	ctx.r28.s64 = ctx.r11.s64 + -2980;
	// addi r25,r10,27936
	ctx.r25.s64 = ctx.r10.s64 + 27936;
loc_82DF2910:
	// stw r17,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r17,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r17,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r17.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// stw r19,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r19.u32);
	// stw r17,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r17.u32);
	// stb r17,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r17.u8);
	// bl 0x824208c8
	ctx.lr = 0x82DF2938;
	sub_824208C8(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// bl 0x835fbad8
	ctx.lr = 0x82DF2950;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF2954;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF295C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df295c
	if (!cr6.eq) goto loc_82DF295C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DF2980;
	sub_824208C8(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82df29e8
	if (cr6.lt) goto loc_82DF29E8;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82df29d8
	if (!cr6.gt) goto loc_82DF29D8;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// stw r29,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r29.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r20,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r20.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r27,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r27.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x8247b270
	ctx.lr = 0x82DF29D0;
	sub_8247B270(ctx, base);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// b 0x82df29dc
	goto loc_82DF29DC;
loc_82DF29D8:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_82DF29DC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df2a48
	if (cr6.eq) goto loc_82DF2A48;
loc_82DF29E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82df2a3c
	if (cr0.eq) goto loc_82DF2A3C;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r19,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r19.u32);
	// stw r17,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r17.u32);
	// stb r17,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r17.u8);
	// bl 0x82420558
	ctx.lr = 0x82DF2A3C;
	sub_82420558(ctx, base);
loc_82DF2A3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82DF2A48:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df2a5c
	if (cr6.lt) goto loc_82DF2A5C;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x8386d088
	ctx.lr = 0x82DF2A5C;
	sub_8386D088(ctx, base);
loc_82DF2A5C:
	// lwz r11,2120(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2120);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r19,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r19.u32);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// stw r17,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r17.u32);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// stb r17,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r17.u8);
	// blt cr6,0x82df2910
	if (cr6.lt) goto loc_82DF2910;
loc_82DF2A7C:
	// lwz r10,276(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 276);
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// addi r27,r11,26164
	ctx.r27.s64 = ctx.r11.s64 + 26164;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82df2b3c
	if (!cr6.gt) goto loc_82DF2B3C;
	// addi r31,r16,552
	ctx.r31.s64 = ctx.r16.s64 + 552;
	// addi r29,r18,280
	ctx.r29.s64 = ctx.r18.s64 + 280;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_82DF2AA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82df2b00
	if (cr6.lt) goto loc_82DF2B00;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82df2af0
	if (!cr6.gt) goto loc_82DF2AF0;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r23,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r23.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r23,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r23.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// bl 0x8247b270
	ctx.lr = 0x82DF2AE8;
	sub_8247B270(ctx, base);
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// b 0x82df2af4
	goto loc_82DF2AF4;
loc_82DF2AF0:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_82DF2AF4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df2b28
	if (cr6.eq) goto loc_82DF2B28;
loc_82DF2B00:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82df2b1c
	if (cr0.eq) goto loc_82DF2B1C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82DF2B1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82DF2B28:
	// lwz r11,276(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 276);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x82df2aa0
	if (cr6.lt) goto loc_82DF2AA0;
loc_82DF2B3C:
	// lwz r11,680(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 680);
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82df2bf4
	if (!cr6.gt) goto loc_82DF2BF4;
	// addi r31,r16,568
	ctx.r31.s64 = ctx.r16.s64 + 568;
	// addi r29,r18,684
	ctx.r29.s64 = ctx.r18.s64 + 684;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_82DF2B58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82df2bb8
	if (cr6.lt) goto loc_82DF2BB8;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82df2ba8
	if (!cr6.gt) goto loc_82DF2BA8;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r30.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r23,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r23.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r23,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r23.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// bl 0x8247b270
	ctx.lr = 0x82DF2BA0;
	sub_8247B270(ctx, base);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// b 0x82df2bac
	goto loc_82DF2BAC;
loc_82DF2BA8:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_82DF2BAC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df2be0
	if (cr6.eq) goto loc_82DF2BE0;
loc_82DF2BB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82df2bd4
	if (cr0.eq) goto loc_82DF2BD4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82DF2BD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82DF2BE0:
	// lwz r11,680(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 680);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x82df2b58
	if (cr6.lt) goto loc_82DF2B58;
loc_82DF2BF4:
	// lwz r11,1084(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1084);
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82df2cac
	if (!cr6.gt) goto loc_82DF2CAC;
	// addi r31,r16,584
	ctx.r31.s64 = ctx.r16.s64 + 584;
	// addi r29,r18,1088
	ctx.r29.s64 = ctx.r18.s64 + 1088;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_82DF2C10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82df2c70
	if (cr6.lt) goto loc_82DF2C70;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82df2c60
	if (!cr6.gt) goto loc_82DF2C60;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r23,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r23.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r23,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r23.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x8247b270
	ctx.lr = 0x82DF2C58;
	sub_8247B270(ctx, base);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// b 0x82df2c64
	goto loc_82DF2C64;
loc_82DF2C60:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_82DF2C64:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df2c98
	if (cr6.eq) goto loc_82DF2C98;
loc_82DF2C70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82df2c8c
	if (cr0.eq) goto loc_82DF2C8C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82DF2C8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82DF2C98:
	// lwz r11,1084(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1084);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x82df2c10
	if (cr6.lt) goto loc_82DF2C10;
loc_82DF2CAC:
	// lwz r11,1216(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1216);
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82df2d64
	if (!cr6.gt) goto loc_82DF2D64;
	// addi r31,r16,600
	ctx.r31.s64 = ctx.r16.s64 + 600;
	// addi r29,r18,1220
	ctx.r29.s64 = ctx.r18.s64 + 1220;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_82DF2CC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82df2d28
	if (cr6.lt) goto loc_82DF2D28;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82df2d18
	if (!cr6.gt) goto loc_82DF2D18;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r23,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r23.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r23,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x8247b270
	ctx.lr = 0x82DF2D10;
	sub_8247B270(ctx, base);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// b 0x82df2d1c
	goto loc_82DF2D1C;
loc_82DF2D18:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_82DF2D1C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df2d50
	if (cr6.eq) goto loc_82DF2D50;
loc_82DF2D28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82df2d44
	if (cr0.eq) goto loc_82DF2D44;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82DF2D44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82DF2D50:
	// lwz r11,1216(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1216);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x82df2cc8
	if (cr6.lt) goto loc_82DF2CC8;
loc_82DF2D64:
	// lwz r11,1348(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1348);
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82df2e80
	if (!cr6.gt) goto loc_82DF2E80;
	// addi r31,r16,616
	ctx.r31.s64 = ctx.r16.s64 + 616;
	// stw r15,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r15.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r15,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r15.u32);
	// addi r30,r18,1492
	ctx.r30.s64 = ctx.r18.s64 + 1492;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// addi r28,r18,1352
	ctx.r28.s64 = ctx.r18.s64 + 1352;
	// li r26,32
	ctx.r26.s64 = 32;
	// addi r27,r11,-2996
	ctx.r27.s64 = ctx.r11.s64 + -2996;
loc_82DF2D98:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,-12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// blt cr6,0x82df2e28
	if (cr6.lt) goto loc_82DF2E28;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82df2e18
	if (!cr6.gt) goto loc_82DF2E18;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r29,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r29.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r20,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r20.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r26,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r26.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bl 0x8247b270
	ctx.lr = 0x82DF2E10;
	sub_8247B270(ctx, base);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// b 0x82df2e1c
	goto loc_82DF2E1C;
loc_82DF2E18:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_82DF2E1C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df2e68
	if (cr6.eq) goto loc_82DF2E68;
loc_82DF2E28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82df2e5c
	if (cr0.eq) goto loc_82DF2E5C;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mtctr r20
	ctr.u64 = ctx.r20.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
loc_82DF2E50:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82df2e50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DF2E50;
loc_82DF2E5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82DF2E68:
	// lwz r11,1348(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1348);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// blt cr6,0x82df2d98
	if (cr6.lt) goto loc_82DF2D98;
loc_82DF2E80:
	// stw r19,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r19.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r17,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r17.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r17,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r17.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82472fc0
	ctx.lr = 0x82DF2E9C;
	sub_82472FC0(ctx, base);
	// lbz r11,225(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 225);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df2ed0
	if (cr6.eq) goto loc_82DF2ED0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcbe8
	ctx.lr = 0x82DF2EB0;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF2EB4;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF2EBC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df2ebc
	if (!cr6.eq) goto loc_82DF2EBC;
	// b 0x82df2ef4
	goto loc_82DF2EF4;
loc_82DF2ED0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcbe8
	ctx.lr = 0x82DF2ED8;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF2EDC;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF2EE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df2ee4
	if (!cr6.eq) goto loc_82DF2EE4;
loc_82DF2EF4:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,648
	ctx.r3.s64 = ctx.r16.s64 + 648;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DF2F08;
	sub_824208C8(ctx, base);
	// bl 0x82e6e978
	ctx.lr = 0x82DF2F0C;
	sub_82E6E978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df2f5c
	if (cr6.eq) goto loc_82DF2F5C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x83a5f308
	ctx.lr = 0x82DF2F24;
	sub_83A5F308(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e93620
	ctx.lr = 0x82DF2F34;
	sub_82E93620(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,704(r16)
	PPC_STORE_U32(ctx.r16.u32 + 704, ctx.r11.u32);
	// stw r10,708(r16)
	PPC_STORE_U32(ctx.r16.u32 + 708, ctx.r10.u32);
	// stw r9,712(r16)
	PPC_STORE_U32(ctx.r16.u32 + 712, ctx.r9.u32);
	// stw r8,716(r16)
	PPC_STORE_U32(ctx.r16.u32 + 716, ctx.r8.u32);
	// stw r7,720(r16)
	PPC_STORE_U32(ctx.r16.u32 + 720, ctx.r7.u32);
loc_82DF2F5C:
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df2f70
	if (cr6.lt) goto loc_82DF2F70;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x82DF2F70;
	sub_82416268(ctx, base);
loc_82DF2F70:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF2F7C"))) PPC_WEAK_FUNC(sub_82DF2F7C);
PPC_FUNC_IMPL(__imp__sub_82DF2F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF2F80"))) PPC_WEAK_FUNC(sub_82DF2F80);
PPC_FUNC_IMPL(__imp__sub_82DF2F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// b 0x82420558
	sub_82420558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF2FB4"))) PPC_WEAK_FUNC(sub_82DF2FB4);
PPC_FUNC_IMPL(__imp__sub_82DF2FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF2FB8"))) PPC_WEAK_FUNC(sub_82DF2FB8);
PPC_FUNC_IMPL(__imp__sub_82DF2FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82DF2FC0;
	__savegprlr_22(ctx, base);
	// stwu r1,-2288(r1)
	ea = -2288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82DF2FCC;
	sub_82E8BAE8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DF2FD4;
	sub_82D86078(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df35b8
	if (cr6.eq) goto loc_82DF35B8;
	// addi r30,r1,248
	ctx.r30.s64 = ctx.r1.s64 + 248;
	// li r31,21
	ctx.r31.s64 = 21;
loc_82DF2FE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82DF2FF0;
	sub_82DA8D18(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// bge 0x82df2fe8
	if (!cr0.lt) goto loc_82DF2FE8;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82da1c70
	ctx.lr = 0x82DF3004;
	sub_82DA1C70(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r30,r25,652
	ctx.r30.s64 = ctx.r25.s64 + 652;
	// stw r28,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r28.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r26,15
	ctx.r26.s64 = 15;
loc_82DF3020:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df3034
	if (cr6.lt) goto loc_82DF3034;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82df3038
	goto loc_82DF3038;
loc_82DF3034:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82DF3038:
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
loc_82DF3048:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df3048
	if (!cr6.eq) goto loc_82DF3048;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DF306C;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fbe58
	ctx.lr = 0x82DF3074;
	sub_835FBE58(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF3078;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF3080:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df3080
	if (!cr6.eq) goto loc_82DF3080;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82DF30AC;
	sub_827A8810(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82df30e4
	if (cr6.eq) goto loc_82DF30E4;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df30c8
	if (cr6.lt) goto loc_82DF30C8;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8386d088
	ctx.lr = 0x82DF30C8;
	sub_8386D088(ctx, base);
loc_82DF30C8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// cmpwi cr6,r31,31
	cr6.compare<int32_t>(ctx.r31.s32, 31, xer);
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
	// blt cr6,0x82df3020
	if (cr6.lt) goto loc_82DF3020;
	// b 0x82df3104
	goto loc_82DF3104;
loc_82DF30E4:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df30f8
	if (cr6.lt) goto loc_82DF30F8;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8386d088
	ctx.lr = 0x82DF30F8;
	sub_8386D088(ctx, base);
loc_82DF30F8:
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
loc_82DF3104:
	// lwz r11,220(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 220);
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r29,2188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2188, ctx.r29.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82df312c
	if (cr6.lt) goto loc_82DF312C;
	// beq cr6,0x82df3124
	if (cr6.eq) goto loc_82DF3124;
	// stw r27,2184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2184, ctx.r27.u32);
	// b 0x82df3130
	goto loc_82DF3130;
loc_82DF3124:
	// stw r24,2184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2184, ctx.r24.u32);
	// b 0x82df3130
	goto loc_82DF3130;
loc_82DF312C:
	// stw r28,2184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2184, ctx.r28.u32);
loc_82DF3130:
	// lwz r11,352(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 352);
	// addi r4,r25,360
	ctx.r4.s64 = ctx.r25.s64 + 360;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// lwz r10,380(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 380);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82df314c
	if (cr6.lt) goto loc_82DF314C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DF314C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DF3150:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df3150
	if (!cr6.eq) goto loc_82DF3150;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DF3174;
	sub_8259CC28(ctx, base);
	// lwz r10,280(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82df31a0
	if (cr6.eq) goto loc_82DF31A0;
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df31a0
	if (cr6.eq) goto loc_82DF31A0;
	// ld r5,472(r25)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r25.u32 + 472);
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// std r5,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r5.u64);
	// bl 0x82e87a10
	ctx.lr = 0x82DF31A0;
	sub_82E87A10(ctx, base);
loc_82DF31A0:
	// lwz r11,540(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 540);
	// addi r30,r25,512
	ctx.r30.s64 = ctx.r25.s64 + 512;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// lwz r10,544(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 544);
	// stw r10,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// lwz r9,580(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 580);
	// stw r9,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// lwz r8,584(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 584);
	// stw r8,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r8.u32);
	// lwz r7,616(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 616);
	// stw r7,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r7.u32);
loc_82DF31D4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df31e8
	if (cr6.lt) goto loc_82DF31E8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82df31ec
	goto loc_82DF31EC;
loc_82DF31E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82DF31EC:
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
loc_82DF31FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df31fc
	if (!cr6.eq) goto loc_82DF31FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DF3220;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fc018
	ctx.lr = 0x82DF3228;
	sub_835FC018(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF322C;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF3234:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df3234
	if (!cr6.eq) goto loc_82DF3234;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82DF3260;
	sub_827A8810(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82df3298
	if (cr6.eq) goto loc_82DF3298;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df327c
	if (cr6.lt) goto loc_82DF327C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82DF327C;
	sub_8386D088(ctx, base);
loc_82DF327C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(ctx.r31.s32, 10, xer);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// blt cr6,0x82df31d4
	if (cr6.lt) goto loc_82DF31D4;
	// b 0x82df32b8
	goto loc_82DF32B8;
loc_82DF3298:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df32ac
	if (cr6.lt) goto loc_82DF32AC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82DF32AC;
	sub_8386D088(ctx, base);
loc_82DF32AC:
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
loc_82DF32B8:
	// stw r29,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// addi r30,r25,548
	ctx.r30.s64 = ctx.r25.s64 + 548;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82DF32C8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df32dc
	if (cr6.lt) goto loc_82DF32DC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82df32e0
	goto loc_82DF32E0;
loc_82DF32DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82DF32E0:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
loc_82DF32F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df32f0
	if (!cr6.eq) goto loc_82DF32F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DF3314;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fb838
	ctx.lr = 0x82DF331C;
	sub_835FB838(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF3320;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF3328:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df3328
	if (!cr6.eq) goto loc_82DF3328;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82DF3354;
	sub_827A8810(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82df338c
	if (cr6.eq) goto loc_82DF338C;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df3370
	if (cr6.lt) goto loc_82DF3370;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82DF3370;
	sub_8386D088(ctx, base);
loc_82DF3370:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// blt cr6,0x82df32c8
	if (cr6.lt) goto loc_82DF32C8;
	// b 0x82df33ac
	goto loc_82DF33AC;
loc_82DF338C:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df33a0
	if (cr6.lt) goto loc_82DF33A0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82DF33A0;
	sub_8386D088(ctx, base);
loc_82DF33A0:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
loc_82DF33AC:
	// stw r29,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r29.u32);
	// addi r30,r25,588
	ctx.r30.s64 = ctx.r25.s64 + 588;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lwz r11,576(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 576);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
loc_82DF33C4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df33d8
	if (cr6.lt) goto loc_82DF33D8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82df33dc
	goto loc_82DF33DC;
loc_82DF33D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82DF33DC:
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
loc_82DF33EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df33ec
	if (!cr6.eq) goto loc_82DF33EC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DF3410;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fbec8
	ctx.lr = 0x82DF3418;
	sub_835FBEC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF341C;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DF3424:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df3424
	if (!cr6.eq) goto loc_82DF3424;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82DF3450;
	sub_827A8810(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82df3488
	if (cr6.eq) goto loc_82DF3488;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df346c
	if (cr6.lt) goto loc_82DF346C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82DF346C;
	sub_8386D088(ctx, base);
loc_82DF346C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// blt cr6,0x82df33c4
	if (cr6.lt) goto loc_82DF33C4;
	// b 0x82df34a8
	goto loc_82DF34A8;
loc_82DF3488:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df349c
	if (cr6.lt) goto loc_82DF349C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82DF349C;
	sub_8386D088(ctx, base);
loc_82DF349C:
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
loc_82DF34A8:
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// lwz r3,116(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 116);
	// bl 0x8290b4c8
	ctx.lr = 0x82DF34B4;
	sub_8290B4C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82df3524
	if (!cr6.eq) goto loc_82DF3524;
	// lwz r3,116(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82DF34C8;
	sub_831F8200(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcbe8
	ctx.lr = 0x82DF34D4;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DF34D8;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r25,624
	ctx.r3.s64 = ctx.r25.s64 + 624;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82DF34E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df34e4
	if (!cr6.eq) goto loc_82DF34E4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82DF350C;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82d9e3d8
	ctx.lr = 0x82DF3524;
	sub_82D9E3D8(ctx, base);
loc_82DF3524:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// bl 0x82dfa5d0
	ctx.lr = 0x82DF3530;
	sub_82DFA5D0(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,32(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// bl 0x82dfa5c0
	ctx.lr = 0x82DF353C;
	sub_82DFA5C0(ctx, base);
	// lbz r11,112(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df359c
	if (cr6.eq) goto loc_82DF359C;
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r27,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r27.u8);
	// addi r4,r11,-3208
	ctx.r4.s64 = ctx.r11.s64 + -3208;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cc28
	ctx.lr = 0x82DF3568;
	sub_8259CC28(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e88020
	ctx.lr = 0x82DF3574;
	sub_82E88020(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82df3590
	if (cr6.lt) goto loc_82DF3590;
	// stw r24,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r24.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82DF3590;
	sub_825952B8(ctx, base);
loc_82DF3590:
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// stb r27,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r27.u8);
loc_82DF359C:
	// addi r31,r1,2184
	ctx.r31.s64 = ctx.r1.s64 + 2184;
	// li r30,21
	ctx.r30.s64 = 21;
loc_82DF35A4:
	// addi r31,r31,-88
	ctx.r31.s64 = ctx.r31.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8c38
	ctx.lr = 0x82DF35B0;
	sub_82DA8C38(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x82df35a4
	if (!cr0.lt) goto loc_82DF35A4;
loc_82DF35B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2288
	ctx.r1.s64 = ctx.r1.s64 + 2288;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF35C4"))) PPC_WEAK_FUNC(sub_82DF35C4);
PPC_FUNC_IMPL(__imp__sub_82DF35C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF35C8"))) PPC_WEAK_FUNC(sub_82DF35C8);
PPC_FUNC_IMPL(__imp__sub_82DF35C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df3624
	if (cr6.eq) goto loc_82DF3624;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-3200
	ctx.r4.s64 = ctx.r11.s64 + -3200;
	// bl 0x837b0c10
	ctx.lr = 0x82DF35F8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82DF3604;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82df3624
	if (cr6.lt) goto loc_82DF3624;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF3624;
	sub_825952B8(ctx, base);
loc_82DF3624:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF363C"))) PPC_WEAK_FUNC(sub_82DF363C);
PPC_FUNC_IMPL(__imp__sub_82DF363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF3640"))) PPC_WEAK_FUNC(sub_82DF3640);
PPC_FUNC_IMPL(__imp__sub_82DF3640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF3658"))) PPC_WEAK_FUNC(sub_82DF3658);
PPC_FUNC_IMPL(__imp__sub_82DF3658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// lhz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF3670"))) PPC_WEAK_FUNC(sub_82DF3670);
PPC_FUNC_IMPL(__imp__sub_82DF3670) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eabc08
	ctx.lr = 0x82DF368C;
	sub_82EABC08(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,2644
	ctx.r9.s64 = ctx.r10.s64 + 2644;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82DF36C4"))) PPC_WEAK_FUNC(sub_82DF36C4);
PPC_FUNC_IMPL(__imp__sub_82DF36C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF36C8"))) PPC_WEAK_FUNC(sub_82DF36C8);
PPC_FUNC_IMPL(__imp__sub_82DF36C8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF36D0"))) PPC_WEAK_FUNC(sub_82DF36D0);
PPC_FUNC_IMPL(__imp__sub_82DF36D0) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,60
	ctx.r31.s64 = ctx.r3.s64 + 60;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df370c
	if (cr6.lt) goto loc_82DF370C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF370C;
	sub_825952B8(ctx, base);
loc_82DF370C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x82eab8c0
	ctx.lr = 0x82DF3728;
	sub_82EAB8C0(ctx, base);
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

__attribute__((alias("__imp__sub_82DF3740"))) PPC_WEAK_FUNC(sub_82DF3740);
PPC_FUNC_IMPL(__imp__sub_82DF3740) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82df36d0
	ctx.lr = 0x82DF3760;
	sub_82DF36D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df3778
	if (cr6.eq) goto loc_82DF3778;
	// bl 0x82416268
	ctx.lr = 0x82DF3774;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DF3778:
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

__attribute__((alias("__imp__sub_82DF3790"))) PPC_WEAK_FUNC(sub_82DF3790);
PPC_FUNC_IMPL(__imp__sub_82DF3790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82e6e978
	ctx.lr = 0x82DF37A8;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df37ec
	if (cr6.eq) goto loc_82DF37EC;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r4,r11,2552
	ctx.r4.s64 = ctx.r11.s64 + 2552;
	// bl 0x82e80aa8
	ctx.lr = 0x82DF37C0;
	sub_82E80AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df37ec
	if (cr6.eq) goto loc_82DF37EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82DF37D4;
	sub_8259D6C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82DF37EC:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82DF3804"))) PPC_WEAK_FUNC(sub_82DF3804);
PPC_FUNC_IMPL(__imp__sub_82DF3804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF3808"))) PPC_WEAK_FUNC(sub_82DF3808);
PPC_FUNC_IMPL(__imp__sub_82DF3808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DF3810;
	__savegprlr_24(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4992(r1)
	ea = -4992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82DF3820;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df73cc
	if (cr6.eq) goto loc_82DF73CC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a8c428
	ctx.lr = 0x82DF3838;
	sub_82A8C428(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82DF383C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 65536;
	// addi r27,r27,32692
	ctx.r27.s64 = ctx.r27.s64 + 32692;
	// bl 0x82d860f0
	ctx.lr = 0x82DF384C;
	sub_82D860F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF385C;
	sub_82A79BF8(ctx, base);
	// lwz r11,416(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// lwz r9,420(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df387c
	if (cr6.lt) goto loc_82DF387C;
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82416268
	ctx.lr = 0x82DF387C;
	sub_82416268(ctx, base);
loc_82DF387C:
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r26,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r26.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stb r26,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r26.u8);
	// stw r25,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r25.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r31,r11,1364
	ctx.r31.s64 = ctx.r11.s64 + 1364;
	// beq cr6,0x82df38b0
	if (cr6.eq) goto loc_82DF38B0;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF38B0;
	sub_82473550(ctx, base);
loc_82DF38B0:
	// addi r4,r31,-4008
	ctx.r4.s64 = ctx.r31.s64 + -4008;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF38BC;
	sub_82473550(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// bl 0x82473550
	ctx.lr = 0x82DF38C4;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF38CC;
	sub_82474170(ctx, base);
	// stw r26,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r26.u32);
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stw r26,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311f130
	ctx.lr = 0x82DF38E4;
	sub_8311F130(ctx, base);
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r5,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 3;
	// cmplwi cr6,r5,50
	cr6.compare<uint32_t>(ctx.r5.u32, 50, xer);
	// ble cr6,0x82df3be0
	if (!cr6.gt) goto loc_82DF3BE0;
	// lis r11,-32033
	ctx.r11.s64 = -2099314688;
	// addi r6,r11,13888
	ctx.r6.s64 = ctx.r11.s64 + 13888;
	// bl 0x82c85c88
	ctx.lr = 0x82DF3908;
	sub_82C85C88(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3952
	ctx.r3.s64 = ctx.r1.s64 + 3952;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF3914;
	sub_82A79BF8(ctx, base);
	// lwz r11,3968(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3968);
	// addi r3,r1,3952
	ctx.r3.s64 = ctx.r1.s64 + 3952;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF3928;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df3940
	if (cr6.eq) goto loc_82DF3940;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3940;
	sub_82473550(ctx, base);
loc_82DF3940:
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r4,r31,-4000
	ctx.r4.s64 = ctx.r31.s64 + -4000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82473550
	ctx.lr = 0x82DF3954;
	sub_82473550(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x82473550
	ctx.lr = 0x82DF395C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF3964;
	sub_82474170(ctx, base);
	// li r29,8
	ctx.r29.s64 = 8;
	// lis r28,-31775
	ctx.r28.s64 = -2082406400;
loc_82DF396C:
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df3998
	if (!cr6.eq) goto loc_82DF3998;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// lwz r30,-1412(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1412);
	// bl 0x82473550
	ctx.lr = 0x82DF3990;
	sub_82473550(ctx, base);
	// clrlwi r4,r30,14
	ctx.r4.u64 = ctx.r30.u32 & 0x3FFFF;
	// b 0x82df39a8
	goto loc_82DF39A8;
loc_82DF3998:
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82473550
	ctx.lr = 0x82DF39A4;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82DF39A8:
	// bl 0x82474170
	ctx.lr = 0x82DF39AC;
	sub_82474170(ctx, base);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r29,400
	cr6.compare<uint32_t>(ctx.r29.u32, 400, xer);
	// blt cr6,0x82df396c
	if (cr6.lt) goto loc_82DF396C;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF39C4;
	sub_82A79BF8(ctx, base);
	// lwz r11,1728(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1728);
	// lwz r9,1732(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1732);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df39e4
	if (cr6.lt) goto loc_82DF39E4;
	// lwz r3,1712(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1712);
	// bl 0x82416268
	ctx.lr = 0x82DF39E4;
	sub_82416268(ctx, base);
loc_82DF39E4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1732, ctx.r25.u32);
	// stw r26,1728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1728, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1712(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1712, ctx.r26.u8);
	// beq cr6,0x82df3a08
	if (cr6.eq) goto loc_82DF3A08;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3A08;
	sub_82473550(ctx, base);
loc_82DF3A08:
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r4,r31,-3972
	ctx.r4.s64 = ctx.r31.s64 + -3972;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x82473550
	ctx.lr = 0x82DF3A1C;
	sub_82473550(ctx, base);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x82473550
	ctx.lr = 0x82DF3A24;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF3A2C;
	sub_82C1F9F8(ctx, base);
	// li r30,8
	ctx.r30.s64 = 8;
loc_82DF3A30:
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x82473550
	ctx.lr = 0x82DF3A48;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF3A50;
	sub_82C1F9F8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r30,400
	cr6.compare<uint32_t>(ctx.r30.u32, 400, xer);
	// blt cr6,0x82df3a30
	if (cr6.lt) goto loc_82DF3A30;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lis r11,-32033
	ctx.r11.s64 = -2099314688;
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r6,r11,13912
	ctx.r6.s64 = ctx.r11.s64 + 13912;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r5,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 3;
	// bl 0x82c85c88
	ctx.lr = 0x82DF3A78;
	sub_82C85C88(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF3A84;
	sub_82A79BF8(ctx, base);
	// lwz r11,480(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// lwz r8,484(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// subfe r30,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df3aa4
	if (cr6.lt) goto loc_82DF3AA4;
	// lwz r3,464(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x82416268
	ctx.lr = 0x82DF3AA4;
	sub_82416268(ctx, base);
loc_82DF3AA4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r25.u32);
	// stw r26,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r26.u8);
	// beq cr6,0x82df3ac8
	if (cr6.eq) goto loc_82DF3AC8;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3AC8;
	sub_82473550(ctx, base);
loc_82DF3AC8:
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r4,r31,-3940
	ctx.r4.s64 = ctx.r31.s64 + -3940;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82473550
	ctx.lr = 0x82DF3ADC;
	sub_82473550(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// bl 0x82473550
	ctx.lr = 0x82DF3AE4;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF3AEC;
	sub_82474170(ctx, base);
	// li r29,8
	ctx.r29.s64 = 8;
loc_82DF3AF0:
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df3b1c
	if (!cr6.eq) goto loc_82DF3B1C;
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// lwz r30,-1412(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1412);
	// bl 0x82473550
	ctx.lr = 0x82DF3B14;
	sub_82473550(ctx, base);
	// clrlwi r4,r30,14
	ctx.r4.u64 = ctx.r30.u32 & 0x3FFFF;
	// b 0x82df3b2c
	goto loc_82DF3B2C;
loc_82DF3B1C:
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82473550
	ctx.lr = 0x82DF3B28;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82DF3B2C:
	// bl 0x82474170
	ctx.lr = 0x82DF3B30;
	sub_82474170(ctx, base);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r29,400
	cr6.compare<uint32_t>(ctx.r29.u32, 400, xer);
	// blt cr6,0x82df3af0
	if (cr6.lt) goto loc_82DF3AF0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF3B48;
	sub_82A79BF8(ctx, base);
	// lwz r11,1760(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1760);
	// lwz r9,1764(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1764);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df3b68
	if (cr6.lt) goto loc_82DF3B68;
	// lwz r3,1744(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1744);
	// bl 0x82416268
	ctx.lr = 0x82DF3B68;
	sub_82416268(ctx, base);
loc_82DF3B68:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1764, ctx.r25.u32);
	// stw r26,1760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1760, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1744(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1744, ctx.r26.u8);
	// beq cr6,0x82df3b8c
	if (cr6.eq) goto loc_82DF3B8C;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3B8C;
	sub_82473550(ctx, base);
loc_82DF3B8C:
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r4,r31,-3916
	ctx.r4.s64 = ctx.r31.s64 + -3916;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// bl 0x82473550
	ctx.lr = 0x82DF3BA0;
	sub_82473550(ctx, base);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x82473550
	ctx.lr = 0x82DF3BA8;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF3BB0;
	sub_82C1F9F8(ctx, base);
	// li r30,8
	ctx.r30.s64 = 8;
loc_82DF3BB4:
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhz r29,6(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// bl 0x82473550
	ctx.lr = 0x82DF3BCC;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF3BD4;
	sub_82C1F9F8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r30,400
	cr6.compare<uint32_t>(ctx.r30.u32, 400, xer);
	// blt cr6,0x82df3bb4
	if (cr6.lt) goto loc_82DF3BB4;
loc_82DF3BE0:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF3BEC;
	sub_82A79BF8(ctx, base);
	// lwz r11,544(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// lwz r9,548(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df3c0c
	if (cr6.lt) goto loc_82DF3C0C;
	// lwz r3,528(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x82416268
	ctx.lr = 0x82DF3C0C;
	sub_82416268(ctx, base);
loc_82DF3C0C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r25.u32);
	// stw r26,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r26.u8);
	// beq cr6,0x82df3c30
	if (cr6.eq) goto loc_82DF3C30;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3C30;
	sub_82473550(ctx, base);
loc_82DF3C30:
	// addi r29,r27,11576
	ctx.r29.s64 = ctx.r27.s64 + 11576;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311e788
	ctx.lr = 0x82DF3C40;
	sub_8311E788(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,-3892
	ctx.r4.s64 = ctx.r31.s64 + -3892;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3C50;
	sub_82473550(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3C58;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF3C60;
	sub_82C1F9F8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82DF3C64:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311e788
	ctx.lr = 0x82DF3C70;
	sub_8311E788(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3C80;
	sub_82473550(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF3C88;
	sub_82C1F9F8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,13
	cr6.compare<uint32_t>(ctx.r30.u32, 13, xer);
	// blt cr6,0x82df3c64
	if (cr6.lt) goto loc_82DF3C64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2640
	ctx.r3.s64 = ctx.r1.s64 + 2640;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF3CA0;
	sub_82A79BF8(ctx, base);
	// lwz r11,2656(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2656);
	// lwz r9,2660(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2660);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df3cc0
	if (cr6.lt) goto loc_82DF3CC0;
	// lwz r3,2640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2640);
	// bl 0x82416268
	ctx.lr = 0x82DF3CC0;
	sub_82416268(ctx, base);
loc_82DF3CC0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2660, ctx.r25.u32);
	// stw r26,2656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2656, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2640, ctx.r26.u8);
	// beq cr6,0x82df3ce4
	if (cr6.eq) goto loc_82DF3CE4;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3CE4;
	sub_82473550(ctx, base);
loc_82DF3CE4:
	// addi r4,r31,-3860
	ctx.r4.s64 = ctx.r31.s64 + -3860;
	// lbz r30,11602(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11602);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3CF4;
	sub_82473550(ctx, base);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// bl 0x82473550
	ctx.lr = 0x82DF3CFC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF3D04;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF3D10;
	sub_82A79BF8(ctx, base);
	// lwz r11,608(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// lwz r9,612(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df3d30
	if (cr6.lt) goto loc_82DF3D30;
	// lwz r3,592(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// bl 0x82416268
	ctx.lr = 0x82DF3D30;
	sub_82416268(ctx, base);
loc_82DF3D30:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r25.u32);
	// stw r26,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r26.u8);
	// beq cr6,0x82df3d54
	if (cr6.eq) goto loc_82DF3D54;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3D54;
	sub_82473550(ctx, base);
loc_82DF3D54:
	// addi r4,r31,-3832
	ctx.r4.s64 = ctx.r31.s64 + -3832;
	// lbz r30,11603(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11603);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3D64;
	sub_82473550(ctx, base);
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// bl 0x82473550
	ctx.lr = 0x82DF3D6C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF3D74;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF3D80;
	sub_82A79BF8(ctx, base);
	// lwz r11,1824(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1824);
	// lwz r9,1828(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1828);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df3da0
	if (cr6.lt) goto loc_82DF3DA0;
	// lwz r3,1808(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1808);
	// bl 0x82416268
	ctx.lr = 0x82DF3DA0;
	sub_82416268(ctx, base);
loc_82DF3DA0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1828, ctx.r25.u32);
	// stw r26,1824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1824, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1808(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1808, ctx.r26.u8);
	// beq cr6,0x82df3dc4
	if (cr6.eq) goto loc_82DF3DC4;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3DC4;
	sub_82473550(ctx, base);
loc_82DF3DC4:
	// addi r4,r31,-3804
	ctx.r4.s64 = ctx.r31.s64 + -3804;
	// lbz r30,11604(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11604);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3DD4;
	sub_82473550(ctx, base);
	// addi r4,r31,124
	ctx.r4.s64 = ctx.r31.s64 + 124;
	// bl 0x82473550
	ctx.lr = 0x82DF3DDC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF3DE4;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF3DF0;
	sub_82A79BF8(ctx, base);
	// lwz r11,672(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// lwz r9,676(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df3e10
	if (cr6.lt) goto loc_82DF3E10;
	// lwz r3,656(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// bl 0x82416268
	ctx.lr = 0x82DF3E10;
	sub_82416268(ctx, base);
loc_82DF3E10:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r25.u32);
	// stw r26,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r26.u8);
	// beq cr6,0x82df3e34
	if (cr6.eq) goto loc_82DF3E34;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3E34;
	sub_82473550(ctx, base);
loc_82DF3E34:
	// addi r4,r31,-3772
	ctx.r4.s64 = ctx.r31.s64 + -3772;
	// lbz r30,11605(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11605);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3E44;
	sub_82473550(ctx, base);
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// bl 0x82473550
	ctx.lr = 0x82DF3E4C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF3E54;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2384
	ctx.r3.s64 = ctx.r1.s64 + 2384;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF3E60;
	sub_82A79BF8(ctx, base);
	// lwz r11,2400(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2400);
	// lwz r9,2404(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2404);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df3e80
	if (cr6.lt) goto loc_82DF3E80;
	// lwz r3,2384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2384);
	// bl 0x82416268
	ctx.lr = 0x82DF3E80;
	sub_82416268(ctx, base);
loc_82DF3E80:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2404, ctx.r25.u32);
	// stw r26,2400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2400, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2384, ctx.r26.u8);
	// beq cr6,0x82df3ea4
	if (cr6.eq) goto loc_82DF3EA4;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3EA4;
	sub_82473550(ctx, base);
loc_82DF3EA4:
	// addi r4,r31,-3740
	ctx.r4.s64 = ctx.r31.s64 + -3740;
	// lbz r30,11606(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11606);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3EB4;
	sub_82473550(ctx, base);
	// addi r4,r31,140
	ctx.r4.s64 = ctx.r31.s64 + 140;
	// bl 0x82473550
	ctx.lr = 0x82DF3EBC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF3EC4;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF3ED0;
	sub_82A79BF8(ctx, base);
	// lwz r11,736(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// lwz r9,740(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df3ef0
	if (cr6.lt) goto loc_82DF3EF0;
	// lwz r3,720(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// bl 0x82416268
	ctx.lr = 0x82DF3EF0;
	sub_82416268(ctx, base);
loc_82DF3EF0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r25.u32);
	// stw r26,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,720(r1)
	PPC_STORE_U8(ctx.r1.u32 + 720, ctx.r26.u8);
	// beq cr6,0x82df3f14
	if (cr6.eq) goto loc_82DF3F14;
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3F14;
	sub_82473550(ctx, base);
loc_82DF3F14:
	// addi r4,r31,-3708
	ctx.r4.s64 = ctx.r31.s64 + -3708;
	// lbz r30,11607(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11607);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3F24;
	sub_82473550(ctx, base);
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// bl 0x82473550
	ctx.lr = 0x82DF3F2C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF3F34;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF3F40;
	sub_82A79BF8(ctx, base);
	// lwz r11,1888(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1888);
	// lwz r9,1892(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1892);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df3f60
	if (cr6.lt) goto loc_82DF3F60;
	// lwz r3,1872(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1872);
	// bl 0x82416268
	ctx.lr = 0x82DF3F60;
	sub_82416268(ctx, base);
loc_82DF3F60:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1892, ctx.r25.u32);
	// stw r26,1888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1888, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1872(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1872, ctx.r26.u8);
	// beq cr6,0x82df3f84
	if (cr6.eq) goto loc_82DF3F84;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3F84;
	sub_82473550(ctx, base);
loc_82DF3F84:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311e8d0
	ctx.lr = 0x82DF3F90;
	sub_8311E8D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,-3676
	ctx.r4.s64 = ctx.r31.s64 + -3676;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3FA0;
	sub_82473550(ctx, base);
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// bl 0x82473550
	ctx.lr = 0x82DF3FA8;
	sub_82473550(ctx, base);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x82474170
	ctx.lr = 0x82DF3FB0;
	sub_82474170(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82DF3FB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311e8d0
	ctx.lr = 0x82DF3FC0;
	sub_8311E8D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF3FD0;
	sub_82473550(ctx, base);
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// bl 0x82474170
	ctx.lr = 0x82DF3FD8;
	sub_82474170(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,17
	cr6.compare<uint32_t>(ctx.r30.u32, 17, xer);
	// blt cr6,0x82df3fb4
	if (cr6.lt) goto loc_82DF3FB4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF3FF0;
	sub_82A79BF8(ctx, base);
	// lwz r11,800(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// lwz r9,804(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4010
	if (cr6.lt) goto loc_82DF4010;
	// lwz r3,784(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// bl 0x82416268
	ctx.lr = 0x82DF4010;
	sub_82416268(ctx, base);
loc_82DF4010:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r25.u32);
	// stw r26,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,784(r1)
	PPC_STORE_U8(ctx.r1.u32 + 784, ctx.r26.u8);
	// beq cr6,0x82df4034
	if (cr6.eq) goto loc_82DF4034;
	// addi r4,r31,164
	ctx.r4.s64 = ctx.r31.s64 + 164;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4034;
	sub_82473550(ctx, base);
loc_82DF4034:
	// addi r4,r31,-3640
	ctx.r4.s64 = ctx.r31.s64 + -3640;
	// lhz r30,11480(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11480);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4044;
	sub_82473550(ctx, base);
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// bl 0x82473550
	ctx.lr = 0x82DF404C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4054;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2896
	ctx.r3.s64 = ctx.r1.s64 + 2896;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4060;
	sub_82A79BF8(ctx, base);
	// lwz r11,2912(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2912);
	// lwz r9,2916(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2916);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4080
	if (cr6.lt) goto loc_82DF4080;
	// lwz r3,2896(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2896);
	// bl 0x82416268
	ctx.lr = 0x82DF4080;
	sub_82416268(ctx, base);
loc_82DF4080:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2916, ctx.r25.u32);
	// stw r26,2912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2912, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2896, ctx.r26.u8);
	// beq cr6,0x82df40a4
	if (cr6.eq) goto loc_82DF40A4;
	// addi r4,r31,172
	ctx.r4.s64 = ctx.r31.s64 + 172;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF40A4;
	sub_82473550(ctx, base);
loc_82DF40A4:
	// addi r4,r31,-3608
	ctx.r4.s64 = ctx.r31.s64 + -3608;
	// lhz r30,11482(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11482);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF40B4;
	sub_82473550(ctx, base);
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// bl 0x82473550
	ctx.lr = 0x82DF40BC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF40C4;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF40D0;
	sub_82A79BF8(ctx, base);
	// lwz r11,864(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// lwz r9,868(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df40f0
	if (cr6.lt) goto loc_82DF40F0;
	// lwz r3,848(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// bl 0x82416268
	ctx.lr = 0x82DF40F0;
	sub_82416268(ctx, base);
loc_82DF40F0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r25.u32);
	// stw r26,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,848(r1)
	PPC_STORE_U8(ctx.r1.u32 + 848, ctx.r26.u8);
	// beq cr6,0x82df4114
	if (cr6.eq) goto loc_82DF4114;
	// addi r4,r31,180
	ctx.r4.s64 = ctx.r31.s64 + 180;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4114;
	sub_82473550(ctx, base);
loc_82DF4114:
	// addi r4,r31,-3580
	ctx.r4.s64 = ctx.r31.s64 + -3580;
	// lhz r30,11484(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11484);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4124;
	sub_82473550(ctx, base);
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// bl 0x82473550
	ctx.lr = 0x82DF412C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4134;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4140;
	sub_82A79BF8(ctx, base);
	// lwz r11,1952(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1952);
	// lwz r9,1956(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1956);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4160
	if (cr6.lt) goto loc_82DF4160;
	// lwz r3,1936(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1936);
	// bl 0x82416268
	ctx.lr = 0x82DF4160;
	sub_82416268(ctx, base);
loc_82DF4160:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1956, ctx.r25.u32);
	// stw r26,1952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1952, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1936(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1936, ctx.r26.u8);
	// beq cr6,0x82df4184
	if (cr6.eq) goto loc_82DF4184;
	// addi r4,r31,188
	ctx.r4.s64 = ctx.r31.s64 + 188;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4184;
	sub_82473550(ctx, base);
loc_82DF4184:
	// addi r4,r31,-3556
	ctx.r4.s64 = ctx.r31.s64 + -3556;
	// lhz r30,11486(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11486);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4194;
	sub_82473550(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// bl 0x82473550
	ctx.lr = 0x82DF419C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF41A4;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF41B0;
	sub_82A79BF8(ctx, base);
	// lwz r11,928(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// lwz r9,932(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df41d0
	if (cr6.lt) goto loc_82DF41D0;
	// lwz r3,912(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	// bl 0x82416268
	ctx.lr = 0x82DF41D0;
	sub_82416268(ctx, base);
loc_82DF41D0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r25.u32);
	// stw r26,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,912(r1)
	PPC_STORE_U8(ctx.r1.u32 + 912, ctx.r26.u8);
	// beq cr6,0x82df41f4
	if (cr6.eq) goto loc_82DF41F4;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF41F4;
	sub_82473550(ctx, base);
loc_82DF41F4:
	// addi r4,r31,-3524
	ctx.r4.s64 = ctx.r31.s64 + -3524;
	// lhz r30,11488(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11488);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4204;
	sub_82473550(ctx, base);
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// bl 0x82473550
	ctx.lr = 0x82DF420C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4214;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2448
	ctx.r3.s64 = ctx.r1.s64 + 2448;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4220;
	sub_82A79BF8(ctx, base);
	// lwz r11,2464(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2464);
	// lwz r9,2468(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2468);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4240
	if (cr6.lt) goto loc_82DF4240;
	// lwz r3,2448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2448);
	// bl 0x82416268
	ctx.lr = 0x82DF4240;
	sub_82416268(ctx, base);
loc_82DF4240:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2468, ctx.r25.u32);
	// stw r26,2464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2464, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2448, ctx.r26.u8);
	// beq cr6,0x82df4264
	if (cr6.eq) goto loc_82DF4264;
	// addi r4,r31,204
	ctx.r4.s64 = ctx.r31.s64 + 204;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4264;
	sub_82473550(ctx, base);
loc_82DF4264:
	// addi r4,r31,-3488
	ctx.r4.s64 = ctx.r31.s64 + -3488;
	// lhz r30,11490(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11490);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4274;
	sub_82473550(ctx, base);
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// bl 0x82473550
	ctx.lr = 0x82DF427C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4284;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4290;
	sub_82A79BF8(ctx, base);
	// lwz r11,992(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// lwz r9,996(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df42b0
	if (cr6.lt) goto loc_82DF42B0;
	// lwz r3,976(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// bl 0x82416268
	ctx.lr = 0x82DF42B0;
	sub_82416268(ctx, base);
loc_82DF42B0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r25.u32);
	// stw r26,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,976(r1)
	PPC_STORE_U8(ctx.r1.u32 + 976, ctx.r26.u8);
	// beq cr6,0x82df42d4
	if (cr6.eq) goto loc_82DF42D4;
	// addi r4,r31,212
	ctx.r4.s64 = ctx.r31.s64 + 212;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF42D4;
	sub_82473550(ctx, base);
loc_82DF42D4:
	// addi r4,r31,-3452
	ctx.r4.s64 = ctx.r31.s64 + -3452;
	// lhz r30,11492(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11492);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF42E4;
	sub_82473550(ctx, base);
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// bl 0x82473550
	ctx.lr = 0x82DF42EC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF42F4;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4300;
	sub_82A79BF8(ctx, base);
	// lwz r11,2016(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2016);
	// lwz r9,2020(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2020);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4320
	if (cr6.lt) goto loc_82DF4320;
	// lwz r3,2000(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2000);
	// bl 0x82416268
	ctx.lr = 0x82DF4320;
	sub_82416268(ctx, base);
loc_82DF4320:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2020, ctx.r25.u32);
	// stw r26,2016(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2016, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2000(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2000, ctx.r26.u8);
	// beq cr6,0x82df4344
	if (cr6.eq) goto loc_82DF4344;
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4344;
	sub_82473550(ctx, base);
loc_82DF4344:
	// addi r4,r31,-3420
	ctx.r4.s64 = ctx.r31.s64 + -3420;
	// lhz r30,11494(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11494);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4354;
	sub_82473550(ctx, base);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// bl 0x82473550
	ctx.lr = 0x82DF435C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4364;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4370;
	sub_82A79BF8(ctx, base);
	// lwz r11,1056(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1056);
	// lwz r9,1060(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4390
	if (cr6.lt) goto loc_82DF4390;
	// lwz r3,1040(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1040);
	// bl 0x82416268
	ctx.lr = 0x82DF4390;
	sub_82416268(ctx, base);
loc_82DF4390:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r25.u32);
	// stw r26,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1040(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1040, ctx.r26.u8);
	// beq cr6,0x82df43b4
	if (cr6.eq) goto loc_82DF43B4;
	// addi r4,r31,228
	ctx.r4.s64 = ctx.r31.s64 + 228;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF43B4;
	sub_82473550(ctx, base);
loc_82DF43B4:
	// addi r4,r31,-3388
	ctx.r4.s64 = ctx.r31.s64 + -3388;
	// lhz r30,11496(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11496);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF43C4;
	sub_82473550(ctx, base);
	// addi r4,r31,232
	ctx.r4.s64 = ctx.r31.s64 + 232;
	// bl 0x82473550
	ctx.lr = 0x82DF43CC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF43D4;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF43E0;
	sub_82A79BF8(ctx, base);
	// lwz r11,2720(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2720);
	// lwz r9,2724(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2724);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4400
	if (cr6.lt) goto loc_82DF4400;
	// lwz r3,2704(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2704);
	// bl 0x82416268
	ctx.lr = 0x82DF4400;
	sub_82416268(ctx, base);
loc_82DF4400:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2724, ctx.r25.u32);
	// stw r26,2720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2720, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2704, ctx.r26.u8);
	// beq cr6,0x82df4424
	if (cr6.eq) goto loc_82DF4424;
	// addi r4,r31,236
	ctx.r4.s64 = ctx.r31.s64 + 236;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4424;
	sub_82473550(ctx, base);
loc_82DF4424:
	// addi r4,r31,-3364
	ctx.r4.s64 = ctx.r31.s64 + -3364;
	// lhz r30,11498(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11498);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4434;
	sub_82473550(ctx, base);
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// bl 0x82473550
	ctx.lr = 0x82DF443C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4444;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4450;
	sub_82A79BF8(ctx, base);
	// lwz r11,1120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1120);
	// lwz r9,1124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1124);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4470
	if (cr6.lt) goto loc_82DF4470;
	// lwz r3,1104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// bl 0x82416268
	ctx.lr = 0x82DF4470;
	sub_82416268(ctx, base);
loc_82DF4470:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1124, ctx.r25.u32);
	// stw r26,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1104, ctx.r26.u8);
	// beq cr6,0x82df4494
	if (cr6.eq) goto loc_82DF4494;
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4494;
	sub_82473550(ctx, base);
loc_82DF4494:
	// addi r4,r31,-3336
	ctx.r4.s64 = ctx.r31.s64 + -3336;
	// lhz r30,11500(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11500);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF44A4;
	sub_82473550(ctx, base);
	// addi r4,r31,248
	ctx.r4.s64 = ctx.r31.s64 + 248;
	// bl 0x82473550
	ctx.lr = 0x82DF44AC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF44B4;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2064
	ctx.r3.s64 = ctx.r1.s64 + 2064;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF44C0;
	sub_82A79BF8(ctx, base);
	// lwz r11,2080(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2080);
	// lwz r9,2084(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2084);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df44e0
	if (cr6.lt) goto loc_82DF44E0;
	// lwz r3,2064(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2064);
	// bl 0x82416268
	ctx.lr = 0x82DF44E0;
	sub_82416268(ctx, base);
loc_82DF44E0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2084, ctx.r25.u32);
	// stw r26,2080(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2080, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2064(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2064, ctx.r26.u8);
	// beq cr6,0x82df4504
	if (cr6.eq) goto loc_82DF4504;
	// addi r4,r31,252
	ctx.r4.s64 = ctx.r31.s64 + 252;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4504;
	sub_82473550(ctx, base);
loc_82DF4504:
	// addi r4,r31,-3308
	ctx.r4.s64 = ctx.r31.s64 + -3308;
	// lhz r30,11502(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11502);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4514;
	sub_82473550(ctx, base);
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// bl 0x82473550
	ctx.lr = 0x82DF451C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4524;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4530;
	sub_82A79BF8(ctx, base);
	// lwz r11,1184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1184);
	// lwz r9,1188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1188);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4550
	if (cr6.lt) goto loc_82DF4550;
	// lwz r3,1168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1168);
	// bl 0x82416268
	ctx.lr = 0x82DF4550;
	sub_82416268(ctx, base);
loc_82DF4550:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r25.u32);
	// stw r26,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1168, ctx.r26.u8);
	// beq cr6,0x82df4574
	if (cr6.eq) goto loc_82DF4574;
	// addi r4,r31,260
	ctx.r4.s64 = ctx.r31.s64 + 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4574;
	sub_82473550(ctx, base);
loc_82DF4574:
	// addi r4,r31,-3280
	ctx.r4.s64 = ctx.r31.s64 + -3280;
	// lhz r30,11504(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11504);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4584;
	sub_82473550(ctx, base);
	// addi r4,r31,264
	ctx.r4.s64 = ctx.r31.s64 + 264;
	// bl 0x82473550
	ctx.lr = 0x82DF458C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4594;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2512
	ctx.r3.s64 = ctx.r1.s64 + 2512;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF45A0;
	sub_82A79BF8(ctx, base);
	// lwz r11,2528(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2528);
	// lwz r9,2532(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2532);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df45c0
	if (cr6.lt) goto loc_82DF45C0;
	// lwz r3,2512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2512);
	// bl 0x82416268
	ctx.lr = 0x82DF45C0;
	sub_82416268(ctx, base);
loc_82DF45C0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2532, ctx.r25.u32);
	// stw r26,2528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2528, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2512, ctx.r26.u8);
	// beq cr6,0x82df45e4
	if (cr6.eq) goto loc_82DF45E4;
	// addi r4,r31,268
	ctx.r4.s64 = ctx.r31.s64 + 268;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF45E4;
	sub_82473550(ctx, base);
loc_82DF45E4:
	// addi r4,r31,-3252
	ctx.r4.s64 = ctx.r31.s64 + -3252;
	// lbz r30,11506(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11506);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF45F4;
	sub_82473550(ctx, base);
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// bl 0x82473550
	ctx.lr = 0x82DF45FC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF4604;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4610;
	sub_82A79BF8(ctx, base);
	// lwz r11,1248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1248);
	// lwz r9,1252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1252);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4630
	if (cr6.lt) goto loc_82DF4630;
	// lwz r3,1232(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1232);
	// bl 0x82416268
	ctx.lr = 0x82DF4630;
	sub_82416268(ctx, base);
loc_82DF4630:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1252, ctx.r25.u32);
	// stw r26,1248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1248, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1232, ctx.r26.u8);
	// beq cr6,0x82df4654
	if (cr6.eq) goto loc_82DF4654;
	// addi r4,r31,276
	ctx.r4.s64 = ctx.r31.s64 + 276;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4654;
	sub_82473550(ctx, base);
loc_82DF4654:
	// addi r4,r31,-3220
	ctx.r4.s64 = ctx.r31.s64 + -3220;
	// lbz r30,11507(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11507);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4664;
	sub_82473550(ctx, base);
	// addi r4,r31,280
	ctx.r4.s64 = ctx.r31.s64 + 280;
	// bl 0x82473550
	ctx.lr = 0x82DF466C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF4674;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2128
	ctx.r3.s64 = ctx.r1.s64 + 2128;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4680;
	sub_82A79BF8(ctx, base);
	// lwz r11,2144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2144);
	// lwz r9,2148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2148);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df46a0
	if (cr6.lt) goto loc_82DF46A0;
	// lwz r3,2128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2128);
	// bl 0x82416268
	ctx.lr = 0x82DF46A0;
	sub_82416268(ctx, base);
loc_82DF46A0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2148, ctx.r25.u32);
	// stw r26,2144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2144, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2128, ctx.r26.u8);
	// beq cr6,0x82df46c4
	if (cr6.eq) goto loc_82DF46C4;
	// addi r4,r31,284
	ctx.r4.s64 = ctx.r31.s64 + 284;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF46C4;
	sub_82473550(ctx, base);
loc_82DF46C4:
	// addi r4,r31,-3184
	ctx.r4.s64 = ctx.r31.s64 + -3184;
	// lbz r30,11428(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11428);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF46D4;
	sub_82473550(ctx, base);
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x82DF46DC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF46E4;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF46F0;
	sub_82A79BF8(ctx, base);
	// lwz r11,1312(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1312);
	// lwz r9,1316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4710
	if (cr6.lt) goto loc_82DF4710;
	// lwz r3,1296(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1296);
	// bl 0x82416268
	ctx.lr = 0x82DF4710;
	sub_82416268(ctx, base);
loc_82DF4710:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1316, ctx.r25.u32);
	// stw r26,1312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1312, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1296, ctx.r26.u8);
	// beq cr6,0x82df4734
	if (cr6.eq) goto loc_82DF4734;
	// addi r4,r31,292
	ctx.r4.s64 = ctx.r31.s64 + 292;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4734;
	sub_82473550(ctx, base);
loc_82DF4734:
	// addi r4,r31,-3140
	ctx.r4.s64 = ctx.r31.s64 + -3140;
	// lbz r30,11429(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11429);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4744;
	sub_82473550(ctx, base);
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// bl 0x82473550
	ctx.lr = 0x82DF474C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF4754;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2832
	ctx.r3.s64 = ctx.r1.s64 + 2832;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4760;
	sub_82A79BF8(ctx, base);
	// lwz r11,2848(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2848);
	// lwz r9,2852(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2852);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4780
	if (cr6.lt) goto loc_82DF4780;
	// lwz r3,2832(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2832);
	// bl 0x82416268
	ctx.lr = 0x82DF4780;
	sub_82416268(ctx, base);
loc_82DF4780:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2852, ctx.r25.u32);
	// stw r26,2848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2848, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2832, ctx.r26.u8);
	// beq cr6,0x82df47a4
	if (cr6.eq) goto loc_82DF47A4;
	// addi r4,r31,300
	ctx.r4.s64 = ctx.r31.s64 + 300;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF47A4;
	sub_82473550(ctx, base);
loc_82DF47A4:
	// addi r4,r31,-3104
	ctx.r4.s64 = ctx.r31.s64 + -3104;
	// lhz r30,11430(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11430);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF47B4;
	sub_82473550(ctx, base);
	// addi r4,r31,304
	ctx.r4.s64 = ctx.r31.s64 + 304;
	// bl 0x82473550
	ctx.lr = 0x82DF47BC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF47C4;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF47D0;
	sub_82A79BF8(ctx, base);
	// lwz r11,1376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1376);
	// lwz r9,1380(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1380);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df47f0
	if (cr6.lt) goto loc_82DF47F0;
	// lwz r3,1360(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1360);
	// bl 0x82416268
	ctx.lr = 0x82DF47F0;
	sub_82416268(ctx, base);
loc_82DF47F0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1380, ctx.r25.u32);
	// stw r26,1376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1376, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1360(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1360, ctx.r26.u8);
	// beq cr6,0x82df4814
	if (cr6.eq) goto loc_82DF4814;
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4814;
	sub_82473550(ctx, base);
loc_82DF4814:
	// addi r4,r31,-3076
	ctx.r4.s64 = ctx.r31.s64 + -3076;
	// lhz r30,11432(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11432);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4824;
	sub_82473550(ctx, base);
	// addi r4,r31,312
	ctx.r4.s64 = ctx.r31.s64 + 312;
	// bl 0x82473550
	ctx.lr = 0x82DF482C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4834;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2192
	ctx.r3.s64 = ctx.r1.s64 + 2192;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4840;
	sub_82A79BF8(ctx, base);
	// lwz r11,2208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2208);
	// lwz r9,2212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2212);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4860
	if (cr6.lt) goto loc_82DF4860;
	// lwz r3,2192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2192);
	// bl 0x82416268
	ctx.lr = 0x82DF4860;
	sub_82416268(ctx, base);
loc_82DF4860:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2212, ctx.r25.u32);
	// stw r26,2208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2208, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2192, ctx.r26.u8);
	// beq cr6,0x82df4884
	if (cr6.eq) goto loc_82DF4884;
	// addi r4,r31,316
	ctx.r4.s64 = ctx.r31.s64 + 316;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4884;
	sub_82473550(ctx, base);
loc_82DF4884:
	// addi r4,r31,-3048
	ctx.r4.s64 = ctx.r31.s64 + -3048;
	// lhz r30,11434(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11434);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4894;
	sub_82473550(ctx, base);
	// addi r4,r31,320
	ctx.r4.s64 = ctx.r31.s64 + 320;
	// bl 0x82473550
	ctx.lr = 0x82DF489C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF48A4;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF48B0;
	sub_82A79BF8(ctx, base);
	// lwz r11,1440(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1440);
	// lwz r9,1444(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df48d0
	if (cr6.lt) goto loc_82DF48D0;
	// lwz r3,1424(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1424);
	// bl 0x82416268
	ctx.lr = 0x82DF48D0;
	sub_82416268(ctx, base);
loc_82DF48D0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1444, ctx.r25.u32);
	// stw r26,1440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1440, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1424(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1424, ctx.r26.u8);
	// beq cr6,0x82df48f4
	if (cr6.eq) goto loc_82DF48F4;
	// addi r4,r31,324
	ctx.r4.s64 = ctx.r31.s64 + 324;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF48F4;
	sub_82473550(ctx, base);
loc_82DF48F4:
	// addi r4,r31,-3016
	ctx.r4.s64 = ctx.r31.s64 + -3016;
	// lhz r30,11436(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11436);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4904;
	sub_82473550(ctx, base);
	// addi r4,r31,328
	ctx.r4.s64 = ctx.r31.s64 + 328;
	// bl 0x82473550
	ctx.lr = 0x82DF490C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4914;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2576
	ctx.r3.s64 = ctx.r1.s64 + 2576;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4920;
	sub_82A79BF8(ctx, base);
	// lwz r11,2592(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2592);
	// lwz r9,2596(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2596);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4940
	if (cr6.lt) goto loc_82DF4940;
	// lwz r3,2576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2576);
	// bl 0x82416268
	ctx.lr = 0x82DF4940;
	sub_82416268(ctx, base);
loc_82DF4940:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2596, ctx.r25.u32);
	// stw r26,2592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2592, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2576, ctx.r26.u8);
	// beq cr6,0x82df4964
	if (cr6.eq) goto loc_82DF4964;
	// addi r4,r31,332
	ctx.r4.s64 = ctx.r31.s64 + 332;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4964;
	sub_82473550(ctx, base);
loc_82DF4964:
	// addi r4,r31,-2952
	ctx.r4.s64 = ctx.r31.s64 + -2952;
	// lwz r30,11440(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11440);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4974;
	sub_82473550(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// bl 0x82473550
	ctx.lr = 0x82DF497C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF4984;
	sub_82474170(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82DF4988:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bge cr6,0x82df49a4
	if (!cr6.lt) goto loc_82DF49A4;
	// addi r11,r11,2860
	ctx.r11.s64 = ctx.r11.s64 + 2860;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r27
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// b 0x82df49a8
	goto loc_82DF49A8;
loc_82DF49A4:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82DF49A8:
	// addi r4,r31,340
	ctx.r4.s64 = ctx.r31.s64 + 340;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF49B4;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF49BC;
	sub_82474170(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,9
	cr6.compare<uint32_t>(ctx.r30.u32, 9, xer);
	// blt cr6,0x82df4988
	if (cr6.lt) goto loc_82DF4988;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF49D4;
	sub_82A79BF8(ctx, base);
	// lwz r11,1504(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1504);
	// lwz r9,1508(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1508);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df49f4
	if (cr6.lt) goto loc_82DF49F4;
	// lwz r3,1488(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1488);
	// bl 0x82416268
	ctx.lr = 0x82DF49F4;
	sub_82416268(ctx, base);
loc_82DF49F4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1508, ctx.r25.u32);
	// stw r26,1504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1504, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1488(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1488, ctx.r26.u8);
	// beq cr6,0x82df4a18
	if (cr6.eq) goto loc_82DF4A18;
	// addi r4,r31,344
	ctx.r4.s64 = ctx.r31.s64 + 344;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4A18;
	sub_82473550(ctx, base);
loc_82DF4A18:
	// addi r4,r31,-2916
	ctx.r4.s64 = ctx.r31.s64 + -2916;
	// lhz r30,11476(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11476);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4A28;
	sub_82473550(ctx, base);
	// addi r4,r31,348
	ctx.r4.s64 = ctx.r31.s64 + 348;
	// bl 0x82473550
	ctx.lr = 0x82DF4A30;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4A38;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2256
	ctx.r3.s64 = ctx.r1.s64 + 2256;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4A44;
	sub_82A79BF8(ctx, base);
	// lwz r11,2272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2272);
	// lwz r9,2276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2276);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4a64
	if (cr6.lt) goto loc_82DF4A64;
	// lwz r3,2256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2256);
	// bl 0x82416268
	ctx.lr = 0x82DF4A64;
	sub_82416268(ctx, base);
loc_82DF4A64:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2276, ctx.r25.u32);
	// stw r26,2272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2272, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2256, ctx.r26.u8);
	// beq cr6,0x82df4a88
	if (cr6.eq) goto loc_82DF4A88;
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4A88;
	sub_82473550(ctx, base);
loc_82DF4A88:
	// addi r4,r31,-2896
	ctx.r4.s64 = ctx.r31.s64 + -2896;
	// lhz r30,11478(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11478);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4A98;
	sub_82473550(ctx, base);
	// addi r4,r31,356
	ctx.r4.s64 = ctx.r31.s64 + 356;
	// bl 0x82473550
	ctx.lr = 0x82DF4AA0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4AA8;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4AB4;
	sub_82A79BF8(ctx, base);
	// lwz r11,1568(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1568);
	// lwz r9,1572(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4ad4
	if (cr6.lt) goto loc_82DF4AD4;
	// lwz r3,1552(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1552);
	// bl 0x82416268
	ctx.lr = 0x82DF4AD4;
	sub_82416268(ctx, base);
loc_82DF4AD4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r25.u32);
	// stw r26,1568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1568, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1552(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1552, ctx.r26.u8);
	// beq cr6,0x82df4af8
	if (cr6.eq) goto loc_82DF4AF8;
	// addi r4,r31,360
	ctx.r4.s64 = ctx.r31.s64 + 360;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4AF8;
	sub_82473550(ctx, base);
loc_82DF4AF8:
	// addi r4,r31,-2868
	ctx.r4.s64 = ctx.r31.s64 + -2868;
	// lhz r30,11424(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11424);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4B08;
	sub_82473550(ctx, base);
	// addi r4,r31,364
	ctx.r4.s64 = ctx.r31.s64 + 364;
	// bl 0x82473550
	ctx.lr = 0x82DF4B10;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4B18;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2768
	ctx.r3.s64 = ctx.r1.s64 + 2768;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4B24;
	sub_82A79BF8(ctx, base);
	// lwz r11,2784(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2784);
	// lwz r9,2788(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2788);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4b44
	if (cr6.lt) goto loc_82DF4B44;
	// lwz r3,2768(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2768);
	// bl 0x82416268
	ctx.lr = 0x82DF4B44;
	sub_82416268(ctx, base);
loc_82DF4B44:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2788, ctx.r25.u32);
	// stw r26,2784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2784, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2768, ctx.r26.u8);
	// beq cr6,0x82df4b68
	if (cr6.eq) goto loc_82DF4B68;
	// addi r4,r31,368
	ctx.r4.s64 = ctx.r31.s64 + 368;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4B68;
	sub_82473550(ctx, base);
loc_82DF4B68:
	// addi r4,r31,-2844
	ctx.r4.s64 = ctx.r31.s64 + -2844;
	// lhz r30,11426(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11426);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4B78;
	sub_82473550(ctx, base);
	// addi r4,r31,372
	ctx.r4.s64 = ctx.r31.s64 + 372;
	// bl 0x82473550
	ctx.lr = 0x82DF4B80;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4B88;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1616
	ctx.r3.s64 = ctx.r1.s64 + 1616;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4B94;
	sub_82A79BF8(ctx, base);
	// lwz r11,1632(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1632);
	// lwz r9,1636(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1636);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4bb4
	if (cr6.lt) goto loc_82DF4BB4;
	// lwz r3,1616(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1616);
	// bl 0x82416268
	ctx.lr = 0x82DF4BB4;
	sub_82416268(ctx, base);
loc_82DF4BB4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1636, ctx.r25.u32);
	// stw r26,1632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1632, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1616(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1616, ctx.r26.u8);
	// beq cr6,0x82df4bd8
	if (cr6.eq) goto loc_82DF4BD8;
	// addi r4,r31,376
	ctx.r4.s64 = ctx.r31.s64 + 376;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4BD8;
	sub_82473550(ctx, base);
loc_82DF4BD8:
	// addi r4,r31,-2816
	ctx.r4.s64 = ctx.r31.s64 + -2816;
	// lhz r30,11256(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11256);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4BE8;
	sub_82473550(ctx, base);
	// addi r4,r31,380
	ctx.r4.s64 = ctx.r31.s64 + 380;
	// bl 0x82473550
	ctx.lr = 0x82DF4BF0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4BF8;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4C04;
	sub_82A79BF8(ctx, base);
	// lwz r11,1696(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1696);
	// lwz r9,1700(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1700);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4c24
	if (cr6.lt) goto loc_82DF4C24;
	// lwz r3,1680(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1680);
	// bl 0x82416268
	ctx.lr = 0x82DF4C24;
	sub_82416268(ctx, base);
loc_82DF4C24:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1700, ctx.r25.u32);
	// stw r26,1696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1696, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1680(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1680, ctx.r26.u8);
	// beq cr6,0x82df4c48
	if (cr6.eq) goto loc_82DF4C48;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4C48;
	sub_82473550(ctx, base);
loc_82DF4C48:
	// addi r4,r31,-2788
	ctx.r4.s64 = ctx.r31.s64 + -2788;
	// lhz r30,11258(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11258);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4C58;
	sub_82473550(ctx, base);
	// addi r4,r31,388
	ctx.r4.s64 = ctx.r31.s64 + 388;
	// bl 0x82473550
	ctx.lr = 0x82DF4C60;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF4C68;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4C74;
	sub_82A79BF8(ctx, base);
	// lwz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4c94
	if (cr6.lt) goto loc_82DF4C94;
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82416268
	ctx.lr = 0x82DF4C94;
	sub_82416268(ctx, base);
loc_82DF4C94:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r25.u32);
	// stw r26,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r26.u8);
	// beq cr6,0x82df4cb8
	if (cr6.eq) goto loc_82DF4CB8;
	// addi r4,r31,392
	ctx.r4.s64 = ctx.r31.s64 + 392;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4CB8;
	sub_82473550(ctx, base);
loc_82DF4CB8:
	// addi r4,r31,-2764
	ctx.r4.s64 = ctx.r31.s64 + -2764;
	// lbz r30,11260(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11260);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4CC8;
	sub_82473550(ctx, base);
	// addi r4,r31,396
	ctx.r4.s64 = ctx.r31.s64 + 396;
	// bl 0x82473550
	ctx.lr = 0x82DF4CD0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF4CD8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4CE4;
	sub_82A79BF8(ctx, base);
	// lwz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r9,388(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4d04
	if (cr6.lt) goto loc_82DF4D04;
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82416268
	ctx.lr = 0x82DF4D04;
	sub_82416268(ctx, base);
loc_82DF4D04:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r25.u32);
	// stw r26,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r26.u8);
	// beq cr6,0x82df4d28
	if (cr6.eq) goto loc_82DF4D28;
	// addi r4,r31,400
	ctx.r4.s64 = ctx.r31.s64 + 400;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4D28;
	sub_82473550(ctx, base);
loc_82DF4D28:
	// addi r4,r31,-2740
	ctx.r4.s64 = ctx.r31.s64 + -2740;
	// lbz r30,11261(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11261);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4D38;
	sub_82473550(ctx, base);
	// addi r4,r31,404
	ctx.r4.s64 = ctx.r31.s64 + 404;
	// bl 0x82473550
	ctx.lr = 0x82DF4D40;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF4D48;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4D54;
	sub_82A79BF8(ctx, base);
	// lwz r11,448(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// lwz r9,452(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4d74
	if (cr6.lt) goto loc_82DF4D74;
	// lwz r3,432(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x82416268
	ctx.lr = 0x82DF4D74;
	sub_82416268(ctx, base);
loc_82DF4D74:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r25.u32);
	// stw r26,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r26.u8);
	// beq cr6,0x82df4d98
	if (cr6.eq) goto loc_82DF4D98;
	// addi r4,r31,408
	ctx.r4.s64 = ctx.r31.s64 + 408;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4D98;
	sub_82473550(ctx, base);
loc_82DF4D98:
	// addi r4,r31,-2716
	ctx.r4.s64 = ctx.r31.s64 + -2716;
	// lbz r30,11262(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11262);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4DA8;
	sub_82473550(ctx, base);
	// addi r4,r31,412
	ctx.r4.s64 = ctx.r31.s64 + 412;
	// bl 0x82473550
	ctx.lr = 0x82DF4DB0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF4DB8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4DC4;
	sub_82A79BF8(ctx, base);
	// lwz r11,512(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// lwz r9,516(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4de4
	if (cr6.lt) goto loc_82DF4DE4;
	// lwz r3,496(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x82416268
	ctx.lr = 0x82DF4DE4;
	sub_82416268(ctx, base);
loc_82DF4DE4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r25.u32);
	// stw r26,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r26.u8);
	// beq cr6,0x82df4e08
	if (cr6.eq) goto loc_82DF4E08;
	// addi r4,r31,416
	ctx.r4.s64 = ctx.r31.s64 + 416;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4E08;
	sub_82473550(ctx, base);
loc_82DF4E08:
	// addi r4,r31,-2692
	ctx.r4.s64 = ctx.r31.s64 + -2692;
	// lwz r30,11264(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11264);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4E18;
	sub_82473550(ctx, base);
	// addi r4,r31,420
	ctx.r4.s64 = ctx.r31.s64 + 420;
	// bl 0x82473550
	ctx.lr = 0x82DF4E20;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF4E28;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4E34;
	sub_82A79BF8(ctx, base);
	// lwz r11,576(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// lwz r9,580(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4e54
	if (cr6.lt) goto loc_82DF4E54;
	// lwz r3,560(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x82416268
	ctx.lr = 0x82DF4E54;
	sub_82416268(ctx, base);
loc_82DF4E54:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r25.u32);
	// stw r26,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r26.u8);
	// beq cr6,0x82df4e78
	if (cr6.eq) goto loc_82DF4E78;
	// addi r4,r31,424
	ctx.r4.s64 = ctx.r31.s64 + 424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4E78;
	sub_82473550(ctx, base);
loc_82DF4E78:
	// addi r4,r31,-2664
	ctx.r4.s64 = ctx.r31.s64 + -2664;
	// lwz r30,11268(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11268);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4E88;
	sub_82473550(ctx, base);
	// addi r4,r31,428
	ctx.r4.s64 = ctx.r31.s64 + 428;
	// bl 0x82473550
	ctx.lr = 0x82DF4E90;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF4E98;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4EA4;
	sub_82A79BF8(ctx, base);
	// lwz r11,640(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// lwz r9,644(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4ec4
	if (cr6.lt) goto loc_82DF4EC4;
	// lwz r3,624(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// bl 0x82416268
	ctx.lr = 0x82DF4EC4;
	sub_82416268(ctx, base);
loc_82DF4EC4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r25.u32);
	// stw r26,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r26.u8);
	// beq cr6,0x82df4ee8
	if (cr6.eq) goto loc_82DF4EE8;
	// addi r4,r31,432
	ctx.r4.s64 = ctx.r31.s64 + 432;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4EE8;
	sub_82473550(ctx, base);
loc_82DF4EE8:
	// addi r4,r31,-2636
	ctx.r4.s64 = ctx.r31.s64 + -2636;
	// lwz r30,11272(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11272);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4EF8;
	sub_82473550(ctx, base);
	// addi r4,r31,436
	ctx.r4.s64 = ctx.r31.s64 + 436;
	// bl 0x82473550
	ctx.lr = 0x82DF4F00;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF4F08;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4F14;
	sub_82A79BF8(ctx, base);
	// lwz r11,704(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// lwz r9,708(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4f34
	if (cr6.lt) goto loc_82DF4F34;
	// lwz r3,688(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// bl 0x82416268
	ctx.lr = 0x82DF4F34;
	sub_82416268(ctx, base);
loc_82DF4F34:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r25.u32);
	// stw r26,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, ctx.r26.u8);
	// beq cr6,0x82df4f58
	if (cr6.eq) goto loc_82DF4F58;
	// addi r4,r31,440
	ctx.r4.s64 = ctx.r31.s64 + 440;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4F58;
	sub_82473550(ctx, base);
loc_82DF4F58:
	// addi r4,r31,-2612
	ctx.r4.s64 = ctx.r31.s64 + -2612;
	// lwz r30,11276(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11276);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4F68;
	sub_82473550(ctx, base);
	// addi r4,r31,444
	ctx.r4.s64 = ctx.r31.s64 + 444;
	// bl 0x82473550
	ctx.lr = 0x82DF4F70;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF4F78;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4F84;
	sub_82A79BF8(ctx, base);
	// lwz r11,768(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// lwz r9,772(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df4fa4
	if (cr6.lt) goto loc_82DF4FA4;
	// lwz r3,752(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// bl 0x82416268
	ctx.lr = 0x82DF4FA4;
	sub_82416268(ctx, base);
loc_82DF4FA4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r25.u32);
	// stw r26,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,752(r1)
	PPC_STORE_U8(ctx.r1.u32 + 752, ctx.r26.u8);
	// beq cr6,0x82df4fc8
	if (cr6.eq) goto loc_82DF4FC8;
	// addi r4,r31,448
	ctx.r4.s64 = ctx.r31.s64 + 448;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4FC8;
	sub_82473550(ctx, base);
loc_82DF4FC8:
	// addi r4,r31,-2584
	ctx.r4.s64 = ctx.r31.s64 + -2584;
	// lbz r30,11280(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11280);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF4FD8;
	sub_82473550(ctx, base);
	// addi r4,r31,452
	ctx.r4.s64 = ctx.r31.s64 + 452;
	// bl 0x82473550
	ctx.lr = 0x82DF4FE0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF4FE8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF4FF4;
	sub_82A79BF8(ctx, base);
	// lwz r11,832(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// lwz r9,836(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5014
	if (cr6.lt) goto loc_82DF5014;
	// lwz r3,816(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// bl 0x82416268
	ctx.lr = 0x82DF5014;
	sub_82416268(ctx, base);
loc_82DF5014:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r25.u32);
	// stw r26,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,816(r1)
	PPC_STORE_U8(ctx.r1.u32 + 816, ctx.r26.u8);
	// beq cr6,0x82df5038
	if (cr6.eq) goto loc_82DF5038;
	// addi r4,r31,456
	ctx.r4.s64 = ctx.r31.s64 + 456;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5038;
	sub_82473550(ctx, base);
loc_82DF5038:
	// addi r4,r31,-2552
	ctx.r4.s64 = ctx.r31.s64 + -2552;
	// lwz r30,11284(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11284);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5048;
	sub_82473550(ctx, base);
	// addi r4,r31,460
	ctx.r4.s64 = ctx.r31.s64 + 460;
	// bl 0x82473550
	ctx.lr = 0x82DF5050;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5058;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5064;
	sub_82A79BF8(ctx, base);
	// lwz r11,896(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// lwz r9,900(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 900);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5084
	if (cr6.lt) goto loc_82DF5084;
	// lwz r3,880(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	// bl 0x82416268
	ctx.lr = 0x82DF5084;
	sub_82416268(ctx, base);
loc_82DF5084:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r25.u32);
	// stw r26,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,880(r1)
	PPC_STORE_U8(ctx.r1.u32 + 880, ctx.r26.u8);
	// beq cr6,0x82df50a8
	if (cr6.eq) goto loc_82DF50A8;
	// addi r4,r31,464
	ctx.r4.s64 = ctx.r31.s64 + 464;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF50A8;
	sub_82473550(ctx, base);
loc_82DF50A8:
	// addi r4,r31,-2532
	ctx.r4.s64 = ctx.r31.s64 + -2532;
	// lwz r30,11312(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11312);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF50B8;
	sub_82473550(ctx, base);
	// addi r4,r31,468
	ctx.r4.s64 = ctx.r31.s64 + 468;
	// bl 0x82473550
	ctx.lr = 0x82DF50C0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF50C8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF50D4;
	sub_82A79BF8(ctx, base);
	// lwz r11,960(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// lwz r9,964(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 964);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df50f4
	if (cr6.lt) goto loc_82DF50F4;
	// lwz r3,944(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	// bl 0x82416268
	ctx.lr = 0x82DF50F4;
	sub_82416268(ctx, base);
loc_82DF50F4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r25.u32);
	// stw r26,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,944(r1)
	PPC_STORE_U8(ctx.r1.u32 + 944, ctx.r26.u8);
	// beq cr6,0x82df5118
	if (cr6.eq) goto loc_82DF5118;
	// addi r4,r31,472
	ctx.r4.s64 = ctx.r31.s64 + 472;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5118;
	sub_82473550(ctx, base);
loc_82DF5118:
	// addi r4,r31,-2512
	ctx.r4.s64 = ctx.r31.s64 + -2512;
	// lwz r30,11288(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11288);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5128;
	sub_82473550(ctx, base);
	// addi r4,r31,476
	ctx.r4.s64 = ctx.r31.s64 + 476;
	// bl 0x82473550
	ctx.lr = 0x82DF5130;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5138;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5144;
	sub_82A79BF8(ctx, base);
	// lwz r11,1024(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// lwz r9,1028(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1028);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5164
	if (cr6.lt) goto loc_82DF5164;
	// lwz r3,1008(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1008);
	// bl 0x82416268
	ctx.lr = 0x82DF5164;
	sub_82416268(ctx, base);
loc_82DF5164:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, ctx.r25.u32);
	// stw r26,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1008(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1008, ctx.r26.u8);
	// beq cr6,0x82df5188
	if (cr6.eq) goto loc_82DF5188;
	// addi r4,r31,480
	ctx.r4.s64 = ctx.r31.s64 + 480;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5188;
	sub_82473550(ctx, base);
loc_82DF5188:
	// addi r4,r31,-2492
	ctx.r4.s64 = ctx.r31.s64 + -2492;
	// lbz r30,11292(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11292);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5198;
	sub_82473550(ctx, base);
	// addi r4,r31,484
	ctx.r4.s64 = ctx.r31.s64 + 484;
	// bl 0x82473550
	ctx.lr = 0x82DF51A0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF51A8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF51B4;
	sub_82A79BF8(ctx, base);
	// lwz r11,1088(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	// lwz r9,1092(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1092);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df51d4
	if (cr6.lt) goto loc_82DF51D4;
	// lwz r3,1072(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1072);
	// bl 0x82416268
	ctx.lr = 0x82DF51D4;
	sub_82416268(ctx, base);
loc_82DF51D4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r25.u32);
	// stw r26,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1072(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1072, ctx.r26.u8);
	// beq cr6,0x82df51f8
	if (cr6.eq) goto loc_82DF51F8;
	// addi r4,r31,488
	ctx.r4.s64 = ctx.r31.s64 + 488;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF51F8;
	sub_82473550(ctx, base);
loc_82DF51F8:
	// addi r4,r31,-2468
	ctx.r4.s64 = ctx.r31.s64 + -2468;
	// lbz r30,11293(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11293);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5208;
	sub_82473550(ctx, base);
	// addi r4,r31,492
	ctx.r4.s64 = ctx.r31.s64 + 492;
	// bl 0x82473550
	ctx.lr = 0x82DF5210;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5218;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5224;
	sub_82A79BF8(ctx, base);
	// lwz r11,1152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// lwz r9,1156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5244
	if (cr6.lt) goto loc_82DF5244;
	// lwz r3,1136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1136);
	// bl 0x82416268
	ctx.lr = 0x82DF5244;
	sub_82416268(ctx, base);
loc_82DF5244:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r25.u32);
	// stw r26,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1136, ctx.r26.u8);
	// beq cr6,0x82df5268
	if (cr6.eq) goto loc_82DF5268;
	// addi r4,r31,496
	ctx.r4.s64 = ctx.r31.s64 + 496;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5268;
	sub_82473550(ctx, base);
loc_82DF5268:
	// addi r4,r31,-2440
	ctx.r4.s64 = ctx.r31.s64 + -2440;
	// lwz r30,11296(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11296);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5278;
	sub_82473550(ctx, base);
	// addi r4,r31,500
	ctx.r4.s64 = ctx.r31.s64 + 500;
	// bl 0x82473550
	ctx.lr = 0x82DF5280;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5288;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5294;
	sub_82A79BF8(ctx, base);
	// lwz r11,1216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1216);
	// lwz r9,1220(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1220);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df52b4
	if (cr6.lt) goto loc_82DF52B4;
	// lwz r3,1200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	// bl 0x82416268
	ctx.lr = 0x82DF52B4;
	sub_82416268(ctx, base);
loc_82DF52B4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1220, ctx.r25.u32);
	// stw r26,1216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1216, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1200, ctx.r26.u8);
	// beq cr6,0x82df52d8
	if (cr6.eq) goto loc_82DF52D8;
	// addi r4,r31,504
	ctx.r4.s64 = ctx.r31.s64 + 504;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF52D8;
	sub_82473550(ctx, base);
loc_82DF52D8:
	// addi r4,r31,-2416
	ctx.r4.s64 = ctx.r31.s64 + -2416;
	// lwz r30,11300(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11300);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF52E8;
	sub_82473550(ctx, base);
	// addi r4,r31,508
	ctx.r4.s64 = ctx.r31.s64 + 508;
	// bl 0x82473550
	ctx.lr = 0x82DF52F0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF52F8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5304;
	sub_82A79BF8(ctx, base);
	// lwz r11,1280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1280);
	// lwz r9,1284(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1284);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5324
	if (cr6.lt) goto loc_82DF5324;
	// lwz r3,1264(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1264);
	// bl 0x82416268
	ctx.lr = 0x82DF5324;
	sub_82416268(ctx, base);
loc_82DF5324:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1284, ctx.r25.u32);
	// stw r26,1280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1280, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1264, ctx.r26.u8);
	// beq cr6,0x82df5348
	if (cr6.eq) goto loc_82DF5348;
	// addi r4,r31,512
	ctx.r4.s64 = ctx.r31.s64 + 512;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5348;
	sub_82473550(ctx, base);
loc_82DF5348:
	// addi r4,r31,-2392
	ctx.r4.s64 = ctx.r31.s64 + -2392;
	// lwz r30,11304(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11304);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5358;
	sub_82473550(ctx, base);
	// addi r4,r31,516
	ctx.r4.s64 = ctx.r31.s64 + 516;
	// bl 0x82473550
	ctx.lr = 0x82DF5360;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5368;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5374;
	sub_82A79BF8(ctx, base);
	// lwz r11,1344(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1344);
	// lwz r9,1348(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1348);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5394
	if (cr6.lt) goto loc_82DF5394;
	// lwz r3,1328(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1328);
	// bl 0x82416268
	ctx.lr = 0x82DF5394;
	sub_82416268(ctx, base);
loc_82DF5394:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, ctx.r25.u32);
	// stw r26,1344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1344, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1328, ctx.r26.u8);
	// beq cr6,0x82df53b8
	if (cr6.eq) goto loc_82DF53B8;
	// addi r4,r31,520
	ctx.r4.s64 = ctx.r31.s64 + 520;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF53B8;
	sub_82473550(ctx, base);
loc_82DF53B8:
	// addi r4,r31,-2368
	ctx.r4.s64 = ctx.r31.s64 + -2368;
	// lwz r30,11308(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11308);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF53C8;
	sub_82473550(ctx, base);
	// addi r4,r31,524
	ctx.r4.s64 = ctx.r31.s64 + 524;
	// bl 0x82473550
	ctx.lr = 0x82DF53D0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF53D8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF53E4;
	sub_82A79BF8(ctx, base);
	// lwz r11,1408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1408);
	// lwz r9,1412(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1412);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5404
	if (cr6.lt) goto loc_82DF5404;
	// lwz r3,1392(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1392);
	// bl 0x82416268
	ctx.lr = 0x82DF5404;
	sub_82416268(ctx, base);
loc_82DF5404:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1412, ctx.r25.u32);
	// stw r26,1408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1408, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1392(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1392, ctx.r26.u8);
	// beq cr6,0x82df5428
	if (cr6.eq) goto loc_82DF5428;
	// addi r4,r31,528
	ctx.r4.s64 = ctx.r31.s64 + 528;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5428;
	sub_82473550(ctx, base);
loc_82DF5428:
	// addi r4,r31,-2340
	ctx.r4.s64 = ctx.r31.s64 + -2340;
	// lwz r30,11320(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11320);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5438;
	sub_82473550(ctx, base);
	// addi r4,r31,532
	ctx.r4.s64 = ctx.r31.s64 + 532;
	// bl 0x82473550
	ctx.lr = 0x82DF5440;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5448;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5454;
	sub_82A79BF8(ctx, base);
	// lwz r11,1472(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1472);
	// lwz r9,1476(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1476);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5474
	if (cr6.lt) goto loc_82DF5474;
	// lwz r3,1456(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1456);
	// bl 0x82416268
	ctx.lr = 0x82DF5474;
	sub_82416268(ctx, base);
loc_82DF5474:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1476, ctx.r25.u32);
	// stw r26,1472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1472, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1456(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1456, ctx.r26.u8);
	// beq cr6,0x82df5498
	if (cr6.eq) goto loc_82DF5498;
	// addi r4,r31,536
	ctx.r4.s64 = ctx.r31.s64 + 536;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5498;
	sub_82473550(ctx, base);
loc_82DF5498:
	// addi r4,r31,-2316
	ctx.r4.s64 = ctx.r31.s64 + -2316;
	// lwz r30,11336(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11336);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF54A8;
	sub_82473550(ctx, base);
	// addi r4,r31,540
	ctx.r4.s64 = ctx.r31.s64 + 540;
	// bl 0x82473550
	ctx.lr = 0x82DF54B0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF54B8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF54C4;
	sub_82A79BF8(ctx, base);
	// lwz r11,1536(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1536);
	// lwz r9,1540(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1540);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df54e4
	if (cr6.lt) goto loc_82DF54E4;
	// lwz r3,1520(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1520);
	// bl 0x82416268
	ctx.lr = 0x82DF54E4;
	sub_82416268(ctx, base);
loc_82DF54E4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1540, ctx.r25.u32);
	// stw r26,1536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1536, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1520(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1520, ctx.r26.u8);
	// beq cr6,0x82df5508
	if (cr6.eq) goto loc_82DF5508;
	// addi r4,r31,544
	ctx.r4.s64 = ctx.r31.s64 + 544;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5508;
	sub_82473550(ctx, base);
loc_82DF5508:
	// addi r4,r31,-2288
	ctx.r4.s64 = ctx.r31.s64 + -2288;
	// lwz r30,11316(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11316);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5518;
	sub_82473550(ctx, base);
	// addi r4,r31,548
	ctx.r4.s64 = ctx.r31.s64 + 548;
	// bl 0x82473550
	ctx.lr = 0x82DF5520;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5528;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5534;
	sub_82A79BF8(ctx, base);
	// lwz r11,1600(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1600);
	// lwz r9,1604(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1604);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5554
	if (cr6.lt) goto loc_82DF5554;
	// lwz r3,1584(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1584);
	// bl 0x82416268
	ctx.lr = 0x82DF5554;
	sub_82416268(ctx, base);
loc_82DF5554:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1604, ctx.r25.u32);
	// stw r26,1600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1600, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1584(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1584, ctx.r26.u8);
	// beq cr6,0x82df5578
	if (cr6.eq) goto loc_82DF5578;
	// addi r4,r31,552
	ctx.r4.s64 = ctx.r31.s64 + 552;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5578;
	sub_82473550(ctx, base);
loc_82DF5578:
	// addi r4,r31,-2264
	ctx.r4.s64 = ctx.r31.s64 + -2264;
	// lbz r30,11324(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11324);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5588;
	sub_82473550(ctx, base);
	// addi r4,r31,556
	ctx.r4.s64 = ctx.r31.s64 + 556;
	// bl 0x82473550
	ctx.lr = 0x82DF5590;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d745a0
	ctx.lr = 0x82DF5598;
	sub_82D745A0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF55A4;
	sub_82A79BF8(ctx, base);
	// lwz r11,1664(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1664);
	// lwz r9,1668(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1668);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df55c4
	if (cr6.lt) goto loc_82DF55C4;
	// lwz r3,1648(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1648);
	// bl 0x82416268
	ctx.lr = 0x82DF55C4;
	sub_82416268(ctx, base);
loc_82DF55C4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1668, ctx.r25.u32);
	// stw r26,1664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1664, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1648(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1648, ctx.r26.u8);
	// beq cr6,0x82df55e8
	if (cr6.eq) goto loc_82DF55E8;
	// addi r4,r31,560
	ctx.r4.s64 = ctx.r31.s64 + 560;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF55E8;
	sub_82473550(ctx, base);
loc_82DF55E8:
	// addi r4,r31,-2236
	ctx.r4.s64 = ctx.r31.s64 + -2236;
	// lbz r30,11325(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11325);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF55F8;
	sub_82473550(ctx, base);
	// addi r4,r31,564
	ctx.r4.s64 = ctx.r31.s64 + 564;
	// bl 0x82473550
	ctx.lr = 0x82DF5600;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d745a0
	ctx.lr = 0x82DF5608;
	sub_82D745A0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5614;
	sub_82A79BF8(ctx, base);
	// lwz r11,1792(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1792);
	// lwz r9,1796(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1796);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5634
	if (cr6.lt) goto loc_82DF5634;
	// lwz r3,1776(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1776);
	// bl 0x82416268
	ctx.lr = 0x82DF5634;
	sub_82416268(ctx, base);
loc_82DF5634:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1796, ctx.r25.u32);
	// stw r26,1792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1792, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1776(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1776, ctx.r26.u8);
	// beq cr6,0x82df5658
	if (cr6.eq) goto loc_82DF5658;
	// addi r4,r31,568
	ctx.r4.s64 = ctx.r31.s64 + 568;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5658;
	sub_82473550(ctx, base);
loc_82DF5658:
	// addi r4,r31,-2204
	ctx.r4.s64 = ctx.r31.s64 + -2204;
	// lbz r30,11326(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11326);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5668;
	sub_82473550(ctx, base);
	// addi r4,r31,572
	ctx.r4.s64 = ctx.r31.s64 + 572;
	// bl 0x82473550
	ctx.lr = 0x82DF5670;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d745a0
	ctx.lr = 0x82DF5678;
	sub_82D745A0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5684;
	sub_82A79BF8(ctx, base);
	// lwz r11,1856(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1856);
	// lwz r9,1860(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1860);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df56a4
	if (cr6.lt) goto loc_82DF56A4;
	// lwz r3,1840(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1840);
	// bl 0x82416268
	ctx.lr = 0x82DF56A4;
	sub_82416268(ctx, base);
loc_82DF56A4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1860, ctx.r25.u32);
	// stw r26,1856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1856, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1840(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1840, ctx.r26.u8);
	// beq cr6,0x82df56c8
	if (cr6.eq) goto loc_82DF56C8;
	// addi r4,r31,576
	ctx.r4.s64 = ctx.r31.s64 + 576;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF56C8;
	sub_82473550(ctx, base);
loc_82DF56C8:
	// addi r4,r31,-2176
	ctx.r4.s64 = ctx.r31.s64 + -2176;
	// lbz r30,11327(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11327);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF56D8;
	sub_82473550(ctx, base);
	// addi r4,r31,580
	ctx.r4.s64 = ctx.r31.s64 + 580;
	// bl 0x82473550
	ctx.lr = 0x82DF56E0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d745a0
	ctx.lr = 0x82DF56E8;
	sub_82D745A0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF56F4;
	sub_82A79BF8(ctx, base);
	// lwz r11,1920(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1920);
	// lwz r9,1924(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1924);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5714
	if (cr6.lt) goto loc_82DF5714;
	// lwz r3,1904(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1904);
	// bl 0x82416268
	ctx.lr = 0x82DF5714;
	sub_82416268(ctx, base);
loc_82DF5714:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1924, ctx.r25.u32);
	// stw r26,1920(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1920, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1904(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1904, ctx.r26.u8);
	// beq cr6,0x82df5738
	if (cr6.eq) goto loc_82DF5738;
	// addi r4,r31,584
	ctx.r4.s64 = ctx.r31.s64 + 584;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5738;
	sub_82473550(ctx, base);
loc_82DF5738:
	// addi r4,r31,-2144
	ctx.r4.s64 = ctx.r31.s64 + -2144;
	// lbz r30,11328(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11328);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5748;
	sub_82473550(ctx, base);
	// addi r4,r31,588
	ctx.r4.s64 = ctx.r31.s64 + 588;
	// bl 0x82473550
	ctx.lr = 0x82DF5750;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d745a0
	ctx.lr = 0x82DF5758;
	sub_82D745A0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5764;
	sub_82A79BF8(ctx, base);
	// lwz r11,1984(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1984);
	// lwz r9,1988(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1988);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5784
	if (cr6.lt) goto loc_82DF5784;
	// lwz r3,1968(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1968);
	// bl 0x82416268
	ctx.lr = 0x82DF5784;
	sub_82416268(ctx, base);
loc_82DF5784:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,1988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1988, ctx.r25.u32);
	// stw r26,1984(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1984, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,1968(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1968, ctx.r26.u8);
	// beq cr6,0x82df57a8
	if (cr6.eq) goto loc_82DF57A8;
	// addi r4,r31,592
	ctx.r4.s64 = ctx.r31.s64 + 592;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF57A8;
	sub_82473550(ctx, base);
loc_82DF57A8:
	// addi r4,r31,-2116
	ctx.r4.s64 = ctx.r31.s64 + -2116;
	// lbz r30,11329(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11329);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF57B8;
	sub_82473550(ctx, base);
	// addi r4,r31,596
	ctx.r4.s64 = ctx.r31.s64 + 596;
	// bl 0x82473550
	ctx.lr = 0x82DF57C0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d745a0
	ctx.lr = 0x82DF57C8;
	sub_82D745A0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF57D4;
	sub_82A79BF8(ctx, base);
	// lwz r11,2048(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2048);
	// lwz r9,2052(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2052);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df57f4
	if (cr6.lt) goto loc_82DF57F4;
	// lwz r3,2032(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2032);
	// bl 0x82416268
	ctx.lr = 0x82DF57F4;
	sub_82416268(ctx, base);
loc_82DF57F4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2052, ctx.r25.u32);
	// stw r26,2048(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2048, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2032(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2032, ctx.r26.u8);
	// beq cr6,0x82df5818
	if (cr6.eq) goto loc_82DF5818;
	// addi r4,r31,600
	ctx.r4.s64 = ctx.r31.s64 + 600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5818;
	sub_82473550(ctx, base);
loc_82DF5818:
	// addi r4,r31,-2084
	ctx.r4.s64 = ctx.r31.s64 + -2084;
	// lbz r30,11330(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11330);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5828;
	sub_82473550(ctx, base);
	// addi r4,r31,604
	ctx.r4.s64 = ctx.r31.s64 + 604;
	// bl 0x82473550
	ctx.lr = 0x82DF5830;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d745a0
	ctx.lr = 0x82DF5838;
	sub_82D745A0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5844;
	sub_82A79BF8(ctx, base);
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5864
	if (cr6.lt) goto loc_82DF5864;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x82DF5864;
	sub_82416268(ctx, base);
loc_82DF5864:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r25.u32);
	// stw r26,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r26.u8);
	// beq cr6,0x82df5888
	if (cr6.eq) goto loc_82DF5888;
	// addi r4,r31,608
	ctx.r4.s64 = ctx.r31.s64 + 608;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5888;
	sub_82473550(ctx, base);
loc_82DF5888:
	// addi r4,r31,-2056
	ctx.r4.s64 = ctx.r31.s64 + -2056;
	// lbz r30,11331(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11331);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5898;
	sub_82473550(ctx, base);
	// addi r4,r31,612
	ctx.r4.s64 = ctx.r31.s64 + 612;
	// bl 0x82473550
	ctx.lr = 0x82DF58A0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d745a0
	ctx.lr = 0x82DF58A8;
	sub_82D745A0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF58B4;
	sub_82A79BF8(ctx, base);
	// lwz r11,2112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2112);
	// lwz r9,2116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2116);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df58d4
	if (cr6.lt) goto loc_82DF58D4;
	// lwz r3,2096(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2096);
	// bl 0x82416268
	ctx.lr = 0x82DF58D4;
	sub_82416268(ctx, base);
loc_82DF58D4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2116, ctx.r25.u32);
	// stw r26,2112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2112, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2096(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2096, ctx.r26.u8);
	// beq cr6,0x82df58f8
	if (cr6.eq) goto loc_82DF58F8;
	// addi r4,r31,616
	ctx.r4.s64 = ctx.r31.s64 + 616;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF58F8;
	sub_82473550(ctx, base);
loc_82DF58F8:
	// addi r4,r31,-2028
	ctx.r4.s64 = ctx.r31.s64 + -2028;
	// lbz r30,11332(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11332);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5908;
	sub_82473550(ctx, base);
	// addi r4,r31,620
	ctx.r4.s64 = ctx.r31.s64 + 620;
	// bl 0x82473550
	ctx.lr = 0x82DF5910;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d745a0
	ctx.lr = 0x82DF5918;
	sub_82D745A0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5924;
	sub_82A79BF8(ctx, base);
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5944
	if (cr6.lt) goto loc_82DF5944;
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82416268
	ctx.lr = 0x82DF5944;
	sub_82416268(ctx, base);
loc_82DF5944:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r25.u32);
	// stw r26,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r26.u8);
	// beq cr6,0x82df5968
	if (cr6.eq) goto loc_82DF5968;
	// addi r4,r31,624
	ctx.r4.s64 = ctx.r31.s64 + 624;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5968;
	sub_82473550(ctx, base);
loc_82DF5968:
	// addi r4,r31,-2000
	ctx.r4.s64 = ctx.r31.s64 + -2000;
	// lbz r30,11340(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11340);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5978;
	sub_82473550(ctx, base);
	// addi r4,r31,628
	ctx.r4.s64 = ctx.r31.s64 + 628;
	// bl 0x82473550
	ctx.lr = 0x82DF5980;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d745a0
	ctx.lr = 0x82DF5988;
	sub_82D745A0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2160
	ctx.r3.s64 = ctx.r1.s64 + 2160;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5994;
	sub_82A79BF8(ctx, base);
	// lwz r11,2176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2176);
	// lwz r9,2180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2180);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df59b4
	if (cr6.lt) goto loc_82DF59B4;
	// lwz r3,2160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2160);
	// bl 0x82416268
	ctx.lr = 0x82DF59B4;
	sub_82416268(ctx, base);
loc_82DF59B4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2180, ctx.r25.u32);
	// stw r26,2176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2176, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2160, ctx.r26.u8);
	// beq cr6,0x82df59d8
	if (cr6.eq) goto loc_82DF59D8;
	// addi r4,r31,632
	ctx.r4.s64 = ctx.r31.s64 + 632;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF59D8;
	sub_82473550(ctx, base);
loc_82DF59D8:
	// addi r4,r31,-1980
	ctx.r4.s64 = ctx.r31.s64 + -1980;
	// lhz r30,11342(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11342);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF59E8;
	sub_82473550(ctx, base);
	// addi r4,r31,636
	ctx.r4.s64 = ctx.r31.s64 + 636;
	// bl 0x82473550
	ctx.lr = 0x82DF59F0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF59F8;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5A04;
	sub_82A79BF8(ctx, base);
	// lwz r11,2240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2240);
	// lwz r9,2244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2244);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5a24
	if (cr6.lt) goto loc_82DF5A24;
	// lwz r3,2224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2224);
	// bl 0x82416268
	ctx.lr = 0x82DF5A24;
	sub_82416268(ctx, base);
loc_82DF5A24:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2244, ctx.r25.u32);
	// stw r26,2240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2240, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2224, ctx.r26.u8);
	// beq cr6,0x82df5a48
	if (cr6.eq) goto loc_82DF5A48;
	// addi r4,r31,640
	ctx.r4.s64 = ctx.r31.s64 + 640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5A48;
	sub_82473550(ctx, base);
loc_82DF5A48:
	// addi r4,r31,-1952
	ctx.r4.s64 = ctx.r31.s64 + -1952;
	// lhz r30,11344(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11344);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5A58;
	sub_82473550(ctx, base);
	// addi r4,r31,644
	ctx.r4.s64 = ctx.r31.s64 + 644;
	// bl 0x82473550
	ctx.lr = 0x82DF5A60;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF5A68;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2288
	ctx.r3.s64 = ctx.r1.s64 + 2288;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5A74;
	sub_82A79BF8(ctx, base);
	// lwz r11,2304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2304);
	// lwz r9,2308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2308);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5a94
	if (cr6.lt) goto loc_82DF5A94;
	// lwz r3,2288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2288);
	// bl 0x82416268
	ctx.lr = 0x82DF5A94;
	sub_82416268(ctx, base);
loc_82DF5A94:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2308, ctx.r25.u32);
	// stw r26,2304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2304, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2288, ctx.r26.u8);
	// beq cr6,0x82df5ab8
	if (cr6.eq) goto loc_82DF5AB8;
	// addi r4,r31,648
	ctx.r4.s64 = ctx.r31.s64 + 648;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5AB8;
	sub_82473550(ctx, base);
loc_82DF5AB8:
	// addi r4,r31,-1924
	ctx.r4.s64 = ctx.r31.s64 + -1924;
	// lhz r30,11346(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11346);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5AC8;
	sub_82473550(ctx, base);
	// addi r4,r31,652
	ctx.r4.s64 = ctx.r31.s64 + 652;
	// bl 0x82473550
	ctx.lr = 0x82DF5AD0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF5AD8;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2352
	ctx.r3.s64 = ctx.r1.s64 + 2352;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5AE4;
	sub_82A79BF8(ctx, base);
	// lwz r11,2368(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2368);
	// lwz r9,2372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2372);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5b04
	if (cr6.lt) goto loc_82DF5B04;
	// lwz r3,2352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2352);
	// bl 0x82416268
	ctx.lr = 0x82DF5B04;
	sub_82416268(ctx, base);
loc_82DF5B04:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2372, ctx.r25.u32);
	// stw r26,2368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2368, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2352, ctx.r26.u8);
	// beq cr6,0x82df5b28
	if (cr6.eq) goto loc_82DF5B28;
	// addi r4,r31,656
	ctx.r4.s64 = ctx.r31.s64 + 656;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5B28;
	sub_82473550(ctx, base);
loc_82DF5B28:
	// addi r4,r31,-1896
	ctx.r4.s64 = ctx.r31.s64 + -1896;
	// lhz r30,11348(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11348);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5B38;
	sub_82473550(ctx, base);
	// addi r4,r31,660
	ctx.r4.s64 = ctx.r31.s64 + 660;
	// bl 0x82473550
	ctx.lr = 0x82DF5B40;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF5B48;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5B54;
	sub_82A79BF8(ctx, base);
	// lwz r11,2432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2432);
	// lwz r9,2436(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2436);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5b74
	if (cr6.lt) goto loc_82DF5B74;
	// lwz r3,2416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2416);
	// bl 0x82416268
	ctx.lr = 0x82DF5B74;
	sub_82416268(ctx, base);
loc_82DF5B74:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2436, ctx.r25.u32);
	// stw r26,2432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2432, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2416, ctx.r26.u8);
	// beq cr6,0x82df5b98
	if (cr6.eq) goto loc_82DF5B98;
	// addi r4,r31,664
	ctx.r4.s64 = ctx.r31.s64 + 664;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5B98;
	sub_82473550(ctx, base);
loc_82DF5B98:
	// addi r4,r31,-1868
	ctx.r4.s64 = ctx.r31.s64 + -1868;
	// lhz r30,11350(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11350);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5BA8;
	sub_82473550(ctx, base);
	// addi r4,r31,668
	ctx.r4.s64 = ctx.r31.s64 + 668;
	// bl 0x82473550
	ctx.lr = 0x82DF5BB0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF5BB8;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2480
	ctx.r3.s64 = ctx.r1.s64 + 2480;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5BC4;
	sub_82A79BF8(ctx, base);
	// lwz r11,2496(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2496);
	// lwz r9,2500(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2500);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5be4
	if (cr6.lt) goto loc_82DF5BE4;
	// lwz r3,2480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2480);
	// bl 0x82416268
	ctx.lr = 0x82DF5BE4;
	sub_82416268(ctx, base);
loc_82DF5BE4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2500, ctx.r25.u32);
	// stw r26,2496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2496, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2480, ctx.r26.u8);
	// beq cr6,0x82df5c08
	if (cr6.eq) goto loc_82DF5C08;
	// addi r4,r31,672
	ctx.r4.s64 = ctx.r31.s64 + 672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5C08;
	sub_82473550(ctx, base);
loc_82DF5C08:
	// addi r4,r31,-1844
	ctx.r4.s64 = ctx.r31.s64 + -1844;
	// lbz r30,11352(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11352);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5C18;
	sub_82473550(ctx, base);
	// addi r4,r31,676
	ctx.r4.s64 = ctx.r31.s64 + 676;
	// bl 0x82473550
	ctx.lr = 0x82DF5C20;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5C28;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2544
	ctx.r3.s64 = ctx.r1.s64 + 2544;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5C34;
	sub_82A79BF8(ctx, base);
	// lwz r11,2560(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2560);
	// lwz r9,2564(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2564);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5c54
	if (cr6.lt) goto loc_82DF5C54;
	// lwz r3,2544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2544);
	// bl 0x82416268
	ctx.lr = 0x82DF5C54;
	sub_82416268(ctx, base);
loc_82DF5C54:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2564, ctx.r25.u32);
	// stw r26,2560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2560, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2544, ctx.r26.u8);
	// beq cr6,0x82df5c78
	if (cr6.eq) goto loc_82DF5C78;
	// addi r4,r31,680
	ctx.r4.s64 = ctx.r31.s64 + 680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5C78;
	sub_82473550(ctx, base);
loc_82DF5C78:
	// addi r4,r31,-1816
	ctx.r4.s64 = ctx.r31.s64 + -1816;
	// lbz r30,11353(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11353);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5C88;
	sub_82473550(ctx, base);
	// addi r4,r31,684
	ctx.r4.s64 = ctx.r31.s64 + 684;
	// bl 0x82473550
	ctx.lr = 0x82DF5C90;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5C98;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5CA4;
	sub_82A79BF8(ctx, base);
	// lwz r11,2624(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2624);
	// lwz r9,2628(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2628);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5cc4
	if (cr6.lt) goto loc_82DF5CC4;
	// lwz r3,2608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2608);
	// bl 0x82416268
	ctx.lr = 0x82DF5CC4;
	sub_82416268(ctx, base);
loc_82DF5CC4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2628, ctx.r25.u32);
	// stw r26,2624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2624, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2608, ctx.r26.u8);
	// beq cr6,0x82df5ce8
	if (cr6.eq) goto loc_82DF5CE8;
	// addi r4,r31,688
	ctx.r4.s64 = ctx.r31.s64 + 688;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5CE8;
	sub_82473550(ctx, base);
loc_82DF5CE8:
	// addi r4,r31,-1788
	ctx.r4.s64 = ctx.r31.s64 + -1788;
	// lbz r30,11354(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11354);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5CF8;
	sub_82473550(ctx, base);
	// addi r4,r31,692
	ctx.r4.s64 = ctx.r31.s64 + 692;
	// bl 0x82473550
	ctx.lr = 0x82DF5D00;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5D08;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2672
	ctx.r3.s64 = ctx.r1.s64 + 2672;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5D14;
	sub_82A79BF8(ctx, base);
	// lwz r11,2688(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2688);
	// lwz r9,2692(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2692);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5d34
	if (cr6.lt) goto loc_82DF5D34;
	// lwz r3,2672(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2672);
	// bl 0x82416268
	ctx.lr = 0x82DF5D34;
	sub_82416268(ctx, base);
loc_82DF5D34:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2692, ctx.r25.u32);
	// stw r26,2688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2688, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2672, ctx.r26.u8);
	// beq cr6,0x82df5d58
	if (cr6.eq) goto loc_82DF5D58;
	// addi r4,r31,696
	ctx.r4.s64 = ctx.r31.s64 + 696;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5D58;
	sub_82473550(ctx, base);
loc_82DF5D58:
	// addi r4,r31,-1760
	ctx.r4.s64 = ctx.r31.s64 + -1760;
	// lbz r30,11355(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11355);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5D68;
	sub_82473550(ctx, base);
	// addi r4,r31,700
	ctx.r4.s64 = ctx.r31.s64 + 700;
	// bl 0x82473550
	ctx.lr = 0x82DF5D70;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5D78;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5D84;
	sub_82A79BF8(ctx, base);
	// lwz r11,2752(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2752);
	// lwz r9,2756(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2756);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5da4
	if (cr6.lt) goto loc_82DF5DA4;
	// lwz r3,2736(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2736);
	// bl 0x82416268
	ctx.lr = 0x82DF5DA4;
	sub_82416268(ctx, base);
loc_82DF5DA4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2756, ctx.r25.u32);
	// stw r26,2752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2752, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2736, ctx.r26.u8);
	// beq cr6,0x82df5dc8
	if (cr6.eq) goto loc_82DF5DC8;
	// addi r4,r31,704
	ctx.r4.s64 = ctx.r31.s64 + 704;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5DC8;
	sub_82473550(ctx, base);
loc_82DF5DC8:
	// addi r4,r31,-1732
	ctx.r4.s64 = ctx.r31.s64 + -1732;
	// lbz r30,11356(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11356);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5DD8;
	sub_82473550(ctx, base);
	// addi r4,r31,708
	ctx.r4.s64 = ctx.r31.s64 + 708;
	// bl 0x82473550
	ctx.lr = 0x82DF5DE0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5DE8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2800
	ctx.r3.s64 = ctx.r1.s64 + 2800;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5DF4;
	sub_82A79BF8(ctx, base);
	// lwz r11,2816(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2816);
	// lwz r9,2820(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2820);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5e14
	if (cr6.lt) goto loc_82DF5E14;
	// lwz r3,2800(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2800);
	// bl 0x82416268
	ctx.lr = 0x82DF5E14;
	sub_82416268(ctx, base);
loc_82DF5E14:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2820, ctx.r25.u32);
	// stw r26,2816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2816, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2800, ctx.r26.u8);
	// beq cr6,0x82df5e38
	if (cr6.eq) goto loc_82DF5E38;
	// addi r4,r31,712
	ctx.r4.s64 = ctx.r31.s64 + 712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5E38;
	sub_82473550(ctx, base);
loc_82DF5E38:
	// addi r4,r31,-1700
	ctx.r4.s64 = ctx.r31.s64 + -1700;
	// lbz r30,11357(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11357);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5E48;
	sub_82473550(ctx, base);
	// addi r4,r31,716
	ctx.r4.s64 = ctx.r31.s64 + 716;
	// bl 0x82473550
	ctx.lr = 0x82DF5E50;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5E58;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2864
	ctx.r3.s64 = ctx.r1.s64 + 2864;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5E64;
	sub_82A79BF8(ctx, base);
	// lwz r11,2880(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2880);
	// lwz r9,2884(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2884);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5e84
	if (cr6.lt) goto loc_82DF5E84;
	// lwz r3,2864(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2864);
	// bl 0x82416268
	ctx.lr = 0x82DF5E84;
	sub_82416268(ctx, base);
loc_82DF5E84:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2884, ctx.r25.u32);
	// stw r26,2880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2880, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2864, ctx.r26.u8);
	// beq cr6,0x82df5ea8
	if (cr6.eq) goto loc_82DF5EA8;
	// addi r4,r31,720
	ctx.r4.s64 = ctx.r31.s64 + 720;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5EA8;
	sub_82473550(ctx, base);
loc_82DF5EA8:
	// addi r4,r31,-1664
	ctx.r4.s64 = ctx.r31.s64 + -1664;
	// lbz r30,11358(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11358);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5EB8;
	sub_82473550(ctx, base);
	// addi r4,r31,724
	ctx.r4.s64 = ctx.r31.s64 + 724;
	// bl 0x82473550
	ctx.lr = 0x82DF5EC0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5EC8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2928
	ctx.r3.s64 = ctx.r1.s64 + 2928;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5ED4;
	sub_82A79BF8(ctx, base);
	// lwz r11,2944(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2944);
	// lwz r9,2948(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2948);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5ef4
	if (cr6.lt) goto loc_82DF5EF4;
	// lwz r3,2928(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2928);
	// bl 0x82416268
	ctx.lr = 0x82DF5EF4;
	sub_82416268(ctx, base);
loc_82DF5EF4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2948, ctx.r25.u32);
	// stw r26,2944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2944, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2928, ctx.r26.u8);
	// beq cr6,0x82df5f18
	if (cr6.eq) goto loc_82DF5F18;
	// addi r4,r31,728
	ctx.r4.s64 = ctx.r31.s64 + 728;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5F18;
	sub_82473550(ctx, base);
loc_82DF5F18:
	// addi r4,r31,-1640
	ctx.r4.s64 = ctx.r31.s64 + -1640;
	// lbz r30,11359(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11359);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5F28;
	sub_82473550(ctx, base);
	// addi r4,r31,732
	ctx.r4.s64 = ctx.r31.s64 + 732;
	// bl 0x82473550
	ctx.lr = 0x82DF5F30;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5F38;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5F44;
	sub_82A79BF8(ctx, base);
	// lwz r11,2336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2336);
	// lwz r9,2340(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2340);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82df5f64
	if (cr6.lt) goto loc_82DF5F64;
	// lwz r3,2320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2320);
	// bl 0x82416268
	ctx.lr = 0x82DF5F64;
	sub_82416268(ctx, base);
loc_82DF5F64:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r25,2340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2340, ctx.r25.u32);
	// stw r26,2336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2336, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,2320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2320, ctx.r26.u8);
	// beq cr6,0x82df5f88
	if (cr6.eq) goto loc_82DF5F88;
	// addi r4,r31,736
	ctx.r4.s64 = ctx.r31.s64 + 736;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5F88;
	sub_82473550(ctx, base);
loc_82DF5F88:
	// addi r4,r31,-1608
	ctx.r4.s64 = ctx.r31.s64 + -1608;
	// lbz r30,11360(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11360);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5F98;
	sub_82473550(ctx, base);
	// addi r4,r31,740
	ctx.r4.s64 = ctx.r31.s64 + 740;
	// bl 0x82473550
	ctx.lr = 0x82DF5FA0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF5FA8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4880
	ctx.r3.s64 = ctx.r1.s64 + 4880;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF5FB4;
	sub_82A79BF8(ctx, base);
	// lwz r11,4896(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4896);
	// addi r3,r1,4880
	ctx.r3.s64 = ctx.r1.s64 + 4880;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF5FC8;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df5fe0
	if (cr6.eq) goto loc_82DF5FE0;
	// addi r4,r31,744
	ctx.r4.s64 = ctx.r31.s64 + 744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5FE0;
	sub_82473550(ctx, base);
loc_82DF5FE0:
	// addi r4,r31,-1572
	ctx.r4.s64 = ctx.r31.s64 + -1572;
	// lbz r30,11361(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11361);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF5FF0;
	sub_82473550(ctx, base);
	// addi r4,r31,748
	ctx.r4.s64 = ctx.r31.s64 + 748;
	// bl 0x82473550
	ctx.lr = 0x82DF5FF8;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6000;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3184
	ctx.r3.s64 = ctx.r1.s64 + 3184;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF600C;
	sub_82A79BF8(ctx, base);
	// lwz r11,3200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3200);
	// addi r3,r1,3184
	ctx.r3.s64 = ctx.r1.s64 + 3184;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6020;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6038
	if (cr6.eq) goto loc_82DF6038;
	// addi r4,r31,752
	ctx.r4.s64 = ctx.r31.s64 + 752;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6038;
	sub_82473550(ctx, base);
loc_82DF6038:
	// addi r4,r31,-1540
	ctx.r4.s64 = ctx.r31.s64 + -1540;
	// lbz r30,11362(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11362);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6048;
	sub_82473550(ctx, base);
	// addi r4,r31,756
	ctx.r4.s64 = ctx.r31.s64 + 756;
	// bl 0x82473550
	ctx.lr = 0x82DF6050;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6058;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6064;
	sub_82A79BF8(ctx, base);
	// lwz r11,4480(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4480);
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6078;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6090
	if (cr6.eq) goto loc_82DF6090;
	// addi r4,r31,760
	ctx.r4.s64 = ctx.r31.s64 + 760;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6090;
	sub_82473550(ctx, base);
loc_82DF6090:
	// addi r4,r31,-1512
	ctx.r4.s64 = ctx.r31.s64 + -1512;
	// lbz r30,11363(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11363);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF60A0;
	sub_82473550(ctx, base);
	// addi r4,r31,764
	ctx.r4.s64 = ctx.r31.s64 + 764;
	// bl 0x82473550
	ctx.lr = 0x82DF60A8;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF60B0;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3248
	ctx.r3.s64 = ctx.r1.s64 + 3248;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF60BC;
	sub_82A79BF8(ctx, base);
	// lwz r11,3264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3264);
	// addi r3,r1,3248
	ctx.r3.s64 = ctx.r1.s64 + 3248;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF60D0;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df60e8
	if (cr6.eq) goto loc_82DF60E8;
	// addi r4,r31,768
	ctx.r4.s64 = ctx.r31.s64 + 768;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF60E8;
	sub_82473550(ctx, base);
loc_82DF60E8:
	// addi r4,r31,-1480
	ctx.r4.s64 = ctx.r31.s64 + -1480;
	// lbz r30,11364(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11364);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF60F8;
	sub_82473550(ctx, base);
	// addi r4,r31,772
	ctx.r4.s64 = ctx.r31.s64 + 772;
	// bl 0x82473550
	ctx.lr = 0x82DF6100;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6108;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4080
	ctx.r3.s64 = ctx.r1.s64 + 4080;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6114;
	sub_82A79BF8(ctx, base);
	// lwz r11,4096(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4096);
	// addi r3,r1,4080
	ctx.r3.s64 = ctx.r1.s64 + 4080;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6128;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6140
	if (cr6.eq) goto loc_82DF6140;
	// addi r4,r31,776
	ctx.r4.s64 = ctx.r31.s64 + 776;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6140;
	sub_82473550(ctx, base);
loc_82DF6140:
	// addi r4,r31,-1448
	ctx.r4.s64 = ctx.r31.s64 + -1448;
	// lbz r30,11365(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11365);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6150;
	sub_82473550(ctx, base);
	// addi r4,r31,780
	ctx.r4.s64 = ctx.r31.s64 + 780;
	// bl 0x82473550
	ctx.lr = 0x82DF6158;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6160;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3312
	ctx.r3.s64 = ctx.r1.s64 + 3312;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF616C;
	sub_82A79BF8(ctx, base);
	// lwz r11,3328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3328);
	// addi r3,r1,3312
	ctx.r3.s64 = ctx.r1.s64 + 3312;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6180;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6198
	if (cr6.eq) goto loc_82DF6198;
	// addi r4,r31,784
	ctx.r4.s64 = ctx.r31.s64 + 784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6198;
	sub_82473550(ctx, base);
loc_82DF6198:
	// addi r4,r31,-1416
	ctx.r4.s64 = ctx.r31.s64 + -1416;
	// lbz r30,11366(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11366);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF61A8;
	sub_82473550(ctx, base);
	// addi r4,r31,788
	ctx.r4.s64 = ctx.r31.s64 + 788;
	// bl 0x82473550
	ctx.lr = 0x82DF61B0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF61B8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4784
	ctx.r3.s64 = ctx.r1.s64 + 4784;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF61C4;
	sub_82A79BF8(ctx, base);
	// lwz r11,4800(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4800);
	// addi r3,r1,4784
	ctx.r3.s64 = ctx.r1.s64 + 4784;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF61D8;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df61f0
	if (cr6.eq) goto loc_82DF61F0;
	// addi r4,r31,792
	ctx.r4.s64 = ctx.r31.s64 + 792;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF61F0;
	sub_82473550(ctx, base);
loc_82DF61F0:
	// addi r4,r31,-1380
	ctx.r4.s64 = ctx.r31.s64 + -1380;
	// lbz r30,11367(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11367);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6200;
	sub_82473550(ctx, base);
	// addi r4,r31,796
	ctx.r4.s64 = ctx.r31.s64 + 796;
	// bl 0x82473550
	ctx.lr = 0x82DF6208;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6210;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3376
	ctx.r3.s64 = ctx.r1.s64 + 3376;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF621C;
	sub_82A79BF8(ctx, base);
	// lwz r11,3392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3392);
	// addi r3,r1,3376
	ctx.r3.s64 = ctx.r1.s64 + 3376;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6230;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6248
	if (cr6.eq) goto loc_82DF6248;
	// addi r4,r31,800
	ctx.r4.s64 = ctx.r31.s64 + 800;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6248;
	sub_82473550(ctx, base);
loc_82DF6248:
	// addi r4,r31,-1348
	ctx.r4.s64 = ctx.r31.s64 + -1348;
	// lbz r30,11368(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11368);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6258;
	sub_82473550(ctx, base);
	// addi r4,r31,804
	ctx.r4.s64 = ctx.r31.s64 + 804;
	// bl 0x82473550
	ctx.lr = 0x82DF6260;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6268;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4144
	ctx.r3.s64 = ctx.r1.s64 + 4144;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6274;
	sub_82A79BF8(ctx, base);
	// lwz r11,4160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4160);
	// addi r3,r1,4144
	ctx.r3.s64 = ctx.r1.s64 + 4144;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6288;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df62a0
	if (cr6.eq) goto loc_82DF62A0;
	// addi r4,r31,808
	ctx.r4.s64 = ctx.r31.s64 + 808;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF62A0;
	sub_82473550(ctx, base);
loc_82DF62A0:
	// addi r4,r31,-1324
	ctx.r4.s64 = ctx.r31.s64 + -1324;
	// lbz r30,11369(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11369);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF62B0;
	sub_82473550(ctx, base);
	// addi r4,r31,812
	ctx.r4.s64 = ctx.r31.s64 + 812;
	// bl 0x82473550
	ctx.lr = 0x82DF62B8;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF62C0;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3440
	ctx.r3.s64 = ctx.r1.s64 + 3440;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF62CC;
	sub_82A79BF8(ctx, base);
	// lwz r11,3456(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3456);
	// addi r3,r1,3440
	ctx.r3.s64 = ctx.r1.s64 + 3440;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF62E0;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df62f8
	if (cr6.eq) goto loc_82DF62F8;
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF62F8;
	sub_82473550(ctx, base);
loc_82DF62F8:
	// addi r4,r31,-1296
	ctx.r4.s64 = ctx.r31.s64 + -1296;
	// lbz r30,11370(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11370);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6308;
	sub_82473550(ctx, base);
	// addi r4,r31,820
	ctx.r4.s64 = ctx.r31.s64 + 820;
	// bl 0x82473550
	ctx.lr = 0x82DF6310;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6318;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4528
	ctx.r3.s64 = ctx.r1.s64 + 4528;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6324;
	sub_82A79BF8(ctx, base);
	// lwz r11,4544(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4544);
	// addi r3,r1,4528
	ctx.r3.s64 = ctx.r1.s64 + 4528;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6338;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6350
	if (cr6.eq) goto loc_82DF6350;
	// addi r4,r31,824
	ctx.r4.s64 = ctx.r31.s64 + 824;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6350;
	sub_82473550(ctx, base);
loc_82DF6350:
	// addi r4,r31,-1264
	ctx.r4.s64 = ctx.r31.s64 + -1264;
	// lbz r30,11371(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11371);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6360;
	sub_82473550(ctx, base);
	// addi r4,r31,828
	ctx.r4.s64 = ctx.r31.s64 + 828;
	// bl 0x82473550
	ctx.lr = 0x82DF6368;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6370;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3504
	ctx.r3.s64 = ctx.r1.s64 + 3504;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF637C;
	sub_82A79BF8(ctx, base);
	// lwz r11,3520(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3520);
	// addi r3,r1,3504
	ctx.r3.s64 = ctx.r1.s64 + 3504;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6390;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df63a8
	if (cr6.eq) goto loc_82DF63A8;
	// addi r4,r31,832
	ctx.r4.s64 = ctx.r31.s64 + 832;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF63A8;
	sub_82473550(ctx, base);
loc_82DF63A8:
	// addi r4,r31,-1236
	ctx.r4.s64 = ctx.r31.s64 + -1236;
	// lbz r30,11372(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11372);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF63B8;
	sub_82473550(ctx, base);
	// addi r4,r31,836
	ctx.r4.s64 = ctx.r31.s64 + 836;
	// bl 0x82473550
	ctx.lr = 0x82DF63C0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF63C8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4208
	ctx.r3.s64 = ctx.r1.s64 + 4208;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF63D4;
	sub_82A79BF8(ctx, base);
	// lwz r11,4224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4224);
	// addi r3,r1,4208
	ctx.r3.s64 = ctx.r1.s64 + 4208;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF63E8;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6400
	if (cr6.eq) goto loc_82DF6400;
	// addi r4,r31,840
	ctx.r4.s64 = ctx.r31.s64 + 840;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6400;
	sub_82473550(ctx, base);
loc_82DF6400:
	// addi r4,r31,-1204
	ctx.r4.s64 = ctx.r31.s64 + -1204;
	// lbz r30,11373(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11373);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6410;
	sub_82473550(ctx, base);
	// addi r4,r31,844
	ctx.r4.s64 = ctx.r31.s64 + 844;
	// bl 0x82473550
	ctx.lr = 0x82DF6418;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6420;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3568
	ctx.r3.s64 = ctx.r1.s64 + 3568;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF642C;
	sub_82A79BF8(ctx, base);
	// lwz r11,3584(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3584);
	// addi r3,r1,3568
	ctx.r3.s64 = ctx.r1.s64 + 3568;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6440;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6458
	if (cr6.eq) goto loc_82DF6458;
	// addi r4,r31,848
	ctx.r4.s64 = ctx.r31.s64 + 848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6458;
	sub_82473550(ctx, base);
loc_82DF6458:
	// addi r4,r31,-1176
	ctx.r4.s64 = ctx.r31.s64 + -1176;
	// lbz r30,11374(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11374);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6468;
	sub_82473550(ctx, base);
	// addi r4,r31,852
	ctx.r4.s64 = ctx.r31.s64 + 852;
	// bl 0x82473550
	ctx.lr = 0x82DF6470;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6478;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4720
	ctx.r3.s64 = ctx.r1.s64 + 4720;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6484;
	sub_82A79BF8(ctx, base);
	// lwz r11,4736(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4736);
	// addi r3,r1,4720
	ctx.r3.s64 = ctx.r1.s64 + 4720;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6498;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df64b0
	if (cr6.eq) goto loc_82DF64B0;
	// addi r4,r31,856
	ctx.r4.s64 = ctx.r31.s64 + 856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF64B0;
	sub_82473550(ctx, base);
loc_82DF64B0:
	// addi r4,r31,-1148
	ctx.r4.s64 = ctx.r31.s64 + -1148;
	// lbz r30,11375(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11375);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF64C0;
	sub_82473550(ctx, base);
	// addi r4,r31,860
	ctx.r4.s64 = ctx.r31.s64 + 860;
	// bl 0x82473550
	ctx.lr = 0x82DF64C8;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF64D0;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3632
	ctx.r3.s64 = ctx.r1.s64 + 3632;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF64DC;
	sub_82A79BF8(ctx, base);
	// lwz r11,3648(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3648);
	// addi r3,r1,3632
	ctx.r3.s64 = ctx.r1.s64 + 3632;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF64F0;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6508
	if (cr6.eq) goto loc_82DF6508;
	// addi r4,r31,864
	ctx.r4.s64 = ctx.r31.s64 + 864;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6508;
	sub_82473550(ctx, base);
loc_82DF6508:
	// addi r4,r31,-1120
	ctx.r4.s64 = ctx.r31.s64 + -1120;
	// lbz r30,11376(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11376);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6518;
	sub_82473550(ctx, base);
	// addi r4,r31,868
	ctx.r4.s64 = ctx.r31.s64 + 868;
	// bl 0x82473550
	ctx.lr = 0x82DF6520;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6528;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4272
	ctx.r3.s64 = ctx.r1.s64 + 4272;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6534;
	sub_82A79BF8(ctx, base);
	// lwz r11,4288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4288);
	// addi r3,r1,4272
	ctx.r3.s64 = ctx.r1.s64 + 4272;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6548;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6560
	if (cr6.eq) goto loc_82DF6560;
	// addi r4,r31,872
	ctx.r4.s64 = ctx.r31.s64 + 872;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6560;
	sub_82473550(ctx, base);
loc_82DF6560:
	// addi r4,r31,-1084
	ctx.r4.s64 = ctx.r31.s64 + -1084;
	// lbz r30,11377(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11377);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6570;
	sub_82473550(ctx, base);
	// addi r4,r31,876
	ctx.r4.s64 = ctx.r31.s64 + 876;
	// bl 0x82473550
	ctx.lr = 0x82DF6578;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6580;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3696
	ctx.r3.s64 = ctx.r1.s64 + 3696;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF658C;
	sub_82A79BF8(ctx, base);
	// lwz r11,3712(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3712);
	// addi r3,r1,3696
	ctx.r3.s64 = ctx.r1.s64 + 3696;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF65A0;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df65b8
	if (cr6.eq) goto loc_82DF65B8;
	// addi r4,r31,880
	ctx.r4.s64 = ctx.r31.s64 + 880;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF65B8;
	sub_82473550(ctx, base);
loc_82DF65B8:
	// addi r4,r31,-1056
	ctx.r4.s64 = ctx.r31.s64 + -1056;
	// lbz r30,11378(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11378);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF65C8;
	sub_82473550(ctx, base);
	// addi r4,r31,884
	ctx.r4.s64 = ctx.r31.s64 + 884;
	// bl 0x82473550
	ctx.lr = 0x82DF65D0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF65D8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4592
	ctx.r3.s64 = ctx.r1.s64 + 4592;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF65E4;
	sub_82A79BF8(ctx, base);
	// lwz r11,4608(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4608);
	// addi r3,r1,4592
	ctx.r3.s64 = ctx.r1.s64 + 4592;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF65F8;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6610
	if (cr6.eq) goto loc_82DF6610;
	// addi r4,r31,888
	ctx.r4.s64 = ctx.r31.s64 + 888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6610;
	sub_82473550(ctx, base);
loc_82DF6610:
	// addi r4,r31,-1028
	ctx.r4.s64 = ctx.r31.s64 + -1028;
	// lbz r30,11379(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11379);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6620;
	sub_82473550(ctx, base);
	// addi r4,r31,892
	ctx.r4.s64 = ctx.r31.s64 + 892;
	// bl 0x82473550
	ctx.lr = 0x82DF6628;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6630;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3760
	ctx.r3.s64 = ctx.r1.s64 + 3760;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF663C;
	sub_82A79BF8(ctx, base);
	// lwz r11,3776(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3776);
	// addi r3,r1,3760
	ctx.r3.s64 = ctx.r1.s64 + 3760;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6650;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6668
	if (cr6.eq) goto loc_82DF6668;
	// addi r4,r31,896
	ctx.r4.s64 = ctx.r31.s64 + 896;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6668;
	sub_82473550(ctx, base);
loc_82DF6668:
	// addi r4,r31,-992
	ctx.r4.s64 = ctx.r31.s64 + -992;
	// lbz r30,11380(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11380);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6678;
	sub_82473550(ctx, base);
	// addi r4,r31,900
	ctx.r4.s64 = ctx.r31.s64 + 900;
	// bl 0x82473550
	ctx.lr = 0x82DF6680;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6688;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4336
	ctx.r3.s64 = ctx.r1.s64 + 4336;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6694;
	sub_82A79BF8(ctx, base);
	// lwz r11,4352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4352);
	// addi r3,r1,4336
	ctx.r3.s64 = ctx.r1.s64 + 4336;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF66A8;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df66c0
	if (cr6.eq) goto loc_82DF66C0;
	// addi r4,r31,904
	ctx.r4.s64 = ctx.r31.s64 + 904;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF66C0;
	sub_82473550(ctx, base);
loc_82DF66C0:
	// addi r4,r31,-964
	ctx.r4.s64 = ctx.r31.s64 + -964;
	// lbz r30,11381(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11381);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF66D0;
	sub_82473550(ctx, base);
	// addi r4,r31,908
	ctx.r4.s64 = ctx.r31.s64 + 908;
	// bl 0x82473550
	ctx.lr = 0x82DF66D8;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF66E0;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3824
	ctx.r3.s64 = ctx.r1.s64 + 3824;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF66EC;
	sub_82A79BF8(ctx, base);
	// lwz r11,3840(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3840);
	// addi r3,r1,3824
	ctx.r3.s64 = ctx.r1.s64 + 3824;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6700;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6718
	if (cr6.eq) goto loc_82DF6718;
	// addi r4,r31,912
	ctx.r4.s64 = ctx.r31.s64 + 912;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6718;
	sub_82473550(ctx, base);
loc_82DF6718:
	// addi r4,r31,-936
	ctx.r4.s64 = ctx.r31.s64 + -936;
	// lbz r30,11382(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11382);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6728;
	sub_82473550(ctx, base);
	// addi r4,r31,916
	ctx.r4.s64 = ctx.r31.s64 + 916;
	// bl 0x82473550
	ctx.lr = 0x82DF6730;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6738;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4848
	ctx.r3.s64 = ctx.r1.s64 + 4848;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6744;
	sub_82A79BF8(ctx, base);
	// lwz r11,4864(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4864);
	// addi r3,r1,4848
	ctx.r3.s64 = ctx.r1.s64 + 4848;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6758;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6770
	if (cr6.eq) goto loc_82DF6770;
	// addi r4,r31,920
	ctx.r4.s64 = ctx.r31.s64 + 920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6770;
	sub_82473550(ctx, base);
loc_82DF6770:
	// addi r4,r31,-900
	ctx.r4.s64 = ctx.r31.s64 + -900;
	// lbz r30,11383(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11383);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6780;
	sub_82473550(ctx, base);
	// addi r4,r31,924
	ctx.r4.s64 = ctx.r31.s64 + 924;
	// bl 0x82473550
	ctx.lr = 0x82DF6788;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6790;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3888
	ctx.r3.s64 = ctx.r1.s64 + 3888;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF679C;
	sub_82A79BF8(ctx, base);
	// lwz r11,3904(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3904);
	// addi r3,r1,3888
	ctx.r3.s64 = ctx.r1.s64 + 3888;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF67B0;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df67c8
	if (cr6.eq) goto loc_82DF67C8;
	// addi r4,r31,928
	ctx.r4.s64 = ctx.r31.s64 + 928;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF67C8;
	sub_82473550(ctx, base);
loc_82DF67C8:
	// addi r4,r31,-868
	ctx.r4.s64 = ctx.r31.s64 + -868;
	// lbz r30,11384(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11384);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF67D8;
	sub_82473550(ctx, base);
	// addi r4,r31,932
	ctx.r4.s64 = ctx.r31.s64 + 932;
	// bl 0x82473550
	ctx.lr = 0x82DF67E0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF67E8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4400
	ctx.r3.s64 = ctx.r1.s64 + 4400;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF67F4;
	sub_82A79BF8(ctx, base);
	// lwz r11,4416(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4416);
	// addi r3,r1,4400
	ctx.r3.s64 = ctx.r1.s64 + 4400;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6808;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6820
	if (cr6.eq) goto loc_82DF6820;
	// addi r4,r31,936
	ctx.r4.s64 = ctx.r31.s64 + 936;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6820;
	sub_82473550(ctx, base);
loc_82DF6820:
	// addi r4,r31,-836
	ctx.r4.s64 = ctx.r31.s64 + -836;
	// lbz r30,11385(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11385);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6830;
	sub_82473550(ctx, base);
	// addi r4,r31,940
	ctx.r4.s64 = ctx.r31.s64 + 940;
	// bl 0x82473550
	ctx.lr = 0x82DF6838;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6840;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3120
	ctx.r3.s64 = ctx.r1.s64 + 3120;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF684C;
	sub_82A79BF8(ctx, base);
	// lwz r11,3136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3136);
	// addi r3,r1,3120
	ctx.r3.s64 = ctx.r1.s64 + 3120;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6860;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6878
	if (cr6.eq) goto loc_82DF6878;
	// addi r4,r31,944
	ctx.r4.s64 = ctx.r31.s64 + 944;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6878;
	sub_82473550(ctx, base);
loc_82DF6878:
	// addi r4,r31,-804
	ctx.r4.s64 = ctx.r31.s64 + -804;
	// lbz r30,11386(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11386);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6888;
	sub_82473550(ctx, base);
	// addi r4,r31,948
	ctx.r4.s64 = ctx.r31.s64 + 948;
	// bl 0x82473550
	ctx.lr = 0x82DF6890;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6898;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4656
	ctx.r3.s64 = ctx.r1.s64 + 4656;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF68A4;
	sub_82A79BF8(ctx, base);
	// lwz r11,4672(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4672);
	// addi r3,r1,4656
	ctx.r3.s64 = ctx.r1.s64 + 4656;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF68B8;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df68d0
	if (cr6.eq) goto loc_82DF68D0;
	// addi r4,r31,952
	ctx.r4.s64 = ctx.r31.s64 + 952;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF68D0;
	sub_82473550(ctx, base);
loc_82DF68D0:
	// addi r4,r31,-772
	ctx.r4.s64 = ctx.r31.s64 + -772;
	// lwz r30,11388(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11388);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF68E0;
	sub_82473550(ctx, base);
	// addi r4,r31,956
	ctx.r4.s64 = ctx.r31.s64 + 956;
	// bl 0x82473550
	ctx.lr = 0x82DF68E8;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF68F0;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4016
	ctx.r3.s64 = ctx.r1.s64 + 4016;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF68FC;
	sub_82A79BF8(ctx, base);
	// lwz r11,4032(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4032);
	// addi r3,r1,4016
	ctx.r3.s64 = ctx.r1.s64 + 4016;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6910;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6928
	if (cr6.eq) goto loc_82DF6928;
	// addi r4,r31,960
	ctx.r4.s64 = ctx.r31.s64 + 960;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6928;
	sub_82473550(ctx, base);
loc_82DF6928:
	// addi r4,r31,-752
	ctx.r4.s64 = ctx.r31.s64 + -752;
	// lwz r30,11408(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11408);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6938;
	sub_82473550(ctx, base);
	// addi r4,r31,964
	ctx.r4.s64 = ctx.r31.s64 + 964;
	// bl 0x82473550
	ctx.lr = 0x82DF6940;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6948;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3152
	ctx.r3.s64 = ctx.r1.s64 + 3152;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6954;
	sub_82A79BF8(ctx, base);
	// lwz r11,3168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3168);
	// addi r3,r1,3152
	ctx.r3.s64 = ctx.r1.s64 + 3152;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6968;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6980
	if (cr6.eq) goto loc_82DF6980;
	// addi r4,r31,968
	ctx.r4.s64 = ctx.r31.s64 + 968;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6980;
	sub_82473550(ctx, base);
loc_82DF6980:
	// addi r4,r31,-728
	ctx.r4.s64 = ctx.r31.s64 + -728;
	// lwz r30,11412(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11412);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6990;
	sub_82473550(ctx, base);
	// addi r4,r31,972
	ctx.r4.s64 = ctx.r31.s64 + 972;
	// bl 0x82473550
	ctx.lr = 0x82DF6998;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF69A0;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3216
	ctx.r3.s64 = ctx.r1.s64 + 3216;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF69AC;
	sub_82A79BF8(ctx, base);
	// lwz r11,3232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3232);
	// addi r3,r1,3216
	ctx.r3.s64 = ctx.r1.s64 + 3216;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF69C0;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df69d8
	if (cr6.eq) goto loc_82DF69D8;
	// addi r4,r31,976
	ctx.r4.s64 = ctx.r31.s64 + 976;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF69D8;
	sub_82473550(ctx, base);
loc_82DF69D8:
	// addi r4,r31,-708
	ctx.r4.s64 = ctx.r31.s64 + -708;
	// lwz r30,11416(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11416);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF69E8;
	sub_82473550(ctx, base);
	// addi r4,r31,980
	ctx.r4.s64 = ctx.r31.s64 + 980;
	// bl 0x82473550
	ctx.lr = 0x82DF69F0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF69F8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3280
	ctx.r3.s64 = ctx.r1.s64 + 3280;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6A04;
	sub_82A79BF8(ctx, base);
	// lwz r11,3296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3296);
	// addi r3,r1,3280
	ctx.r3.s64 = ctx.r1.s64 + 3280;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6A18;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6a30
	if (cr6.eq) goto loc_82DF6A30;
	// addi r4,r31,984
	ctx.r4.s64 = ctx.r31.s64 + 984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6A30;
	sub_82473550(ctx, base);
loc_82DF6A30:
	// addi r4,r31,-688
	ctx.r4.s64 = ctx.r31.s64 + -688;
	// lwz r30,11420(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11420);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6A40;
	sub_82473550(ctx, base);
	// addi r4,r31,988
	ctx.r4.s64 = ctx.r31.s64 + 988;
	// bl 0x82473550
	ctx.lr = 0x82DF6A48;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6A50;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3344
	ctx.r3.s64 = ctx.r1.s64 + 3344;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6A5C;
	sub_82A79BF8(ctx, base);
	// lwz r11,3360(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3360);
	// addi r3,r1,3344
	ctx.r3.s64 = ctx.r1.s64 + 3344;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6A70;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6a88
	if (cr6.eq) goto loc_82DF6A88;
	// addi r4,r31,992
	ctx.r4.s64 = ctx.r31.s64 + 992;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6A88;
	sub_82473550(ctx, base);
loc_82DF6A88:
	// addi r4,r31,-664
	ctx.r4.s64 = ctx.r31.s64 + -664;
	// lwz r30,11404(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11404);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6A98;
	sub_82473550(ctx, base);
	// addi r4,r31,996
	ctx.r4.s64 = ctx.r31.s64 + 996;
	// bl 0x82473550
	ctx.lr = 0x82DF6AA0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6AA8;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3408
	ctx.r3.s64 = ctx.r1.s64 + 3408;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6AB4;
	sub_82A79BF8(ctx, base);
	// lwz r11,3424(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3424);
	// addi r3,r1,3408
	ctx.r3.s64 = ctx.r1.s64 + 3408;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6AC8;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6ae0
	if (cr6.eq) goto loc_82DF6AE0;
	// addi r4,r31,1000
	ctx.r4.s64 = ctx.r31.s64 + 1000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6AE0;
	sub_82473550(ctx, base);
loc_82DF6AE0:
	// addi r4,r31,-644
	ctx.r4.s64 = ctx.r31.s64 + -644;
	// lwz r30,11392(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11392);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6AF0;
	sub_82473550(ctx, base);
	// addi r4,r31,1004
	ctx.r4.s64 = ctx.r31.s64 + 1004;
	// bl 0x82473550
	ctx.lr = 0x82DF6AF8;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6B00;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3472
	ctx.r3.s64 = ctx.r1.s64 + 3472;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6B0C;
	sub_82A79BF8(ctx, base);
	// lwz r11,3488(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3488);
	// addi r3,r1,3472
	ctx.r3.s64 = ctx.r1.s64 + 3472;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6B20;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6b38
	if (cr6.eq) goto loc_82DF6B38;
	// addi r4,r31,1008
	ctx.r4.s64 = ctx.r31.s64 + 1008;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6B38;
	sub_82473550(ctx, base);
loc_82DF6B38:
	// addi r4,r31,-620
	ctx.r4.s64 = ctx.r31.s64 + -620;
	// lwz r30,11396(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11396);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6B48;
	sub_82473550(ctx, base);
	// addi r4,r31,1012
	ctx.r4.s64 = ctx.r31.s64 + 1012;
	// bl 0x82473550
	ctx.lr = 0x82DF6B50;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6B58;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3536
	ctx.r3.s64 = ctx.r1.s64 + 3536;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6B64;
	sub_82A79BF8(ctx, base);
	// lwz r11,3552(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3552);
	// addi r3,r1,3536
	ctx.r3.s64 = ctx.r1.s64 + 3536;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6B78;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6b90
	if (cr6.eq) goto loc_82DF6B90;
	// addi r4,r31,1016
	ctx.r4.s64 = ctx.r31.s64 + 1016;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6B90;
	sub_82473550(ctx, base);
loc_82DF6B90:
	// addi r4,r31,-588
	ctx.r4.s64 = ctx.r31.s64 + -588;
	// lwz r30,11400(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11400);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6BA0;
	sub_82473550(ctx, base);
	// addi r4,r31,1020
	ctx.r4.s64 = ctx.r31.s64 + 1020;
	// bl 0x82473550
	ctx.lr = 0x82DF6BA8;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6BB0;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3600
	ctx.r3.s64 = ctx.r1.s64 + 3600;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6BBC;
	sub_82A79BF8(ctx, base);
	// lwz r11,3616(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3616);
	// addi r3,r1,3600
	ctx.r3.s64 = ctx.r1.s64 + 3600;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6BD0;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6be8
	if (cr6.eq) goto loc_82DF6BE8;
	// addi r4,r31,1024
	ctx.r4.s64 = ctx.r31.s64 + 1024;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6BE8;
	sub_82473550(ctx, base);
loc_82DF6BE8:
	// addi r4,r31,-560
	ctx.r4.s64 = ctx.r31.s64 + -560;
	// lwz r30,6800(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6800);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6BF8;
	sub_82473550(ctx, base);
	// addi r4,r31,1028
	ctx.r4.s64 = ctx.r31.s64 + 1028;
	// bl 0x82473550
	ctx.lr = 0x82DF6C00;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6C08;
	sub_82474170(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r27,6804
	ctx.r29.s64 = ctx.r27.s64 + 6804;
loc_82DF6C10:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82df6c28
	if (cr6.lt) goto loc_82DF6C28;
	// cmpwi cr6,r30,1114
	cr6.compare<int32_t>(ctx.r30.s32, 1114, xer);
	// bge cr6,0x82df6c28
	if (!cr6.lt) goto loc_82DF6C28;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82df6c2c
	goto loc_82DF6C2C;
loc_82DF6C28:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82DF6C2C:
	// addi r4,r31,1032
	ctx.r4.s64 = ctx.r31.s64 + 1032;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6C38;
	sub_82473550(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6C40;
	sub_82474170(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,1114
	cr6.compare<uint32_t>(ctx.r30.u32, 1114, xer);
	// blt cr6,0x82df6c10
	if (cr6.lt) goto loc_82DF6C10;
	// addi r4,r27,11548
	ctx.r4.s64 = ctx.r27.s64 + 11548;
	// addi r3,r1,2960
	ctx.r3.s64 = ctx.r1.s64 + 2960;
	// bl 0x837b0c10
	ctx.lr = 0x82DF6C5C;
	sub_837B0C10(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,3086
	ctx.r10.s64 = ctx.r1.s64 + 3086;
	// addi r11,r27,11506
	ctx.r11.s64 = ctx.r27.s64 + 11506;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DF6C6C:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82df6c6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DF6C6C;
	// addi r4,r1,3088
	ctx.r4.s64 = ctx.r1.s64 + 3088;
	// addi r3,r1,3024
	ctx.r3.s64 = ctx.r1.s64 + 3024;
	// bl 0x82e742f0
	ctx.lr = 0x82DF6C84;
	sub_82E742F0(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,3038
	ctx.r10.s64 = ctx.r1.s64 + 3038;
	// addi r11,r27,11518
	ctx.r11.s64 = ctx.r27.s64 + 11518;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DF6C94:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82df6c94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DF6C94;
	// addi r4,r1,3040
	ctx.r4.s64 = ctx.r1.s64 + 3040;
	// addi r3,r1,3072
	ctx.r3.s64 = ctx.r1.s64 + 3072;
	// bl 0x82e742f0
	ctx.lr = 0x82DF6CAC;
	sub_82E742F0(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,3054
	ctx.r10.s64 = ctx.r1.s64 + 3054;
	// addi r11,r27,11530
	ctx.r11.s64 = ctx.r27.s64 + 11530;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DF6CBC:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82df6cbc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DF6CBC;
	// addi r4,r1,3056
	ctx.r4.s64 = ctx.r1.s64 + 3056;
	// addi r3,r1,3104
	ctx.r3.s64 = ctx.r1.s64 + 3104;
	// bl 0x82e742f0
	ctx.lr = 0x82DF6CD4;
	sub_82E742F0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3664
	ctx.r3.s64 = ctx.r1.s64 + 3664;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6CE0;
	sub_82A79BF8(ctx, base);
	// lwz r11,3680(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3680);
	// addi r3,r1,3664
	ctx.r3.s64 = ctx.r1.s64 + 3664;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6CF4;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6d0c
	if (cr6.eq) goto loc_82DF6D0C;
	// addi r4,r31,1036
	ctx.r4.s64 = ctx.r31.s64 + 1036;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6D0C;
	sub_82473550(ctx, base);
loc_82DF6D0C:
	// addi r3,r1,3024
	ctx.r3.s64 = ctx.r1.s64 + 3024;
	// bl 0x82e74260
	ctx.lr = 0x82DF6D14;
	sub_82E74260(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,-540
	ctx.r4.s64 = ctx.r31.s64 + -540;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6D24;
	sub_82473550(ctx, base);
	// addi r4,r31,1040
	ctx.r4.s64 = ctx.r31.s64 + 1040;
	// bl 0x82473550
	ctx.lr = 0x82DF6D2C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6D34;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3728
	ctx.r3.s64 = ctx.r1.s64 + 3728;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6D40;
	sub_82A79BF8(ctx, base);
	// lwz r11,3744(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3744);
	// addi r3,r1,3728
	ctx.r3.s64 = ctx.r1.s64 + 3728;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6D54;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6d6c
	if (cr6.eq) goto loc_82DF6D6C;
	// addi r4,r31,1044
	ctx.r4.s64 = ctx.r31.s64 + 1044;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6D6C;
	sub_82473550(ctx, base);
loc_82DF6D6C:
	// addi r3,r1,3072
	ctx.r3.s64 = ctx.r1.s64 + 3072;
	// bl 0x82e74260
	ctx.lr = 0x82DF6D74;
	sub_82E74260(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,-500
	ctx.r4.s64 = ctx.r31.s64 + -500;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6D84;
	sub_82473550(ctx, base);
	// addi r4,r31,1048
	ctx.r4.s64 = ctx.r31.s64 + 1048;
	// bl 0x82473550
	ctx.lr = 0x82DF6D8C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6D94;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3792
	ctx.r3.s64 = ctx.r1.s64 + 3792;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6DA0;
	sub_82A79BF8(ctx, base);
	// lwz r11,3808(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3808);
	// addi r3,r1,3792
	ctx.r3.s64 = ctx.r1.s64 + 3792;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6DB4;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6dcc
	if (cr6.eq) goto loc_82DF6DCC;
	// addi r4,r31,1052
	ctx.r4.s64 = ctx.r31.s64 + 1052;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6DCC;
	sub_82473550(ctx, base);
loc_82DF6DCC:
	// addi r3,r1,3104
	ctx.r3.s64 = ctx.r1.s64 + 3104;
	// bl 0x82e74260
	ctx.lr = 0x82DF6DD4;
	sub_82E74260(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,-472
	ctx.r4.s64 = ctx.r31.s64 + -472;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6DE4;
	sub_82473550(ctx, base);
	// addi r4,r31,1056
	ctx.r4.s64 = ctx.r31.s64 + 1056;
	// bl 0x82473550
	ctx.lr = 0x82DF6DEC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6DF4;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3856
	ctx.r3.s64 = ctx.r1.s64 + 3856;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6E00;
	sub_82A79BF8(ctx, base);
	// lwz r11,3872(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3872);
	// addi r3,r1,3856
	ctx.r3.s64 = ctx.r1.s64 + 3856;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6E14;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6e2c
	if (cr6.eq) goto loc_82DF6E2C;
	// addi r4,r31,1060
	ctx.r4.s64 = ctx.r31.s64 + 1060;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6E2C;
	sub_82473550(ctx, base);
loc_82DF6E2C:
	// addi r4,r31,-444
	ctx.r4.s64 = ctx.r31.s64 + -444;
	// lwz r30,11544(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11544);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6E3C;
	sub_82473550(ctx, base);
	// addi r4,r31,1064
	ctx.r4.s64 = ctx.r31.s64 + 1064;
	// bl 0x82473550
	ctx.lr = 0x82DF6E44;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6E4C;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3920
	ctx.r3.s64 = ctx.r1.s64 + 3920;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6E58;
	sub_82A79BF8(ctx, base);
	// lwz r11,3936(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3936);
	// addi r3,r1,3920
	ctx.r3.s64 = ctx.r1.s64 + 3920;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6E6C;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6e84
	if (cr6.eq) goto loc_82DF6E84;
	// addi r4,r31,1068
	ctx.r4.s64 = ctx.r31.s64 + 1068;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6E84;
	sub_82473550(ctx, base);
loc_82DF6E84:
	// lwz r11,2980(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2980);
	// lwz r30,2960(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2960);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82df6e98
	if (!cr6.lt) goto loc_82DF6E98;
	// addi r30,r1,2960
	ctx.r30.s64 = ctx.r1.s64 + 2960;
loc_82DF6E98:
	// addi r4,r31,-416
	ctx.r4.s64 = ctx.r31.s64 + -416;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6EA4;
	sub_82473550(ctx, base);
	// addi r4,r31,1072
	ctx.r4.s64 = ctx.r31.s64 + 1072;
	// bl 0x82473550
	ctx.lr = 0x82DF6EAC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x82DF6EB4;
	sub_82473550(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,3984
	ctx.r3.s64 = ctx.r1.s64 + 3984;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6EC0;
	sub_82A79BF8(ctx, base);
	// lwz r11,4000(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4000);
	// addi r3,r1,3984
	ctx.r3.s64 = ctx.r1.s64 + 3984;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6ED4;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6eec
	if (cr6.eq) goto loc_82DF6EEC;
	// addi r4,r31,1076
	ctx.r4.s64 = ctx.r31.s64 + 1076;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6EEC;
	sub_82473550(ctx, base);
loc_82DF6EEC:
	// addi r4,r31,-384
	ctx.r4.s64 = ctx.r31.s64 + -384;
	// lbz r30,11560(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11560);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6EFC;
	sub_82473550(ctx, base);
	// addi r4,r31,1080
	ctx.r4.s64 = ctx.r31.s64 + 1080;
	// bl 0x82473550
	ctx.lr = 0x82DF6F04;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6F0C;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4048
	ctx.r3.s64 = ctx.r1.s64 + 4048;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6F18;
	sub_82A79BF8(ctx, base);
	// lwz r11,4064(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4064);
	// addi r3,r1,4048
	ctx.r3.s64 = ctx.r1.s64 + 4048;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6F2C;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6f44
	if (cr6.eq) goto loc_82DF6F44;
	// addi r4,r31,1084
	ctx.r4.s64 = ctx.r31.s64 + 1084;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6F44;
	sub_82473550(ctx, base);
loc_82DF6F44:
	// addi r4,r31,-364
	ctx.r4.s64 = ctx.r31.s64 + -364;
	// lhz r30,11562(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 11562);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6F54;
	sub_82473550(ctx, base);
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// bl 0x82473550
	ctx.lr = 0x82DF6F5C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1f9f8
	ctx.lr = 0x82DF6F64;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4112
	ctx.r3.s64 = ctx.r1.s64 + 4112;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6F70;
	sub_82A79BF8(ctx, base);
	// lwz r11,4128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4128);
	// addi r3,r1,4112
	ctx.r3.s64 = ctx.r1.s64 + 4112;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6F84;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6f9c
	if (cr6.eq) goto loc_82DF6F9C;
	// addi r4,r31,1092
	ctx.r4.s64 = ctx.r31.s64 + 1092;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6F9C;
	sub_82473550(ctx, base);
loc_82DF6F9C:
	// addi r4,r31,-340
	ctx.r4.s64 = ctx.r31.s64 + -340;
	// lwz r30,11564(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11564);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6FAC;
	sub_82473550(ctx, base);
	// addi r4,r31,1096
	ctx.r4.s64 = ctx.r31.s64 + 1096;
	// bl 0x82473550
	ctx.lr = 0x82DF6FB4;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF6FBC;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4176
	ctx.r3.s64 = ctx.r1.s64 + 4176;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF6FC8;
	sub_82A79BF8(ctx, base);
	// lwz r11,4192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4192);
	// addi r3,r1,4176
	ctx.r3.s64 = ctx.r1.s64 + 4176;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF6FDC;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df6ff4
	if (cr6.eq) goto loc_82DF6FF4;
	// addi r4,r31,1100
	ctx.r4.s64 = ctx.r31.s64 + 1100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF6FF4;
	sub_82473550(ctx, base);
loc_82DF6FF4:
	// addi r4,r31,-312
	ctx.r4.s64 = ctx.r31.s64 + -312;
	// lwz r30,11568(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11568);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF7004;
	sub_82473550(ctx, base);
	// addi r4,r31,1104
	ctx.r4.s64 = ctx.r31.s64 + 1104;
	// bl 0x82473550
	ctx.lr = 0x82DF700C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF7014;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4240
	ctx.r3.s64 = ctx.r1.s64 + 4240;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF7020;
	sub_82A79BF8(ctx, base);
	// lwz r11,4256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4256);
	// addi r3,r1,4240
	ctx.r3.s64 = ctx.r1.s64 + 4240;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF7034;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df704c
	if (cr6.eq) goto loc_82DF704C;
	// addi r4,r31,1108
	ctx.r4.s64 = ctx.r31.s64 + 1108;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF704C;
	sub_82473550(ctx, base);
loc_82DF704C:
	// addi r4,r31,-276
	ctx.r4.s64 = ctx.r31.s64 + -276;
	// lbz r30,11572(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11572);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF705C;
	sub_82473550(ctx, base);
	// addi r4,r31,1112
	ctx.r4.s64 = ctx.r31.s64 + 1112;
	// bl 0x82473550
	ctx.lr = 0x82DF7064;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF706C;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4304
	ctx.r3.s64 = ctx.r1.s64 + 4304;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF7078;
	sub_82A79BF8(ctx, base);
	// lwz r11,4320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4320);
	// addi r3,r1,4304
	ctx.r3.s64 = ctx.r1.s64 + 4304;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF708C;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df70a4
	if (cr6.eq) goto loc_82DF70A4;
	// addi r4,r31,1116
	ctx.r4.s64 = ctx.r31.s64 + 1116;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF70A4;
	sub_82473550(ctx, base);
loc_82DF70A4:
	// addi r4,r31,-248
	ctx.r4.s64 = ctx.r31.s64 + -248;
	// lbz r30,11573(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11573);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF70B4;
	sub_82473550(ctx, base);
	// addi r4,r31,1120
	ctx.r4.s64 = ctx.r31.s64 + 1120;
	// bl 0x82473550
	ctx.lr = 0x82DF70BC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF70C4;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4368
	ctx.r3.s64 = ctx.r1.s64 + 4368;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF70D0;
	sub_82A79BF8(ctx, base);
	// lwz r11,4384(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4384);
	// addi r3,r1,4368
	ctx.r3.s64 = ctx.r1.s64 + 4368;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF70E4;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df70fc
	if (cr6.eq) goto loc_82DF70FC;
	// addi r4,r31,1124
	ctx.r4.s64 = ctx.r31.s64 + 1124;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF70FC;
	sub_82473550(ctx, base);
loc_82DF70FC:
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// lwz r30,11888(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11888);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF710C;
	sub_82473550(ctx, base);
	// addi r4,r31,1128
	ctx.r4.s64 = ctx.r31.s64 + 1128;
	// bl 0x82473550
	ctx.lr = 0x82DF7114;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF711C;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4432
	ctx.r3.s64 = ctx.r1.s64 + 4432;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF7128;
	sub_82A79BF8(ctx, base);
	// lwz r11,4448(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4448);
	// addi r3,r1,4432
	ctx.r3.s64 = ctx.r1.s64 + 4432;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF713C;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df7154
	if (cr6.eq) goto loc_82DF7154;
	// addi r4,r31,1132
	ctx.r4.s64 = ctx.r31.s64 + 1132;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF7154;
	sub_82473550(ctx, base);
loc_82DF7154:
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// lwz r30,11892(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11892);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF7164;
	sub_82473550(ctx, base);
	// addi r4,r31,1136
	ctx.r4.s64 = ctx.r31.s64 + 1136;
	// bl 0x82473550
	ctx.lr = 0x82DF716C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF7174;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4496
	ctx.r3.s64 = ctx.r1.s64 + 4496;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF7180;
	sub_82A79BF8(ctx, base);
	// lwz r11,4512(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4512);
	// addi r3,r1,4496
	ctx.r3.s64 = ctx.r1.s64 + 4496;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF7194;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df71ac
	if (cr6.eq) goto loc_82DF71AC;
	// addi r4,r31,1140
	ctx.r4.s64 = ctx.r31.s64 + 1140;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF71AC;
	sub_82473550(ctx, base);
loc_82DF71AC:
	// addi r4,r31,-156
	ctx.r4.s64 = ctx.r31.s64 + -156;
	// lwz r30,11896(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11896);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF71BC;
	sub_82473550(ctx, base);
	// addi r4,r31,1144
	ctx.r4.s64 = ctx.r31.s64 + 1144;
	// bl 0x82473550
	ctx.lr = 0x82DF71C4;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF71CC;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4560
	ctx.r3.s64 = ctx.r1.s64 + 4560;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF71D8;
	sub_82A79BF8(ctx, base);
	// lwz r11,4576(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4576);
	// addi r3,r1,4560
	ctx.r3.s64 = ctx.r1.s64 + 4560;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF71EC;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df7204
	if (cr6.eq) goto loc_82DF7204;
	// addi r4,r31,1148
	ctx.r4.s64 = ctx.r31.s64 + 1148;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF7204;
	sub_82473550(ctx, base);
loc_82DF7204:
	// addi r4,r31,-124
	ctx.r4.s64 = ctx.r31.s64 + -124;
	// lwz r30,11900(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11900);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF7214;
	sub_82473550(ctx, base);
	// addi r4,r31,1152
	ctx.r4.s64 = ctx.r31.s64 + 1152;
	// bl 0x82473550
	ctx.lr = 0x82DF721C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF7224;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4624
	ctx.r3.s64 = ctx.r1.s64 + 4624;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF7230;
	sub_82A79BF8(ctx, base);
	// lwz r11,4640(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4640);
	// addi r3,r1,4624
	ctx.r3.s64 = ctx.r1.s64 + 4624;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF7244;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df725c
	if (cr6.eq) goto loc_82DF725C;
	// addi r4,r31,1156
	ctx.r4.s64 = ctx.r31.s64 + 1156;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF725C;
	sub_82473550(ctx, base);
loc_82DF725C:
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// lwz r30,11904(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11904);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF726C;
	sub_82473550(ctx, base);
	// addi r4,r31,1160
	ctx.r4.s64 = ctx.r31.s64 + 1160;
	// bl 0x82473550
	ctx.lr = 0x82DF7274;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF727C;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4688
	ctx.r3.s64 = ctx.r1.s64 + 4688;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF7288;
	sub_82A79BF8(ctx, base);
	// lwz r11,4704(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4704);
	// addi r3,r1,4688
	ctx.r3.s64 = ctx.r1.s64 + 4688;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF729C;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df72b4
	if (cr6.eq) goto loc_82DF72B4;
	// addi r4,r31,1164
	ctx.r4.s64 = ctx.r31.s64 + 1164;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF72B4;
	sub_82473550(ctx, base);
loc_82DF72B4:
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// lwz r30,11908(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11908);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF72C4;
	sub_82473550(ctx, base);
	// addi r4,r31,1168
	ctx.r4.s64 = ctx.r31.s64 + 1168;
	// bl 0x82473550
	ctx.lr = 0x82DF72CC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF72D4;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4752
	ctx.r3.s64 = ctx.r1.s64 + 4752;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF72E0;
	sub_82A79BF8(ctx, base);
	// lwz r11,4768(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4768);
	// addi r3,r1,4752
	ctx.r3.s64 = ctx.r1.s64 + 4752;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF72F4;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df730c
	if (cr6.eq) goto loc_82DF730C;
	// addi r4,r31,1172
	ctx.r4.s64 = ctx.r31.s64 + 1172;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF730C;
	sub_82473550(ctx, base);
loc_82DF730C:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r30,11912(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11912);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF731C;
	sub_82473550(ctx, base);
	// addi r4,r31,1176
	ctx.r4.s64 = ctx.r31.s64 + 1176;
	// bl 0x82473550
	ctx.lr = 0x82DF7324;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF732C;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,4816
	ctx.r3.s64 = ctx.r1.s64 + 4816;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF7338;
	sub_82A79BF8(ctx, base);
	// lwz r11,4832(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4832);
	// addi r3,r1,4816
	ctx.r3.s64 = ctx.r1.s64 + 4816;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x824707c8
	ctx.lr = 0x82DF734C;
	sub_824707C8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df7364
	if (cr6.eq) goto loc_82DF7364;
	// addi r4,r31,1180
	ctx.r4.s64 = ctx.r31.s64 + 1180;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF7364;
	sub_82473550(ctx, base);
loc_82DF7364:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r30,11916(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11916);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82473550
	ctx.lr = 0x82DF7374;
	sub_82473550(ctx, base);
	// addi r4,r31,1184
	ctx.r4.s64 = ctx.r31.s64 + 1184;
	// bl 0x82473550
	ctx.lr = 0x82DF737C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82DF7384;
	sub_82474170(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,2992
	ctx.r3.s64 = ctx.r1.s64 + 2992;
	// bl 0x82a79bf8
	ctx.lr = 0x82DF7390;
	sub_82A79BF8(ctx, base);
	// lwz r11,3012(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3012);
	// lwz r4,2992(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2992);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82df73a4
	if (!cr6.lt) goto loc_82DF73A4;
	// addi r4,r1,2992
	ctx.r4.s64 = ctx.r1.s64 + 2992;
loc_82DF73A4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82DF73AC;
	sub_8259D6C0(ctx, base);
	// addi r3,r1,2992
	ctx.r3.s64 = ctx.r1.s64 + 2992;
	// bl 0x824707c8
	ctx.lr = 0x82DF73B4;
	sub_824707C8(ctx, base);
	// addi r3,r1,2960
	ctx.r3.s64 = ctx.r1.s64 + 2960;
	// bl 0x8387e8e0
	ctx.lr = 0x82DF73BC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f73d60
	ctx.lr = 0x82DF73C4;
	sub_82F73D60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a795b8
	ctx.lr = 0x82DF73CC;
	sub_82A795B8(ctx, base);
loc_82DF73CC:
	// addi r1,r1,4992
	ctx.r1.s64 = ctx.r1.s64 + 4992;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF73D4"))) PPC_WEAK_FUNC(sub_82DF73D4);
PPC_FUNC_IMPL(__imp__sub_82DF73D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF73D8"))) PPC_WEAK_FUNC(sub_82DF73D8);
PPC_FUNC_IMPL(__imp__sub_82DF73D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF73E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// addi r31,r3,60
	ctx.r31.s64 = ctx.r3.s64 + 60;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df740c
	if (cr6.lt) goto loc_82DF740C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82df7410
	goto loc_82DF7410;
loc_82DF740C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82DF7410:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x82d860f0
	ctx.lr = 0x82DF7418;
	sub_82D860F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df7428
	if (cr6.eq) goto loc_82DF7428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df3808
	ctx.lr = 0x82DF7428;
	sub_82DF3808(ctx, base);
loc_82DF7428:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82df7440
	if (!cr6.eq) goto loc_82DF7440;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DF7440:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df7454
	if (cr6.lt) goto loc_82DF7454;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82df7458
	goto loc_82DF7458;
loc_82DF7454:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82DF7458:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DF745C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df745c
	if (!cr6.eq) goto loc_82DF745C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DF7480;
	sub_8259CC28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF748C"))) PPC_WEAK_FUNC(sub_82DF748C);
PPC_FUNC_IMPL(__imp__sub_82DF748C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF7490"))) PPC_WEAK_FUNC(sub_82DF7490);
PPC_FUNC_IMPL(__imp__sub_82DF7490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DF74BC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df74e0
	if (cr6.eq) goto loc_82DF74E0;
	// bl 0x83602158
	ctx.lr = 0x82DF74C8;
	sub_83602158(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82DF74E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF74FC"))) PPC_WEAK_FUNC(sub_82DF74FC);
PPC_FUNC_IMPL(__imp__sub_82DF74FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF7500"))) PPC_WEAK_FUNC(sub_82DF7500);
PPC_FUNC_IMPL(__imp__sub_82DF7500) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,340
	ctx.r4.s64 = 340;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DF7530;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df7578
	if (cr6.eq) goto loc_82DF7578;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82eabfb0
	ctx.lr = 0x82DF7544;
	sub_82EABFB0(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,3024
	ctx.r9.s64 = ctx.r10.s64 + 3024;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stb r8,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r8.u8);
	// stb r11,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r11.u8);
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// b 0x82df757c
	goto loc_82DF757C;
loc_82DF7578:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF757C:
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

__attribute__((alias("__imp__sub_82DF7594"))) PPC_WEAK_FUNC(sub_82DF7594);
PPC_FUNC_IMPL(__imp__sub_82DF7594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF7598"))) PPC_WEAK_FUNC(sub_82DF7598);
PPC_FUNC_IMPL(__imp__sub_82DF7598) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,3024
	ctx.r10.s64 = ctx.r11.s64 + 3024;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82eac080
	ctx.lr = 0x82DF75C4;
	sub_82EAC080(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df75dc
	if (cr6.eq) goto loc_82DF75DC;
	// bl 0x82416268
	ctx.lr = 0x82DF75D8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DF75DC:
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

__attribute__((alias("__imp__sub_82DF75F4"))) PPC_WEAK_FUNC(sub_82DF75F4);
PPC_FUNC_IMPL(__imp__sub_82DF75F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF75F8"))) PPC_WEAK_FUNC(sub_82DF75F8);
PPC_FUNC_IMPL(__imp__sub_82DF75F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eabca8
	ctx.lr = 0x82DF7610;
	sub_82EABCA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df7640
	if (cr6.eq) goto loc_82DF7640;
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r3,316
	ctx.r11.s64 = ctx.r3.s64 + 316;
	// stw r10,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r10.u32);
	// lwz r9,336(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82df7634
	if (cr6.lt) goto loc_82DF7634;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DF7634:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eac690
	ctx.lr = 0x82DF7640;
	sub_82EAC690(ctx, base);
loc_82DF7640:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82DF7658"))) PPC_WEAK_FUNC(sub_82DF7658);
PPC_FUNC_IMPL(__imp__sub_82DF7658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF7660;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82eabcc0
	ctx.lr = 0x82DF766C;
	sub_82EABCC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df7770
	if (cr6.eq) goto loc_82DF7770;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r3,352
	ctx.r30.s64 = ctx.r3.s64 + 352;
	// addi r10,r11,32128
	ctx.r10.s64 = ctx.r11.s64 + 32128;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83355940
	ctx.lr = 0x82DF76A4;
	sub_83355940(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82DF76B4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82df76b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DF76B4;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82e73840
	ctx.lr = 0x82DF76D0;
	sub_82E73840(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// beq cr6,0x82df7768
	if (cr6.eq) goto loc_82DF7768;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r3,r3,-32412
	ctx.r3.s64 = ctx.r3.s64 + -32412;
loc_82DF76EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82df76ec
	if (!cr6.eq) goto loc_82DF76EC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82DF7718;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82df7768
	if (!cr6.eq) goto loc_82DF7768;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r5,32768
	cr6.compare<uint32_t>(ctx.r5.u32, 32768, xer);
	// bgt cr6,0x82df7768
	if (cr6.gt) goto loc_82DF7768;
	// lwz r3,328(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df7768
	if (cr6.eq) goto loc_82DF7768;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82df7768
	if (cr6.eq) goto loc_82DF7768;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82df7768
	if (cr6.gt) goto loc_82DF7768;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82DF7754;
	sub_831CE980(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,336(r29)
	PPC_STORE_U8(ctx.r29.u32 + 336, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DF7768:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,336(r29)
	PPC_STORE_U8(ctx.r29.u32 + 336, ctx.r11.u8);
loc_82DF7770:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF777C"))) PPC_WEAK_FUNC(sub_82DF777C);
PPC_FUNC_IMPL(__imp__sub_82DF777C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF7780"))) PPC_WEAK_FUNC(sub_82DF7780);
PPC_FUNC_IMPL(__imp__sub_82DF7780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF7788;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,392
	ctx.r4.s64 = 392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DF77A8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df77bc
	if (cr6.eq) goto loc_82DF77BC;
	// bl 0x83602a50
	ctx.lr = 0x82DF77B4;
	sub_83602A50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82df77c0
	goto loc_82DF77C0;
loc_82DF77BC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DF77C0:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82DF77D4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df77e8
	if (cr6.eq) goto loc_82DF77E8;
	// bl 0x83602c18
	ctx.lr = 0x82DF77E0;
	sub_83602C18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82df77ec
	goto loc_82DF77EC;
loc_82DF77E8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82DF77EC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DF7804;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF780C"))) PPC_WEAK_FUNC(sub_82DF780C);
PPC_FUNC_IMPL(__imp__sub_82DF780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF7810"))) PPC_WEAK_FUNC(sub_82DF7810);
PPC_FUNC_IMPL(__imp__sub_82DF7810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF7818;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,3544
	ctx.r10.s64 = ctx.r11.s64 + 3544;
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r4,220(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82df7848
	if (cr6.eq) goto loc_82DF7848;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DF7848;
	sub_825952B8(ctx, base);
loc_82DF7848:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82df7870
	if (cr6.eq) goto loc_82DF7870;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82DF7870;
	sub_825952B8(ctx, base);
loc_82DF7870:
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82DF7884;
	sub_82E8BDC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF788C"))) PPC_WEAK_FUNC(sub_82DF788C);
PPC_FUNC_IMPL(__imp__sub_82DF788C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF7890"))) PPC_WEAK_FUNC(sub_82DF7890);
PPC_FUNC_IMPL(__imp__sub_82DF7890) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82df7810
	ctx.lr = 0x82DF78B0;
	sub_82DF7810(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df78c8
	if (cr6.eq) goto loc_82DF78C8;
	// bl 0x82416268
	ctx.lr = 0x82DF78C4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DF78C8:
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

__attribute__((alias("__imp__sub_82DF78E0"))) PPC_WEAK_FUNC(sub_82DF78E0);
PPC_FUNC_IMPL(__imp__sub_82DF78E0) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,240
	ctx.r4.s64 = 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DF7910;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df795c
	if (cr6.eq) goto loc_82DF795C;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82DF7928;
	sub_82E8BA80(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,3544
	ctx.r9.s64 = ctx.r10.s64 + 3544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// b 0x82df7960
	goto loc_82DF7960;
loc_82DF795C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF7960:
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

__attribute__((alias("__imp__sub_82DF7978"))) PPC_WEAK_FUNC(sub_82DF7978);
PPC_FUNC_IMPL(__imp__sub_82DF7978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df7988
	if (cr6.lt) goto loc_82DF7988;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82DF7988:
	// b 0x82df78e0
	sub_82DF78E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF798C"))) PPC_WEAK_FUNC(sub_82DF798C);
PPC_FUNC_IMPL(__imp__sub_82DF798C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF7990"))) PPC_WEAK_FUNC(sub_82DF7990);
PPC_FUNC_IMPL(__imp__sub_82DF7990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DF7998;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82e8bae0
	ctx.lr = 0x82DF79A4;
	sub_82E8BAE0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,3448
	ctx.r30.s64 = ctx.r11.s64 + 3448;
	// addi r3,r3,344
	ctx.r3.s64 = ctx.r3.s64 + 344;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x824208c8
	ctx.lr = 0x82DF79C0;
	sub_824208C8(ctx, base);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x824208c8
	ctx.lr = 0x82DF79D0;
	sub_824208C8(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82DF79D4;
	sub_82D860F0(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// addi r31,r31,376
	ctx.r31.s64 = ctx.r31.s64 + 376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824238b8
	ctx.lr = 0x82DF79E4;
	sub_824238B8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82DF79F0:
	// lwz r11,208(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// lwz r30,204(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// bge cr6,0x82df7a50
	if (!cr6.lt) goto loc_82DF7A50;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82df7a30
	if (cr6.lt) goto loc_82DF7A30;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82423930
	ctx.lr = 0x82DF7A24;
	sub_82423930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df7a94
	if (cr6.eq) goto loc_82DF7A94;
loc_82DF7A30:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82df7a88
	if (cr0.eq) goto loc_82DF7A88;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82df7a88
	goto loc_82DF7A88;
loc_82DF7A50:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82df7a70
	if (cr6.lt) goto loc_82DF7A70;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82423930
	ctx.lr = 0x82DF7A64;
	sub_82423930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df7a94
	if (cr6.eq) goto loc_82DF7A94;
loc_82DF7A70:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82df7a88
	if (cr0.eq) goto loc_82DF7A88;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_82DF7A88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82DF7A94:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r29,56
	cr6.compare<uint32_t>(ctx.r29.u32, 56, xer);
	// blt cr6,0x82df79f0
	if (cr6.lt) goto loc_82DF79F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7AB0"))) PPC_WEAK_FUNC(sub_82DF7AB0);
PPC_FUNC_IMPL(__imp__sub_82DF7AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DF7AB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82DF7AC4;
	sub_82E8BAE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df7b44
	if (cr6.eq) goto loc_82DF7B44;
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// addi r29,r31,220
	ctx.r29.s64 = ctx.r31.s64 + 220;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// lwz r31,220(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82df7b0c
	if (cr6.eq) goto loc_82DF7B0C;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82DF7B04;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82DF7B0C:
	// lwz r11,352(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 352);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82df7b44
	if (!cr6.gt) goto loc_82DF7B44;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82DF7B20:
	// lwz r11,360(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 360);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x835977d8
	ctx.lr = 0x82DF7B30;
	sub_835977D8(ctx, base);
	// lwz r11,352(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 352);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82df7b20
	if (cr6.lt) goto loc_82DF7B20;
loc_82DF7B44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7B50"))) PPC_WEAK_FUNC(sub_82DF7B50);
PPC_FUNC_IMPL(__imp__sub_82DF7B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DF7B58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,204(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r4,208(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// addi r30,r3,204
	ctx.r30.s64 = ctx.r3.s64 + 204;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82df7b94
	if (cr6.eq) goto loc_82DF7B94;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82DF7B8C;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82DF7B94:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x82df7bbc
	if (cr6.eq) goto loc_82DF7BBC;
loc_82DF7BA4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82DF7BB0;
	sub_835977D8(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82df7ba4
	if (!cr6.eq) goto loc_82DF7BA4;
loc_82DF7BBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7BC4"))) PPC_WEAK_FUNC(sub_82DF7BC4);
PPC_FUNC_IMPL(__imp__sub_82DF7BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF7BC8"))) PPC_WEAK_FUNC(sub_82DF7BC8);
PPC_FUNC_IMPL(__imp__sub_82DF7BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF7BD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DF7BF0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df7c04
	if (cr6.eq) goto loc_82DF7C04;
	// bl 0x83603870
	ctx.lr = 0x82DF7BFC;
	sub_83603870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82df7c08
	goto loc_82DF7C08;
loc_82DF7C04:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DF7C08:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82DF7C1C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df7c30
	if (cr6.eq) goto loc_82DF7C30;
	// bl 0x83603a18
	ctx.lr = 0x82DF7C28;
	sub_83603A18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82df7c34
	goto loc_82DF7C34;
loc_82DF7C30:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82DF7C34:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DF7C4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7C54"))) PPC_WEAK_FUNC(sub_82DF7C54);
PPC_FUNC_IMPL(__imp__sub_82DF7C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF7C58"))) PPC_WEAK_FUNC(sub_82DF7C58);
PPC_FUNC_IMPL(__imp__sub_82DF7C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lwz r9,216(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	// lwz r11,212(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r7,84
	ctx.r7.s64 = 84;
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// ori r4,r8,65535
	ctx.r4.u64 = ctx.r8.u64 | 65535;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r9,-1028(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1028);
	// li r8,0
	ctx.r8.s64 = 0;
	// srawi r10,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// clrlwi r7,r9,14
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFF;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bge cr6,0x82df7cb0
	if (!cr6.lt) goto loc_82DF7CB0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x82df7cc8
	goto loc_82DF7CC8;
loc_82DF7CB0:
	// bgt cr6,0x82df7cc0
	if (cr6.gt) goto loc_82DF7CC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82DF7CC0;
	sub_831CC188(ctx, base);
loc_82DF7CC0:
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82DF7CC8:
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF7CF8"))) PPC_WEAK_FUNC(sub_82DF7CF8);
PPC_FUNC_IMPL(__imp__sub_82DF7CF8) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82DF7D10;
	sub_82E8BAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df7d4c
	if (cr6.eq) goto loc_82DF7D4C;
	// bl 0x82d860f0
	ctx.lr = 0x82DF7D20;
	sub_82D860F0(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r30,r11,3720
	ctx.r30.s64 = ctx.r11.s64 + 3720;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x824208c8
	ctx.lr = 0x82DF7D3C;
	sub_824208C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82DF7D4C;
	sub_824208C8(ctx, base);
loc_82DF7D4C:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82DF7D68"))) PPC_WEAK_FUNC(sub_82DF7D68);
PPC_FUNC_IMPL(__imp__sub_82DF7D68) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,3816
	ctx.r10.s64 = ctx.r11.s64 + 3816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r4,212(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82df7dac
	if (cr6.eq) goto loc_82DF7DAC;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF7DAC;
	sub_825952B8(ctx, base);
loc_82DF7DAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// bl 0x82eac9b0
	ctx.lr = 0x82DF7DC4;
	sub_82EAC9B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df7ddc
	if (cr6.eq) goto loc_82DF7DDC;
	// bl 0x82416268
	ctx.lr = 0x82DF7DD8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DF7DDC:
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

__attribute__((alias("__imp__sub_82DF7DF4"))) PPC_WEAK_FUNC(sub_82DF7DF4);
PPC_FUNC_IMPL(__imp__sub_82DF7DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF7DF8"))) PPC_WEAK_FUNC(sub_82DF7DF8);
PPC_FUNC_IMPL(__imp__sub_82DF7DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DF7E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82DF7E0C;
	sub_82E8BAE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df7ea8
	if (cr6.eq) goto loc_82DF7EA8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// addi r30,r3,352
	ctx.r30.s64 = ctx.r3.s64 + 352;
	// stw r10,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r10.u32);
	// lwz r9,360(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// lwz r8,352(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mulli r10,r8,44
	ctx.r10.s64 = ctx.r8.s64 * 44;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x82df7ea0
	if (cr6.eq) goto loc_82DF7EA0;
	// addi r28,r29,212
	ctx.r28.s64 = ctx.r29.s64 + 212;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_82DF7E44:
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x82d90990
	ctx.lr = 0x82DF7E4C;
	sub_82D90990(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,208(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r7,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r7.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x831b0e08
	ctx.lr = 0x82DF7E80;
	sub_831B0E08(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// mulli r11,r5,44
	ctx.r11.s64 = ctx.r5.s64 * 44;
	// addi r6,r31,-32
	ctx.r6.s64 = ctx.r31.s64 + -32;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bne cr6,0x82df7e44
	if (!cr6.eq) goto loc_82DF7E44;
loc_82DF7EA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,228(r29)
	PPC_STORE_U8(ctx.r29.u32 + 228, ctx.r11.u8);
loc_82DF7EA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7EB0"))) PPC_WEAK_FUNC(sub_82DF7EB0);
PPC_FUNC_IMPL(__imp__sub_82DF7EB0) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,232
	ctx.r4.s64 = 232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DF7EE0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82df7f24
	if (cr6.eq) goto loc_82DF7F24;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82eac968
	ctx.lr = 0x82DF7EF8;
	sub_82EAC968(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,3816
	ctx.r9.s64 = ctx.r10.s64 + 3816;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stb r11,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r11.u8);
	// b 0x82df7f28
	goto loc_82DF7F28;
loc_82DF7F24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DF7F28:
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

__attribute__((alias("__imp__sub_82DF7F40"))) PPC_WEAK_FUNC(sub_82DF7F40);
PPC_FUNC_IMPL(__imp__sub_82DF7F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df7f50
	if (cr6.lt) goto loc_82DF7F50;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82DF7F50:
	// b 0x82df7eb0
	sub_82DF7EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF7F54"))) PPC_WEAK_FUNC(sub_82DF7F54);
PPC_FUNC_IMPL(__imp__sub_82DF7F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF7F58"))) PPC_WEAK_FUNC(sub_82DF7F58);
PPC_FUNC_IMPL(__imp__sub_82DF7F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
loc_82DF7F6C:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r5.u32);
loc_82DF7F90:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82df7f90
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DF7F90;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82df7f6c
	if (!cr6.eq) goto loc_82DF7F6C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF7FB4"))) PPC_WEAK_FUNC(sub_82DF7FB4);
PPC_FUNC_IMPL(__imp__sub_82DF7FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF7FB8"))) PPC_WEAK_FUNC(sub_82DF7FB8);
PPC_FUNC_IMPL(__imp__sub_82DF7FB8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r31,r11,4268
	ctx.r31.s64 = ctx.r11.s64 + 4268;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82472fc0
	ctx.lr = 0x82DF7FFC;
	sub_82472FC0(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x82df8018
	if (!cr6.eq) goto loc_82DF8018;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82472fc0
	ctx.lr = 0x82DF8018;
	sub_82472FC0(ctx, base);
loc_82DF8018:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82df8034
	if (!cr6.eq) goto loc_82DF8034;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82472fc0
	ctx.lr = 0x82DF8034;
	sub_82472FC0(ctx, base);
loc_82DF8034:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df8048
	if (cr6.lt) goto loc_82DF8048;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82DF8048;
	sub_82416268(ctx, base);
loc_82DF8048:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82DF8060"))) PPC_WEAK_FUNC(sub_82DF8060);
PPC_FUNC_IMPL(__imp__sub_82DF8060) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r4,r10,-22544
	ctx.r4.s64 = ctx.r10.s64 + -22544;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82472fc0
	ctx.lr = 0x82DF80A0;
	sub_82472FC0(ctx, base);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82df80c4
	if (cr6.eq) goto loc_82DF80C4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82df7f58
	ctx.lr = 0x82DF80C0;
	sub_82DF7F58(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_82DF80C4:
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

__attribute__((alias("__imp__sub_82DF80DC"))) PPC_WEAK_FUNC(sub_82DF80DC);
PPC_FUNC_IMPL(__imp__sub_82DF80DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF80E0"))) PPC_WEAK_FUNC(sub_82DF80E0);
PPC_FUNC_IMPL(__imp__sub_82DF80E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF80E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82df810c
	if (cr6.eq) goto loc_82DF810C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF810C;
	sub_825952B8(ctx, base);
loc_82DF810C:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df8134
	if (cr6.lt) goto loc_82DF8134;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82DF8134;
	sub_82416268(ctx, base);
loc_82DF8134:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF814C"))) PPC_WEAK_FUNC(sub_82DF814C);
PPC_FUNC_IMPL(__imp__sub_82DF814C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF8150"))) PPC_WEAK_FUNC(sub_82DF8150);
PPC_FUNC_IMPL(__imp__sub_82DF8150) {
	PPC_FUNC_PROLOGUE();
	// b 0x82df8060
	sub_82DF8060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF8154"))) PPC_WEAK_FUNC(sub_82DF8154);
PPC_FUNC_IMPL(__imp__sub_82DF8154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF8158"))) PPC_WEAK_FUNC(sub_82DF8158);
PPC_FUNC_IMPL(__imp__sub_82DF8158) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// addi r4,r10,-22544
	ctx.r4.s64 = ctx.r10.s64 + -22544;
	// bl 0x82472fc0
	ctx.lr = 0x82DF8198;
	sub_82472FC0(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// bl 0x82df8060
	ctx.lr = 0x82DF81AC;
	sub_82DF8060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82DF81C8"))) PPC_WEAK_FUNC(sub_82DF81C8);
PPC_FUNC_IMPL(__imp__sub_82DF81C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82df8158
	ctx.lr = 0x82DF81E0;
	sub_82DF8158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df8060
	ctx.lr = 0x82DF81E8;
	sub_82DF8060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82DF8200"))) PPC_WEAK_FUNC(sub_82DF8200);
PPC_FUNC_IMPL(__imp__sub_82DF8200) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF8248"))) PPC_WEAK_FUNC(sub_82DF8248);
PPC_FUNC_IMPL(__imp__sub_82DF8248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DF8250;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82df8368
	if (cr6.eq) goto loc_82DF8368;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82df8368
	if (cr6.eq) goto loc_82DF8368;
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 + 12;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r10,r5,20
	ctx.r10.s64 = ctx.r5.s64 + 20;
	// addi r9,r5,24
	ctx.r9.s64 = ctx.r5.s64 + 24;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// li r7,49
	ctx.r7.s64 = 49;
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// li r6,51
	ctx.r6.s64 = 51;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r5,38
	ctx.r5.s64 = 38;
	// li r3,111
	ctx.r3.s64 = 111;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r27,14
	ctx.r27.s64 = 14;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r9,62
	ctx.r9.s64 = 62;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r28,r4,4
	ctx.r28.s64 = ctx.r4.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r30,r10,-12
	ctx.r30.s64 = ctx.r10.s64 + -12;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r29,7
	ctx.r29.s64 = 7;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
loc_82DF830C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r25,12(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzu r27,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x8291ad98
	ctx.lr = 0x82DF8320;
	sub_8291AD98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x829194e8
	ctx.lr = 0x82DF832C;
	sub_829194E8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// bne 0x82df830c
	if (!cr0.eq) goto loc_82DF830C;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291b4e0
	ctx.lr = 0x82DF8348;
	sub_8291B4E0(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,26160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,28
	ctx.r12.s64 = 28;
	// stfiwx f13,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f13.u32);
loc_82DF8368:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF8370"))) PPC_WEAK_FUNC(sub_82DF8370);
PPC_FUNC_IMPL(__imp__sub_82DF8370) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82df8248
	ctx.lr = 0x82DF8398;
	sub_82DF8248(ctx, base);
	// addi r5,r31,36
	ctx.r5.s64 = ctx.r31.s64 + 36;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df8248
	ctx.lr = 0x82DF83AC;
	sub_82DF8248(ctx, base);
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

__attribute__((alias("__imp__sub_82DF83C4"))) PPC_WEAK_FUNC(sub_82DF83C4);
PPC_FUNC_IMPL(__imp__sub_82DF83C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF83C8"))) PPC_WEAK_FUNC(sub_82DF83C8);
PPC_FUNC_IMPL(__imp__sub_82DF83C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,4512
	ctx.r9.s64 = ctx.r10.s64 + 4512;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF8460"))) PPC_WEAK_FUNC(sub_82DF8460);
PPC_FUNC_IMPL(__imp__sub_82DF8460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// addi r9,r11,4512
	ctx.r9.s64 = ctx.r11.s64 + 4512;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,-21080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21080, ctx.r11.u32);
	// beq cr6,0x82df84a0
	if (cr6.eq) goto loc_82DF84A0;
	// bl 0x82416268
	ctx.lr = 0x82DF849C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DF84A0:
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

__attribute__((alias("__imp__sub_82DF84B4"))) PPC_WEAK_FUNC(sub_82DF84B4);
PPC_FUNC_IMPL(__imp__sub_82DF84B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF84B8"))) PPC_WEAK_FUNC(sub_82DF84B8);
PPC_FUNC_IMPL(__imp__sub_82DF84B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF84F8"))) PPC_WEAK_FUNC(sub_82DF84F8);
PPC_FUNC_IMPL(__imp__sub_82DF84F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82df8530
	if (cr6.eq) goto loc_82DF8530;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DF8514:
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x82df8538
	if (cr6.eq) goto loc_82DF8538;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x82df8514
	if (cr6.lt) goto loc_82DF8514;
loc_82DF8530:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82DF8538:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF8568"))) PPC_WEAK_FUNC(sub_82DF8568);
PPC_FUNC_IMPL(__imp__sub_82DF8568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82df85b4
	if (cr6.eq) goto loc_82DF85B4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x82df85b0
	if (cr6.eq) goto loc_82DF85B0;
loc_82DF8588:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82df8588
	if (!cr6.eq) goto loc_82DF8588;
loc_82DF85B0:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_82DF85B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF85C0"))) PPC_WEAK_FUNC(sub_82DF85C0);
PPC_FUNC_IMPL(__imp__sub_82DF85C0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r3,-32236
	ctx.r3.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,-4628
	ctx.r10.s64 = ctx.r3.s64 + -4628;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// bl 0x82df8568
	ctx.lr = 0x82DF85F4;
	sub_82DF8568(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF8604"))) PPC_WEAK_FUNC(sub_82DF8604);
PPC_FUNC_IMPL(__imp__sub_82DF8604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF8608"))) PPC_WEAK_FUNC(sub_82DF8608);
PPC_FUNC_IMPL(__imp__sub_82DF8608) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,4788
	ctx.r10.s64 = ctx.r11.s64 + 4788;
	// addi r31,r3,128
	ctx.r31.s64 = ctx.r3.s64 + 128;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82df8650
	if (cr6.lt) goto loc_82DF8650;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF8650;
	sub_825952B8(ctx, base);
loc_82DF8650:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x82b52a30
	ctx.lr = 0x82DF866C;
	sub_82B52A30(ctx, base);
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

__attribute__((alias("__imp__sub_82DF8684"))) PPC_WEAK_FUNC(sub_82DF8684);
PPC_FUNC_IMPL(__imp__sub_82DF8684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF8688"))) PPC_WEAK_FUNC(sub_82DF8688);
PPC_FUNC_IMPL(__imp__sub_82DF8688) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82df8608
	ctx.lr = 0x82DF86A8;
	sub_82DF8608(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df86c0
	if (cr6.eq) goto loc_82DF86C0;
	// bl 0x82416268
	ctx.lr = 0x82DF86BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DF86C0:
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

__attribute__((alias("__imp__sub_82DF86D8"))) PPC_WEAK_FUNC(sub_82DF86D8);
PPC_FUNC_IMPL(__imp__sub_82DF86D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,4792
	ctx.r10.s64 = ctx.r11.s64 + 4792;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82df8608
	ctx.lr = 0x82DF8708;
	sub_82DF8608(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df8720
	if (cr6.eq) goto loc_82DF8720;
	// bl 0x82416268
	ctx.lr = 0x82DF871C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DF8720:
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

__attribute__((alias("__imp__sub_82DF8738"))) PPC_WEAK_FUNC(sub_82DF8738);
PPC_FUNC_IMPL(__imp__sub_82DF8738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF8740;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,4788
	ctx.r10.s64 = ctx.r11.s64 + 4788;
	// li r29,15
	ctx.r29.s64 = 15;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// bl 0x82b52c30
	ctx.lr = 0x82DF8798;
	sub_82B52C30(ctx, base);
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r30.u8);
	// bl 0x82da41e8
	ctx.lr = 0x82DF87AC;
	sub_82DA41E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF87B8"))) PPC_WEAK_FUNC(sub_82DF87B8);
PPC_FUNC_IMPL(__imp__sub_82DF87B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,4792
	ctx.r10.s64 = ctx.r11.s64 + 4792;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82df8738
	ctx.lr = 0x82DF87E0;
	sub_82DF8738(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_82DF8800"))) PPC_WEAK_FUNC(sub_82DF8800);
PPC_FUNC_IMPL(__imp__sub_82DF8800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DF8808;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df8834
	if (cr6.lt) goto loc_82DF8834;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DF8834;
	sub_825952B8(ctx, base);
loc_82DF8834:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82df8860
	if (cr6.eq) goto loc_82DF8860;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82DF8860;
	sub_825952B8(ctx, base);
loc_82DF8860:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF8874"))) PPC_WEAK_FUNC(sub_82DF8874);
PPC_FUNC_IMPL(__imp__sub_82DF8874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF8878"))) PPC_WEAK_FUNC(sub_82DF8878);
PPC_FUNC_IMPL(__imp__sub_82DF8878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF8880;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825359d8
	ctx.lr = 0x82DF8898;
	sub_825359D8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82545e38
	ctx.lr = 0x82DF88A0;
	sub_82545E38(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535130
	ctx.lr = 0x82DF88A8;
	sub_82535130(ctx, base);
	// lis r30,-31775
	ctx.r30.s64 = -2082406400;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r30,-528
	ctx.r11.s64 = ctx.r30.s64 + -528;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825346c8
	ctx.lr = 0x82DF88BC;
	sub_825346C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-528(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -528);
	// bl 0x82536d88
	ctx.lr = 0x82DF88C8;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x82DF88D0;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82DF88D8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82534640
	ctx.lr = 0x82DF88E4;
	sub_82534640(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,5152
	ctx.r30.s64 = ctx.r11.s64 + 5152;
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// bl 0x82536d88
	ctx.lr = 0x82DF88F8;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x82DF8900;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8908;
	sub_82535AA0(ctx, base);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82df8928
	if (cr6.eq) goto loc_82DF8928;
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// bl 0x825346c8
	ctx.lr = 0x82DF8920;
	sub_825346C8(ctx, base);
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// b 0x82df8934
	goto loc_82DF8934;
loc_82DF8928:
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// bl 0x825346c8
	ctx.lr = 0x82DF8930;
	sub_825346C8(ctx, base);
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
loc_82DF8934:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536d88
	ctx.lr = 0x82DF893C;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x82DF8944;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82DF894C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82534640
	ctx.lr = 0x82DF8958;
	sub_82534640(ctx, base);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536d88
	ctx.lr = 0x82DF8964;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x82DF896C;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8974;
	sub_82535AA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82534640
	ctx.lr = 0x82DF8980;
	sub_82534640(ctx, base);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536d88
	ctx.lr = 0x82DF898C;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x82DF8994;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82DF899C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82534640
	ctx.lr = 0x82DF89A8;
	sub_82534640(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536d88
	ctx.lr = 0x82DF89B4;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x82DF89BC;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82DF89C4;
	sub_82535AA0(ctx, base);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df89dc
	if (cr6.lt) goto loc_82DF89DC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82df89e0
	goto loc_82DF89E0;
loc_82DF89DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82DF89E0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825346c8
	ctx.lr = 0x82DF89E8;
	sub_825346C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536d88
	ctx.lr = 0x82DF89F4;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x82DF89FC;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8A04;
	sub_82535AA0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82546e88
	ctx.lr = 0x82DF8A14;
	sub_82546E88(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82df8a28
	if (!cr6.lt) goto loc_82DF8A28;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82DF8A28:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DF8A2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df8a2c
	if (!cr6.eq) goto loc_82DF8A2C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DF8A50;
	sub_8259CC28(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82df8a64
	if (cr6.lt) goto loc_82DF8A64;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8386d088
	ctx.lr = 0x82DF8A64;
	sub_8386D088(ctx, base);
loc_82DF8A64:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// bl 0x82545e60
	ctx.lr = 0x82DF8A80;
	sub_82545E60(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8A88;
	sub_82535AA0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df8aa8
	if (cr6.lt) goto loc_82DF8AA8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF8AA8;
	sub_825952B8(ctx, base);
loc_82DF8AA8:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF8ABC"))) PPC_WEAK_FUNC(sub_82DF8ABC);
PPC_FUNC_IMPL(__imp__sub_82DF8ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF8AC0"))) PPC_WEAK_FUNC(sub_82DF8AC0);
PPC_FUNC_IMPL(__imp__sub_82DF8AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF8AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r4.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825359d8
	ctx.lr = 0x82DF8AE4;
	sub_825359D8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82545e38
	ctx.lr = 0x82DF8AEC;
	sub_82545E38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535130
	ctx.lr = 0x82DF8AF4;
	sub_82535130(ctx, base);
	// lis r31,-31775
	ctx.r31.s64 = -2082406400;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r31,-528
	ctx.r11.s64 = ctx.r31.s64 + -528;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x825346c8
	ctx.lr = 0x82DF8B08;
	sub_825346C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -528);
	// bl 0x82536d88
	ctx.lr = 0x82DF8B14;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82DF8B1C;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8B24;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82534640
	ctx.lr = 0x82DF8B30;
	sub_82534640(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,5184
	ctx.r31.s64 = ctx.r10.s64 + 5184;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82536d88
	ctx.lr = 0x82DF8B44;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82DF8B4C;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8B54;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x82534640
	ctx.lr = 0x82DF8B60;
	sub_82534640(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x82DF8B6C;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82DF8B74;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8B7C;
	sub_82535AA0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82534698
	ctx.lr = 0x82DF8B88;
	sub_82534698(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x82DF8B94;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82DF8B9C;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8BA4;
	sub_82535AA0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82546e88
	ctx.lr = 0x82DF8BB4;
	sub_82546E88(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82df8bc8
	if (!cr6.lt) goto loc_82DF8BC8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82DF8BC8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DF8BCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df8bcc
	if (!cr6.eq) goto loc_82DF8BCC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DF8BF0;
	sub_8259CC28(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r10.u32);
	// blt cr6,0x82df8c0c
	if (cr6.lt) goto loc_82DF8C0C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82DF8C0C;
	sub_8386D088(ctx, base);
loc_82DF8C0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// bl 0x82545e60
	ctx.lr = 0x82DF8C28;
	sub_82545E60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8C30;
	sub_82535AA0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF8C38"))) PPC_WEAK_FUNC(sub_82DF8C38);
PPC_FUNC_IMPL(__imp__sub_82DF8C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF8C40;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825359d8
	ctx.lr = 0x82DF8C58;
	sub_825359D8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82545e38
	ctx.lr = 0x82DF8C60;
	sub_82545E38(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535130
	ctx.lr = 0x82DF8C68;
	sub_82535130(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,-528
	ctx.r31.s64 = ctx.r11.s64 + -528;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x825346c8
	ctx.lr = 0x82DF8C7C;
	sub_825346C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82536d88
	ctx.lr = 0x82DF8C88;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x82DF8C90;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8C98;
	sub_82535AA0(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82DF8C9C;
	sub_82D860F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82534640
	ctx.lr = 0x82DF8CA8;
	sub_82534640(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,5196
	ctx.r4.s64 = ctx.r11.s64 + 5196;
	// bl 0x82536d88
	ctx.lr = 0x82DF8CB8;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x82DF8CC0;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8CC8;
	sub_82535AA0(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82df8cdc
	if (cr6.lt) goto loc_82DF8CDC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82df8ce0
	goto loc_82DF8CE0;
loc_82DF8CDC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82DF8CE0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825346c8
	ctx.lr = 0x82DF8CE8;
	sub_825346C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82536d88
	ctx.lr = 0x82DF8CF4;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x82DF8CFC;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8D04;
	sub_82535AA0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82546e88
	ctx.lr = 0x82DF8D14;
	sub_82546E88(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82df8d28
	if (!cr6.lt) goto loc_82DF8D28;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82DF8D28:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DF8D2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df8d2c
	if (!cr6.eq) goto loc_82DF8D2C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DF8D50;
	sub_8259CC28(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82df8d64
	if (cr6.lt) goto loc_82DF8D64;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8386d088
	ctx.lr = 0x82DF8D64;
	sub_8386D088(ctx, base);
loc_82DF8D64:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82545e60
	ctx.lr = 0x82DF8D80;
	sub_82545E60(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8D88;
	sub_82535AA0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df8da8
	if (cr6.lt) goto loc_82DF8DA8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF8DA8;
	sub_825952B8(ctx, base);
loc_82DF8DA8:
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF8DBC"))) PPC_WEAK_FUNC(sub_82DF8DBC);
PPC_FUNC_IMPL(__imp__sub_82DF8DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF8DC0"))) PPC_WEAK_FUNC(sub_82DF8DC0);
PPC_FUNC_IMPL(__imp__sub_82DF8DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DF8DC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x825359d8
	ctx.lr = 0x82DF8DE8;
	sub_825359D8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82545e38
	ctx.lr = 0x82DF8DF0;
	sub_82545E38(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82df8e00
	if (!cr6.eq) goto loc_82DF8E00;
	// bl 0x82d860f0
	ctx.lr = 0x82DF8DFC;
	sub_82D860F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82DF8E00:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535130
	ctx.lr = 0x82DF8E08;
	sub_82535130(ctx, base);
	// lis r27,-31775
	ctx.r27.s64 = -2082406400;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r27,-528
	ctx.r11.s64 = ctx.r27.s64 + -528;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x825346c8
	ctx.lr = 0x82DF8E24;
	sub_825346C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-528(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -528);
	// bl 0x82536d88
	ctx.lr = 0x82DF8E30;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82DF8E38;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8E40;
	sub_82535AA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82534640
	ctx.lr = 0x82DF8E4C;
	sub_82534640(ctx, base);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,5480
	ctx.r4.s64 = ctx.r8.s64 + 5480;
	// bl 0x82536d88
	ctx.lr = 0x82DF8E5C;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82DF8E64;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8E6C;
	sub_82535AA0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82546e88
	ctx.lr = 0x82DF8E7C;
	sub_82546E88(ctx, base);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82df8e90
	if (!cr6.lt) goto loc_82DF8E90;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82DF8E90:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DF8E94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df8e94
	if (!cr6.eq) goto loc_82DF8E94;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DF8EB8;
	sub_8259CC28(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r28,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r28.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82df8ed0
	if (cr6.lt) goto loc_82DF8ED0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82DF8ED0;
	sub_8386D088(ctx, base);
loc_82DF8ED0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// bl 0x82545e60
	ctx.lr = 0x82DF8EEC;
	sub_82545E60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82DF8EF4;
	sub_82535AA0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF8EFC"))) PPC_WEAK_FUNC(sub_82DF8EFC);
PPC_FUNC_IMPL(__imp__sub_82DF8EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF8F00"))) PPC_WEAK_FUNC(sub_82DF8F00);
PPC_FUNC_IMPL(__imp__sub_82DF8F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DF8F08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x82df8f64
	if (cr6.eq) goto loc_82DF8F64;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x831ce420
	ctx.lr = 0x82DF8F5C;
	sub_831CE420(ctx, base);
	// add r10,r27,r29
	ctx.r10.u64 = ctx.r27.u64 + ctx.r29.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82DF8F64:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82DF8F78;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF8F88"))) PPC_WEAK_FUNC(sub_82DF8F88);
PPC_FUNC_IMPL(__imp__sub_82DF8F88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d860f0
	ctx.lr = 0x82DF8FA0;
	sub_82D860F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82df8dc0
	ctx.lr = 0x82DF8FB4;
	sub_82DF8DC0(ctx, base);
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

__attribute__((alias("__imp__sub_82DF8FC8"))) PPC_WEAK_FUNC(sub_82DF8FC8);
PPC_FUNC_IMPL(__imp__sub_82DF8FC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d860f0
	ctx.lr = 0x82DF8FE0;
	sub_82D860F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82df8dc0
	ctx.lr = 0x82DF8FF4;
	sub_82DF8DC0(ctx, base);
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

__attribute__((alias("__imp__sub_82DF9008"))) PPC_WEAK_FUNC(sub_82DF9008);
PPC_FUNC_IMPL(__imp__sub_82DF9008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF9010;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825359d8
	ctx.lr = 0x82DF9028;
	sub_825359D8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82545e38
	ctx.lr = 0x82DF9030;
	sub_82545E38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535130
	ctx.lr = 0x82DF9038;
	sub_82535130(ctx, base);
	// lis r31,-31775
	ctx.r31.s64 = -2082406400;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r31,-528
	ctx.r11.s64 = ctx.r31.s64 + -528;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x825346c8
	ctx.lr = 0x82DF904C;
	sub_825346C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -528);
	// bl 0x82536d88
	ctx.lr = 0x82DF9058;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82DF9060;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82DF9068;
	sub_82535AA0(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82DF906C;
	sub_82D860F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82534640
	ctx.lr = 0x82DF9078;
	sub_82534640(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,5220
	ctx.r31.s64 = ctx.r10.s64 + 5220;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82536d88
	ctx.lr = 0x82DF908C;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82DF9094;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82DF909C;
	sub_82535AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82534640
	ctx.lr = 0x82DF90A8;
	sub_82534640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x82DF90B4;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82DF90BC;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82DF90C4;
	sub_82535AA0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82546e88
	ctx.lr = 0x82DF90D4;
	sub_82546E88(ctx, base);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82df90e8
	if (cr6.lt) goto loc_82DF90E8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82df90ec
	goto loc_82DF90EC;
loc_82DF90E8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82DF90EC:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_82DF9104:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df9104
	if (!cr6.eq) goto loc_82DF9104;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82DF9128;
	sub_82472FC0(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82df913c
	if (cr6.lt) goto loc_82DF913C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82DF913C;
	sub_8386D088(ctx, base);
loc_82DF913C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// bge cr6,0x82df915c
	if (!cr6.lt) goto loc_82DF915C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82DF915C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DF9160:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df9160
	if (!cr6.eq) goto loc_82DF9160;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DF9184;
	sub_8259CC28(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82df9198
	if (cr6.lt) goto loc_82DF9198;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x82DF9198;
	sub_82416268(ctx, base);
loc_82DF9198:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x82545e60
	ctx.lr = 0x82DF91AC;
	sub_82545E60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82DF91B4;
	sub_82535AA0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF91BC"))) PPC_WEAK_FUNC(sub_82DF91BC);
PPC_FUNC_IMPL(__imp__sub_82DF91BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF91C0"))) PPC_WEAK_FUNC(sub_82DF91C0);
PPC_FUNC_IMPL(__imp__sub_82DF91C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF91C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825359d8
	ctx.lr = 0x82DF91E0;
	sub_825359D8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82545e38
	ctx.lr = 0x82DF91E8;
	sub_82545E38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535130
	ctx.lr = 0x82DF91F0;
	sub_82535130(ctx, base);
	// lis r31,-31775
	ctx.r31.s64 = -2082406400;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r31,-528
	ctx.r11.s64 = ctx.r31.s64 + -528;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x825346c8
	ctx.lr = 0x82DF9204;
	sub_825346C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -528);
	// bl 0x82536d88
	ctx.lr = 0x82DF9210;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82DF9218;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82DF9220;
	sub_82535AA0(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82DF9224;
	sub_82D860F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82534640
	ctx.lr = 0x82DF9230;
	sub_82534640(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,5240
	ctx.r31.s64 = ctx.r10.s64 + 5240;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82536d88
	ctx.lr = 0x82DF9244;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82DF924C;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82DF9254;
	sub_82535AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82534698
	ctx.lr = 0x82DF9260;
	sub_82534698(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x82DF926C;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82DF9274;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82DF927C;
	sub_82535AA0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82546e88
	ctx.lr = 0x82DF928C;
	sub_82546E88(ctx, base);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82df92a0
	if (cr6.lt) goto loc_82DF92A0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82df92a4
	goto loc_82DF92A4;
loc_82DF92A0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82DF92A4:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_82DF92BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df92bc
	if (!cr6.eq) goto loc_82DF92BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82DF92E0;
	sub_82472FC0(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82df92f4
	if (cr6.lt) goto loc_82DF92F4;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82DF92F4;
	sub_8386D088(ctx, base);
loc_82DF92F4:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// bge cr6,0x82df9314
	if (!cr6.lt) goto loc_82DF9314;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82DF9314:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DF9318:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df9318
	if (!cr6.eq) goto loc_82DF9318;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DF933C;
	sub_8259CC28(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82df9350
	if (cr6.lt) goto loc_82DF9350;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x82DF9350;
	sub_82416268(ctx, base);
loc_82DF9350:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x82545e60
	ctx.lr = 0x82DF9364;
	sub_82545E60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82DF936C;
	sub_82535AA0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF9374"))) PPC_WEAK_FUNC(sub_82DF9374);
PPC_FUNC_IMPL(__imp__sub_82DF9374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF9378"))) PPC_WEAK_FUNC(sub_82DF9378);
PPC_FUNC_IMPL(__imp__sub_82DF9378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DF9380;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// beq cr6,0x82df9408
	if (cr6.eq) goto loc_82DF9408;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r25,15
	ctx.r25.s64 = 15;
loc_82DF93B8:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df93dc
	if (cr6.lt) goto loc_82DF93DC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF93DC;
	sub_825952B8(ctx, base);
loc_82DF93DC:
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF93F8;
	sub_825952B8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82df93b8
	if (!cr6.eq) goto loc_82DF93B8;
loc_82DF9408:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF9410"))) PPC_WEAK_FUNC(sub_82DF9410);
PPC_FUNC_IMPL(__imp__sub_82DF9410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DF9418;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r27,0(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x82df94a4
	if (cr6.eq) goto loc_82DF94A4;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r31,r5,16
	ctx.r31.s64 = ctx.r5.s64 + 16;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,36(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82df9474
	if (cr6.lt) goto loc_82DF9474;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DF9474;
	sub_825952B8(ctx, base);
loc_82DF9474:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF9498;
	sub_825952B8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
loc_82DF94A4:
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF94B4"))) PPC_WEAK_FUNC(sub_82DF94B4);
PPC_FUNC_IMPL(__imp__sub_82DF94B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF94B8"))) PPC_WEAK_FUNC(sub_82DF94B8);
PPC_FUNC_IMPL(__imp__sub_82DF94B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DF94C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82df94fc
	if (cr6.eq) goto loc_82DF94FC;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82DF94F4;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82DF94FC:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8259cc28
	ctx.lr = 0x82DF9510;
	sub_8259CC28(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r28,56
	ctx.r3.s64 = ctx.r28.s64 + 56;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x82df9378
	ctx.lr = 0x82DF9520;
	sub_82DF9378(ctx, base);
	// std r30,72(r28)
	PPC_STORE_U64(ctx.r28.u32 + 72, ctx.r30.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF952C"))) PPC_WEAK_FUNC(sub_82DF952C);
PPC_FUNC_IMPL(__imp__sub_82DF952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF9530"))) PPC_WEAK_FUNC(sub_82DF9530);
PPC_FUNC_IMPL(__imp__sub_82DF9530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x835977d8
	ctx.lr = 0x82DF9554;
	sub_835977D8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
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

__attribute__((alias("__imp__sub_82DF9578"))) PPC_WEAK_FUNC(sub_82DF9578);
PPC_FUNC_IMPL(__imp__sub_82DF9578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DF9580;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82df95bc
	if (cr6.eq) goto loc_82DF95BC;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x82DF95B4;
	sub_831CE420(ctx, base);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82DF95BC:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82df95f0
	if (cr6.eq) goto loc_82DF95F0;
loc_82DF95CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x82DF95E0;
	sub_835977D8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82df95cc
	if (!cr6.eq) goto loc_82DF95CC;
loc_82DF95F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// srawi r31,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x82df961c
	if (cr6.eq) goto loc_82DF961C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF961C;
	sub_825952B8(ctx, base);
loc_82DF961C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF9638"))) PPC_WEAK_FUNC(sub_82DF9638);
PPC_FUNC_IMPL(__imp__sub_82DF9638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DF9640;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x82DF9668;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// beq 0x82df96ac
	if (cr0.eq) goto loc_82DF96AC;
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82DF96AC;
	sub_8259CB28(ctx, base);
loc_82DF96AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF96B8"))) PPC_WEAK_FUNC(sub_82DF96B8);
PPC_FUNC_IMPL(__imp__sub_82DF96B8) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82df9638
	ctx.lr = 0x82DF96E0;
	sub_82DF9638(ctx, base);
	// lis r10,1638
	ctx.r10.s64 = 107347968;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r9,r10,26213
	ctx.r9.u64 = ctx.r10.u64 | 26213;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x82df9704
	if (!cr6.lt) goto loc_82DF9704;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x82DF9704;
	sub_831CC150(ctx, base);
loc_82DF9704:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82DF9730"))) PPC_WEAK_FUNC(sub_82DF9730);
PPC_FUNC_IMPL(__imp__sub_82DF9730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,5588
	ctx.r10.s64 = ctx.r11.s64 + 5588;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82df8f00
	ctx.lr = 0x82DF9758;
	sub_82DF8F00(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DF9778;
	sub_82595718(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r7,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r7.u32);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// bl 0x82df94b8
	ctx.lr = 0x82DF9794;
	sub_82DF94B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DF97AC"))) PPC_WEAK_FUNC(sub_82DF97AC);
PPC_FUNC_IMPL(__imp__sub_82DF97AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF97B0"))) PPC_WEAK_FUNC(sub_82DF97B0);
PPC_FUNC_IMPL(__imp__sub_82DF97B0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// addi r10,r11,5588
	ctx.r10.s64 = ctx.r11.s64 + 5588;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82df9378
	ctx.lr = 0x82DF97E0;
	sub_82DF9378(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF97F4;
	sub_825952B8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82df8800
	ctx.lr = 0x82DF97FC;
	sub_82DF8800(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82df9814
	if (cr6.eq) goto loc_82DF9814;
	// bl 0x82416268
	ctx.lr = 0x82DF9810;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DF9814:
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

__attribute__((alias("__imp__sub_82DF982C"))) PPC_WEAK_FUNC(sub_82DF982C);
PPC_FUNC_IMPL(__imp__sub_82DF982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF9830"))) PPC_WEAK_FUNC(sub_82DF9830);
PPC_FUNC_IMPL(__imp__sub_82DF9830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DF9838;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82df98f4
	if (cr6.eq) goto loc_82DF98F4;
	// bl 0x83a7d958
	ctx.lr = 0x82DF9850;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DF9854;
	sub_83524138(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// addi r4,r9,-22544
	ctx.r4.s64 = ctx.r9.s64 + -22544;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8259cc28
	ctx.lr = 0x82DF9884;
	sub_8259CC28(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82DF9888:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df9888
	if (!cr6.eq) goto loc_82DF9888;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DF98B0;
	sub_8259CC28(ctx, base);
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82df96b8
	ctx.lr = 0x82DF98C4;
	sub_82DF96B8(ctx, base);
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// cmpld cr6,r10,r29
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r29.u64, xer);
	// bge cr6,0x82df98d4
	if (!cr6.lt) goto loc_82DF98D4;
	// std r29,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r29.u64);
loc_82DF98D4:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df98f4
	if (cr6.lt) goto loc_82DF98F4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF98F4;
	sub_825952B8(ctx, base);
loc_82DF98F4:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF9900"))) PPC_WEAK_FUNC(sub_82DF9900);
PPC_FUNC_IMPL(__imp__sub_82DF9900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DF9908;
	__savegprlr_25(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82df9b18
	if (!cr6.gt) goto loc_82DF9B18;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// bl 0x8259cb28
	ctx.lr = 0x82DF9964;
	sub_8259CB28(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82DF9984;
	sub_8259CB28(ctx, base);
	// lis r29,-31775
	ctx.r29.s64 = -2082406400;
	// lwz r4,-528(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -528);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DF9990:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df9990
	if (!cr6.eq) goto loc_82DF9990;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82574d38
	ctx.lr = 0x82DF99B8;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82df9ad0
	if (cr6.eq) goto loc_82DF9AD0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82DF99C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82df99c4
	if (!cr6.eq) goto loc_82DF99C4;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574d38
	ctx.lr = 0x82DF99F0;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82df9ad0
	if (cr6.eq) goto loc_82DF9AD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825359d8
	ctx.lr = 0x82DF9A04;
	sub_825359D8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82539ae8
	ctx.lr = 0x82DF9A0C;
	sub_82539AE8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82df9a20
	if (!cr6.lt) goto loc_82DF9A20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82DF9A20:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x824209f8
	ctx.lr = 0x82DF9A28;
	sub_824209F8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8253a788
	ctx.lr = 0x82DF9A3C;
	sub_8253A788(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241fe60
	ctx.lr = 0x82DF9A48;
	sub_8241FE60(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df9ac0
	if (cr6.eq) goto loc_82DF9AC0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,-528(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -528);
	// bl 0x82535938
	ctx.lr = 0x82DF9A60;
	sub_82535938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df9ac0
	if (cr6.eq) goto loc_82DF9AC0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82DF9A80;
	sub_8259CB28(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82df9410
	ctx.lr = 0x82DF9A94;
	sub_82DF9410(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82450e18
	ctx.lr = 0x82DF9A9C;
	sub_82450E18(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82535aa0
	ctx.lr = 0x82DF9AA4;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82DF9AAC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83876458
	ctx.lr = 0x82DF9AB4;
	sub_83876458(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DF9AC0:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82450e18
	ctx.lr = 0x82DF9AC8;
	sub_82450E18(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82535aa0
	ctx.lr = 0x82DF9AD0;
	sub_82535AA0(ctx, base);
loc_82DF9AD0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df9af0
	if (cr6.lt) goto loc_82DF9AF0;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x82DF9AF0;
	sub_825952B8(ctx, base);
loc_82DF9AF0:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// blt cr6,0x82df9b18
	if (cr6.lt) goto loc_82DF9B18;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825952b8
	ctx.lr = 0x82DF9B18;
	sub_825952B8(ctx, base);
loc_82DF9B18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF9B24"))) PPC_WEAK_FUNC(sub_82DF9B24);
PPC_FUNC_IMPL(__imp__sub_82DF9B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF9B28"))) PPC_WEAK_FUNC(sub_82DF9B28);
PPC_FUNC_IMPL(__imp__sub_82DF9B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DF9B30;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,-520(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -520);
	// bl 0x82df9900
	ctx.lr = 0x82DF9B5C;
	sub_82DF9900(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82df9d00
	if (cr6.eq) goto loc_82DF9D00;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825359d8
	ctx.lr = 0x82DF9B74;
	sub_825359D8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82539ae8
	ctx.lr = 0x82DF9B7C;
	sub_82539AE8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82df9b90
	if (!cr6.lt) goto loc_82DF9B90;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82DF9B90:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824209f8
	ctx.lr = 0x82DF9B98;
	sub_824209F8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8253a788
	ctx.lr = 0x82DF9BAC;
	sub_8253A788(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df9bc4
	if (cr6.lt) goto loc_82DF9BC4;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82DF9BC4;
	sub_8386D088(ctx, base);
loc_82DF9BC4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// beq cr6,0x82df9cc4
	if (cr6.eq) goto loc_82DF9CC4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8259cc28
	ctx.lr = 0x82DF9C08;
	sub_8259CC28(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r10,5356
	ctx.r30.s64 = ctx.r10.s64 + 5356;
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// bl 0x82536d88
	ctx.lr = 0x82DF9C1C;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82DF9C20;
	sub_825347E8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x82DF9C30;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82DF9C34;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82DF9C40;
	sub_837B0C10(ctx, base);
	// addi r6,r30,-36
	ctx.r6.s64 = ctx.r30.s64 + -36;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827a8810
	ctx.lr = 0x82DF9C58;
	sub_827A8810(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r8,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r8.u8);
	// bl 0x82536d88
	ctx.lr = 0x82DF9C70;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82DF9C74;
	sub_825347E8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x82DF9C84;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82DF9C88;
	sub_825347E8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x82DF9C98;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82DF9C9C;
	sub_825347E8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x82DF9CAC;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82DF9CB0;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82DF9CBC;
	sub_8259D6C0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82DF9CC4;
	sub_8387E8E0(ctx, base);
loc_82DF9CC4:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82450e18
	ctx.lr = 0x82DF9CCC;
	sub_82450E18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82DF9CD4;
	sub_82535AA0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df9cf4
	if (cr6.lt) goto loc_82DF9CF4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF9CF4;
	sub_825952B8(ctx, base);
loc_82DF9CF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DF9D00:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df9d20
	if (cr6.lt) goto loc_82DF9D20;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF9D20;
	sub_825952B8(ctx, base);
loc_82DF9D20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF9D2C"))) PPC_WEAK_FUNC(sub_82DF9D2C);
PPC_FUNC_IMPL(__imp__sub_82DF9D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DF9D30"))) PPC_WEAK_FUNC(sub_82DF9D30);
PPC_FUNC_IMPL(__imp__sub_82DF9D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DF9D38;
	__savegprlr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r10,r11,-520
	ctx.r10.s64 = ctx.r11.s64 + -520;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82df9900
	ctx.lr = 0x82DF9D68;
	sub_82DF9900(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82df9e74
	if (cr6.eq) goto loc_82DF9E74;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825359d8
	ctx.lr = 0x82DF9D80;
	sub_825359D8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82539ae8
	ctx.lr = 0x82DF9D88;
	sub_82539AE8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82df9d9c
	if (!cr6.lt) goto loc_82DF9D9C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82DF9D9C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824209f8
	ctx.lr = 0x82DF9DA4;
	sub_824209F8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8253a788
	ctx.lr = 0x82DF9DB8;
	sub_8253A788(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df9dd0
	if (cr6.lt) goto loc_82DF9DD0;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82DF9DD0;
	sub_8386D088(ctx, base);
loc_82DF9DD0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// beq cr6,0x82df9e38
	if (cr6.eq) goto loc_82DF9E38;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r31,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r31.u64);
	// addi r31,r11,5388
	ctx.r31.s64 = ctx.r11.s64 + 5388;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82536d88
	ctx.lr = 0x82DF9E08;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82DF9E0C;
	sub_825347E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82536d88
	ctx.lr = 0x82DF9E1C;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82DF9E20;
	sub_825347E8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82536d88
	ctx.lr = 0x82DF9E30;
	sub_82536D88(ctx, base);
	// bl 0x82534850
	ctx.lr = 0x82DF9E34;
	sub_82534850(ctx, base);
	// std r3,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r3.u64);
loc_82DF9E38:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82450e18
	ctx.lr = 0x82DF9E40;
	sub_82450E18(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82535aa0
	ctx.lr = 0x82DF9E48;
	sub_82535AA0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df9e68
	if (cr6.lt) goto loc_82DF9E68;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF9E68;
	sub_825952B8(ctx, base);
loc_82DF9E68:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DF9E74:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df9e94
	if (cr6.lt) goto loc_82DF9E94;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF9E94;
	sub_825952B8(ctx, base);
loc_82DF9E94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF9EA0"))) PPC_WEAK_FUNC(sub_82DF9EA0);
PPC_FUNC_IMPL(__imp__sub_82DF9EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DF9EA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r30,r11,-520
	ctx.r30.s64 = ctx.r11.s64 + -520;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82df9900
	ctx.lr = 0x82DF9EDC;
	sub_82DF9900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82df9fcc
	if (cr6.eq) goto loc_82DF9FCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825359d8
	ctx.lr = 0x82DF9EF4;
	sub_825359D8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82539ae8
	ctx.lr = 0x82DF9EFC;
	sub_82539AE8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82df9f10
	if (!cr6.lt) goto loc_82DF9F10;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82DF9F10:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824209f8
	ctx.lr = 0x82DF9F18;
	sub_824209F8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8253a788
	ctx.lr = 0x82DF9F2C;
	sub_8253A788(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df9f44
	if (cr6.lt) goto loc_82DF9F44;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82DF9F44;
	sub_8386D088(ctx, base);
loc_82DF9F44:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// beq cr6,0x82df9f90
	if (cr6.eq) goto loc_82DF9F90;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,5400
	ctx.r4.s64 = ctx.r11.s64 + 5400;
	// bl 0x82536d88
	ctx.lr = 0x82DF9F6C;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82DF9F70;
	sub_825347E8(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x82536d88
	ctx.lr = 0x82DF9F80;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82DF9F84;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82DF9F90;
	sub_8259D6C0(ctx, base);
loc_82DF9F90:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82450e18
	ctx.lr = 0x82DF9F98;
	sub_82450E18(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82535aa0
	ctx.lr = 0x82DF9FA0;
	sub_82535AA0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df9fc0
	if (cr6.lt) goto loc_82DF9FC0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF9FC0;
	sub_825952B8(ctx, base);
loc_82DF9FC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82DF9FCC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82df9fec
	if (cr6.lt) goto loc_82DF9FEC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DF9FEC;
	sub_825952B8(ctx, base);
loc_82DF9FEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DF9FF8"))) PPC_WEAK_FUNC(sub_82DF9FF8);
PPC_FUNC_IMPL(__imp__sub_82DF9FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DFA000;
	__savegprlr_27(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r10,r11,-520
	ctx.r10.s64 = ctx.r11.s64 + -520;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82df9900
	ctx.lr = 0x82DFA034;
	sub_82DF9900(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dfa120
	if (cr6.eq) goto loc_82DFA120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825359d8
	ctx.lr = 0x82DFA04C;
	sub_825359D8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82539ae8
	ctx.lr = 0x82DFA054;
	sub_82539AE8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82dfa068
	if (!cr6.lt) goto loc_82DFA068;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82DFA068:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824209f8
	ctx.lr = 0x82DFA070;
	sub_824209F8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8253a788
	ctx.lr = 0x82DFA084;
	sub_8253A788(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfa09c
	if (cr6.lt) goto loc_82DFA09C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82DFA09C;
	sub_8386D088(ctx, base);
loc_82DFA09C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// beq cr6,0x82dfa0e4
	if (cr6.eq) goto loc_82DFA0E4;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,5424
	ctx.r31.s64 = ctx.r11.s64 + 5424;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82536d88
	ctx.lr = 0x82DFA0C8;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82DFA0CC;
	sub_825347E8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82536d88
	ctx.lr = 0x82DFA0DC;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82DFA0E0;
	sub_825347E8(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_82DFA0E4:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82450e18
	ctx.lr = 0x82DFA0EC;
	sub_82450E18(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82535aa0
	ctx.lr = 0x82DFA0F4;
	sub_82535AA0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfa114
	if (cr6.lt) goto loc_82DFA114;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DFA114;
	sub_825952B8(ctx, base);
loc_82DFA114:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DFA120:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfa140
	if (cr6.lt) goto loc_82DFA140;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DFA140;
	sub_825952B8(ctx, base);
loc_82DFA140:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFA14C"))) PPC_WEAK_FUNC(sub_82DFA14C);
PPC_FUNC_IMPL(__imp__sub_82DFA14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFA150"))) PPC_WEAK_FUNC(sub_82DFA150);
PPC_FUNC_IMPL(__imp__sub_82DFA150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DFA158;
	__savegprlr_27(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r10,r11,-520
	ctx.r10.s64 = ctx.r11.s64 + -520;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,24(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x82df9900
	ctx.lr = 0x82DFA18C;
	sub_82DF9900(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dfa278
	if (cr6.eq) goto loc_82DFA278;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825359d8
	ctx.lr = 0x82DFA1A4;
	sub_825359D8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82539ae8
	ctx.lr = 0x82DFA1AC;
	sub_82539AE8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82dfa1c0
	if (!cr6.lt) goto loc_82DFA1C0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82DFA1C0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824209f8
	ctx.lr = 0x82DFA1C8;
	sub_824209F8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8253a788
	ctx.lr = 0x82DFA1DC;
	sub_8253A788(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfa1f4
	if (cr6.lt) goto loc_82DFA1F4;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82DFA1F4;
	sub_8386D088(ctx, base);
loc_82DFA1F4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// beq cr6,0x82dfa23c
	if (cr6.eq) goto loc_82DFA23C;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,5444
	ctx.r31.s64 = ctx.r11.s64 + 5444;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82536d88
	ctx.lr = 0x82DFA220;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82DFA224;
	sub_825347E8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82536d88
	ctx.lr = 0x82DFA234;
	sub_82536D88(ctx, base);
	// bl 0x82534850
	ctx.lr = 0x82DFA238;
	sub_82534850(ctx, base);
	// std r3,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r3.u64);
loc_82DFA23C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82450e18
	ctx.lr = 0x82DFA244;
	sub_82450E18(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82535aa0
	ctx.lr = 0x82DFA24C;
	sub_82535AA0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfa26c
	if (cr6.lt) goto loc_82DFA26C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DFA26C;
	sub_825952B8(ctx, base);
loc_82DFA26C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DFA278:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfa298
	if (cr6.lt) goto loc_82DFA298;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DFA298;
	sub_825952B8(ctx, base);
loc_82DFA298:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFA2A4"))) PPC_WEAK_FUNC(sub_82DFA2A4);
PPC_FUNC_IMPL(__imp__sub_82DFA2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFA2A8"))) PPC_WEAK_FUNC(sub_82DFA2A8);
PPC_FUNC_IMPL(__imp__sub_82DFA2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DFA2B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r9,r11,-520
	ctx.r9.s64 = ctx.r11.s64 + -520;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82df9900
	ctx.lr = 0x82DFA2E4;
	sub_82DF9900(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82dfa3bc
	if (cr6.eq) goto loc_82DFA3BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825359d8
	ctx.lr = 0x82DFA2FC;
	sub_825359D8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82539ae8
	ctx.lr = 0x82DFA304;
	sub_82539AE8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82dfa318
	if (!cr6.lt) goto loc_82DFA318;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82DFA318:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824209f8
	ctx.lr = 0x82DFA320;
	sub_824209F8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8253a788
	ctx.lr = 0x82DFA334;
	sub_8253A788(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfa34c
	if (cr6.lt) goto loc_82DFA34C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82DFA34C;
	sub_8386D088(ctx, base);
loc_82DFA34C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// beq cr6,0x82dfa380
	if (cr6.eq) goto loc_82DFA380;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,5492
	ctx.r4.s64 = ctx.r11.s64 + 5492;
	// bl 0x82536d88
	ctx.lr = 0x82DFA378;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82DFA37C;
	sub_825347E8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_82DFA380:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82450e18
	ctx.lr = 0x82DFA388;
	sub_82450E18(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82535aa0
	ctx.lr = 0x82DFA390;
	sub_82535AA0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfa3b0
	if (cr6.lt) goto loc_82DFA3B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DFA3B0;
	sub_825952B8(ctx, base);
loc_82DFA3B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DFA3BC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfa3dc
	if (cr6.lt) goto loc_82DFA3DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DFA3DC;
	sub_825952B8(ctx, base);
loc_82DFA3DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFA3E8"))) PPC_WEAK_FUNC(sub_82DFA3E8);
PPC_FUNC_IMPL(__imp__sub_82DFA3E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82dfa2a8
	ctx.lr = 0x82DFA410;
	sub_82DFA2A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dfa43c
	if (cr6.eq) goto loc_82DFA43C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82DFA43C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DFA454"))) PPC_WEAK_FUNC(sub_82DFA454);
PPC_FUNC_IMPL(__imp__sub_82DFA454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFA458"))) PPC_WEAK_FUNC(sub_82DFA458);
PPC_FUNC_IMPL(__imp__sub_82DFA458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82dfa2a8
	ctx.lr = 0x82DFA480;
	sub_82DFA2A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dfa4ac
	if (cr6.eq) goto loc_82DFA4AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82DFA4AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DFA4C4"))) PPC_WEAK_FUNC(sub_82DFA4C4);
PPC_FUNC_IMPL(__imp__sub_82DFA4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFA4C8"))) PPC_WEAK_FUNC(sub_82DFA4C8);
PPC_FUNC_IMPL(__imp__sub_82DFA4C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DFA4D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82dfa568
	if (cr6.eq) goto loc_82DFA568;
	// addi r30,r4,64
	ctx.r30.s64 = ctx.r4.s64 + 64;
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// subf r27,r3,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82DFA4FC:
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// bl 0x82da8e68
	ctx.lr = 0x82DFA508;
	sub_82DA8E68(ctx, base);
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x82dfa4fc
	if (cr6.lt) goto loc_82DFA4FC;
loc_82DFA568:
	// lwz r11,1944(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1944);
	// stw r11,1944(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1944, ctx.r11.u32);
	// lwz r10,1948(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1948);
	// stw r10,1948(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1948, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFA580"))) PPC_WEAK_FUNC(sub_82DFA580);
PPC_FUNC_IMPL(__imp__sub_82DFA580) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,27
	ctx.r9.s64 = 27;
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// stb r10,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// stb r10,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
	// stb r10,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x82da1c70
	sub_82DA1C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFA5B4"))) PPC_WEAK_FUNC(sub_82DFA5B4);
PPC_FUNC_IMPL(__imp__sub_82DFA5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFA5B8"))) PPC_WEAK_FUNC(sub_82DFA5B8);
PPC_FUNC_IMPL(__imp__sub_82DFA5B8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DFA5C0"))) PPC_WEAK_FUNC(sub_82DFA5C0);
PPC_FUNC_IMPL(__imp__sub_82DFA5C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x82dfa4c8
	sub_82DFA4C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFA5C8"))) PPC_WEAK_FUNC(sub_82DFA5C8);
PPC_FUNC_IMPL(__imp__sub_82DFA5C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DFA5D0"))) PPC_WEAK_FUNC(sub_82DFA5D0);
PPC_FUNC_IMPL(__imp__sub_82DFA5D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stb r4,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r4.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82e612b0
	sub_82E612B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFA5E4"))) PPC_WEAK_FUNC(sub_82DFA5E4);
PPC_FUNC_IMPL(__imp__sub_82DFA5E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DFA5E8"))) PPC_WEAK_FUNC(sub_82DFA5E8);
PPC_FUNC_IMPL(__imp__sub_82DFA5E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dfa5fc
	if (!cr6.eq) goto loc_82DFA5FC;
loc_82DFA5F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82DFA5FC:
	// lwz r11,1980(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1980);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82dfa5f4
	if (cr6.eq) goto loc_82DFA5F4;
	// lwz r11,1976(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1976);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DFA618"))) PPC_WEAK_FUNC(sub_82DFA618);
PPC_FUNC_IMPL(__imp__sub_82DFA618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DFA620;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,6000
	ctx.r10.s64 = ctx.r11.s64 + 6000;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
	// li r30,21
	ctx.r30.s64 = 21;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82DFA63C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82DFA644;
	sub_82DA8D18(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// bge 0x82dfa63c
	if (!cr0.lt) goto loc_82DFA63C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,27
	ctx.r10.s64 = 27;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// stb r11,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r11.u8);
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82da1c70
	ctx.lr = 0x82DFA680;
	sub_82DA1C70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFA68C"))) PPC_WEAK_FUNC(sub_82DFA68C);
PPC_FUNC_IMPL(__imp__sub_82DFA68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFA690"))) PPC_WEAK_FUNC(sub_82DFA690);
PPC_FUNC_IMPL(__imp__sub_82DFA690) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r10,r11,6000
	ctx.r10.s64 = ctx.r11.s64 + 6000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82da1e28
	ctx.lr = 0x82DFA6C0;
	sub_82DA1E28(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dfa6d8
	if (cr6.eq) goto loc_82DFA6D8;
	// bl 0x82416268
	ctx.lr = 0x82DFA6D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DFA6D8:
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

__attribute__((alias("__imp__sub_82DFA6F0"))) PPC_WEAK_FUNC(sub_82DFA6F0);
PPC_FUNC_IMPL(__imp__sub_82DFA6F0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82DFA714;
	sub_82E8BA80(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// stb r30,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r30.u8);
	// addi r9,r11,6176
	ctx.r9.s64 = ctx.r11.s64 + 6176;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82dfa740
	if (cr6.eq) goto loc_82DFA740;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e87940
	ctx.lr = 0x82DFA73C;
	sub_82E87940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DFA740:
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

__attribute__((alias("__imp__sub_82DFA758"))) PPC_WEAK_FUNC(sub_82DFA758);
PPC_FUNC_IMPL(__imp__sub_82DFA758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DFA760;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DFA780;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfa794
	if (cr6.eq) goto loc_82DFA794;
	// bl 0x83605318
	ctx.lr = 0x82DFA78C;
	sub_83605318(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82dfa798
	goto loc_82DFA798;
loc_82DFA794:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DFA798:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82DFA7AC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfa7c0
	if (cr6.eq) goto loc_82DFA7C0;
	// bl 0x836054c0
	ctx.lr = 0x82DFA7B8;
	sub_836054C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82dfa7c4
	goto loc_82DFA7C4;
loc_82DFA7C0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82DFA7C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DFA7DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFA7E4"))) PPC_WEAK_FUNC(sub_82DFA7E4);
PPC_FUNC_IMPL(__imp__sub_82DFA7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFA7E8"))) PPC_WEAK_FUNC(sub_82DFA7E8);
PPC_FUNC_IMPL(__imp__sub_82DFA7E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DFA814;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfa83c
	if (cr6.eq) goto loc_82DFA83C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82dfa6f0
	ctx.lr = 0x82DFA828;
	sub_82DFA6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82DFA83C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DFA854"))) PPC_WEAK_FUNC(sub_82DFA854);
PPC_FUNC_IMPL(__imp__sub_82DFA854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFA858"))) PPC_WEAK_FUNC(sub_82DFA858);
PPC_FUNC_IMPL(__imp__sub_82DFA858) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,6176
	ctx.r10.s64 = ctx.r11.s64 + 6176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82DFA884;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dfa89c
	if (cr6.eq) goto loc_82DFA89C;
	// bl 0x82416268
	ctx.lr = 0x82DFA898;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DFA89C:
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

__attribute__((alias("__imp__sub_82DFA8B4"))) PPC_WEAK_FUNC(sub_82DFA8B4);
PPC_FUNC_IMPL(__imp__sub_82DFA8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFA8B8"))) PPC_WEAK_FUNC(sub_82DFA8B8);
PPC_FUNC_IMPL(__imp__sub_82DFA8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DFA8E4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfa938
	if (cr6.eq) goto loc_82DFA938;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfa918
	if (cr6.lt) goto loc_82DFA918;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82dfa6f0
	ctx.lr = 0x82DFA904;
	sub_82DFA6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82DFA918:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82dfa6f0
	ctx.lr = 0x82DFA924;
	sub_82DFA6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82DFA938:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DFA950"))) PPC_WEAK_FUNC(sub_82DFA950);
PPC_FUNC_IMPL(__imp__sub_82DFA950) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82DFA968;
	sub_82E8BAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfa9a4
	if (cr6.eq) goto loc_82DFA9A4;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r30,r11,6064
	ctx.r30.s64 = ctx.r11.s64 + 6064;
	// addi r3,r3,316
	ctx.r3.s64 = ctx.r3.s64 + 316;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// bl 0x824208c8
	ctx.lr = 0x82DFA98C;
	sub_824208C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// bl 0x824208c8
	ctx.lr = 0x82DFA99C;
	sub_824208C8(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82DFA9A0;
	sub_82D860F0(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
loc_82DFA9A4:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82DFA9C0"))) PPC_WEAK_FUNC(sub_82DFA9C0);
PPC_FUNC_IMPL(__imp__sub_82DFA9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DFA9C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82DFA9D4;
	sub_82E8BAE8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DFA9DC;
	sub_82D86078(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82dfaab0
	if (cr6.eq) goto loc_82DFAAB0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfaab0
	if (cr6.eq) goto loc_82DFAAB0;
	// lwz r28,100(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dcd5d8
	ctx.lr = 0x82DFA9FC;
	sub_82DCD5D8(ctx, base);
	// lwz r29,352(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 352);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82dfaab0
	if (cr6.eq) goto loc_82DFAAB0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82DFAA0C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82da8d18
	ctx.lr = 0x82DFAA14;
	sub_82DA8D18(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DFAA28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r26,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r26.u8);
	// stb r26,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r26.u8);
	// lwz r11,360(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 360);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r4,r31,124
	ctx.r4.s64 = ctx.r31.s64 + 124;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lwz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82dfaa54
	if (cr6.lt) goto loc_82DFAA54;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DFAA54:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DFAA58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfaa58
	if (!cr6.eq) goto loc_82DFAA58;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DFAA7C;
	sub_8259CC28(ctx, base);
	// ld r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// bl 0x82e87a10
	ctx.lr = 0x82DFAA90;
	sub_82E87A10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dcd5f0
	ctx.lr = 0x82DFAA9C;
	sub_82DCD5F0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82da8c38
	ctx.lr = 0x82DFAAA4;
	sub_82DA8C38(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,152
	ctx.r30.s64 = ctx.r30.s64 + 152;
	// bne 0x82dfaa0c
	if (!cr0.eq) goto loc_82DFAA0C;
loc_82DFAAB0:
	// lbz r11,204(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dfab0c
	if (cr6.eq) goto loc_82DFAB0C;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r10,6076
	ctx.r4.s64 = ctx.r10.s64 + 6076;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82DFAAE0;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x82DFAAEC;
	sub_82E88020(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82dfab0c
	if (cr6.lt) goto loc_82DFAB0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DFAB0C;
	sub_825952B8(ctx, base);
loc_82DFAB0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFAB18"))) PPC_WEAK_FUNC(sub_82DFAB18);
PPC_FUNC_IMPL(__imp__sub_82DFAB18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dfab74
	if (cr6.eq) goto loc_82DFAB74;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,6084
	ctx.r4.s64 = ctx.r11.s64 + 6084;
	// bl 0x837b0c10
	ctx.lr = 0x82DFAB48;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82DFAB54;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82dfab74
	if (cr6.lt) goto loc_82DFAB74;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DFAB74;
	sub_825952B8(ctx, base);
loc_82DFAB74:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DFAB8C"))) PPC_WEAK_FUNC(sub_82DFAB8C);
PPC_FUNC_IMPL(__imp__sub_82DFAB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFAB90"))) PPC_WEAK_FUNC(sub_82DFAB90);
PPC_FUNC_IMPL(__imp__sub_82DFAB90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82DFABB0;
	sub_82E8BA80(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stb r30,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r30.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,6760
	ctx.r9.s64 = ctx.r10.s64 + 6760;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stb r11,217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 217, ctx.r11.u8);
	// beq cr6,0x82dfabf0
	if (cr6.eq) goto loc_82DFABF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e87940
	ctx.lr = 0x82DFABEC;
	sub_82E87940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DFABF0:
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

__attribute__((alias("__imp__sub_82DFAC08"))) PPC_WEAK_FUNC(sub_82DFAC08);
PPC_FUNC_IMPL(__imp__sub_82DFAC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DFAC10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,464
	ctx.r4.s64 = 464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DFAC30;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfac44
	if (cr6.eq) goto loc_82DFAC44;
	// bl 0x83606690
	ctx.lr = 0x82DFAC3C;
	sub_83606690(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82dfac48
	goto loc_82DFAC48;
loc_82DFAC44:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DFAC48:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,504
	ctx.r4.s64 = 504;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82DFAC5C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfac70
	if (cr6.eq) goto loc_82DFAC70;
	// bl 0x836068f8
	ctx.lr = 0x82DFAC68;
	sub_836068F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82dfac74
	goto loc_82DFAC74;
loc_82DFAC70:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82DFAC74:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DFAC8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFAC94"))) PPC_WEAK_FUNC(sub_82DFAC94);
PPC_FUNC_IMPL(__imp__sub_82DFAC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFAC98"))) PPC_WEAK_FUNC(sub_82DFAC98);
PPC_FUNC_IMPL(__imp__sub_82DFAC98) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,6760
	ctx.r10.s64 = ctx.r11.s64 + 6760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82DFACC4;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dfacdc
	if (cr6.eq) goto loc_82DFACDC;
	// bl 0x82416268
	ctx.lr = 0x82DFACD8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DFACDC:
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

__attribute__((alias("__imp__sub_82DFACF4"))) PPC_WEAK_FUNC(sub_82DFACF4);
PPC_FUNC_IMPL(__imp__sub_82DFACF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFACF8"))) PPC_WEAK_FUNC(sub_82DFACF8);
PPC_FUNC_IMPL(__imp__sub_82DFACF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfad1c
	if (cr6.lt) goto loc_82DFAD1C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82dfad20
	goto loc_82DFAD20;
loc_82DFAD1C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82DFAD20:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,220
	ctx.r4.s64 = 220;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DFAD38;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfad64
	if (cr6.eq) goto loc_82DFAD64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82dfab90
	ctx.lr = 0x82DFAD50;
	sub_82DFAB90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82DFAD64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DFAD7C"))) PPC_WEAK_FUNC(sub_82DFAD7C);
PPC_FUNC_IMPL(__imp__sub_82DFAD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFAD80"))) PPC_WEAK_FUNC(sub_82DFAD80);
PPC_FUNC_IMPL(__imp__sub_82DFAD80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfada4
	if (cr6.lt) goto loc_82DFADA4;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82dfada8
	goto loc_82DFADA8;
loc_82DFADA4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82DFADA8:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,220
	ctx.r4.s64 = 220;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DFADC0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfadec
	if (cr6.eq) goto loc_82DFADEC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82dfab90
	ctx.lr = 0x82DFADD8;
	sub_82DFAB90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82DFADEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DFAE04"))) PPC_WEAK_FUNC(sub_82DFAE04);
PPC_FUNC_IMPL(__imp__sub_82DFAE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFAE08"))) PPC_WEAK_FUNC(sub_82DFAE08);
PPC_FUNC_IMPL(__imp__sub_82DFAE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dfae64
	if (cr6.eq) goto loc_82DFAE64;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,6668
	ctx.r4.s64 = ctx.r11.s64 + 6668;
	// bl 0x837b0c10
	ctx.lr = 0x82DFAE38;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82DFAE44;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82dfae64
	if (cr6.lt) goto loc_82DFAE64;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DFAE64;
	sub_825952B8(ctx, base);
loc_82DFAE64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DFAE7C"))) PPC_WEAK_FUNC(sub_82DFAE7C);
PPC_FUNC_IMPL(__imp__sub_82DFAE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFAE80"))) PPC_WEAK_FUNC(sub_82DFAE80);
PPC_FUNC_IMPL(__imp__sub_82DFAE80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DFAE88;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x82e6f960
	ctx.lr = 0x82DFAE9C;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfaeb0
	if (cr6.eq) goto loc_82DFAEB0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa08
	ctx.lr = 0x82DFAEAC;
	sub_82E6FA08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82DFAEB0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dfaedc
	if (!cr6.eq) goto loc_82DFAEDC;
	// bl 0x82df1e40
	ctx.lr = 0x82DFAEC0;
	sub_82DF1E40(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82dfaed0
	if (!cr6.eq) goto loc_82DFAED0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DFAED0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r28.u32);
	// stb r11,217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 217, ctx.r11.u8);
loc_82DFAEDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8bae0
	ctx.lr = 0x82DFAEE4;
	sub_82E8BAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DFAEEC;
	sub_82D86078(ctx, base);
	// stw r28,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcbe8
	ctx.lr = 0x82DFAEFC;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DFAF00;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFAF08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfaf08
	if (!cr6.eq) goto loc_82DFAF08;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r29,r31,380
	ctx.r29.s64 = ctx.r31.s64 + 380;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DFAF30;
	sub_824208C8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82dfafcc
	if (cr6.eq) goto loc_82DFAFCC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7a268
	ctx.lr = 0x82DFAF40;
	sub_82B7A268(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x82dfaf58
	if (!cr6.eq) goto loc_82DFAF58;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82dfaf68
	goto loc_82DFAF68;
loc_82DFAF58:
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7a410
	ctx.lr = 0x82DFAF64;
	sub_82B7A410(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82DFAF68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dfafc4
	if (cr6.eq) goto loc_82DFAFC4;
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// beq cr6,0x82dfaf90
	if (cr6.eq) goto loc_82DFAF90;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DFAF90:
	// bl 0x835fcbe8
	ctx.lr = 0x82DFAF94;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DFAF98;
	sub_8252E3C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFAF9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfaf9c
	if (!cr6.eq) goto loc_82DFAF9C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DFAFC4;
	sub_824208C8(ctx, base);
loc_82DFAFC4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7a190
	ctx.lr = 0x82DFAFCC;
	sub_82B7A190(ctx, base);
loc_82DFAFCC:
	// bl 0x82d860f0
	ctx.lr = 0x82DFAFD0;
	sub_82D860F0(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// bl 0x82dc9d98
	ctx.lr = 0x82DFAFD8;
	sub_82DC9D98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFAFE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfafe0
	if (!cr6.eq) goto loc_82DFAFE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DFB004;
	sub_824208C8(ctx, base);
	// bl 0x82e691c8
	ctx.lr = 0x82DFB008;
	sub_82E691C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFB010:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfb010
	if (!cr6.eq) goto loc_82DFB010;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DFB034;
	sub_824208C8(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r30,r10,6624
	ctx.r30.s64 = ctx.r10.s64 + 6624;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x824208c8
	ctx.lr = 0x82DFB04C;
	sub_824208C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82DFB05C;
	sub_824208C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFB068"))) PPC_WEAK_FUNC(sub_82DFB068);
PPC_FUNC_IMPL(__imp__sub_82DFB068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DFB070;
	__savegprlr_25(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82dfb170
	if (cr6.gt) goto loc_82DFB170;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82dfb17c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DFB17C;
	// bdzf 4*cr6+eq,0x82dfb2a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DFB2A0;
	// bne cr6,0x82dfb310
	if (!cr6.eq) goto loc_82DFB310;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82e8bae8
	ctx.lr = 0x82DFB0A4;
	sub_82E8BAE8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfb160
	if (cr6.eq) goto loc_82DFB160;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r29,r3,348
	ctx.r29.s64 = ctx.r3.s64 + 348;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82DFB0C0:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82420558
	ctx.lr = 0x82DFB0E0;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fabf8
	ctx.lr = 0x82DFB0E8;
	sub_835FABF8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DFB0EC;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFB0F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfb0f4
	if (!cr6.eq) goto loc_82DFB0F4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82DFB120;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82dfb140
	if (cr6.eq) goto loc_82DFB140;
	// bl 0x8241fe60
	ctx.lr = 0x82DFB130;
	sub_8241FE60(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// blt cr6,0x82dfb0c0
	if (cr6.lt) goto loc_82DFB0C0;
	// b 0x82dfb160
	goto loc_82DFB160;
loc_82DFB140:
	// bl 0x8241fe60
	ctx.lr = 0x82DFB144;
	sub_8241FE60(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x82dfb160
	if (!cr6.gt) goto loc_82DFB160;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bgt cr6,0x82dfb160
	if (cr6.gt) goto loc_82DFB160;
	// lwz r11,404(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 404);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,208(r25)
	PPC_STORE_U32(ctx.r25.u32 + 208, ctx.r11.u32);
loc_82DFB160:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82dfb2fc
	if (!cr6.eq) goto loc_82DFB2FC;
	// stw r11,204(r25)
	PPC_STORE_U32(ctx.r25.u32 + 204, ctx.r11.u32);
loc_82DFB170:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DFB17C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r31,r11,6660
	ctx.r31.s64 = ctx.r11.s64 + 6660;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// bl 0x831ce980
	ctx.lr = 0x82DFB194;
	sub_831CE980(ctx, base);
	// addi r4,r31,-322
	ctx.r4.s64 = ctx.r31.s64 + -322;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82475d40
	ctx.lr = 0x82DFB1A0;
	sub_82475D40(ctx, base);
	// bl 0x82e6e978
	ctx.lr = 0x82DFB1A4;
	sub_82E6E978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfb200
	if (cr6.eq) goto loc_82DFB200;
	// li r3,38
	ctx.r3.s64 = 38;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x835fa418
	ctx.lr = 0x82DFB1BC;
	sub_835FA418(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DFB1C0;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e80aa8
	ctx.lr = 0x82DFB1CC;
	sub_82E80AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfb200
	if (cr6.eq) goto loc_82DFB200;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFB1DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfb1dc
	if (!cr6.eq) goto loc_82DFB1DC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82DFB200;
	sub_82472FC0(ctx, base);
loc_82DFB200:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,168
	ctx.r4.s64 = 168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DFB218;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfb244
	if (cr6.eq) goto loc_82DFB244;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82dfb234
	if (!cr6.lt) goto loc_82DFB234;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82DFB234:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bl 0x82c31d28
	ctx.lr = 0x82DFB23C;
	sub_82C31D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82dfb248
	goto loc_82DFB248;
loc_82DFB244:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82DFB248:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,212(r25)
	PPC_STORE_U32(ctx.r25.u32 + 212, ctx.r4.u32);
	// beq cr6,0x82dfb284
	if (cr6.eq) goto loc_82DFB284;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83103100
	ctx.lr = 0x82DFB25C;
	sub_83103100(ctx, base);
	// lwz r4,208(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 208);
	// lwz r3,212(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 212);
	// bl 0x82e805c0
	ctx.lr = 0x82DFB268;
	sub_82E805C0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,204(r25)
	PPC_STORE_U32(ctx.r25.u32 + 204, ctx.r11.u32);
	// bl 0x824707c8
	ctx.lr = 0x82DFB278;
	sub_824707C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DFB284:
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,204(r25)
	PPC_STORE_U32(ctx.r25.u32 + 204, ctx.r11.u32);
	// bl 0x824707c8
	ctx.lr = 0x82DFB294;
	sub_824707C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DFB2A0:
	// lwz r3,212(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfb2fc
	if (cr6.eq) goto loc_82DFB2FC;
	// lwz r4,208(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 208);
	// bl 0x82e80098
	ctx.lr = 0x82DFB2B4;
	sub_82E80098(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dfb170
	if (cr6.eq) goto loc_82DFB170;
	// lwz r4,208(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 208);
	// lwz r3,212(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 212);
	// bl 0x82e80250
	ctx.lr = 0x82DFB2CC;
	sub_82E80250(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,208(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 208);
	// lwz r3,212(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 212);
	// bl 0x82e80188
	ctx.lr = 0x82DFB2DC;
	sub_82E80188(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DFB2E4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfb170
	if (cr6.eq) goto loc_82DFB170;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82de5b28
	ctx.lr = 0x82DFB2FC;
	sub_82DE5B28(ctx, base);
loc_82DFB2FC:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,204(r25)
	PPC_STORE_U32(ctx.r25.u32 + 204, ctx.r11.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DFB310:
	// lbz r11,217(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 217);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dfb328
	if (cr6.eq) goto loc_82DFB328;
	// bl 0x82df1c68
	ctx.lr = 0x82DFB320;
	sub_82DF1C68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82dfb170
	if (cr6.eq) goto loc_82DFB170;
loc_82DFB328:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82DFB330;
	sub_82E8BAE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfb540
	if (cr6.eq) goto loc_82DFB540;
	// bl 0x82d86078
	ctx.lr = 0x82DFB340;
	sub_82D86078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfb540
	if (cr6.eq) goto loc_82DFB540;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82b7a268
	ctx.lr = 0x82DFB354;
	sub_82B7A268(ctx, base);
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,348
	ctx.r29.s64 = ctx.r31.s64 + 348;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// lwz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// sth r10,340(r1)
	PPC_STORE_U16(ctx.r1.u32 + 340, ctx.r10.u16);
loc_82DFB370:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82531828
	ctx.lr = 0x82DFB37C;
	sub_82531828(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835fabf8
	ctx.lr = 0x82DFB384;
	sub_835FABF8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DFB388;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFB390:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfb390
	if (!cr6.eq) goto loc_82DFB390;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82DFB3BC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// beq cr6,0x82dfb3dc
	if (cr6.eq) goto loc_82DFB3DC;
	// bl 0x8241fe60
	ctx.lr = 0x82DFB3CC;
	sub_8241FE60(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// blt cr6,0x82dfb370
	if (cr6.lt) goto loc_82DFB370;
	// b 0x82dfb3e4
	goto loc_82DFB3E4;
loc_82DFB3DC:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bl 0x8241fe60
	ctx.lr = 0x82DFB3E4;
	sub_8241FE60(ctx, base);
loc_82DFB3E4:
	// stw r28,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r28.u32);
	// addi r11,r31,376
	ctx.r11.s64 = ctx.r31.s64 + 376;
	// lwz r10,396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82dfb3fc
	if (cr6.lt) goto loc_82DFB3FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DFB3FC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8259d6c0
	ctx.lr = 0x82DFB408;
	sub_8259D6C0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r31,412
	ctx.r11.s64 = ctx.r31.s64 + 412;
	// stb r10,380(r1)
	PPC_STORE_U8(ctx.r1.u32 + 380, ctx.r10.u8);
	// lwz r9,432(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82dfb424
	if (cr6.lt) goto loc_82DFB424;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DFB424:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8259d6c0
	ctx.lr = 0x82DFB430;
	sub_8259D6C0(ctx, base);
	// lwz r10,460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// addi r11,r31,440
	ctx.r11.s64 = ctx.r31.s64 + 440;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82dfb444
	if (cr6.lt) goto loc_82DFB444;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DFB444:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// bl 0x8259d6c0
	ctx.lr = 0x82DFB450;
	sub_8259D6C0(ctx, base);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// addi r4,r31,476
	ctx.r4.s64 = ctx.r31.s64 + 476;
	// stw r11,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r11.u32);
	// lwz r10,472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// stw r10,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// lwz r9,496(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82dfb474
	if (cr6.lt) goto loc_82DFB474;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DFB474:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82DFB47C;
	sub_837B0C10(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r31,r11,6660
	ctx.r31.s64 = ctx.r11.s64 + 6660;
	// addi r4,r31,-321
	ctx.r4.s64 = ctx.r31.s64 + -321;
	// bl 0x8259d6c0
	ctx.lr = 0x82DFB490;
	sub_8259D6C0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8259cb28
	ctx.lr = 0x82DFB4A4;
	sub_8259CB28(ctx, base);
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x82b7a410
	ctx.lr = 0x82DFB4B4;
	sub_82B7A410(ctx, base);
	// lbz r11,216(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dfb530
	if (cr6.eq) goto loc_82DFB530;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// beq cr6,0x82dfb510
	if (cr6.eq) goto loc_82DFB510;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// beq cr6,0x82dfb4f0
	if (cr6.eq) goto loc_82DFB4F0;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82DFB4DC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e88020
	ctx.lr = 0x82DFB4E8;
	sub_82E88020(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// b 0x82dfb52c
	goto loc_82DFB52C;
loc_82DFB4F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x837b0c10
	ctx.lr = 0x82DFB4FC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e88020
	ctx.lr = 0x82DFB508;
	sub_82E88020(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// b 0x82dfb52c
	goto loc_82DFB52C;
loc_82DFB510:
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x82DFB51C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e88020
	ctx.lr = 0x82DFB528;
	sub_82E88020(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
loc_82DFB52C:
	// bl 0x8387e8e0
	ctx.lr = 0x82DFB530;
	sub_8387E8E0(ctx, base);
loc_82DFB530:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82DFB538;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82b7a190
	ctx.lr = 0x82DFB540;
	sub_82B7A190(ctx, base);
loc_82DFB540:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFB54C"))) PPC_WEAK_FUNC(sub_82DFB54C);
PPC_FUNC_IMPL(__imp__sub_82DFB54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFB550"))) PPC_WEAK_FUNC(sub_82DFB550);
PPC_FUNC_IMPL(__imp__sub_82DFB550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DFB558;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,456
	ctx.r4.s64 = 456;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DFB578;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfb58c
	if (cr6.eq) goto loc_82DFB58C;
	// bl 0x83607930
	ctx.lr = 0x82DFB584;
	sub_83607930(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82dfb590
	goto loc_82DFB590;
loc_82DFB58C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DFB590:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82DFB5A4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfb5b8
	if (cr6.eq) goto loc_82DFB5B8;
	// bl 0x83607b90
	ctx.lr = 0x82DFB5B0;
	sub_83607B90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82dfb5bc
	goto loc_82DFB5BC;
loc_82DFB5B8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82DFB5BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DFB5D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFB5DC"))) PPC_WEAK_FUNC(sub_82DFB5DC);
PPC_FUNC_IMPL(__imp__sub_82DFB5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFB5E0"))) PPC_WEAK_FUNC(sub_82DFB5E0);
PPC_FUNC_IMPL(__imp__sub_82DFB5E0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,7032
	ctx.r10.s64 = ctx.r11.s64 + 7032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82DFB60C;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dfb624
	if (cr6.eq) goto loc_82DFB624;
	// bl 0x82416268
	ctx.lr = 0x82DFB620;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DFB624:
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

__attribute__((alias("__imp__sub_82DFB63C"))) PPC_WEAK_FUNC(sub_82DFB63C);
PPC_FUNC_IMPL(__imp__sub_82DFB63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFB640"))) PPC_WEAK_FUNC(sub_82DFB640);
PPC_FUNC_IMPL(__imp__sub_82DFB640) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfb668
	if (cr6.lt) goto loc_82DFB668;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82dfb66c
	goto loc_82DFB66C;
loc_82DFB668:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82DFB66C:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DFB684;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfb6b0
	if (cr6.eq) goto loc_82DFB6B0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82DFB69C;
	sub_82E8BA80(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,7032
	ctx.r10.s64 = ctx.r11.s64 + 7032;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82dfb6b4
	goto loc_82DFB6B4;
loc_82DFB6B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DFB6B4:
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

__attribute__((alias("__imp__sub_82DFB6CC"))) PPC_WEAK_FUNC(sub_82DFB6CC);
PPC_FUNC_IMPL(__imp__sub_82DFB6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFB6D0"))) PPC_WEAK_FUNC(sub_82DFB6D0);
PPC_FUNC_IMPL(__imp__sub_82DFB6D0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfb6f8
	if (cr6.lt) goto loc_82DFB6F8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82dfb6fc
	goto loc_82DFB6FC;
loc_82DFB6F8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82DFB6FC:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DFB714;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfb740
	if (cr6.eq) goto loc_82DFB740;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82DFB72C;
	sub_82E8BA80(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,7032
	ctx.r10.s64 = ctx.r11.s64 + 7032;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82dfb744
	goto loc_82DFB744;
loc_82DFB740:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DFB744:
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

__attribute__((alias("__imp__sub_82DFB75C"))) PPC_WEAK_FUNC(sub_82DFB75C);
PPC_FUNC_IMPL(__imp__sub_82DFB75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFB760"))) PPC_WEAK_FUNC(sub_82DFB760);
PPC_FUNC_IMPL(__imp__sub_82DFB760) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82DFB778;
	sub_82E8BAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82dc9d98
	ctx.lr = 0x82DFB780;
	sub_82DC9D98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFB788:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfb788
	if (!cr6.eq) goto loc_82DFB788;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DFB7AC;
	sub_824208C8(ctx, base);
	// bl 0x82e691c8
	ctx.lr = 0x82DFB7B0;
	sub_82E691C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFB7B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfb7b8
	if (!cr6.eq) goto loc_82DFB7B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DFB7DC;
	sub_824208C8(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r30,r10,6932
	ctx.r30.s64 = ctx.r10.s64 + 6932;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x824208c8
	ctx.lr = 0x82DFB7F4;
	sub_824208C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82DFB804;
	sub_824208C8(ctx, base);
	// bl 0x83572958
	ctx.lr = 0x82DFB808;
	sub_83572958(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82dfb834
	if (!cr6.eq) goto loc_82DFB834;
	// bl 0x835fd278
	ctx.lr = 0x82DFB814;
	sub_835FD278(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DFB818;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFB820:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfb820
	if (!cr6.eq) goto loc_82DFB820;
	// b 0x82dfb884
	goto loc_82DFB884;
loc_82DFB834:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82dfb860
	if (!cr6.eq) goto loc_82DFB860;
	// bl 0x835fd278
	ctx.lr = 0x82DFB840;
	sub_835FD278(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DFB844;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFB84C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfb84c
	if (!cr6.eq) goto loc_82DFB84C;
	// b 0x82dfb884
	goto loc_82DFB884;
loc_82DFB860:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd278
	ctx.lr = 0x82DFB868;
	sub_835FD278(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DFB86C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFB874:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfb874
	if (!cr6.eq) goto loc_82DFB874;
loc_82DFB884:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DFB898;
	sub_824208C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82DFB8B4"))) PPC_WEAK_FUNC(sub_82DFB8B4);
PPC_FUNC_IMPL(__imp__sub_82DFB8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFB8B8"))) PPC_WEAK_FUNC(sub_82DFB8B8);
PPC_FUNC_IMPL(__imp__sub_82DFB8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82DFB8C0;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e8bae8
	ctx.lr = 0x82DFB8C8;
	sub_82E8BAE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfbb54
	if (cr6.eq) goto loc_82DFBB54;
	// bl 0x82d86078
	ctx.lr = 0x82DFB8D8;
	sub_82D86078(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfbb54
	if (cr6.eq) goto loc_82DFBB54;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// bl 0x82de9608
	ctx.lr = 0x82DFB8EC;
	sub_82DE9608(ctx, base);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r29,r31,352
	ctx.r29.s64 = ctx.r31.s64 + 352;
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82dfbb4c
	if (cr6.eq) goto loc_82DFBB4C;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,6
	ctx.r26.s64 = 6;
	// li r21,1
	ctx.r21.s64 = 1;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r22,3
	ctx.r22.s64 = 3;
	// addi r24,r11,6940
	ctx.r24.s64 = ctx.r11.s64 + 6940;
loc_82DFB930:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// sth r30,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r30.u16);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// stb r30,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r30.u8);
	// bl 0x835fabf8
	ctx.lr = 0x82DFB958;
	sub_835FABF8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DFB95C;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFB964:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfb964
	if (!cr6.eq) goto loc_82DFB964;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82DFB990;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82dfb9a0
	if (!cr6.eq) goto loc_82DFB9A0;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// b 0x82dfba64
	goto loc_82DFBA64;
loc_82DFB9A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fabf8
	ctx.lr = 0x82DFB9A8;
	sub_835FABF8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DFB9AC;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFB9B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfb9b4
	if (!cr6.eq) goto loc_82DFB9B4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82DFB9E0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82dfb9f0
	if (!cr6.eq) goto loc_82DFB9F0;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// b 0x82dfba64
	goto loc_82DFBA64;
loc_82DFB9F0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fabf8
	ctx.lr = 0x82DFB9F8;
	sub_835FABF8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DFB9FC;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFBA04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfba04
	if (!cr6.eq) goto loc_82DFBA04;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82DFBA30;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82dfba40
	if (!cr6.eq) goto loc_82DFBA40;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// b 0x82dfba64
	goto loc_82DFBA64;
loc_82DFBA40:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fabf8
	ctx.lr = 0x82DFBA48;
	sub_835FABF8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DFBA4C;
	sub_8252E3C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8d368
	ctx.lr = 0x82DFBA54;
	sub_82D8D368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dfba64
	if (cr6.eq) goto loc_82DFBA64;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
loc_82DFBA64:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// sth r11,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r11.u16);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82dfba90
	if (cr6.lt) goto loc_82DFBA90;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x82dfba94
	goto loc_82DFBA94;
loc_82DFBA90:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82DFBA94:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82DFBA98:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82dfba98
	if (!cr6.eq) goto loc_82DFBA98;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,180
	cr6.compare<uint32_t>(ctx.r10.u32, 180, xer);
	// bgt cr6,0x82dfbaec
	if (cr6.gt) goto loc_82DFBAEC;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82dfbac8
	if (cr6.lt) goto loc_82DFBAC8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DFBAC8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DFBACC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfbacc
	if (!cr6.eq) goto loc_82DFBACC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82dfbaf4
	goto loc_82DFBAF4;
loc_82DFBAEC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82DFBAF4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82DFBAFC;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,60(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 60);
	// bl 0x82de9c28
	ctx.lr = 0x82DFBB08;
	sub_82DE9C28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfbb24
	if (cr6.lt) goto loc_82DFBB24;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82DFBB24;
	sub_825952B8(ctx, base);
loc_82DFBB24:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dfb930
	if (!cr6.eq) goto loc_82DFB930;
loc_82DFBB4C:
	// lwz r3,60(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 60);
	// bl 0x82dea2c8
	ctx.lr = 0x82DFBB54;
	sub_82DEA2C8(ctx, base);
loc_82DFBB54:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFBB60"))) PPC_WEAK_FUNC(sub_82DFBB60);
PPC_FUNC_IMPL(__imp__sub_82DFBB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DFBB68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,432
	ctx.r4.s64 = 432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DFBB88;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfbb9c
	if (cr6.eq) goto loc_82DFBB9C;
	// bl 0x83608990
	ctx.lr = 0x82DFBB94;
	sub_83608990(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82dfbba0
	goto loc_82DFBBA0;
loc_82DFBB9C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DFBBA0:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82DFBBB4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfbbc8
	if (cr6.eq) goto loc_82DFBBC8;
	// bl 0x83608bb8
	ctx.lr = 0x82DFBBC0;
	sub_83608BB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82dfbbcc
	goto loc_82DFBBCC;
loc_82DFBBC8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82DFBBCC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DFBBE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFBBEC"))) PPC_WEAK_FUNC(sub_82DFBBEC);
PPC_FUNC_IMPL(__imp__sub_82DFBBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFBBF0"))) PPC_WEAK_FUNC(sub_82DFBBF0);
PPC_FUNC_IMPL(__imp__sub_82DFBBF0) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DFBC20;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dfbc4c
	if (cr6.eq) goto loc_82DFBC4C;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82DFBC38;
	sub_82E8BA80(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,7304
	ctx.r10.s64 = ctx.r11.s64 + 7304;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82dfbc50
	goto loc_82DFBC50;
loc_82DFBC4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DFBC50:
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

__attribute__((alias("__imp__sub_82DFBC68"))) PPC_WEAK_FUNC(sub_82DFBC68);
PPC_FUNC_IMPL(__imp__sub_82DFBC68) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,7304
	ctx.r10.s64 = ctx.r11.s64 + 7304;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82DFBC94;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dfbcac
	if (cr6.eq) goto loc_82DFBCAC;
	// bl 0x82416268
	ctx.lr = 0x82DFBCA8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DFBCAC:
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

__attribute__((alias("__imp__sub_82DFBCC4"))) PPC_WEAK_FUNC(sub_82DFBCC4);
PPC_FUNC_IMPL(__imp__sub_82DFBCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFBCC8"))) PPC_WEAK_FUNC(sub_82DFBCC8);
PPC_FUNC_IMPL(__imp__sub_82DFBCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dfbcd8
	if (cr6.lt) goto loc_82DFBCD8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82DFBCD8:
	// b 0x82dfbbf0
	sub_82DFBBF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DFBCDC"))) PPC_WEAK_FUNC(sub_82DFBCDC);
PPC_FUNC_IMPL(__imp__sub_82DFBCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DFBCE0"))) PPC_WEAK_FUNC(sub_82DFBCE0);
PPC_FUNC_IMPL(__imp__sub_82DFBCE0) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82DFBCF8;
	sub_82E8BAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d860f0
	ctx.lr = 0x82DFBD00;
	sub_82D860F0(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// bl 0x82dc9d98
	ctx.lr = 0x82DFBD08;
	sub_82DC9D98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFBD10:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfbd10
	if (!cr6.eq) goto loc_82DFBD10;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DFBD34;
	sub_824208C8(ctx, base);
	// bl 0x82e691c8
	ctx.lr = 0x82DFBD38;
	sub_82E691C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DFBD40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dfbd40
	if (!cr6.eq) goto loc_82DFBD40;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DFBD64;
	sub_824208C8(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r30,r10,7204
	ctx.r30.s64 = ctx.r10.s64 + 7204;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x824208c8
	ctx.lr = 0x82DFBD7C;
	sub_824208C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82DFBD8C;
	sub_824208C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

