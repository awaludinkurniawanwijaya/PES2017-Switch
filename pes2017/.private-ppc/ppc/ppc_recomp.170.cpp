#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82CF88E8"))) PPC_WEAK_FUNC(sub_82CF88E8);
PPC_FUNC_IMPL(__imp__sub_82CF88E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CF88F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82d199f0
	ctx.lr = 0x82CF8904;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cf892c
	if (!cr6.eq) goto loc_82CF892C;
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bge cr6,0x82cf892c
	if (!cr6.lt) goto loc_82CF892C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 200, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CF892C:
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cf8994
	if (!cr6.eq) goto loc_82CF8994;
	// bl 0x82d86078
	ctx.lr = 0x82CF893C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf89cc
	if (cr6.eq) goto loc_82CF89CC;
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da2518
	ctx.lr = 0x82CF8950;
	sub_82DA2518(ctx, base);
	// bl 0x831f81f8
	ctx.lr = 0x82CF8954;
	sub_831F81F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d961a0
	ctx.lr = 0x82CF895C;
	sub_82D961A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cf8970
	if (!cr6.eq) goto loc_82CF8970;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// b 0x82cf897c
	goto loc_82CF897C;
loc_82CF8970:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// ble cr6,0x82cf8998
	if (!cr6.gt) goto loc_82CF8998;
loc_82CF897C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da27f0
	ctx.lr = 0x82CF8984;
	sub_82DA27F0(ctx, base);
	// bl 0x835d31b8
	ctx.lr = 0x82CF8988;
	sub_835D31B8(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne cr6,0x82cf8998
	if (!cr6.eq) goto loc_82CF8998;
loc_82CF8994:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82CF8998:
	// lwz r10,200(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82cf89cc
	if (cr6.eq) goto loc_82CF89CC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cf89b4
	if (cr6.eq) goto loc_82CF89B4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82cf89bc
	if (!cr6.gt) goto loc_82CF89BC;
loc_82CF89B4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,208(r29)
	PPC_STORE_U8(ctx.r29.u32 + 208, ctx.r10.u8);
loc_82CF89BC:
	// stw r11,200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 200, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CF89CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CF89D8"))) PPC_WEAK_FUNC(sub_82CF89D8);
PPC_FUNC_IMPL(__imp__sub_82CF89D8) {
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
	// cmpwi cr6,r4,135
	cr6.compare<int32_t>(ctx.r4.s32, 135, xer);
	// bne cr6,0x82cf8a20
	if (!cr6.eq) goto loc_82CF8A20;
	// bl 0x82d86078
	ctx.lr = 0x82CF89F0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cf8a00
	if (!cr6.eq) goto loc_82CF8A00;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cf8a10
	goto loc_82CF8A10;
loc_82CF8A00:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2518
	ctx.lr = 0x82CF8A08;
	sub_82DA2518(ctx, base);
	// bl 0x831f81f8
	ctx.lr = 0x82CF8A0C;
	sub_831F81F8(ctx, base);
	// bl 0x82d96208
	ctx.lr = 0x82CF8A10;
	sub_82D96208(ctx, base);
loc_82CF8A10:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cf8a24
	if (cr6.eq) goto loc_82CF8A24;
loc_82CF8A20:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CF8A24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CF8A34"))) PPC_WEAK_FUNC(sub_82CF8A34);
PPC_FUNC_IMPL(__imp__sub_82CF8A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CF8A38"))) PPC_WEAK_FUNC(sub_82CF8A38);
PPC_FUNC_IMPL(__imp__sub_82CF8A38) {
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
	// bl 0x82d86078
	ctx.lr = 0x82CF8A48;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cf8a64
	if (!cr6.eq) goto loc_82CF8A64;
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
loc_82CF8A64:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2518
	ctx.lr = 0x82CF8A6C;
	sub_82DA2518(ctx, base);
	// bl 0x831f81f8
	ctx.lr = 0x82CF8A70;
	sub_831F81F8(ctx, base);
	// bl 0x82d96208
	ctx.lr = 0x82CF8A74;
	sub_82D96208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CF8A84"))) PPC_WEAK_FUNC(sub_82CF8A84);
PPC_FUNC_IMPL(__imp__sub_82CF8A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CF8A88"))) PPC_WEAK_FUNC(sub_82CF8A88);
PPC_FUNC_IMPL(__imp__sub_82CF8A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CF8A90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,212
	ctx.r4.s64 = 212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CF8AB4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf8b04
	if (cr6.eq) goto loc_82CF8B04;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb9f28
	ctx.lr = 0x82CF8ACC;
	sub_82CB9F28(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-32088
	ctx.r8.s64 = ctx.r10.s64 + -32088;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stb r11,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CF8B04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CF8B10"))) PPC_WEAK_FUNC(sub_82CF8B10);
PPC_FUNC_IMPL(__imp__sub_82CF8B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CF8B18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,156
	ctx.r4.s64 = 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CF8B3C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf8b78
	if (cr6.eq) goto loc_82CF8B78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb9608
	ctx.lr = 0x82CF8B54;
	sub_82CB9608(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-31760
	ctx.r9.s64 = ctx.r11.s64 + -31760;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CF8B78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CF8B84"))) PPC_WEAK_FUNC(sub_82CF8B84);
PPC_FUNC_IMPL(__imp__sub_82CF8B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CF8B88"))) PPC_WEAK_FUNC(sub_82CF8B88);
PPC_FUNC_IMPL(__imp__sub_82CF8B88) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-32088
	ctx.r9.s64 = ctx.r11.s64 + -32088;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82cb9c08
	ctx.lr = 0x82CF8BC0;
	sub_82CB9C08(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cf8bd8
	if (cr6.eq) goto loc_82CF8BD8;
	// bl 0x82416268
	ctx.lr = 0x82CF8BD4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CF8BD8:
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

__attribute__((alias("__imp__sub_82CF8BF0"))) PPC_WEAK_FUNC(sub_82CF8BF0);
PPC_FUNC_IMPL(__imp__sub_82CF8BF0) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-31760
	ctx.r9.s64 = ctx.r11.s64 + -31760;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82cb9650
	ctx.lr = 0x82CF8C28;
	sub_82CB9650(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cf8c40
	if (cr6.eq) goto loc_82CF8C40;
	// bl 0x82416268
	ctx.lr = 0x82CF8C3C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CF8C40:
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

__attribute__((alias("__imp__sub_82CF8C58"))) PPC_WEAK_FUNC(sub_82CF8C58);
PPC_FUNC_IMPL(__imp__sub_82CF8C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CF8C60;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CF8C6C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf8db8
	if (cr6.eq) goto loc_82CF8DB8;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da27f0
	ctx.lr = 0x82CF8C7C;
	sub_82DA27F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83322010
	ctx.lr = 0x82CF8C84;
	sub_83322010(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82cf8db8
	if (!cr6.eq) goto loc_82CF8DB8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dad040
	ctx.lr = 0x82CF8C98;
	sub_82DAD040(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82cf8db8
	if (!cr6.eq) goto loc_82CF8DB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dad038
	ctx.lr = 0x82CF8CAC;
	sub_82DAD038(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// bl 0x82dad268
	ctx.lr = 0x82CF8CD8;
	sub_82DAD268(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cf8cec
	if (!cr6.lt) goto loc_82CF8CEC;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_82CF8CEC:
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// ori r4,r4,111
	ctx.r4.u64 = ctx.r4.u64 | 111;
	// bl 0x82d042a8
	ctx.lr = 0x82CF8CFC;
	sub_82D042A8(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bge cr6,0x82cf8d1c
	if (!cr6.lt) goto loc_82CF8D1C;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_82CF8D1C:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r4,279
	ctx.r4.s64 = 18284544;
	// addi r6,r11,32530
	ctx.r6.s64 = ctx.r11.s64 + 32530;
	// ori r4,r4,722
	ctx.r4.u64 = ctx.r4.u64 | 722;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x82CF8D34;
	sub_82D042A8(ctx, base);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// ori r4,r4,110
	ctx.r4.u64 = ctx.r4.u64 | 110;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82CF8D54;
	sub_82D042A8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cf8d68
	if (!cr6.lt) goto loc_82CF8D68;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
loc_82CF8D68:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cf8d7c
	if (!cr6.lt) goto loc_82CF8D7C;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82CF8D7C:
	// lis r4,279
	ctx.r4.s64 = 18284544;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,722
	ctx.r4.u64 = ctx.r4.u64 | 722;
	// bl 0x82d042a8
	ctx.lr = 0x82CF8D8C;
	sub_82D042A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CF8D94;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CF8D9C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82CF8DA4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82CF8DAC;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CF8DB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CF8DC4"))) PPC_WEAK_FUNC(sub_82CF8DC4);
PPC_FUNC_IMPL(__imp__sub_82CF8DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CF8DC8"))) PPC_WEAK_FUNC(sub_82CF8DC8);
PPC_FUNC_IMPL(__imp__sub_82CF8DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CF8DD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82d95f98
	ctx.lr = 0x82CF8DF0;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cf8e0c
	if (!cr6.eq) goto loc_82CF8E0C;
	// lis r4,506
	ctx.r4.s64 = 33161216;
	// ori r4,r4,132
	ctx.r4.u64 = ctx.r4.u64 | 132;
	// b 0x82cf8e14
	goto loc_82CF8E14;
loc_82CF8E0C:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,48
	ctx.r4.u64 = ctx.r4.u64 | 48;
loc_82CF8E14:
	// bl 0x82d04220
	ctx.lr = 0x82CF8E18;
	sub_82D04220(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,198
	ctx.r4.u64 = ctx.r4.u64 | 198;
	// bl 0x82d04220
	ctx.lr = 0x82CF8E34;
	sub_82D04220(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cf8e48
	if (!cr6.lt) goto loc_82CF8E48;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82CF8E48:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cf8e5c
	if (!cr6.lt) goto loc_82CF8E5C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82CF8E5C:
	// lis r4,279
	ctx.r4.s64 = 18284544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,722
	ctx.r4.u64 = ctx.r4.u64 | 722;
	// bl 0x82d042a8
	ctx.lr = 0x82CF8E6C;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cf8e8c
	if (cr6.lt) goto loc_82CF8E8C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CF8E8C;
	sub_825952B8(ctx, base);
loc_82CF8E8C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82cf8eb4
	if (cr6.lt) goto loc_82CF8EB4;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CF8EB4;
	sub_825952B8(ctx, base);
loc_82CF8EB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CF8EC0"))) PPC_WEAK_FUNC(sub_82CF8EC0);
PPC_FUNC_IMPL(__imp__sub_82CF8EC0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CF8EE0;
	sub_82CBA100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf8f48
	if (cr6.eq) goto loc_82CF8F48;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r4,562
	ctx.r4.s64 = 36831232;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// ori r4,r4,30
	ctx.r4.u64 = ctx.r4.u64 | 30;
	// bl 0x82d042a8
	ctx.lr = 0x82CF8F14;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CF8F28;
	sub_82D291E0(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cf8f48
	if (cr6.lt) goto loc_82CF8F48;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CF8F48;
	sub_825952B8(ctx, base);
loc_82CF8F48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82CF8F60"))) PPC_WEAK_FUNC(sub_82CF8F60);
PPC_FUNC_IMPL(__imp__sub_82CF8F60) {
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
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CF8F80;
	sub_82CBA100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf8fec
	if (cr6.eq) goto loc_82CF8FEC;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cf8fd4
	if (!cr6.eq) goto loc_82CF8FD4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb95a0
	ctx.lr = 0x82CF8FA4;
	sub_82CB95A0(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32531
	ctx.r4.s64 = ctx.r11.s64 + 32531;
	// bl 0x837b0c10
	ctx.lr = 0x82CF8FB4;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CF8FC8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CF8FD0;
	sub_8387E8E0(ctx, base);
	// b 0x82cf8fec
	goto loc_82CF8FEC;
loc_82CF8FD4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82cb95a0
	ctx.lr = 0x82CF8FDC;
	sub_82CB95A0(ctx, base);
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,160
	ctx.r4.u64 = ctx.r4.u64 | 160;
	// bl 0x82d29598
	ctx.lr = 0x82CF8FEC;
	sub_82D29598(ctx, base);
loc_82CF8FEC:
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

__attribute__((alias("__imp__sub_82CF9004"))) PPC_WEAK_FUNC(sub_82CF9004);
PPC_FUNC_IMPL(__imp__sub_82CF9004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CF9008"))) PPC_WEAK_FUNC(sub_82CF9008);
PPC_FUNC_IMPL(__imp__sub_82CF9008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CF9010;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31759
	ctx.r28.s64 = -2081357824;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// addi r29,r11,-32504
	ctx.r29.s64 = ctx.r11.s64 + -32504;
	// addi r30,r10,24936
	ctx.r30.s64 = ctx.r10.s64 + 24936;
	// lwz r11,25684(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25684);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cf928c
	if (!cr6.eq) goto loc_82CF928C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// stw r11,25684(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25684, ctx.r11.u32);
	// li r11,200
	ctx.r11.s64 = 200;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9068;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-470
	ctx.r4.s64 = ctx.r29.s64 + -470;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9074;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,269
	ctx.r10.u64 = ctx.r10.u64 | 269;
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// stw r9,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r9.u32);
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CF909C;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// bl 0x837b0c10
	ctx.lr = 0x82CF90A8;
	sub_837B0C10(ctx, base);
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,94
	ctx.r10.u64 = ctx.r10.u64 | 94;
	// li r9,134
	ctx.r9.s64 = 134;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// stw r10,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r10.u32);
	// addi r4,r29,-44
	ctx.r4.s64 = ctx.r29.s64 + -44;
	// stw r9,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r9.u32);
	// addi r3,r30,148
	ctx.r3.s64 = ctx.r30.s64 + 148;
	// bl 0x837b0c10
	ctx.lr = 0x82CF90D0;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// addi r3,r30,176
	ctx.r3.s64 = ctx.r30.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82CF90DC;
	sub_837B0C10(ctx, base);
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,90
	ctx.r10.u64 = ctx.r10.u64 | 90;
	// li r9,135
	ctx.r9.s64 = 135;
	// stw r11,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r11.u32);
	// stw r10,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r10.u32);
	// addi r4,r29,-60
	ctx.r4.s64 = ctx.r29.s64 + -60;
	// stw r9,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r9.u32);
	// addi r3,r30,216
	ctx.r3.s64 = ctx.r30.s64 + 216;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9104;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-68
	ctx.r4.s64 = ctx.r29.s64 + -68;
	// addi r3,r30,244
	ctx.r3.s64 = ctx.r30.s64 + 244;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9110;
	sub_837B0C10(ctx, base);
	// lis r10,505
	ctx.r10.s64 = 33095680;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,74
	ctx.r10.u64 = ctx.r10.u64 | 74;
	// li r9,136
	ctx.r9.s64 = 136;
	// stw r11,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r11.u32);
	// stw r10,276(r30)
	PPC_STORE_U32(ctx.r30.u32 + 276, ctx.r10.u32);
	// addi r4,r29,-84
	ctx.r4.s64 = ctx.r29.s64 + -84;
	// stw r9,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r9.u32);
	// addi r3,r30,284
	ctx.r3.s64 = ctx.r30.s64 + 284;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9138;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-100
	ctx.r4.s64 = ctx.r29.s64 + -100;
	// addi r3,r30,312
	ctx.r3.s64 = ctx.r30.s64 + 312;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9144;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,9
	ctx.r10.u64 = ctx.r10.u64 | 9;
	// li r9,138
	ctx.r9.s64 = 138;
	// stw r11,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r11.u32);
	// stw r10,344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 344, ctx.r10.u32);
	// addi r4,r29,-116
	ctx.r4.s64 = ctx.r29.s64 + -116;
	// stw r9,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r9.u32);
	// addi r3,r30,352
	ctx.r3.s64 = ctx.r30.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82CF916C;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-132
	ctx.r4.s64 = ctx.r29.s64 + -132;
	// addi r3,r30,380
	ctx.r3.s64 = ctx.r30.s64 + 380;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9178;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,700
	ctx.r10.s64 = 45875200;
	// stw r11,408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 408, ctx.r11.u32);
	// li r9,139
	ctx.r9.s64 = 139;
	// ori r10,r10,482
	ctx.r10.u64 = ctx.r10.u64 | 482;
	// stw r9,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r9.u32);
	// addi r4,r29,-144
	ctx.r4.s64 = ctx.r29.s64 + -144;
	// stw r10,412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 412, ctx.r10.u32);
	// addi r3,r30,420
	ctx.r3.s64 = ctx.r30.s64 + 420;
	// bl 0x837b0c10
	ctx.lr = 0x82CF91A0;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-160
	ctx.r4.s64 = ctx.r29.s64 + -160;
	// addi r3,r30,448
	ctx.r3.s64 = ctx.r30.s64 + 448;
	// bl 0x837b0c10
	ctx.lr = 0x82CF91AC;
	sub_837B0C10(ctx, base);
	// lis r10,700
	ctx.r10.s64 = 45875200;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,483
	ctx.r10.u64 = ctx.r10.u64 | 483;
	// li r9,140
	ctx.r9.s64 = 140;
	// stw r11,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r11.u32);
	// stw r10,480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 480, ctx.r10.u32);
	// addi r4,r29,-176
	ctx.r4.s64 = ctx.r29.s64 + -176;
	// stw r9,484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 484, ctx.r9.u32);
	// addi r3,r30,488
	ctx.r3.s64 = ctx.r30.s64 + 488;
	// bl 0x837b0c10
	ctx.lr = 0x82CF91D4;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-192
	ctx.r4.s64 = ctx.r29.s64 + -192;
	// addi r3,r30,516
	ctx.r3.s64 = ctx.r30.s64 + 516;
	// bl 0x837b0c10
	ctx.lr = 0x82CF91E0;
	sub_837B0C10(ctx, base);
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,152
	ctx.r10.u64 = ctx.r10.u64 | 152;
	// li r9,141
	ctx.r9.s64 = 141;
	// stw r11,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r11.u32);
	// stw r10,548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 548, ctx.r10.u32);
	// addi r4,r29,-208
	ctx.r4.s64 = ctx.r29.s64 + -208;
	// stw r9,552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 552, ctx.r9.u32);
	// addi r3,r30,556
	ctx.r3.s64 = ctx.r30.s64 + 556;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9208;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-224
	ctx.r4.s64 = ctx.r29.s64 + -224;
	// addi r3,r30,584
	ctx.r3.s64 = ctx.r30.s64 + 584;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9214;
	sub_837B0C10(ctx, base);
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,85
	ctx.r10.u64 = ctx.r10.u64 | 85;
	// li r9,143
	ctx.r9.s64 = 143;
	// stw r11,612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 612, ctx.r11.u32);
	// stw r10,616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 616, ctx.r10.u32);
	// addi r4,r29,-236
	ctx.r4.s64 = ctx.r29.s64 + -236;
	// stw r9,620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 620, ctx.r9.u32);
	// addi r3,r30,624
	ctx.r3.s64 = ctx.r30.s64 + 624;
	// bl 0x837b0c10
	ctx.lr = 0x82CF923C;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-252
	ctx.r4.s64 = ctx.r29.s64 + -252;
	// addi r3,r30,652
	ctx.r3.s64 = ctx.r30.s64 + 652;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9248;
	sub_837B0C10(ctx, base);
	// lis r10,700
	ctx.r10.s64 = 45875200;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,501
	ctx.r10.u64 = ctx.r10.u64 | 501;
	// li r9,144
	ctx.r9.s64 = 144;
	// stw r11,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r11.u32);
	// stw r10,684(r30)
	PPC_STORE_U32(ctx.r30.u32 + 684, ctx.r10.u32);
	// addi r4,r29,-264
	ctx.r4.s64 = ctx.r29.s64 + -264;
	// stw r9,688(r30)
	PPC_STORE_U32(ctx.r30.u32 + 688, ctx.r9.u32);
	// addi r3,r30,692
	ctx.r3.s64 = ctx.r30.s64 + 692;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9270;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-280
	ctx.r4.s64 = ctx.r29.s64 + -280;
	// addi r3,r30,720
	ctx.r3.s64 = ctx.r30.s64 + 720;
	// bl 0x837b0c10
	ctx.lr = 0x82CF927C;
	sub_837B0C10(ctx, base);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4216
	ctx.r3.s64 = ctx.r11.s64 + 4216;
	// bl 0x831cdcc8
	ctx.lr = 0x82CF9288;
	sub_831CDCC8(ctx, base);
	// lwz r11,25684(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25684);
loc_82CF928C:
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r31,r10,24048
	ctx.r31.s64 = ctx.r10.s64 + 24048;
	// bne cr6,0x82cf9554
	if (!cr6.eq) goto loc_82CF9554;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,25684(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25684, ctx.r11.u32);
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r4,r29,324
	ctx.r4.s64 = ctx.r29.s64 + 324;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82CF92CC;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-469
	ctx.r4.s64 = ctx.r29.s64 + -469;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x837b0c10
	ctx.lr = 0x82CF92D8;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,269
	ctx.r10.u64 = ctx.r10.u64 | 269;
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r4,r29,312
	ctx.r4.s64 = ctx.r29.s64 + 312;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9300;
	sub_837B0C10(ctx, base);
	// addi r4,r29,304
	ctx.r4.s64 = ctx.r29.s64 + 304;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x837b0c10
	ctx.lr = 0x82CF930C;
	sub_837B0C10(ctx, base);
	// lis r10,300
	ctx.r10.s64 = 19660800;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,597
	ctx.r10.u64 = ctx.r10.u64 | 597;
	// li r9,133
	ctx.r9.s64 = 133;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// addi r4,r29,292
	ctx.r4.s64 = ctx.r29.s64 + 292;
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9334;
	sub_837B0C10(ctx, base);
	// addi r4,r29,284
	ctx.r4.s64 = ctx.r29.s64 + 284;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9340;
	sub_837B0C10(ctx, base);
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,94
	ctx.r10.u64 = ctx.r10.u64 | 94;
	// li r9,134
	ctx.r9.s64 = 134;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// addi r4,r29,268
	ctx.r4.s64 = ctx.r29.s64 + 268;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9368;
	sub_837B0C10(ctx, base);
	// addi r4,r29,260
	ctx.r4.s64 = ctx.r29.s64 + 260;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9374;
	sub_837B0C10(ctx, base);
	// lis r10,560
	ctx.r10.s64 = 36700160;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,315
	ctx.r10.u64 = ctx.r10.u64 | 315;
	// li r9,135
	ctx.r9.s64 = 135;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// addi r4,r29,252
	ctx.r4.s64 = ctx.r29.s64 + 252;
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x837b0c10
	ctx.lr = 0x82CF939C;
	sub_837B0C10(ctx, base);
	// addi r4,r29,244
	ctx.r4.s64 = ctx.r29.s64 + 244;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// bl 0x837b0c10
	ctx.lr = 0x82CF93A8;
	sub_837B0C10(ctx, base);
	// lis r10,505
	ctx.r10.s64 = 33095680;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,74
	ctx.r10.u64 = ctx.r10.u64 | 74;
	// li r9,136
	ctx.r9.s64 = 136;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// addi r4,r29,228
	ctx.r4.s64 = ctx.r29.s64 + 228;
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82CF93D0;
	sub_837B0C10(ctx, base);
	// addi r4,r29,212
	ctx.r4.s64 = ctx.r29.s64 + 212;
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// bl 0x837b0c10
	ctx.lr = 0x82CF93DC;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r9,138
	ctx.r9.s64 = 138;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// ori r10,r10,9
	ctx.r10.u64 = ctx.r10.u64 | 9;
	// stw r9,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r9.u32);
	// addi r4,r29,196
	ctx.r4.s64 = ctx.r29.s64 + 196;
	// stw r10,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r10.u32);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9404;
	sub_837B0C10(ctx, base);
	// addi r4,r29,180
	ctx.r4.s64 = ctx.r29.s64 + 180;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9410;
	sub_837B0C10(ctx, base);
	// lis r10,700
	ctx.r10.s64 = 45875200;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,482
	ctx.r10.u64 = ctx.r10.u64 | 482;
	// li r9,139
	ctx.r9.s64 = 139;
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// stw r10,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r10.u32);
	// addi r4,r29,168
	ctx.r4.s64 = ctx.r29.s64 + 168;
	// stw r9,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r9.u32);
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9438;
	sub_837B0C10(ctx, base);
	// addi r4,r29,152
	ctx.r4.s64 = ctx.r29.s64 + 152;
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9444;
	sub_837B0C10(ctx, base);
	// lis r10,700
	ctx.r10.s64 = 45875200;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,483
	ctx.r10.u64 = ctx.r10.u64 | 483;
	// li r9,140
	ctx.r9.s64 = 140;
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
	// addi r4,r29,136
	ctx.r4.s64 = ctx.r29.s64 + 136;
	// stw r9,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r9.u32);
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// bl 0x837b0c10
	ctx.lr = 0x82CF946C;
	sub_837B0C10(ctx, base);
	// addi r4,r29,120
	ctx.r4.s64 = ctx.r29.s64 + 120;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9478;
	sub_837B0C10(ctx, base);
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,152
	ctx.r10.u64 = ctx.r10.u64 | 152;
	// li r9,141
	ctx.r9.s64 = 141;
	// stw r11,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r11.u32);
	// stw r10,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r10.u32);
	// addi r4,r29,104
	ctx.r4.s64 = ctx.r29.s64 + 104;
	// stw r9,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r9.u32);
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// bl 0x837b0c10
	ctx.lr = 0x82CF94A0;
	sub_837B0C10(ctx, base);
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// addi r3,r31,652
	ctx.r3.s64 = ctx.r31.s64 + 652;
	// bl 0x837b0c10
	ctx.lr = 0x82CF94AC;
	sub_837B0C10(ctx, base);
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,85
	ctx.r10.u64 = ctx.r10.u64 | 85;
	// li r9,143
	ctx.r9.s64 = 143;
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// stw r10,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r10.u32);
	// addi r4,r29,76
	ctx.r4.s64 = ctx.r29.s64 + 76;
	// stw r9,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r9.u32);
	// addi r3,r31,692
	ctx.r3.s64 = ctx.r31.s64 + 692;
	// bl 0x837b0c10
	ctx.lr = 0x82CF94D4;
	sub_837B0C10(ctx, base);
	// addi r4,r29,60
	ctx.r4.s64 = ctx.r29.s64 + 60;
	// addi r3,r31,720
	ctx.r3.s64 = ctx.r31.s64 + 720;
	// bl 0x837b0c10
	ctx.lr = 0x82CF94E0;
	sub_837B0C10(ctx, base);
	// lis r10,560
	ctx.r10.s64 = 36700160;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,328
	ctx.r10.u64 = ctx.r10.u64 | 328;
	// li r9,145
	ctx.r9.s64 = 145;
	// stw r11,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r11.u32);
	// stw r10,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r10.u32);
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// stw r9,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r9.u32);
	// addi r3,r31,760
	ctx.r3.s64 = ctx.r31.s64 + 760;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9508;
	sub_837B0C10(ctx, base);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// addi r3,r31,788
	ctx.r3.s64 = ctx.r31.s64 + 788;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9514;
	sub_837B0C10(ctx, base);
	// lis r10,700
	ctx.r10.s64 = 45875200;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,501
	ctx.r10.u64 = ctx.r10.u64 | 501;
	// li r9,144
	ctx.r9.s64 = 144;
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
	// stw r10,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r10.u32);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// stw r9,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r9.u32);
	// addi r3,r31,828
	ctx.r3.s64 = ctx.r31.s64 + 828;
	// bl 0x837b0c10
	ctx.lr = 0x82CF953C;
	sub_837B0C10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// bl 0x837b0c10
	ctx.lr = 0x82CF9548;
	sub_837B0C10(ctx, base);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4080
	ctx.r3.s64 = ctx.r11.s64 + 4080;
	// bl 0x831cdcc8
	ctx.lr = 0x82CF9554;
	sub_831CDCC8(ctx, base);
loc_82CF9554:
	// bl 0x82d95f98
	ctx.lr = 0x82CF9558;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cf9578
	if (cr6.eq) goto loc_82CF9578;
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r26)
	PPC_STORE_U32(ctx.r26.u32 + 108, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CF9578:
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,108(r26)
	PPC_STORE_U32(ctx.r26.u32 + 108, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CF958C"))) PPC_WEAK_FUNC(sub_82CF958C);
PPC_FUNC_IMPL(__imp__sub_82CF958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CF9590"))) PPC_WEAK_FUNC(sub_82CF9590);
PPC_FUNC_IMPL(__imp__sub_82CF9590) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CF95A8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf95d4
	if (cr6.eq) goto loc_82CF95D4;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2518
	ctx.lr = 0x82CF95B8;
	sub_82DA2518(ctx, base);
	// bl 0x82df16a0
	ctx.lr = 0x82CF95BC;
	sub_82DF16A0(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82cf95d4
	if (cr6.eq) goto loc_82CF95D4;
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82cf95d8
	goto loc_82CF95D8;
loc_82CF95D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CF95D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82cf95f4
	if (!cr6.eq) goto loc_82CF95F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cf8ec0
	ctx.lr = 0x82CF95EC;
	sub_82CF8EC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cf8f60
	ctx.lr = 0x82CF95F4;
	sub_82CF8F60(ctx, base);
loc_82CF95F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cf88e8
	ctx.lr = 0x82CF95FC;
	sub_82CF88E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82cf963c
	if (!cr6.eq) goto loc_82CF963C;
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82cf9620
	if (!cr6.eq) goto loc_82CF9620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cba558
	ctx.lr = 0x82CF961C;
	sub_82CBA558(ctx, base);
	// b 0x82cf963c
	goto loc_82CF963C;
loc_82CF9620:
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82cf9638
	if (!cr6.eq) goto loc_82CF9638;
	// bl 0x82cba558
	ctx.lr = 0x82CF9634;
	sub_82CBA558(ctx, base);
	// b 0x82cf963c
	goto loc_82CF963C;
loc_82CF9638:
	// bl 0x82cbac58
	ctx.lr = 0x82CF963C;
	sub_82CBAC58(ctx, base);
loc_82CF963C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cf968c
	if (cr6.eq) goto loc_82CF968C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CF965C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cf968c
	if (!cr6.eq) goto loc_82CF968C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82c281f0
	ctx.lr = 0x82CF9670;
	sub_82C281F0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82c280a0
	ctx.lr = 0x82CF9678;
	sub_82C280A0(ctx, base);
	// cmplwi cr6,r3,135
	cr6.compare<uint32_t>(ctx.r3.u32, 135, xer);
	// bne cr6,0x82cf968c
	if (!cr6.eq) goto loc_82CF968C;
	// li r4,134
	ctx.r4.s64 = 134;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82c28c38
	ctx.lr = 0x82CF968C;
	sub_82C28C38(ctx, base);
loc_82CF968C:
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

__attribute__((alias("__imp__sub_82CF96A4"))) PPC_WEAK_FUNC(sub_82CF96A4);
PPC_FUNC_IMPL(__imp__sub_82CF96A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CF96A8"))) PPC_WEAK_FUNC(sub_82CF96A8);
PPC_FUNC_IMPL(__imp__sub_82CF96A8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CF96C8;
	sub_82CBA100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf96fc
	if (cr6.eq) goto loc_82CF96FC;
	// bl 0x82d86078
	ctx.lr = 0x82CF96D8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf9808
	if (cr6.eq) goto loc_82CF9808;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da27f0
	ctx.lr = 0x82CF96E8;
	sub_82DA27F0(ctx, base);
	// bl 0x835d31a8
	ctx.lr = 0x82CF96EC;
	sub_835D31A8(ctx, base);
	// bl 0x82cdc3d8
	ctx.lr = 0x82CF96F0;
	sub_82CDC3D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d29598
	ctx.lr = 0x82CF96FC;
	sub_82D29598(ctx, base);
loc_82CF96FC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CF9708;
	sub_82CBA100(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf971c
	if (cr6.eq) goto loc_82CF971C;
	// lis r4,508
	ctx.r4.s64 = 33292288;
	// ori r4,r4,18
	ctx.r4.u64 = ctx.r4.u64 | 18;
	// bl 0x82d29598
	ctx.lr = 0x82CF971C;
	sub_82D29598(ctx, base);
loc_82CF971C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cf8ec0
	ctx.lr = 0x82CF9724;
	sub_82CF8EC0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CF9730;
	sub_82CBA100(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf9744
	if (cr6.eq) goto loc_82CF9744;
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// ori r4,r4,193
	ctx.r4.u64 = ctx.r4.u64 | 193;
	// bl 0x82d29598
	ctx.lr = 0x82CF9744;
	sub_82D29598(ctx, base);
loc_82CF9744:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cf8ec0
	ctx.lr = 0x82CF974C;
	sub_82CF8EC0(ctx, base);
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82cf9764
	if (!cr6.eq) goto loc_82CF9764;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cba558
	ctx.lr = 0x82CF9760;
	sub_82CBA558(ctx, base);
	// b 0x82cf9780
	goto loc_82CF9780;
loc_82CF9764:
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82cf977c
	if (!cr6.eq) goto loc_82CF977C;
	// bl 0x82cba558
	ctx.lr = 0x82CF9778;
	sub_82CBA558(ctx, base);
	// b 0x82cf9780
	goto loc_82CF9780;
loc_82CF977C:
	// bl 0x82cbac58
	ctx.lr = 0x82CF9780;
	sub_82CBAC58(ctx, base);
loc_82CF9780:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cf8f60
	ctx.lr = 0x82CF9788;
	sub_82CF8F60(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CF9794;
	sub_82CBA100(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf97a8
	if (cr6.eq) goto loc_82CF97A8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CF97A8;
	sub_82D2AEC8(ctx, base);
loc_82CF97A8:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CF97B4;
	sub_82CBA100(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf97c8
	if (cr6.eq) goto loc_82CF97C8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CF97C8;
	sub_82D2AEC8(ctx, base);
loc_82CF97C8:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CF97D4;
	sub_82CBA100(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf97e8
	if (cr6.eq) goto loc_82CF97E8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CF97E8;
	sub_82D2AEC8(ctx, base);
loc_82CF97E8:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CF97F4;
	sub_82CBA100(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf9808
	if (cr6.eq) goto loc_82CF9808;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CF9808;
	sub_82D2AEC8(ctx, base);
loc_82CF9808:
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

__attribute__((alias("__imp__sub_82CF9820"))) PPC_WEAK_FUNC(sub_82CF9820);
PPC_FUNC_IMPL(__imp__sub_82CF9820) {
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
	// bl 0x82d86078
	ctx.lr = 0x82CF9838;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf985c
	if (cr6.eq) goto loc_82CF985C;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2518
	ctx.lr = 0x82CF9848;
	sub_82DA2518(ctx, base);
	// bl 0x82df16a0
	ctx.lr = 0x82CF984C;
	sub_82DF16A0(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82cf985c
	if (cr6.eq) goto loc_82CF985C;
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
loc_82CF985C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cf88e8
	ctx.lr = 0x82CF9864;
	sub_82CF88E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cf96a8
	ctx.lr = 0x82CF986C;
	sub_82CF96A8(ctx, base);
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

__attribute__((alias("__imp__sub_82CF9884"))) PPC_WEAK_FUNC(sub_82CF9884);
PPC_FUNC_IMPL(__imp__sub_82CF9884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CF9888"))) PPC_WEAK_FUNC(sub_82CF9888);
PPC_FUNC_IMPL(__imp__sub_82CF9888) {
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
	// bl 0x82d86078
	ctx.lr = 0x82CF9898;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cf98b4
	if (!cr6.eq) goto loc_82CF98B4;
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
loc_82CF98B4:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da27f0
	ctx.lr = 0x82CF98BC;
	sub_82DA27F0(ctx, base);
	// bl 0x835d3140
	ctx.lr = 0x82CF98C0;
	sub_835D3140(ctx, base);
	// bl 0x82d96208
	ctx.lr = 0x82CF98C4;
	sub_82D96208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CF98D4"))) PPC_WEAK_FUNC(sub_82CF98D4);
PPC_FUNC_IMPL(__imp__sub_82CF98D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CF98D8"))) PPC_WEAK_FUNC(sub_82CF98D8);
PPC_FUNC_IMPL(__imp__sub_82CF98D8) {
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
	// bl 0x82d86078
	ctx.lr = 0x82CF98F4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf9924
	if (cr6.eq) goto loc_82CF9924;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2518
	ctx.lr = 0x82CF9904;
	sub_82DA2518(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82df1660
	ctx.lr = 0x82CF990C;
	sub_82DF1660(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82cf9920
	if (cr6.eq) goto loc_82CF9920;
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CF9920:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CF9924:
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

__attribute__((alias("__imp__sub_82CF993C"))) PPC_WEAK_FUNC(sub_82CF993C);
PPC_FUNC_IMPL(__imp__sub_82CF993C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CF9940"))) PPC_WEAK_FUNC(sub_82CF9940);
PPC_FUNC_IMPL(__imp__sub_82CF9940) {
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
	// bl 0x82d86078
	ctx.lr = 0x82CF995C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf998c
	if (cr6.eq) goto loc_82CF998C;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2518
	ctx.lr = 0x82CF996C;
	sub_82DA2518(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8395b0f8
	ctx.lr = 0x82CF9974;
	sub_8395B0F8(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82cf9988
	if (cr6.eq) goto loc_82CF9988;
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CF9988:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CF998C:
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

__attribute__((alias("__imp__sub_82CF99A4"))) PPC_WEAK_FUNC(sub_82CF99A4);
PPC_FUNC_IMPL(__imp__sub_82CF99A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CF99A8"))) PPC_WEAK_FUNC(sub_82CF99A8);
PPC_FUNC_IMPL(__imp__sub_82CF99A8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d961a0
	ctx.lr = 0x82CF99D0;
	sub_82D961A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cf99e4
	if (!cr6.eq) goto loc_82CF99E4;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82cf99e8
	goto loc_82CF99E8;
loc_82CF99E4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82CF99E8:
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82cf9a00
	if (cr6.eq) goto loc_82CF9A00;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CF9A00:
	// lbz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82cf9a18
	if (cr6.eq) goto loc_82CF9A18;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r30,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r30.u8);
loc_82CF9A18:
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

__attribute__((alias("__imp__sub_82CF9A30"))) PPC_WEAK_FUNC(sub_82CF9A30);
PPC_FUNC_IMPL(__imp__sub_82CF9A30) {
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
	// lwz r4,208(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cf9a58
	if (cr6.eq) goto loc_82CF9A58;
	// bl 0x82cbac58
	ctx.lr = 0x82CF9A54;
	sub_82CBAC58(ctx, base);
	// b 0x82cf9a5c
	goto loc_82CF9A5C;
loc_82CF9A58:
	// bl 0x82cba558
	ctx.lr = 0x82CF9A5C;
	sub_82CBA558(ctx, base);
loc_82CF9A5C:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CF9A68;
	sub_82CBA100(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf9a7c
	if (cr6.eq) goto loc_82CF9A7C;
	// lis r4,23
	ctx.r4.s64 = 1507328;
	// ori r4,r4,45
	ctx.r4.u64 = ctx.r4.u64 | 45;
	// bl 0x82d29598
	ctx.lr = 0x82CF9A7C;
	sub_82D29598(ctx, base);
loc_82CF9A7C:
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

__attribute__((alias("__imp__sub_82CF9A90"))) PPC_WEAK_FUNC(sub_82CF9A90);
PPC_FUNC_IMPL(__imp__sub_82CF9A90) {
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
	// cmpwi cr6,r4,135
	cr6.compare<int32_t>(ctx.r4.s32, 135, xer);
	// bne cr6,0x82cf9ad8
	if (!cr6.eq) goto loc_82CF9AD8;
	// bl 0x82d86078
	ctx.lr = 0x82CF9AA8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cf9ab8
	if (!cr6.eq) goto loc_82CF9AB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cf9ac8
	goto loc_82CF9AC8;
loc_82CF9AB8:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da27f0
	ctx.lr = 0x82CF9AC0;
	sub_82DA27F0(ctx, base);
	// bl 0x835d3140
	ctx.lr = 0x82CF9AC4;
	sub_835D3140(ctx, base);
	// bl 0x82d96208
	ctx.lr = 0x82CF9AC8;
	sub_82D96208(ctx, base);
loc_82CF9AC8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cf9adc
	if (cr6.eq) goto loc_82CF9ADC;
loc_82CF9AD8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CF9ADC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CF9AEC"))) PPC_WEAK_FUNC(sub_82CF9AEC);
PPC_FUNC_IMPL(__imp__sub_82CF9AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CF9AF0"))) PPC_WEAK_FUNC(sub_82CF9AF0);
PPC_FUNC_IMPL(__imp__sub_82CF9AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CF9AF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CF9B1C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf9b74
	if (cr6.eq) goto loc_82CF9B74;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb9f28
	ctx.lr = 0x82CF9B34;
	sub_82CB9F28(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-30432
	ctx.r8.s64 = ctx.r10.s64 + -30432;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stb r11,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r11.u8);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CF9B74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CF9B80"))) PPC_WEAK_FUNC(sub_82CF9B80);
PPC_FUNC_IMPL(__imp__sub_82CF9B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CF9B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,156
	ctx.r4.s64 = 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CF9BAC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf9be8
	if (cr6.eq) goto loc_82CF9BE8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb9608
	ctx.lr = 0x82CF9BC4;
	sub_82CB9608(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-30104
	ctx.r9.s64 = ctx.r11.s64 + -30104;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CF9BE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CF9BF4"))) PPC_WEAK_FUNC(sub_82CF9BF4);
PPC_FUNC_IMPL(__imp__sub_82CF9BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CF9BF8"))) PPC_WEAK_FUNC(sub_82CF9BF8);
PPC_FUNC_IMPL(__imp__sub_82CF9BF8) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-30432
	ctx.r9.s64 = ctx.r11.s64 + -30432;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82cb9c08
	ctx.lr = 0x82CF9C30;
	sub_82CB9C08(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cf9c48
	if (cr6.eq) goto loc_82CF9C48;
	// bl 0x82416268
	ctx.lr = 0x82CF9C44;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CF9C48:
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

__attribute__((alias("__imp__sub_82CF9C60"))) PPC_WEAK_FUNC(sub_82CF9C60);
PPC_FUNC_IMPL(__imp__sub_82CF9C60) {
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
	// bl 0x82d86078
	ctx.lr = 0x82CF9C7C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf9cbc
	if (cr6.eq) goto loc_82CF9CBC;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da27f0
	ctx.lr = 0x82CF9C8C;
	sub_82DA27F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x835d3140
	ctx.lr = 0x82CF9C94;
	sub_835D3140(ctx, base);
	// stw r3,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835d3130
	ctx.lr = 0x82CF9CA0;
	sub_835D3130(ctx, base);
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cf98d8
	ctx.lr = 0x82CF9CAC;
	sub_82CF98D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cf9940
	ctx.lr = 0x82CF9CB4;
	sub_82CF9940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cf99a8
	ctx.lr = 0x82CF9CBC;
	sub_82CF99A8(ctx, base);
loc_82CF9CBC:
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

__attribute__((alias("__imp__sub_82CF9CD4"))) PPC_WEAK_FUNC(sub_82CF9CD4);
PPC_FUNC_IMPL(__imp__sub_82CF9CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CF9CD8"))) PPC_WEAK_FUNC(sub_82CF9CD8);
PPC_FUNC_IMPL(__imp__sub_82CF9CD8) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-30104
	ctx.r9.s64 = ctx.r11.s64 + -30104;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82cb9650
	ctx.lr = 0x82CF9D10;
	sub_82CB9650(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cf9d28
	if (cr6.eq) goto loc_82CF9D28;
	// bl 0x82416268
	ctx.lr = 0x82CF9D24;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CF9D28:
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

__attribute__((alias("__imp__sub_82CF9D40"))) PPC_WEAK_FUNC(sub_82CF9D40);
PPC_FUNC_IMPL(__imp__sub_82CF9D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CF9D48;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CF9D54;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cf9f28
	if (cr6.eq) goto loc_82CF9F28;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da27f0
	ctx.lr = 0x82CF9D64;
	sub_82DA27F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83322010
	ctx.lr = 0x82CF9D6C;
	sub_83322010(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82cf9f28
	if (!cr6.eq) goto loc_82CF9F28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dad040
	ctx.lr = 0x82CF9D80;
	sub_82DAD040(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82cf9f28
	if (!cr6.eq) goto loc_82CF9F28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dad038
	ctx.lr = 0x82CF9D94;
	sub_82DAD038(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// bl 0x82dad268
	ctx.lr = 0x82CF9DC0;
	sub_82DAD268(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cf9dd4
	if (!cr6.lt) goto loc_82CF9DD4;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_82CF9DD4:
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ori r4,r4,107
	ctx.r4.u64 = ctx.r4.u64 | 107;
	// bl 0x82d042a8
	ctx.lr = 0x82CF9DE4;
	sub_82D042A8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// bge cr6,0x82cf9e04
	if (!cr6.lt) goto loc_82CF9E04;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
loc_82CF9E04:
	// lis r11,279
	ctx.r11.s64 = 18284544;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// ori r29,r11,722
	ctx.r29.u64 = ctx.r11.u64 | 722;
	// addi r6,r10,-31366
	ctx.r6.s64 = ctx.r10.s64 + -31366;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x82CF9E20;
	sub_82D042A8(ctx, base);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bl 0x82d95f98
	ctx.lr = 0x82CF9E30;
	sub_82D95F98(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82cf9ebc
	if (!cr6.eq) goto loc_82CF9EBC;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// ori r4,r4,163
	ctx.r4.u64 = ctx.r4.u64 | 163;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x82d04220
	ctx.lr = 0x82CF9E58;
	sub_82D04220(ctx, base);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// ori r4,r4,196
	ctx.r4.u64 = ctx.r4.u64 | 196;
	// bl 0x82d04220
	ctx.lr = 0x82CF9E74;
	sub_82D04220(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cf9e88
	if (!cr6.lt) goto loc_82CF9E88;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
loc_82CF9E88:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cf9e9c
	if (!cr6.lt) goto loc_82CF9E9C;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82CF9E9C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82CF9EA8;
	sub_82D042A8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82CF9EB0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CF9EB8;
	sub_8387E8E0(ctx, base);
	// b 0x82cf9ec8
	goto loc_82CF9EC8;
loc_82CF9EBC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,164
	ctx.r4.u64 = ctx.r4.u64 | 164;
	// bl 0x82d04220
	ctx.lr = 0x82CF9EC8;
	sub_82D04220(ctx, base);
loc_82CF9EC8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cf9edc
	if (!cr6.lt) goto loc_82CF9EDC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
loc_82CF9EDC:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cf9ef0
	if (!cr6.lt) goto loc_82CF9EF0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_82CF9EF0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82CF9EFC;
	sub_82D042A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CF9F04;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82CF9F0C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82CF9F14;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82CF9F1C;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CF9F28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CF9F34"))) PPC_WEAK_FUNC(sub_82CF9F34);
PPC_FUNC_IMPL(__imp__sub_82CF9F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CF9F38"))) PPC_WEAK_FUNC(sub_82CF9F38);
PPC_FUNC_IMPL(__imp__sub_82CF9F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CF9F40;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82d95f98
	ctx.lr = 0x82CF9F60;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cf9f7c
	if (!cr6.eq) goto loc_82CF9F7C;
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// ori r4,r4,171
	ctx.r4.u64 = ctx.r4.u64 | 171;
	// b 0x82cf9f84
	goto loc_82CF9F84;
loc_82CF9F7C:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,49
	ctx.r4.u64 = ctx.r4.u64 | 49;
loc_82CF9F84:
	// bl 0x82d04220
	ctx.lr = 0x82CF9F88;
	sub_82D04220(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,199
	ctx.r4.u64 = ctx.r4.u64 | 199;
	// bl 0x82d04220
	ctx.lr = 0x82CF9FA4;
	sub_82D04220(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cf9fb8
	if (!cr6.lt) goto loc_82CF9FB8;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82CF9FB8:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cf9fcc
	if (!cr6.lt) goto loc_82CF9FCC;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82CF9FCC:
	// lis r4,279
	ctx.r4.s64 = 18284544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,722
	ctx.r4.u64 = ctx.r4.u64 | 722;
	// bl 0x82d042a8
	ctx.lr = 0x82CF9FDC;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cf9ffc
	if (cr6.lt) goto loc_82CF9FFC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CF9FFC;
	sub_825952B8(ctx, base);
loc_82CF9FFC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82cfa024
	if (cr6.lt) goto loc_82CFA024;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CFA024;
	sub_825952B8(ctx, base);
loc_82CFA024:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFA030"))) PPC_WEAK_FUNC(sub_82CFA030);
PPC_FUNC_IMPL(__imp__sub_82CFA030) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CFA050;
	sub_82CBA100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfa0b0
	if (cr6.eq) goto loc_82CFA0B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82cdcf30
	ctx.lr = 0x82CFA07C;
	sub_82CDCF30(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CFA090;
	sub_82D291E0(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cfa0b0
	if (cr6.lt) goto loc_82CFA0B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CFA0B0;
	sub_825952B8(ctx, base);
loc_82CFA0B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82CFA0C8"))) PPC_WEAK_FUNC(sub_82CFA0C8);
PPC_FUNC_IMPL(__imp__sub_82CFA0C8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-31333
	ctx.r4.s64 = ctx.r9.s64 + -31333;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82CFA104;
	sub_8259CC28(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,216(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// ori r4,r4,137
	ctx.r4.u64 = ctx.r4.u64 | 137;
	// lwz r5,200(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// bl 0x82d042a8
	ctx.lr = 0x82CFA11C;
	sub_82D042A8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CFA128;
	sub_82CBA100(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfa140
	if (cr6.eq) goto loc_82CFA140;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82CFA140;
	sub_82D291E0(ctx, base);
loc_82CFA140:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cfa160
	if (cr6.lt) goto loc_82CFA160;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CFA160;
	sub_825952B8(ctx, base);
loc_82CFA160:
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

__attribute__((alias("__imp__sub_82CFA174"))) PPC_WEAK_FUNC(sub_82CFA174);
PPC_FUNC_IMPL(__imp__sub_82CFA174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFA178"))) PPC_WEAK_FUNC(sub_82CFA178);
PPC_FUNC_IMPL(__imp__sub_82CFA178) {
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
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CFA198;
	sub_82CBA100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfa204
	if (cr6.eq) goto loc_82CFA204;
	// lbz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82cfa1d0
	if (!cr6.eq) goto loc_82CFA1D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82cb95a0
	ctx.lr = 0x82CFA1BC;
	sub_82CB95A0(ctx, base);
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,87
	ctx.r4.u64 = ctx.r4.u64 | 87;
	// bl 0x82d29598
	ctx.lr = 0x82CFA1CC;
	sub_82D29598(ctx, base);
	// b 0x82cfa204
	goto loc_82CFA204;
loc_82CFA1D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb95a0
	ctx.lr = 0x82CFA1D8;
	sub_82CB95A0(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-31303
	ctx.r4.s64 = ctx.r11.s64 + -31303;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA1E8;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CFA1FC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CFA204;
	sub_8387E8E0(ctx, base);
loc_82CFA204:
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

__attribute__((alias("__imp__sub_82CFA21C"))) PPC_WEAK_FUNC(sub_82CFA21C);
PPC_FUNC_IMPL(__imp__sub_82CFA21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFA220"))) PPC_WEAK_FUNC(sub_82CFA220);
PPC_FUNC_IMPL(__imp__sub_82CFA220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CFA228;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31759
	ctx.r28.s64 = -2081357824;
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r30,r10,27008
	ctx.r30.s64 = ctx.r10.s64 + 27008;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,27824(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27824);
	// li r27,-1
	ctx.r27.s64 = -1;
	// addi r29,r9,-30860
	ctx.r29.s64 = ctx.r9.s64 + -30860;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cfa4d8
	if (!cr6.eq) goto loc_82CFA4D8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// stw r11,27824(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27824, ctx.r11.u32);
	// li r11,200
	ctx.r11.s64 = 200;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA280;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-442
	ctx.r4.s64 = ctx.r29.s64 + -442;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA28C;
	sub_837B0C10(ctx, base);
	// lis r10,505
	ctx.r10.s64 = 33095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,100
	ctx.r10.u64 = ctx.r10.u64 | 100;
	// li r9,130
	ctx.r9.s64 = 130;
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// stw r9,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r9.u32);
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA2B4;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA2C0;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,269
	ctx.r10.u64 = ctx.r10.u64 | 269;
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// stw r10,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r10.u32);
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// stw r9,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r9.u32);
	// addi r3,r30,148
	ctx.r3.s64 = ctx.r30.s64 + 148;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA2E8;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-44
	ctx.r4.s64 = ctx.r29.s64 + -44;
	// addi r3,r30,176
	ctx.r3.s64 = ctx.r30.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA2F4;
	sub_837B0C10(ctx, base);
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,81
	ctx.r10.u64 = ctx.r10.u64 | 81;
	// li r9,134
	ctx.r9.s64 = 134;
	// stw r11,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r11.u32);
	// stw r10,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r10.u32);
	// addi r4,r29,-60
	ctx.r4.s64 = ctx.r29.s64 + -60;
	// stw r9,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r9.u32);
	// addi r3,r30,216
	ctx.r3.s64 = ctx.r30.s64 + 216;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA31C;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-68
	ctx.r4.s64 = ctx.r29.s64 + -68;
	// addi r3,r30,244
	ctx.r3.s64 = ctx.r30.s64 + 244;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA328;
	sub_837B0C10(ctx, base);
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,90
	ctx.r10.u64 = ctx.r10.u64 | 90;
	// li r9,135
	ctx.r9.s64 = 135;
	// stw r11,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r11.u32);
	// stw r10,276(r30)
	PPC_STORE_U32(ctx.r30.u32 + 276, ctx.r10.u32);
	// addi r4,r29,-76
	ctx.r4.s64 = ctx.r29.s64 + -76;
	// stw r9,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r9.u32);
	// addi r3,r30,284
	ctx.r3.s64 = ctx.r30.s64 + 284;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA350;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-84
	ctx.r4.s64 = ctx.r29.s64 + -84;
	// addi r3,r30,312
	ctx.r3.s64 = ctx.r30.s64 + 312;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA35C;
	sub_837B0C10(ctx, base);
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,80
	ctx.r10.u64 = ctx.r10.u64 | 80;
	// li r9,136
	ctx.r9.s64 = 136;
	// stw r11,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r11.u32);
	// stw r10,344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 344, ctx.r10.u32);
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// stw r9,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r9.u32);
	// addi r3,r30,352
	ctx.r3.s64 = ctx.r30.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA384;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-112
	ctx.r4.s64 = ctx.r29.s64 + -112;
	// addi r3,r30,380
	ctx.r3.s64 = ctx.r30.s64 + 380;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA390;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,700
	ctx.r10.s64 = 45875200;
	// stw r11,408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 408, ctx.r11.u32);
	// li r9,137
	ctx.r9.s64 = 137;
	// ori r10,r10,520
	ctx.r10.u64 = ctx.r10.u64 | 520;
	// stw r9,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r9.u32);
	// addi r4,r29,-124
	ctx.r4.s64 = ctx.r29.s64 + -124;
	// stw r10,412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 412, ctx.r10.u32);
	// addi r3,r30,420
	ctx.r3.s64 = ctx.r30.s64 + 420;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA3B8;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-140
	ctx.r4.s64 = ctx.r29.s64 + -140;
	// addi r3,r30,448
	ctx.r3.s64 = ctx.r30.s64 + 448;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA3C4;
	sub_837B0C10(ctx, base);
	// lis r10,700
	ctx.r10.s64 = 45875200;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,482
	ctx.r10.u64 = ctx.r10.u64 | 482;
	// li r9,139
	ctx.r9.s64 = 139;
	// stw r11,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r11.u32);
	// stw r10,480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 480, ctx.r10.u32);
	// addi r4,r29,-152
	ctx.r4.s64 = ctx.r29.s64 + -152;
	// stw r9,484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 484, ctx.r9.u32);
	// addi r3,r30,488
	ctx.r3.s64 = ctx.r30.s64 + 488;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA3EC;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-168
	ctx.r4.s64 = ctx.r29.s64 + -168;
	// addi r3,r30,516
	ctx.r3.s64 = ctx.r30.s64 + 516;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA3F8;
	sub_837B0C10(ctx, base);
	// lis r10,700
	ctx.r10.s64 = 45875200;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,483
	ctx.r10.u64 = ctx.r10.u64 | 483;
	// li r9,140
	ctx.r9.s64 = 140;
	// stw r11,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r11.u32);
	// stw r10,548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 548, ctx.r10.u32);
	// addi r4,r29,-184
	ctx.r4.s64 = ctx.r29.s64 + -184;
	// stw r9,552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 552, ctx.r9.u32);
	// addi r3,r30,556
	ctx.r3.s64 = ctx.r30.s64 + 556;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA420;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-200
	ctx.r4.s64 = ctx.r29.s64 + -200;
	// addi r3,r30,584
	ctx.r3.s64 = ctx.r30.s64 + 584;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA42C;
	sub_837B0C10(ctx, base);
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,152
	ctx.r10.u64 = ctx.r10.u64 | 152;
	// li r9,141
	ctx.r9.s64 = 141;
	// stw r11,612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 612, ctx.r11.u32);
	// stw r10,616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 616, ctx.r10.u32);
	// addi r4,r29,-216
	ctx.r4.s64 = ctx.r29.s64 + -216;
	// stw r9,620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 620, ctx.r9.u32);
	// addi r3,r30,624
	ctx.r3.s64 = ctx.r30.s64 + 624;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA454;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-232
	ctx.r4.s64 = ctx.r29.s64 + -232;
	// addi r3,r30,652
	ctx.r3.s64 = ctx.r30.s64 + 652;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA460;
	sub_837B0C10(ctx, base);
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,85
	ctx.r10.u64 = ctx.r10.u64 | 85;
	// li r9,143
	ctx.r9.s64 = 143;
	// stw r11,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r11.u32);
	// stw r10,684(r30)
	PPC_STORE_U32(ctx.r30.u32 + 684, ctx.r10.u32);
	// addi r4,r29,-244
	ctx.r4.s64 = ctx.r29.s64 + -244;
	// stw r9,688(r30)
	PPC_STORE_U32(ctx.r30.u32 + 688, ctx.r9.u32);
	// addi r3,r30,692
	ctx.r3.s64 = ctx.r30.s64 + 692;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA488;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-260
	ctx.r4.s64 = ctx.r29.s64 + -260;
	// addi r3,r30,720
	ctx.r3.s64 = ctx.r30.s64 + 720;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA494;
	sub_837B0C10(ctx, base);
	// lis r10,700
	ctx.r10.s64 = 45875200;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,501
	ctx.r10.u64 = ctx.r10.u64 | 501;
	// li r9,144
	ctx.r9.s64 = 144;
	// stw r11,748(r30)
	PPC_STORE_U32(ctx.r30.u32 + 748, ctx.r11.u32);
	// stw r10,752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 752, ctx.r10.u32);
	// addi r4,r29,-272
	ctx.r4.s64 = ctx.r29.s64 + -272;
	// stw r9,756(r30)
	PPC_STORE_U32(ctx.r30.u32 + 756, ctx.r9.u32);
	// addi r3,r30,760
	ctx.r3.s64 = ctx.r30.s64 + 760;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA4BC;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-288
	ctx.r4.s64 = ctx.r29.s64 + -288;
	// addi r3,r30,788
	ctx.r3.s64 = ctx.r30.s64 + 788;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA4C8;
	sub_837B0C10(ctx, base);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4624
	ctx.r3.s64 = ctx.r11.s64 + 4624;
	// bl 0x831cdcc8
	ctx.lr = 0x82CFA4D4;
	sub_831CDCC8(ctx, base);
	// lwz r11,27824(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27824);
loc_82CFA4D8:
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r31,r10,26056
	ctx.r31.s64 = ctx.r10.s64 + 26056;
	// bne cr6,0x82cfa7d4
	if (!cr6.eq) goto loc_82CFA7D4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,27824(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27824, ctx.r11.u32);
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r4,r29,336
	ctx.r4.s64 = ctx.r29.s64 + 336;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA518;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-441
	ctx.r4.s64 = ctx.r29.s64 + -441;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA524;
	sub_837B0C10(ctx, base);
	// lis r10,505
	ctx.r10.s64 = 33095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,100
	ctx.r10.u64 = ctx.r10.u64 | 100;
	// li r9,130
	ctx.r9.s64 = 130;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r4,r29,324
	ctx.r4.s64 = ctx.r29.s64 + 324;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA54C;
	sub_837B0C10(ctx, base);
	// addi r4,r29,316
	ctx.r4.s64 = ctx.r29.s64 + 316;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA558;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,269
	ctx.r10.u64 = ctx.r10.u64 | 269;
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// addi r4,r29,304
	ctx.r4.s64 = ctx.r29.s64 + 304;
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA580;
	sub_837B0C10(ctx, base);
	// addi r4,r29,296
	ctx.r4.s64 = ctx.r29.s64 + 296;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA58C;
	sub_837B0C10(ctx, base);
	// lis r10,300
	ctx.r10.s64 = 19660800;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,597
	ctx.r10.u64 = ctx.r10.u64 | 597;
	// li r9,133
	ctx.r9.s64 = 133;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// addi r4,r29,284
	ctx.r4.s64 = ctx.r29.s64 + 284;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA5B4;
	sub_837B0C10(ctx, base);
	// addi r4,r29,276
	ctx.r4.s64 = ctx.r29.s64 + 276;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA5C0;
	sub_837B0C10(ctx, base);
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,81
	ctx.r10.u64 = ctx.r10.u64 | 81;
	// li r9,134
	ctx.r9.s64 = 134;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// addi r4,r29,260
	ctx.r4.s64 = ctx.r29.s64 + 260;
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA5E8;
	sub_837B0C10(ctx, base);
	// addi r4,r29,252
	ctx.r4.s64 = ctx.r29.s64 + 252;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA5F4;
	sub_837B0C10(ctx, base);
	// lis r10,560
	ctx.r10.s64 = 36700160;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,315
	ctx.r10.u64 = ctx.r10.u64 | 315;
	// li r9,135
	ctx.r9.s64 = 135;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// addi r4,r29,244
	ctx.r4.s64 = ctx.r29.s64 + 244;
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA61C;
	sub_837B0C10(ctx, base);
	// addi r4,r29,236
	ctx.r4.s64 = ctx.r29.s64 + 236;
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA628;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// li r9,136
	ctx.r9.s64 = 136;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// ori r10,r10,80
	ctx.r10.u64 = ctx.r10.u64 | 80;
	// stw r9,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r9.u32);
	// addi r4,r29,224
	ctx.r4.s64 = ctx.r29.s64 + 224;
	// stw r10,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r10.u32);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA650;
	sub_837B0C10(ctx, base);
	// addi r4,r29,208
	ctx.r4.s64 = ctx.r29.s64 + 208;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA65C;
	sub_837B0C10(ctx, base);
	// lis r10,700
	ctx.r10.s64 = 45875200;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,520
	ctx.r10.u64 = ctx.r10.u64 | 520;
	// li r9,137
	ctx.r9.s64 = 137;
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// stw r10,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r10.u32);
	// addi r4,r29,196
	ctx.r4.s64 = ctx.r29.s64 + 196;
	// stw r9,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r9.u32);
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA684;
	sub_837B0C10(ctx, base);
	// addi r4,r29,180
	ctx.r4.s64 = ctx.r29.s64 + 180;
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA690;
	sub_837B0C10(ctx, base);
	// lis r10,700
	ctx.r10.s64 = 45875200;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,482
	ctx.r10.u64 = ctx.r10.u64 | 482;
	// li r9,139
	ctx.r9.s64 = 139;
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
	// addi r4,r29,168
	ctx.r4.s64 = ctx.r29.s64 + 168;
	// stw r9,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r9.u32);
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA6B8;
	sub_837B0C10(ctx, base);
	// addi r4,r29,152
	ctx.r4.s64 = ctx.r29.s64 + 152;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA6C4;
	sub_837B0C10(ctx, base);
	// lis r10,700
	ctx.r10.s64 = 45875200;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,483
	ctx.r10.u64 = ctx.r10.u64 | 483;
	// li r9,140
	ctx.r9.s64 = 140;
	// stw r11,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r11.u32);
	// stw r10,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r10.u32);
	// addi r4,r29,136
	ctx.r4.s64 = ctx.r29.s64 + 136;
	// stw r9,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r9.u32);
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA6EC;
	sub_837B0C10(ctx, base);
	// addi r4,r29,120
	ctx.r4.s64 = ctx.r29.s64 + 120;
	// addi r3,r31,652
	ctx.r3.s64 = ctx.r31.s64 + 652;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA6F8;
	sub_837B0C10(ctx, base);
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,152
	ctx.r10.u64 = ctx.r10.u64 | 152;
	// li r9,141
	ctx.r9.s64 = 141;
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// stw r10,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r10.u32);
	// addi r4,r29,104
	ctx.r4.s64 = ctx.r29.s64 + 104;
	// stw r9,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r9.u32);
	// addi r3,r31,692
	ctx.r3.s64 = ctx.r31.s64 + 692;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA720;
	sub_837B0C10(ctx, base);
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// addi r3,r31,720
	ctx.r3.s64 = ctx.r31.s64 + 720;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA72C;
	sub_837B0C10(ctx, base);
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,85
	ctx.r10.u64 = ctx.r10.u64 | 85;
	// li r9,143
	ctx.r9.s64 = 143;
	// stw r11,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r11.u32);
	// stw r10,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r10.u32);
	// addi r4,r29,76
	ctx.r4.s64 = ctx.r29.s64 + 76;
	// stw r9,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r9.u32);
	// addi r3,r31,760
	ctx.r3.s64 = ctx.r31.s64 + 760;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA754;
	sub_837B0C10(ctx, base);
	// addi r4,r29,60
	ctx.r4.s64 = ctx.r29.s64 + 60;
	// addi r3,r31,788
	ctx.r3.s64 = ctx.r31.s64 + 788;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA760;
	sub_837B0C10(ctx, base);
	// lis r10,560
	ctx.r10.s64 = 36700160;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,328
	ctx.r10.u64 = ctx.r10.u64 | 328;
	// li r9,145
	ctx.r9.s64 = 145;
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
	// stw r10,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r10.u32);
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// stw r9,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r9.u32);
	// addi r3,r31,828
	ctx.r3.s64 = ctx.r31.s64 + 828;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA788;
	sub_837B0C10(ctx, base);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA794;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,700
	ctx.r10.s64 = 45875200;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r11,144
	ctx.r11.s64 = 144;
	// ori r10,r10,501
	ctx.r10.u64 = ctx.r10.u64 | 501;
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA7BC;
	sub_837B0C10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,924
	ctx.r3.s64 = ctx.r31.s64 + 924;
	// bl 0x837b0c10
	ctx.lr = 0x82CFA7C8;
	sub_837B0C10(ctx, base);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4488
	ctx.r3.s64 = ctx.r11.s64 + 4488;
	// bl 0x831cdcc8
	ctx.lr = 0x82CFA7D4;
	sub_831CDCC8(ctx, base);
loc_82CFA7D4:
	// bl 0x82d95f98
	ctx.lr = 0x82CFA7D8;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfa7f8
	if (cr6.eq) goto loc_82CFA7F8;
	// li r11,14
	ctx.r11.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r26)
	PPC_STORE_U32(ctx.r26.u32 + 108, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CFA7F8:
	// li r11,12
	ctx.r11.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,108(r26)
	PPC_STORE_U32(ctx.r26.u32 + 108, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFA80C"))) PPC_WEAK_FUNC(sub_82CFA80C);
PPC_FUNC_IMPL(__imp__sub_82CFA80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFA810"))) PPC_WEAK_FUNC(sub_82CFA810);
PPC_FUNC_IMPL(__imp__sub_82CFA810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x82cf99a8
	ctx.lr = 0x82CFA82C;
	sub_82CF99A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82cfa848
	if (!cr6.eq) goto loc_82CFA848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cf9a30
	ctx.lr = 0x82CFA840;
	sub_82CF9A30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfa178
	ctx.lr = 0x82CFA848;
	sub_82CFA178(ctx, base);
loc_82CFA848:
	// bl 0x82d86078
	ctx.lr = 0x82CFA84C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cfa85c
	if (!cr6.eq) goto loc_82CFA85C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82cfa880
	goto loc_82CFA880;
loc_82CFA85C:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2518
	ctx.lr = 0x82CFA864;
	sub_82DA2518(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82df1660
	ctx.lr = 0x82CFA86C;
	sub_82DF1660(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82cfa880
	if (cr6.eq) goto loc_82CFA880;
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CFA880:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82cfa894
	if (!cr6.eq) goto loc_82CFA894;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfa0c8
	ctx.lr = 0x82CFA894;
	sub_82CFA0C8(ctx, base);
loc_82CFA894:
	// bl 0x82d86078
	ctx.lr = 0x82CFA898;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cfa8a8
	if (!cr6.eq) goto loc_82CFA8A8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82cfa8cc
	goto loc_82CFA8CC;
loc_82CFA8A8:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2518
	ctx.lr = 0x82CFA8B0;
	sub_82DA2518(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8395b0f8
	ctx.lr = 0x82CFA8B8;
	sub_8395B0F8(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82cfa8cc
	if (cr6.eq) goto loc_82CFA8CC;
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CFA8CC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82cfa8e0
	if (!cr6.eq) goto loc_82CFA8E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfa030
	ctx.lr = 0x82CFA8E0;
	sub_82CFA030(ctx, base);
loc_82CFA8E0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfa930
	if (cr6.eq) goto loc_82CFA930;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFA900;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cfa930
	if (!cr6.eq) goto loc_82CFA930;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82c281f0
	ctx.lr = 0x82CFA914;
	sub_82C281F0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82c280a0
	ctx.lr = 0x82CFA91C;
	sub_82C280A0(ctx, base);
	// cmplwi cr6,r3,135
	cr6.compare<uint32_t>(ctx.r3.u32, 135, xer);
	// bne cr6,0x82cfa930
	if (!cr6.eq) goto loc_82CFA930;
	// li r4,134
	ctx.r4.s64 = 134;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82c28c38
	ctx.lr = 0x82CFA930;
	sub_82C28C38(ctx, base);
loc_82CFA930:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82CFA94C"))) PPC_WEAK_FUNC(sub_82CFA94C);
PPC_FUNC_IMPL(__imp__sub_82CFA94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFA950"))) PPC_WEAK_FUNC(sub_82CFA950);
PPC_FUNC_IMPL(__imp__sub_82CFA950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CFA958;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CFA964;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfab10
	if (cr6.eq) goto loc_82CFAB10;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da27f0
	ctx.lr = 0x82CFA974;
	sub_82DA27F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CFA998;
	sub_82CBA100(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfa9ac
	if (cr6.eq) goto loc_82CFA9AC;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,43
	ctx.r4.u64 = ctx.r4.u64 | 43;
	// bl 0x82d29598
	ctx.lr = 0x82CFA9AC;
	sub_82D29598(ctx, base);
loc_82CFA9AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CFA9B8;
	sub_82CBA100(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfa9cc
	if (cr6.eq) goto loc_82CFA9CC;
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// ori r4,r4,220
	ctx.r4.u64 = ctx.r4.u64 | 220;
	// bl 0x82d29598
	ctx.lr = 0x82CFA9CC;
	sub_82D29598(ctx, base);
loc_82CFA9CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfa030
	ctx.lr = 0x82CFA9D4;
	sub_82CFA030(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CFA9E0;
	sub_82CBA100(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfa9f4
	if (cr6.eq) goto loc_82CFA9F4;
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// ori r4,r4,194
	ctx.r4.u64 = ctx.r4.u64 | 194;
	// bl 0x82d29598
	ctx.lr = 0x82CFA9F4;
	sub_82D29598(ctx, base);
loc_82CFA9F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfa0c8
	ctx.lr = 0x82CFA9FC;
	sub_82CFA0C8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CFAA08;
	sub_82CBA100(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfaa1c
	if (cr6.eq) goto loc_82CFAA1C;
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// ori r4,r4,181
	ctx.r4.u64 = ctx.r4.u64 | 181;
	// bl 0x82d29598
	ctx.lr = 0x82CFAA1C;
	sub_82D29598(ctx, base);
loc_82CFAA1C:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cba100
	ctx.lr = 0x82CFAA28;
	sub_82CBA100(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfaae0
	if (cr6.eq) goto loc_82CFAAE0;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r30,r11,-31334
	ctx.r30.s64 = ctx.r11.s64 + -31334;
	// addi r4,r30,-31
	ctx.r4.s64 = ctx.r30.s64 + -31;
	// bl 0x837b0c10
	ctx.lr = 0x82CFAA48;
	sub_837B0C10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CFAA54;
	sub_837B0C10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835d3138
	ctx.lr = 0x82CFAA5C;
	sub_835D3138(ctx, base);
	// clrldi r5,r3,32
	ctx.r5.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a6b9a8
	ctx.lr = 0x82CFAA6C;
	sub_82A6B9A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835d3140
	ctx.lr = 0x82CFAA74;
	sub_835D3140(ctx, base);
	// clrldi r5,r3,32
	ctx.r5.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a6b9a8
	ctx.lr = 0x82CFAA84;
	sub_82A6B9A8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cfaa98
	if (!cr6.lt) goto loc_82CFAA98;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
loc_82CFAA98:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cfaaac
	if (!cr6.lt) goto loc_82CFAAAC;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82CFAAAC:
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,148
	ctx.r4.u64 = ctx.r4.u64 | 148;
	// bl 0x82d042a8
	ctx.lr = 0x82CFAABC;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CFAAD0;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CFAAD8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82CFAAE0;
	sub_8387E8E0(ctx, base);
loc_82CFAAE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cf9a30
	ctx.lr = 0x82CFAAE8;
	sub_82CF9A30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfa178
	ctx.lr = 0x82CFAAF0;
	sub_82CFA178(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cfab10
	if (cr6.lt) goto loc_82CFAB10;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CFAB10;
	sub_825952B8(ctx, base);
loc_82CFAB10:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFAB18"))) PPC_WEAK_FUNC(sub_82CFAB18);
PPC_FUNC_IMPL(__imp__sub_82CFAB18) {
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
	// bl 0x82cf9c60
	ctx.lr = 0x82CFAB30;
	sub_82CF9C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfa950
	ctx.lr = 0x82CFAB38;
	sub_82CFA950(ctx, base);
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

__attribute__((alias("__imp__sub_82CFAB50"))) PPC_WEAK_FUNC(sub_82CFAB50);
PPC_FUNC_IMPL(__imp__sub_82CFAB50) {
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
	// bl 0x82d03ee8
	ctx.lr = 0x82CFAB6C;
	sub_82D03EE8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27808
	ctx.r9.s64 = ctx.r11.s64 + -27808;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,17076
	ctx.r30.s64 = ctx.r7.s64 + 17076;
	// lwz r4,17076(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17076);
	// bl 0x82d20ae0
	ctx.lr = 0x82CFAB98;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82CFABA8;
	sub_82D23390(ctx, base);
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

__attribute__((alias("__imp__sub_82CFABC4"))) PPC_WEAK_FUNC(sub_82CFABC4);
PPC_FUNC_IMPL(__imp__sub_82CFABC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFABC8"))) PPC_WEAK_FUNC(sub_82CFABC8);
PPC_FUNC_IMPL(__imp__sub_82CFABC8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,583
	ctx.r3.u64 = ctx.r3.u64 | 583;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CFABD4"))) PPC_WEAK_FUNC(sub_82CFABD4);
PPC_FUNC_IMPL(__imp__sub_82CFABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFABD8"))) PPC_WEAK_FUNC(sub_82CFABD8);
PPC_FUNC_IMPL(__imp__sub_82CFABD8) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CFAC0C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfac24
	if (cr6.eq) goto loc_82CFAC24;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cfab50
	ctx.lr = 0x82CFAC20;
	sub_82CFAB50(ctx, base);
	// b 0x82cfac28
	goto loc_82CFAC28;
loc_82CFAC24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CFAC28:
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

__attribute__((alias("__imp__sub_82CFAC40"))) PPC_WEAK_FUNC(sub_82CFAC40);
PPC_FUNC_IMPL(__imp__sub_82CFAC40) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27808
	ctx.r9.s64 = ctx.r11.s64 + -27808;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d03f48
	ctx.lr = 0x82CFAC78;
	sub_82D03F48(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cfac90
	if (cr6.eq) goto loc_82CFAC90;
	// bl 0x82416268
	ctx.lr = 0x82CFAC8C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CFAC90:
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

__attribute__((alias("__imp__sub_82CFACA8"))) PPC_WEAK_FUNC(sub_82CFACA8);
PPC_FUNC_IMPL(__imp__sub_82CFACA8) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r31,r4,100
	ctx.r31.s64 = ctx.r4.s64 + 100;
	// bne cr6,0x82cfacd4
	if (!cr6.eq) goto loc_82CFACD4;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82CFACD4:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// blt cr6,0x82cface8
	if (cr6.lt) goto loc_82CFACE8;
	// lwz r4,17224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17224);
	// b 0x82cfacf4
	goto loc_82CFACF4;
loc_82CFACE8:
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,17224
	ctx.r8.s64 = ctx.r11.s64 + 17224;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_82CFACF4:
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_82CFAD08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cfad08
	if (!cr6.eq) goto loc_82CFAD08;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CFAD2C;
	sub_8259CC28(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CFAD3C;
	sub_82A6A1B8(ctx, base);
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

__attribute__((alias("__imp__sub_82CFAD54"))) PPC_WEAK_FUNC(sub_82CFAD54);
PPC_FUNC_IMPL(__imp__sub_82CFAD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFAD58"))) PPC_WEAK_FUNC(sub_82CFAD58);
PPC_FUNC_IMPL(__imp__sub_82CFAD58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CFAD60;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// lis r4,562
	ctx.r4.s64 = 36831232;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// ori r4,r4,39
	ctx.r4.u64 = ctx.r4.u64 | 39;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CFAD94;
	sub_82D042A8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// bne cr6,0x82cfada4
	if (!cr6.eq) goto loc_82CFADA4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82CFADA4:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82CFADC4;
	sub_8259CB28(ctx, base);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// blt cr6,0x82cfadd8
	if (cr6.lt) goto loc_82CFADD8;
	// lwz r4,17224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17224);
	// b 0x82cfade4
	goto loc_82CFADE4;
loc_82CFADD8:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,17224
	ctx.r9.s64 = ctx.r11.s64 + 17224;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82CFADE4:
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_82CFADF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cfadf4
	if (!cr6.eq) goto loc_82CFADF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CFAE18;
	sub_8259CC28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFAE28;
	sub_82A69AD0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cfae48
	if (cr6.lt) goto loc_82CFAE48;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CFAE48;
	sub_825952B8(ctx, base);
loc_82CFAE48:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFAE50"))) PPC_WEAK_FUNC(sub_82CFAE50);
PPC_FUNC_IMPL(__imp__sub_82CFAE50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CFAE58;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r4,r4,287
	ctx.r4.u64 = ctx.r4.u64 | 287;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CFAE90;
	sub_82D042A8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// bne cr6,0x82cfaea0
	if (!cr6.eq) goto loc_82CFAEA0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82CFAEA0:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82CFAEC0;
	sub_8259CB28(ctx, base);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// blt cr6,0x82cfaed4
	if (cr6.lt) goto loc_82CFAED4;
	// lwz r4,17224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17224);
	// b 0x82cfaee0
	goto loc_82CFAEE0;
loc_82CFAED4:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,17224
	ctx.r9.s64 = ctx.r11.s64 + 17224;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82CFAEE0:
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_82CFAEF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cfaef0
	if (!cr6.eq) goto loc_82CFAEF0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CFAF14;
	sub_8259CC28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFAF24;
	sub_82A69AD0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cfaf44
	if (cr6.lt) goto loc_82CFAF44;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CFAF44;
	sub_825952B8(ctx, base);
loc_82CFAF44:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFAF4C"))) PPC_WEAK_FUNC(sub_82CFAF4C);
PPC_FUNC_IMPL(__imp__sub_82CFAF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFAF50"))) PPC_WEAK_FUNC(sub_82CFAF50);
PPC_FUNC_IMPL(__imp__sub_82CFAF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CFAF58;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,10
	ctx.r11.s64 = 655360;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// ori r10,r10,190
	ctx.r10.u64 = ctx.r10.u64 | 190;
	// lis r9,10
	ctx.r9.s64 = 655360;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r8,10
	ctx.r8.s64 = 655360;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r7,10
	ctx.r7.s64 = 655360;
	// lis r6,56
	ctx.r6.s64 = 3670016;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// lis r3,10
	ctx.r3.s64 = 655360;
	// lis r31,56
	ctx.r31.s64 = 3670016;
	// lis r30,10
	ctx.r30.s64 = 655360;
	// ori r9,r9,191
	ctx.r9.u64 = ctx.r9.u64 | 191;
	// ori r8,r8,144
	ctx.r8.u64 = ctx.r8.u64 | 144;
	// ori r7,r7,187
	ctx.r7.u64 = ctx.r7.u64 | 187;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// ori r6,r6,197
	ctx.r6.u64 = ctx.r6.u64 | 197;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// ori r5,r5,264
	ctx.r5.u64 = ctx.r5.u64 | 264;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// ori r3,r3,186
	ctx.r3.u64 = ctx.r3.u64 | 186;
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// ori r11,r31,196
	ctx.r11.u64 = ctx.r31.u64 | 196;
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// ori r10,r30,124
	ctx.r10.u64 = ctx.r30.u64 | 124;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// cmplwi cr6,r4,10
	cr6.compare<uint32_t>(ctx.r4.u32, 10, xer);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// bge cr6,0x82cfb058
	if (!cr6.lt) goto loc_82CFB058;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,17232
	ctx.r10.s64 = ctx.r11.s64 + 17232;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r30,r31,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82d19a68
	ctx.lr = 0x82CFAFF8;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2eca0
	ctx.lr = 0x82CFB000;
	sub_82D2ECA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfb058
	if (cr6.eq) goto loc_82CFB058;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28080
	ctx.r4.s64 = ctx.r11.s64 + -28080;
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82CFB020;
	sub_837B0C10(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r5,r31,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82a69a28
	ctx.lr = 0x82CFB034;
	sub_82A69A28(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CFB038:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cfaca8
	ctx.lr = 0x82CFB04C;
	sub_82CFACA8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82cfb038
	if (cr6.lt) goto loc_82CFB038;
loc_82CFB058:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFB060"))) PPC_WEAK_FUNC(sub_82CFB060);
PPC_FUNC_IMPL(__imp__sub_82CFB060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CFB068;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82a225d0
	ctx.lr = 0x82CFB084;
	sub_82A225D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8291ad98
	ctx.lr = 0x82CFB08C;
	sub_8291AD98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,10
	cr6.compare<uint32_t>(ctx.r27.u32, 10, xer);
	// bge cr6,0x82cfb2a8
	if (!cr6.lt) goto loc_82CFB2A8;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,17232
	ctx.r9.s64 = ctx.r11.s64 + 17232;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d19a68
	ctx.lr = 0x82CFB0B0;
	sub_82D19A68(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d2eca0
	ctx.lr = 0x82CFB0B8;
	sub_82D2ECA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfb2a8
	if (cr6.eq) goto loc_82CFB2A8;
	// cmplwi cr6,r27,9
	cr6.compare<uint32_t>(ctx.r27.u32, 9, xer);
	// bgt cr6,0x82cfb2a8
	if (cr6.gt) goto loc_82CFB2A8;
	// lis r12,-32048
	ctx.r12.s64 = -2100297728;
	// rlwinm r0,r27,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-20252
	ctx.r12.s64 = ctx.r12.s64 + -20252;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r27.u32) {
	case 0:
		goto loc_82CFB10C;
	case 1:
		goto loc_82CFB15C;
	case 2:
		goto loc_82CFB1A0;
	case 3:
		goto loc_82CFB1E4;
	case 4:
		goto loc_82CFB1EC;
	case 5:
		goto loc_82CFB1F4;
	case 6:
		goto loc_82CFB26C;
	case 7:
		goto loc_82CFB274;
	case 8:
		goto loc_82CFB27C;
	case 9:
		goto loc_82CFB284;
	default:
		return;
	}
	// lwz r22,-20212(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -20212);
	// lwz r22,-20132(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -20132);
	// lwz r22,-20064(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -20064);
	// lwz r22,-19996(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -19996);
	// lwz r22,-19988(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -19988);
	// lwz r22,-19980(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -19980);
	// lwz r22,-19860(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -19860);
	// lwz r22,-19852(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -19852);
	// lwz r22,-19844(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -19844);
	// lwz r22,-19836(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -19836);
loc_82CFB10C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a225d0
	ctx.lr = 0x82CFB114;
	sub_82A225D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x8291b4e0
	ctx.lr = 0x82CFB120;
	sub_8291B4E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,6472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6472);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,-23488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82cfad58
	ctx.lr = 0x82CFB154;
	sub_82CFAD58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CFB15C:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x82CFB16C;
	sub_829194E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x82CFB180;
	sub_829194E8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x82cfae50
	ctx.lr = 0x82CFB198;
	sub_82CFAE50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CFB1A0:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x82CFB1B0;
	sub_829194E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x82CFB1C4;
	sub_829194E8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x82cfae50
	ctx.lr = 0x82CFB1DC;
	sub_82CFAE50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CFB1E4:
	// li r4,51
	ctx.r4.s64 = 51;
	// b 0x82cfb288
	goto loc_82CFB288;
loc_82CFB1EC:
	// li r4,49
	ctx.r4.s64 = 49;
	// b 0x82cfb288
	goto loc_82CFB288;
loc_82CFB1F4:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x82CFB204;
	sub_829194E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfb250
	if (cr6.eq) goto loc_82CFB250;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x82CFB21C;
	sub_829194E8(ctx, base);
	// mulli r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 * 100;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x82CFB230;
	sub_829194E8(ctx, base);
	// divwu r6,r27,r3
	ctx.r6.u32 = PPCDivide(ctx.r27.u32, ctx.r3.u32);
	// twllei r3,0
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cfad58
	ctx.lr = 0x82CFB248;
	sub_82CFAD58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CFB250:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cfad58
	ctx.lr = 0x82CFB264;
	sub_82CFAD58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CFB26C:
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x82cfb288
	goto loc_82CFB288;
loc_82CFB274:
	// li r4,62
	ctx.r4.s64 = 62;
	// b 0x82cfb288
	goto loc_82CFB288;
loc_82CFB27C:
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x82cfb288
	goto loc_82CFB288;
loc_82CFB284:
	// li r4,111
	ctx.r4.s64 = 111;
loc_82CFB288:
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x82CFB294;
	sub_829194E8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cfaca8
	ctx.lr = 0x82CFB2A8;
	sub_82CFACA8(ctx, base);
loc_82CFB2A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFB2B0"))) PPC_WEAK_FUNC(sub_82CFB2B0);
PPC_FUNC_IMPL(__imp__sub_82CFB2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CFB2B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CFB2C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cfaf50
	ctx.lr = 0x82CFB2D0;
	sub_82CFAF50(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x82cfb2c4
	if (cr6.lt) goto loc_82CFB2C4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22560
	ctx.lr = 0x82CFB2E4;
	sub_82A22560(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x82CFB2F0;
	sub_82A22530(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a0db20
	ctx.lr = 0x82CFB2F8;
	sub_82A0DB20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a125c8
	ctx.lr = 0x82CFB304;
	sub_82A125C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a12748
	ctx.lr = 0x82CFB30C;
	sub_82A12748(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,260(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
loc_82CFB314:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CFB318:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cfb060
	ctx.lr = 0x82CFB32C;
	sub_82CFB060(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x82cfb318
	if (cr6.lt) goto loc_82CFB318;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82cfb314
	if (cr6.lt) goto loc_82CFB314;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a0cc80
	ctx.lr = 0x82CFB34C;
	sub_82A0CC80(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a0dc70
	ctx.lr = 0x82CFB354;
	sub_82A0DC70(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFB35C"))) PPC_WEAK_FUNC(sub_82CFB35C);
PPC_FUNC_IMPL(__imp__sub_82CFB35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFB360"))) PPC_WEAK_FUNC(sub_82CFB360);
PPC_FUNC_IMPL(__imp__sub_82CFB360) {
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
	// bl 0x82cfb2b0
	ctx.lr = 0x82CFB370;
	sub_82CFB2B0(ctx, base);
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
}

__attribute__((alias("__imp__sub_82CFB384"))) PPC_WEAK_FUNC(sub_82CFB384);
PPC_FUNC_IMPL(__imp__sub_82CFB384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFB388"))) PPC_WEAK_FUNC(sub_82CFB388);
PPC_FUNC_IMPL(__imp__sub_82CFB388) {
	PPC_FUNC_PROLOGUE();
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,577
	ctx.r3.u64 = ctx.r3.u64 | 577;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CFB394"))) PPC_WEAK_FUNC(sub_82CFB394);
PPC_FUNC_IMPL(__imp__sub_82CFB394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFB398"))) PPC_WEAK_FUNC(sub_82CFB398);
PPC_FUNC_IMPL(__imp__sub_82CFB398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CFB3A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-25600
	ctx.r9.s64 = ctx.r11.s64 + -25600;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CFB3D4:
	// lwzu r4,-28(r31)
	ea = -28 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cfb3ec
	if (cr6.eq) goto loc_82CFB3EC;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82CFB3EC;
	sub_825952B8(ctx, base);
loc_82CFB3EC:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bge 0x82cfb3d4
	if (!cr0.lt) goto loc_82CFB3D4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d03f48
	ctx.lr = 0x82CFB408;
	sub_82D03F48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFB410"))) PPC_WEAK_FUNC(sub_82CFB410);
PPC_FUNC_IMPL(__imp__sub_82CFB410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CFB418;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,112
	ctx.r31.s64 = ctx.r3.s64 + 112;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82CFB428:
	// stw r27,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r27.u32);
	// addi r28,r31,-16
	ctx.r28.s64 = ctx.r31.s64 + -16;
	// stw r27,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r27.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82cfb490
	if (cr0.eq) goto loc_82CFB490;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82CFB450:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cfb470
	if (cr6.eq) goto loc_82CFB470;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x83812c48
	ctx.lr = 0x82CFB468;
	sub_83812C48(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stwx r27,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u32);
loc_82CFB470:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x82cfb450
	if (cr6.lt) goto loc_82CFB450;
loc_82CFB490:
	// lwz r30,12(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r29,r28,12
	ctx.r29.s64 = ctx.r28.s64 + 12;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cfb4c4
	if (cr6.eq) goto loc_82CFB4C4;
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
	ctx.lr = 0x82CFB4BC;
	sub_831CE420(ctx, base);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82CFB4C4:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x82cfb428
	if (!cr0.eq) goto loc_82CFB428;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFB4DC"))) PPC_WEAK_FUNC(sub_82CFB4DC);
PPC_FUNC_IMPL(__imp__sub_82CFB4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFB4E0"))) PPC_WEAK_FUNC(sub_82CFB4E0);
PPC_FUNC_IMPL(__imp__sub_82CFB4E0) {
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
	// bl 0x82d03ee8
	ctx.lr = 0x82CFB4FC;
	sub_82D03EE8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-25600
	ctx.r9.s64 = ctx.r11.s64 + -25600;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r30,r7,17272
	ctx.r30.s64 = ctx.r7.s64 + 17272;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// lwz r4,17272(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17272);
	// bl 0x82d20ae0
	ctx.lr = 0x82CFB560;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82CFB570;
	sub_82D23390(ctx, base);
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

__attribute__((alias("__imp__sub_82CFB58C"))) PPC_WEAK_FUNC(sub_82CFB58C);
PPC_FUNC_IMPL(__imp__sub_82CFB58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFB590"))) PPC_WEAK_FUNC(sub_82CFB590);
PPC_FUNC_IMPL(__imp__sub_82CFB590) {
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
	// bl 0x82cfb398
	ctx.lr = 0x82CFB5B0;
	sub_82CFB398(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfb5c8
	if (cr6.eq) goto loc_82CFB5C8;
	// bl 0x82416268
	ctx.lr = 0x82CFB5C4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CFB5C8:
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

__attribute__((alias("__imp__sub_82CFB5E0"))) PPC_WEAK_FUNC(sub_82CFB5E0);
PPC_FUNC_IMPL(__imp__sub_82CFB5E0) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CFB614;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfb62c
	if (cr6.eq) goto loc_82CFB62C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cfb4e0
	ctx.lr = 0x82CFB628;
	sub_82CFB4E0(ctx, base);
	// b 0x82cfb630
	goto loc_82CFB630;
loc_82CFB62C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CFB630:
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

__attribute__((alias("__imp__sub_82CFB648"))) PPC_WEAK_FUNC(sub_82CFB648);
PPC_FUNC_IMPL(__imp__sub_82CFB648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CFB650;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,48(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// addi r10,r11,17432
	ctx.r10.s64 = ctx.r11.s64 + 17432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x83815208
	ctx.lr = 0x82CFB67C;
	sub_83815208(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r8,r9,17424
	ctx.r8.s64 = ctx.r9.s64 + 17424;
	// lwzx r4,r30,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// bl 0x83815208
	ctx.lr = 0x82CFB694;
	sub_83815208(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83812878
	ctx.lr = 0x82CFB6A0;
	sub_83812878(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83812808
	ctx.lr = 0x82CFB6AC;
	sub_83812808(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r27,15
	ctx.r27.s64 = 15;
	// lis r25,-31776
	ctx.r25.s64 = -2082471936;
	// li r24,2
	ctx.r24.s64 = 2;
	// addi r26,r11,-25700
	ctx.r26.s64 = ctx.r11.s64 + -25700;
loc_82CFB6DC:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831d0b08
	ctx.lr = 0x82CFB700;
	sub_831D0B08(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CFB708:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cfb708
	if (!cr6.eq) goto loc_82CFB708;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CFB730;
	sub_8259CC28(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cfb744
	if (!cr6.lt) goto loc_82CFB744;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82CFB744:
	// lwz r4,17280(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17280);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83812d60
	ctx.lr = 0x82CFB754;
	sub_83812D60(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cfb768
	if (!cr6.lt) goto loc_82CFB768;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CFB768:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83812a80
	ctx.lr = 0x82CFB770;
	sub_83812A80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfb7a4
	if (cr6.eq) goto loc_82CFB7A4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83812390
	ctx.lr = 0x82CFB78C;
	sub_83812390(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x82CFB798;
	sub_83812878(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x835977d8
	ctx.lr = 0x82CFB7A4;
	sub_835977D8(ctx, base);
loc_82CFB7A4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cfb7c0
	if (cr6.lt) goto loc_82CFB7C0;
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CFB7C0;
	sub_825952B8(ctx, base);
loc_82CFB7C0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(ctx.r28.u32, 32, xer);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// blt cr6,0x82cfb6dc
	if (cr6.lt) goto loc_82CFB6DC;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFB7E4"))) PPC_WEAK_FUNC(sub_82CFB7E4);
PPC_FUNC_IMPL(__imp__sub_82CFB7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFB7E8"))) PPC_WEAK_FUNC(sub_82CFB7E8);
PPC_FUNC_IMPL(__imp__sub_82CFB7E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CFB7F0;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r31,r3,108
	ctx.r31.s64 = ctx.r3.s64 + 108;
	// lfs f29,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
loc_82CFB814:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CFB81C;
	sub_82D19A68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// bl 0x82cfb648
	ctx.lr = 0x82CFB82C;
	sub_82CFB648(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a0db20
	ctx.lr = 0x82CFB834;
	sub_82A0DB20(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a22560
	ctx.lr = 0x82CFB83C;
	sub_82A22560(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a22530
	ctx.lr = 0x82CFB848;
	sub_82A22530(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a125c8
	ctx.lr = 0x82CFB854;
	sub_82A125C8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a12748
	ctx.lr = 0x82CFB85C;
	sub_82A12748(ctx, base);
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x82a225d0
	ctx.lr = 0x82CFB864;
	sub_82A225D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8291ad98
	ctx.lr = 0x82CFB86C;
	sub_8291AD98(ctx, base);
	// bl 0x829197d8
	ctx.lr = 0x82CFB870;
	sub_829197D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a0cc80
	ctx.lr = 0x82CFB87C;
	sub_82A0CC80(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a0dc70
	ctx.lr = 0x82CFB884;
	sub_82A0DC70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x825832e0
	ctx.lr = 0x82CFB890;
	sub_825832E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfb940
	if (cr6.eq) goto loc_82CFB940;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82CFB89C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291bc70
	ctx.lr = 0x82CFB8B0;
	sub_8291BC70(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lfs f30,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x83812778
	ctx.lr = 0x82CFB8C4;
	sub_83812778(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x83812788
	ctx.lr = 0x82CFB8D0;
	sub_83812788(ctx, base);
	// fsubs f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f12,f30
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bge cr6,0x82cfb928
	if (!cr6.lt) goto loc_82CFB928;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r29,r11,r27
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82cfb928
	if (cr6.eq) goto loc_82CFB928;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812878
	ctx.lr = 0x82CFB918;
	sub_83812878(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83812390
	ctx.lr = 0x82CFB928;
	sub_83812390(ctx, base);
loc_82CFB928:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bl 0x825832e0
	ctx.lr = 0x82CFB938;
	sub_825832E0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x82cfb89c
	if (cr6.lt) goto loc_82CFB89C;
loc_82CFB940:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(ctx.r26.u32, 2, xer);
	// blt cr6,0x82cfb814
	if (cr6.lt) goto loc_82CFB814;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFB964"))) PPC_WEAK_FUNC(sub_82CFB964);
PPC_FUNC_IMPL(__imp__sub_82CFB964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFB968"))) PPC_WEAK_FUNC(sub_82CFB968);
PPC_FUNC_IMPL(__imp__sub_82CFB968) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cfb7e8
	sub_82CFB7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFB96C"))) PPC_WEAK_FUNC(sub_82CFB96C);
PPC_FUNC_IMPL(__imp__sub_82CFB96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFB970"))) PPC_WEAK_FUNC(sub_82CFB970);
PPC_FUNC_IMPL(__imp__sub_82CFB970) {
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
	// bl 0x82d03ee8
	ctx.lr = 0x82CFB98C;
	sub_82D03EE8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23352
	ctx.r9.s64 = ctx.r11.s64 + -23352;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,17440
	ctx.r30.s64 = ctx.r7.s64 + 17440;
	// lwz r4,17440(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17440);
	// bl 0x82d20ae0
	ctx.lr = 0x82CFB9B8;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82CFB9C8;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d17e60
	ctx.lr = 0x82CFB9D4;
	sub_82D17E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83102db0
	ctx.lr = 0x82CFB9E0;
	sub_83102DB0(ctx, base);
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

__attribute__((alias("__imp__sub_82CFB9FC"))) PPC_WEAK_FUNC(sub_82CFB9FC);
PPC_FUNC_IMPL(__imp__sub_82CFB9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFBA00"))) PPC_WEAK_FUNC(sub_82CFBA00);
PPC_FUNC_IMPL(__imp__sub_82CFBA00) {
	PPC_FUNC_PROLOGUE();
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,576
	ctx.r3.u64 = ctx.r3.u64 | 576;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CFBA0C"))) PPC_WEAK_FUNC(sub_82CFBA0C);
PPC_FUNC_IMPL(__imp__sub_82CFBA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFBA10"))) PPC_WEAK_FUNC(sub_82CFBA10);
PPC_FUNC_IMPL(__imp__sub_82CFBA10) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CFBA44;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfba5c
	if (cr6.eq) goto loc_82CFBA5C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cfb970
	ctx.lr = 0x82CFBA58;
	sub_82CFB970(ctx, base);
	// b 0x82cfba60
	goto loc_82CFBA60;
loc_82CFBA5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CFBA60:
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

__attribute__((alias("__imp__sub_82CFBA78"))) PPC_WEAK_FUNC(sub_82CFBA78);
PPC_FUNC_IMPL(__imp__sub_82CFBA78) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23352
	ctx.r9.s64 = ctx.r11.s64 + -23352;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d03f48
	ctx.lr = 0x82CFBAB0;
	sub_82D03F48(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cfbac8
	if (cr6.eq) goto loc_82CFBAC8;
	// bl 0x82416268
	ctx.lr = 0x82CFBAC4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CFBAC8:
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

__attribute__((alias("__imp__sub_82CFBAE0"))) PPC_WEAK_FUNC(sub_82CFBAE0);
PPC_FUNC_IMPL(__imp__sub_82CFBAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82CFBAE8;
	__savegprlr_19(ctx, base);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r8,562
	ctx.r8.s64 = 36831232;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// li r20,2
	ctx.r20.s64 = 2;
	// li r24,15
	ctx.r24.s64 = 15;
	// ori r21,r8,39
	ctx.r21.u64 = ctx.r8.u64 | 39;
	// addi r28,r11,-23468
	ctx.r28.s64 = ctx.r11.s64 + -23468;
	// addi r23,r10,17588
	ctx.r23.s64 = ctx.r10.s64 + 17588;
	// addi r22,r9,17596
	ctx.r22.s64 = ctx.r9.s64 + 17596;
loc_82CFBB20:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a0db20
	ctx.lr = 0x82CFBB28;
	sub_82A0DB20(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a22560
	ctx.lr = 0x82CFBB30;
	sub_82A22560(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a22530
	ctx.lr = 0x82CFBB3C;
	sub_82A22530(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a125c8
	ctx.lr = 0x82CFBB48;
	sub_82A125C8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a12748
	ctx.lr = 0x82CFBB50;
	sub_82A12748(ctx, base);
	// lwz r3,324(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// bl 0x82a225d0
	ctx.lr = 0x82CFBB58;
	sub_82A225D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8291ad98
	ctx.lr = 0x82CFBB60;
	sub_8291AD98(ctx, base);
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8291a378
	ctx.lr = 0x82CFBB74;
	sub_8291A378(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a0cc80
	ctx.lr = 0x82CFBB7C;
	sub_82A0CC80(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a0dc70
	ctx.lr = 0x82CFBB84;
	sub_82A0DC70(ctx, base);
	// subfc r11,r20,r26
	xer.ca = ctx.r26.u32 >= ctx.r20.u32;
	ctx.r11.s64 = ctx.r26.s64 - ctx.r20.s64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 & ctx.r26.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r7,r23
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// bl 0x82d19a68
	ctx.lr = 0x82CFBBA0;
	sub_82D19A68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2eca0
	ctx.lr = 0x82CFBBA8;
	sub_82D2ECA0(ctx, base);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r25,r3,100
	ctx.r25.s64 = ctx.r3.s64 + 100;
loc_82CFBBB0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r4,r29,r22
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r22.u32);
	// bl 0x82d2e228
	ctx.lr = 0x82CFBBBC;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfbc9c
	if (cr6.eq) goto loc_82CFBC9C;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r11,r28,-84
	ctx.r11.s64 = ctx.r28.s64 + -84;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r30,r29,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
loc_82CFBBDC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bge cr6,0x82cfbbfc
	if (!cr6.lt) goto loc_82CFBBFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// blt cr6,0x82cfbbdc
	if (cr6.lt) goto loc_82CFBBDC;
	// b 0x82cfbc20
	goto loc_82CFBC20;
loc_82CFBBFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r28,-84
	ctx.r9.s64 = ctx.r28.s64 + -84;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CFBC20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CFBC20:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFBC38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfbc9c
	if (cr6.eq) goto loc_82CFBC9C;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CFBC60;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CFBC74;
	sub_82D291E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cfbc90
	if (cr6.lt) goto loc_82CFBC90;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CFBC90;
	sub_825952B8(ctx, base);
loc_82CFBC90:
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
loc_82CFBC9C:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,12
	cr6.compare<uint32_t>(ctx.r29.u32, 12, xer);
	// blt cr6,0x82cfbbb0
	if (cr6.lt) goto loc_82CFBBB0;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// blt cr6,0x82cfbb20
	if (cr6.lt) goto loc_82CFBB20;
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFBCBC"))) PPC_WEAK_FUNC(sub_82CFBCBC);
PPC_FUNC_IMPL(__imp__sub_82CFBCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFBCC0"))) PPC_WEAK_FUNC(sub_82CFBCC0);
PPC_FUNC_IMPL(__imp__sub_82CFBCC0) {
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
	// bl 0x82cfbae0
	ctx.lr = 0x82CFBCD0;
	sub_82CFBAE0(ctx, base);
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
}

__attribute__((alias("__imp__sub_82CFBCE4"))) PPC_WEAK_FUNC(sub_82CFBCE4);
PPC_FUNC_IMPL(__imp__sub_82CFBCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFBCE8"))) PPC_WEAK_FUNC(sub_82CFBCE8);
PPC_FUNC_IMPL(__imp__sub_82CFBCE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82cfbd88
	if (cr6.gt) goto loc_82CFBD88;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82cfbd20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFBD20;
	// bdzf 4*cr6+eq,0x82cfbd28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFBD28;
	// bdzf 4*cr6+eq,0x82cfbd40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFBD40;
	// bdzf 4*cr6+eq,0x82cfbd58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFBD58;
	// bdzf 4*cr6+eq,0x82cfbd60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFBD60;
	// bdzf 4*cr6+eq,0x82cfbd78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFBD78;
	// bne cr6,0x82cfbd80
	if (!cr6.eq) goto loc_82CFBD80;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CFBD20:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82CFBD28:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// blr 
	return;
loc_82CFBD40:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// blr 
	return;
loc_82CFBD58:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82CFBD60:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// addi r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 5;
	// blr 
	return;
loc_82CFBD78:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82CFBD80:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82CFBD88:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CFBD90"))) PPC_WEAK_FUNC(sub_82CFBD90);
PPC_FUNC_IMPL(__imp__sub_82CFBD90) {
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
	// bl 0x82d03ee8
	ctx.lr = 0x82CFBDAC;
	sub_82D03EE8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21064
	ctx.r9.s64 = ctx.r11.s64 + -21064;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,17608
	ctx.r30.s64 = ctx.r7.s64 + 17608;
	// lwz r4,17608(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17608);
	// bl 0x82d20ae0
	ctx.lr = 0x82CFBDD8;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82CFBDE8;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d17e60
	ctx.lr = 0x82CFBDF4;
	sub_82D17E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83102db0
	ctx.lr = 0x82CFBE00;
	sub_83102DB0(ctx, base);
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

__attribute__((alias("__imp__sub_82CFBE1C"))) PPC_WEAK_FUNC(sub_82CFBE1C);
PPC_FUNC_IMPL(__imp__sub_82CFBE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFBE20"))) PPC_WEAK_FUNC(sub_82CFBE20);
PPC_FUNC_IMPL(__imp__sub_82CFBE20) {
	PPC_FUNC_PROLOGUE();
	// lis r3,930
	ctx.r3.s64 = 60948480;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CFBE2C"))) PPC_WEAK_FUNC(sub_82CFBE2C);
PPC_FUNC_IMPL(__imp__sub_82CFBE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFBE30"))) PPC_WEAK_FUNC(sub_82CFBE30);
PPC_FUNC_IMPL(__imp__sub_82CFBE30) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CFBE64;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfbe7c
	if (cr6.eq) goto loc_82CFBE7C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cfbd90
	ctx.lr = 0x82CFBE78;
	sub_82CFBD90(ctx, base);
	// b 0x82cfbe80
	goto loc_82CFBE80;
loc_82CFBE7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CFBE80:
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

__attribute__((alias("__imp__sub_82CFBE98"))) PPC_WEAK_FUNC(sub_82CFBE98);
PPC_FUNC_IMPL(__imp__sub_82CFBE98) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21064
	ctx.r9.s64 = ctx.r11.s64 + -21064;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d03f48
	ctx.lr = 0x82CFBED0;
	sub_82D03F48(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cfbee8
	if (cr6.eq) goto loc_82CFBEE8;
	// bl 0x82416268
	ctx.lr = 0x82CFBEE4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CFBEE8:
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

__attribute__((alias("__imp__sub_82CFBF00"))) PPC_WEAK_FUNC(sub_82CFBF00);
PPC_FUNC_IMPL(__imp__sub_82CFBF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CFBF08;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-20772
	ctx.r11.s64 = ctx.r11.s64 + -20772;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r24,10
	ctx.r24.s64 = 10;
	// li r26,15
	ctx.r26.s64 = 15;
	// addi r27,r11,-21376
	ctx.r27.s64 = ctx.r11.s64 + -21376;
	// addi r25,r10,17756
	ctx.r25.s64 = ctx.r10.s64 + 17756;
loc_82CFBF3C:
	// subfc r11,r24,r31
	xer.ca = ctx.r31.u32 >= ctx.r24.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r24.s64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 & ctx.r31.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r7,r25
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// bl 0x82d19a68
	ctx.lr = 0x82CFBF58;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2eca0
	ctx.lr = 0x82CFBF60;
	sub_82D2ECA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82cfbf70
	if (!cr6.eq) goto loc_82CFBF70;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82CFBF70:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82CFBF8C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzu r5,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82a69a28
	ctx.lr = 0x82CFBF9C;
	sub_82A69A28(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x82cfbf3c
	if (cr6.lt) goto loc_82CFBF3C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFBFB0"))) PPC_WEAK_FUNC(sub_82CFBFB0);
PPC_FUNC_IMPL(__imp__sub_82CFBFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CFBFB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,9
	cr6.compare<uint32_t>(ctx.r5.u32, 9, xer);
	// bgt cr6,0x82cfc1f8
	if (cr6.gt) goto loc_82CFC1F8;
	// lis r12,-32048
	ctx.r12.s64 = -2100297728;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16404
	ctx.r12.s64 = ctx.r12.s64 + -16404;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u32) {
	case 0:
		goto loc_82CFC014;
	case 1:
		goto loc_82CFC1F8;
	case 2:
		goto loc_82CFC1F8;
	case 3:
		goto loc_82CFC118;
	case 4:
		goto loc_82CFC118;
	case 5:
		goto loc_82CFC1F8;
	case 6:
		goto loc_82CFC118;
	case 7:
		goto loc_82CFC1F8;
	case 8:
		goto loc_82CFC1F8;
	case 9:
		goto loc_82CFC0AC;
	default:
		return;
	}
	// lwz r22,-16364(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -16364);
	// lwz r22,-15880(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -15880);
	// lwz r22,-15880(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -15880);
	// lwz r22,-16104(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -16104);
	// lwz r22,-16104(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -16104);
	// lwz r22,-15880(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -15880);
	// lwz r22,-16104(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -16104);
	// lwz r22,-15880(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -15880);
	// lwz r22,-15880(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -15880);
	// lwz r22,-16212(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -16212);
loc_82CFC014:
	// addi r11,r30,50
	ctx.r11.s64 = ctx.r30.s64 + 50;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82cfc040
	if (!cr6.eq) goto loc_82CFC040;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,13508
	ctx.r4.s64 = ctx.r11.s64 + 13508;
	// bl 0x8259d6c0
	ctx.lr = 0x82CFC038;
	sub_8259D6C0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CFC040:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// addi r3,r1,161
	ctx.r3.s64 = ctx.r1.s64 + 161;
	// bl 0x831cdcf0
	ctx.lr = 0x82CFC058;
	sub_831CDCF0(ctx, base);
	// clrldi r10,r29,32
	ctx.r10.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// addi r9,r30,5
	ctx.r9.s64 = ctx.r30.s64 + 5;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfsx f11,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r7,-20724
	ctx.r5.s64 = ctx.r7.s64 + -20724;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fdivs f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x831d0b08
	ctx.lr = 0x82CFC098;
	sub_831D0B08(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82CFC0A4;
	sub_8259D6C0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CFC0AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfsx f0,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d042a8
	ctx.lr = 0x82CFC0E4;
	sub_82D042A8(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82cfc0f8
	if (!cr6.lt) goto loc_82CFC0F8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82CFC0F8:
	// lis r4,54
	ctx.r4.s64 = 3538944;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,38
	ctx.r4.u64 = ctx.r4.u64 | 38;
	// bl 0x82d042a8
	ctx.lr = 0x82CFC108;
	sub_82D042A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CFC110;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CFC118:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// bl 0x82cfbce8
	ctx.lr = 0x82CFC13C;
	sub_82CFBCE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r11,11
	ctx.r9.s64 = ctx.r11.s64 + 11;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82CFC164;
	sub_82D042A8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfbce8
	ctx.lr = 0x82CFC174;
	sub_82CFBCE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r7,r11,11
	ctx.r7.s64 = ctx.r11.s64 + 11;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82CFC19C;
	sub_82D042A8(ctx, base);
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r4,-20728
	ctx.r4.s64 = ctx.r4.s64 + -20728;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a6b900
	ctx.lr = 0x82CFC1B0;
	sub_82A6B900(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-20732
	ctx.r5.s64 = ctx.r11.s64 + -20732;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292a568
	ctx.lr = 0x82CFC1C4;
	sub_8292A568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82CFC1D8;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82CFC1E0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82CFC1E8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CFC1F0;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CFC1F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfbce8
	ctx.lr = 0x82CFC208;
	sub_82CFBCE8(ctx, base);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82CFC230;
	sub_82D042A8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFC238"))) PPC_WEAK_FUNC(sub_82CFC238);
PPC_FUNC_IMPL(__imp__sub_82CFC238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82CFC240;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,-22864
	ctx.r10.s64 = ctx.r11.s64 + -22864;
	// stb r28,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r28.u8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// bl 0x825b4da8
	ctx.lr = 0x82CFC27C;
	sub_825B4DA8(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cfc298
	if (!cr6.eq) goto loc_82CFC298;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_82CFC298:
	// clrlwi r20,r31,24
	ctx.r20.u64 = ctx.r31.u32 & 0xFF;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x82cfc394
	if (cr6.eq) goto loc_82CFC394;
	// clrlwi r21,r30,24
	ctx.r21.u64 = ctx.r30.u32 & 0xFF;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// li r24,2
	ctx.r24.s64 = 2;
loc_82CFC2B8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a225d0
	ctx.lr = 0x82CFC2C0;
	sub_82A225D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8291b070
	ctx.lr = 0x82CFC2C8;
	sub_8291B070(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, xer);
	// bne cr6,0x82cfc378
	if (!cr6.eq) goto loc_82CFC378;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
	// bl 0x82595718
	ctx.lr = 0x82CFC2F4;
	sub_82595718(ctx, base);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r28,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r28.u8);
	// stb r28,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r28.u8);
	// beq 0x82cfc328
	if (cr0.eq) goto loc_82CFC328;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
loc_82CFC328:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a80e60
	ctx.lr = 0x82CFC338;
	sub_82A80E60(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82a225d0
	ctx.lr = 0x82CFC348;
	sub_82A225D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8291adc0
	ctx.lr = 0x82CFC354;
	sub_8291ADC0(ctx, base);
	// lbz r11,4147(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4147);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cfc378
	if (!cr6.eq) goto loc_82CFC378;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cfc238
	ctx.lr = 0x82CFC378;
	sub_82CFC238(ctx, base);
loc_82CFC378:
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r20
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r20.u32, xer);
	// blt cr6,0x82cfc2b8
	if (cr6.lt) goto loc_82CFC2B8;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82CFC394:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lbz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// subfe r6,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,-16664
	ctx.r5.s64 = ctx.r7.s64 + -16664;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// beq cr6,0x82cfc3d8
	if (cr6.eq) goto loc_82CFC3D8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cfc3d8
	if (cr6.eq) goto loc_82CFC3D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8353f3b8
	ctx.lr = 0x82CFC3D0;
	sub_8353F3B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
loc_82CFC3D8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r28,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r28.u8);
	// beq cr6,0x82cfc3f0
	if (cr6.eq) goto loc_82CFC3F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8353f3b8
	ctx.lr = 0x82CFC3F0;
	sub_8353F3B8(ctx, base);
loc_82CFC3F0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFC3F8"))) PPC_WEAK_FUNC(sub_82CFC3F8);
PPC_FUNC_IMPL(__imp__sub_82CFC3F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CFC400;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r10,r11,-22864
	ctx.r10.s64 = ctx.r11.s64 + -22864;
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// bl 0x825b4da8
	ctx.lr = 0x82CFC438;
	sub_825B4DA8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cfc454
	if (!cr6.eq) goto loc_82CFC454;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_82CFC454:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a225d0
	ctx.lr = 0x82CFC45C;
	sub_82A225D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8291adc0
	ctx.lr = 0x82CFC468;
	sub_8291ADC0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,4148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4148);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f13,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82cfc4a8
	if (cr6.lt) goto loc_82CFC4A8;
	// addi r11,r30,50
	ctx.r11.s64 = ctx.r30.s64 + 50;
	// addi r10,r30,5
	ctx.r10.s64 = ctx.r30.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lfsx f13,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f12,r10,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
loc_82CFC4A8:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lfs f0,4736(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4736);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,-20716
	ctx.r10.s64 = ctx.r8.s64 + -20716;
	// add r29,r9,r31
	ctx.r29.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lfsx f13,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r10,-4
	ctx.r28.s64 = ctx.r10.s64 + -4;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f12,r11,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// li r30,13
	ctx.r30.s64 = 13;
loc_82CFC4DC:
	// li r5,5
	ctx.r5.s64 = 5;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8291a868
	ctx.lr = 0x82CFC4F0;
	sub_8291A868(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stwu r11,12(r29)
	ea = 12 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// bne 0x82cfc4dc
	if (!cr0.eq) goto loc_82CFC4DC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r6,r10,-16664
	ctx.r6.s64 = ctx.r10.s64 + -16664;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// and r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 & ctx.r11.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// beq cr6,0x82cfc54c
	if (cr6.eq) goto loc_82CFC54C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cfc54c
	if (cr6.eq) goto loc_82CFC54C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f3b8
	ctx.lr = 0x82CFC544;
	sub_8353F3B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
loc_82CFC54C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// beq cr6,0x82cfc564
	if (cr6.eq) goto loc_82CFC564;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f3b8
	ctx.lr = 0x82CFC564;
	sub_8353F3B8(ctx, base);
loc_82CFC564:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFC56C"))) PPC_WEAK_FUNC(sub_82CFC56C);
PPC_FUNC_IMPL(__imp__sub_82CFC56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFC570"))) PPC_WEAK_FUNC(sub_82CFC570);
PPC_FUNC_IMPL(__imp__sub_82CFC570) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82cfc5d4
	if (cr6.eq) goto loc_82CFC5D4;
loc_82CFC5A0:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x82cfc5bc
	if (!cr6.eq) goto loc_82CFC5BC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfc3f8
	ctx.lr = 0x82CFC5BC;
	sub_82CFC3F8(ctx, base);
loc_82CFC5BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x82CFC5C4;
	sub_8330EE50(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cfc5a0
	if (!cr6.eq) goto loc_82CFC5A0;
loc_82CFC5D4:
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

__attribute__((alias("__imp__sub_82CFC5EC"))) PPC_WEAK_FUNC(sub_82CFC5EC);
PPC_FUNC_IMPL(__imp__sub_82CFC5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFC5F0"))) PPC_WEAK_FUNC(sub_82CFC5F0);
PPC_FUNC_IMPL(__imp__sub_82CFC5F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CFC5F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CFC604;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,176
	ctx.r5.s64 = 176;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r4,r10,6
	ctx.r4.s64 = ctx.r10.s64 + 393216;
	// addi r4,r4,-30316
	ctx.r4.s64 = ctx.r4.s64 + -30316;
	// bl 0x831ce980
	ctx.lr = 0x82CFC620;
	sub_831CE980(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82b64ac0
	ctx.lr = 0x82CFC62C;
	sub_82B64AC0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// ble cr6,0x82cfc904
	if (!cr6.gt) goto loc_82CFC904;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r10,r11,-22864
	ctx.r10.s64 = ctx.r11.s64 + -22864;
	// stb r25,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r25.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// bl 0x825b4da8
	ctx.lr = 0x82CFC660;
	sub_825B4DA8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cfc67c
	if (!cr6.eq) goto loc_82CFC67C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_82CFC67C:
	// bl 0x82a225d0
	ctx.lr = 0x82CFC680;
	sub_82A225D0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// ori r7,r10,18048
	ctx.r7.u64 = ctx.r10.u64 | 18048;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r5,-31763
	ctx.r5.s64 = -2081619968;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// lbzx r26,r3,r7
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r3,-3564(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82CFC6B0;
	sub_82A0C738(ctx, base);
	// addi r28,r24,4
	ctx.r28.s64 = ctx.r24.s64 + 4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// li r23,2
	ctx.r23.s64 = 2;
loc_82CFC6C0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x82cfc6d4
	if (cr6.lt) goto loc_82CFC6D4;
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x82cfc6f4
	goto loc_82CFC6F4;
loc_82CFC6D4:
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// blt cr6,0x82cfc6e4
	if (cr6.lt) goto loc_82CFC6E4;
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x82cfc6f4
	goto loc_82CFC6F4;
loc_82CFC6E4:
	// addi r10,r1,259
	ctx.r10.s64 = ctx.r1.s64 + 259;
	// mulli r9,r11,11
	ctx.r9.s64 = ctx.r11.s64 * 11;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
loc_82CFC6F4:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x82cfc70c
	if (cr6.lt) goto loc_82CFC70C;
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x82cfc71c
	goto loc_82CFC71C;
loc_82CFC70C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r1,253
	ctx.r7.s64 = ctx.r1.s64 + 253;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r6,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
loc_82CFC71C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r4,r9
	ctx.r30.u64 = ctx.r4.u64 & ctx.r9.u64;
	// blt cr6,0x82cfc740
	if (cr6.lt) goto loc_82CFC740;
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x82cfc750
	goto loc_82CFC750;
loc_82CFC740:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,254
	ctx.r9.s64 = ctx.r1.s64 + 254;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
loc_82CFC750:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82cfc760
	if (!cr6.eq) goto loc_82CFC760;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CFC760:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x82cfc770
	if (cr6.lt) goto loc_82CFC770;
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82cfc780
	goto loc_82CFC780;
loc_82CFC770:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,255
	ctx.r9.s64 = ctx.r1.s64 + 255;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
loc_82CFC780:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82cfc790
	if (!cr6.eq) goto loc_82CFC790;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82CFC790:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16188
	ctx.lr = 0x82CFC79C;
	sub_82A16188(ctx, base);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x82CFC7B4;
	sub_82595718(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r25,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r25.u8);
	// stb r25,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r25.u8);
	// beq 0x82cfc7e8
	if (cr0.eq) goto loc_82CFC7E8;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82CFC7E8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a80e60
	ctx.lr = 0x82CFC7F8;
	sub_82A80E60(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82cfc238
	ctx.lr = 0x82CFC80C;
	sub_82CFC238(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// blt cr6,0x82cfc6c0
	if (cr6.lt) goto loc_82CFC6C0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82CFC81C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x82cfc830
	if (cr6.lt) goto loc_82CFC830;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82cfc888
	goto loc_82CFC888;
loc_82CFC830:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82cfc84c
	if (cr6.lt) goto loc_82CFC84C;
	// bne cr6,0x82cfc850
	if (!cr6.eq) goto loc_82CFC850;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// b 0x82cfc850
	goto loc_82CFC850;
loc_82CFC84C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82CFC850:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r1,157
	ctx.r10.s64 = ctx.r1.s64 + 157;
loc_82CFC858:
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82cfc870
	if (!cr6.eq) goto loc_82CFC870;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
loc_82CFC870:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r1,157
	ctx.r10.s64 = ctx.r1.s64 + 157;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82cfc858
	if (cr6.lt) goto loc_82CFC858;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82CFC888:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82cfc89c
	if (!cr6.lt) goto loc_82CFC89C;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// beq cr6,0x82cfc8a8
	if (cr6.eq) goto loc_82CFC8A8;
loc_82CFC89C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82cfc570
	ctx.lr = 0x82CFC8A8;
	sub_82CFC570(ctx, base);
loc_82CFC8A8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82cfc81c
	if (cr6.lt) goto loc_82CFC81C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r10,-16664
	ctx.r9.s64 = ctx.r10.s64 + -16664;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82cfc8ec
	if (cr6.eq) goto loc_82CFC8EC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cfc8ec
	if (cr6.eq) goto loc_82CFC8EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f3b8
	ctx.lr = 0x82CFC8E4;
	sub_8353F3B8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
loc_82CFC8EC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r25,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r25.u8);
	// beq cr6,0x82cfc904
	if (cr6.eq) goto loc_82CFC904;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f3b8
	ctx.lr = 0x82CFC904;
	sub_8353F3B8(ctx, base);
loc_82CFC904:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFC90C"))) PPC_WEAK_FUNC(sub_82CFC90C);
PPC_FUNC_IMPL(__imp__sub_82CFC90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFC910"))) PPC_WEAK_FUNC(sub_82CFC910);
PPC_FUNC_IMPL(__imp__sub_82CFC910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82CFC918;
	__savegprlr_17(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x8381b9d0
	ctx.lr = 0x82CFC934;
	sub_8381B9D0(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82CFC94C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82cfc94c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CFC94C;
	// li r5,156
	ctx.r5.s64 = 156;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x831cdcf0
	ctx.lr = 0x82CFC964;
	sub_831CDCF0(ctx, base);
	// addi r11,r1,392
	ctx.r11.s64 = ctx.r1.s64 + 392;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// bl 0x82cfc5f0
	ctx.lr = 0x82CFC97C;
	sub_82CFC5F0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// add r24,r30,r11
	ctx.r24.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// li r20,10
	ctx.r20.s64 = 10;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r22,-1
	ctx.r22.s64 = -1;
	// li r17,2
	ctx.r17.s64 = 2;
	// addi r19,r11,-21272
	ctx.r19.s64 = ctx.r11.s64 + -21272;
	// addi r21,r10,17756
	ctx.r21.s64 = ctx.r10.s64 + 17756;
	// addi r26,r9,17796
	ctx.r26.s64 = ctx.r9.s64 + 17796;
loc_82CFC9B0:
	// subfc r11,r20,r25
	xer.ca = ctx.r25.u32 >= ctx.r20.u32;
	ctx.r11.s64 = ctx.r25.s64 - ctx.r20.s64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 & ctx.r25.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r7,r21
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r21.u32);
	// bl 0x82d19a68
	ctx.lr = 0x82CFC9CC;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2eca0
	ctx.lr = 0x82CFC9D4;
	sub_82D2ECA0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82CFC9DC:
	// add r11,r24,r29
	ctx.r11.u64 = ctx.r24.u64 + ctx.r29.u64;
	// lwz r30,200(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// lwzx r28,r10,r26
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82cfca28
	if (cr6.eq) goto loc_82CFCA28;
loc_82CFCA08:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x82cfca50
	if (cr6.eq) goto loc_82CFCA50;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8330ee50
	ctx.lr = 0x82CFCA1C;
	sub_8330EE50(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x82cfca08
	if (!cr6.eq) goto loc_82CFCA08;
loc_82CFCA28:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82CFCA2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfca58
	if (cr6.eq) goto loc_82CFCA58;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82cfbfb0
	ctx.lr = 0x82CFCA4C;
	sub_82CFBFB0(ctx, base);
	// b 0x82cfca68
	goto loc_82CFCA68;
loc_82CFCA50:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82cfca2c
	goto loc_82CFCA2C;
loc_82CFCA58:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82CFCA68;
	sub_8259CC28(ctx, base);
loc_82CFCA68:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// addi r30,r23,100
	ctx.r30.s64 = ctx.r23.s64 + 100;
	// bne cr6,0x82cfca78
	if (!cr6.eq) goto loc_82CFCA78;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82CFCA78:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82CFCA98;
	sub_8259CB28(ctx, base);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_82CFCAA8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cfcaa8
	if (!cr6.eq) goto loc_82CFCAA8;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CFCAD0;
	sub_8259CC28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFCAE0;
	sub_82A69AD0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cfcafc
	if (cr6.lt) goto loc_82CFCAFC;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CFCAFC;
	sub_825952B8(ctx, base);
loc_82CFCAFC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82cfc9dc
	if (cr6.lt) goto loc_82CFC9DC;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r25,10
	cr6.compare<uint32_t>(ctx.r25.u32, 10, xer);
	// blt cr6,0x82cfc9b0
	if (cr6.lt) goto loc_82CFC9B0;
	// lwz r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x82CFCB34;
	sub_82D0E798(ctx, base);
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x825952b8
	ctx.lr = 0x82CFCB44;
	sub_825952B8(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFCB4C"))) PPC_WEAK_FUNC(sub_82CFCB4C);
PPC_FUNC_IMPL(__imp__sub_82CFCB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFCB50"))) PPC_WEAK_FUNC(sub_82CFCB50);
PPC_FUNC_IMPL(__imp__sub_82CFCB50) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82cfbf00
	ctx.lr = 0x82CFCB6C;
	sub_82CFBF00(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CFCB70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cfc910
	ctx.lr = 0x82CFCB7C;
	sub_82CFC910(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82cfcb70
	if (cr6.lt) goto loc_82CFCB70;
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

__attribute__((alias("__imp__sub_82CFCBA4"))) PPC_WEAK_FUNC(sub_82CFCBA4);
PPC_FUNC_IMPL(__imp__sub_82CFCBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFCBA8"))) PPC_WEAK_FUNC(sub_82CFCBA8);
PPC_FUNC_IMPL(__imp__sub_82CFCBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,207
	ctx.r3.u64 = ctx.r3.u64 | 207;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CFCBB4"))) PPC_WEAK_FUNC(sub_82CFCBB4);
PPC_FUNC_IMPL(__imp__sub_82CFCBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFCBB8"))) PPC_WEAK_FUNC(sub_82CFCBB8);
PPC_FUNC_IMPL(__imp__sub_82CFCBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CFCBC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4456(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// cmpwi cr6,r9,10
	cr6.compare<int32_t>(ctx.r9.s32, 10, xer);
	// bne cr6,0x82cfcbf0
	if (!cr6.eq) goto loc_82CFCBF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2008(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2008, ctx.r11.u8);
	// b 0x82cfcbf4
	goto loc_82CFCBF4;
loc_82CFCBF0:
	// stb r31,2008(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2008, ctx.r31.u8);
loc_82CFCBF4:
	// addi r28,r29,96
	ctx.r28.s64 = ctx.r29.s64 + 96;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82CFCBFC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbe500
	ctx.lr = 0x82CFCC08;
	sub_82CBE500(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,956
	ctx.r30.s64 = ctx.r30.s64 + 956;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82cfcbfc
	if (cr6.lt) goto loc_82CFCBFC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,1052(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1052);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82cfcc2c
	if (!cr6.lt) goto loc_82CFCC2C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82CFCC2C:
	// li r7,22
	ctx.r7.s64 = 22;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82CFCC44;
	sub_82D20F50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFCC50"))) PPC_WEAK_FUNC(sub_82CFCC50);
PPC_FUNC_IMPL(__imp__sub_82CFCC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CFCC58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18376
	ctx.r9.s64 = ctx.r11.s64 + -18376;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,2008
	ctx.r31.s64 = ctx.r3.s64 + 2008;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CFCC80:
	// addi r31,r31,-956
	ctx.r31.s64 = ctx.r31.s64 + -956;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b986c8
	ctx.lr = 0x82CFCC8C;
	sub_82B986C8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x82cfcc80
	if (!cr0.lt) goto loc_82CFCC80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d03f48
	ctx.lr = 0x82CFCC9C;
	sub_82D03F48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFCCA4"))) PPC_WEAK_FUNC(sub_82CFCCA4);
PPC_FUNC_IMPL(__imp__sub_82CFCCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFCCA8"))) PPC_WEAK_FUNC(sub_82CFCCA8);
PPC_FUNC_IMPL(__imp__sub_82CFCCA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CFCCB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d03ee8
	ctx.lr = 0x82CFCCBC;
	sub_82D03EE8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18376
	ctx.r9.s64 = ctx.r11.s64 + -18376;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CFCCDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b98728
	ctx.lr = 0x82CFCCE4;
	sub_82B98728(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,956
	ctx.r29.s64 = ctx.r29.s64 + 956;
	// bge 0x82cfccdc
	if (!cr0.lt) goto loc_82CFCCDC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// stb r11,2008(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2008, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,17824
	ctx.r30.s64 = ctx.r10.s64 + 17824;
	// lwz r4,17824(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17824);
	// bl 0x82d20ae0
	ctx.lr = 0x82CFCD0C;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82CFCD1C;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82CFCD28;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFCD34"))) PPC_WEAK_FUNC(sub_82CFCD34);
PPC_FUNC_IMPL(__imp__sub_82CFCD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFCD38"))) PPC_WEAK_FUNC(sub_82CFCD38);
PPC_FUNC_IMPL(__imp__sub_82CFCD38) {
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
	// bl 0x82cfcc50
	ctx.lr = 0x82CFCD58;
	sub_82CFCC50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfcd70
	if (cr6.eq) goto loc_82CFCD70;
	// bl 0x82416268
	ctx.lr = 0x82CFCD6C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CFCD70:
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

__attribute__((alias("__imp__sub_82CFCD88"))) PPC_WEAK_FUNC(sub_82CFCD88);
PPC_FUNC_IMPL(__imp__sub_82CFCD88) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2012
	ctx.r4.s64 = 2012;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CFCDBC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfcdd4
	if (cr6.eq) goto loc_82CFCDD4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cfcca8
	ctx.lr = 0x82CFCDD0;
	sub_82CFCCA8(ctx, base);
	// b 0x82cfcdd8
	goto loc_82CFCDD8;
loc_82CFCDD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CFCDD8:
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

__attribute__((alias("__imp__sub_82CFCDF0"))) PPC_WEAK_FUNC(sub_82CFCDF0);
PPC_FUNC_IMPL(__imp__sub_82CFCDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CFCDF8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// clrlwi r9,r5,31
	ctx.r9.u64 = ctx.r5.u32 & 0x1;
	// li r11,2
	ctx.r11.s64 = 2;
	// mulli r9,r9,956
	ctx.r9.s64 = ctx.r9.s64 * 956;
	// lwz r10,-3564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r8,292(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r4,r5,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r7,5180(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5180);
	// addi r3,r10,96
	ctx.r3.s64 = ctx.r10.s64 + 96;
	// lwz r6,96(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// subfc r5,r11,r7
	xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r5.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lwz r26,4456(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4456);
	// eqv r11,r11,r7
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r7.u64);
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r25,r9,31
	ctx.r25.u64 = ctx.r9.u32 & 0x1;
	// bge cr6,0x82cfd00c
	if (!cr6.lt) goto loc_82CFD00C;
	// bl 0x82cbe450
	ctx.lr = 0x82CFCE58;
	sub_82CBE450(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// bne cr6,0x82cfce6c
	if (!cr6.eq) goto loc_82CFCE6C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CFCE6C:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lwz r24,8(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-18472
	ctx.r30.s64 = ctx.r11.s64 + -18472;
	// addi r4,r30,-192
	ctx.r4.s64 = ctx.r30.s64 + -192;
	// bl 0x837b0c10
	ctx.lr = 0x82CFCE84;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CFCE94;
	sub_82A6A1B8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// bne cr6,0x82cfcea4
	if (!cr6.eq) goto loc_82CFCEA4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CFCEA4:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82CFCED0;
	sub_8259CB28(ctx, base);
	// addi r4,r30,-172
	ctx.r4.s64 = ctx.r30.s64 + -172;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82CFCEDC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFCEEC;
	sub_82A69AD0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f1,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x82cfcf30
	if (cr6.eq) goto loc_82CFCF30;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cfcf30
	if (!cr6.eq) goto loc_82CFCF30;
	// cmpwi cr6,r26,10
	cr6.compare<int32_t>(ctx.r26.s32, 10, xer);
	// bne cr6,0x82cfcf30
	if (!cr6.eq) goto loc_82CFCF30;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r30,-148
	ctx.r5.s64 = ctx.r30.s64 + -148;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831d0b08
	ctx.lr = 0x82CFCF2C;
	sub_831D0B08(ctx, base);
	// b 0x82cfcf40
	goto loc_82CFCF40;
loc_82CFCF30:
	// addi r5,r30,-152
	ctx.r5.s64 = ctx.r30.s64 + -152;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831d0b08
	ctx.lr = 0x82CFCF40;
	sub_831D0B08(ctx, base);
loc_82CFCF40:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// bne cr6,0x82cfcf50
	if (!cr6.eq) goto loc_82CFCF50;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CFCF50:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82CFCF5C;
	sub_837B0C10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r30,-140
	ctx.r4.s64 = ctx.r30.s64 + -140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CFCF6C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFCF7C;
	sub_82A69AD0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFCF94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,2008(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2008);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cfcfe8
	if (cr6.eq) goto loc_82CFCFE8;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cfcfe8
	if (!cr6.eq) goto loc_82CFCFE8;
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfcfe8
	if (cr6.eq) goto loc_82CFCFE8;
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82cfcfe8
	if (!cr6.gt) goto loc_82CFCFE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFCFDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82CFCFE8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFD000;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82CFD00C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// bne cr6,0x82cfd01c
	if (!cr6.eq) goto loc_82CFD01C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CFD01C:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,-18472
	ctx.r30.s64 = ctx.r11.s64 + -18472;
	// addi r4,r30,-2142
	ctx.r4.s64 = ctx.r30.s64 + -2142;
	// bl 0x837b0c10
	ctx.lr = 0x82CFD030;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CFD040;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFD050;
	sub_82A69AD0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// bne cr6,0x82cfd060
	if (!cr6.eq) goto loc_82CFD060;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CFD060:
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82CFD06C;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CFD07C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFD08C;
	sub_82A69AD0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// bne cr6,0x82cfd09c
	if (!cr6.eq) goto loc_82CFD09C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CFD09C:
	// addi r4,r30,-2141
	ctx.r4.s64 = ctx.r30.s64 + -2141;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82CFD0A8;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CFD0B8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFD0C8;
	sub_82A69AD0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFD0E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CFD0F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFD104"))) PPC_WEAK_FUNC(sub_82CFD104);
PPC_FUNC_IMPL(__imp__sub_82CFD104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFD108"))) PPC_WEAK_FUNC(sub_82CFD108);
PPC_FUNC_IMPL(__imp__sub_82CFD108) {
	PPC_FUNC_PROLOGUE();
	// lis r3,10
	ctx.r3.s64 = 655360;
	// ori r3,r3,276
	ctx.r3.u64 = ctx.r3.u64 | 276;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CFD114"))) PPC_WEAK_FUNC(sub_82CFD114);
PPC_FUNC_IMPL(__imp__sub_82CFD114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFD118"))) PPC_WEAK_FUNC(sub_82CFD118);
PPC_FUNC_IMPL(__imp__sub_82CFD118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82CFD120;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lis r9,5
	ctx.r9.s64 = 327680;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// ori r24,r11,15963
	ctx.r24.u64 = ctx.r11.u64 | 15963;
	// ori r19,r10,17564
	ctx.r19.u64 = ctx.r10.u64 | 17564;
	// ori r20,r9,18048
	ctx.r20.u64 = ctx.r9.u64 | 18048;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_82CFD158:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a225d0
	ctx.lr = 0x82CFD160;
	sub_82A225D0(ctx, base);
	// lbzx r11,r3,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r24.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// bge cr6,0x82cfd188
	if (!cr6.lt) goto loc_82CFD188;
	// clrlwi r4,r25,24
	ctx.r4.u64 = ctx.r25.u32 & 0xFF;
	// bl 0x8291aff8
	ctx.lr = 0x82CFD184;
	sub_8291AFF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82CFD188:
	// lbzx r11,r31,r19
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r19.u32);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, xer);
	// bge cr6,0x82cfd1a4
	if (!cr6.lt) goto loc_82CFD1A4;
	// clrlwi r4,r22,24
	ctx.r4.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291b030
	ctx.lr = 0x82CFD1A0;
	sub_8291B030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CFD1A4:
	// lbzx r11,r31,r20
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r20.u32);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, xer);
	// bge cr6,0x82cfd1c0
	if (!cr6.lt) goto loc_82CFD1C0;
	// clrlwi r4,r21,24
	ctx.r4.u64 = ctx.r21.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291b070
	ctx.lr = 0x82CFD1BC;
	sub_8291B070(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82CFD1C0:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cfd1e8
	if (cr6.eq) goto loc_82CFD1E8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82cfd1e4
	if (cr6.eq) goto loc_82CFD1E4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82cfd1e8
	if (cr6.gt) goto loc_82CFD1E8;
loc_82CFD1E4:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82CFD1E8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82cfd20c
	if (cr6.eq) goto loc_82CFD20C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cfd208
	if (cr6.eq) goto loc_82CFD208;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82cfd20c
	if (cr6.gt) goto loc_82CFD20C;
loc_82CFD208:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_82CFD20C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cfd294
	if (cr6.eq) goto loc_82CFD294;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82cfd23c
	if (cr6.lt) goto loc_82CFD23C;
	// beq cr6,0x82cfd234
	if (cr6.eq) goto loc_82CFD234;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82cfd240
	if (!cr6.lt) goto loc_82CFD240;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// b 0x82cfd240
	goto loc_82CFD240;
loc_82CFD234:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// b 0x82cfd240
	goto loc_82CFD240;
loc_82CFD23C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82CFD240:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r11,r18
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, xer);
	// bne cr6,0x82cfd158
	if (!cr6.eq) goto loc_82CFD158;
	// lwz r10,11096(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11096);
	// li r11,10
	ctx.r11.s64 = 10;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// add r8,r10,r27
	ctx.r8.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// stw r26,96(r8)
	PPC_STORE_U32(ctx.r8.u32 + 96, ctx.r26.u32);
	// lwz r7,11096(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11096);
	// mulli r11,r7,44
	ctx.r11.s64 = ctx.r7.s64 * 44;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
loc_82CFD278:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82cfd278
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CFD278;
	// lwz r11,11096(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11096);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11096(r27)
	PPC_STORE_U32(ctx.r27.u32 + 11096, ctx.r11.u32);
	// b 0x82cfd158
	goto loc_82CFD158;
loc_82CFD294:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFD29C"))) PPC_WEAK_FUNC(sub_82CFD29C);
PPC_FUNC_IMPL(__imp__sub_82CFD29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFD2A0"))) PPC_WEAK_FUNC(sub_82CFD2A0);
PPC_FUNC_IMPL(__imp__sub_82CFD2A0) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15864
	ctx.r9.s64 = ctx.r11.s64 + -15864;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,11100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11100);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cfd2e8
	if (cr6.eq) goto loc_82CFD2E8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CFD2E8;
	sub_825952B8(ctx, base);
loc_82CFD2E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,11100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11100, ctx.r11.u32);
	// stw r11,11104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11104, ctx.r11.u32);
	// stw r11,11108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11108, ctx.r11.u32);
	// bl 0x82d03f48
	ctx.lr = 0x82CFD300;
	sub_82D03F48(ctx, base);
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

__attribute__((alias("__imp__sub_82CFD314"))) PPC_WEAK_FUNC(sub_82CFD314);
PPC_FUNC_IMPL(__imp__sub_82CFD314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFD318"))) PPC_WEAK_FUNC(sub_82CFD318);
PPC_FUNC_IMPL(__imp__sub_82CFD318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CFD320;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d03ee8
	ctx.lr = 0x82CFD32C;
	sub_82D03EE8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15864
	ctx.r9.s64 = ctx.r11.s64 + -15864;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r30,249
	ctx.r30.s64 = 249;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_82CFD350:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8291b340
	ctx.lr = 0x82CFD358;
	sub_8291B340(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
	// bge 0x82cfd350
	if (!cr0.lt) goto loc_82CFD350;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// stw r11,11096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11096, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,11100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11100, ctx.r11.u32);
	// addi r30,r10,18068
	ctx.r30.s64 = ctx.r10.s64 + 18068;
	// stw r11,11104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11104, ctx.r11.u32);
	// stw r11,11108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11108, ctx.r11.u32);
	// lwz r4,18068(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18068);
	// bl 0x82d20ae0
	ctx.lr = 0x82CFD38C;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82CFD39C;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFD3A8"))) PPC_WEAK_FUNC(sub_82CFD3A8);
PPC_FUNC_IMPL(__imp__sub_82CFD3A8) {
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
	// bl 0x82cfd2a0
	ctx.lr = 0x82CFD3C8;
	sub_82CFD2A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfd3e0
	if (cr6.eq) goto loc_82CFD3E0;
	// bl 0x82416268
	ctx.lr = 0x82CFD3DC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CFD3E0:
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

__attribute__((alias("__imp__sub_82CFD3F8"))) PPC_WEAK_FUNC(sub_82CFD3F8);
PPC_FUNC_IMPL(__imp__sub_82CFD3F8) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11116
	ctx.r4.s64 = 11116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CFD42C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfd444
	if (cr6.eq) goto loc_82CFD444;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cfd318
	ctx.lr = 0x82CFD440;
	sub_82CFD318(ctx, base);
	// b 0x82cfd448
	goto loc_82CFD448;
loc_82CFD444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CFD448:
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

__attribute__((alias("__imp__sub_82CFD460"))) PPC_WEAK_FUNC(sub_82CFD460);
PPC_FUNC_IMPL(__imp__sub_82CFD460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x82cfd490
	if (!cr6.lt) goto loc_82CFD490;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82CFD490:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x82cfd4c0
	if (cr6.lt) goto loc_82CFD4C0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CFD4C0:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x82cfd4cc
	if (!cr6.lt) goto loc_82CFD4CC;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_82CFD4CC:
	// b 0x82ad5e38
	sub_82AD5E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFD4D0"))) PPC_WEAK_FUNC(sub_82CFD4D0);
PPC_FUNC_IMPL(__imp__sub_82CFD4D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CFD4D4"))) PPC_WEAK_FUNC(sub_82CFD4D4);
PPC_FUNC_IMPL(__imp__sub_82CFD4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFD4D8"))) PPC_WEAK_FUNC(sub_82CFD4D8);
PPC_FUNC_IMPL(__imp__sub_82CFD4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CFD4E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfd548
	if (cr6.eq) goto loc_82CFD548;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r30,r10,-16096
	ctx.r30.s64 = ctx.r10.s64 + -16096;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CFD51C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82CFD52C;
	sub_837B0C10(ctx, base);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,9
	ctx.r5.u64 = ctx.r5.u64 | 9;
	// bl 0x82a69a28
	ctx.lr = 0x82CFD540;
	sub_82A69A28(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82CFD548:
	// bl 0x831156e8
	ctx.lr = 0x82CFD54C;
	sub_831156E8(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r24,r28,4
	ctx.r24.s64 = ctx.r28.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addis r23,r10,5
	ctx.r23.s64 = ctx.r10.s64 + 327680;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r23,r23,14904
	ctx.r23.s64 = ctx.r23.s64 + 14904;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83123ba8
	ctx.lr = 0x82CFD574;
	sub_83123BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x837b0c10
	ctx.lr = 0x82CFD584;
	sub_837B0C10(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r25,r31,100
	ctx.r25.s64 = ctx.r31.s64 + 100;
	// bne cr6,0x82cfd598
	if (!cr6.eq) goto loc_82CFD598;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_82CFD598:
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82CFD5C0;
	sub_8259CB28(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r30,r11,-16096
	ctx.r30.s64 = ctx.r11.s64 + -16096;
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// bl 0x837b0c10
	ctx.lr = 0x82CFD5D4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFD5E4;
	sub_82A69AD0(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// blt cr6,0x82cfd610
	if (cr6.lt) goto loc_82CFD610;
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// bctrl 
	ctx.lr = 0x82CFD60C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cfd680
	goto loc_82CFD680;
loc_82CFD610:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// bctrl 
	ctx.lr = 0x82CFD618;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x83123ba8
	ctx.lr = 0x82CFD630;
	sub_83123BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8259d6c0
	ctx.lr = 0x82CFD640;
	sub_8259D6C0(ctx, base);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x82CFD664;
	sub_8259CB28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CFD670;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFD680;
	sub_82A69AD0(ctx, base);
loc_82CFD680:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cfd6a0
	if (cr6.lt) goto loc_82CFD6A0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CFD6A0;
	sub_825952B8(ctx, base);
loc_82CFD6A0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFD6A8"))) PPC_WEAK_FUNC(sub_82CFD6A8);
PPC_FUNC_IMPL(__imp__sub_82CFD6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CFD6B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 24);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,-16036
	ctx.r28.s64 = ctx.r11.s64 + -16036;
	// addi r4,r28,-44
	ctx.r4.s64 = ctx.r28.s64 + -44;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bne cr6,0x82cfd6ec
	if (!cr6.eq) goto loc_82CFD6EC;
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
loc_82CFD6EC:
	// bctrl 
	ctx.lr = 0x82CFD6F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82CFD6F4;
	sub_831156E8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addis r3,r10,5
	ctx.r3.s64 = ctx.r10.s64 + 327680;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123ba8
	ctx.lr = 0x82CFD714;
	sub_83123BA8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_82CFD730:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cfd730
	if (!cr6.eq) goto loc_82CFD730;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CFD754;
	sub_8259CC28(ctx, base);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x82CFD778;
	sub_8259CB28(ctx, base);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x82CFD794;
	sub_8259CC28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFD7A4;
	sub_82A69AD0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cfd7c4
	if (cr6.lt) goto loc_82CFD7C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CFD7C4;
	sub_825952B8(ctx, base);
loc_82CFD7C4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFD7CC"))) PPC_WEAK_FUNC(sub_82CFD7CC);
PPC_FUNC_IMPL(__imp__sub_82CFD7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFD7D0"))) PPC_WEAK_FUNC(sub_82CFD7D0);
PPC_FUNC_IMPL(__imp__sub_82CFD7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CFD7D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r27,r11,-15980
	ctx.r27.s64 = ctx.r11.s64 + -15980;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CFD808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82CFD80C;
	sub_831156E8(ctx, base);
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addis r25,r7,5
	ctx.r25.s64 = ctx.r7.s64 + 327680;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r26,r28,4
	ctx.r26.s64 = ctx.r28.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r25,r25,14904
	ctx.r25.s64 = ctx.r25.s64 + 14904;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83123ba8
	ctx.lr = 0x82CFD848;
	sub_83123BA8(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CFD850:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cfd850
	if (!cr6.eq) goto loc_82CFD850;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CFD874;
	sub_8259CC28(ctx, base);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x82CFD89C;
	sub_8259CB28(ctx, base);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x82CFD8B8;
	sub_8259CC28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFD8C8;
	sub_82A69AD0(ctx, base);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x83123ba8
	ctx.lr = 0x82CFD8E0;
	sub_83123BA8(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CFD8E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cfd8e8
	if (!cr6.eq) goto loc_82CFD8E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CFD90C;
	sub_8259CC28(ctx, base);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82CFD92C;
	sub_8259CB28(ctx, base);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82CFD948;
	sub_8259CC28(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFD958;
	sub_82A69AD0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cfd978
	if (cr6.lt) goto loc_82CFD978;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CFD978;
	sub_825952B8(ctx, base);
loc_82CFD978:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFD980"))) PPC_WEAK_FUNC(sub_82CFD980);
PPC_FUNC_IMPL(__imp__sub_82CFD980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CFD988;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// lbz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x82cfda14
	if (cr6.eq) goto loc_82CFDA14;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x82cfd9f8
	if (cr6.eq) goto loc_82CFD9F8;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// beq cr6,0x82cfd9e0
	if (cr6.eq) goto loc_82CFD9E0;
	// cmplwi cr6,r9,45
	cr6.compare<uint32_t>(ctx.r9.u32, 45, xer);
	// blt cr6,0x82cfda34
	if (cr6.lt) goto loc_82CFDA34;
	// li r10,45
	ctx.r10.s64 = 45;
	// b 0x82cfda28
	goto loc_82CFDA28;
loc_82CFD9E0:
	// li r10,105
	ctx.r10.s64 = 105;
	// cmplwi cr6,r9,15
	cr6.compare<uint32_t>(ctx.r9.u32, 15, xer);
	// blt cr6,0x82cfda34
	if (cr6.lt) goto loc_82CFDA34;
	// addi r11,r9,241
	ctx.r11.s64 = ctx.r9.s64 + 241;
	// li r10,120
	ctx.r10.s64 = 120;
	// b 0x82cfda2c
	goto loc_82CFDA2C;
loc_82CFD9F8:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r10,90
	ctx.r10.s64 = 90;
	// cmplwi cr6,r9,15
	cr6.compare<uint32_t>(ctx.r9.u32, 15, xer);
	// blt cr6,0x82cfda34
	if (cr6.lt) goto loc_82CFDA34;
	// addi r11,r9,241
	ctx.r11.s64 = ctx.r9.s64 + 241;
	// li r10,105
	ctx.r10.s64 = 105;
	// b 0x82cfda2c
	goto loc_82CFDA2C;
loc_82CFDA14:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r10,45
	ctx.r10.s64 = 45;
	// cmplwi cr6,r9,45
	cr6.compare<uint32_t>(ctx.r9.u32, 45, xer);
	// blt cr6,0x82cfda34
	if (cr6.lt) goto loc_82CFDA34;
	// li r10,90
	ctx.r10.s64 = 90;
loc_82CFDA28:
	// addi r11,r9,211
	ctx.r11.s64 = ctx.r9.s64 + 211;
loc_82CFDA2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82CFDA34:
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// lis r4,10
	ctx.r4.s64 = 655360;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82cfda5c
	if (cr6.eq) goto loc_82CFDA5C;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// ori r4,r4,189
	ctx.r4.u64 = ctx.r4.u64 | 189;
	// bl 0x82d042a8
	ctx.lr = 0x82CFDA58;
	sub_82D042A8(ctx, base);
	// b 0x82cfda70
	goto loc_82CFDA70;
loc_82CFDA5C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r4,r4,148
	ctx.r4.u64 = ctx.r4.u64 | 148;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82CFDA70;
	sub_82D042A8(ctx, base);
loc_82CFDA70:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// bne cr6,0x82cfda80
	if (!cr6.eq) goto loc_82CFDA80;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82CFDA80:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82CFDAA0;
	sub_8259CB28(ctx, base);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r11,-15964
	ctx.r4.s64 = ctx.r11.s64 + -15964;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x82CFDAC0;
	sub_8259CC28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFDAD0;
	sub_82A69AD0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cfdaf0
	if (cr6.lt) goto loc_82CFDAF0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CFDAF0;
	sub_825952B8(ctx, base);
loc_82CFDAF0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFDAF8"))) PPC_WEAK_FUNC(sub_82CFDAF8);
PPC_FUNC_IMPL(__imp__sub_82CFDAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CFDB00;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r5,44
	ctx.r11.s64 = ctx.r5.s64 * 44;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,96
	ctx.r28.s64 = ctx.r11.s64 + 96;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// beq cr6,0x82cfdbb8
	if (cr6.eq) goto loc_82CFDBB8;
	// addi r29,r11,-16196
	ctx.r29.s64 = ctx.r11.s64 + -16196;
	// addi r4,r29,-148
	ctx.r4.s64 = ctx.r29.s64 + -148;
	// bctrl 
	ctx.lr = 0x82CFDB4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82cfdb5c
	if (!cr6.eq) goto loc_82CFDB5C;
	// addi r4,r29,-132
	ctx.r4.s64 = ctx.r29.s64 + -132;
	// b 0x82cfdb74
	goto loc_82CFDB74;
loc_82CFDB5C:
	// lwz r11,11096(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11096);
	// addi r4,r29,-120
	ctx.r4.s64 = ctx.r29.s64 + -120;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82cfdb74
	if (cr6.eq) goto loc_82CFDB74;
	// addi r4,r29,-108
	ctx.r4.s64 = ctx.r29.s64 + -108;
loc_82CFDB74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFDB8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r29,-92
	ctx.r4.s64 = ctx.r29.s64 + -92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x837b0c10
	ctx.lr = 0x82CFDBA0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CFDBB0;
	sub_82A69A28(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CFDBB8:
	// addi r30,r11,-16196
	ctx.r30.s64 = ctx.r11.s64 + -16196;
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// bctrl 
	ctx.lr = 0x82CFDBC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CFDBE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82cfdc08
	if (cr6.eq) goto loc_82CFDC08;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
loc_82CFDC08:
	// bctrl 
	ctx.lr = 0x82CFDC0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cfd980
	ctx.lr = 0x82CFDC20;
	sub_82CFD980(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// beq cr6,0x82cfdc38
	if (cr6.eq) goto loc_82CFDC38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82CFDC38:
	// bl 0x82d2e228
	ctx.lr = 0x82CFDC3C;
	sub_82D2E228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfdc94
	if (cr6.eq) goto loc_82CFDC94;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82cfdc88
	if (cr6.lt) goto loc_82CFDC88;
	// beq cr6,0x82cfdc74
	if (cr6.eq) goto loc_82CFDC74;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82cfdc94
	if (!cr6.lt) goto loc_82CFDC94;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cfd7d0
	ctx.lr = 0x82CFDC6C;
	sub_82CFD7D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CFDC74:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cfd6a8
	ctx.lr = 0x82CFDC80;
	sub_82CFD6A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CFDC88:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cfd4d8
	ctx.lr = 0x82CFDC94;
	sub_82CFD4D8(ctx, base);
loc_82CFDC94:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFDC9C"))) PPC_WEAK_FUNC(sub_82CFDC9C);
PPC_FUNC_IMPL(__imp__sub_82CFDC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFDCA0"))) PPC_WEAK_FUNC(sub_82CFDCA0);
PPC_FUNC_IMPL(__imp__sub_82CFDCA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CFDCA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,18076
	ctx.r29.s64 = ctx.r11.s64 + 18076;
loc_82CFDCBC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d19a68
	ctx.lr = 0x82CFDCC8;
	sub_82D19A68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2eca0
	ctx.lr = 0x82CFDCD0;
	sub_82D2ECA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfdda4
	if (cr6.eq) goto loc_82CFDDA4;
	// lwz r10,11104(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11104);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r28,11100
	ctx.r31.s64 = ctx.r28.s64 + 11100;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82cfdd08
	if (!cr6.lt) goto loc_82CFDD08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82cfdd0c
	if (!cr6.gt) goto loc_82CFDD0C;
loc_82CFDD08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CFDD0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfdd60
	if (cr6.eq) goto loc_82CFDD60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// srawi r30,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 2;
	// bne cr6,0x82cfdd40
	if (!cr6.eq) goto loc_82CFDD40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfd460
	ctx.lr = 0x82CFDD40;
	sub_82CFD460(ctx, base);
loc_82CFDD40:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfdd88
	if (cr6.eq) goto loc_82CFDD88;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82cfdd88
	goto loc_82CFDD88;
loc_82CFDD60:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82cfdd78
	if (!cr6.eq) goto loc_82CFDD78;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfd460
	ctx.lr = 0x82CFDD78;
	sub_82CFD460(ctx, base);
loc_82CFDD78:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfdd88
	if (cr6.eq) goto loc_82CFDD88;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82CFDD88:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r27,20
	cr6.compare<uint32_t>(ctx.r27.u32, 20, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt cr6,0x82cfdcbc
	if (cr6.lt) goto loc_82CFDCBC;
loc_82CFDDA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFDDAC"))) PPC_WEAK_FUNC(sub_82CFDDAC);
PPC_FUNC_IMPL(__imp__sub_82CFDDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFDDB0"))) PPC_WEAK_FUNC(sub_82CFDDB0);
PPC_FUNC_IMPL(__imp__sub_82CFDDB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CFDDB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-22864
	ctx.r10.s64 = ctx.r11.s64 + -22864;
	// stw r30,11096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11096, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x825b4da8
	ctx.lr = 0x82CFDDEC;
	sub_825B4DA8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cfde08
	if (!cr6.eq) goto loc_82CFDE08;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_82CFDE08:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-24692
	ctx.r9.s64 = ctx.r10.s64 + -24692;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x825ab6c8
	ctx.lr = 0x82CFDE30;
	sub_825AB6C8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cfde4c
	if (!cr6.eq) goto loc_82CFDE4C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82CFDE4C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r29,4456(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-24712
	ctx.r9.s64 = ctx.r10.s64 + -24712;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82CFDE68;
	sub_825E0CF8(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cfde8c
	if (cr6.eq) goto loc_82CFDE8C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82CFDE88;
	sub_8353F3B8(ctx, base);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_82CFDE8C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82cfdeb8
	if (cr6.lt) goto loc_82CFDEB8;
	// lwz r11,11096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11096);
	// lis r10,300
	ctx.r10.s64 = 19660800;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r8,r10,533
	ctx.r8.u64 = ctx.r10.u64 | 533;
	// stw r8,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r8.u32);
	// lwz r11,11096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11096);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,11096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11096, ctx.r7.u32);
loc_82CFDEB8:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// blt cr6,0x82cfded0
	if (cr6.lt) goto loc_82CFDED0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfd118
	ctx.lr = 0x82CFDED0;
	sub_82CFD118(ctx, base);
loc_82CFDED0:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x82cfdefc
	if (cr6.lt) goto loc_82CFDEFC;
	// lwz r11,11096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11096);
	// lis r10,11
	ctx.r10.s64 = 720896;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r8,r10,12
	ctx.r8.u64 = ctx.r10.u64 | 12;
	// stw r8,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r8.u32);
	// lwz r11,11096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11096);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,11096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11096, ctx.r7.u32);
loc_82CFDEFC:
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// blt cr6,0x82cfdf14
	if (cr6.lt) goto loc_82CFDF14;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfd118
	ctx.lr = 0x82CFDF14;
	sub_82CFD118(ctx, base);
loc_82CFDF14:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a225d0
	ctx.lr = 0x82CFDF1C;
	sub_82A225D0(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r30,r11,8024
	ctx.r30.u64 = ctx.r11.u64 | 8024;
	// lbzx r10,r3,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r30.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cfdf70
	if (!cr6.eq) goto loc_82CFDF70;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a225d0
	ctx.lr = 0x82CFDF3C;
	sub_82A225D0(ctx, base);
	// lbzx r11,r3,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cfdf70
	if (!cr6.eq) goto loc_82CFDF70;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// beq cr6,0x82cfdf70
	if (cr6.eq) goto loc_82CFDF70;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// beq cr6,0x82cfdf64
	if (cr6.eq) goto loc_82CFDF64;
	// cmpwi cr6,r29,9
	cr6.compare<int32_t>(ctx.r29.s32, 9, xer);
	// bne cr6,0x82cfe024
	if (!cr6.eq) goto loc_82CFE024;
loc_82CFDF64:
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// ori r8,r10,367
	ctx.r8.u64 = ctx.r10.u64 | 367;
	// b 0x82cfe008
	goto loc_82CFE008;
loc_82CFDF70:
	// lwz r11,11096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11096);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(ctx.r29.s32, 5, xer);
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r8,r10,367
	ctx.r8.u64 = ctx.r10.u64 | 367;
	// stw r8,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r8.u32);
	// lwz r11,11096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11096);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,11096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11096, ctx.r7.u32);
	// blt cr6,0x82cfdfac
	if (cr6.lt) goto loc_82CFDFAC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfd118
	ctx.lr = 0x82CFDFAC;
	sub_82CFD118(ctx, base);
loc_82CFDFAC:
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x82cfdfd8
	if (cr6.lt) goto loc_82CFDFD8;
	// lwz r11,11096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11096);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r8,r10,269
	ctx.r8.u64 = ctx.r10.u64 | 269;
	// stw r8,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r8.u32);
	// lwz r11,11096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11096);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,11096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11096, ctx.r7.u32);
loc_82CFDFD8:
	// cmpwi cr6,r29,7
	cr6.compare<int32_t>(ctx.r29.s32, 7, xer);
	// blt cr6,0x82cfdff0
	if (cr6.lt) goto loc_82CFDFF0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfd118
	ctx.lr = 0x82CFDFF0;
	sub_82CFD118(ctx, base);
loc_82CFDFF0:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// beq cr6,0x82cfe000
	if (cr6.eq) goto loc_82CFE000;
	// cmpwi cr6,r29,9
	cr6.compare<int32_t>(ctx.r29.s32, 9, xer);
	// bne cr6,0x82cfe024
	if (!cr6.eq) goto loc_82CFE024;
loc_82CFE000:
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// ori r8,r10,301
	ctx.r8.u64 = ctx.r10.u64 | 301;
loc_82CFE008:
	// lwz r11,11096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11096);
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r8.u32);
	// lwz r11,11096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11096);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,11096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11096, ctx.r7.u32);
loc_82CFE024:
	// cmpwi cr6,r29,10
	cr6.compare<int32_t>(ctx.r29.s32, 10, xer);
	// blt cr6,0x82cfe050
	if (cr6.lt) goto loc_82CFE050;
	// lwz r11,11096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11096);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r8,r10,372
	ctx.r8.u64 = ctx.r10.u64 | 372;
	// stw r8,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r8.u32);
	// lwz r11,11096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11096);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,11096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11096, ctx.r7.u32);
loc_82CFE050:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-16652
	ctx.r7.s64 = ctx.r10.s64 + -16652;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// bl 0x825c3358
	ctx.lr = 0x82CFE078;
	sub_825C3358(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFE080"))) PPC_WEAK_FUNC(sub_82CFE080);
PPC_FUNC_IMPL(__imp__sub_82CFE080) {
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
	// bl 0x82cfdca0
	ctx.lr = 0x82CFE098;
	sub_82CFDCA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfddb0
	ctx.lr = 0x82CFE0A0;
	sub_82CFDDB0(ctx, base);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,11096(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11096);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82CFE0B8;
	sub_82D20F50(ctx, base);
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

__attribute__((alias("__imp__sub_82CFE0D0"))) PPC_WEAK_FUNC(sub_82CFE0D0);
PPC_FUNC_IMPL(__imp__sub_82CFE0D0) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82d46378
	ctx.lr = 0x82CFE0E4;
	sub_82D46378(ctx, base);
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
}

__attribute__((alias("__imp__sub_82CFE0F8"))) PPC_WEAK_FUNC(sub_82CFE0F8);
PPC_FUNC_IMPL(__imp__sub_82CFE0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CFE100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82CFE118;
	sub_82D253F8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-14568
	ctx.r9.s64 = ctx.r11.s64 + -14568;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// stb r7,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r7.u8);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// addi r29,r6,18236
	ctx.r29.s64 = ctx.r6.s64 + 18236;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r5,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r5.u8);
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r11,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r11.u8);
	// lwz r4,18236(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 18236);
	// bl 0x82d20ae0
	ctx.lr = 0x82CFE184;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82CFE194;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d17e60
	ctx.lr = 0x82CFE1A0;
	sub_82D17E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFE1AC"))) PPC_WEAK_FUNC(sub_82CFE1AC);
PPC_FUNC_IMPL(__imp__sub_82CFE1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFE1B0"))) PPC_WEAK_FUNC(sub_82CFE1B0);
PPC_FUNC_IMPL(__imp__sub_82CFE1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CFE1B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cfe1e4
	if (cr6.lt) goto loc_82CFE1E4;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CFE1E4;
	sub_825952B8(ctx, base);
loc_82CFE1E4:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r31,r28,100
	ctx.r31.s64 = ctx.r28.s64 + 100;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// lwz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cfe218
	if (cr6.lt) goto loc_82CFE218;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CFE218;
	sub_825952B8(ctx, base);
loc_82CFE218:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bl 0x82d25548
	ctx.lr = 0x82CFE22C;
	sub_82D25548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFE234"))) PPC_WEAK_FUNC(sub_82CFE234);
PPC_FUNC_IMPL(__imp__sub_82CFE234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFE238"))) PPC_WEAK_FUNC(sub_82CFE238);
PPC_FUNC_IMPL(__imp__sub_82CFE238) {
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
	// bl 0x82cfe1b0
	ctx.lr = 0x82CFE258;
	sub_82CFE1B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfe270
	if (cr6.eq) goto loc_82CFE270;
	// bl 0x82416268
	ctx.lr = 0x82CFE26C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CFE270:
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

__attribute__((alias("__imp__sub_82CFE288"))) PPC_WEAK_FUNC(sub_82CFE288);
PPC_FUNC_IMPL(__imp__sub_82CFE288) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,156
	ctx.r4.s64 = 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CFE2B4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfe2e4
	if (cr6.eq) goto loc_82CFE2E4;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,-14944
	ctx.r4.s64 = ctx.r11.s64 + -14944;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82cfe0f8
	ctx.lr = 0x82CFE2D0;
	sub_82CFE0F8(ctx, base);
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
loc_82CFE2E4:
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

__attribute__((alias("__imp__sub_82CFE2FC"))) PPC_WEAK_FUNC(sub_82CFE2FC);
PPC_FUNC_IMPL(__imp__sub_82CFE2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFE300"))) PPC_WEAK_FUNC(sub_82CFE300);
PPC_FUNC_IMPL(__imp__sub_82CFE300) {
	PPC_FUNC_PROLOGUE();
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x8259cb28
	sub_8259CB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFE310"))) PPC_WEAK_FUNC(sub_82CFE310);
PPC_FUNC_IMPL(__imp__sub_82CFE310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CFE318;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r7,144(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r31,r3,128
	ctx.r31.s64 = ctx.r3.s64 + 128;
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cfe340
	if (cr6.lt) goto loc_82CFE340;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82cfe344
	goto loc_82CFE344;
loc_82CFE340:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82CFE344:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x82CFE354;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82cfe3ac
	if (cr6.eq) goto loc_82CFE3AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CFE364;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r4,r11,-14668
	ctx.r4.s64 = ctx.r11.s64 + -14668;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CFE380;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfe398
	if (cr6.eq) goto loc_82CFE398;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CFE398;
	sub_82D291E0(ctx, base);
loc_82CFE398:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CFE3AC;
	sub_8259CB28(ctx, base);
loc_82CFE3AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFE3B4"))) PPC_WEAK_FUNC(sub_82CFE3B4);
PPC_FUNC_IMPL(__imp__sub_82CFE3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFE3B8"))) PPC_WEAK_FUNC(sub_82CFE3B8);
PPC_FUNC_IMPL(__imp__sub_82CFE3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82CFE3C0;
	__savegprlr_19(ctx, base);
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r20,-31763
	ctx.r20.s64 = -2081619968;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r11,-3564(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r23,4456(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// bl 0x82a22560
	ctx.lr = 0x82CFE3E0;
	sub_82A22560(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82a22530
	ctx.lr = 0x82CFE3EC;
	sub_82A22530(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82a22530
	ctx.lr = 0x82CFE3F8;
	sub_82A22530(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82a0db20
	ctx.lr = 0x82CFE400;
	sub_82A0DB20(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82a125c8
	ctx.lr = 0x82CFE40C;
	sub_82A125C8(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82a12748
	ctx.lr = 0x82CFE414;
	sub_82A12748(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r21,15
	ctx.r21.s64 = 15;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// addi r25,r11,-14668
	ctx.r25.s64 = ctx.r11.s64 + -14668;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r25,-850
	ctx.r4.s64 = ctx.r25.s64 + -850;
	// lwz r24,676(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// bl 0x8259cc28
	ctx.lr = 0x82CFE444;
	sub_8259CC28(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CFE44C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CFE464;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfe47c
	if (cr6.eq) goto loc_82CFE47C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r22,128
	ctx.r4.s64 = ctx.r22.s64 + 128;
	// bl 0x82d291e0
	ctx.lr = 0x82CFE47C;
	sub_82D291E0(ctx, base);
loc_82CFE47C:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r19,2
	ctx.r19.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cfe49c
	if (cr6.lt) goto loc_82CFE49C;
	// stw r19,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82CFE49C;
	sub_825952B8(ctx, base);
loc_82CFE49C:
	// lbz r11,97(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 97);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// beq cr6,0x82cfe4c4
	if (cr6.eq) goto loc_82CFE4C4;
	// bl 0x82d19a68
	ctx.lr = 0x82CFE4BC;
	sub_82D19A68(ctx, base);
	// addi r4,r25,-260
	ctx.r4.s64 = ctx.r25.s64 + -260;
	// b 0x82cfe4cc
	goto loc_82CFE4CC;
loc_82CFE4C4:
	// bl 0x82d19a68
	ctx.lr = 0x82CFE4C8;
	sub_82D19A68(ctx, base);
	// addi r4,r25,-252
	ctx.r4.s64 = ctx.r25.s64 + -252;
loc_82CFE4CC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFE4E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,96(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfe4f8
	if (cr6.eq) goto loc_82CFE4F8;
	// lis r30,12
	ctx.r30.s64 = 786432;
	// ori r30,r30,134
	ctx.r30.u64 = ctx.r30.u64 | 134;
	// b 0x82cfe544
	goto loc_82CFE544;
loc_82CFE4F8:
	// addi r11,r23,-2
	ctx.r11.s64 = ctx.r23.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82cfe53c
	if (cr6.gt) goto loc_82CFE53C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82cfe53c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFE53C;
	// bdzf 4*cr6+eq,0x82cfe530
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFE530;
	// bdzf 4*cr6+eq,0x82cfe53c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFE53C;
	// bdzf 4*cr6+eq,0x82cfe530
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFE530;
	// bdzf 4*cr6+eq,0x82cfe53c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFE53C;
	// bne cr6,0x82cfe530
	if (!cr6.eq) goto loc_82CFE530;
	// lis r30,11
	ctx.r30.s64 = 720896;
	// ori r30,r30,12
	ctx.r30.u64 = ctx.r30.u64 | 12;
	// b 0x82cfe544
	goto loc_82CFE544;
loc_82CFE530:
	// lis r30,10
	ctx.r30.s64 = 655360;
	// ori r30,r30,269
	ctx.r30.u64 = ctx.r30.u64 | 269;
	// b 0x82cfe544
	goto loc_82CFE544;
loc_82CFE53C:
	// lis r30,56
	ctx.r30.s64 = 3670016;
	// ori r30,r30,302
	ctx.r30.u64 = ctx.r30.u64 | 302;
loc_82CFE544:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CFE54C;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82cfe55c
	if (!cr6.eq) goto loc_82CFE55C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82CFE55C:
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// addi r4,r25,-244
	ctx.r4.s64 = ctx.r25.s64 + -244;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82CFE578;
	sub_8259CC28(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CFE588;
	sub_82A69A28(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// ori r26,r11,36400
	ctx.r26.u64 = ctx.r11.u64 | 36400;
loc_82CFE594:
	// lwz r11,-3564(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r11,r11,5180
	ctx.r11.s64 = ctx.r11.s64 + 5180;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82cfe5b8
	if (!cr6.lt) goto loc_82CFE5B8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// b 0x82cfe5d4
	goto loc_82CFE5D4;
loc_82CFE5B8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a225d0
	ctx.lr = 0x82CFE5C0;
	sub_82A225D0(ctx, base);
	// mullw r11,r30,r26
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r26.s32);
	// li r4,5
	ctx.r4.s64 = 5;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82919698
	ctx.lr = 0x82CFE5D0;
	sub_82919698(ctx, base);
	// clrlwi r27,r3,24
	ctx.r27.u64 = ctx.r3.u32 & 0xFF;
loc_82CFE5D4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r25,-232
	ctx.r31.s64 = ctx.r25.s64 + -232;
	// beq cr6,0x82cfe5e4
	if (cr6.eq) goto loc_82CFE5E4;
	// addi r31,r25,-220
	ctx.r31.s64 = ctx.r25.s64 + -220;
loc_82CFE5E4:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CFE5EC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFE604;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82d284d0
	ctx.lr = 0x82CFE60C;
	sub_82D284D0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CFE614;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r28,r3,100
	ctx.r28.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82cfe624
	if (!cr6.eq) goto loc_82CFE624;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82CFE624:
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
loc_82CFE634:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cfe634
	if (!cr6.eq) goto loc_82CFE634;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CFE65C;
	sub_8259CC28(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CFE66C;
	sub_82A6A1B8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82cfe594
	if (cr6.lt) goto loc_82CFE594;
	// lwz r11,-3564(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3564);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lfs f1,4464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82a290c8
	ctx.lr = 0x82CFE698;
	sub_82A290C8(ctx, base);
	// bl 0x83911da8
	ctx.lr = 0x82CFE69C;
	sub_83911DA8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r23,-2
	ctx.r11.s64 = ctx.r23.s64 + -2;
	// add r6,r3,r10
	ctx.r6.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bgt cr6,0x82cfe714
	if (cr6.gt) goto loc_82CFE714;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82cfe714
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFE714;
	// bdzf 4*cr6+eq,0x82cfe708
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFE708;
	// bdzf 4*cr6+eq,0x82cfe714
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFE714;
	// bdzf 4*cr6+eq,0x82cfe6e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFE6E4;
	// bdzf 4*cr6+eq,0x82cfe714
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFE714;
	// bdzf 4*cr6+eq,0x82cfe6ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFE6EC;
	// bdzf 4*cr6+eq,0x82cfe6ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFE6EC;
	// bne cr6,0x82cfe6ec
	if (!cr6.eq) goto loc_82CFE6EC;
	// li r6,45
	ctx.r6.s64 = 45;
	// b 0x82cfe70c
	goto loc_82CFE70C;
loc_82CFE6E4:
	// li r6,105
	ctx.r6.s64 = 105;
	// b 0x82cfe70c
	goto loc_82CFE70C;
loc_82CFE6EC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a225d0
	ctx.lr = 0x82CFE6F4;
	sub_82A225D0(ctx, base);
	// bl 0x8291ae48
	ctx.lr = 0x82CFE6F8;
	sub_8291AE48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r6,120
	ctx.r6.s64 = 120;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cfe70c
	if (!cr6.eq) goto loc_82CFE70C;
loc_82CFE708:
	// li r6,90
	ctx.r6.s64 = 90;
loc_82CFE70C:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_82CFE714:
	// lwz r11,-3564(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3564);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,5180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82cfe73c
	if (!cr6.lt) goto loc_82CFE73C;
	// addi r5,r25,-208
	ctx.r5.s64 = ctx.r25.s64 + -208;
	// bl 0x831d0b08
	ctx.lr = 0x82CFE738;
	sub_831D0B08(ctx, base);
	// b 0x82cfe748
	goto loc_82CFE748;
loc_82CFE73C:
	// addi r5,r25,-200
	ctx.r5.s64 = ctx.r25.s64 + -200;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x831d0b08
	ctx.lr = 0x82CFE748;
	sub_831D0B08(ctx, base);
loc_82CFE748:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CFE750;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82cfe760
	if (!cr6.eq) goto loc_82CFE760;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82CFE760:
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
loc_82CFE774:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cfe774
	if (!cr6.eq) goto loc_82CFE774;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CFE79C;
	sub_8259CC28(ctx, base);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r4,r25,-192
	ctx.r4.s64 = ctx.r25.s64 + -192;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82CFE7B8;
	sub_8259CC28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFE7C8;
	sub_82A69AD0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CFE7D0;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-184
	ctx.r4.s64 = ctx.r25.s64 + -184;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CFE7E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r23,10
	cr6.compare<int32_t>(ctx.r23.s32, 10, xer);
	// bne cr6,0x82cfe8d8
	if (!cr6.eq) goto loc_82CFE8D8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a225d0
	ctx.lr = 0x82CFE7F8;
	sub_82A225D0(ctx, base);
	// bl 0x8291ae08
	ctx.lr = 0x82CFE7FC;
	sub_8291AE08(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82cfe8d8
	if (!cr6.eq) goto loc_82CFE8D8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CFE80C;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-172
	ctx.r4.s64 = ctx.r25.s64 + -172;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFE824;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a225d0
	ctx.lr = 0x82CFE82C;
	sub_82A225D0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82919698
	ctx.lr = 0x82CFE834;
	sub_82919698(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a225d0
	ctx.lr = 0x82CFE840;
	sub_82A225D0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// bl 0x82919698
	ctx.lr = 0x82CFE84C;
	sub_82919698(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CFE858;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82cfe868
	if (!cr6.eq) goto loc_82CFE868;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82CFE868:
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// addi r4,r25,-160
	ctx.r4.s64 = ctx.r25.s64 + -160;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82CFE884;
	sub_8259CC28(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CFE894;
	sub_82A6A1B8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CFE89C;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82cfe8ac
	if (!cr6.eq) goto loc_82CFE8AC;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82CFE8AC:
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// addi r4,r25,-144
	ctx.r4.s64 = ctx.r25.s64 + -144;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82CFE8C8;
	sub_8259CC28(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CFE8D8;
	sub_82A6A1B8(ctx, base);
loc_82CFE8D8:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// ori r27,r11,14904
	ctx.r27.u64 = ctx.r11.u64 | 14904;
loc_82CFE8E4:
	// bl 0x831156e8
	ctx.lr = 0x82CFE8E8;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x83123a08
	ctx.lr = 0x82CFE8F8;
	sub_83123A08(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r30,r25,-128
	ctx.r30.s64 = ctx.r25.s64 + -128;
	// beq cr6,0x82cfe910
	if (cr6.eq) goto loc_82CFE910;
	// addi r30,r25,-112
	ctx.r30.s64 = ctx.r25.s64 + -112;
loc_82CFE910:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CFE918;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r28,r3,100
	ctx.r28.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82cfe928
	if (!cr6.eq) goto loc_82CFE928;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82CFE928:
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
loc_82CFE938:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cfe938
	if (!cr6.eq) goto loc_82CFE938;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CFE960;
	sub_8259CC28(ctx, base);
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
loc_82CFE970:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cfe970
	if (!cr6.eq) goto loc_82CFE970;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CFE998;
	sub_8259CC28(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CFE9A8;
	sub_82A69AD0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r25,-96
	ctx.r31.s64 = ctx.r25.s64 + -96;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cfe9bc
	if (cr6.eq) goto loc_82CFE9BC;
	// addi r31,r25,-84
	ctx.r31.s64 = ctx.r25.s64 + -84;
loc_82CFE9BC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CFE9C4;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFE9DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfea84
	if (cr6.eq) goto loc_82CFEA84;
	// bl 0x82d4bb00
	ctx.lr = 0x82CFE9EC;
	sub_82D4BB00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfea74
	if (cr6.eq) goto loc_82CFEA74;
	// bl 0x82d4bb60
	ctx.lr = 0x82CFE9FC;
	sub_82D4BB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfea74
	if (cr6.eq) goto loc_82CFEA74;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CFEA18;
	sub_82D2AEC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d4c400
	ctx.lr = 0x82CFEA28;
	sub_82D4C400(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d4bb78
	ctx.lr = 0x82CFEA38;
	sub_82D4BB78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82d328c8
	ctx.lr = 0x82CFEA48;
	sub_82D328C8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cfea64
	if (cr6.lt) goto loc_82CFEA64;
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82CFEA64;
	sub_825952B8(ctx, base);
loc_82CFEA64:
	// stw r21,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r21.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// b 0x82cfea84
	goto loc_82CFEA84;
loc_82CFEA74:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CFEA84;
	sub_82D2AEC8(ctx, base);
loc_82CFEA84:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x82cfe8e4
	if (cr6.lt) goto loc_82CFE8E4;
	// lwz r11,-3564(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3564);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r26,6132(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x82d19a68
	ctx.lr = 0x82CFEAA8;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-32
	ctx.r4.s64 = ctx.r25.s64 + -32;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFEAC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a269d0
	ctx.lr = 0x82CFEAC8;
	sub_82A269D0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cfeb80
	if (cr6.eq) goto loc_82CFEB80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a269f8
	ctx.lr = 0x82CFEADC;
	sub_82A269F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfeb80
	if (cr6.eq) goto loc_82CFEB80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CFEAF0;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-16
	ctx.r4.s64 = ctx.r25.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFEB08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CFEB10;
	sub_82D19A68(ctx, base);
	// bl 0x82d2ec40
	ctx.lr = 0x82CFEB14;
	sub_82D2EC40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfeb80
	if (cr6.eq) goto loc_82CFEB80;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r28,r3,100
	ctx.r28.s64 = ctx.r3.s64 + 100;
	// addi r27,r11,18384
	ctx.r27.s64 = ctx.r11.s64 + 18384;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82CFEB2C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFEB44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a287a8
	ctx.lr = 0x82CFEB54;
	sub_82A287A8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cfeb6c
	if (cr6.eq) goto loc_82CFEB6C;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CFEB6C;
	sub_82D294D0(ctx, base);
loc_82CFEB6C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82cfeb2c
	if (cr6.lt) goto loc_82CFEB2C;
loc_82CFEB80:
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82a0cc80
	ctx.lr = 0x82CFEB88;
	sub_82A0CC80(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82a0dc70
	ctx.lr = 0x82CFEB90;
	sub_82A0DC70(ctx, base);
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFEB98"))) PPC_WEAK_FUNC(sub_82CFEB98);
PPC_FUNC_IMPL(__imp__sub_82CFEB98) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82d462e8
	ctx.lr = 0x82CFEBB4;
	sub_82D462E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cfebd8
	if (!cr6.eq) goto loc_82CFEBD8;
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
loc_82CFEBD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfe3b8
	ctx.lr = 0x82CFEBE0;
	sub_82CFE3B8(ctx, base);
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

__attribute__((alias("__imp__sub_82CFEBF8"))) PPC_WEAK_FUNC(sub_82CFEBF8);
PPC_FUNC_IMPL(__imp__sub_82CFEBF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82cfec20
	if (!cr6.eq) goto loc_82CFEC20;
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
loc_82CFEC20:
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,-23488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// bl 0x8257cf28
	ctx.lr = 0x82CFEC5C;
	sub_8257CF28(ctx, base);
	// fctidz f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CFEC78"))) PPC_WEAK_FUNC(sub_82CFEC78);
PPC_FUNC_IMPL(__imp__sub_82CFEC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bgt cr6,0x82cfed64
	if (cr6.gt) goto loc_82CFED64;
	// lis r12,-32048
	ctx.r12.s64 = -2100297728;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4964
	ctx.r12.s64 = ctx.r12.s64 + -4964;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82CFECF8;
	case 1:
		goto loc_82CFED04;
	case 2:
		goto loc_82CFED64;
	case 3:
		goto loc_82CFED10;
	case 4:
		goto loc_82CFED40;
	case 5:
		goto loc_82CFED40;
	case 6:
		goto loc_82CFED1C;
	case 7:
		goto loc_82CFED1C;
	case 8:
		goto loc_82CFED34;
	case 9:
		goto loc_82CFED34;
	case 10:
		goto loc_82CFED64;
	case 11:
		goto loc_82CFED4C;
	case 12:
		goto loc_82CFED28;
	case 13:
		goto loc_82CFED28;
	case 14:
		goto loc_82CFED28;
	case 15:
		goto loc_82CFED28;
	case 16:
		goto loc_82CFED28;
	case 17:
		goto loc_82CFED28;
	case 18:
		goto loc_82CFED28;
	case 19:
		goto loc_82CFED28;
	case 20:
		goto loc_82CFED58;
	case 21:
		goto loc_82CFED58;
	case 22:
		goto loc_82CFED58;
	default:
		return;
	}
	// lwz r22,-4872(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4872);
	// lwz r22,-4860(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4860);
	// lwz r22,-4764(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4764);
	// lwz r22,-4848(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4848);
	// lwz r22,-4800(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4800);
	// lwz r22,-4800(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4800);
	// lwz r22,-4836(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4836);
	// lwz r22,-4836(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4836);
	// lwz r22,-4812(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4812);
	// lwz r22,-4812(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4812);
	// lwz r22,-4764(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4764);
	// lwz r22,-4788(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4788);
	// lwz r22,-4824(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4824);
	// lwz r22,-4824(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4824);
	// lwz r22,-4824(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4824);
	// lwz r22,-4824(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4824);
	// lwz r22,-4824(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4824);
	// lwz r22,-4824(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4824);
	// lwz r22,-4824(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4824);
	// lwz r22,-4824(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4824);
	// lwz r22,-4776(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4776);
	// lwz r22,-4776(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4776);
	// lwz r22,-4776(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4776);
loc_82CFECF8:
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,214
	ctx.r3.u64 = ctx.r3.u64 | 214;
	// blr 
	return;
loc_82CFED04:
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,215
	ctx.r3.u64 = ctx.r3.u64 | 215;
	// blr 
	return;
loc_82CFED10:
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,568
	ctx.r3.u64 = ctx.r3.u64 | 568;
	// blr 
	return;
loc_82CFED1C:
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,596
	ctx.r3.u64 = ctx.r3.u64 | 596;
	// blr 
	return;
loc_82CFED28:
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,597
	ctx.r3.u64 = ctx.r3.u64 | 597;
	// blr 
	return;
loc_82CFED34:
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,598
	ctx.r3.u64 = ctx.r3.u64 | 598;
	// blr 
	return;
loc_82CFED40:
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,599
	ctx.r3.u64 = ctx.r3.u64 | 599;
	// blr 
	return;
loc_82CFED4C:
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,600
	ctx.r3.u64 = ctx.r3.u64 | 600;
	// blr 
	return;
loc_82CFED58:
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,601
	ctx.r3.u64 = ctx.r3.u64 | 601;
	// blr 
	return;
loc_82CFED64:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CFED6C"))) PPC_WEAK_FUNC(sub_82CFED6C);
PPC_FUNC_IMPL(__imp__sub_82CFED6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFED70"))) PPC_WEAK_FUNC(sub_82CFED70);
PPC_FUNC_IMPL(__imp__sub_82CFED70) {
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
	// addi r11,r4,-20
	ctx.r11.s64 = ctx.r4.s64 + -20;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82cfee90
	if (cr6.gt) goto loc_82CFEE90;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82cfedcc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFEDCC;
	// bdzf 4*cr6+eq,0x82cfedf4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFEDF4;
	// bdzf 4*cr6+eq,0x82cfee1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFEE1C;
	// bdzf 4*cr6+eq,0x82cfee44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CFEE44;
	// bne cr6,0x82cfee6c
	if (!cr6.eq) goto loc_82CFEE6C;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,580
	ctx.r4.u64 = ctx.r4.u64 | 580;
	// bl 0x82d04220
	ctx.lr = 0x82CFEDB0;
	sub_82D04220(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,18460
	ctx.r10.s64 = ctx.r11.s64 + 18460;
	// lwz r3,-12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CFEDCC:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,582
	ctx.r4.u64 = ctx.r4.u64 | 582;
	// bl 0x82d04220
	ctx.lr = 0x82CFEDD8;
	sub_82D04220(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,18460
	ctx.r10.s64 = ctx.r11.s64 + 18460;
	// lwz r3,-8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CFEDF4:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,581
	ctx.r4.u64 = ctx.r4.u64 | 581;
	// bl 0x82d04220
	ctx.lr = 0x82CFEE00;
	sub_82D04220(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,18460
	ctx.r10.s64 = ctx.r11.s64 + 18460;
	// lwz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CFEE1C:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,592
	ctx.r4.u64 = ctx.r4.u64 | 592;
	// bl 0x82d04220
	ctx.lr = 0x82CFEE28;
	sub_82D04220(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,18460
	ctx.r10.s64 = ctx.r11.s64 + 18460;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CFEE44:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,591
	ctx.r4.u64 = ctx.r4.u64 | 591;
	// bl 0x82d04220
	ctx.lr = 0x82CFEE50;
	sub_82D04220(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,18460
	ctx.r10.s64 = ctx.r11.s64 + 18460;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CFEE6C:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,590
	ctx.r4.u64 = ctx.r4.u64 | 590;
	// bl 0x82d04220
	ctx.lr = 0x82CFEE78;
	sub_82D04220(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r3,18460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18460);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CFEE90:
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

__attribute__((alias("__imp__sub_82CFEEA4"))) PPC_WEAK_FUNC(sub_82CFEEA4);
PPC_FUNC_IMPL(__imp__sub_82CFEEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFEEA8"))) PPC_WEAK_FUNC(sub_82CFEEA8);
PPC_FUNC_IMPL(__imp__sub_82CFEEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,20
	ctx.r8.s64 = 20;
	// subfc r9,r10,r4
	xer.ca = ctx.r4.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r8,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r8.u32);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// li r7,50
	ctx.r7.s64 = 50;
	// stw r9,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r9.u32);
	// and r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 & ctx.r4.u64;
	// stw r9,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r9.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// stw r7,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r7.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r4,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,101
	ctx.r10.s64 = 101;
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// li r6,60
	ctx.r6.s64 = 60;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r4,15
	ctx.r4.s64 = 15;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// li r7,25
	ctx.r7.s64 = 25;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r6.u32);
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// stw r10,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r10.u32);
	// stw r4,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r4.u32);
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
loc_82CFEF28:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// blt cr6,0x82cfef4c
	if (cr6.lt) goto loc_82CFEF4C;
	// addi r9,r1,-60
	ctx.r9.s64 = ctx.r1.s64 + -60;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// blt cr6,0x82cfef5c
	if (cr6.lt) goto loc_82CFEF5C;
loc_82CFEF4C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82cfef28
	if (cr6.lt) goto loc_82CFEF28;
loc_82CFEF5C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CFEF64"))) PPC_WEAK_FUNC(sub_82CFEF64);
PPC_FUNC_IMPL(__imp__sub_82CFEF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFEF68"))) PPC_WEAK_FUNC(sub_82CFEF68);
PPC_FUNC_IMPL(__imp__sub_82CFEF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CFEF70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82CFEF8C;
	sub_82D253F8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r9,r11,-27872
	ctx.r9.s64 = ctx.r11.s64 + -27872;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFEFB8"))) PPC_WEAK_FUNC(sub_82CFEFB8);
PPC_FUNC_IMPL(__imp__sub_82CFEFB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cfefe4
	if (cr6.eq) goto loc_82CFEFE4;
	// bl 0x83129970
	ctx.lr = 0x82CFEFE0;
	sub_83129970(ctx, base);
	// b 0x82cfefe8
	goto loc_82CFEFE8;
loc_82CFEFE4:
	// bl 0x8312dce0
	ctx.lr = 0x82CFEFE8;
	sub_8312DCE0(ctx, base);
loc_82CFEFE8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cff020
	if (cr6.eq) goto loc_82CFF020;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f31,f12
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82CFF020:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CFF03C"))) PPC_WEAK_FUNC(sub_82CFF03C);
PPC_FUNC_IMPL(__imp__sub_82CFF03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFF040"))) PPC_WEAK_FUNC(sub_82CFF040);
PPC_FUNC_IMPL(__imp__sub_82CFF040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,108
	ctx.r10.s64 = 108;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,606
	ctx.r8.s64 = 39714816;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// ori r6,r8,53399
	ctx.r6.u64 = ctx.r8.u64 | 53399;
	// divw r11,r7,r10
	ctx.r11.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bge cr6,0x82cff074
	if (!cr6.lt) goto loc_82CFF074;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82cff078
	goto loc_82CFF078;
loc_82CFF074:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CFF078:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bltlr cr6
	if (cr6.lt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CFF08C"))) PPC_WEAK_FUNC(sub_82CFF08C);
PPC_FUNC_IMPL(__imp__sub_82CFF08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFF090"))) PPC_WEAK_FUNC(sub_82CFF090);
PPC_FUNC_IMPL(__imp__sub_82CFF090) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cff0c8
	if (cr6.eq) goto loc_82CFF0C8;
loc_82CFF0B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CFF0BC;
	sub_83102DB0(ctx, base);
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82cff0b4
	if (!cr6.eq) goto loc_82CFF0B4;
loc_82CFF0C8:
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

__attribute__((alias("__imp__sub_82CFF0E0"))) PPC_WEAK_FUNC(sub_82CFF0E0);
PPC_FUNC_IMPL(__imp__sub_82CFF0E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CFF0E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cff128
	if (cr6.eq) goto loc_82CFF128;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_82CFF100:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82cff118
	if (cr6.eq) goto loc_82CFF118;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82CFF118;
	sub_831CE980(ctx, base);
loc_82CFF118:
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82cff100
	if (!cr6.eq) goto loc_82CFF100;
loc_82CFF128:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFF134"))) PPC_WEAK_FUNC(sub_82CFF134);
PPC_FUNC_IMPL(__imp__sub_82CFF134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFF138"))) PPC_WEAK_FUNC(sub_82CFF138);
PPC_FUNC_IMPL(__imp__sub_82CFF138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CFF140;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82cff184
	if (cr6.eq) goto loc_82CFF184;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_82CFF160:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82cff178
	if (cr6.eq) goto loc_82CFF178;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82CFF178;
	sub_831CE980(ctx, base);
loc_82CFF178:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// bne 0x82cff160
	if (!cr0.eq) goto loc_82CFF160;
loc_82CFF184:
	// mulli r11,r29,108
	ctx.r11.s64 = ctx.r29.s64 * 108;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFF194"))) PPC_WEAK_FUNC(sub_82CFF194);
PPC_FUNC_IMPL(__imp__sub_82CFF194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFF198"))) PPC_WEAK_FUNC(sub_82CFF198);
PPC_FUNC_IMPL(__imp__sub_82CFF198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82CFF1A0;
	__savegprlr_22(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82cff400
	if (cr6.eq) goto loc_82CFF400;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,606
	ctx.r10.s64 = 39714816;
	// lwz r26,4(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r27,108
	ctx.r27.s64 = 108;
	// ori r8,r10,53399
	ctx.r8.u64 = ctx.r10.u64 | 53399;
	// subf r9,r11,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r11.s64;
	// divw r10,r9,r27
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bge cr6,0x82cff1f0
	if (!cr6.lt) goto loc_82CFF1F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82CFF1F0;
	sub_831CC150(ctx, base);
loc_82CFF1F0:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r27
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bge cr6,0x82cff2dc
	if (!cr6.lt) goto loc_82CFF2DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cff040
	ctx.lr = 0x82CFF210;
	sub_82CFF040(ctx, base);
	// li r22,2
	ctx.r22.s64 = 2;
	// mulli r24,r3,108
	ctx.r24.s64 = ctx.r3.s64 * 108;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82CFF22C;
	sub_82595718(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// divw r25,r10,r27
	ctx.r25.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mulli r11,r25,108
	ctx.r11.s64 = ctx.r25.s64 * 108;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cff138
	ctx.lr = 0x82CFF254;
	sub_82CFF138(ctx, base);
	// addi r26,r31,12
	ctx.r26.s64 = ctx.r31.s64 + 12;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cff0e0
	ctx.lr = 0x82CFF26C;
	sub_82CFF0E0(ctx, base);
	// add r9,r25,r29
	ctx.r9.u64 = ctx.r25.u64 + ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r9,108
	ctx.r11.s64 = ctx.r9.s64 * 108;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cff0e0
	ctx.lr = 0x82CFF288;
	sub_82CFF0E0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r11,r8,r27
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x82cff2bc
	if (cr6.eq) goto loc_82CFF2BC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82cff090
	ctx.lr = 0x82CFF2AC;
	sub_82CFF090(ctx, base);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CFF2BC;
	sub_825952B8(ctx, base);
loc_82CFF2BC:
	// mulli r11,r30,108
	ctx.r11.s64 = ctx.r30.s64 * 108;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// add r10,r24,r28
	ctx.r10.u64 = ctx.r24.u64 + ctx.r28.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82CFF2DC:
	// subf r11,r30,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r30.s64;
	// li r5,108
	ctx.r5.s64 = 108;
	// divw r10,r11,r27
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r27.s32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bge cr6,0x82cff374
	if (!cr6.lt) goto loc_82CFF374;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831ce980
	ctx.lr = 0x82CFF2FC;
	sub_831CE980(ctx, base);
	// mulli r28,r29,108
	ctx.r28.s64 = ctx.r29.s64 * 108;
	// add r5,r28,r30
	ctx.r5.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cff0e0
	ctx.lr = 0x82CFF314;
	sub_82CFF0E0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r10,r11,r27
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r27.s32);
	// subf r5,r10,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r10.s64;
	// bl 0x82cff138
	ctx.lr = 0x82CFF330;
	sub_82CFF138(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// subf r29,r28,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82cff364
	if (cr6.eq) goto loc_82CFF364;
loc_82CFF348:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82CFF358;
	sub_831CE980(ctx, base);
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82cff348
	if (!cr6.eq) goto loc_82CFF348;
loc_82CFF364:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x82CFF36C;
	sub_83102DB0(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82CFF374:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x831ce980
	ctx.lr = 0x82CFF37C;
	sub_831CE980(ctx, base);
	// mulli r28,r29,108
	ctx.r28.s64 = ctx.r29.s64 * 108;
	// subf r29,r28,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r28.s64;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cff0e0
	ctx.lr = 0x82CFF398;
	sub_82CFF0E0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82cff3cc
	if (cr6.eq) goto loc_82CFF3CC;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
loc_82CFF3AC:
	// addi r31,r31,-108
	ctx.r31.s64 = ctx.r31.s64 + -108;
	// addi r29,r29,-108
	ctx.r29.s64 = ctx.r29.s64 + -108;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82CFF3C4;
	sub_831CE980(ctx, base);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82cff3ac
	if (!cr6.eq) goto loc_82CFF3AC;
loc_82CFF3CC:
	// add r29,r28,r30
	ctx.r29.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82cff3f8
	if (cr6.eq) goto loc_82CFF3F8;
loc_82CFF3DC:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82CFF3EC;
	sub_831CE980(ctx, base);
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82cff3dc
	if (!cr6.eq) goto loc_82CFF3DC;
loc_82CFF3F8:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83102db0
	ctx.lr = 0x82CFF400;
	sub_83102DB0(ctx, base);
loc_82CFF400:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CFF408"))) PPC_WEAK_FUNC(sub_82CFF408);
PPC_FUNC_IMPL(__imp__sub_82CFF408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r4,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// addi r11,r4,-13
	ctx.r11.s64 = ctx.r4.s64 + -13;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// bgt cr6,0x82cff66c
	if (cr6.gt) goto loc_82CFF66C;
	// lis r12,-32048
	ctx.r12.s64 = -2100297728;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2984
	ctx.r12.s64 = ctx.r12.s64 + -2984;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82CFF488;
	case 1:
		goto loc_82CFF4F8;
	case 2:
		goto loc_82CFF488;
	case 3:
		goto loc_82CFF4F8;
	case 4:
		goto loc_82CFF488;
	case 5:
		goto loc_82CFF4F8;
	case 6:
		goto loc_82CFF488;
	case 7:
		goto loc_82CFF4F8;
	case 8:
		goto loc_82CFF568;
	case 9:
		goto loc_82CFF568;
	case 10:
		goto loc_82CFF568;
	case 11:
		goto loc_82CFF568;
	default:
		return;
	}
	// lwz r22,-2936(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -2936);
	// lwz r22,-2824(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -2824);
	// lwz r22,-2936(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -2936);
	// lwz r22,-2824(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -2824);
	// lwz r22,-2936(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -2936);
	// lwz r22,-2824(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -2824);
	// lwz r22,-2936(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -2936);
	// lwz r22,-2824(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -2824);
	// lwz r22,-2712(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -2712);
	// lwz r22,-2712(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -2712);
	// lwz r22,-2712(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -2712);
	// lwz r22,-2712(r15)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r15.u32 + -2712);
loc_82CFF488:
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129620
	ctx.lr = 0x82CFF49C;
	sub_83129620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835977d8
	ctx.lr = 0x82CFF4A8;
	sub_835977D8(ctx, base);
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129620
	ctx.lr = 0x82CFF4BC;
	sub_83129620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835977d8
	ctx.lr = 0x82CFF4C8;
	sub_835977D8(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129620
	ctx.lr = 0x82CFF4DC;
	sub_83129620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835977d8
	ctx.lr = 0x82CFF4E8;
	sub_835977D8(ctx, base);
	// li r8,19
	ctx.r8.s64 = 19;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// b 0x82cff5d4
	goto loc_82CFF5D4;
loc_82CFF4F8:
	// li r11,14
	ctx.r11.s64 = 14;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129620
	ctx.lr = 0x82CFF50C;
	sub_83129620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835977d8
	ctx.lr = 0x82CFF518;
	sub_835977D8(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129620
	ctx.lr = 0x82CFF52C;
	sub_83129620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835977d8
	ctx.lr = 0x82CFF538;
	sub_835977D8(ctx, base);
	// li r9,18
	ctx.r9.s64 = 18;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129620
	ctx.lr = 0x82CFF54C;
	sub_83129620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835977d8
	ctx.lr = 0x82CFF558;
	sub_835977D8(ctx, base);
	// li r8,20
	ctx.r8.s64 = 20;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// b 0x82cff5d4
	goto loc_82CFF5D4;
loc_82CFF568:
	// li r11,21
	ctx.r11.s64 = 21;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129620
	ctx.lr = 0x82CFF57C;
	sub_83129620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835977d8
	ctx.lr = 0x82CFF588;
	sub_835977D8(ctx, base);
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129620
	ctx.lr = 0x82CFF59C;
	sub_83129620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835977d8
	ctx.lr = 0x82CFF5A8;
	sub_835977D8(ctx, base);
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129620
	ctx.lr = 0x82CFF5BC;
	sub_83129620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835977d8
	ctx.lr = 0x82CFF5C8;
	sub_835977D8(ctx, base);
	// li r8,24
	ctx.r8.s64 = 24;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
loc_82CFF5D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129620
	ctx.lr = 0x82CFF5DC;
	sub_83129620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835977d8
	ctx.lr = 0x82CFF5E8;
	sub_835977D8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// srawi r3,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 2;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x82cff634
	if (cr6.lt) goto loc_82CFF634;
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
loc_82CFF618:
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwzu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// blt cr6,0x82cff618
	if (cr6.lt) goto loc_82CFF618;
loc_82CFF634:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bge cr6,0x82cff644
	if (!cr6.lt) goto loc_82CFF644;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
loc_82CFF644:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82cff664
	if (cr6.eq) goto loc_82CFF664;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CFF664;
	sub_825952B8(ctx, base);
loc_82CFF664:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82cff67c
	goto loc_82CFF67C;
loc_82CFF66C:
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129620
	ctx.lr = 0x82CFF678;
	sub_83129620(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82CFF67C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82CFF694"))) PPC_WEAK_FUNC(sub_82CFF694);
PPC_FUNC_IMPL(__imp__sub_82CFF694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CFF698"))) PPC_WEAK_FUNC(sub_82CFF698);
PPC_FUNC_IMPL(__imp__sub_82CFF698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82CFF6A0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce778
	ctx.lr = 0x82CFF6A8;
	__savefpr_28(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r4,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r4.u32);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// stw r5,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r5.u32);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// stw r6,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r6.u32);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// stb r8,703(r1)
	PPC_STORE_U8(ctx.r1.u32 + 703, ctx.r8.u8);
	// stw r9,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r9.u32);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d000c4
	if (cr6.eq) goto loc_82D000C4;
	// bl 0x831156e8
	ctx.lr = 0x82CFF6E8;
	sub_831156E8(ctx, base);
	// lwz r10,100(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 100);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r19,100
	ctx.r3.s64 = ctx.r19.s64 + 100;
	// addi r11,r11,18444
	ctx.r11.s64 = ctx.r11.s64 + 18444;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r4,-8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82CFF718;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cff744
	if (cr6.eq) goto loc_82CFF744;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82cfec78
	ctx.lr = 0x82CFF730;
	sub_82CFEC78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cff744
	if (cr6.eq) goto loc_82CFF744;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82d29598
	ctx.lr = 0x82CFF744;
	sub_82D29598(ctx, base);
loc_82CFF744:
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r3,96(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// bl 0x83129b58
	ctx.lr = 0x82CFF764;
	sub_83129B58(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82cff93c
	if (cr6.eq) goto loc_82CFF93C;
loc_82CFF784:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,96(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// bl 0x83129cd8
	ctx.lr = 0x82CFF790;
	sub_83129CD8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82cff408
	ctx.lr = 0x82CFF79C;
	sub_82CFF408(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cff928
	if (cr6.eq) goto loc_82CFF928;
	// cmpwi cr6,r21,25
	cr6.compare<int32_t>(ctx.r21.s32, 25, xer);
	// beq cr6,0x82cff7b8
	if (cr6.eq) goto loc_82CFF7B8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cff408
	ctx.lr = 0x82CFF7B8;
	sub_82CFF408(ctx, base);
loc_82CFF7B8:
	// clrlwi r29,r18,24
	ctx.r29.u64 = ctx.r18.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82cff824
	if (cr6.eq) goto loc_82CFF824;
	// addi r4,r1,708
	ctx.r4.s64 = ctx.r1.s64 + 708;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83129620
	ctx.lr = 0x82CFF7D4;
	sub_83129620(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cff7e8
	if (!cr6.eq) goto loc_82CFF7E8;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x82cff818
	goto loc_82CFF818;
loc_82CFF7E8:
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r28,32
	ctx.r10.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f13,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r10,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r10.u64);
	// lfd f0,168(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// bl 0x8257cf28
	ctx.lr = 0x82CFF818;
	sub_8257CF28(ctx, base);
loc_82CFF818:
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82CFF824:
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// beq cr6,0x82cff90c
	if (cr6.eq) goto loc_82CFF90C;
loc_82CFF82C:
	// cmpwi cr6,r21,25
	cr6.compare<int32_t>(ctx.r21.s32, 25, xer);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// beq cr6,0x82cff83c
	if (cr6.eq) goto loc_82CFF83C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_82CFF83C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cff408
	ctx.lr = 0x82CFF844;
	sub_82CFF408(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82cff8f8
	if (cr6.eq) goto loc_82CFF8F8;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129620
	ctx.lr = 0x82CFF860;
	sub_83129620(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cff874
	if (!cr6.eq) goto loc_82CFF874;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82cff8ec
	goto loc_82CFF8EC;
loc_82CFF874:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82cff8c8
	if (!cr6.lt) goto loc_82CFF8C8;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// lfd f12,200(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// b 0x82cff8e4
	goto loc_82CFF8E4;
loc_82CFF8C8:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f12,160(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
loc_82CFF8E4:
	// fcfid f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
loc_82CFF8EC:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82CFF8F8:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82cff90c
	if (cr6.gt) goto loc_82CFF90C;
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// bne cr6,0x82cff82c
	if (!cr6.eq) goto loc_82CFF82C;
loc_82CFF90C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82cff198
	ctx.lr = 0x82CFF920;
	sub_82CFF198(ctx, base);
	// lwz r23,132(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82CFF928:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// blt cr6,0x82cff784
	if (cr6.lt) goto loc_82CFF784;
loc_82CFF93C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82CFF954;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r24,r3
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, xer);
	// bge cr6,0x82cff960
	if (!cr6.lt) goto loc_82CFF960;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82CFF960:
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d00080
	if (cr6.eq) goto loc_82D00080;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lwz r17,128(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rotlwi r31,r22,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// li r16,108
	ctx.r16.s64 = 108;
	// li r23,15
	ctx.r23.s64 = 15;
	// lis r15,-31759
	ctx.r15.s64 = -2081357824;
	// lis r24,-31759
	ctx.r24.s64 = -2081357824;
	// lis r14,-31759
	ctx.r14.s64 = -2081357824;
	// addi r20,r11,-13740
	ctx.r20.s64 = ctx.r11.s64 + -13740;
loc_82CFF998:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,668(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// bl 0x82d33db0
	ctx.lr = 0x82CFF9A4;
	sub_82D33DB0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0006c
	if (cr6.eq) goto loc_82D0006C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CFF9D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// divw r5,r6,r16
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r16.s32);
	// subfc r4,r5,r18
	xer.ca = ctx.r18.u32 >= ctx.r5.u32;
	ctx.r4.s64 = ctx.r18.s64 - ctx.r5.s64;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r11,31
	ctx.r31.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82cffb94
	if (cr6.eq) goto loc_82CFFB94;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r4,676(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// bl 0x82cff408
	ctx.lr = 0x82CFFA10;
	sub_82CFF408(ctx, base);
	// lwz r26,684(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,25
	cr6.compare<int32_t>(ctx.r26.s32, 25, xer);
	// beq cr6,0x82cffa30
	if (cr6.eq) goto loc_82CFFA30;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82cff408
	ctx.lr = 0x82CFFA2C;
	sub_82CFF408(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82CFFA30:
	// subfic r10,r28,0
	xer.ca = ctx.r28.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r28.s64;
	// lbz r8,703(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 703);
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
	// beq cr6,0x82cffb84
	if (cr6.eq) goto loc_82CFFB84;
	// stw r22,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r22.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83129620
	ctx.lr = 0x82CFFA58;
	sub_83129620(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cffa6c
	if (!cr6.eq) goto loc_82CFFA6C;
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64;
	// b 0x82cffae4
	goto loc_82CFFAE4;
loc_82CFFA6C:
	// clrldi r10,r28,32
	ctx.r10.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lfd f13,200(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82cffac0
	if (!cr6.lt) goto loc_82CFFAC0;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r9.u64);
	// lfd f12,336(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// b 0x82cffadc
	goto loc_82CFFADC;
loc_82CFFAC0:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r9.u64);
	// lfd f12,400(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
loc_82CFFADC:
	// fcfid f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
loc_82CFFAE4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cffaf4
	if (!cr6.eq) goto loc_82CFFAF4;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82cffb6c
	goto loc_82CFFB6C;
loc_82CFFAF4:
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r10.u64);
	// std r9,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r9.u64);
	// lfd f0,344(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// lfd f12,360(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82cffb48
	if (!cr6.lt) goto loc_82CFFB48;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r10.u64);
	// lfd f11,376(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// b 0x82cffb64
	goto loc_82CFFB64;
loc_82CFFB48:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r10.u64);
	// lfd f11,392(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
loc_82CFFB64:
	// fcfid f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
loc_82CFFB6C:
	// fctidz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// fctidz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.f12.u64);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r27,356(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
loc_82CFFB84:
	// cmpwi cr6,r26,25
	cr6.compare<int32_t>(ctx.r26.s32, 25, xer);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// beq cr6,0x82cffb94
	if (cr6.eq) goto loc_82CFFB94;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82CFFB94:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cffec8
	if (cr6.eq) goto loc_82CFFEC8;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CFFBA8;
	sub_83102DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82CFFBB8;
	sub_8311BF98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cffbe4
	if (cr6.eq) goto loc_82CFFBE4;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x82CFFBD8;
	sub_83120738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82d39310
	ctx.lr = 0x82CFFBE4;
	sub_82D39310(ctx, base);
loc_82CFFBE4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CFFC00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cffc84
	if (cr6.eq) goto loc_82CFFC84;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// stw r23,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r23.u32);
	// stw r22,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r22.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r22,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r22.u8);
loc_82CFFC20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cffc20
	if (!cr6.eq) goto loc_82CFFC20;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CFFC44;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CFFC58;
	sub_82D291E0(ctx, base);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cffc78
	if (cr6.lt) goto loc_82CFFC78;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CFFC78;
	sub_825952B8(ctx, base);
loc_82CFFC78:
	// stw r23,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r23.u32);
	// stw r22,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r22.u32);
	// stb r22,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r22.u8);
loc_82CFFC84:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,31152(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 31152);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFFC9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cffd4c
	if (cr6.eq) goto loc_82CFFD4C;
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// bne cr6,0x82cffcbc
	if (!cr6.eq) goto loc_82CFFCBC;
	// clrldi r4,r28,32
	ctx.r4.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82CFFCB8;
	sub_82D294D0(ctx, base);
	// b 0x82cffd4c
	goto loc_82CFFD4C;
loc_82CFFCBC:
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// stw r22,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r22.u32);
	// addi r4,r20,-457
	ctx.r4.s64 = ctx.r20.s64 + -457;
	// std r11,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r11.u64);
	// lfd f0,384(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stb r22,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r22.u8);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fdivs f28,f12,f29
	ctx.f28.f64 = double(float(ctx.f12.f64 / ctx.f29.f64));
	// bl 0x8259cc28
	ctx.lr = 0x82CFFCF0;
	sub_8259CC28(ctx, base);
	// stfd f28,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f28.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// ori r4,r4,184
	ctx.r4.u64 = ctx.r4.u64 | 184;
	// bl 0x82d042a8
	ctx.lr = 0x82CFFD0C;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CFFD20;
	sub_82D291E0(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cffd40
	if (cr6.lt) goto loc_82CFFD40;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CFFD40;
	sub_825952B8(ctx, base);
loc_82CFFD40:
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// stw r22,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r22.u32);
	// stb r22,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r22.u8);
loc_82CFFD4C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,30784(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30784);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFFD64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cffdfc
	if (cr6.eq) goto loc_82CFFDFC;
	// lwz r11,684(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// beq cr6,0x82cffdec
	if (cr6.eq) goto loc_82CFFDEC;
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// bne cr6,0x82cffd90
	if (!cr6.eq) goto loc_82CFFD90;
	// clrldi r4,r27,32
	ctx.r4.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82CFFD8C;
	sub_82D294D0(ctx, base);
	// b 0x82cffdfc
	goto loc_82CFFDFC;
loc_82CFFD90:
	// addi r4,r20,-427
	ctx.r4.s64 = ctx.r20.s64 + -427;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x837b0c10
	ctx.lr = 0x82CFFD9C;
	sub_837B0C10(ctx, base);
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// std r11,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// ori r4,r4,184
	ctx.r4.u64 = ctx.r4.u64 | 184;
	// lfd f0,368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f29.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82d042a8
	ctx.lr = 0x82CFFDCC;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CFFDE0;
	sub_82D291E0(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8387e8e0
	ctx.lr = 0x82CFFDE8;
	sub_8387E8E0(ctx, base);
	// b 0x82cffdfc
	goto loc_82CFFDFC;
loc_82CFFDEC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CFFDFC;
	sub_82D2AEC8(ctx, base);
loc_82CFFDFC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,31156(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 31156);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFFE14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cffebc
	if (cr6.eq) goto loc_82CFFEBC;
	// lwz r11,684(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// beq cr6,0x82cffeac
	if (cr6.eq) goto loc_82CFFEAC;
	// stw r23,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r23.u32);
	// addi r4,r20,-426
	ctx.r4.s64 = ctx.r20.s64 + -426;
	// stw r22,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r22,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r22.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8259cc28
	ctx.lr = 0x82CFFE48;
	sub_8259CC28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cfebf8
	ctx.lr = 0x82CFFE54;
	sub_82CFEBF8(ctx, base);
	// lis r4,562
	ctx.r4.s64 = 36831232;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,39
	ctx.r4.u64 = ctx.r4.u64 | 39;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d042a8
	ctx.lr = 0x82CFFE68;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CFFE7C;
	sub_82D291E0(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cffe9c
	if (cr6.lt) goto loc_82CFFE9C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CFFE9C;
	sub_825952B8(ctx, base);
loc_82CFFE9C:
	// stw r23,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r23.u32);
	// stw r22,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r22.u32);
	// stb r22,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r22.u8);
	// b 0x82cffebc
	goto loc_82CFFEBC;
loc_82CFFEAC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CFFEBC;
	sub_82D2AEC8(ctx, base);
loc_82CFFEBC:
	// cmplw cr6,r26,r19
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r19.u32, xer);
	// beq cr6,0x82cfffec
	if (cr6.eq) goto loc_82CFFFEC;
	// b 0x82cfffe8
	goto loc_82CFFFE8;
loc_82CFFEC8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cffee0
	if (cr6.eq) goto loc_82CFFEE0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CFFEE0;
	sub_82D2AEC8(ctx, base);
loc_82CFFEE0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CFFEFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfff64
	if (cr6.eq) goto loc_82CFFF64;
	// stw r23,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r23.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// stw r22,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r22.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r22,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r22.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8259cc28
	ctx.lr = 0x82CFFF24;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CFFF38;
	sub_82D291E0(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cfff58
	if (cr6.lt) goto loc_82CFFF58;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CFFF58;
	sub_825952B8(ctx, base);
loc_82CFFF58:
	// stw r23,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r23.u32);
	// stw r22,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r22.u32);
	// stb r22,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r22.u8);
loc_82CFFF64:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,31152(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 31152);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFFF7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfff90
	if (cr6.eq) goto loc_82CFFF90;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CFFF90;
	sub_82D2AEC8(ctx, base);
loc_82CFFF90:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,30784(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30784);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFFFA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfffbc
	if (cr6.eq) goto loc_82CFFFBC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CFFFBC;
	sub_82D2AEC8(ctx, base);
loc_82CFFFBC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,31156(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 31156);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CFFFD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cfffe8
	if (cr6.eq) goto loc_82CFFFE8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CFFFE8;
	sub_82D2AEC8(ctx, base);
loc_82CFFFE8:
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82CFFFEC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r21,1
	cr6.compare<uint32_t>(ctx.r21.u32, 1, xer);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bge cr6,0x82d00010
	if (!cr6.lt) goto loc_82D00010;
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x82d00038
	goto loc_82D00038;
loc_82D00010:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82d00030
	if (!cr6.eq) goto loc_82D00030;
	// lwz r4,-24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// b 0x82d00034
	goto loc_82D00034;
loc_82D00030:
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
loc_82D00034:
	// bctrl 
	ctx.lr = 0x82D00038;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D00038:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D00050;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d00060
	if (cr6.eq) goto loc_82D00060;
	// clrldi r4,r21,32
	ctx.r4.u64 = ctx.r21.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82D00060;
	sub_82D294D0(ctx, base);
loc_82D00060:
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r17,r17,108
	ctx.r17.s64 = ctx.r17.s64 + 108;
loc_82D0006C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82cff998
	if (cr6.lt) goto loc_82CFF998;
loc_82D00080:
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82d000c4
	if (cr6.eq) goto loc_82D000C4;
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// beq cr6,0x82d000b0
	if (cr6.eq) goto loc_82D000B0;
loc_82D0009C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82D000A4;
	sub_83102DB0(ctx, base);
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82d0009c
	if (!cr6.eq) goto loc_82D0009C;
loc_82D000B0:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x825952b8
	ctx.lr = 0x82D000C4;
	sub_825952B8(ctx, base);
loc_82D000C4:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7c4
	ctx.lr = 0x82D000D0;
	__restfpr_28(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D000D4"))) PPC_WEAK_FUNC(sub_82D000D4);
PPC_FUNC_IMPL(__imp__sub_82D000D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D000D8"))) PPC_WEAK_FUNC(sub_82D000D8);
PPC_FUNC_IMPL(__imp__sub_82D000D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82D000E0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce76c
	ctx.lr = 0x82D000E8;
	__savefpr_25(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d00520
	if (cr6.eq) goto loc_82D00520;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r15,r28
	ctx.r15.u64 = ctx.r28.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// beq 0x82d00180
	if (cr0.eq) goto loc_82D00180;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82D00134:
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x83129988
	ctx.lr = 0x82D00140;
	sub_83129988(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x82D0015C;
	sub_835977D8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// blt cr6,0x82d00134
	if (cr6.lt) goto loc_82D00134;
	// lwz r15,112(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82D00180:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r23,r27,100
	ctx.r23.s64 = ctx.r27.s64 + 100;
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f26,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f26.f64 = double(temp.f32);
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
	// bl 0x82dad028
	ctx.lr = 0x82D0019C;
	sub_82DAD028(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// li r14,2
	ctx.r14.s64 = 2;
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d00508
	if (cr6.eq) goto loc_82D00508;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfs f28,22108(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22108);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,20056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20056);
	ctx.f29.f64 = double(temp.f32);
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// lfs f27,-24912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24912);
	ctx.f27.f64 = double(temp.f32);
	// li r27,15
	ctx.r27.s64 = 15;
	// lfs f25,-23488(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23488);
	ctx.f25.f64 = double(temp.f32);
	// lis r19,-31776
	ctx.r19.s64 = -2082471936;
	// lis r21,-31759
	ctx.r21.s64 = -2081357824;
	// addi r25,r11,-14198
	ctx.r25.s64 = ctx.r11.s64 + -14198;
	// addi r18,r10,15320
	ctx.r18.s64 = ctx.r10.s64 + 15320;
loc_82D001F8:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82D00204;
	sub_82D2D580(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d004fc
	if (cr6.eq) goto loc_82D004FC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r17,r8
	cr6.compare<uint32_t>(ctx.r17.u32, ctx.r8.u32, xer);
	// blt cr6,0x82d0024c
	if (cr6.lt) goto loc_82D0024C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82D00238;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82D00248;
	sub_82D2AEC8(ctx, base);
	// b 0x82d004fc
	goto loc_82D004FC;
loc_82D0024C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// bne cr6,0x82d002a8
	if (!cr6.eq) goto loc_82D002A8;
	// fmr f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f26.f64;
loc_82D00258:
	// fadds f13,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_82D00274:
	// fcfid f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fsel f0,f31,f30,f29
	ctx.f0.f64 = ctx.f31.f64 >= 0.0 ? ctx.f30.f64 : ctx.f29.f64;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// ble cr6,0x82d00304
	if (!cr6.gt) goto loc_82D00304;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bge cr6,0x82d00300
	if (!cr6.lt) goto loc_82D00300;
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
	// b 0x82d00304
	goto loc_82D00304;
loc_82D002A8:
	// lwzx r9,r24,r15
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r15.u32);
	// clrldi r10,r22,32
	ctx.r10.u64 = ctx.r22.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r9,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r9.u64);
	// lfd f12,232(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fmuls f0,f8,f25
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f25.f64));
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x82d00258
	if (!cr6.lt) goto loc_82D00258;
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// lfd f11,224(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// b 0x82d00274
	goto loc_82D00274;
loc_82D00300:
	// fsubs f31,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
loc_82D00304:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// fctidz f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,30780(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30780);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D00328;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d003a0
	if (cr6.eq) goto loc_82D003A0;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// addi r4,r25,-32
	ctx.r4.s64 = ctx.r25.s64 + -32;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82D00350;
	sub_8259CC28(ctx, base);
	// lis r4,562
	ctx.r4.s64 = 36831232;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,39
	ctx.r4.u64 = ctx.r4.u64 | 39;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x82D00364;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82D00378;
	sub_82D291E0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d00394
	if (cr6.lt) goto loc_82D00394;
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82D00394;
	sub_825952B8(ctx, base);
loc_82D00394:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
loc_82D003A0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x82cfeea8
	ctx.lr = 0x82D003C4;
	sub_82CFEEA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// bge cr6,0x82d00468
	if (!cr6.lt) goto loc_82D00468;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82a8c428
	ctx.lr = 0x82D003E0;
	sub_82A8C428(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,18428(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 18428);
	// bl 0x82473550
	ctx.lr = 0x82D003EC;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474170
	ctx.lr = 0x82D003F4;
	sub_82474170(ctx, base);
	// addi r4,r25,-31
	ctx.r4.s64 = ctx.r25.s64 + -31;
	// bl 0x82473550
	ctx.lr = 0x82D003FC;
	sub_82473550(ctx, base);
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a79bf8
	ctx.lr = 0x82D00408;
	sub_82A79BF8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d0041c
	if (!cr6.lt) goto loc_82D0041C;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_82D0041C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D00434;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d00448
	if (cr6.lt) goto loc_82D00448;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x82D00448;
	sub_82416268(ctx, base);
loc_82D00448:
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// stb r28,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r28.u8);
	// bl 0x82a79160
	ctx.lr = 0x82D0045C;
	sub_82A79160(ctx, base);
	// stw r18,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r18.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x831ccf00
	ctx.lr = 0x82D00468;
	sub_831CCF00(ctx, base);
loc_82D00468:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r28.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x82D00484;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwzx r4,r11,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x82cfed70
	ctx.lr = 0x82D00494;
	sub_82CFED70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d004cc
	if (cr6.eq) goto loc_82D004CC;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D004B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d004cc
	if (cr6.eq) goto loc_82D004CC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82d291e0
	ctx.lr = 0x82D004CC;
	sub_82D291E0(ctx, base);
loc_82D004CC:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d004f0
	if (cr6.lt) goto loc_82D004F0;
	// stw r14,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82D004F0;
	sub_825952B8(ctx, base);
loc_82D004F0:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r28.u8);
loc_82D004FC:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplw cr6,r20,r16
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r16.u32, xer);
	// blt cr6,0x82d001f8
	if (cr6.lt) goto loc_82D001F8;
loc_82D00508:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// beq cr6,0x82d00520
	if (cr6.eq) goto loc_82D00520;
	// stw r14,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r14.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x82D00520;
	sub_825952B8(ctx, base);
loc_82D00520:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7b8
	ctx.lr = 0x82D0052C;
	__restfpr_25(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D00530"))) PPC_WEAK_FUNC(sub_82D00530);
PPC_FUNC_IMPL(__imp__sub_82D00530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D00538;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D00560;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d005a8
	if (cr6.eq) goto loc_82D005A8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cda880
	ctx.lr = 0x82D0057C;
	sub_82CDA880(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-13288
	ctx.r9.s64 = ctx.r11.s64 + -13288;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D005A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D005B4"))) PPC_WEAK_FUNC(sub_82D005B4);
PPC_FUNC_IMPL(__imp__sub_82D005B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D005B8"))) PPC_WEAK_FUNC(sub_82D005B8);
PPC_FUNC_IMPL(__imp__sub_82D005B8) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-13288
	ctx.r9.s64 = ctx.r11.s64 + -13288;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82cda920
	ctx.lr = 0x82D005F0;
	sub_82CDA920(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d00608
	if (cr6.eq) goto loc_82D00608;
	// bl 0x82416268
	ctx.lr = 0x82D00604;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D00608:
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

__attribute__((alias("__imp__sub_82D00620"))) PPC_WEAK_FUNC(sub_82D00620);
PPC_FUNC_IMPL(__imp__sub_82D00620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D00628;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82D00634;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d006b8
	if (cr6.eq) goto loc_82D006B8;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D00650:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82d00650
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D00650;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r28,200(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,168(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r29,196(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x82aad610
	ctx.lr = 0x82D00680;
	sub_82AAD610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d006b8
	if (cr6.eq) goto loc_82D006B8;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r5,119
	ctx.r5.s64 = 119;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,636(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// bl 0x82aaf090
	ctx.lr = 0x82D006A0;
	sub_82AAF090(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83777480
	ctx.lr = 0x82D006B8;
	sub_83777480(ctx, base);
loc_82D006B8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D006C0"))) PPC_WEAK_FUNC(sub_82D006C0);
PPC_FUNC_IMPL(__imp__sub_82D006C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D006C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,44(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// bl 0x82cd69b0
	ctx.lr = 0x82D006DC;
	sub_82CD69B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82D006F4;
	sub_82572FA0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bf4550
	ctx.lr = 0x82D00700;
	sub_82BF4550(ctx, base);
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82D00710;
	sub_82572FA0(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82D00714;
	sub_83763EF8(ctx, base);
	// bl 0x837653c0
	ctx.lr = 0x82D00718;
	sub_837653C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r3.u32);
	// beq cr6,0x82d00760
	if (cr6.eq) goto loc_82D00760;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
	// bl 0x82572fa0
	ctx.lr = 0x82D0073C;
	sub_82572FA0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x83072a20
	ctx.lr = 0x82D0074C;
	sub_83072A20(ctx, base);
	// bl 0x82bda618
	ctx.lr = 0x82D00750;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d00760
	if (cr6.eq) goto loc_82D00760;
	// bl 0x82bda618
	ctx.lr = 0x82D0075C;
	sub_82BDA618(ctx, base);
	// bl 0x82bdb688
	ctx.lr = 0x82D00760;
	sub_82BDB688(ctx, base);
loc_82D00760:
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x831cdcf0
	ctx.lr = 0x82D00770;
	sub_831CDCF0(ctx, base);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r4,r11,-13594
	ctx.r4.s64 = ctx.r11.s64 + -13594;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82D00794;
	sub_8259CC28(ctx, base);
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,59
	ctx.r4.u64 = ctx.r4.u64 | 59;
	// bl 0x82d042a8
	ctx.lr = 0x82D007A4;
	sub_82D042A8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82d007b8
	if (!cr6.lt) goto loc_82D007B8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82D007B8:
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x831d0b58
	ctx.lr = 0x82D007C8;
	sub_831D0B58(ctx, base);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// bl 0x8308e078
	ctx.lr = 0x82D007D4;
	sub_8308E078(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x83072708
	ctx.lr = 0x82D007F8;
	sub_83072708(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82572fa0
	ctx.lr = 0x82D00808;
	sub_82572FA0(ctx, base);
	// li r6,176
	ctx.r6.s64 = 176;
	// li r5,320
	ctx.r5.s64 = 320;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8306ac18
	ctx.lr = 0x82D0081C;
	sub_8306AC18(ctx, base);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lwz r4,112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x830830c8
	ctx.lr = 0x82D00838;
	sub_830830C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d00850
	if (cr6.eq) goto loc_82D00850;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82D00850;
	sub_83103100(ctx, base);
loc_82D00850:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82572fa0
	ctx.lr = 0x82D0085C;
	sub_82572FA0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d0087c
	if (cr6.lt) goto loc_82D0087C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D0087C;
	sub_825952B8(ctx, base);
loc_82D0087C:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x82572fa0
	ctx.lr = 0x82D00894;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82D008A0;
	sub_82572FA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D008AC"))) PPC_WEAK_FUNC(sub_82D008AC);
PPC_FUNC_IMPL(__imp__sub_82D008AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D008B0"))) PPC_WEAK_FUNC(sub_82D008B0);
PPC_FUNC_IMPL(__imp__sub_82D008B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D008B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D008DC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d00924
	if (cr6.eq) goto loc_82D00924;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cda880
	ctx.lr = 0x82D008F8;
	sub_82CDA880(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-12632
	ctx.r9.s64 = ctx.r11.s64 + -12632;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D00924:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D00930"))) PPC_WEAK_FUNC(sub_82D00930);
PPC_FUNC_IMPL(__imp__sub_82D00930) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-12632
	ctx.r9.s64 = ctx.r11.s64 + -12632;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82cda920
	ctx.lr = 0x82D00968;
	sub_82CDA920(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d00980
	if (cr6.eq) goto loc_82D00980;
	// bl 0x82416268
	ctx.lr = 0x82D0097C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D00980:
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

__attribute__((alias("__imp__sub_82D00998"))) PPC_WEAK_FUNC(sub_82D00998);
PPC_FUNC_IMPL(__imp__sub_82D00998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82D009B4;
	sub_83763EF8(ctx, base);
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r31,188(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D009C8:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82d009c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D009C8;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82D009D8;
	sub_83763EF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83775ad8
	ctx.lr = 0x82D009E4;
	sub_83775AD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d00a1c
	if (cr6.eq) goto loc_82D00A1C;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,636(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// bl 0x82a9f728
	ctx.lr = 0x82D00A04;
	sub_82A9F728(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x83763ef8
	ctx.lr = 0x82D00A0C;
	sub_83763EF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x83775980
	ctx.lr = 0x82D00A1C;
	sub_83775980(ctx, base);
loc_82D00A1C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_82D00A34"))) PPC_WEAK_FUNC(sub_82D00A34);
PPC_FUNC_IMPL(__imp__sub_82D00A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D00A38"))) PPC_WEAK_FUNC(sub_82D00A38);
PPC_FUNC_IMPL(__imp__sub_82D00A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D00A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,44(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// bl 0x82cd69b0
	ctx.lr = 0x82D00A54;
	sub_82CD69B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82D00A6C;
	sub_82572FA0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bf4550
	ctx.lr = 0x82D00A78;
	sub_82BF4550(ctx, base);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82572fa0
	ctx.lr = 0x82D00A88;
	sub_82572FA0(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82D00A8C;
	sub_83763EF8(ctx, base);
	// lwz r10,232(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r10.u32);
	// beq cr6,0x82d00ab8
	if (cr6.eq) goto loc_82D00AB8;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82D00AAC;
	sub_82572FA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x82aa2888
	ctx.lr = 0x82D00AB8;
	sub_82AA2888(ctx, base);
loc_82D00AB8:
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x831cdcf0
	ctx.lr = 0x82D00AC8;
	sub_831CDCF0(ctx, base);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r4,r11,-12938
	ctx.r4.s64 = ctx.r11.s64 + -12938;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82D00AEC;
	sub_8259CC28(ctx, base);
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,311
	ctx.r4.u64 = ctx.r4.u64 | 311;
	// bl 0x82d042a8
	ctx.lr = 0x82D00AFC;
	sub_82D042A8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82d00b10
	if (!cr6.lt) goto loc_82D00B10;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82D00B10:
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x831d0b58
	ctx.lr = 0x82D00B20;
	sub_831D0B58(ctx, base);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x8308e078
	ctx.lr = 0x82D00B2C;
	sub_8308E078(ctx, base);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82D00B4C;
	sub_82572FA0(ctx, base);
	// li r6,176
	ctx.r6.s64 = 176;
	// li r5,320
	ctx.r5.s64 = 320;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8306ac18
	ctx.lr = 0x82D00B60;
	sub_8306AC18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r4,112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x830830c8
	ctx.lr = 0x82D00B7C;
	sub_830830C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d00b94
	if (cr6.eq) goto loc_82D00B94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82D00B94;
	sub_83103100(ctx, base);
loc_82D00B94:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d00bb4
	if (cr6.lt) goto loc_82D00BB4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D00BB4;
	sub_825952B8(ctx, base);
loc_82D00BB4:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x82572fa0
	ctx.lr = 0x82D00BCC;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x82D00BD8;
	sub_82572FA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D00BE4"))) PPC_WEAK_FUNC(sub_82D00BE4);
PPC_FUNC_IMPL(__imp__sub_82D00BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D00BE8"))) PPC_WEAK_FUNC(sub_82D00BE8);
PPC_FUNC_IMPL(__imp__sub_82D00BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D00BF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D00C14;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d00c5c
	if (cr6.eq) goto loc_82D00C5C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cda880
	ctx.lr = 0x82D00C30;
	sub_82CDA880(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11976
	ctx.r9.s64 = ctx.r11.s64 + -11976;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D00C5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D00C68"))) PPC_WEAK_FUNC(sub_82D00C68);
PPC_FUNC_IMPL(__imp__sub_82D00C68) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11976
	ctx.r9.s64 = ctx.r11.s64 + -11976;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82cda920
	ctx.lr = 0x82D00CA0;
	sub_82CDA920(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d00cb8
	if (cr6.eq) goto loc_82D00CB8;
	// bl 0x82416268
	ctx.lr = 0x82D00CB4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D00CB8:
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

__attribute__((alias("__imp__sub_82D00CD0"))) PPC_WEAK_FUNC(sub_82D00CD0);
PPC_FUNC_IMPL(__imp__sub_82D00CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D00CD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x82D00CF0;
	sub_831CDCF0(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82D00CF4;
	sub_83763EF8(ctx, base);
	// lwz r31,168(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// bl 0x83763ef8
	ctx.lr = 0x82D00CFC;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d00d2c
	if (cr6.eq) goto loc_82D00D2C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8306e988
	ctx.lr = 0x82D00D18;
	sub_8306E988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83773c28
	ctx.lr = 0x82D00D2C;
	sub_83773C28(ctx, base);
loc_82D00D2C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d00d64
	if (cr6.eq) goto loc_82D00D64;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,636(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// bl 0x82a9bc48
	ctx.lr = 0x82D00D4C;
	sub_82A9BC48(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x83763ef8
	ctx.lr = 0x82D00D54;
	sub_83763EF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x83775270
	ctx.lr = 0x82D00D64;
	sub_83775270(ctx, base);
loc_82D00D64:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D00D6C"))) PPC_WEAK_FUNC(sub_82D00D6C);
PPC_FUNC_IMPL(__imp__sub_82D00D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D00D70"))) PPC_WEAK_FUNC(sub_82D00D70);
PPC_FUNC_IMPL(__imp__sub_82D00D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D00D78;
	__savegprlr_29(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,44(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// bl 0x82cd69b0
	ctx.lr = 0x82D00D8C;
	sub_82CD69B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82D00DA4;
	sub_82572FA0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bf4550
	ctx.lr = 0x82D00DB0;
	sub_82BF4550(ctx, base);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82572fa0
	ctx.lr = 0x82D00DC0;
	sub_82572FA0(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82D00DC4;
	sub_83763EF8(ctx, base);
	// lwz r10,228(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r10.u32);
	// beq cr6,0x82d00df0
	if (cr6.eq) goto loc_82D00DF0;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82D00DE4;
	sub_82572FA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x82aa2888
	ctx.lr = 0x82D00DF0;
	sub_82AA2888(ctx, base);
loc_82D00DF0:
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x831cdcf0
	ctx.lr = 0x82D00E00;
	sub_831CDCF0(ctx, base);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r4,r11,-12282
	ctx.r4.s64 = ctx.r11.s64 + -12282;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82D00E24;
	sub_8259CC28(ctx, base);
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,440
	ctx.r4.u64 = ctx.r4.u64 | 440;
	// bl 0x82d042a8
	ctx.lr = 0x82D00E34;
	sub_82D042A8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82d00e48
	if (!cr6.lt) goto loc_82D00E48;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82D00E48:
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x831d0b58
	ctx.lr = 0x82D00E58;
	sub_831D0B58(ctx, base);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x8308e078
	ctx.lr = 0x82D00E64;
	sub_8308E078(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82D00E94;
	sub_82572FA0(ctx, base);
	// li r6,176
	ctx.r6.s64 = 176;
	// li r5,320
	ctx.r5.s64 = 320;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8306ac18
	ctx.lr = 0x82D00EA8;
	sub_8306AC18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r4,112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x830830c8
	ctx.lr = 0x82D00EC4;
	sub_830830C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d00edc
	if (cr6.eq) goto loc_82D00EDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82D00EDC;
	sub_83103100(ctx, base);
loc_82D00EDC:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d00efc
	if (cr6.lt) goto loc_82D00EFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D00EFC;
	sub_825952B8(ctx, base);
loc_82D00EFC:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x82572fa0
	ctx.lr = 0x82D00F14;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x82D00F20;
	sub_82572FA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D00F2C"))) PPC_WEAK_FUNC(sub_82D00F2C);
PPC_FUNC_IMPL(__imp__sub_82D00F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D00F30"))) PPC_WEAK_FUNC(sub_82D00F30);
PPC_FUNC_IMPL(__imp__sub_82D00F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82d9dcf0
	ctx.lr = 0x82D00F68;
	sub_82D9DCF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d9dcf0
	ctx.lr = 0x82D00F74;
	sub_82D9DCF0(ctx, base);
	// li r31,13
	ctx.r31.s64 = 13;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x83179518
	ctx.lr = 0x82D00F94;
	sub_83179518(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x83179518
	ctx.lr = 0x82D00FB0;
	sub_83179518(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82d00fc4
	if (!cr6.eq) goto loc_82D00FC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d00fd0
	goto loc_82D00FD0;
loc_82D00FC4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82D00FD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82D00FE8"))) PPC_WEAK_FUNC(sub_82D00FE8);
PPC_FUNC_IMPL(__imp__sub_82D00FE8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x831156e8
	ctx.lr = 0x82D0101C;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82D0102C;
	sub_8311BF98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311bf98
	ctx.lr = 0x82D0103C;
	sub_8311BF98(ctx, base);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 + 56;
loc_82D01044:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82d01068
	if (cr6.eq) goto loc_82D01068;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82d01044
	if (cr6.eq) goto loc_82D01044;
loc_82D01068:
	// neg r11,r9
	ctx.r11.s64 = -ctx.r9.s64;
	// andc r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82D0108C"))) PPC_WEAK_FUNC(sub_82D0108C);
PPC_FUNC_IMPL(__imp__sub_82D0108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D01090"))) PPC_WEAK_FUNC(sub_82D01090);
PPC_FUNC_IMPL(__imp__sub_82D01090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D01098;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82D010A8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d010b8
	if (!cr6.eq) goto loc_82D010B8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D010B8:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D010C0;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82D010C4;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82D010C8;
	sub_825832F0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r30.u8);
	// stb r30,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r30.u8);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// stb r30,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r30.u8);
	// stb r30,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r30.u8);
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// stb r30,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r30.u8);
	// stb r30,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r30.u8);
	// stb r30,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r30.u8);
	// stb r30,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r30.u8);
	// stb r30,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r30.u8);
	// beq cr6,0x82d011e4
	if (cr6.eq) goto loc_82D011E4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D01118;
	sub_82D98848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d011e4
	if (cr6.eq) goto loc_82D011E4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d988d8
	ctx.lr = 0x82D01130;
	sub_82D988D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d01174
	if (!cr6.eq) goto loc_82D01174;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// lbz r10,37(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// lbz r9,38(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 38);
	// lbz r8,39(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 39);
	// lbz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// lbz r6,41(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// lbz r5,42(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// lbz r4,43(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 43);
	// lbz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// lbz r29,45(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// lbz r28,46(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// lbz r26,47(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// lbz r25,48(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// lbz r31,49(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// b 0x82d011ac
	goto loc_82D011AC;
loc_82D01174:
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// lbz r10,51(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// lbz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// lbz r8,53(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// lbz r7,54(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 54);
	// lbz r6,55(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 55);
	// lbz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// lbz r4,57(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// lbz r3,58(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 58);
	// lbz r29,59(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 59);
	// lbz r28,60(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// lbz r26,61(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 61);
	// lbz r25,62(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 62);
	// lbz r31,63(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 63);
loc_82D011AC:
	// stb r31,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r31.u8);
	// stb r25,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r25.u8);
	// stb r26,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r26.u8);
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r28.u8);
	// stb r29,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r29.u8);
	// stb r3,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r3.u8);
	// stb r4,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// stb r5,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r5.u8);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_82D011E4:
	// cmpwi cr6,r27,7
	cr6.compare<int32_t>(ctx.r27.s32, 7, xer);
	// blt cr6,0x82d011f4
	if (cr6.lt) goto loc_82D011F4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82d01200
	goto loc_82D01200;
loc_82D011F4:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_82D01200:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r27,7
	cr6.compare<int32_t>(ctx.r27.s32, 7, xer);
	// bge cr6,0x82d01218
	if (!cr6.lt) goto loc_82D01218;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lbzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
loc_82D01218:
	// cmplwi cr6,r11,69
	cr6.compare<uint32_t>(ctx.r11.u32, 69, xer);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// li r11,69
	ctx.r11.s64 = 69;
	// blt cr6,0x82d01244
	if (cr6.lt) goto loc_82D01244;
	// subfc r8,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r9,2
	ctx.r9.s64 = 2;
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// and r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 & ctx.r9.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D01244:
	// subfc r10,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0125C"))) PPC_WEAK_FUNC(sub_82D0125C);
PPC_FUNC_IMPL(__imp__sub_82D0125C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D01260"))) PPC_WEAK_FUNC(sub_82D01260);
PPC_FUNC_IMPL(__imp__sub_82D01260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D01268;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82D01278;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d01288
	if (!cr6.eq) goto loc_82D01288;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D01288:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D01290;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82D01294;
	sub_83102DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82D0129C;
	sub_82D9A868(ctx, base);
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(ctx.r31.s32, 7, xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r29,9(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r28,10(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r27,11(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r11,13(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// stb r6,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r6.u8);
	// stb r5,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r5.u8);
	// stb r4,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r4.u8);
	// stb r3,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r3.u8);
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// stb r29,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r29.u8);
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r28.u8);
	// stb r27,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r27.u8);
	// stb r26,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r26.u8);
	// stb r11,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r11.u8);
	// blt cr6,0x82d01320
	if (cr6.lt) goto loc_82D01320;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d0132c
	goto loc_82D0132C;
loc_82D01320:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_82D0132C:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(ctx.r31.s32, 7, xer);
	// blt cr6,0x82d01340
	if (cr6.lt) goto loc_82D01340;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d0134c
	goto loc_82D0134C;
loc_82D01340:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_82D0134C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,69
	cr6.compare<uint32_t>(ctx.r9.u32, 69, xer);
	// li r11,69
	ctx.r11.s64 = 69;
	// blt cr6,0x82d01378
	if (cr6.lt) goto loc_82D01378;
	// subfc r8,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r9,2
	ctx.r9.s64 = 2;
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// and r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 & ctx.r9.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D01378:
	// subfc r10,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D01390"))) PPC_WEAK_FUNC(sub_82D01390);
PPC_FUNC_IMPL(__imp__sub_82D01390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D01398;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d01090
	ctx.lr = 0x82D013B0;
	sub_82D01090(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d01260
	ctx.lr = 0x82D013C0;
	sub_82D01260(ctx, base);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// beq cr6,0x82d013d0
	if (cr6.eq) goto loc_82D013D0;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x82d013dc
	if (!cr6.eq) goto loc_82D013DC;
loc_82D013D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D013DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D013E8"))) PPC_WEAK_FUNC(sub_82D013E8);
PPC_FUNC_IMPL(__imp__sub_82D013E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D013F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r7,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-11160
	ctx.r31.s64 = ctx.r11.s64 + -11160;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r11,r31,-252
	ctx.r11.s64 = ctx.r31.s64 + -252;
	// addi r10,r31,-236
	ctx.r10.s64 = ctx.r31.s64 + -236;
	// addi r9,r31,-220
	ctx.r9.s64 = ctx.r31.s64 + -220;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r8,r31,-204
	ctx.r8.s64 = ctx.r31.s64 + -204;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r7,r31,-188
	ctx.r7.s64 = ctx.r31.s64 + -188;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d017a0
	if (cr6.eq) goto loc_82D017A0;
	// bl 0x831156e8
	ctx.lr = 0x82D01448;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82d01478
	if (!cr6.eq) goto loc_82D01478;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D01470;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82D01478:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// sth r28,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r28.u16);
	// ld r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82D0148C;
	sub_8311BF98(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// blt cr6,0x82d01700
	if (cr6.lt) goto loc_82D01700;
	// beq cr6,0x82d01624
	if (cr6.eq) goto loc_82D01624;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// blt cr6,0x82d014c8
	if (cr6.lt) goto loc_82D014C8;
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// bctrl 
	ctx.lr = 0x82D014C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82D014C8:
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// bctrl 
	ctx.lr = 0x82D014D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D014EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d017a0
	if (cr6.eq) goto loc_82D017A0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831235b8
	ctx.lr = 0x82D0150C;
	sub_831235B8(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,19152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19152);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d01550
	if (cr6.eq) goto loc_82D01550;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x831235b8
	ctx.lr = 0x82D0153C;
	sub_831235B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d01554
	if (!cr6.eq) goto loc_82D01554;
loc_82D01550:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D01554:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d01584
	if (cr6.eq) goto loc_82D01584;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82D0156C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d32958
	ctx.lr = 0x82D01578;
	sub_82D32958(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82D01580;
	sub_8387E8E0(ctx, base);
	// b 0x82d015c4
	goto loc_82D015C4;
loc_82D01584:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x831235b8
	ctx.lr = 0x82D01598;
	sub_831235B8(ctx, base);
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d015b4
	if (cr6.eq) goto loc_82D015B4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82D015B4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82D015C4;
	sub_82D329F8(ctx, base);
loc_82D015C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D015DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d017a0
	if (cr6.eq) goto loc_82D017A0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82D015F4;
	sub_82D2AEC8(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lhz r4,188(r24)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r24.u32 + 188);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d01610
	if (cr6.eq) goto loc_82D01610;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82D01610:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d32b60
	ctx.lr = 0x82D0161C;
	sub_82D32B60(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82D01624:
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// bctrl 
	ctx.lr = 0x82D0162C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d86078
	ctx.lr = 0x82D01630;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d017a0
	if (cr6.eq) goto loc_82D017A0;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D01640;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82D01644;
	sub_83102DB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82D0164C;
	sub_82D9A868(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,356
	ctx.r5.s64 = ctx.r1.s64 + 356;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// sth r28,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r28.u16);
	// ld r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x83179518
	ctx.lr = 0x82D01668;
	sub_83179518(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82D0167C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// bl 0x82a6a1b8
	ctx.lr = 0x82D0168C;
	sub_82A6A1B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D016A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831513a8
	ctx.lr = 0x82D016B0;
	sub_831513A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bge cr6,0x82d016e4
	if (!cr6.lt) goto loc_82D016E4;
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82D016DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82D016E4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D016F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82D01700:
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// bctrl 
	ctx.lr = 0x82D01708;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D01720;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d017a0
	if (cr6.eq) goto loc_82D017A0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d459d0
	ctx.lr = 0x82D0173C;
	sub_82D459D0(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831235b8
	ctx.lr = 0x82D01750;
	sub_831235B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82D0175C;
	sub_83102DB0(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,356
	ctx.r5.s64 = ctx.r1.s64 + 356;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83179518
	ctx.lr = 0x82D01770;
	sub_83179518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d8bf78
	ctx.lr = 0x82D0177C;
	sub_82D8BF78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d45370
	ctx.lr = 0x82D01788;
	sub_82D45370(ctx, base);
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d45c08
	ctx.lr = 0x82D01794;
	sub_82D45C08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// bl 0x82d45a28
	ctx.lr = 0x82D017A0;
	sub_82D45A28(ctx, base);
loc_82D017A0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D017A8"))) PPC_WEAK_FUNC(sub_82D017A8);
PPC_FUNC_IMPL(__imp__sub_82D017A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82D017B0;
	__savegprlr_18(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d01cf8
	if (cr6.eq) goto loc_82D01CF8;
	// bl 0x82d86078
	ctx.lr = 0x82D017D4;
	sub_82D86078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d01cf8
	if (cr6.eq) goto loc_82D01CF8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D017E8;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82D017EC;
	sub_83102DB0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82D017F4;
	sub_82D9A868(ctx, base);
	// lwz r10,100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r22,r27,100
	ctx.r22.s64 = ctx.r27.s64 + 100;
	// addi r26,r11,-10768
	ctx.r26.s64 = ctx.r11.s64 + -10768;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r4,r26,-372
	ctx.r4.s64 = ctx.r26.s64 + -372;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D0181C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d01cf8
	if (cr6.eq) goto loc_82D01CF8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2b0f8
	ctx.lr = 0x82D01830;
	sub_82D2B0F8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83545640
	ctx.lr = 0x82D01844;
	sub_83545640(ctx, base);
	// bl 0x82d8a7c8
	ctx.lr = 0x82D01848;
	sub_82D8A7C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d018f0
	if (cr6.eq) goto loc_82D018F0;
	// lwz r3,28(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// bl 0x82da2858
	ctx.lr = 0x82D0185C;
	sub_82DA2858(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// bl 0x82da8160
	ctx.lr = 0x82D0186C;
	sub_82DA8160(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d01950
	if (cr6.eq) goto loc_82D01950;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
loc_82D0187C:
	// sth r28,248(r1)
	PPC_STORE_U16(ctx.r1.u32 + 248, ctx.r28.u16);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stw r25,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r25.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da8178
	ctx.lr = 0x82D01894;
	sub_82DA8178(ctx, base);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// beq cr6,0x82d018b8
	if (cr6.eq) goto loc_82D018B8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82da8160
	ctx.lr = 0x82D018AC;
	sub_82DA8160(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82d0187c
	if (cr6.lt) goto loc_82D0187C;
	// b 0x82d01950
	goto loc_82D01950;
loc_82D018B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82da8220
	ctx.lr = 0x82D018C0;
	sub_82DA8220(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82d018e8
	if (cr6.eq) goto loc_82D018E8;
	// addi r4,r26,-364
	ctx.r4.s64 = ctx.r26.s64 + -364;
	// b 0x82d0194c
	goto loc_82D0194C;
loc_82D018E8:
	// addi r4,r26,-344
	ctx.r4.s64 = ctx.r26.s64 + -344;
	// b 0x82d0194c
	goto loc_82D0194C;
loc_82D018F0:
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r10,r21,124
	ctx.r10.s64 = ctx.r21.s64 + 124;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82D01900:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d01920
	if (!cr6.eq) goto loc_82D01920;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82d01900
	if (cr6.lt) goto loc_82D01900;
	// b 0x82d01924
	goto loc_82D01924;
loc_82D01920:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82D01924:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r26,-324
	ctx.r4.s64 = ctx.r26.s64 + -324;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82d0194c
	if (!cr6.eq) goto loc_82D0194C;
	// addi r4,r26,-304
	ctx.r4.s64 = ctx.r26.s64 + -304;
loc_82D0194C:
	// bctrl 
	ctx.lr = 0x82D01950;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D01950:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r26,-284
	ctx.r4.s64 = ctx.r26.s64 + -284;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D01970;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82db7320
	ctx.lr = 0x82D01974;
	sub_82DB7320(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x82d01988
	if (cr6.eq) goto loc_82D01988;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x82d0198c
	if (!cr6.eq) goto loc_82D0198C;
loc_82D01988:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82D0198C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d019f4
	if (cr6.eq) goto loc_82D019F4;
	// lwz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r26,-268
	ctx.r4.s64 = ctx.r26.s64 + -268;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// blt cr6,0x82d019c0
	if (cr6.lt) goto loc_82D019C0;
	// addi r4,r26,-248
	ctx.r4.s64 = ctx.r26.s64 + -248;
loc_82D019C0:
	// bctrl 
	ctx.lr = 0x82D019C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,32(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82d019ec
	if (cr6.eq) goto loc_82D019EC;
	// addi r4,r26,-228
	ctx.r4.s64 = ctx.r26.s64 + -228;
	// b 0x82d01a40
	goto loc_82D01A40;
loc_82D019EC:
	// addi r4,r26,-208
	ctx.r4.s64 = ctx.r26.s64 + -208;
	// b 0x82d01a40
	goto loc_82D01A40;
loc_82D019F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r26,-188
	ctx.r4.s64 = ctx.r26.s64 + -188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D01A0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r26,-168
	ctx.r4.s64 = ctx.r26.s64 + -168;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D01A28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r26,-148
	ctx.r4.s64 = ctx.r26.s64 + -148;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_82D01A40:
	// bctrl 
	ctx.lr = 0x82D01A44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,66(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 66);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r26,-128
	ctx.r4.s64 = ctx.r26.s64 + -128;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82d01a6c
	if (!cr6.eq) goto loc_82D01A6C;
	// addi r4,r26,-112
	ctx.r4.s64 = ctx.r26.s64 + -112;
loc_82D01A6C:
	// bctrl 
	ctx.lr = 0x82D01A70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// bl 0x82d8a820
	ctx.lr = 0x82D01A78;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d01a9c
	if (!cr6.eq) goto loc_82D01A9C;
	// bl 0x82d8a900
	ctx.lr = 0x82D01A88;
	sub_82D8A900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d01a9c
	if (!cr6.eq) goto loc_82D01A9C;
	// addi r4,r26,-60
	ctx.r4.s64 = ctx.r26.s64 + -60;
	// b 0x82d01b78
	goto loc_82D01B78;
loc_82D01A9C:
	// lwz r3,116(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82D01AA4;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82D01AA8;
	sub_825832D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d9d410
	ctx.lr = 0x82D01AB0;
	sub_82D9D410(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82d01b74
	if (cr6.eq) goto loc_82D01B74;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// bl 0x82d9d410
	ctx.lr = 0x82D01AD4;
	sub_82D9D410(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82d01b90
	if (cr0.eq) goto loc_82D01B90;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82D01AEC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9d410
	ctx.lr = 0x82D01AF4;
	sub_82D9D410(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82d01b44
	if (!cr6.gt) goto loc_82D01B44;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d01b50
	if (cr6.eq) goto loc_82D01B50;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bl 0x82d9d410
	ctx.lr = 0x82D01B28;
	sub_82D9D410(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// blt cr6,0x82d01aec
	if (cr6.lt) goto loc_82D01AEC;
	// b 0x82d01b90
	goto loc_82D01B90;
loc_82D01B44:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82D01B50;
	sub_831CC188(ctx, base);
loc_82D01B50:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r26,-92
	ctx.r4.s64 = ctx.r26.s64 + -92;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D01B6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82d01b90
	goto loc_82D01B90;
loc_82D01B74:
	// addi r4,r26,-76
	ctx.r4.s64 = ctx.r26.s64 + -76;
loc_82D01B78:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D01B90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D01B90:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r26,-44
	ctx.r4.s64 = ctx.r26.s64 + -44;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82d01bb8
	if (!cr6.eq) goto loc_82D01BB8;
	// addi r4,r26,-28
	ctx.r4.s64 = ctx.r26.s64 + -28;
loc_82D01BB8:
	// bctrl 
	ctx.lr = 0x82D01BBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// subfic r30,r11,100
	xer.ca = ctx.r11.u32 <= 100;
	ctx.r30.s64 = 100 - ctx.r11.s64;
	// bne cr6,0x82d01c08
	if (!cr6.eq) goto loc_82D01C08;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// addi r4,r26,-12
	ctx.r4.s64 = ctx.r26.s64 + -12;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82D01BF0;
	sub_8259CC28(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,98
	ctx.r5.u64 = ctx.r5.u64 | 98;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82D01C04;
	sub_82A69A28(ctx, base);
	// b 0x82d01c9c
	goto loc_82D01C9C;
loc_82D01C08:
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// sth r25,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r25.u16);
	// bl 0x831156e8
	ctx.lr = 0x82D01C14;
	sub_831156E8(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x82D01C20;
	sub_8311BF98(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D01C38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d01c38
	if (!cr6.eq) goto loc_82D01C38;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D01C5C;
	sub_8259CC28(ctx, base);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82D01C78;
	sub_8259CC28(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82D01C88;
	sub_82A69AD0(ctx, base);
	// bl 0x82db7320
	ctx.lr = 0x82D01C8C;
	sub_82DB7320(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d01c9c
	if (cr6.eq) goto loc_82D01C9C;
	// li r30,100
	ctx.r30.s64 = 100;
loc_82D01C9C:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815d38
	ctx.lr = 0x82D01CA8;
	sub_83815D38(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815b28
	ctx.lr = 0x82D01CB4;
	sub_83815B28(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,8976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x83815b68
	ctx.lr = 0x82D01CDC;
	sub_83815B68(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x82d01cf0
	if (cr6.eq) goto loc_82D01CF0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x838153c8
	ctx.lr = 0x82D01CF0;
	sub_838153C8(ctx, base);
loc_82D01CF0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815cb8
	ctx.lr = 0x82D01CF8;
	sub_83815CB8(ctx, base);
loc_82D01CF8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D01D00"))) PPC_WEAK_FUNC(sub_82D01D00);
PPC_FUNC_IMPL(__imp__sub_82D01D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82d01d9c
	if (cr6.lt) goto loc_82D01D9C;
	// beq cr6,0x82d01d60
	if (cr6.eq) goto loc_82D01D60;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d01dc8
	if (!cr6.lt) goto loc_82D01DC8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,8194
	ctx.r8.u64 = ctx.r9.u64 | 8194;
	// addi r7,r10,21716
	ctx.r7.s64 = ctx.r10.s64 + 21716;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x83103068
	ctx.lr = 0x82D01D50;
	sub_83103068(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D01D60:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,8192
	ctx.r8.u64 = ctx.r9.u64 | 8192;
	// addi r7,r10,21716
	ctx.r7.s64 = ctx.r10.s64 + 21716;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x83103068
	ctx.lr = 0x82D01D8C;
	sub_83103068(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D01D9C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,8193
	ctx.r8.u64 = ctx.r9.u64 | 8193;
	// addi r7,r10,21716
	ctx.r7.s64 = ctx.r10.s64 + 21716;
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83103068
	ctx.lr = 0x82D01DC8;
	sub_83103068(ctx, base);
loc_82D01DC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D01DD8"))) PPC_WEAK_FUNC(sub_82D01DD8);
PPC_FUNC_IMPL(__imp__sub_82D01DD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D01DE0"))) PPC_WEAK_FUNC(sub_82D01DE0);
PPC_FUNC_IMPL(__imp__sub_82D01DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1560);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1556(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1556);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r30,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	// bl 0x82d1c1a8
	ctx.lr = 0x82D01E0C;
	sub_82D1C1A8(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// bge cr6,0x82d01e48
	if (!cr6.lt) goto loc_82D01E48;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,8197
	ctx.r9.u64 = ctx.r10.u64 | 8197;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82D01E44;
	sub_83103068(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82D01E48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D01E5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82D01E74"))) PPC_WEAK_FUNC(sub_82D01E74);
PPC_FUNC_IMPL(__imp__sub_82D01E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D01E78"))) PPC_WEAK_FUNC(sub_82D01E78);
PPC_FUNC_IMPL(__imp__sub_82D01E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D01E80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d01d00
	ctx.lr = 0x82D01E8C;
	sub_82D01D00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82D01E94;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r4,r11,-10224
	ctx.r4.s64 = ctx.r11.s64 + -10224;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D01EB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d01f68
	if (cr6.eq) goto loc_82D01F68;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d33c10
	ctx.lr = 0x82D01EC4;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d01f5c
	if (cr6.eq) goto loc_82D01F5C;
loc_82D01ECC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19d40
	ctx.lr = 0x82D01ED8;
	sub_82D19D40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82D01EE8;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d01f68
	if (cr6.eq) goto loc_82D01F68;
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// add r28,r28,r29
	ctx.r28.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r10,1556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r5,2
	ctx.r5.s64 = 2;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// bge cr6,0x82d01f40
	if (!cr6.lt) goto loc_82D01F40;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82D01F1C;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D01F3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82d01f48
	goto loc_82D01F48;
loc_82D01F40:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82D01F48;
	sub_82D2AEC8(ctx, base);
loc_82D01F48:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82D01F54;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// blt cr6,0x82d01ecc
	if (cr6.lt) goto loc_82D01ECC;
loc_82D01F5C:
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82D01F68;
	sub_82D17DA0(ctx, base);
loc_82D01F68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D01F70"))) PPC_WEAK_FUNC(sub_82D01F70);
PPC_FUNC_IMPL(__imp__sub_82D01F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D01F78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1556);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1560(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1560);
	// addi r30,r3,1556
	ctx.r30.s64 = ctx.r3.s64 + 1556;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r29,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 2;
	// bl 0x82d1c1a8
	ctx.lr = 0x82D01F98;
	sub_82D1C1A8(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// bge cr6,0x82d0200c
	if (!cr6.lt) goto loc_82D0200C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82D01FA8;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82d01fcc
	if (cr6.gt) goto loc_82D01FCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82D01FCC;
	sub_831CC188(ctx, base);
loc_82D01FCC:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// addi r30,r9,21716
	ctx.r30.s64 = ctx.r9.s64 + 21716;
	// ori r7,r8,8196
	ctx.r7.u64 = ctx.r8.u64 | 8196;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r5,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r5.u8);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r6,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r6.u32);
	// bl 0x83103068
	ctx.lr = 0x82D02008;
	sub_83103068(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82D0200C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D02020;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D02028"))) PPC_WEAK_FUNC(sub_82D02028);
PPC_FUNC_IMPL(__imp__sub_82D02028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D02030;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1556);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1560(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1560);
	// addi r30,r3,1556
	ctx.r30.s64 = ctx.r3.s64 + 1556;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r29,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 2;
	// bl 0x82d1c1a8
	ctx.lr = 0x82D02050;
	sub_82D1C1A8(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// bge cr6,0x82d020e4
	if (!cr6.lt) goto loc_82D020E4;
	// bl 0x82d86078
	ctx.lr = 0x82D0205C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d02104
	if (cr6.eq) goto loc_82D02104;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82D0206C;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82D02078;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82d0209c
	if (cr6.gt) goto loc_82D0209C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82D0209C;
	sub_831CC188(ctx, base);
loc_82D0209C:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r4,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r4.u32);
	// bl 0x825832f8
	ctx.lr = 0x82D020B0;
	sub_825832F8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r30,r9,21716
	ctx.r30.s64 = ctx.r9.s64 + 21716;
	// ori r7,r8,8198
	ctx.r7.u64 = ctx.r8.u64 | 8198;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82D020E0;
	sub_83103068(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82D020E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D020F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82D02104;
	sub_82D17DA0(ctx, base);
loc_82D02104:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0210C"))) PPC_WEAK_FUNC(sub_82D0210C);
PPC_FUNC_IMPL(__imp__sub_82D0210C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02110"))) PPC_WEAK_FUNC(sub_82D02110);
PPC_FUNC_IMPL(__imp__sub_82D02110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r11,1572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x82d02120
	if (!cr0.lt) goto loc_82D02120;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82D02120:
	// stw r11,1572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1572, ctx.r11.u32);
	// b 0x82d01e78
	sub_82D01E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D02128"))) PPC_WEAK_FUNC(sub_82D02128);
PPC_FUNC_IMPL(__imp__sub_82D02128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,1572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,1572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1572, ctx.r7.u32);
	// b 0x82d01e78
	sub_82D01E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D02148"))) PPC_WEAK_FUNC(sub_82D02148);
PPC_FUNC_IMPL(__imp__sub_82D02148) {
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
	// bl 0x82d1c1a8
	ctx.lr = 0x82D02160;
	sub_82D1C1A8(ctx, base);
	// lwz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// lwz r10,1560(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82d02184
	if (cr6.gt) goto loc_82D02184;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82D02184;
	sub_831CC188(ctx, base);
loc_82D02184:
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,264
	ctx.r7.s64 = 17301504;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r8,21716
	ctx.r3.s64 = ctx.r8.s64 + 21716;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// ori r6,r7,8200
	ctx.r6.u64 = ctx.r7.u64 | 8200;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r5,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r5.u32);
	// bl 0x83103068
	ctx.lr = 0x82D021C0;
	sub_83103068(ctx, base);
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

__attribute__((alias("__imp__sub_82D021D4"))) PPC_WEAK_FUNC(sub_82D021D4);
PPC_FUNC_IMPL(__imp__sub_82D021D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D021D8"))) PPC_WEAK_FUNC(sub_82D021D8);
PPC_FUNC_IMPL(__imp__sub_82D021D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D021E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d0233c
	if (cr6.eq) goto loc_82D0233C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82D0220C;
	sub_82D2AEC8(ctx, base);
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// lwz r10,1556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// ble cr6,0x82d02230
	if (!cr6.gt) goto loc_82D02230;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82D02230:
	// bl 0x831156e8
	ctx.lr = 0x82D02234;
	sub_831156E8(ctx, base);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82d86078
	ctx.lr = 0x82D0223C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0233c
	if (cr6.eq) goto loc_82D0233C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D0224C;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82D02250;
	sub_83102DB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82D02258;
	sub_82D9A868(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82D02278;
	sub_8311BF98(ctx, base);
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83120738
	ctx.lr = 0x82D02290;
	sub_83120738(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,96(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lwz r4,1572(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// bl 0x82d013e8
	ctx.lr = 0x82D022A8;
	sub_82D013E8(ctx, base);
	// lwz r4,1592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r27,r11,-10176
	ctx.r27.s64 = ctx.r11.s64 + -10176;
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// beq cr6,0x82d0230c
	if (cr6.eq) goto loc_82D0230C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a66ea0
	ctx.lr = 0x82D022C4;
	sub_82A66EA0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82d02304
	if (cr6.eq) goto loc_82D02304;
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// bctrl 
	ctx.lr = 0x82D022E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x82d02308
	goto loc_82D02308;
loc_82D02304:
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
loc_82D02308:
	// bctrl 
	ctx.lr = 0x82D0230C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D0230C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19d40
	ctx.lr = 0x82D02318;
	sub_82D19D40(ctx, base);
	// subf r28,r3,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r3.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82D02324;
	sub_82D19A10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d017a8
	ctx.lr = 0x82D0233C;
	sub_82D017A8(ctx, base);
loc_82D0233C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D02344"))) PPC_WEAK_FUNC(sub_82D02344);
PPC_FUNC_IMPL(__imp__sub_82D02344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02348"))) PPC_WEAK_FUNC(sub_82D02348);
PPC_FUNC_IMPL(__imp__sub_82D02348) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-10072
	ctx.r9.s64 = ctx.r11.s64 + -10072;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,1556(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1556);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d02390
	if (cr6.eq) goto loc_82D02390;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D02390;
	sub_825952B8(ctx, base);
loc_82D02390:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r11,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r11.u32);
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// bl 0x838760e0
	ctx.lr = 0x82D023A8;
	sub_838760E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82D023B0;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_82D023C4"))) PPC_WEAK_FUNC(sub_82D023C4);
PPC_FUNC_IMPL(__imp__sub_82D023C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D023C8"))) PPC_WEAK_FUNC(sub_82D023C8);
PPC_FUNC_IMPL(__imp__sub_82D023C8) {
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
	// bl 0x82d02348
	ctx.lr = 0x82D023E8;
	sub_82D02348(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d02400
	if (cr6.eq) goto loc_82D02400;
	// bl 0x82416268
	ctx.lr = 0x82D023FC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D02400:
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

__attribute__((alias("__imp__sub_82D02418"))) PPC_WEAK_FUNC(sub_82D02418);
PPC_FUNC_IMPL(__imp__sub_82D02418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D02420;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x8308e078
	ctx.lr = 0x82D02448;
	sub_8308E078(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10344
	ctx.r4.s64 = ctx.r11.s64 + -10344;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d253f8
	ctx.lr = 0x82D02464;
	sub_82D253F8(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r10,-10072
	ctx.r8.s64 = ctx.r10.s64 + -10072;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ce9718
	ctx.lr = 0x82D02488;
	sub_82CE9718(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// stw r11,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// addi r23,r6,19200
	ctx.r23.s64 = ctx.r6.s64 + 19200;
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// stw r29,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r29.u32);
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// stw r28,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r28.u32);
	// stb r27,1588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1588, ctx.r27.u8);
	// stw r26,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r26.u32);
	// stb r25,1589(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1589, ctx.r25.u8);
	// stb r24,1590(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1590, ctx.r24.u8);
	// lwz r4,19200(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 19200);
	// bl 0x82d20ae0
	ctx.lr = 0x82D024C8;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82D024D8;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d191f8
	ctx.lr = 0x82D024E0;
	sub_82D191F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82D024E8;
	sub_82D8BB28(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d02550
	if (!cr6.eq) goto loc_82D02550;
	// lbz r11,1589(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1589);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d02510
	if (cr6.eq) goto loc_82D02510;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,464
	ctx.r5.u64 = ctx.r5.u64 | 464;
	// b 0x82d02538
	goto loc_82D02538;
loc_82D02510:
	// lbz r11,1590(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1590);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d02540
	if (cr6.eq) goto loc_82D02540;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82D0252C;
	sub_82D19788(ctx, base);
	// lis r5,60
	ctx.r5.s64 = 3932160;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,81
	ctx.r5.u64 = ctx.r5.u64 | 81;
loc_82D02538:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82D02540;
	sub_82D20EB8(ctx, base);
loc_82D02540:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82D02550;
	sub_82D19788(ctx, base);
loc_82D02550:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82D02560;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82D02570;
	sub_82D19788(ctx, base);
	// lis r5,990
	ctx.r5.s64 = 64880640;
	// li r4,15
	ctx.r4.s64 = 15;
	// ori r5,r5,125
	ctx.r5.u64 = ctx.r5.u64 | 125;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82D02584;
	sub_82D20EB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838760e0
	ctx.lr = 0x82D0258C;
	sub_838760E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D02598"))) PPC_WEAK_FUNC(sub_82D02598);
PPC_FUNC_IMPL(__imp__sub_82D02598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D025A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-1632(r1)
	ea = -1632 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1596
	ctx.r4.s64 = 1596;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x82595718
	ctx.lr = 0x82D025D8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0262c
	if (cr6.eq) goto loc_82D0262C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ce9718
	ctx.lr = 0x82D025F0;
	sub_82CE9718(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// bl 0x82d02418
	ctx.lr = 0x82D02614;
	sub_82D02418(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838760e0
	ctx.lr = 0x82D02620;
	sub_838760E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1632
	ctx.r1.s64 = ctx.r1.s64 + 1632;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82D0262C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x838760e0
	ctx.lr = 0x82D02638;
	sub_838760E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1632
	ctx.r1.s64 = ctx.r1.s64 + 1632;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D02644"))) PPC_WEAK_FUNC(sub_82D02644);
PPC_FUNC_IMPL(__imp__sub_82D02644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02648"))) PPC_WEAK_FUNC(sub_82D02648);
PPC_FUNC_IMPL(__imp__sub_82D02648) {
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
	// lwz r11,1576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1576);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82d026a0
	if (cr6.lt) goto loc_82D026A0;
	// bne cr6,0x82d026e8
	if (!cr6.eq) goto loc_82D026E8;
	// lbz r11,1589(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1589);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d02694
	if (!cr6.eq) goto loc_82D02694;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,500
	ctx.r5.s64 = 32768000;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,31
	ctx.r5.u64 = ctx.r5.u64 | 31;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D02694;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D02694:
	// lis r11,-32048
	ctx.r11.s64 = -2100297728;
	// addi r6,r11,4072
	ctx.r6.s64 = ctx.r11.s64 + 4072;
	// b 0x82d026d4
	goto loc_82D026D4;
loc_82D026A0:
	// lbz r11,1589(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1589);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d026cc
	if (!cr6.eq) goto loc_82D026CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,544
	ctx.r5.u64 = ctx.r5.u64 | 544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D026CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D026CC:
	// lis r11,-32048
	ctx.r11.s64 = -2100297728;
	// addi r6,r11,3888
	ctx.r6.s64 = ctx.r11.s64 + 3888;
loc_82D026D4:
	// lwz r4,1560(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// lwz r3,1556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r5,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// bl 0x82b02be8
	ctx.lr = 0x82D026E8;
	sub_82B02BE8(ctx, base);
loc_82D026E8:
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

__attribute__((alias("__imp__sub_82D026FC"))) PPC_WEAK_FUNC(sub_82D026FC);
PPC_FUNC_IMPL(__imp__sub_82D026FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02700"))) PPC_WEAK_FUNC(sub_82D02700);
PPC_FUNC_IMPL(__imp__sub_82D02700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D02708;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82D02714;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0284c
	if (cr6.eq) goto loc_82D0284C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D02724;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82D02728;
	sub_83102DB0(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82D0272C;
	sub_83102DB0(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d02778
	if (cr6.eq) goto loc_82D02778;
	// addi r28,r30,96
	ctx.r28.s64 = ctx.r30.s64 + 96;
loc_82D02744:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d98cb0
	ctx.lr = 0x82D02750;
	sub_82D98CB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d02768
	if (!cr6.eq) goto loc_82D02768;
	// addi r3,r30,1556
	ctx.r3.s64 = ctx.r30.s64 + 1556;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x82D02768;
	sub_835977D8(ctx, base);
loc_82D02768:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d02744
	if (!cr6.eq) goto loc_82D02744;
loc_82D02778:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82D02780;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-10252
	ctx.r4.s64 = ctx.r11.s64 + -10252;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D0279C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d02648
	ctx.lr = 0x82D027A4;
	sub_82D02648(ctx, base);
	// lwz r5,1556(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	// lwz r8,1560(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r11,r5,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r5.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r5,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// addi r31,r30,1556
	ctx.r31.s64 = ctx.r30.s64 + 1556;
	// bl 0x82d20f50
	ctx.lr = 0x82D027CC;
	sub_82D20F50(ctx, base);
	// lwz r7,1584(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d02840
	if (cr6.eq) goto loc_82D02840;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82d02840
	if (cr0.eq) goto loc_82D02840;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82d02830
	if (!cr6.gt) goto loc_82D02830;
loc_82D02800:
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// beq cr6,0x82d0283c
	if (cr6.eq) goto loc_82D0283C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82d02800
	if (cr6.gt) goto loc_82D02800;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82D02828;
	sub_82D1EAC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D02830:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82D0283C;
	sub_831CC188(ctx, base);
loc_82D0283C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82D02840:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82D0284C;
	sub_82D1EAC0(ctx, base);
loc_82D0284C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D02854"))) PPC_WEAK_FUNC(sub_82D02854);
PPC_FUNC_IMPL(__imp__sub_82D02854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02858"))) PPC_WEAK_FUNC(sub_82D02858);
PPC_FUNC_IMPL(__imp__sub_82D02858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D02860;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1589(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1589);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0291c
	if (cr6.eq) goto loc_82D0291C;
	// lwz r11,1556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1556);
	// addi r30,r3,1556
	ctx.r30.s64 = ctx.r3.s64 + 1556;
	// lwz r10,1560(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1560);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r29,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 2;
	// bl 0x82d1c1a8
	ctx.lr = 0x82D0288C;
	sub_82D1C1A8(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// bge cr6,0x82d02900
	if (!cr6.lt) goto loc_82D02900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82D0289C;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82d028c0
	if (cr6.gt) goto loc_82D028C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82D028C0;
	sub_831CC188(ctx, base);
loc_82D028C0:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// addi r30,r9,21716
	ctx.r30.s64 = ctx.r9.s64 + 21716;
	// ori r7,r8,8199
	ctx.r7.u64 = ctx.r8.u64 | 8199;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r5,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r5.u8);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r6,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r6.u32);
	// bl 0x83103068
	ctx.lr = 0x82D028FC;
	sub_83103068(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82D02900:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D02914;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D0291C:
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82d02938
	if (cr6.lt) goto loc_82D02938;
	// stw r29,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r29.u32);
loc_82D02938:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d02648
	ctx.lr = 0x82D02940;
	sub_82D02648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d19bb0
	ctx.lr = 0x82D0294C;
	sub_82D19BB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82D02958;
	sub_82D19BA0(ctx, base);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D02970;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82D02978;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r4,r10,-10232
	ctx.r4.s64 = ctx.r10.s64 + -10232;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D02994;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d02a48
	if (cr6.eq) goto loc_82D02A48;
	// bl 0x82d33c10
	ctx.lr = 0x82D029A4;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d02a3c
	if (cr6.eq) goto loc_82D02A3C;
loc_82D029AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19d40
	ctx.lr = 0x82D029B8;
	sub_82D19D40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82D029C8;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d02a48
	if (cr6.eq) goto loc_82D02A48;
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// add r28,r28,r29
	ctx.r28.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r10,1556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r5,2
	ctx.r5.s64 = 2;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// bge cr6,0x82d02a20
	if (!cr6.lt) goto loc_82D02A20;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82D029FC;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D02A1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82d02a28
	goto loc_82D02A28;
loc_82D02A20:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82D02A28;
	sub_82D2AEC8(ctx, base);
loc_82D02A28:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82D02A34;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// blt cr6,0x82d029ac
	if (cr6.lt) goto loc_82D029AC;
loc_82D02A3C:
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82D02A48;
	sub_82D17DA0(ctx, base);
loc_82D02A48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D02A50"))) PPC_WEAK_FUNC(sub_82D02A50);
PPC_FUNC_IMPL(__imp__sub_82D02A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D02A58;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82d19648
	ctx.lr = 0x82D02A68;
	sub_82D19648(ctx, base);
	// lbz r11,1588(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1588);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d02a8c
	if (cr6.eq) goto loc_82D02A8C;
	// bl 0x82d19a78
	ctx.lr = 0x82D02A7C;
	sub_82D19A78(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r23,r11,-10622
	ctx.r23.s64 = ctx.r11.s64 + -10622;
	// addi r4,r23,298
	ctx.r4.s64 = ctx.r23.s64 + 298;
	// b 0x82d02a9c
	goto loc_82D02A9C;
loc_82D02A8C:
	// bl 0x82d19a78
	ctx.lr = 0x82D02A90;
	sub_82D19A78(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r23,r11,-10622
	ctx.r23.s64 = ctx.r11.s64 + -10622;
	// addi r4,r23,322
	ctx.r4.s64 = ctx.r23.s64 + 322;
loc_82D02A9C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D02AB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82D02AB8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r23,346
	ctx.r4.s64 = ctx.r23.s64 + 346;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D02AD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d02d40
	if (cr6.eq) goto loc_82D02D40;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82D02AE8;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d02b24
	if (cr6.eq) goto loc_82D02B24;
loc_82D02AF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82D02AFC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d02d40
	if (cr6.eq) goto loc_82D02D40;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82D02B10;
	sub_82D2AEC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82D02B1C;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82d02af0
	if (cr6.lt) goto loc_82D02AF0;
loc_82D02B24:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d02700
	ctx.lr = 0x82D02B2C;
	sub_82D02700(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82D02B34;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d02d40
	if (cr6.eq) goto loc_82D02D40;
	// bl 0x831156e8
	ctx.lr = 0x82D02B44;
	sub_831156E8(ctx, base);
	// lwz r10,1560(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1560);
	// lwz r11,1556(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1556);
	// addi r29,r24,1556
	ctx.r29.s64 = ctx.r24.s64 + 1556;
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82d02bf8
	if (cr0.eq) goto loc_82D02BF8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r25,12
	ctx.r25.s64 = 12;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// ble cr6,0x82d02d4c
	if (!cr6.gt) goto loc_82D02D4C;
loc_82D02B78:
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r27,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r27.u16);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8311bf98
	ctx.lr = 0x82D02B90;
	sub_8311BF98(ctx, base);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x82D02BA0;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d02bd8
	if (!cr6.eq) goto loc_82D02BD8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82d02d58
	if (!cr6.gt) goto loc_82D02D58;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzx r28,r30,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82D02BD8;
	sub_82D1EAC0(ctx, base);
loc_82D02BD8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82d02b78
	if (cr6.gt) goto loc_82D02B78;
loc_82D02BF8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82D02C00;
	sub_82D199F0(ctx, base);
	// addi r11,r23,354
	ctx.r11.s64 = ctx.r23.s64 + 354;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x82d2fa90
	ctx.lr = 0x82D02C18;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82D02C20;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d02d40
	if (cr6.eq) goto loc_82D02D40;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d02d34
	if (cr6.eq) goto loc_82D02D34;
	// bl 0x831156e8
	ctx.lr = 0x82D02C34;
	sub_831156E8(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D02C58;
	sub_8259CC28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// sth r27,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r27.u16);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8311bf98
	ctx.lr = 0x82D02C6C;
	sub_8311BF98(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r3,56
	ctx.r5.s64 = ctx.r3.s64 + 56;
	// ori r4,r4,323
	ctx.r4.u64 = ctx.r4.u64 | 323;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x82D02C80;
	sub_82D042A8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d02c94
	if (!cr6.lt) goto loc_82D02C94;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82D02C94:
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
loc_82D02CA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d02ca4
	if (!cr6.eq) goto loc_82D02CA4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D02CC8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82D02CD4;
	sub_82D2AAB0(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d02cf4
	if (cr6.lt) goto loc_82D02CF4;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82D02CF4;
	sub_825952B8(ctx, base);
loc_82D02CF4:
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// bl 0x83103100
	ctx.lr = 0x82D02D0C;
	sub_83103100(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d02d28
	if (cr6.lt) goto loc_82D02D28;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82D02D28;
	sub_825952B8(ctx, base);
loc_82D02D28:
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
loc_82D02D34:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d19720
	ctx.lr = 0x82D02D40;
	sub_82D19720(ctx, base);
loc_82D02D40:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82D02D4C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82D02D58;
	sub_831CC188(ctx, base);
loc_82D02D58:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82D02D64;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82D02D64"))) PPC_WEAK_FUNC(sub_82D02D64);
PPC_FUNC_IMPL(__imp__sub_82D02D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02D68"))) PPC_WEAK_FUNC(sub_82D02D68);
PPC_FUNC_IMPL(__imp__sub_82D02D68) {
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
	// bl 0x82d86078
	ctx.lr = 0x82D02D80;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d02db0
	if (cr6.eq) goto loc_82D02DB0;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82D02D90;
	sub_82DAB6D0(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r11,3464(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3464, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82D02DA4;
	sub_82D19858(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82D02DB0;
	sub_82D17DA0(ctx, base);
loc_82D02DB0:
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

__attribute__((alias("__imp__sub_82D02DC4"))) PPC_WEAK_FUNC(sub_82D02DC4);
PPC_FUNC_IMPL(__imp__sub_82D02DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02DC8"))) PPC_WEAK_FUNC(sub_82D02DC8);
PPC_FUNC_IMPL(__imp__sub_82D02DC8) {
	PPC_FUNC_PROLOGUE();
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x82d17da0
	sub_82D17DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D02DD0"))) PPC_WEAK_FUNC(sub_82D02DD0);
PPC_FUNC_IMPL(__imp__sub_82D02DD0) {
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
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d02dec
	if (cr6.eq) goto loc_82D02DEC;
	// bl 0x82d39100
	ctx.lr = 0x82D02DEC;
	sub_82D39100(ctx, base);
loc_82D02DEC:
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
}

__attribute__((alias("__imp__sub_82D02E00"))) PPC_WEAK_FUNC(sub_82D02E00);
PPC_FUNC_IMPL(__imp__sub_82D02E00) {
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
	// bl 0x82d19bb0
	ctx.lr = 0x82D02E1C;
	sub_82D19BB0(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// ble cr6,0x82d02e94
	if (!cr6.gt) goto loc_82D02E94;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r8,r9,-9136
	ctx.r8.s64 = ctx.r9.s64 + -9136;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// bl 0x82d20da8
	ctx.lr = 0x82D02E5C;
	sub_82D20DA8(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82D02E60;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d02e94
	if (cr6.eq) goto loc_82D02E94;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82D02E70;
	sub_82DAB6D0(ctx, base);
	// stb r30,3464(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3464, ctx.r30.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82D02E80;
	sub_82D17DA0(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,-8720
	ctx.r5.s64 = ctx.r10.s64 + -8720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82D02E94;
	sub_82D20DA8(ctx, base);
loc_82D02E94:
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

__attribute__((alias("__imp__sub_82D02EAC"))) PPC_WEAK_FUNC(sub_82D02EAC);
PPC_FUNC_IMPL(__imp__sub_82D02EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02EB0"))) PPC_WEAK_FUNC(sub_82D02EB0);
PPC_FUNC_IMPL(__imp__sub_82D02EB0) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-8640
	ctx.r9.s64 = ctx.r11.s64 + -8640;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d02ef8
	if (cr6.eq) goto loc_82D02EF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D02EF8;
	sub_825952B8(ctx, base);
loc_82D02EF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82D02F10;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_82D02F24"))) PPC_WEAK_FUNC(sub_82D02F24);
PPC_FUNC_IMPL(__imp__sub_82D02F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D02F28"))) PPC_WEAK_FUNC(sub_82D02F28);
PPC_FUNC_IMPL(__imp__sub_82D02F28) {
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
	// bl 0x82d02eb0
	ctx.lr = 0x82D02F48;
	sub_82D02EB0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d02f60
	if (cr6.eq) goto loc_82D02F60;
	// bl 0x82416268
	ctx.lr = 0x82D02F5C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D02F60:
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

__attribute__((alias("__imp__sub_82D02F78"))) PPC_WEAK_FUNC(sub_82D02F78);
PPC_FUNC_IMPL(__imp__sub_82D02F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82D02F80;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82D02F8C;
	sub_82D19A68(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82D02F90;
	sub_82D2B0F8(ctx, base);
	// sth r3,124(r25)
	PPC_STORE_U16(ctx.r25.u32 + 124, ctx.r3.u16);
	// bl 0x82d390c0
	ctx.lr = 0x82D02F98;
	sub_82D390C0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82D02FA0;
	sub_82D19A78(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r28,r11,-8728
	ctx.r28.s64 = ctx.r11.s64 + -8728;
	// beq cr6,0x82d03050
	if (cr6.eq) goto loc_82D03050;
	// lwz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// addi r9,r28,-112
	ctx.r9.s64 = ctx.r28.s64 + -112;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D02FE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r28,-112
	ctx.r11.s64 = ctx.r28.s64 + -112;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,72(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// lwz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82D03018;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// addi r9,r28,-112
	ctx.r9.s64 = ctx.r28.s64 + -112;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r7,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82D03040;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82D03050;
	sub_82A69A28(ctx, base);
loc_82D03050:
	// lwz r11,104(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 104);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,108(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// addi r30,r25,104
	ctx.r30.s64 = ctx.r25.s64 + 104;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r4,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82d0311c
	if (cr0.eq) goto loc_82D0311C;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// li r22,15
	ctx.r22.s64 = 15;
	// addi r23,r11,-9432
	ctx.r23.s64 = ctx.r11.s64 + -9432;
loc_82D03080:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82D03090;
	sub_82D19AA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d03164
	if (cr6.eq) goto loc_82D03164;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// ble cr6,0x82d03170
	if (!cr6.gt) goto loc_82D03170;
	// lwzx r9,r26,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// add r29,r26,r10
	ctx.r29.u64 = ctx.r26.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,15
	cr6.compare<int32_t>(ctx.r9.s32, 15, xer);
	// bge cr6,0x82d03164
	if (!cr6.lt) goto loc_82D03164;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,100
	ctx.r27.s64 = ctx.r11.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82D030E4;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r5,r10,r23
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// bl 0x82a69a28
	ctx.lr = 0x82D030FC;
	sub_82A69A28(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r4,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// blt cr6,0x82d03080
	if (cr6.lt) goto loc_82D03080;
loc_82D0311C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82D03128;
	sub_82D1ED60(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82D0312C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d03164
	if (cr6.eq) goto loc_82D03164;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82D0313C;
	sub_82DAB6D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r5,3464(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3464);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// bge cr6,0x82d03164
	if (!cr6.lt) goto loc_82D03164;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82D03164;
	sub_82D1EAC0(ctx, base);
loc_82D03164:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82D03170:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82D0317C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82D0317C"))) PPC_WEAK_FUNC(sub_82D0317C);
PPC_FUNC_IMPL(__imp__sub_82D0317C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D03180"))) PPC_WEAK_FUNC(sub_82D03180);
PPC_FUNC_IMPL(__imp__sub_82D03180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D03188;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8308e078
	ctx.lr = 0x82D031A0;
	sub_8308E078(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r28,r11,-9460
	ctx.r28.s64 = ctx.r11.s64 + -9460;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r28,692
	ctx.r4.s64 = ctx.r28.s64 + 692;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82D031C0;
	sub_82D253F8(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r8,r10,-8640
	ctx.r8.s64 = ctx.r10.s64 + -8640;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// addi r4,r28,-56
	ctx.r4.s64 = ctx.r28.s64 + -56;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// addi r30,r31,104
	ctx.r30.s64 = ctx.r31.s64 + 104;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// sth r29,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r29.u16);
	// bl 0x82d20ae0
	ctx.lr = 0x82D0320C;
	sub_82D20AE0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82D0321C;
	sub_82D23390(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82d03340
	if (cr6.gt) goto loc_82D03340;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82d03278
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D03278;
	// bdzf 4*cr6+eq,0x82d032ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D032AC;
	// bdzf 4*cr6+eq,0x82d032c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D032C8;
	// bdzf 4*cr6+eq,0x82d032fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D032FC;
	// bne cr6,0x82d03318
	if (!cr6.eq) goto loc_82D03318;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82D03258;
	sub_835977D8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82D0326C;
	sub_835977D8(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82d03334
	goto loc_82D03334;
loc_82D03278:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82D0328C;
	sub_835977D8(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82D032A0;
	sub_835977D8(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82d03334
	goto loc_82D03334;
loc_82D032AC:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82D032BC;
	sub_835977D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82d03334
	goto loc_82D03334;
loc_82D032C8:
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82D032DC;
	sub_835977D8(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82D032F0;
	sub_835977D8(ctx, base);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82d03334
	goto loc_82D03334;
loc_82D032FC:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82D03310;
	sub_835977D8(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x82d03330
	goto loc_82D03330;
loc_82D03318:
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82D0332C;
	sub_835977D8(ctx, base);
	// li r10,14
	ctx.r10.s64 = 14;
loc_82D03330:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82D03334:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82D03340;
	sub_835977D8(ctx, base);
loc_82D03340:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d191f8
	ctx.lr = 0x82D03348;
	sub_82D191F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82D03354;
	sub_82D17DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D03360"))) PPC_WEAK_FUNC(sub_82D03360);
PPC_FUNC_IMPL(__imp__sub_82D03360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D03368;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D03390;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d033b0
	if (cr6.eq) goto loc_82D033B0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d03180
	ctx.lr = 0x82D033A8;
	sub_82D03180(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D033B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D033BC"))) PPC_WEAK_FUNC(sub_82D033BC);
PPC_FUNC_IMPL(__imp__sub_82D033BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D033C0"))) PPC_WEAK_FUNC(sub_82D033C0);
PPC_FUNC_IMPL(__imp__sub_82D033C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r4.u32);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// stb r11,252(r3)
	PPC_STORE_U8(ctx.r3.u32 + 252, ctx.r11.u8);
	// bne cr6,0x82d033d8
	if (!cr6.eq) goto loc_82D033D8;
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
loc_82D033D8:
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// bne cr6,0x82d033f4
	if (!cr6.eq) goto loc_82D033F4;
	// addi r11,r11,-7936
	ctx.r11.s64 = ctx.r11.s64 + -7936;
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// b 0x82d20ae0
	sub_82D20AE0(ctx, base);
	return;
loc_82D033F4:
	// addi r4,r11,-7936
	ctx.r4.s64 = ctx.r11.s64 + -7936;
	// b 0x82d20ae0
	sub_82D20AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D033FC"))) PPC_WEAK_FUNC(sub_82D033FC);
PPC_FUNC_IMPL(__imp__sub_82D033FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

