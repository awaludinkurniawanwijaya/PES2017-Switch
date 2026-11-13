#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D8799C"))) PPC_WEAK_FUNC(sub_82D8799C);
PPC_FUNC_IMPL(__imp__sub_82D8799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D879A0"))) PPC_WEAK_FUNC(sub_82D879A0);
PPC_FUNC_IMPL(__imp__sub_82D879A0) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-2572
	ctx.r9.s64 = ctx.r10.s64 + -2572;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// bl 0x82da9678
	ctx.lr = 0x82D879F0;
	sub_82DA9678(ctx, base);
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

__attribute__((alias("__imp__sub_82D87A08"))) PPC_WEAK_FUNC(sub_82D87A08);
PPC_FUNC_IMPL(__imp__sub_82D87A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D87A10;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-2572
	ctx.r10.s64 = ctx.r11.s64 + -2572;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r4,60(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d87a40
	if (cr6.eq) goto loc_82D87A40;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82D87A40;
	sub_825952B8(ctx, base);
loc_82D87A40:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r30,36
	ctx.r31.s64 = ctx.r30.s64 + 36;
	// stw r29,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d87a7c
	if (cr6.eq) goto loc_82D87A7C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b67040
	ctx.lr = 0x82D87A6C;
	sub_82B67040(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D87A7C;
	sub_825952B8(ctx, base);
loc_82D87A7C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d87aa8
	if (cr6.lt) goto loc_82D87AA8;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D87AA8;
	sub_825952B8(ctx, base);
loc_82D87AA8:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D87AC0"))) PPC_WEAK_FUNC(sub_82D87AC0);
PPC_FUNC_IMPL(__imp__sub_82D87AC0) {
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
	// bl 0x82d87a08
	ctx.lr = 0x82D87AE0;
	sub_82D87A08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d87af8
	if (cr6.eq) goto loc_82D87AF8;
	// bl 0x82416268
	ctx.lr = 0x82D87AF4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D87AF8:
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

__attribute__((alias("__imp__sub_82D87B10"))) PPC_WEAK_FUNC(sub_82D87B10);
PPC_FUNC_IMPL(__imp__sub_82D87B10) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d87b48
	if (cr6.eq) goto loc_82D87B48;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d872f8
	ctx.lr = 0x82D87B40;
	sub_82D872F8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82D87B48;
	sub_82416268(ctx, base);
loc_82D87B48:
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

__attribute__((alias("__imp__sub_82D87B6C"))) PPC_WEAK_FUNC(sub_82D87B6C);
PPC_FUNC_IMPL(__imp__sub_82D87B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D87B70"))) PPC_WEAK_FUNC(sub_82D87B70);
PPC_FUNC_IMPL(__imp__sub_82D87B70) {
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d87bbc
	if (cr6.eq) goto loc_82D87BBC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82dd78d8
	ctx.lr = 0x82D87BA4;
	sub_82DD78D8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d872f8
	ctx.lr = 0x82D87BB8;
	sub_82D872F8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82D87BBC:
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

__attribute__((alias("__imp__sub_82D87BD4"))) PPC_WEAK_FUNC(sub_82D87BD4);
PPC_FUNC_IMPL(__imp__sub_82D87BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D87BD8"))) PPC_WEAK_FUNC(sub_82D87BD8);
PPC_FUNC_IMPL(__imp__sub_82D87BD8) {
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
	// lwz r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r31,r3,52
	ctx.r31.s64 = ctx.r3.s64 + 52;
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d87c24
	if (cr6.eq) goto loc_82D87C24;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82dd78d8
	ctx.lr = 0x82D87C0C;
	sub_82DD78D8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d872f8
	ctx.lr = 0x82D87C20;
	sub_82D872F8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82D87C24:
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

__attribute__((alias("__imp__sub_82D87C3C"))) PPC_WEAK_FUNC(sub_82D87C3C);
PPC_FUNC_IMPL(__imp__sub_82D87C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D87C40"))) PPC_WEAK_FUNC(sub_82D87C40);
PPC_FUNC_IMPL(__imp__sub_82D87C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D87C48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d87c6c
	if (cr6.lt) goto loc_82D87C6C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D87C6C:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
	// stb r10,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r10.u8);
	// lwz r31,36(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d87ca8
	if (cr6.eq) goto loc_82D87CA8;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x82D87CA0;
	sub_831CE420(ctx, base);
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82D87CA8:
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r31,r30,52
	ctx.r31.s64 = ctx.r30.s64 + 52;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d87ce0
	if (cr6.eq) goto loc_82D87CE0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82dd78d8
	ctx.lr = 0x82D87CC8;
	sub_82DD78D8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d872f8
	ctx.lr = 0x82D87CDC;
	sub_82D872F8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82D87CE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D87CE8"))) PPC_WEAK_FUNC(sub_82D87CE8);
PPC_FUNC_IMPL(__imp__sub_82D87CE8) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-2568
	ctx.r9.s64 = ctx.r10.s64 + -2568;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// bl 0x82d87c40
	ctx.lr = 0x82D87D38;
	sub_82D87C40(ctx, base);
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

__attribute__((alias("__imp__sub_82D87D50"))) PPC_WEAK_FUNC(sub_82D87D50);
PPC_FUNC_IMPL(__imp__sub_82D87D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D87D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-2568
	ctx.r10.s64 = ctx.r11.s64 + -2568;
	// addi r31,r3,52
	ctx.r31.s64 = ctx.r3.s64 + 52;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d87d94
	if (cr6.eq) goto loc_82D87D94;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d872f8
	ctx.lr = 0x82D87D8C;
	sub_82D872F8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82D87D94;
	sub_82416268(ctx, base);
loc_82D87D94:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d87db4
	if (cr6.eq) goto loc_82D87DB4;
	// bl 0x82416268
	ctx.lr = 0x82D87DB4;
	sub_82416268(ctx, base);
loc_82D87DB4:
	// stw r30,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r30.u32);
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// stw r30,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r30.u32);
	// stw r30,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r30.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d87dd8
	if (cr6.lt) goto loc_82D87DD8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82D87DD8;
	sub_82416268(ctx, base);
loc_82D87DD8:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D87DF0"))) PPC_WEAK_FUNC(sub_82D87DF0);
PPC_FUNC_IMPL(__imp__sub_82D87DF0) {
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
	// bl 0x82d87d50
	ctx.lr = 0x82D87E10;
	sub_82D87D50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d87e28
	if (cr6.eq) goto loc_82D87E28;
	// bl 0x82416268
	ctx.lr = 0x82D87E24;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D87E28:
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

__attribute__((alias("__imp__sub_82D87E40"))) PPC_WEAK_FUNC(sub_82D87E40);
PPC_FUNC_IMPL(__imp__sub_82D87E40) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-2564
	ctx.r10.s64 = ctx.r11.s64 + -2564;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d864b0
	ctx.lr = 0x82D87E78;
	sub_82D864B0(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82d873d0
	ctx.lr = 0x82D87E88;
	sub_82D873D0(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r6.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D87EC8"))) PPC_WEAK_FUNC(sub_82D87EC8);
PPC_FUNC_IMPL(__imp__sub_82D87EC8) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-2564
	ctx.r10.s64 = ctx.r11.s64 + -2564;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d87908
	ctx.lr = 0x82D87F04;
	sub_82D87908(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825952b8
	ctx.lr = 0x82D87F18;
	sub_825952B8(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d87f30
	if (cr6.eq) goto loc_82D87F30;
	// bl 0x82416268
	ctx.lr = 0x82D87F2C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D87F30:
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

__attribute__((alias("__imp__sub_82D87F48"))) PPC_WEAK_FUNC(sub_82D87F48);
PPC_FUNC_IMPL(__imp__sub_82D87F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D87F50;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-2584
	ctx.r10.s64 = ctx.r11.s64 + -2584;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r4,507
	ctx.r4.s64 = 33226752;
	// stw r9,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
	// ori r4,r4,210
	ctx.r4.u64 = ctx.r4.u64 | 210;
	// stb r29,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r29.u8);
	// bl 0x82d04220
	ctx.lr = 0x82D87F88;
	sub_82D04220(ctx, base);
	// li r30,29
	ctx.r30.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82D87FA0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d87fb0
	if (cr6.eq) goto loc_82D87FB0;
	// bl 0x82d87008
	ctx.lr = 0x82D87FAC;
	sub_82D87008(ctx, base);
	// b 0x82d87fb4
	goto loc_82D87FB4;
loc_82D87FB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D87FB4:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x82595718
	ctx.lr = 0x82D87FCC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d87fdc
	if (cr6.eq) goto loc_82D87FDC;
	// bl 0x82da1b88
	ctx.lr = 0x82D87FD8;
	sub_82DA1B88(ctx, base);
	// b 0x82d87fe0
	goto loc_82D87FE0;
loc_82D87FDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D87FE0:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82D87FF8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88008
	if (cr6.eq) goto loc_82D88008;
	// bl 0x82daa7c0
	ctx.lr = 0x82D88004;
	sub_82DAA7C0(ctx, base);
	// b 0x82d8800c
	goto loc_82D8800C;
loc_82D88008:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D8800C:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82595718
	ctx.lr = 0x82D88024;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88034
	if (cr6.eq) goto loc_82D88034;
	// bl 0x82db5de8
	ctx.lr = 0x82D88030;
	sub_82DB5DE8(ctx, base);
	// b 0x82d88038
	goto loc_82D88038;
loc_82D88034:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D88038:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x82D88050;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88060
	if (cr6.eq) goto loc_82D88060;
	// bl 0x82dbba90
	ctx.lr = 0x82D8805C;
	sub_82DBBA90(ctx, base);
	// b 0x82d88064
	goto loc_82D88064;
loc_82D88060:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D88064:
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82595718
	ctx.lr = 0x82D8807C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d880a0
	if (cr6.eq) goto loc_82D880A0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// addi r9,r10,21716
	ctx.r9.s64 = ctx.r10.s64 + 21716;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x82d880a4
	goto loc_82D880A4;
loc_82D880A0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82D880A4:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r4,84
	ctx.r4.s64 = 84;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82595718
	ctx.lr = 0x82D880BC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d880cc
	if (cr6.eq) goto loc_82D880CC;
	// bl 0x82da3348
	ctx.lr = 0x82D880C8;
	sub_82DA3348(ctx, base);
	// b 0x82d880d0
	goto loc_82D880D0;
loc_82D880CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D880D0:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// li r4,1984
	ctx.r4.s64 = 1984;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82595718
	ctx.lr = 0x82D880E8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d880f8
	if (cr6.eq) goto loc_82D880F8;
	// bl 0x82dfa618
	ctx.lr = 0x82D880F4;
	sub_82DFA618(ctx, base);
	// b 0x82d880fc
	goto loc_82D880FC;
loc_82D880F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D880FC:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r4,68
	ctx.r4.s64 = 68;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82595718
	ctx.lr = 0x82D88114;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88124
	if (cr6.eq) goto loc_82D88124;
	// bl 0x82d87148
	ctx.lr = 0x82D88120;
	sub_82D87148(ctx, base);
	// b 0x82d88128
	goto loc_82D88128;
loc_82D88124:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D88128:
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x82595718
	ctx.lr = 0x82D88140;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88150
	if (cr6.eq) goto loc_82D88150;
	// bl 0x82df9730
	ctx.lr = 0x82D8814C;
	sub_82DF9730(ctx, base);
	// b 0x82d88154
	goto loc_82D88154;
loc_82D88150:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D88154:
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82595718
	ctx.lr = 0x82D8816C;
	sub_82595718(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82595718
	ctx.lr = 0x82D88184;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88194
	if (cr6.eq) goto loc_82D88194;
	// bl 0x82df81c8
	ctx.lr = 0x82D88190;
	sub_82DF81C8(ctx, base);
	// b 0x82d88198
	goto loc_82D88198;
loc_82D88194:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D88198:
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82595718
	ctx.lr = 0x82D881B0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d881c0
	if (cr6.eq) goto loc_82D881C0;
	// bl 0x82d879a0
	ctx.lr = 0x82D881BC;
	sub_82D879A0(ctx, base);
	// b 0x82d881c4
	goto loc_82D881C4;
loc_82D881C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D881C4:
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// li r4,552
	ctx.r4.s64 = 552;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82595718
	ctx.lr = 0x82D881DC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d881ec
	if (cr6.eq) goto loc_82D881EC;
	// bl 0x82da6570
	ctx.lr = 0x82D881E8;
	sub_82DA6570(ctx, base);
	// b 0x82d881f0
	goto loc_82D881F0;
loc_82D881EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D881F0:
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// li r4,264
	ctx.r4.s64 = 264;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82595718
	ctx.lr = 0x82D88208;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88218
	if (cr6.eq) goto loc_82D88218;
	// bl 0x82de9b88
	ctx.lr = 0x82D88214;
	sub_82DE9B88(ctx, base);
	// b 0x82d8821c
	goto loc_82D8821C;
loc_82D88218:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D8821C:
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// li r4,688
	ctx.r4.s64 = 688;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82595718
	ctx.lr = 0x82D88234;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88244
	if (cr6.eq) goto loc_82D88244;
	// bl 0x82dc0ba0
	ctx.lr = 0x82D88240;
	sub_82DC0BA0(ctx, base);
	// b 0x82d88248
	goto loc_82D88248;
loc_82D88244:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D88248:
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// li r4,164
	ctx.r4.s64 = 164;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82595718
	ctx.lr = 0x82D88260;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88270
	if (cr6.eq) goto loc_82D88270;
	// bl 0x82df87b8
	ctx.lr = 0x82D8826C;
	sub_82DF87B8(ctx, base);
	// b 0x82d88274
	goto loc_82D88274;
loc_82D88270:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D88274:
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D8828C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8829c
	if (cr6.eq) goto loc_82D8829C;
	// bl 0x82d87e40
	ctx.lr = 0x82D88298;
	sub_82D87E40(ctx, base);
	// b 0x82d882a0
	goto loc_82D882A0;
loc_82D8829C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D882A0:
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82D882B8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d882c8
	if (cr6.eq) goto loc_82D882C8;
	// bl 0x82dd95d8
	ctx.lr = 0x82D882C4;
	sub_82DD95D8(ctx, base);
	// b 0x82d882cc
	goto loc_82D882CC;
loc_82D882C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D882CC:
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r4,328
	ctx.r4.s64 = 328;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x82D882E4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d882f4
	if (cr6.eq) goto loc_82D882F4;
	// bl 0x82dd62e8
	ctx.lr = 0x82D882F0;
	sub_82DD62E8(ctx, base);
	// b 0x82d882f8
	goto loc_82D882F8;
loc_82D882F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D882F8:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595718
	ctx.lr = 0x82D88310;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88320
	if (cr6.eq) goto loc_82D88320;
	// bl 0x82ddaae0
	ctx.lr = 0x82D8831C;
	sub_82DDAAE0(ctx, base);
	// b 0x82d88324
	goto loc_82D88324;
loc_82D88320:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D88324:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82595718
	ctx.lr = 0x82D8833C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8834c
	if (cr6.eq) goto loc_82D8834C;
	// bl 0x82ddc8b8
	ctx.lr = 0x82D88348;
	sub_82DDC8B8(ctx, base);
	// b 0x82d88350
	goto loc_82D88350;
loc_82D8834C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D88350:
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82595718
	ctx.lr = 0x82D88368;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88378
	if (cr6.eq) goto loc_82D88378;
	// bl 0x82ddb260
	ctx.lr = 0x82D88374;
	sub_82DDB260(ctx, base);
	// b 0x82d8837c
	goto loc_82D8837C;
loc_82D88378:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D8837C:
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r4,68
	ctx.r4.s64 = 68;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82595718
	ctx.lr = 0x82D88394;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d883a4
	if (cr6.eq) goto loc_82D883A4;
	// bl 0x82d87ce8
	ctx.lr = 0x82D883A0;
	sub_82D87CE8(ctx, base);
	// b 0x82d883a8
	goto loc_82D883A8;
loc_82D883A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D883A8:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82595718
	ctx.lr = 0x82D883C0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d883d0
	if (cr6.eq) goto loc_82D883D0;
	// bl 0x82dcd608
	ctx.lr = 0x82D883CC;
	sub_82DCD608(ctx, base);
	// b 0x82d883d4
	goto loc_82D883D4;
loc_82D883D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D883D4:
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r4,528
	ctx.r4.s64 = 528;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82595718
	ctx.lr = 0x82D883EC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d883fc
	if (cr6.eq) goto loc_82D883FC;
	// bl 0x82dd9498
	ctx.lr = 0x82D883F8;
	sub_82DD9498(ctx, base);
	// b 0x82d88400
	goto loc_82D88400;
loc_82D883FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D88400:
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82595718
	ctx.lr = 0x82D88418;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88428
	if (cr6.eq) goto loc_82D88428;
	// bl 0x82df85c0
	ctx.lr = 0x82D88424;
	sub_82DF85C0(ctx, base);
	// b 0x82d8842c
	goto loc_82D8842C;
loc_82D88428:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D8842C:
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82595718
	ctx.lr = 0x82D88444;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88454
	if (cr6.eq) goto loc_82D88454;
	// bl 0x82da7500
	ctx.lr = 0x82D88450;
	sub_82DA7500(ctx, base);
	// b 0x82d88458
	goto loc_82D88458;
loc_82D88454:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D88458:
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82595718
	ctx.lr = 0x82D88470;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88480
	if (cr6.eq) goto loc_82D88480;
	// bl 0x82d9c050
	ctx.lr = 0x82D8847C;
	sub_82D9C050(ctx, base);
	// b 0x82d88484
	goto loc_82D88484;
loc_82D88480:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D88484:
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// li r4,68
	ctx.r4.s64 = 68;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82595718
	ctx.lr = 0x82D884A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d884b0
	if (cr6.eq) goto loc_82D884B0;
	// bl 0x82df83c8
	ctx.lr = 0x82D884AC;
	sub_82DF83C8(ctx, base);
	// b 0x82d884b4
	goto loc_82D884B4;
loc_82D884B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D884B4:
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82595718
	ctx.lr = 0x82D884CC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d884dc
	if (cr6.eq) goto loc_82D884DC;
	// bl 0x82dd4740
	ctx.lr = 0x82D884D8;
	sub_82DD4740(ctx, base);
	// b 0x82d884e0
	goto loc_82D884E0;
loc_82D884DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D884E0:
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82595718
	ctx.lr = 0x82D884F8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88508
	if (cr6.eq) goto loc_82D88508;
	// bl 0x82dd4de0
	ctx.lr = 0x82D88504;
	sub_82DD4DE0(ctx, base);
	// b 0x82d8850c
	goto loc_82D8850C;
loc_82D88508:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D8850C:
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82595718
	ctx.lr = 0x82D88524;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88534
	if (cr6.eq) goto loc_82D88534;
	// bl 0x82df1ab8
	ctx.lr = 0x82D88530;
	sub_82DF1AB8(ctx, base);
	// b 0x82d88538
	goto loc_82D88538;
loc_82D88534:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D88538:
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82595718
	ctx.lr = 0x82D88550;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d88560
	if (cr6.eq) goto loc_82D88560;
	// bl 0x82dacc20
	ctx.lr = 0x82D8855C;
	sub_82DACC20(ctx, base);
	// b 0x82d88564
	goto loc_82D88564;
loc_82D88560:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D88564:
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// li r4,1864
	ctx.r4.s64 = 1864;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82595718
	ctx.lr = 0x82D8857C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8859c
	if (cr6.eq) goto loc_82D8859C;
	// bl 0x82d86338
	ctx.lr = 0x82D88588;
	sub_82D86338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D8859C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D885B0"))) PPC_WEAK_FUNC(sub_82D885B0);
PPC_FUNC_IMPL(__imp__sub_82D885B0) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D885D4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d885f8
	if (cr6.eq) goto loc_82D885F8;
	// bl 0x82d87f48
	ctx.lr = 0x82D885E0;
	sub_82D87F48(ctx, base);
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// stw r3,24832(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D885F8:
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24832, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D88614"))) PPC_WEAK_FUNC(sub_82D88614);
PPC_FUNC_IMPL(__imp__sub_82D88614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88618"))) PPC_WEAK_FUNC(sub_82D88618);
PPC_FUNC_IMPL(__imp__sub_82D88618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D88644;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D8865C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82D88674"))) PPC_WEAK_FUNC(sub_82D88674);
PPC_FUNC_IMPL(__imp__sub_82D88674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88678"))) PPC_WEAK_FUNC(sub_82D88678);
PPC_FUNC_IMPL(__imp__sub_82D88678) {
	PPC_FUNC_PROLOGUE();
	// stw r4,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D88680"))) PPC_WEAK_FUNC(sub_82D88680);
PPC_FUNC_IMPL(__imp__sub_82D88680) {
	PPC_FUNC_PROLOGUE();
	// stw r4,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D88688"))) PPC_WEAK_FUNC(sub_82D88688);
PPC_FUNC_IMPL(__imp__sub_82D88688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D88690;
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
	ctx.lr = 0x82D886B0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d886c4
	if (cr6.eq) goto loc_82D886C4;
	// bl 0x835fdfc0
	ctx.lr = 0x82D886BC;
	sub_835FDFC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82d886c8
	goto loc_82D886C8;
loc_82D886C4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D886C8:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82D886DC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d886f0
	if (cr6.eq) goto loc_82D886F0;
	// bl 0x835fe168
	ctx.lr = 0x82D886E8;
	sub_835FE168(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82d886f4
	goto loc_82D886F4;
loc_82D886F0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82D886F4:
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
	ctx.lr = 0x82D8870C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88714"))) PPC_WEAK_FUNC(sub_82D88714);
PPC_FUNC_IMPL(__imp__sub_82D88714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88718"))) PPC_WEAK_FUNC(sub_82D88718);
PPC_FUNC_IMPL(__imp__sub_82D88718) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,26136
	ctx.r10.s64 = ctx.r11.s64 + 26136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82D88744;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d8875c
	if (cr6.eq) goto loc_82D8875C;
	// bl 0x82416268
	ctx.lr = 0x82D88758;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D8875C:
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

__attribute__((alias("__imp__sub_82D88774"))) PPC_WEAK_FUNC(sub_82D88774);
PPC_FUNC_IMPL(__imp__sub_82D88774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88778"))) PPC_WEAK_FUNC(sub_82D88778);
PPC_FUNC_IMPL(__imp__sub_82D88778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88788
	if (cr6.lt) goto loc_82D88788;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88788:
	// b 0x82e2e9f8
	sub_82E2E9F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8878C"))) PPC_WEAK_FUNC(sub_82D8878C);
PPC_FUNC_IMPL(__imp__sub_82D8878C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88790"))) PPC_WEAK_FUNC(sub_82D88790);
PPC_FUNC_IMPL(__imp__sub_82D88790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d887a0
	if (cr6.lt) goto loc_82D887A0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D887A0:
	// b 0x82e2ed30
	sub_82E2ED30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D887A4"))) PPC_WEAK_FUNC(sub_82D887A4);
PPC_FUNC_IMPL(__imp__sub_82D887A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D887A8"))) PPC_WEAK_FUNC(sub_82D887A8);
PPC_FUNC_IMPL(__imp__sub_82D887A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d887b8
	if (cr6.lt) goto loc_82D887B8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D887B8:
	// b 0x82e2f0b0
	sub_82E2F0B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D887BC"))) PPC_WEAK_FUNC(sub_82D887BC);
PPC_FUNC_IMPL(__imp__sub_82D887BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D887C0"))) PPC_WEAK_FUNC(sub_82D887C0);
PPC_FUNC_IMPL(__imp__sub_82D887C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d887d0
	if (cr6.lt) goto loc_82D887D0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D887D0:
	// b 0x82e2f7d0
	sub_82E2F7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D887D4"))) PPC_WEAK_FUNC(sub_82D887D4);
PPC_FUNC_IMPL(__imp__sub_82D887D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D887D8"))) PPC_WEAK_FUNC(sub_82D887D8);
PPC_FUNC_IMPL(__imp__sub_82D887D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d887e8
	if (cr6.lt) goto loc_82D887E8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D887E8:
	// b 0x82e2fc20
	sub_82E2FC20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D887EC"))) PPC_WEAK_FUNC(sub_82D887EC);
PPC_FUNC_IMPL(__imp__sub_82D887EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D887F0"))) PPC_WEAK_FUNC(sub_82D887F0);
PPC_FUNC_IMPL(__imp__sub_82D887F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88800
	if (cr6.lt) goto loc_82D88800;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88800:
	// b 0x82e303a8
	sub_82E303A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88804"))) PPC_WEAK_FUNC(sub_82D88804);
PPC_FUNC_IMPL(__imp__sub_82D88804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88808"))) PPC_WEAK_FUNC(sub_82D88808);
PPC_FUNC_IMPL(__imp__sub_82D88808) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D88838;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8887c
	if (cr6.eq) goto loc_82D8887C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88858
	if (cr6.lt) goto loc_82D88858;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d8885c
	goto loc_82D8885C;
loc_82D88858:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82D8885C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82D88868;
	sub_82E8BA80(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,26136
	ctx.r10.s64 = ctx.r11.s64 + 26136;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82d88880
	goto loc_82D88880;
loc_82D8887C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D88880:
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

__attribute__((alias("__imp__sub_82D88898"))) PPC_WEAK_FUNC(sub_82D88898);
PPC_FUNC_IMPL(__imp__sub_82D88898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d888a8
	if (cr6.lt) goto loc_82D888A8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D888A8:
	// b 0x82e30b50
	sub_82E30B50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D888AC"))) PPC_WEAK_FUNC(sub_82D888AC);
PPC_FUNC_IMPL(__imp__sub_82D888AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D888B0"))) PPC_WEAK_FUNC(sub_82D888B0);
PPC_FUNC_IMPL(__imp__sub_82D888B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d888c0
	if (cr6.lt) goto loc_82D888C0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D888C0:
	// b 0x82e30ed8
	sub_82E30ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D888C4"))) PPC_WEAK_FUNC(sub_82D888C4);
PPC_FUNC_IMPL(__imp__sub_82D888C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D888C8"))) PPC_WEAK_FUNC(sub_82D888C8);
PPC_FUNC_IMPL(__imp__sub_82D888C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d888d8
	if (cr6.lt) goto loc_82D888D8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D888D8:
	// b 0x82e31208
	sub_82E31208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D888DC"))) PPC_WEAK_FUNC(sub_82D888DC);
PPC_FUNC_IMPL(__imp__sub_82D888DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D888E0"))) PPC_WEAK_FUNC(sub_82D888E0);
PPC_FUNC_IMPL(__imp__sub_82D888E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d888f0
	if (cr6.lt) goto loc_82D888F0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D888F0:
	// b 0x82e31ad0
	sub_82E31AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D888F4"))) PPC_WEAK_FUNC(sub_82D888F4);
PPC_FUNC_IMPL(__imp__sub_82D888F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D888F8"))) PPC_WEAK_FUNC(sub_82D888F8);
PPC_FUNC_IMPL(__imp__sub_82D888F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88908
	if (cr6.lt) goto loc_82D88908;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88908:
	// b 0x82e323e0
	sub_82E323E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8890C"))) PPC_WEAK_FUNC(sub_82D8890C);
PPC_FUNC_IMPL(__imp__sub_82D8890C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88910"))) PPC_WEAK_FUNC(sub_82D88910);
PPC_FUNC_IMPL(__imp__sub_82D88910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88920
	if (cr6.lt) goto loc_82D88920;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88920:
	// b 0x82e325b8
	sub_82E325B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88924"))) PPC_WEAK_FUNC(sub_82D88924);
PPC_FUNC_IMPL(__imp__sub_82D88924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88928"))) PPC_WEAK_FUNC(sub_82D88928);
PPC_FUNC_IMPL(__imp__sub_82D88928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88938
	if (cr6.lt) goto loc_82D88938;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88938:
	// b 0x82e32a30
	sub_82E32A30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8893C"))) PPC_WEAK_FUNC(sub_82D8893C);
PPC_FUNC_IMPL(__imp__sub_82D8893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88940"))) PPC_WEAK_FUNC(sub_82D88940);
PPC_FUNC_IMPL(__imp__sub_82D88940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88950
	if (cr6.lt) goto loc_82D88950;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88950:
	// b 0x82e33820
	sub_82E33820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88954"))) PPC_WEAK_FUNC(sub_82D88954);
PPC_FUNC_IMPL(__imp__sub_82D88954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88958"))) PPC_WEAK_FUNC(sub_82D88958);
PPC_FUNC_IMPL(__imp__sub_82D88958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88968
	if (cr6.lt) goto loc_82D88968;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88968:
	// b 0x82e33ef8
	sub_82E33EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8896C"))) PPC_WEAK_FUNC(sub_82D8896C);
PPC_FUNC_IMPL(__imp__sub_82D8896C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88970"))) PPC_WEAK_FUNC(sub_82D88970);
PPC_FUNC_IMPL(__imp__sub_82D88970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88980
	if (cr6.lt) goto loc_82D88980;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88980:
	// b 0x82e343e0
	sub_82E343E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88984"))) PPC_WEAK_FUNC(sub_82D88984);
PPC_FUNC_IMPL(__imp__sub_82D88984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88988"))) PPC_WEAK_FUNC(sub_82D88988);
PPC_FUNC_IMPL(__imp__sub_82D88988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88998
	if (cr6.lt) goto loc_82D88998;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88998:
	// b 0x82e34998
	sub_82E34998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8899C"))) PPC_WEAK_FUNC(sub_82D8899C);
PPC_FUNC_IMPL(__imp__sub_82D8899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D889A0"))) PPC_WEAK_FUNC(sub_82D889A0);
PPC_FUNC_IMPL(__imp__sub_82D889A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d889b0
	if (cr6.lt) goto loc_82D889B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D889B0:
	// b 0x82e34e00
	sub_82E34E00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D889B4"))) PPC_WEAK_FUNC(sub_82D889B4);
PPC_FUNC_IMPL(__imp__sub_82D889B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D889B8"))) PPC_WEAK_FUNC(sub_82D889B8);
PPC_FUNC_IMPL(__imp__sub_82D889B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d889c8
	if (cr6.lt) goto loc_82D889C8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D889C8:
	// b 0x82e35128
	sub_82E35128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D889CC"))) PPC_WEAK_FUNC(sub_82D889CC);
PPC_FUNC_IMPL(__imp__sub_82D889CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D889D0"))) PPC_WEAK_FUNC(sub_82D889D0);
PPC_FUNC_IMPL(__imp__sub_82D889D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d889e0
	if (cr6.lt) goto loc_82D889E0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D889E0:
	// b 0x82e355b8
	sub_82E355B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D889E4"))) PPC_WEAK_FUNC(sub_82D889E4);
PPC_FUNC_IMPL(__imp__sub_82D889E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D889E8"))) PPC_WEAK_FUNC(sub_82D889E8);
PPC_FUNC_IMPL(__imp__sub_82D889E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d889f8
	if (cr6.lt) goto loc_82D889F8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D889F8:
	// b 0x82e35908
	sub_82E35908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D889FC"))) PPC_WEAK_FUNC(sub_82D889FC);
PPC_FUNC_IMPL(__imp__sub_82D889FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88A00"))) PPC_WEAK_FUNC(sub_82D88A00);
PPC_FUNC_IMPL(__imp__sub_82D88A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88a10
	if (cr6.lt) goto loc_82D88A10;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88A10:
	// b 0x82e36588
	sub_82E36588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88A14"))) PPC_WEAK_FUNC(sub_82D88A14);
PPC_FUNC_IMPL(__imp__sub_82D88A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88A18"))) PPC_WEAK_FUNC(sub_82D88A18);
PPC_FUNC_IMPL(__imp__sub_82D88A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88a28
	if (cr6.lt) goto loc_82D88A28;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88A28:
	// b 0x82e368c8
	sub_82E368C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88A2C"))) PPC_WEAK_FUNC(sub_82D88A2C);
PPC_FUNC_IMPL(__imp__sub_82D88A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88A30"))) PPC_WEAK_FUNC(sub_82D88A30);
PPC_FUNC_IMPL(__imp__sub_82D88A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88a40
	if (cr6.lt) goto loc_82D88A40;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88A40:
	// b 0x82e36cc0
	sub_82E36CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88A44"))) PPC_WEAK_FUNC(sub_82D88A44);
PPC_FUNC_IMPL(__imp__sub_82D88A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88A48"))) PPC_WEAK_FUNC(sub_82D88A48);
PPC_FUNC_IMPL(__imp__sub_82D88A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88a58
	if (cr6.lt) goto loc_82D88A58;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88A58:
	// b 0x82e37250
	sub_82E37250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88A5C"))) PPC_WEAK_FUNC(sub_82D88A5C);
PPC_FUNC_IMPL(__imp__sub_82D88A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88A60"))) PPC_WEAK_FUNC(sub_82D88A60);
PPC_FUNC_IMPL(__imp__sub_82D88A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88a70
	if (cr6.lt) goto loc_82D88A70;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88A70:
	// b 0x82e37bf8
	sub_82E37BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88A74"))) PPC_WEAK_FUNC(sub_82D88A74);
PPC_FUNC_IMPL(__imp__sub_82D88A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88A78"))) PPC_WEAK_FUNC(sub_82D88A78);
PPC_FUNC_IMPL(__imp__sub_82D88A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88a88
	if (cr6.lt) goto loc_82D88A88;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88A88:
	// b 0x82e385c0
	sub_82E385C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88A8C"))) PPC_WEAK_FUNC(sub_82D88A8C);
PPC_FUNC_IMPL(__imp__sub_82D88A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88A90"))) PPC_WEAK_FUNC(sub_82D88A90);
PPC_FUNC_IMPL(__imp__sub_82D88A90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88aa0
	if (cr6.lt) goto loc_82D88AA0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88AA0:
	// b 0x82e38b48
	sub_82E38B48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88AA4"))) PPC_WEAK_FUNC(sub_82D88AA4);
PPC_FUNC_IMPL(__imp__sub_82D88AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88AA8"))) PPC_WEAK_FUNC(sub_82D88AA8);
PPC_FUNC_IMPL(__imp__sub_82D88AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88ab8
	if (cr6.lt) goto loc_82D88AB8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88AB8:
	// b 0x82e391e0
	sub_82E391E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88ABC"))) PPC_WEAK_FUNC(sub_82D88ABC);
PPC_FUNC_IMPL(__imp__sub_82D88ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88AC0"))) PPC_WEAK_FUNC(sub_82D88AC0);
PPC_FUNC_IMPL(__imp__sub_82D88AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88ad0
	if (cr6.lt) goto loc_82D88AD0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88AD0:
	// b 0x82e39880
	sub_82E39880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88AD4"))) PPC_WEAK_FUNC(sub_82D88AD4);
PPC_FUNC_IMPL(__imp__sub_82D88AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88AD8"))) PPC_WEAK_FUNC(sub_82D88AD8);
PPC_FUNC_IMPL(__imp__sub_82D88AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88ae8
	if (cr6.lt) goto loc_82D88AE8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88AE8:
	// b 0x82e3a380
	sub_82E3A380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88AEC"))) PPC_WEAK_FUNC(sub_82D88AEC);
PPC_FUNC_IMPL(__imp__sub_82D88AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88AF0"))) PPC_WEAK_FUNC(sub_82D88AF0);
PPC_FUNC_IMPL(__imp__sub_82D88AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88b00
	if (cr6.lt) goto loc_82D88B00;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88B00:
	// b 0x82e3a768
	sub_82E3A768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88B04"))) PPC_WEAK_FUNC(sub_82D88B04);
PPC_FUNC_IMPL(__imp__sub_82D88B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88B08"))) PPC_WEAK_FUNC(sub_82D88B08);
PPC_FUNC_IMPL(__imp__sub_82D88B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88b18
	if (cr6.lt) goto loc_82D88B18;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88B18:
	// b 0x82e3ad70
	sub_82E3AD70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88B1C"))) PPC_WEAK_FUNC(sub_82D88B1C);
PPC_FUNC_IMPL(__imp__sub_82D88B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88B20"))) PPC_WEAK_FUNC(sub_82D88B20);
PPC_FUNC_IMPL(__imp__sub_82D88B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88b30
	if (cr6.lt) goto loc_82D88B30;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88B30:
	// b 0x82e3b0a0
	sub_82E3B0A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88B34"))) PPC_WEAK_FUNC(sub_82D88B34);
PPC_FUNC_IMPL(__imp__sub_82D88B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88B38"))) PPC_WEAK_FUNC(sub_82D88B38);
PPC_FUNC_IMPL(__imp__sub_82D88B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88b48
	if (cr6.lt) goto loc_82D88B48;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88B48:
	// b 0x82e3b3d0
	sub_82E3B3D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88B4C"))) PPC_WEAK_FUNC(sub_82D88B4C);
PPC_FUNC_IMPL(__imp__sub_82D88B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88B50"))) PPC_WEAK_FUNC(sub_82D88B50);
PPC_FUNC_IMPL(__imp__sub_82D88B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88b60
	if (cr6.lt) goto loc_82D88B60;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88B60:
	// b 0x82e3bb08
	sub_82E3BB08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88B64"))) PPC_WEAK_FUNC(sub_82D88B64);
PPC_FUNC_IMPL(__imp__sub_82D88B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88B68"))) PPC_WEAK_FUNC(sub_82D88B68);
PPC_FUNC_IMPL(__imp__sub_82D88B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88b78
	if (cr6.lt) goto loc_82D88B78;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88B78:
	// b 0x82e3cc30
	sub_82E3CC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88B7C"))) PPC_WEAK_FUNC(sub_82D88B7C);
PPC_FUNC_IMPL(__imp__sub_82D88B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88B80"))) PPC_WEAK_FUNC(sub_82D88B80);
PPC_FUNC_IMPL(__imp__sub_82D88B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88b90
	if (cr6.lt) goto loc_82D88B90;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88B90:
	// b 0x82e3cf28
	sub_82E3CF28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88B94"))) PPC_WEAK_FUNC(sub_82D88B94);
PPC_FUNC_IMPL(__imp__sub_82D88B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88B98"))) PPC_WEAK_FUNC(sub_82D88B98);
PPC_FUNC_IMPL(__imp__sub_82D88B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88ba8
	if (cr6.lt) goto loc_82D88BA8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88BA8:
	// b 0x82e3d268
	sub_82E3D268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88BAC"))) PPC_WEAK_FUNC(sub_82D88BAC);
PPC_FUNC_IMPL(__imp__sub_82D88BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88BB0"))) PPC_WEAK_FUNC(sub_82D88BB0);
PPC_FUNC_IMPL(__imp__sub_82D88BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88bc0
	if (cr6.lt) goto loc_82D88BC0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88BC0:
	// b 0x82e3dfc8
	sub_82E3DFC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88BC4"))) PPC_WEAK_FUNC(sub_82D88BC4);
PPC_FUNC_IMPL(__imp__sub_82D88BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88BC8"))) PPC_WEAK_FUNC(sub_82D88BC8);
PPC_FUNC_IMPL(__imp__sub_82D88BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88bd8
	if (cr6.lt) goto loc_82D88BD8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88BD8:
	// b 0x82e3e228
	sub_82E3E228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88BDC"))) PPC_WEAK_FUNC(sub_82D88BDC);
PPC_FUNC_IMPL(__imp__sub_82D88BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88BE0"))) PPC_WEAK_FUNC(sub_82D88BE0);
PPC_FUNC_IMPL(__imp__sub_82D88BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88bf0
	if (cr6.lt) goto loc_82D88BF0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88BF0:
	// b 0x82e3e650
	sub_82E3E650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88BF4"))) PPC_WEAK_FUNC(sub_82D88BF4);
PPC_FUNC_IMPL(__imp__sub_82D88BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88BF8"))) PPC_WEAK_FUNC(sub_82D88BF8);
PPC_FUNC_IMPL(__imp__sub_82D88BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88c08
	if (cr6.lt) goto loc_82D88C08;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88C08:
	// b 0x82e3ec40
	sub_82E3EC40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88C0C"))) PPC_WEAK_FUNC(sub_82D88C0C);
PPC_FUNC_IMPL(__imp__sub_82D88C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88C10"))) PPC_WEAK_FUNC(sub_82D88C10);
PPC_FUNC_IMPL(__imp__sub_82D88C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88c20
	if (cr6.lt) goto loc_82D88C20;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88C20:
	// b 0x82e3faf8
	sub_82E3FAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88C24"))) PPC_WEAK_FUNC(sub_82D88C24);
PPC_FUNC_IMPL(__imp__sub_82D88C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88C28"))) PPC_WEAK_FUNC(sub_82D88C28);
PPC_FUNC_IMPL(__imp__sub_82D88C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88c38
	if (cr6.lt) goto loc_82D88C38;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88C38:
	// b 0x82e40480
	sub_82E40480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88C3C"))) PPC_WEAK_FUNC(sub_82D88C3C);
PPC_FUNC_IMPL(__imp__sub_82D88C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88C40"))) PPC_WEAK_FUNC(sub_82D88C40);
PPC_FUNC_IMPL(__imp__sub_82D88C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88c50
	if (cr6.lt) goto loc_82D88C50;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88C50:
	// b 0x82e40bb0
	sub_82E40BB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88C54"))) PPC_WEAK_FUNC(sub_82D88C54);
PPC_FUNC_IMPL(__imp__sub_82D88C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88C58"))) PPC_WEAK_FUNC(sub_82D88C58);
PPC_FUNC_IMPL(__imp__sub_82D88C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88c68
	if (cr6.lt) goto loc_82D88C68;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88C68:
	// b 0x82e40ca8
	sub_82E40CA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88C6C"))) PPC_WEAK_FUNC(sub_82D88C6C);
PPC_FUNC_IMPL(__imp__sub_82D88C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88C70"))) PPC_WEAK_FUNC(sub_82D88C70);
PPC_FUNC_IMPL(__imp__sub_82D88C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88c80
	if (cr6.lt) goto loc_82D88C80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88C80:
	// b 0x82e41190
	sub_82E41190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88C84"))) PPC_WEAK_FUNC(sub_82D88C84);
PPC_FUNC_IMPL(__imp__sub_82D88C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88C88"))) PPC_WEAK_FUNC(sub_82D88C88);
PPC_FUNC_IMPL(__imp__sub_82D88C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88c98
	if (cr6.lt) goto loc_82D88C98;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88C98:
	// b 0x82e41200
	sub_82E41200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88C9C"))) PPC_WEAK_FUNC(sub_82D88C9C);
PPC_FUNC_IMPL(__imp__sub_82D88C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88CA0"))) PPC_WEAK_FUNC(sub_82D88CA0);
PPC_FUNC_IMPL(__imp__sub_82D88CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88cb0
	if (cr6.lt) goto loc_82D88CB0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88CB0:
	// b 0x82e424e0
	sub_82E424E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88CB4"))) PPC_WEAK_FUNC(sub_82D88CB4);
PPC_FUNC_IMPL(__imp__sub_82D88CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88CB8"))) PPC_WEAK_FUNC(sub_82D88CB8);
PPC_FUNC_IMPL(__imp__sub_82D88CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88cc8
	if (cr6.lt) goto loc_82D88CC8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88CC8:
	// b 0x82e42e98
	sub_82E42E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88CCC"))) PPC_WEAK_FUNC(sub_82D88CCC);
PPC_FUNC_IMPL(__imp__sub_82D88CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88CD0"))) PPC_WEAK_FUNC(sub_82D88CD0);
PPC_FUNC_IMPL(__imp__sub_82D88CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88ce0
	if (cr6.lt) goto loc_82D88CE0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88CE0:
	// b 0x82e43078
	sub_82E43078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88CE4"))) PPC_WEAK_FUNC(sub_82D88CE4);
PPC_FUNC_IMPL(__imp__sub_82D88CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88CE8"))) PPC_WEAK_FUNC(sub_82D88CE8);
PPC_FUNC_IMPL(__imp__sub_82D88CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88cf8
	if (cr6.lt) goto loc_82D88CF8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88CF8:
	// b 0x82e437b0
	sub_82E437B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88CFC"))) PPC_WEAK_FUNC(sub_82D88CFC);
PPC_FUNC_IMPL(__imp__sub_82D88CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88D00"))) PPC_WEAK_FUNC(sub_82D88D00);
PPC_FUNC_IMPL(__imp__sub_82D88D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88d10
	if (cr6.lt) goto loc_82D88D10;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88D10:
	// b 0x82e43be0
	sub_82E43BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88D14"))) PPC_WEAK_FUNC(sub_82D88D14);
PPC_FUNC_IMPL(__imp__sub_82D88D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88D18"))) PPC_WEAK_FUNC(sub_82D88D18);
PPC_FUNC_IMPL(__imp__sub_82D88D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88d28
	if (cr6.lt) goto loc_82D88D28;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88D28:
	// b 0x82e44408
	sub_82E44408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88D2C"))) PPC_WEAK_FUNC(sub_82D88D2C);
PPC_FUNC_IMPL(__imp__sub_82D88D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88D30"))) PPC_WEAK_FUNC(sub_82D88D30);
PPC_FUNC_IMPL(__imp__sub_82D88D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88d40
	if (cr6.lt) goto loc_82D88D40;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88D40:
	// b 0x82e44950
	sub_82E44950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88D44"))) PPC_WEAK_FUNC(sub_82D88D44);
PPC_FUNC_IMPL(__imp__sub_82D88D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88D48"))) PPC_WEAK_FUNC(sub_82D88D48);
PPC_FUNC_IMPL(__imp__sub_82D88D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88d58
	if (cr6.lt) goto loc_82D88D58;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88D58:
	// b 0x82e454e0
	sub_82E454E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88D5C"))) PPC_WEAK_FUNC(sub_82D88D5C);
PPC_FUNC_IMPL(__imp__sub_82D88D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88D60"))) PPC_WEAK_FUNC(sub_82D88D60);
PPC_FUNC_IMPL(__imp__sub_82D88D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88d70
	if (cr6.lt) goto loc_82D88D70;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88D70:
	// b 0x82e45de8
	sub_82E45DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88D74"))) PPC_WEAK_FUNC(sub_82D88D74);
PPC_FUNC_IMPL(__imp__sub_82D88D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88D78"))) PPC_WEAK_FUNC(sub_82D88D78);
PPC_FUNC_IMPL(__imp__sub_82D88D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88d88
	if (cr6.lt) goto loc_82D88D88;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88D88:
	// b 0x82e46300
	sub_82E46300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88D8C"))) PPC_WEAK_FUNC(sub_82D88D8C);
PPC_FUNC_IMPL(__imp__sub_82D88D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88D90"))) PPC_WEAK_FUNC(sub_82D88D90);
PPC_FUNC_IMPL(__imp__sub_82D88D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88da0
	if (cr6.lt) goto loc_82D88DA0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88DA0:
	// b 0x82e46818
	sub_82E46818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88DA4"))) PPC_WEAK_FUNC(sub_82D88DA4);
PPC_FUNC_IMPL(__imp__sub_82D88DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88DA8"))) PPC_WEAK_FUNC(sub_82D88DA8);
PPC_FUNC_IMPL(__imp__sub_82D88DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88db8
	if (cr6.lt) goto loc_82D88DB8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88DB8:
	// b 0x82e46be8
	sub_82E46BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88DBC"))) PPC_WEAK_FUNC(sub_82D88DBC);
PPC_FUNC_IMPL(__imp__sub_82D88DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88DC0"))) PPC_WEAK_FUNC(sub_82D88DC0);
PPC_FUNC_IMPL(__imp__sub_82D88DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88dd0
	if (cr6.lt) goto loc_82D88DD0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88DD0:
	// b 0x82e46ed8
	sub_82E46ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88DD4"))) PPC_WEAK_FUNC(sub_82D88DD4);
PPC_FUNC_IMPL(__imp__sub_82D88DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88DD8"))) PPC_WEAK_FUNC(sub_82D88DD8);
PPC_FUNC_IMPL(__imp__sub_82D88DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88de8
	if (cr6.lt) goto loc_82D88DE8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88DE8:
	// b 0x82e470a8
	sub_82E470A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88DEC"))) PPC_WEAK_FUNC(sub_82D88DEC);
PPC_FUNC_IMPL(__imp__sub_82D88DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88DF0"))) PPC_WEAK_FUNC(sub_82D88DF0);
PPC_FUNC_IMPL(__imp__sub_82D88DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88e00
	if (cr6.lt) goto loc_82D88E00;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88E00:
	// b 0x82e47288
	sub_82E47288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88E04"))) PPC_WEAK_FUNC(sub_82D88E04);
PPC_FUNC_IMPL(__imp__sub_82D88E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88E08"))) PPC_WEAK_FUNC(sub_82D88E08);
PPC_FUNC_IMPL(__imp__sub_82D88E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88e18
	if (cr6.lt) goto loc_82D88E18;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88E18:
	// b 0x82e3cc98
	sub_82E3CC98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88E1C"))) PPC_WEAK_FUNC(sub_82D88E1C);
PPC_FUNC_IMPL(__imp__sub_82D88E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88E20"))) PPC_WEAK_FUNC(sub_82D88E20);
PPC_FUNC_IMPL(__imp__sub_82D88E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88e30
	if (cr6.lt) goto loc_82D88E30;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88E30:
	// b 0x82e3cfb8
	sub_82E3CFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88E34"))) PPC_WEAK_FUNC(sub_82D88E34);
PPC_FUNC_IMPL(__imp__sub_82D88E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88E38"))) PPC_WEAK_FUNC(sub_82D88E38);
PPC_FUNC_IMPL(__imp__sub_82D88E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88e48
	if (cr6.lt) goto loc_82D88E48;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88E48:
	// b 0x82e3e030
	sub_82E3E030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88E4C"))) PPC_WEAK_FUNC(sub_82D88E4C);
PPC_FUNC_IMPL(__imp__sub_82D88E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88E50"))) PPC_WEAK_FUNC(sub_82D88E50);
PPC_FUNC_IMPL(__imp__sub_82D88E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88e60
	if (cr6.lt) goto loc_82D88E60;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88E60:
	// b 0x82e3e320
	sub_82E3E320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88E64"))) PPC_WEAK_FUNC(sub_82D88E64);
PPC_FUNC_IMPL(__imp__sub_82D88E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88E68"))) PPC_WEAK_FUNC(sub_82D88E68);
PPC_FUNC_IMPL(__imp__sub_82D88E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88e78
	if (cr6.lt) goto loc_82D88E78;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88E78:
	// b 0x82e3e6c8
	sub_82E3E6C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88E7C"))) PPC_WEAK_FUNC(sub_82D88E7C);
PPC_FUNC_IMPL(__imp__sub_82D88E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88E80"))) PPC_WEAK_FUNC(sub_82D88E80);
PPC_FUNC_IMPL(__imp__sub_82D88E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88e90
	if (cr6.lt) goto loc_82D88E90;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88E90:
	// b 0x82e3eca8
	sub_82E3ECA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88E94"))) PPC_WEAK_FUNC(sub_82D88E94);
PPC_FUNC_IMPL(__imp__sub_82D88E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88E98"))) PPC_WEAK_FUNC(sub_82D88E98);
PPC_FUNC_IMPL(__imp__sub_82D88E98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88ea8
	if (cr6.lt) goto loc_82D88EA8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88EA8:
	// b 0x82e3fb60
	sub_82E3FB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88EAC"))) PPC_WEAK_FUNC(sub_82D88EAC);
PPC_FUNC_IMPL(__imp__sub_82D88EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88EB0"))) PPC_WEAK_FUNC(sub_82D88EB0);
PPC_FUNC_IMPL(__imp__sub_82D88EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88ec0
	if (cr6.lt) goto loc_82D88EC0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88EC0:
	// b 0x82e26be8
	sub_82E26BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88EC4"))) PPC_WEAK_FUNC(sub_82D88EC4);
PPC_FUNC_IMPL(__imp__sub_82D88EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88EC8"))) PPC_WEAK_FUNC(sub_82D88EC8);
PPC_FUNC_IMPL(__imp__sub_82D88EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88ed8
	if (cr6.lt) goto loc_82D88ED8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88ED8:
	// b 0x82e478b0
	sub_82E478B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88EDC"))) PPC_WEAK_FUNC(sub_82D88EDC);
PPC_FUNC_IMPL(__imp__sub_82D88EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88EE0"))) PPC_WEAK_FUNC(sub_82D88EE0);
PPC_FUNC_IMPL(__imp__sub_82D88EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88ef0
	if (cr6.lt) goto loc_82D88EF0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88EF0:
	// b 0x82e25990
	sub_82E25990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88EF4"))) PPC_WEAK_FUNC(sub_82D88EF4);
PPC_FUNC_IMPL(__imp__sub_82D88EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88EF8"))) PPC_WEAK_FUNC(sub_82D88EF8);
PPC_FUNC_IMPL(__imp__sub_82D88EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88f08
	if (cr6.lt) goto loc_82D88F08;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88F08:
	// b 0x82e481f8
	sub_82E481F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88F0C"))) PPC_WEAK_FUNC(sub_82D88F0C);
PPC_FUNC_IMPL(__imp__sub_82D88F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88F10"))) PPC_WEAK_FUNC(sub_82D88F10);
PPC_FUNC_IMPL(__imp__sub_82D88F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88f20
	if (cr6.lt) goto loc_82D88F20;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88F20:
	// b 0x82e25518
	sub_82E25518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88F24"))) PPC_WEAK_FUNC(sub_82D88F24);
PPC_FUNC_IMPL(__imp__sub_82D88F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88F28"))) PPC_WEAK_FUNC(sub_82D88F28);
PPC_FUNC_IMPL(__imp__sub_82D88F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88f38
	if (cr6.lt) goto loc_82D88F38;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88F38:
	// b 0x82e48838
	sub_82E48838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88F3C"))) PPC_WEAK_FUNC(sub_82D88F3C);
PPC_FUNC_IMPL(__imp__sub_82D88F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88F40"))) PPC_WEAK_FUNC(sub_82D88F40);
PPC_FUNC_IMPL(__imp__sub_82D88F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88f50
	if (cr6.lt) goto loc_82D88F50;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88F50:
	// b 0x82e48be0
	sub_82E48BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88F54"))) PPC_WEAK_FUNC(sub_82D88F54);
PPC_FUNC_IMPL(__imp__sub_82D88F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88F58"))) PPC_WEAK_FUNC(sub_82D88F58);
PPC_FUNC_IMPL(__imp__sub_82D88F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88f68
	if (cr6.lt) goto loc_82D88F68;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88F68:
	// b 0x82e48f38
	sub_82E48F38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88F6C"))) PPC_WEAK_FUNC(sub_82D88F6C);
PPC_FUNC_IMPL(__imp__sub_82D88F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88F70"))) PPC_WEAK_FUNC(sub_82D88F70);
PPC_FUNC_IMPL(__imp__sub_82D88F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88f80
	if (cr6.lt) goto loc_82D88F80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88F80:
	// b 0x82e49120
	sub_82E49120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88F84"))) PPC_WEAK_FUNC(sub_82D88F84);
PPC_FUNC_IMPL(__imp__sub_82D88F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88F88"))) PPC_WEAK_FUNC(sub_82D88F88);
PPC_FUNC_IMPL(__imp__sub_82D88F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88f98
	if (cr6.lt) goto loc_82D88F98;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88F98:
	// b 0x82e493e0
	sub_82E493E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88F9C"))) PPC_WEAK_FUNC(sub_82D88F9C);
PPC_FUNC_IMPL(__imp__sub_82D88F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88FA0"))) PPC_WEAK_FUNC(sub_82D88FA0);
PPC_FUNC_IMPL(__imp__sub_82D88FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88fb0
	if (cr6.lt) goto loc_82D88FB0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88FB0:
	// b 0x82e49738
	sub_82E49738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88FB4"))) PPC_WEAK_FUNC(sub_82D88FB4);
PPC_FUNC_IMPL(__imp__sub_82D88FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88FB8"))) PPC_WEAK_FUNC(sub_82D88FB8);
PPC_FUNC_IMPL(__imp__sub_82D88FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88fc8
	if (cr6.lt) goto loc_82D88FC8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88FC8:
	// b 0x82e49a28
	sub_82E49A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88FCC"))) PPC_WEAK_FUNC(sub_82D88FCC);
PPC_FUNC_IMPL(__imp__sub_82D88FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88FD0"))) PPC_WEAK_FUNC(sub_82D88FD0);
PPC_FUNC_IMPL(__imp__sub_82D88FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88fe0
	if (cr6.lt) goto loc_82D88FE0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88FE0:
	// b 0x82e49b60
	sub_82E49B60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88FE4"))) PPC_WEAK_FUNC(sub_82D88FE4);
PPC_FUNC_IMPL(__imp__sub_82D88FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D88FE8"))) PPC_WEAK_FUNC(sub_82D88FE8);
PPC_FUNC_IMPL(__imp__sub_82D88FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d88ff8
	if (cr6.lt) goto loc_82D88FF8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D88FF8:
	// b 0x82e4a318
	sub_82E4A318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D88FFC"))) PPC_WEAK_FUNC(sub_82D88FFC);
PPC_FUNC_IMPL(__imp__sub_82D88FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89000"))) PPC_WEAK_FUNC(sub_82D89000);
PPC_FUNC_IMPL(__imp__sub_82D89000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89010
	if (cr6.lt) goto loc_82D89010;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89010:
	// b 0x82e4a4e0
	sub_82E4A4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89014"))) PPC_WEAK_FUNC(sub_82D89014);
PPC_FUNC_IMPL(__imp__sub_82D89014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89018"))) PPC_WEAK_FUNC(sub_82D89018);
PPC_FUNC_IMPL(__imp__sub_82D89018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89028
	if (cr6.lt) goto loc_82D89028;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89028:
	// b 0x82e4ab50
	sub_82E4AB50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8902C"))) PPC_WEAK_FUNC(sub_82D8902C);
PPC_FUNC_IMPL(__imp__sub_82D8902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89030"))) PPC_WEAK_FUNC(sub_82D89030);
PPC_FUNC_IMPL(__imp__sub_82D89030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89040
	if (cr6.lt) goto loc_82D89040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89040:
	// b 0x82e4aeb8
	sub_82E4AEB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89044"))) PPC_WEAK_FUNC(sub_82D89044);
PPC_FUNC_IMPL(__imp__sub_82D89044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89048"))) PPC_WEAK_FUNC(sub_82D89048);
PPC_FUNC_IMPL(__imp__sub_82D89048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89058
	if (cr6.lt) goto loc_82D89058;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89058:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82e4b258
	sub_82E4B258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89060"))) PPC_WEAK_FUNC(sub_82D89060);
PPC_FUNC_IMPL(__imp__sub_82D89060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89070
	if (cr6.lt) goto loc_82D89070;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89070:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82e4b258
	sub_82E4B258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89078"))) PPC_WEAK_FUNC(sub_82D89078);
PPC_FUNC_IMPL(__imp__sub_82D89078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89088
	if (cr6.lt) goto loc_82D89088;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89088:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82e4b430
	sub_82E4B430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89090"))) PPC_WEAK_FUNC(sub_82D89090);
PPC_FUNC_IMPL(__imp__sub_82D89090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d890a0
	if (cr6.lt) goto loc_82D890A0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D890A0:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82e4b430
	sub_82E4B430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D890A8"))) PPC_WEAK_FUNC(sub_82D890A8);
PPC_FUNC_IMPL(__imp__sub_82D890A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d890b8
	if (cr6.lt) goto loc_82D890B8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D890B8:
	// b 0x82e4be60
	sub_82E4BE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D890BC"))) PPC_WEAK_FUNC(sub_82D890BC);
PPC_FUNC_IMPL(__imp__sub_82D890BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D890C0"))) PPC_WEAK_FUNC(sub_82D890C0);
PPC_FUNC_IMPL(__imp__sub_82D890C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d890d0
	if (cr6.lt) goto loc_82D890D0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D890D0:
	// b 0x82e4c028
	sub_82E4C028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D890D4"))) PPC_WEAK_FUNC(sub_82D890D4);
PPC_FUNC_IMPL(__imp__sub_82D890D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D890D8"))) PPC_WEAK_FUNC(sub_82D890D8);
PPC_FUNC_IMPL(__imp__sub_82D890D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d890e8
	if (cr6.lt) goto loc_82D890E8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D890E8:
	// b 0x82e4c858
	sub_82E4C858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D890EC"))) PPC_WEAK_FUNC(sub_82D890EC);
PPC_FUNC_IMPL(__imp__sub_82D890EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D890F0"))) PPC_WEAK_FUNC(sub_82D890F0);
PPC_FUNC_IMPL(__imp__sub_82D890F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89100
	if (cr6.lt) goto loc_82D89100;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89100:
	// b 0x82e4cba8
	sub_82E4CBA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89104"))) PPC_WEAK_FUNC(sub_82D89104);
PPC_FUNC_IMPL(__imp__sub_82D89104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89108"))) PPC_WEAK_FUNC(sub_82D89108);
PPC_FUNC_IMPL(__imp__sub_82D89108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89118
	if (cr6.lt) goto loc_82D89118;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89118:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82e4ce60
	sub_82E4CE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89120"))) PPC_WEAK_FUNC(sub_82D89120);
PPC_FUNC_IMPL(__imp__sub_82D89120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89130
	if (cr6.lt) goto loc_82D89130;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89130:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82e4ce60
	sub_82E4CE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89138"))) PPC_WEAK_FUNC(sub_82D89138);
PPC_FUNC_IMPL(__imp__sub_82D89138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89148
	if (cr6.lt) goto loc_82D89148;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89148:
	// b 0x82e4d190
	sub_82E4D190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8914C"))) PPC_WEAK_FUNC(sub_82D8914C);
PPC_FUNC_IMPL(__imp__sub_82D8914C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89150"))) PPC_WEAK_FUNC(sub_82D89150);
PPC_FUNC_IMPL(__imp__sub_82D89150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89160
	if (cr6.lt) goto loc_82D89160;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89160:
	// b 0x82e4d390
	sub_82E4D390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89164"))) PPC_WEAK_FUNC(sub_82D89164);
PPC_FUNC_IMPL(__imp__sub_82D89164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89168"))) PPC_WEAK_FUNC(sub_82D89168);
PPC_FUNC_IMPL(__imp__sub_82D89168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89178
	if (cr6.lt) goto loc_82D89178;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89178:
	// b 0x82e4d728
	sub_82E4D728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8917C"))) PPC_WEAK_FUNC(sub_82D8917C);
PPC_FUNC_IMPL(__imp__sub_82D8917C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89180"))) PPC_WEAK_FUNC(sub_82D89180);
PPC_FUNC_IMPL(__imp__sub_82D89180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89190
	if (cr6.lt) goto loc_82D89190;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89190:
	// b 0x82e4dad0
	sub_82E4DAD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89194"))) PPC_WEAK_FUNC(sub_82D89194);
PPC_FUNC_IMPL(__imp__sub_82D89194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89198"))) PPC_WEAK_FUNC(sub_82D89198);
PPC_FUNC_IMPL(__imp__sub_82D89198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d891a8
	if (cr6.lt) goto loc_82D891A8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D891A8:
	// b 0x82e4de78
	sub_82E4DE78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D891AC"))) PPC_WEAK_FUNC(sub_82D891AC);
PPC_FUNC_IMPL(__imp__sub_82D891AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D891B0"))) PPC_WEAK_FUNC(sub_82D891B0);
PPC_FUNC_IMPL(__imp__sub_82D891B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d891c0
	if (cr6.lt) goto loc_82D891C0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D891C0:
	// b 0x82e4e318
	sub_82E4E318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D891C4"))) PPC_WEAK_FUNC(sub_82D891C4);
PPC_FUNC_IMPL(__imp__sub_82D891C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D891C8"))) PPC_WEAK_FUNC(sub_82D891C8);
PPC_FUNC_IMPL(__imp__sub_82D891C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d891d8
	if (cr6.lt) goto loc_82D891D8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D891D8:
	// b 0x82e4e5e8
	sub_82E4E5E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D891DC"))) PPC_WEAK_FUNC(sub_82D891DC);
PPC_FUNC_IMPL(__imp__sub_82D891DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D891E0"))) PPC_WEAK_FUNC(sub_82D891E0);
PPC_FUNC_IMPL(__imp__sub_82D891E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d891f0
	if (cr6.lt) goto loc_82D891F0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D891F0:
	// b 0x82e487c0
	sub_82E487C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D891F4"))) PPC_WEAK_FUNC(sub_82D891F4);
PPC_FUNC_IMPL(__imp__sub_82D891F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D891F8"))) PPC_WEAK_FUNC(sub_82D891F8);
PPC_FUNC_IMPL(__imp__sub_82D891F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89208
	if (cr6.lt) goto loc_82D89208;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89208:
	// b 0x82e48180
	sub_82E48180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8920C"))) PPC_WEAK_FUNC(sub_82D8920C);
PPC_FUNC_IMPL(__imp__sub_82D8920C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89210"))) PPC_WEAK_FUNC(sub_82D89210);
PPC_FUNC_IMPL(__imp__sub_82D89210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89220
	if (cr6.lt) goto loc_82D89220;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89220:
	// b 0x82e47838
	sub_82E47838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89224"))) PPC_WEAK_FUNC(sub_82D89224);
PPC_FUNC_IMPL(__imp__sub_82D89224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89228"))) PPC_WEAK_FUNC(sub_82D89228);
PPC_FUNC_IMPL(__imp__sub_82D89228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89238
	if (cr6.lt) goto loc_82D89238;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89238:
	// b 0x82e248d8
	sub_82E248D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8923C"))) PPC_WEAK_FUNC(sub_82D8923C);
PPC_FUNC_IMPL(__imp__sub_82D8923C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89240"))) PPC_WEAK_FUNC(sub_82D89240);
PPC_FUNC_IMPL(__imp__sub_82D89240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89250
	if (cr6.lt) goto loc_82D89250;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89250:
	// b 0x82e4e8a0
	sub_82E4E8A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89254"))) PPC_WEAK_FUNC(sub_82D89254);
PPC_FUNC_IMPL(__imp__sub_82D89254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89258"))) PPC_WEAK_FUNC(sub_82D89258);
PPC_FUNC_IMPL(__imp__sub_82D89258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89268
	if (cr6.lt) goto loc_82D89268;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89268:
	// b 0x82e500b0
	sub_82E500B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8926C"))) PPC_WEAK_FUNC(sub_82D8926C);
PPC_FUNC_IMPL(__imp__sub_82D8926C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89270"))) PPC_WEAK_FUNC(sub_82D89270);
PPC_FUNC_IMPL(__imp__sub_82D89270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89280
	if (cr6.lt) goto loc_82D89280;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89280:
	// b 0x82e50f38
	sub_82E50F38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89284"))) PPC_WEAK_FUNC(sub_82D89284);
PPC_FUNC_IMPL(__imp__sub_82D89284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89288"))) PPC_WEAK_FUNC(sub_82D89288);
PPC_FUNC_IMPL(__imp__sub_82D89288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89298
	if (cr6.lt) goto loc_82D89298;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89298:
	// b 0x82e51208
	sub_82E51208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8929C"))) PPC_WEAK_FUNC(sub_82D8929C);
PPC_FUNC_IMPL(__imp__sub_82D8929C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D892A0"))) PPC_WEAK_FUNC(sub_82D892A0);
PPC_FUNC_IMPL(__imp__sub_82D892A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d892b0
	if (cr6.lt) goto loc_82D892B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D892B0:
	// b 0x82e51648
	sub_82E51648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D892B4"))) PPC_WEAK_FUNC(sub_82D892B4);
PPC_FUNC_IMPL(__imp__sub_82D892B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D892B8"))) PPC_WEAK_FUNC(sub_82D892B8);
PPC_FUNC_IMPL(__imp__sub_82D892B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d892c8
	if (cr6.lt) goto loc_82D892C8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D892C8:
	// b 0x82e51838
	sub_82E51838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D892CC"))) PPC_WEAK_FUNC(sub_82D892CC);
PPC_FUNC_IMPL(__imp__sub_82D892CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D892D0"))) PPC_WEAK_FUNC(sub_82D892D0);
PPC_FUNC_IMPL(__imp__sub_82D892D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d892e0
	if (cr6.lt) goto loc_82D892E0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D892E0:
	// b 0x82e519a0
	sub_82E519A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D892E4"))) PPC_WEAK_FUNC(sub_82D892E4);
PPC_FUNC_IMPL(__imp__sub_82D892E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D892E8"))) PPC_WEAK_FUNC(sub_82D892E8);
PPC_FUNC_IMPL(__imp__sub_82D892E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d892f8
	if (cr6.lt) goto loc_82D892F8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D892F8:
	// b 0x82e51d68
	sub_82E51D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D892FC"))) PPC_WEAK_FUNC(sub_82D892FC);
PPC_FUNC_IMPL(__imp__sub_82D892FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

