#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83A8C238"))) PPC_WEAK_FUNC(sub_83A8C238);
PPC_FUNC_IMPL(__imp__sub_83A8C238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a8c250
	if (!cr6.eq) goto loc_83A8C250;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A8C250:
	// b 0x83a90e48
	sub_83A90E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8C254"))) PPC_WEAK_FUNC(sub_83A8C254);
PPC_FUNC_IMPL(__imp__sub_83A8C254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8C258"))) PPC_WEAK_FUNC(sub_83A8C258);
PPC_FUNC_IMPL(__imp__sub_83A8C258) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,27216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a8c2a0
	if (!cr6.eq) goto loc_83A8C2A0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
loc_83A8C288:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8C28C:
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
loc_83A8C2A0:
	// bl 0x83a8d410
	ctx.lr = 0x83A8C2A4;
	sub_83A8D410(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a8c288
	if (cr6.eq) goto loc_83A8C288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a90e48
	ctx.lr = 0x83A8C2B8;
	sub_83A90E48(ctx, base);
	// b 0x83a8c28c
	goto loc_83A8C28C;
}

__attribute__((alias("__imp__sub_83A8C2BC"))) PPC_WEAK_FUNC(sub_83A8C2BC);
PPC_FUNC_IMPL(__imp__sub_83A8C2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8C2C0"))) PPC_WEAK_FUNC(sub_83A8C2C0);
PPC_FUNC_IMPL(__imp__sub_83A8C2C0) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a8c2f4
	if (!cr6.eq) goto loc_83A8C2F4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13180
	ctx.r4.s64 = ctx.r11.s64 + 13180;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8C2EC;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a8c2fc
	goto loc_83A8C2FC;
loc_83A8C2F4:
	// bl 0x83a8ca78
	ctx.lr = 0x83A8C2F8;
	sub_83A8CA78(ctx, base);
	// lwz r3,1980(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1980);
loc_83A8C2FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8C30C"))) PPC_WEAK_FUNC(sub_83A8C30C);
PPC_FUNC_IMPL(__imp__sub_83A8C30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8C310"))) PPC_WEAK_FUNC(sub_83A8C310);
PPC_FUNC_IMPL(__imp__sub_83A8C310) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,27216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a8c354
	if (!cr6.eq) goto loc_83A8C354;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13180
	ctx.r4.s64 = ctx.r11.s64 + 13180;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8C34C;
	sub_831EA3F0(ctx, base);
loc_83A8C34C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8c390
	goto loc_83A8C390;
loc_83A8C354:
	// bl 0x83a8c2c0
	ctx.lr = 0x83A8C358;
	sub_83A8C2C0(ctx, base);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a8c34c
	if (!cr6.gt) goto loc_83A8C34C;
	// bl 0x83a8ca78
	ctx.lr = 0x83A8C368;
	sub_83A8CA78(ctx, base);
	// addi r3,r3,1932
	ctx.r3.s64 = ctx.r3.s64 + 1932;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83ac84f8
	ctx.lr = 0x83A8C378;
	sub_83AC84F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r31,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r31.u16);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// sth r10,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r10.u16);
loc_83A8C390:
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

__attribute__((alias("__imp__sub_83A8C3A8"))) PPC_WEAK_FUNC(sub_83A8C3A8);
PPC_FUNC_IMPL(__imp__sub_83A8C3A8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,27216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a8c3ec
	if (!cr6.eq) goto loc_83A8C3EC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13180
	ctx.r4.s64 = ctx.r11.s64 + 13180;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8C3E4;
	sub_831EA3F0(ctx, base);
loc_83A8C3E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8c438
	goto loc_83A8C438;
loc_83A8C3EC:
	// bl 0x83a8ca78
	ctx.lr = 0x83A8C3F0;
	sub_83A8CA78(ctx, base);
	// addi r3,r3,1932
	ctx.r3.s64 = ctx.r3.s64 + 1932;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83ac85b8
	ctx.lr = 0x83A8C3FC;
	sub_83AC85B8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a8c3e4
	if (cr6.eq) goto loc_83A8C3E4;
	// bl 0x83a8ca78
	ctx.lr = 0x83A8C410;
	sub_83A8CA78(ctx, base);
	// addi r3,r3,1932
	ctx.r3.s64 = ctx.r3.s64 + 1932;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83ac84f8
	ctx.lr = 0x83A8C420;
	sub_83AC84F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r31,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r31.u16);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// sth r10,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r10.u16);
loc_83A8C438:
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

__attribute__((alias("__imp__sub_83A8C450"))) PPC_WEAK_FUNC(sub_83A8C450);
PPC_FUNC_IMPL(__imp__sub_83A8C450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A8C458;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,27216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a8c490
	if (!cr6.eq) goto loc_83A8C490;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13180
	ctx.r4.s64 = ctx.r11.s64 + 13180;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8C488;
	sub_831EA3F0(ctx, base);
loc_83A8C488:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8c4f8
	goto loc_83A8C4F8;
loc_83A8C490:
	// lhz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// bl 0x83a8c2c0
	ctx.lr = 0x83A8C498;
	sub_83A8C2C0(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// ble cr6,0x83a8c488
	if (!cr6.gt) goto loc_83A8C488;
	// bl 0x83a8ca78
	ctx.lr = 0x83A8C4A8;
	sub_83A8CA78(ctx, base);
	// addi r3,r3,1932
	ctx.r3.s64 = ctx.r3.s64 + 1932;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x83ac84f8
	ctx.lr = 0x83A8C4B8;
	sub_83AC84F8(ctx, base);
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// clrlwi r31,r29,16
	ctx.r31.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x83a8c488
	if (!cr6.gt) goto loc_83A8C488;
	// lhz r30,94(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// bl 0x83a8ca78
	ctx.lr = 0x83A8C4D0;
	sub_83A8CA78(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r3,r3,2000
	ctx.r3.s64 = ctx.r3.s64 + 2000;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83ac6758
	ctx.lr = 0x83A8C4E4;
	sub_83AC6758(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_83A8C4F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8C500"))) PPC_WEAK_FUNC(sub_83A8C500);
PPC_FUNC_IMPL(__imp__sub_83A8C500) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83a81a50
	ctx.lr = 0x83A8C51C;
	sub_83A81A50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8c538
	if (!cr0.eq) goto loc_83A8C538;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,13364
	ctx.r4.s64 = ctx.r11.s64 + 13364;
loc_83A8C52C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8C534;
	sub_831EA3F0(ctx, base);
	// b 0x83a8c5c0
	goto loc_83A8C5C0;
loc_83A8C538:
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// lwz r11,27216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a8c554
	if (cr6.eq) goto loc_83A8C554;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,13324
	ctx.r4.s64 = ctx.r11.s64 + 13324;
	// b 0x83a8c52c
	goto loc_83A8C52C;
loc_83A8C554:
	// bl 0x83a95bd0
	ctx.lr = 0x83A8C558;
	sub_83A95BD0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a8c56c
	if (cr0.eq) goto loc_83A8C56C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,13256
	ctx.r4.s64 = ctx.r11.s64 + 13256;
	// b 0x83a8c52c
	goto loc_83A8C52C;
loc_83A8C56C:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r11,27216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27216, ctx.r11.u32);
	// bne cr6,0x83a8c59c
	if (!cr6.eq) goto loc_83A8C59C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
loc_83A8C59C:
	// bl 0x83a82480
	ctx.lr = 0x83A8C5A0;
	sub_83A82480(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83ab5cf0
	ctx.lr = 0x83A8C5AC;
	sub_83AB5CF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a824c0
	ctx.lr = 0x83A8C5B4;
	sub_83A824C0(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x83a8c5c0
	if (!cr6.eq) goto loc_83A8C5C0;
	// bl 0x83a8be20
	ctx.lr = 0x83A8C5C0;
	sub_83A8BE20(ctx, base);
loc_83A8C5C0:
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

__attribute__((alias("__imp__sub_83A8C5D8"))) PPC_WEAK_FUNC(sub_83A8C5D8);
PPC_FUNC_IMPL(__imp__sub_83A8C5D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A8C5E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,27228
	ctx.r31.s64 = ctx.r11.s64 + 27228;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r31,-8
	ctx.r6.s64 = ctx.r31.s64 + -8;
	// bl 0x83a82d48
	ctx.lr = 0x83A8C608;
	sub_83A82D48(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83a8c630
	if (!cr0.eq) goto loc_83A8C630;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,13424
	ctx.r4.s64 = ctx.r11.s64 + 13424;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8C624;
	sub_831EA418(ctx, base);
	// bl 0x83a8be20
	ctx.lr = 0x83A8C628;
	sub_83A8BE20(ctx, base);
loc_83A8C628:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8c664
	goto loc_83A8C664;
loc_83A8C630:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a91d58
	ctx.lr = 0x83A8C63C;
	sub_83A91D58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a8bc08
	ctx.lr = 0x83A8C650;
	sub_83A8BC08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8c660
	if (!cr0.eq) goto loc_83A8C660;
	// bl 0x83a90450
	ctx.lr = 0x83A8C65C;
	sub_83A90450(ctx, base);
	// b 0x83a8c628
	goto loc_83A8C628;
loc_83A8C660:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A8C664:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8C66C"))) PPC_WEAK_FUNC(sub_83A8C66C);
PPC_FUNC_IMPL(__imp__sub_83A8C66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8C670"))) PPC_WEAK_FUNC(sub_83A8C670);
PPC_FUNC_IMPL(__imp__sub_83A8C670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83A8C678;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r11,27216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27216, ctx.r11.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// addi r30,r10,27216
	ctx.r30.s64 = ctx.r10.s64 + 27216;
	// bl 0x83a8bcc8
	ctx.lr = 0x83A8C6B0;
	sub_83A8BCC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x83a8c6c4
	if (!cr0.lt) goto loc_83A8C6C4;
loc_83A8C6B8:
	// bl 0x83a8be20
	ctx.lr = 0x83A8C6BC;
	sub_83A8BE20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8c73c
	goto loc_83A8C73C;
loc_83A8C6C4:
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a82d48
	ctx.lr = 0x83A8C6D8;
	sub_83A82D48(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a8c6f4
	if (!cr0.eq) goto loc_83A8C6F4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,13436
	ctx.r4.s64 = ctx.r11.s64 + 13436;
	// bl 0x831ea418
	ctx.lr = 0x83A8C6F0;
	sub_831EA418(ctx, base);
	// b 0x83a8c6b8
	goto loc_83A8C6B8;
loc_83A8C6F4:
	// addi r11,r3,2047
	ctx.r11.s64 = ctx.r3.s64 + 2047;
	// addi r31,r31,-2048
	ctx.r31.s64 = ctx.r31.s64 + -2048;
	// rlwinm r5,r11,0,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r5,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r5.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a8bd60
	ctx.lr = 0x83A8C714;
	sub_83A8BD60(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// ble 0x83a8c6b8
	if (!cr0.gt) goto loc_83A8C6B8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_83A8C73C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8C744"))) PPC_WEAK_FUNC(sub_83A8C744);
PPC_FUNC_IMPL(__imp__sub_83A8C744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8C748"))) PPC_WEAK_FUNC(sub_83A8C748);
PPC_FUNC_IMPL(__imp__sub_83A8C748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A8C750;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,27216
	ctx.r31.s64 = ctx.r11.s64 + 27216;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8c808
	if (!cr6.eq) goto loc_83A8C808;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83a8c820
	if (cr6.eq) goto loc_83A8C820;
	// bl 0x831eef18
	ctx.lr = 0x83A8C790;
	sub_831EEF18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8c7ac
	if (!cr0.eq) goto loc_83A8C7AC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,13448
	ctx.r4.s64 = ctx.r11.s64 + 13448;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8C7A4;
	sub_831EA3F0(ctx, base);
loc_83A8C7A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8c818
	goto loc_83A8C818;
loc_83A8C7AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a8c7d8
	if (!cr6.eq) goto loc_83A8C7D8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,13060
	ctx.r5.s64 = ctx.r11.s64 + 13060;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea730
	ctx.lr = 0x83A8C7D0;
	sub_831EA730(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x83a8c7dc
	goto loc_83A8C7DC;
loc_83A8C7D8:
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_83A8C7DC:
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// addi r8,r31,20
	ctx.r8.s64 = ctx.r31.s64 + 20;
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83a8c670
	ctx.lr = 0x83A8C7FC;
	sub_83A8C670(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a8c7a4
	if (cr6.eq) goto loc_83A8C7A4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_83A8C808:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83A8C818:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A8C820:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x83a8c808
	goto loc_83A8C808;
}

__attribute__((alias("__imp__sub_83A8C848"))) PPC_WEAK_FUNC(sub_83A8C848);
PPC_FUNC_IMPL(__imp__sub_83A8C848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r10,r11,27232
	ctx.r10.s64 = ctx.r11.s64 + 27232;
	// lwz r3,27232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27232);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x83a8c5d8
	ctx.lr = 0x83A8C870;
	sub_83A8C5D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8c884
	if (!cr0.eq) goto loc_83A8C884;
	// bl 0x83a8be20
	ctx.lr = 0x83A8C87C;
	sub_83A8BE20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8c888
	goto loc_83A8C888;
loc_83A8C884:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A8C888:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8C898"))) PPC_WEAK_FUNC(sub_83A8C898);
PPC_FUNC_IMPL(__imp__sub_83A8C898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A8C8A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a8c974
	if (cr6.eq) goto loc_83A8C974;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// blt cr6,0x83a8c974
	if (cr6.lt) goto loc_83A8C974;
	// bl 0x83a81a50
	ctx.lr = 0x83A8C8C8;
	sub_83A81A50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8c8e4
	if (!cr0.eq) goto loc_83A8C8E4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,13808
	ctx.r4.s64 = ctx.r11.s64 + 13808;
loc_83A8C8D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8C8E0;
	sub_831EA3F0(ctx, base);
	// b 0x83a8c988
	goto loc_83A8C988;
loc_83A8C8E4:
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// lwz r11,27216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a8c900
	if (cr6.eq) goto loc_83A8C900;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,13764
	ctx.r4.s64 = ctx.r11.s64 + 13764;
	// b 0x83a8c8d8
	goto loc_83A8C8D8;
loc_83A8C900:
	// bl 0x83a95bd0
	ctx.lr = 0x83A8C904;
	sub_83A95BD0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a8c918
	if (cr0.eq) goto loc_83A8C918;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,13696
	ctx.r4.s64 = ctx.r11.s64 + 13696;
	// b 0x83a8c8d8
	goto loc_83A8C8D8;
loc_83A8C918:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bne cr6,0x83a8c968
	if (!cr6.eq) goto loc_83A8C968;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(ctx.r11.u32, 85, xer);
	// bne cr6,0x83a8c968
	if (!cr6.eq) goto loc_83A8C968;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(ctx.r11.u32, 84, xer);
	// bne cr6,0x83a8c968
	if (!cr6.eq) goto loc_83A8C968;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// bne cr6,0x83a8c968
	if (!cr6.eq) goto loc_83A8C968;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r11,27216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27216, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a8c5d8
	ctx.lr = 0x83A8C964;
	sub_83A8C5D8(ctx, base);
	// b 0x83a8c988
	goto loc_83A8C988;
loc_83A8C968:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,13648
	ctx.r4.s64 = ctx.r11.s64 + 13648;
	// b 0x83a8c8d8
	goto loc_83A8C8D8;
loc_83A8C974:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,13636
	ctx.r4.s64 = ctx.r11.s64 + 13636;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8C988;
	sub_831EA418(ctx, base);
loc_83A8C988:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8C990"))) PPC_WEAK_FUNC(sub_83A8C990);
PPC_FUNC_IMPL(__imp__sub_83A8C990) {
	PPC_FUNC_PROLOGUE();
	// li r3,2416
	ctx.r3.s64 = 2416;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8C998"))) PPC_WEAK_FUNC(sub_83A8C998);
PPC_FUNC_IMPL(__imp__sub_83A8C998) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// addi r8,r4,7
	ctx.r8.s64 = ctx.r4.s64 + 7;
	// addi r5,r9,14084
	ctx.r5.s64 = ctx.r9.s64 + 14084;
	// stw r11,27248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27248, ctx.r11.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r10,27248
	ctx.r30.s64 = ctx.r10.s64 + 27248;
	// rlwinm r31,r8,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// bl 0x831ea658
	ctx.lr = 0x83A8C9D8;
	sub_831EA658(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,14052
	ctx.r5.s64 = ctx.r11.s64 + 14052;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831ea658
	ctx.lr = 0x83A8C9EC;
	sub_831EA658(ctx, base);
	// li r5,2408
	ctx.r5.s64 = 2408;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea798
	ctx.lr = 0x83A8C9FC;
	sub_831EA798(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r11,2400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2400, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A8CA20"))) PPC_WEAK_FUNC(sub_83A8CA20);
PPC_FUNC_IMPL(__imp__sub_83A8CA20) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r11,27248
	ctx.r11.s64 = ctx.r11.s64 + 27248;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a8ca5c
	if (cr6.eq) goto loc_83A8CA5C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,14120
	ctx.r4.s64 = ctx.r11.s64 + 14120;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8CA54;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8ca64
	goto loc_83A8CA64;
loc_83A8CA5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_83A8CA64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8CA74"))) PPC_WEAK_FUNC(sub_83A8CA74);
PPC_FUNC_IMPL(__imp__sub_83A8CA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8CA78"))) PPC_WEAK_FUNC(sub_83A8CA78);
PPC_FUNC_IMPL(__imp__sub_83A8CA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,27256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8CA84"))) PPC_WEAK_FUNC(sub_83A8CA84);
PPC_FUNC_IMPL(__imp__sub_83A8CA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8CA88"))) PPC_WEAK_FUNC(sub_83A8CA88);
PPC_FUNC_IMPL(__imp__sub_83A8CA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8CA98"))) PPC_WEAK_FUNC(sub_83A8CA98);
PPC_FUNC_IMPL(__imp__sub_83A8CA98) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-7
	ctx.r11.s64 = ctx.r3.s64 + -7;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-14716
	ctx.r10.s64 = ctx.r10.s64 + -14716;
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8CAB0"))) PPC_WEAK_FUNC(sub_83A8CAB0);
PPC_FUNC_IMPL(__imp__sub_83A8CAB0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-98
	ctx.r11.s64 = ctx.r3.s64 + -98;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-14716
	ctx.r10.s64 = ctx.r10.s64 + -14716;
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8CAC8"))) PPC_WEAK_FUNC(sub_83A8CAC8);
PPC_FUNC_IMPL(__imp__sub_83A8CAC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2368(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2368, ctx.r11.u8);
	// stw r11,2400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2400, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r11.u32);
	// stw r11,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r11.u32);
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// stw r11,788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 788, ctx.r11.u32);
	// stw r11,860(r3)
	PPC_STORE_U32(ctx.r3.u32 + 860, ctx.r11.u32);
	// stw r11,940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 940, ctx.r11.u32);
	// stw r11,1004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1004, ctx.r11.u32);
	// stw r11,1112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1112, ctx.r11.u32);
	// stw r11,1196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1196, ctx.r11.u32);
	// stw r11,1260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1260, ctx.r11.u32);
	// stw r11,1332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1332, ctx.r11.u32);
	// stw r11,1420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1420, ctx.r11.u32);
	// stw r11,1484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1484, ctx.r11.u32);
	// stw r11,1544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1544, ctx.r11.u32);
	// stw r11,1664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1664, ctx.r11.u32);
	// stw r11,1772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1772, ctx.r11.u32);
	// stw r11,1836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1836, ctx.r11.u32);
	// stw r11,1900(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1900, ctx.r11.u32);
	// stw r11,1980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1980, ctx.r11.u32);
	// stw r11,2048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2048, ctx.r11.u32);
	// stw r11,2108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8CB3C"))) PPC_WEAK_FUNC(sub_83A8CB3C);
PPC_FUNC_IMPL(__imp__sub_83A8CB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8CB40"))) PPC_WEAK_FUNC(sub_83A8CB40);
PPC_FUNC_IMPL(__imp__sub_83A8CB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a8cb64
	if (cr6.eq) goto loc_83A8CB64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8cb64
	if (cr6.eq) goto loc_83A8CB64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// blr 
	return;
loc_83A8CB64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8CB6C"))) PPC_WEAK_FUNC(sub_83A8CB6C);
PPC_FUNC_IMPL(__imp__sub_83A8CB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8CB70"))) PPC_WEAK_FUNC(sub_83A8CB70);
PPC_FUNC_IMPL(__imp__sub_83A8CB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A8CB78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8cc3c
	if (cr6.eq) goto loc_83A8CC3C;
	// addi r3,r11,1932
	ctx.r3.s64 = ctx.r11.s64 + 1932;
	// bl 0x83ac85b8
	ctx.lr = 0x83A8CBA0;
	sub_83AC85B8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83a8cbc0
	if (!cr6.eq) goto loc_83A8CBC0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,14240
	ctx.r4.s64 = ctx.r11.s64 + 14240;
	// b 0x83a8cc34
	goto loc_83A8CC34;
loc_83A8CBC0:
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,1932
	ctx.r3.s64 = ctx.r11.s64 + 1932;
	// bl 0x83ac84f8
	ctx.lr = 0x83A8CBD0;
	sub_83AC84F8(ctx, base);
	// lhz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a8cc28
	if (cr0.eq) goto loc_83A8CC28;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83A8CBE0:
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// addi r3,r11,2000
	ctx.r3.s64 = ctx.r11.s64 + 2000;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83ac6758
	ctx.lr = 0x83A8CBFC;
	sub_83AC6758(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x839f82f0
	ctx.lr = 0x83A8CC08;
	sub_839F82F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8cc48
	if (cr0.eq) goto loc_83A8CC48;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lhz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a8cbe0
	if (cr6.lt) goto loc_83A8CBE0;
loc_83A8CC28:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,14184
	ctx.r4.s64 = ctx.r11.s64 + 14184;
loc_83A8CC34:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea400
	ctx.lr = 0x83A8CC3C;
	sub_831EA400(ctx, base);
loc_83A8CC3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8CC40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A8CC48:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a8cc40
	goto loc_83A8CC40;
}

__attribute__((alias("__imp__sub_83A8CC50"))) PPC_WEAK_FUNC(sub_83A8CC50);
PPC_FUNC_IMPL(__imp__sub_83A8CC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A8CC58;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8cd40
	if (cr6.eq) goto loc_83A8CD40;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,1932
	ctx.r3.s64 = ctx.r11.s64 + 1932;
	// bl 0x83ac85b8
	ctx.lr = 0x83A8CC9C;
	sub_83AC85B8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83a8ccc0
	if (!cr6.eq) goto loc_83A8CCC0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,14348
	ctx.r4.s64 = ctx.r11.s64 + 14348;
	// b 0x83a8cd38
	goto loc_83A8CD38;
loc_83A8CCC0:
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,1932
	ctx.r3.s64 = ctx.r11.s64 + 1932;
	// bl 0x83ac84f8
	ctx.lr = 0x83A8CCD0;
	sub_83AC84F8(ctx, base);
	// lhz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a8cd2c
	if (cr0.eq) goto loc_83A8CD2C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83A8CCE4:
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// addi r3,r11,2000
	ctx.r3.s64 = ctx.r11.s64 + 2000;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83ac6758
	ctx.lr = 0x83A8CD00;
	sub_83AC6758(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x839f82f0
	ctx.lr = 0x83A8CD0C;
	sub_839F82F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8cd48
	if (cr0.eq) goto loc_83A8CD48;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lhz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a8cce4
	if (cr6.lt) goto loc_83A8CCE4;
loc_83A8CD2C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,14292
	ctx.r4.s64 = ctx.r11.s64 + 14292;
loc_83A8CD38:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea400
	ctx.lr = 0x83A8CD40;
	sub_831EA400(ctx, base);
loc_83A8CD40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A8CD48:
	// sth r29,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r29.u16);
	// b 0x83a8cd40
	goto loc_83A8CD40;
}

__attribute__((alias("__imp__sub_83A8CD50"))) PPC_WEAK_FUNC(sub_83A8CD50);
PPC_FUNC_IMPL(__imp__sub_83A8CD50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A8CD58;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8cdbc
	if (cr6.eq) goto loc_83A8CDBC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,1932
	ctx.r3.s64 = ctx.r11.s64 + 1932;
	// bl 0x83ac84f8
	ctx.lr = 0x83A8CD8C;
	sub_83AC84F8(ctx, base);
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r3,r11,2000
	ctx.r3.s64 = ctx.r11.s64 + 2000;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83ac6758
	ctx.lr = 0x83A8CDAC;
	sub_83AC6758(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_83A8CDBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8CDC4"))) PPC_WEAK_FUNC(sub_83A8CDC4);
PPC_FUNC_IMPL(__imp__sub_83A8CDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8CDC8"))) PPC_WEAK_FUNC(sub_83A8CDC8);
PPC_FUNC_IMPL(__imp__sub_83A8CDC8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8ce24
	if (cr6.eq) goto loc_83A8CE24;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,1932
	ctx.r3.s64 = ctx.r11.s64 + 1932;
	// bl 0x83ac85b8
	ctx.lr = 0x83A8CDFC;
	sub_83AC85B8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a8ce10
	if (cr6.eq) goto loc_83A8CE10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a8ce28
	goto loc_83A8CE28;
loc_83A8CE10:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,14400
	ctx.r4.s64 = ctx.r11.s64 + 14400;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A8CE24;
	sub_831EA400(ctx, base);
loc_83A8CE24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8CE28:
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

__attribute__((alias("__imp__sub_83A8CE3C"))) PPC_WEAK_FUNC(sub_83A8CE3C);
PPC_FUNC_IMPL(__imp__sub_83A8CE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8CE40"))) PPC_WEAK_FUNC(sub_83A8CE40);
PPC_FUNC_IMPL(__imp__sub_83A8CE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A8CE48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8ceac
	if (cr6.eq) goto loc_83A8CEAC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,1932
	ctx.r3.s64 = ctx.r11.s64 + 1932;
	// bl 0x83ac85b8
	ctx.lr = 0x83A8CE74;
	sub_83AC85B8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83a8ce9c
	if (!cr6.eq) goto loc_83A8CE9C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,14452
	ctx.r4.s64 = ctx.r11.s64 + 14452;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A8CE98;
	sub_831EA400(ctx, base);
	// b 0x83a8ceac
	goto loc_83A8CEAC;
loc_83A8CE9C:
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r11,1932
	ctx.r3.s64 = ctx.r11.s64 + 1932;
	// bl 0x83ac84f8
	ctx.lr = 0x83A8CEAC;
	sub_83AC84F8(ctx, base);
loc_83A8CEAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8CEB4"))) PPC_WEAK_FUNC(sub_83A8CEB4);
PPC_FUNC_IMPL(__imp__sub_83A8CEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8CEB8"))) PPC_WEAK_FUNC(sub_83A8CEB8);
PPC_FUNC_IMPL(__imp__sub_83A8CEB8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8cf14
	if (cr6.eq) goto loc_83A8CF14;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2124
	ctx.r3.s64 = ctx.r11.s64 + 2124;
	// bl 0x83ac7d50
	ctx.lr = 0x83A8CEEC;
	sub_83AC7D50(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a8cf00
	if (cr6.eq) goto loc_83A8CF00;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a8cf18
	goto loc_83A8CF18;
loc_83A8CF00:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,14504
	ctx.r4.s64 = ctx.r11.s64 + 14504;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A8CF14;
	sub_831EA400(ctx, base);
loc_83A8CF14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8CF18:
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

__attribute__((alias("__imp__sub_83A8CF2C"))) PPC_WEAK_FUNC(sub_83A8CF2C);
PPC_FUNC_IMPL(__imp__sub_83A8CF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8CF30"))) PPC_WEAK_FUNC(sub_83A8CF30);
PPC_FUNC_IMPL(__imp__sub_83A8CF30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A8CF38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8cf78
	if (cr6.eq) goto loc_83A8CF78;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lis r9,265
	ctx.r9.s64 = 17367040;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x83a8cf78
	if (!cr6.gt) goto loc_83A8CF78;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2124
	ctx.r3.s64 = ctx.r11.s64 + 2124;
	// bl 0x83ac7d50
	ctx.lr = 0x83A8CF74;
	sub_83AC7D50(ctx, base);
	// b 0x83a8cfd8
	goto loc_83A8CFD8;
loc_83A8CF78:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-14244
	ctx.r29.s64 = ctx.r11.s64 + -14244;
loc_83A8CF88:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x839f82f0
	ctx.lr = 0x83A8CF98;
	sub_839F82F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8cfb8
	if (cr0.eq) goto loc_83A8CFB8;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// blt cr6,0x83a8cf88
	if (cr6.lt) goto loc_83A8CF88;
	// b 0x83a8cfbc
	goto loc_83A8CFBC;
loc_83A8CFB8:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_83A8CFBC:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-14212(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14212);
	// bl 0x839f82f0
	ctx.lr = 0x83A8CFCC;
	sub_839F82F0(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 & ctx.r27.u64;
loc_83A8CFD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8CFE0"))) PPC_WEAK_FUNC(sub_83A8CFE0);
PPC_FUNC_IMPL(__imp__sub_83A8CFE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A8CFE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31739
	ctx.r28.s64 = -2080047104;
	// lwz r11,27256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8d004
	if (!cr6.eq) goto loc_83A8D004;
loc_83A8CFFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8d09c
	goto loc_83A8D09C;
loc_83A8D004:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8cffc
	if (cr6.eq) goto loc_83A8CFFC;
	// lwz r9,2400(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2400);
	// addi r10,r11,2400
	ctx.r10.s64 = ctx.r11.s64 + 2400;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83a8d098
	if (!cr6.eq) goto loc_83A8D098;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,480
	ctx.r3.s64 = ctx.r11.s64 + 480;
	// bl 0x83ac7138
	ctx.lr = 0x83A8D02C;
	sub_83AC7138(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,27256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27256);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r31,r10,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// lwz r30,464(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// beq cr6,0x83a8d090
	if (cr6.eq) goto loc_83A8D090;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A8D05C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,416
	ctx.r3.s64 = ctx.r11.s64 + 416;
	// bl 0x83ac70a8
	ctx.lr = 0x83A8D068;
	sub_83AC70A8(ctx, base);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, xer);
	// lbz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,27256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27256);
	// blt cr6,0x83a8d05c
	if (cr6.lt) goto loc_83A8D05C;
loc_83A8D090:
	// addi r10,r11,2400
	ctx.r10.s64 = ctx.r11.s64 + 2400;
	// stw r31,2400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2400, ctx.r31.u32);
loc_83A8D098:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_83A8D09C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8D0A4"))) PPC_WEAK_FUNC(sub_83A8D0A4);
PPC_FUNC_IMPL(__imp__sub_83A8D0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8D0A8"))) PPC_WEAK_FUNC(sub_83A8D0A8);
PPC_FUNC_IMPL(__imp__sub_83A8D0A8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8d0f0
	if (cr6.eq) goto loc_83A8D0F0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,416
	ctx.r3.s64 = ctx.r11.s64 + 416;
	// bl 0x83ac7d50
	ctx.lr = 0x83A8D0DC;
	sub_83AC7D50(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a8d0f0
	if (cr6.eq) goto loc_83A8D0F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a8d108
	goto loc_83A8D108;
loc_83A8D0F0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,14552
	ctx.r4.s64 = ctx.r11.s64 + 14552;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A8D104;
	sub_831EA400(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8D108:
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

__attribute__((alias("__imp__sub_83A8D11C"))) PPC_WEAK_FUNC(sub_83A8D11C);
PPC_FUNC_IMPL(__imp__sub_83A8D11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8D120"))) PPC_WEAK_FUNC(sub_83A8D120);
PPC_FUNC_IMPL(__imp__sub_83A8D120) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8d184
	if (cr6.eq) goto loc_83A8D184;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,416
	ctx.r3.s64 = ctx.r11.s64 + 416;
	// bl 0x83ac7d50
	ctx.lr = 0x83A8D15C;
	sub_83AC7D50(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83a8d194
	if (!cr6.eq) goto loc_83A8D194;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,14656
	ctx.r4.s64 = ctx.r11.s64 + 14656;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A8D180;
	sub_831EA400(ctx, base);
	// b 0x83a8d194
	goto loc_83A8D194;
loc_83A8D184:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,14616
	ctx.r4.s64 = ctx.r11.s64 + 14616;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8D194;
	sub_831EA3F0(ctx, base);
loc_83A8D194:
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

__attribute__((alias("__imp__sub_83A8D1B0"))) PPC_WEAK_FUNC(sub_83A8D1B0);
PPC_FUNC_IMPL(__imp__sub_83A8D1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A8D1B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31739
	ctx.r26.s64 = -2080047104;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,27256(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8d1dc
	if (!cr6.eq) goto loc_83A8D1DC;
loc_83A8D1D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8d27c
	goto loc_83A8D27C;
loc_83A8D1DC:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8d1d4
	if (cr6.eq) goto loc_83A8D1D4;
	// lwz r28,1332(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1332);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r25,0(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// ble cr6,0x83a8d210
	if (!cr6.gt) goto loc_83A8D210;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,14808
	ctx.r4.s64 = ctx.r11.s64 + 14808;
loc_83A8D204:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8D20C;
	sub_831EA3F0(ctx, base);
	// b 0x83a8d1d4
	goto loc_83A8D1D4;
loc_83A8D210:
	// clrlwi. r30,r28,16
	ctx.r30.u64 = ctx.r28.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x83a8d25c
	if (cr0.eq) goto loc_83A8D25C;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x83a8d228
	goto loc_83A8D228;
loc_83A8D224:
	// lwz r11,27256(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27256);
loc_83A8D228:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1284
	ctx.r3.s64 = ctx.r11.s64 + 1284;
	// bl 0x83ac7e40
	ctx.lr = 0x83A8D234;
	sub_83AC7E40(ctx, base);
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a8d248
	if (!cr6.lt) goto loc_83A8D248;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83A8D248:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, xer);
	// blt cr6,0x83a8d224
	if (cr6.lt) goto loc_83A8D224;
loc_83A8D25C:
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, xer);
	// ble cr6,0x83a8d270
	if (!cr6.gt) goto loc_83A8D270;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,14720
	ctx.r4.s64 = ctx.r11.s64 + 14720;
	// b 0x83a8d204
	goto loc_83A8D204;
loc_83A8D270:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
loc_83A8D27C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8D284"))) PPC_WEAK_FUNC(sub_83A8D284);
PPC_FUNC_IMPL(__imp__sub_83A8D284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8D288"))) PPC_WEAK_FUNC(sub_83A8D288);
PPC_FUNC_IMPL(__imp__sub_83A8D288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// addi r3,r11,1284
	ctx.r3.s64 = ctx.r11.s64 + 1284;
	// b 0x83ac7e40
	sub_83AC7E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8D2A0"))) PPC_WEAK_FUNC(sub_83A8D2A0);
PPC_FUNC_IMPL(__imp__sub_83A8D2A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A8D2A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8d354
	if (cr6.eq) goto loc_83A8D354;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,1284
	ctx.r3.s64 = ctx.r11.s64 + 1284;
	// bl 0x83ac7f70
	ctx.lr = 0x83A8D2D0;
	sub_83AC7F70(ctx, base);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,65535
	cr6.compare<uint32_t>(ctx.r29.u32, 65535, xer);
	// beq cr6,0x83a8d354
	if (cr6.eq) goto loc_83A8D354;
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,1284
	ctx.r3.s64 = ctx.r11.s64 + 1284;
	// bl 0x83ac7e40
	ctx.lr = 0x83A8D2F0;
	sub_83AC7E40(ctx, base);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,-22544
	ctx.r10.s64 = ctx.r10.s64 + -22544;
	// sth r9,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r9.u16);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,1332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1332);
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a8d354
	if (cr0.eq) goto loc_83A8D354;
loc_83A8D318:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,1372
	ctx.r3.s64 = ctx.r11.s64 + 1372;
	// bl 0x83ac4c30
	ctx.lr = 0x83A8D328;
	sub_83AC4C30(ctx, base);
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x83a8d374
	if (cr6.eq) goto loc_83A8D374;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,1332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1332);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a8d318
	if (cr6.lt) goto loc_83A8D318;
loc_83A8D354:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,14888
	ctx.r4.s64 = ctx.r11.s64 + 14888;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea400
	ctx.lr = 0x83A8D368;
	sub_831EA400(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8D36C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A8D374:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a8d36c
	goto loc_83A8D36C;
}

__attribute__((alias("__imp__sub_83A8D37C"))) PPC_WEAK_FUNC(sub_83A8D37C);
PPC_FUNC_IMPL(__imp__sub_83A8D37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8D380"))) PPC_WEAK_FUNC(sub_83A8D380);
PPC_FUNC_IMPL(__imp__sub_83A8D380) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8d3e4
	if (cr6.eq) goto loc_83A8D3E4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,1284
	ctx.r3.s64 = ctx.r11.s64 + 1284;
	// bl 0x83ac7f70
	ctx.lr = 0x83A8D3BC;
	sub_83AC7F70(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83a8d3f4
	if (!cr6.eq) goto loc_83A8D3F4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15000
	ctx.r4.s64 = ctx.r11.s64 + 15000;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A8D3E0;
	sub_831EA400(ctx, base);
	// b 0x83a8d3f4
	goto loc_83A8D3F4;
loc_83A8D3E4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,14960
	ctx.r4.s64 = ctx.r11.s64 + 14960;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8D3F4;
	sub_831EA3F0(ctx, base);
loc_83A8D3F4:
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

__attribute__((alias("__imp__sub_83A8D410"))) PPC_WEAK_FUNC(sub_83A8D410);
PPC_FUNC_IMPL(__imp__sub_83A8D410) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8d44c
	if (cr6.eq) goto loc_83A8D44C;
	// addi r3,r11,1372
	ctx.r3.s64 = ctx.r11.s64 + 1372;
	// bl 0x83ac7fb0
	ctx.lr = 0x83A8D444;
	sub_83AC7FB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83a8d45c
	goto loc_83A8D45C;
loc_83A8D44C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,15056
	ctx.r4.s64 = ctx.r11.s64 + 15056;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8D45C;
	sub_831EA3F0(ctx, base);
loc_83A8D45C:
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

__attribute__((alias("__imp__sub_83A8D474"))) PPC_WEAK_FUNC(sub_83A8D474);
PPC_FUNC_IMPL(__imp__sub_83A8D474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8D478"))) PPC_WEAK_FUNC(sub_83A8D478);
PPC_FUNC_IMPL(__imp__sub_83A8D478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A8D480;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,268
	ctx.r5.s64 = 268;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ea798
	ctx.lr = 0x83A8D4A0;
	sub_831EA798(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8d4c8
	if (!cr6.eq) goto loc_83A8D4C8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,15208
	ctx.r4.s64 = ctx.r11.s64 + 15208;
loc_83A8D4B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8D4BC;
	sub_831EA3F0(ctx, base);
loc_83A8D4BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8D4C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A8D4C8:
	// lbz r11,2368(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2368);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a8d4e0
	if (!cr0.eq) goto loc_83A8D4E0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,15144
	ctx.r4.s64 = ctx.r11.s64 + 15144;
	// b 0x83a8d4b4
	goto loc_83A8D4B4;
loc_83A8D4E0:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8d4f8
	if (!cr6.eq) goto loc_83A8D4F8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,15096
	ctx.r4.s64 = ctx.r11.s64 + 15096;
	// b 0x83a8d4b4
	goto loc_83A8D4B4;
loc_83A8D4F8:
	// addi r31,r31,540
	ctx.r31.s64 = ctx.r31.s64 + 540;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac7d50
	ctx.lr = 0x83A8D508;
	sub_83AC7D50(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a8d4bc
	if (cr6.eq) goto loc_83A8D4BC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac7228
	ctx.lr = 0x83A8D524;
	sub_83AC7228(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a8d4c0
	goto loc_83A8D4C0;
}

__attribute__((alias("__imp__sub_83A8D52C"))) PPC_WEAK_FUNC(sub_83A8D52C);
PPC_FUNC_IMPL(__imp__sub_83A8D52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8D530"))) PPC_WEAK_FUNC(sub_83A8D530);
PPC_FUNC_IMPL(__imp__sub_83A8D530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A8D538;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a8d568
	if (!cr6.eq) goto loc_83A8D568;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,15500
	ctx.r4.s64 = ctx.r11.s64 + 15500;
loc_83A8D558:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8D560;
	sub_831EA418(ctx, base);
loc_83A8D560:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8d61c
	goto loc_83A8D61C;
loc_83A8D568:
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8d588
	if (!cr6.eq) goto loc_83A8D588;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,15488
	ctx.r4.s64 = ctx.r11.s64 + 15488;
	// b 0x83a8d558
	goto loc_83A8D558;
loc_83A8D588:
	// li r5,264
	ctx.r5.s64 = 264;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea798
	ctx.lr = 0x83A8D598;
	sub_831EA798(ctx, base);
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a8d5bc
	if (!cr6.eq) goto loc_83A8D5BC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,15448
	ctx.r4.s64 = ctx.r11.s64 + 15448;
loc_83A8D5B0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A8D5B4:
	// bl 0x831ea3f0
	ctx.lr = 0x83A8D5B8;
	sub_831EA3F0(ctx, base);
	// b 0x83a8d560
	goto loc_83A8D560;
loc_83A8D5BC:
	// lbz r10,2368(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2368);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83a8d5d4
	if (!cr0.eq) goto loc_83A8D5D4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,15384
	ctx.r4.s64 = ctx.r11.s64 + 15384;
	// b 0x83a8d5b0
	goto loc_83A8D5B0;
loc_83A8D5D4:
	// lwz r10,1900(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1900);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a8d5f0
	if (!cr6.eq) goto loc_83A8D5F0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,15328
	ctx.r4.s64 = ctx.r11.s64 + 15328;
	// b 0x83a8d5b4
	goto loc_83A8D5B4;
loc_83A8D5F0:
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83a8d60c
	if (cr6.gt) goto loc_83A8D60C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,15248
	ctx.r4.s64 = ctx.r11.s64 + 15248;
	// b 0x83a8d5b4
	goto loc_83A8D5B4;
loc_83A8D60C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,1852
	ctx.r3.s64 = ctx.r11.s64 + 1852;
	// bl 0x83ac74f0
	ctx.lr = 0x83A8D61C;
	sub_83AC74F0(ctx, base);
loc_83A8D61C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8D624"))) PPC_WEAK_FUNC(sub_83A8D624);
PPC_FUNC_IMPL(__imp__sub_83A8D624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8D628"))) PPC_WEAK_FUNC(sub_83A8D628);
PPC_FUNC_IMPL(__imp__sub_83A8D628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A8D630;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,264
	ctx.r5.s64 = 264;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,27256(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ea798
	ctx.lr = 0x83A8D658;
	sub_831EA798(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8d678
	if (!cr6.eq) goto loc_83A8D678;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,15736
	ctx.r4.s64 = ctx.r11.s64 + 15736;
loc_83A8D66C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8D674;
	sub_831EA3F0(ctx, base);
	// b 0x83a8d72c
	goto loc_83A8D72C;
loc_83A8D678:
	// lbz r11,2368(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2368);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a8d690
	if (!cr0.eq) goto loc_83A8D690;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,15672
	ctx.r4.s64 = ctx.r11.s64 + 15672;
	// b 0x83a8d66c
	goto loc_83A8D66C;
loc_83A8D690:
	// lwz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8d6a8
	if (!cr6.eq) goto loc_83A8D6A8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,15616
	ctx.r4.s64 = ctx.r11.s64 + 15616;
	// b 0x83a8d66c
	goto loc_83A8D66C;
loc_83A8D6A8:
	// lhz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 264);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83a8d6c4
	if (!cr0.eq) goto loc_83A8D6C4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,15564
	ctx.r4.s64 = ctx.r11.s64 + 15564;
	// b 0x83a8d724
	goto loc_83A8D724;
loc_83A8D6C4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lhz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 260);
	// addi r31,r31,1852
	ctx.r31.s64 = ctx.r31.s64 + 1852;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac7670
	ctx.lr = 0x83A8D6F4;
	sub_83AC7670(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a8d718
	if (cr6.eq) goto loc_83A8D718;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac74f0
	ctx.lr = 0x83A8D710;
	sub_83AC74F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a8d730
	goto loc_83A8D730;
loc_83A8D718:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,15512
	ctx.r4.s64 = ctx.r11.s64 + 15512;
loc_83A8D724:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea400
	ctx.lr = 0x83A8D72C;
	sub_831EA400(ctx, base);
loc_83A8D72C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8D730:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8D738"))) PPC_WEAK_FUNC(sub_83A8D738);
PPC_FUNC_IMPL(__imp__sub_83A8D738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r3,2392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2392);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8D748"))) PPC_WEAK_FUNC(sub_83A8D748);
PPC_FUNC_IMPL(__imp__sub_83A8D748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A8D750;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea798
	ctx.lr = 0x83A8D770;
	sub_831EA798(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a8d79c
	if (cr6.eq) goto loc_83A8D79C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,2124
	ctx.r5.s64 = ctx.r31.s64 + 2124;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,632
	ctx.r3.s64 = ctx.r31.s64 + 632;
	// bl 0x83ac7710
	ctx.lr = 0x83A8D790;
	sub_83AC7710(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x83a8d7a0
	if (!cr0.eq) goto loc_83A8D7A0;
loc_83A8D79C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8D7A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8D7A8"))) PPC_WEAK_FUNC(sub_83A8D7A8);
PPC_FUNC_IMPL(__imp__sub_83A8D7A8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a8d898
	if (!cr6.eq) goto loc_83A8D898;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bgt cr6,0x83a8d880
	if (cr6.gt) goto loc_83A8D880;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,13952
	ctx.r12.s64 = ctx.r12.s64 + 13952;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31831
	ctx.r12.s64 = -2086076416;
	// nop 
	// addi r12,r12,-10256
	ctx.r12.s64 = ctx.r12.s64 + -10256;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83A8D7F0;
	case 1:
		goto loc_83A8D7F8;
	case 2:
		goto loc_83A8D800;
	case 3:
		goto loc_83A8D808;
	case 4:
		goto loc_83A8D810;
	case 5:
		goto loc_83A8D818;
	case 6:
		goto loc_83A8D820;
	case 7:
		goto loc_83A8D828;
	case 8:
		goto loc_83A8D830;
	case 9:
		goto loc_83A8D838;
	case 10:
		goto loc_83A8D840;
	case 11:
		goto loc_83A8D848;
	case 12:
		goto loc_83A8D850;
	case 13:
		goto loc_83A8D858;
	case 14:
		goto loc_83A8D860;
	case 15:
		goto loc_83A8D868;
	case 16:
		goto loc_83A8D870;
	case 17:
		goto loc_83A8D878;
	default:
		return;
	}
loc_83A8D7F0:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D7F8:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D800:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D808:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D810:
	// li r3,9
	ctx.r3.s64 = 9;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D818:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D820:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D828:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D830:
	// li r3,10
	ctx.r3.s64 = 10;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D838:
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D840:
	// li r3,12
	ctx.r3.s64 = 12;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D848:
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D850:
	// li r3,14
	ctx.r3.s64 = 14;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D858:
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D860:
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D868:
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D870:
	// li r3,18
	ctx.r3.s64 = 18;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D878:
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x83a8d898
	goto loc_83A8D898;
loc_83A8D880:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,15776
	ctx.r4.s64 = ctx.r11.s64 + 15776;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A8D894;
	sub_831EA400(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8D898:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8D8A8"))) PPC_WEAK_FUNC(sub_83A8D8A8);
PPC_FUNC_IMPL(__imp__sub_83A8D8A8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a8d8e8
	if (!cr6.eq) goto loc_83A8D8E8;
loc_83A8D8E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8d91c
	goto loc_83A8D91C;
loc_83A8D8E8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,740
	ctx.r3.s64 = ctx.r11.s64 + 740;
	// bl 0x83ac7a08
	ctx.lr = 0x83A8D8F8;
	sub_83AC7A08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8d8e0
	if (cr0.eq) goto loc_83A8D8E0;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83a8d7a8
	ctx.lr = 0x83A8D90C;
	sub_83A8D7A8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83A8D91C:
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

__attribute__((alias("__imp__sub_83A8D934"))) PPC_WEAK_FUNC(sub_83A8D934);
PPC_FUNC_IMPL(__imp__sub_83A8D934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8D938"))) PPC_WEAK_FUNC(sub_83A8D938);
PPC_FUNC_IMPL(__imp__sub_83A8D938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8d980
	if (cr6.eq) goto loc_83A8D980;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,740
	ctx.r3.s64 = ctx.r11.s64 + 740;
	// bl 0x83ac7a08
	ctx.lr = 0x83A8D968;
	sub_83AC7A08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8d980
	if (cr0.eq) goto loc_83A8D980;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83a8d7a8
	ctx.lr = 0x83A8D97C;
	sub_83A8D7A8(ctx, base);
	// b 0x83a8d984
	goto loc_83A8D984;
loc_83A8D980:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8D984:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8D994"))) PPC_WEAK_FUNC(sub_83A8D994);
PPC_FUNC_IMPL(__imp__sub_83A8D994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8D998"))) PPC_WEAK_FUNC(sub_83A8D998);
PPC_FUNC_IMPL(__imp__sub_83A8D998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A8D9A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,27252
	ctx.r29.s64 = ctx.r11.s64 + 27252;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r11,740
	ctx.r3.s64 = ctx.r11.s64 + 740;
	// bl 0x83ac7a08
	ctx.lr = 0x83A8D9CC;
	sub_83AC7A08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8da44
	if (cr0.eq) goto loc_83A8DA44;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bge cr6,0x83a8da44
	if (!cr6.lt) goto loc_83A8DA44;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,17
	cr6.compare<uint32_t>(ctx.r10.u32, 17, xer);
	// bgt cr6,0x83a8da44
	if (cr6.gt) goto loc_83A8DA44;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// rlwinm r0,r10,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,13976
	ctx.r12.s64 = ctx.r12.s64 + 13976;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31831
	ctx.r12.s64 = -2086076416;
	// addi r12,r12,-9684
	ctx.r12.s64 = ctx.r12.s64 + -9684;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_83A8DA2C;
	case 1:
		goto loc_83A8DBFC;
	case 2:
		goto loc_83A8DD08;
	case 3:
		goto loc_83A8DDD4;
	case 4:
		goto loc_83A8DE58;
	case 5:
		goto loc_83A8E0D0;
	case 6:
		goto loc_83A8E144;
	case 7:
		goto loc_83A8E1E4;
	case 8:
		goto loc_83A8E2B8;
	case 9:
		goto loc_83A8E4C4;
	case 10:
		goto loc_83A8E634;
	case 11:
		goto loc_83A8E628;
	case 12:
		goto loc_83A8E71C;
	case 13:
		goto loc_83A8E804;
	case 14:
		goto loc_83A8EBD0;
	case 15:
		goto loc_83A8EF90;
	case 16:
		goto loc_83A8F0FC;
	case 17:
		goto loc_83A8F17C;
	default:
		return;
	}
loc_83A8DA2C:
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// bge cr6,0x83a8da50
	if (!cr6.lt) goto loc_83A8DA50;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16328
	ctx.r4.s64 = ctx.r11.s64 + 16328;
loc_83A8DA3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8DA44;
	sub_831EA3F0(ctx, base);
loc_83A8DA44:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A8DA48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A8DA50:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lbz r10,-3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lbz r10,-3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r10,-3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r10,-3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lbz r10,-3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,136
	ctx.r10.s64 = 8912896;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r3,r3,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r8,60(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a8dbf0
	if (cr6.lt) goto loc_83A8DBF0;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x83a8dbf4
	goto loc_83A8DBF4;
loc_83A8DBF0:
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_83A8DBF4:
	// li r3,32
	ctx.r3.s64 = 32;
	// b 0x83a8f254
	goto loc_83A8F254;
loc_83A8DBFC:
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// bge cr6,0x83a8dc10
	if (!cr6.lt) goto loc_83A8DC10;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16296
	ctx.r4.s64 = ctx.r11.s64 + 16296;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8DC10:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,60(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// lis r9,96
	ctx.r9.s64 = 6291456;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// blt cr6,0x83a8dc88
	if (cr6.lt) goto loc_83A8DC88;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83a8dcc4
	goto loc_83A8DCC4;
loc_83A8DC88:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lfs f13,-10804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_83A8DCC4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x83a8f254
	goto loc_83A8F254;
loc_83A8DD08:
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// bge cr6,0x83a8dd1c
	if (!cr6.lt) goto loc_83A8DD1C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16264
	ctx.r4.s64 = ctx.r11.s64 + 16264;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8DD1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lbz r10,-3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
loc_83A8DDC4:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x83a8f254
	goto loc_83A8F254;
loc_83A8DDD4:
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// bge cr6,0x83a8dde8
	if (!cr6.lt) goto loc_83A8DDE8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16232
	ctx.r4.s64 = ctx.r11.s64 + 16232;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8DDE8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r10,-3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
loc_83A8DE44:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x83a8f254
	goto loc_83A8F254;
loc_83A8DE58:
	// cmplwi cr6,r30,40
	cr6.compare<uint32_t>(ctx.r30.u32, 40, xer);
	// bge cr6,0x83a8de6c
	if (!cr6.lt) goto loc_83A8DE6C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16200
	ctx.r4.s64 = ctx.r11.s64 + 16200;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8DE6C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,66
	ctx.r10.s64 = 4325376;
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r7,-3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 | ctx.r3.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r4,-3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 | ctx.r3.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r3,-3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lbz r4,-3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 | ctx.r3.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lbz r7,-3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 | ctx.r3.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lbz r7,-3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 | ctx.r3.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r8,60(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a8dff8
	if (cr6.lt) goto loc_83A8DFF8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x83a8dffc
	goto loc_83A8DFFC;
loc_83A8DFF8:
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_83A8DFFC:
	// lwz r10,60(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// lis r8,275
	ctx.r8.s64 = 18022400;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x83a8e0b4
	if (cr6.lt) goto loc_83A8E0B4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,40
	ctx.r3.s64 = 40;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// b 0x83a8f254
	goto loc_83A8F254;
loc_83A8E0B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// b 0x83a8da48
	goto loc_83A8DA48;
loc_83A8E0D0:
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// bge cr6,0x83a8e0e4
	if (!cr6.lt) goto loc_83A8E0E4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16168
	ctx.r4.s64 = ctx.r11.s64 + 16168;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8E0E4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// b 0x83a8de44
	goto loc_83A8DE44;
loc_83A8E144:
	// cmplwi cr6,r30,20
	cr6.compare<uint32_t>(ctx.r30.u32, 20, xer);
	// bge cr6,0x83a8e158
	if (!cr6.lt) goto loc_83A8E158;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16136
	ctx.r4.s64 = ctx.r11.s64 + 16136;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8E158:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,20
	ctx.r3.s64 = 20;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x83a8f254
	goto loc_83A8F254;
loc_83A8E1E4:
	// cmplwi cr6,r30,48
	cr6.compare<uint32_t>(ctx.r30.u32, 48, xer);
	// bge cr6,0x83a8e1f8
	if (!cr6.lt) goto loc_83A8E1F8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16104
	ctx.r4.s64 = ctx.r11.s64 + 16104;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8E1F8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x83a8e2b0
	if (cr0.eq) goto loc_83A8E2B0;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
loc_83A8E20C:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lbz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r3,r3,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r7,-3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 | ctx.r7.u64;
	// lbz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lbz r31,-2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r4,-3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r3,r3,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 | ctx.r4.u64;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 | ctx.r31.u64;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 | ctx.r7.u64;
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r3,r3,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r31,-3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// or r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 | ctx.r31.u64;
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 | ctx.r4.u64;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 | ctx.r7.u64;
	// stwu r7,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x83a8e20c
	if (cr6.lt) goto loc_83A8E20C;
loc_83A8E2B0:
	// li r3,48
	ctx.r3.s64 = 48;
	// b 0x83a8f254
	goto loc_83A8F254;
loc_83A8E2B8:
	// cmplwi cr6,r30,36
	cr6.compare<uint32_t>(ctx.r30.u32, 36, xer);
	// bge cr6,0x83a8e2cc
	if (!cr6.lt) goto loc_83A8E2CC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16072
	ctx.r4.s64 = ctx.r11.s64 + 16072;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8E2CC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lbz r10,-3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,-3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r3,36
	ctx.r3.s64 = 36;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// b 0x83a8f254
	goto loc_83A8F254;
loc_83A8E4C4:
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// bge cr6,0x83a8e4d8
	if (!cr6.lt) goto loc_83A8E4D8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16040
	ctx.r4.s64 = ctx.r11.s64 + 16040;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8E4D8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,24
	ctx.r3.s64 = 24;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x83a8f254
	goto loc_83A8F254;
loc_83A8E628:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x83a8f254
	goto loc_83A8F254;
loc_83A8E634:
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// bge cr6,0x83a8e648
	if (!cr6.lt) goto loc_83A8E648;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16008
	ctx.r4.s64 = ctx.r11.s64 + 16008;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8E648:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,16
	ctx.r3.s64 = 16;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lbz r7,-3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x83a8ddc4
	goto loc_83A8DDC4;
loc_83A8E71C:
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// bge cr6,0x83a8e730
	if (!cr6.lt) goto loc_83A8E730;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,15976
	ctx.r4.s64 = ctx.r11.s64 + 15976;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8E730:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,257
	ctx.r10.s64 = 16842752;
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,60(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a8e7f0
	if (cr6.lt) goto loc_83A8E7F0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83a8e7fc
	goto loc_83A8E7FC;
loc_83A8E7F0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-23488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_83A8E7FC:
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x83a8f254
	goto loc_83A8F254;
loc_83A8E804:
	// cmplwi cr6,r30,68
	cr6.compare<uint32_t>(ctx.r30.u32, 68, xer);
	// bge cr6,0x83a8e818
	if (!cr6.lt) goto loc_83A8E818;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,15944
	ctx.r4.s64 = ctx.r11.s64 + 15944;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8E818:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r10,-3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r7,-3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// li r3,68
	ctx.r3.s64 = 68;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
loc_83A8EBC0:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// b 0x83a8f254
	goto loc_83A8F254;
loc_83A8EBD0:
	// cmplwi cr6,r30,68
	cr6.compare<uint32_t>(ctx.r30.u32, 68, xer);
	// bge cr6,0x83a8ebe4
	if (!cr6.lt) goto loc_83A8EBE4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,15912
	ctx.r4.s64 = ctx.r11.s64 + 15912;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8EBE4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lbz r7,-3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,-3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// li r3,68
	ctx.r3.s64 = 68;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x83a8ebc0
	goto loc_83A8EBC0;
loc_83A8EF90:
	// cmplwi cr6,r30,28
	cr6.compare<uint32_t>(ctx.r30.u32, 28, xer);
	// bge cr6,0x83a8efa4
	if (!cr6.lt) goto loc_83A8EFA4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,15880
	ctx.r4.s64 = ctx.r11.s64 + 15880;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8EFA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x83a8f254
	goto loc_83A8F254;
loc_83A8F0FC:
	// cmplwi cr6,r30,256
	cr6.compare<uint32_t>(ctx.r30.u32, 256, xer);
	// bge cr6,0x83a8f110
	if (!cr6.lt) goto loc_83A8F110;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,15848
	ctx.r4.s64 = ctx.r11.s64 + 15848;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8F110:
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_83A8F114:
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83A8F120:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r3,-3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r30,-2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r27,-1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 | ctx.r27.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x83a8f120
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A8F120;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmpwi cr6,r7,64
	cr6.compare<int32_t>(ctx.r7.s32, 64, xer);
	// blt cr6,0x83a8f114
	if (cr6.lt) goto loc_83A8F114;
	// li r3,256
	ctx.r3.s64 = 256;
	// b 0x83a8f254
	goto loc_83A8F254;
loc_83A8F17C:
	// cmplwi cr6,r30,516
	cr6.compare<uint32_t>(ctx.r30.u32, 516, xer);
	// bge cr6,0x83a8f190
	if (!cr6.lt) goto loc_83A8F190;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,15816
	ctx.r4.s64 = ctx.r11.s64 + 15816;
	// b 0x83a8da3c
	goto loc_83A8DA3C;
loc_83A8F190:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// ble 0x83a8f250
	if (!cr0.gt) goto loc_83A8F250;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_83A8F1A8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lbz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r4,-3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r7,-3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 | ctx.r3.u64;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r7,-3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 | ctx.r3.u64;
	// stwu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a8f1a8
	if (cr6.lt) goto loc_83A8F1A8;
loc_83A8F250:
	// li r3,516
	ctx.r3.s64 = 516;
loc_83A8F254:
	// lwz r10,60(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// lis r9,80
	ctx.r9.s64 = 5242880;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83a8f26c
	if (cr6.lt) goto loc_83A8F26C;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
loc_83A8F26C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a8da48
	if (cr6.eq) goto loc_83A8DA48;
	// stw r5,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
	// b 0x83a8da48
	goto loc_83A8DA48;
}

__attribute__((alias("__imp__sub_83A8F27C"))) PPC_WEAK_FUNC(sub_83A8F27C);
PPC_FUNC_IMPL(__imp__sub_83A8F27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8F280"))) PPC_WEAK_FUNC(sub_83A8F280);
PPC_FUNC_IMPL(__imp__sub_83A8F280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8f2bc
	if (cr6.eq) goto loc_83A8F2BC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,812
	ctx.r3.s64 = ctx.r11.s64 + 812;
	// bl 0x83ac7b60
	ctx.lr = 0x83A8F2B0;
	sub_83AC7B60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x83a8f2c0
	if (!cr0.eq) goto loc_83A8F2C0;
loc_83A8F2BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8F2C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8F2D0"))) PPC_WEAK_FUNC(sub_83A8F2D0);
PPC_FUNC_IMPL(__imp__sub_83A8F2D0) {
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
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a8f320
	if (cr6.eq) goto loc_83A8F320;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// addi r3,r11,892
	ctx.r3.s64 = ctx.r11.s64 + 892;
	// bl 0x83ac7c60
	ctx.lr = 0x83A8F308;
	sub_83AC7C60(ctx, base);
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83a8f324
	goto loc_83A8F324;
loc_83A8F320:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8F324:
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

__attribute__((alias("__imp__sub_83A8F338"))) PPC_WEAK_FUNC(sub_83A8F338);
PPC_FUNC_IMPL(__imp__sub_83A8F338) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// addi r3,r11,892
	ctx.r3.s64 = ctx.r11.s64 + 892;
	// bl 0x83ac7d50
	ctx.lr = 0x83A8F360;
	sub_83AC7D50(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83a8f384
	if (!cr6.eq) goto loc_83A8F384;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,16360
	ctx.r4.s64 = ctx.r11.s64 + 16360;
	// bl 0x831ea400
	ctx.lr = 0x83A8F380;
	sub_831EA400(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8F384:
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

__attribute__((alias("__imp__sub_83A8F398"))) PPC_WEAK_FUNC(sub_83A8F398);
PPC_FUNC_IMPL(__imp__sub_83A8F398) {
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
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// addi r3,r11,892
	ctx.r3.s64 = ctx.r11.s64 + 892;
	// bl 0x83ac7d50
	ctx.lr = 0x83A8F3BC;
	sub_83AC7D50(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a8f3e4
	if (cr6.eq) goto loc_83A8F3E4;
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,892
	ctx.r3.s64 = ctx.r11.s64 + 892;
	// bl 0x83ac7c60
	ctx.lr = 0x83A8F3DC;
	sub_83AC7C60(ctx, base);
	// lhz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// b 0x83a8f3e8
	goto loc_83A8F3E8;
loc_83A8F3E4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A8F3E8:
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

__attribute__((alias("__imp__sub_83A8F3FC"))) PPC_WEAK_FUNC(sub_83A8F3FC);
PPC_FUNC_IMPL(__imp__sub_83A8F3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8F400"))) PPC_WEAK_FUNC(sub_83A8F400);
PPC_FUNC_IMPL(__imp__sub_83A8F400) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8f448
	if (cr6.eq) goto loc_83A8F448;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,1148
	ctx.r3.s64 = ctx.r11.s64 + 1148;
	// bl 0x83ac7fb0
	ctx.lr = 0x83A8F434;
	sub_83AC7FB0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a8f448
	if (cr6.eq) goto loc_83A8F448;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a8f460
	goto loc_83A8F460;
loc_83A8F448:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,16416
	ctx.r4.s64 = ctx.r11.s64 + 16416;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea400
	ctx.lr = 0x83A8F45C;
	sub_831EA400(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8F460:
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

__attribute__((alias("__imp__sub_83A8F474"))) PPC_WEAK_FUNC(sub_83A8F474);
PPC_FUNC_IMPL(__imp__sub_83A8F474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8F478"))) PPC_WEAK_FUNC(sub_83A8F478);
PPC_FUNC_IMPL(__imp__sub_83A8F478) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8f4a8
	if (cr6.eq) goto loc_83A8F4A8;
	// addi r3,r11,1148
	ctx.r3.s64 = ctx.r11.s64 + 1148;
	// bl 0x83ac7fb0
	ctx.lr = 0x83A8F4A4;
	sub_83AC7FB0(ctx, base);
	// b 0x83a8f4bc
	goto loc_83A8F4BC;
loc_83A8F4A8:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,16472
	ctx.r4.s64 = ctx.r11.s64 + 16472;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8F4B8;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A8F4BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8F4CC"))) PPC_WEAK_FUNC(sub_83A8F4CC);
PPC_FUNC_IMPL(__imp__sub_83A8F4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8F4D0"))) PPC_WEAK_FUNC(sub_83A8F4D0);
PPC_FUNC_IMPL(__imp__sub_83A8F4D0) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// addi r3,r11,956
	ctx.r3.s64 = ctx.r11.s64 + 956;
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x83ac6138
	ctx.lr = 0x83A8F4F8;
	sub_83AC6138(ctx, base);
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

__attribute__((alias("__imp__sub_83A8F50C"))) PPC_WEAK_FUNC(sub_83A8F50C);
PPC_FUNC_IMPL(__imp__sub_83A8F50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8F510"))) PPC_WEAK_FUNC(sub_83A8F510);
PPC_FUNC_IMPL(__imp__sub_83A8F510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// rlwinm. r10,r3,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// beq 0x83a8f550
	if (cr0.eq) goto loc_83A8F550;
	// clrlwi r4,r11,17
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFF;
	// lwz r11,27256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27256);
	// addi r3,r11,956
	ctx.r3.s64 = ctx.r11.s64 + 956;
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x83ac6138
	ctx.lr = 0x83A8F54C;
	sub_83AC6138(ctx, base);
	// b 0x83a8f57c
	goto loc_83A8F57C;
loc_83A8F550:
	// clrlwi r4,r11,18
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFF;
	// lwz r11,27256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27256);
	// addi r3,r11,1616
	ctx.r3.s64 = ctx.r11.s64 + 1616;
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x83ac6138
	ctx.lr = 0x83A8F564;
	sub_83AC6138(ctx, base);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a8f57c
	if (cr6.eq) goto loc_83A8F57C;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
loc_83A8F57C:
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

__attribute__((alias("__imp__sub_83A8F594"))) PPC_WEAK_FUNC(sub_83A8F594);
PPC_FUNC_IMPL(__imp__sub_83A8F594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8F598"))) PPC_WEAK_FUNC(sub_83A8F598);
PPC_FUNC_IMPL(__imp__sub_83A8F598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// rlwinm. r10,r3,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// beq 0x83a8f5b8
	if (cr0.eq) goto loc_83A8F5B8;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// clrlwi r3,r11,17
	ctx.r3.u64 = ctx.r11.u32 & 0x7FFF;
	// lwz r11,27256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27256);
	// addi r10,r11,956
	ctx.r10.s64 = ctx.r11.s64 + 956;
	// b 0x83a8f5c4
	goto loc_83A8F5C4;
loc_83A8F5B8:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// addi r10,r11,1616
	ctx.r10.s64 = ctx.r11.s64 + 1616;
loc_83A8F5C4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r7,r3,18
	ctx.r7.u64 = ctx.r3.u32 & 0x3FFF;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lhz r9,10(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 10);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,36(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lhz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8F66C"))) PPC_WEAK_FUNC(sub_83A8F66C);
PPC_FUNC_IMPL(__imp__sub_83A8F66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8F670"))) PPC_WEAK_FUNC(sub_83A8F670);
PPC_FUNC_IMPL(__imp__sub_83A8F670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A8F678;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// lwz r10,1004(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83a8f6dc
	if (!cr6.gt) goto loc_83A8F6DC;
loc_83A8F698:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,1148
	ctx.r3.s64 = ctx.r11.s64 + 1148;
	// bl 0x83ac4c30
	ctx.lr = 0x83A8F6A8;
	sub_83AC4C30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8f6c0
	if (cr0.eq) goto loc_83A8F6C0;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83a8f6e8
	if (cr6.eq) goto loc_83A8F6E8;
loc_83A8F6C0:
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,1004(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a8f698
	if (cr6.lt) goto loc_83A8F698;
loc_83A8F6DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8F6E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A8F6E8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83a8f6e0
	goto loc_83A8F6E0;
}

__attribute__((alias("__imp__sub_83A8F6F0"))) PPC_WEAK_FUNC(sub_83A8F6F0);
PPC_FUNC_IMPL(__imp__sub_83A8F6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// addi r3,r11,1064
	ctx.r3.s64 = ctx.r11.s64 + 1064;
	// b 0x83ac6350
	sub_83AC6350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8F708"))) PPC_WEAK_FUNC(sub_83A8F708);
PPC_FUNC_IMPL(__imp__sub_83A8F708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,1064(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1064);
	// lwz r11,1064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1064);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83a8f75c
	if (!cr0.eq) goto loc_83A8F75C;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x83a8f77c
	goto loc_83A8F77C;
loc_83A8F75C:
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_83A8F77C:
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8F784"))) PPC_WEAK_FUNC(sub_83A8F784);
PPC_FUNC_IMPL(__imp__sub_83A8F784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8F788"))) PPC_WEAK_FUNC(sub_83A8F788);
PPC_FUNC_IMPL(__imp__sub_83A8F788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// addi r3,r11,1064
	ctx.r3.s64 = ctx.r11.s64 + 1064;
	// b 0x83ac6598
	sub_83AC6598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8F7A0"))) PPC_WEAK_FUNC(sub_83A8F7A0);
PPC_FUNC_IMPL(__imp__sub_83A8F7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// addi r3,r11,1212
	ctx.r3.s64 = ctx.r11.s64 + 1212;
	// b 0x83ac6678
	sub_83AC6678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8F7B8"))) PPC_WEAK_FUNC(sub_83A8F7B8);
PPC_FUNC_IMPL(__imp__sub_83A8F7B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8f7f0
	if (!cr6.eq) goto loc_83A8F7F0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,16512
	ctx.r4.s64 = ctx.r11.s64 + 16512;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8F7E8;
	sub_831EA418(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a8f808
	goto loc_83A8F808;
loc_83A8F7F0:
	// lbz r10,2368(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2368);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83a8f804
	if (cr0.eq) goto loc_83A8F804;
	// lwz r3,588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// b 0x83a8f808
	goto loc_83A8F808;
loc_83A8F804:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8F808:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8F818"))) PPC_WEAK_FUNC(sub_83A8F818);
PPC_FUNC_IMPL(__imp__sub_83A8F818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A8F820;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31739
	ctx.r28.s64 = -2080047104;
	// lwz r11,27256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8f850
	if (!cr6.eq) goto loc_83A8F850;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,16524
	ctx.r4.s64 = ctx.r11.s64 + 16524;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8F848;
	sub_831EA418(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a8f8c8
	goto loc_83A8F8C8;
loc_83A8F850:
	// lbz r10,2368(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2368);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83a8f8c4
	if (cr0.eq) goto loc_83A8F8C4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a8f8bc
	if (!cr6.gt) goto loc_83A8F8BC;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x83a8f7b8
	ctx.lr = 0x83A8F874;
	sub_83A8F7B8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// ble 0x83a8f8b4
	if (!cr0.gt) goto loc_83A8F8B4;
loc_83A8F880:
	// lwz r11,27256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r3,r11,540
	ctx.r3.s64 = ctx.r11.s64 + 540;
	// bl 0x83ac7228
	ctx.lr = 0x83A8F894;
	sub_83AC7228(ctx, base);
	// lbz r11,342(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 342);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x83a8f8a8
	if (!cr6.lt) goto loc_83A8F8A8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83A8F8A8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x83a8f880
	if (cr6.lt) goto loc_83A8F880;
loc_83A8F8B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83a8f8c8
	goto loc_83A8F8C8;
loc_83A8F8BC:
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x83a8f8c8
	goto loc_83A8F8C8;
loc_83A8F8C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8F8C8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8F8D0"))) PPC_WEAK_FUNC(sub_83A8F8D0);
PPC_FUNC_IMPL(__imp__sub_83A8F8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8f90c
	if (!cr6.eq) goto loc_83A8F90C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,16536
	ctx.r4.s64 = ctx.r11.s64 + 16536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8F904;
	sub_831EA418(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a8f974
	goto loc_83A8F974;
loc_83A8F90C:
	// lbz r10,2368(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2368);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83a8f970
	if (cr0.eq) goto loc_83A8F970;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lis r9,265
	ctx.r9.s64 = 17367040;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x83a8f968
	if (!cr6.gt) goto loc_83A8F968;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,2124
	ctx.r3.s64 = ctx.r11.s64 + 2124;
	// bl 0x83ac6758
	ctx.lr = 0x83A8F938;
	sub_83AC6758(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x839f82f0
	ctx.lr = 0x83A8F948;
	sub_839F82F0(ctx, base);
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8f960
	if (!cr0.eq) goto loc_83A8F960;
	// lwz r11,2172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2172);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x83a8f974
	goto loc_83A8F974;
loc_83A8F960:
	// lwz r3,2172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2172);
	// b 0x83a8f974
	goto loc_83A8F974;
loc_83A8F968:
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x83a8f974
	goto loc_83A8F974;
loc_83A8F970:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8F974:
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

__attribute__((alias("__imp__sub_83A8F988"))) PPC_WEAK_FUNC(sub_83A8F988);
PPC_FUNC_IMPL(__imp__sub_83A8F988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8f9c0
	if (!cr6.eq) goto loc_83A8F9C0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,16560
	ctx.r4.s64 = ctx.r11.s64 + 16560;
loc_83A8F9B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8F9BC;
	sub_831EA418(ctx, base);
	// b 0x83a8fa0c
	goto loc_83A8FA0C;
loc_83A8F9C0:
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x83a8f9dc
	if (!cr6.eq) goto loc_83A8F9DC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,16548
	ctx.r4.s64 = ctx.r11.s64 + 16548;
	// b 0x83a8f9b4
	goto loc_83A8F9B4;
loc_83A8F9DC:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8fa0c
	if (cr6.eq) goto loc_83A8FA0C;
	// lbz r10,2368(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2368);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83a8fa0c
	if (cr0.eq) goto loc_83A8FA0C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,540
	ctx.r3.s64 = ctx.r11.s64 + 540;
	// bl 0x83ac7228
	ctx.lr = 0x83A8FA00;
	sub_83AC7228(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne 0x83a8fa10
	if (!cr0.eq) goto loc_83A8FA10;
loc_83A8FA0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8FA10:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8FA20"))) PPC_WEAK_FUNC(sub_83A8FA20);
PPC_FUNC_IMPL(__imp__sub_83A8FA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// addi r3,r11,1436
	ctx.r3.s64 = ctx.r11.s64 + 1436;
	// b 0x83ac6090
	sub_83AC6090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8FA38"))) PPC_WEAK_FUNC(sub_83A8FA38);
PPC_FUNC_IMPL(__imp__sub_83A8FA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r11,1544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1544);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8FA4C"))) PPC_WEAK_FUNC(sub_83A8FA4C);
PPC_FUNC_IMPL(__imp__sub_83A8FA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8FA50"))) PPC_WEAK_FUNC(sub_83A8FA50);
PPC_FUNC_IMPL(__imp__sub_83A8FA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// bl 0x83ac8018
	ctx.lr = 0x83A8FA74;
	sub_83AC8018(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8FA8C"))) PPC_WEAK_FUNC(sub_83A8FA8C);
PPC_FUNC_IMPL(__imp__sub_83A8FA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8FA90"))) PPC_WEAK_FUNC(sub_83A8FA90);
PPC_FUNC_IMPL(__imp__sub_83A8FA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r3,2376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2376);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8FAA0"))) PPC_WEAK_FUNC(sub_83A8FAA0);
PPC_FUNC_IMPL(__imp__sub_83A8FAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r3,2380(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2380);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,2380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2380, ctx.r9.u32);
	// bne cr6,0x83a8facc
	if (!cr6.eq) goto loc_83A8FACC;
	// stw r10,2384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2384, ctx.r10.u32);
loc_83A8FACC:
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,2388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2388);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,2388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2388, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8FAE0"))) PPC_WEAK_FUNC(sub_83A8FAE0);
PPC_FUNC_IMPL(__imp__sub_83A8FAE0) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8fb14
	if (!cr6.eq) goto loc_83A8FB14;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16612
	ctx.r4.s64 = ctx.r11.s64 + 16612;
loc_83A8FB04:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8FB0C;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a8fb30
	goto loc_83A8FB30;
loc_83A8FB14:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a8fb2c
	if (!cr6.eq) goto loc_83A8FB2C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16572
	ctx.r4.s64 = ctx.r11.s64 + 16572;
	// b 0x83a8fb04
	goto loc_83A8FB04;
loc_83A8FB2C:
	// lwz r3,1772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1772);
loc_83A8FB30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8FB40"))) PPC_WEAK_FUNC(sub_83A8FB40);
PPC_FUNC_IMPL(__imp__sub_83A8FB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A8FB48;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31739
	ctx.r29.s64 = -2080047104;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,27256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8fb7c
	if (!cr6.eq) goto loc_83A8FB7C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16692
	ctx.r4.s64 = ctx.r11.s64 + 16692;
loc_83A8FB6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8FB74;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8fc1c
	goto loc_83A8FC1C;
loc_83A8FB7C:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a8fb94
	if (!cr6.eq) goto loc_83A8FB94;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16652
	ctx.r4.s64 = ctx.r11.s64 + 16652;
	// b 0x83a8fb6c
	goto loc_83A8FB6C;
loc_83A8FB94:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,1724
	ctx.r3.s64 = ctx.r11.s64 + 1724;
	// bl 0x83ac8258
	ctx.lr = 0x83A8FBA4;
	sub_83AC8258(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x83a8fc18
	if (cr0.eq) goto loc_83A8FC18;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,27256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27256);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r10,1836(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1836);
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a8fc18
	if (cr0.eq) goto loc_83A8FC18;
	// clrlwi r28,r28,16
	ctx.r28.u64 = ctx.r28.u32 & 0xFFFF;
loc_83A8FBD4:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,1788
	ctx.r3.s64 = ctx.r11.s64 + 1788;
	// bl 0x83ac8378
	ctx.lr = 0x83A8FBE4;
	sub_83AC8378(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83a8fc18
	if (cr6.eq) goto loc_83A8FC18;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r11,27256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27256);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,1836(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1836);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a8fbd4
	if (cr6.lt) goto loc_83A8FBD4;
loc_83A8FC18:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_83A8FC1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8FC24"))) PPC_WEAK_FUNC(sub_83A8FC24);
PPC_FUNC_IMPL(__imp__sub_83A8FC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8FC28"))) PPC_WEAK_FUNC(sub_83A8FC28);
PPC_FUNC_IMPL(__imp__sub_83A8FC28) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8fc60
	if (!cr6.eq) goto loc_83A8FC60;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16772
	ctx.r4.s64 = ctx.r11.s64 + 16772;
loc_83A8FC50:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8FC58;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8fc8c
	goto loc_83A8FC8C;
loc_83A8FC60:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a8fc78
	if (!cr6.eq) goto loc_83A8FC78;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16732
	ctx.r4.s64 = ctx.r11.s64 + 16732;
	// b 0x83a8fc50
	goto loc_83A8FC50;
loc_83A8FC78:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1788
	ctx.r3.s64 = ctx.r11.s64 + 1788;
	// bl 0x83ac8438
	ctx.lr = 0x83A8FC84;
	sub_83AC8438(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83A8FC8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8FC9C"))) PPC_WEAK_FUNC(sub_83A8FC9C);
PPC_FUNC_IMPL(__imp__sub_83A8FC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8FCA0"))) PPC_WEAK_FUNC(sub_83A8FCA0);
PPC_FUNC_IMPL(__imp__sub_83A8FCA0) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8fcd8
	if (!cr6.eq) goto loc_83A8FCD8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16852
	ctx.r4.s64 = ctx.r11.s64 + 16852;
loc_83A8FCC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8FCD0;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8fd0c
	goto loc_83A8FD0C;
loc_83A8FCD8:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a8fcf0
	if (!cr6.eq) goto loc_83A8FCF0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16812
	ctx.r4.s64 = ctx.r11.s64 + 16812;
	// b 0x83a8fcc8
	goto loc_83A8FCC8;
loc_83A8FCF0:
	// addi r3,r11,1724
	ctx.r3.s64 = ctx.r11.s64 + 1724;
	// bl 0x83ac8308
	ctx.lr = 0x83A8FCF8;
	sub_83AC8308(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addis r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -65536;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83A8FD0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8FD1C"))) PPC_WEAK_FUNC(sub_83A8FD1C);
PPC_FUNC_IMPL(__imp__sub_83A8FD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8FD20"))) PPC_WEAK_FUNC(sub_83A8FD20);
PPC_FUNC_IMPL(__imp__sub_83A8FD20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A8FD28;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8fd5c
	if (!cr6.eq) goto loc_83A8FD5C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16976
	ctx.r4.s64 = ctx.r11.s64 + 16976;
loc_83A8FD4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8FD54;
	sub_831EA3F0(ctx, base);
loc_83A8FD54:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8fe2c
	goto loc_83A8FE2C;
loc_83A8FD5C:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a8fd74
	if (!cr6.eq) goto loc_83A8FD74;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,16936
	ctx.r4.s64 = ctx.r11.s64 + 16936;
	// b 0x83a8fd4c
	goto loc_83A8FD4C;
loc_83A8FD74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,1724
	ctx.r3.s64 = ctx.r11.s64 + 1724;
	// bl 0x83ac8308
	ctx.lr = 0x83A8FD80;
	sub_83AC8308(ctx, base);
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,65535
	cr6.compare<uint32_t>(ctx.r28.u32, 65535, xer);
	// bne cr6,0x83a8fda8
	if (!cr6.eq) goto loc_83A8FDA8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r4,r11,16892
	ctx.r4.s64 = ctx.r11.s64 + 16892;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A8FDA4;
	sub_831EA400(ctx, base);
	// b 0x83a8fd54
	goto loc_83A8FD54;
loc_83A8FDA8:
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1724
	ctx.r3.s64 = ctx.r11.s64 + 1724;
	// bl 0x83ac8258
	ctx.lr = 0x83A8FDB8;
	sub_83AC8258(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x83a8fe28
	if (cr0.eq) goto loc_83A8FE28;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r10,1836(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1836);
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a8fe28
	if (cr0.eq) goto loc_83A8FE28;
loc_83A8FDE4:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,1788
	ctx.r3.s64 = ctx.r11.s64 + 1788;
	// bl 0x83ac8378
	ctx.lr = 0x83A8FDF4;
	sub_83AC8378(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83a8fe28
	if (cr6.eq) goto loc_83A8FE28;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,1836(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1836);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a8fde4
	if (cr6.lt) goto loc_83A8FDE4;
loc_83A8FE28:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_83A8FE2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8FE34"))) PPC_WEAK_FUNC(sub_83A8FE34);
PPC_FUNC_IMPL(__imp__sub_83A8FE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8FE38"))) PPC_WEAK_FUNC(sub_83A8FE38);
PPC_FUNC_IMPL(__imp__sub_83A8FE38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A8FE40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8fe74
	if (!cr6.eq) goto loc_83A8FE74;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,17104
	ctx.r4.s64 = ctx.r11.s64 + 17104;
loc_83A8FE64:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8FE6C;
	sub_831EA3F0(ctx, base);
loc_83A8FE6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8fee8
	goto loc_83A8FEE8;
loc_83A8FE74:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a8fe8c
	if (!cr6.eq) goto loc_83A8FE8C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,17064
	ctx.r4.s64 = ctx.r11.s64 + 17064;
	// b 0x83a8fe64
	goto loc_83A8FE64;
loc_83A8FE8C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,1788
	ctx.r3.s64 = ctx.r11.s64 + 1788;
	// bl 0x83ac8438
	ctx.lr = 0x83A8FE9C;
	sub_83AC8438(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8feb8
	if (!cr0.eq) goto loc_83A8FEB8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,17016
	ctx.r4.s64 = ctx.r11.s64 + 17016;
	// bl 0x831ea400
	ctx.lr = 0x83A8FEB4;
	sub_831EA400(ctx, base);
	// b 0x83a8fe6c
	goto loc_83A8FE6C;
loc_83A8FEB8:
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r3,r11,1724
	ctx.r3.s64 = ctx.r11.s64 + 1724;
	// bl 0x83ac8258
	ctx.lr = 0x83A8FECC;
	sub_83AC8258(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8fee8
	if (cr0.eq) goto loc_83A8FEE8;
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_83A8FEE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8FEF0"))) PPC_WEAK_FUNC(sub_83A8FEF0);
PPC_FUNC_IMPL(__imp__sub_83A8FEF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A8FEF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8ff2c
	if (!cr6.eq) goto loc_83A8FF2C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,17228
	ctx.r4.s64 = ctx.r11.s64 + 17228;
loc_83A8FF1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8FF24;
	sub_831EA3F0(ctx, base);
loc_83A8FF24:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8ff90
	goto loc_83A8FF90;
loc_83A8FF2C:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a8ff44
	if (!cr6.eq) goto loc_83A8FF44;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,17188
	ctx.r4.s64 = ctx.r11.s64 + 17188;
	// b 0x83a8ff1c
	goto loc_83A8FF1C;
loc_83A8FF44:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,1724
	ctx.r3.s64 = ctx.r11.s64 + 1724;
	// bl 0x83ac8308
	ctx.lr = 0x83A8FF50;
	sub_83AC8308(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83a8ff78
	if (!cr6.eq) goto loc_83A8FF78;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// clrlwi r5,r30,16
	ctx.r5.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r4,r11,17144
	ctx.r4.s64 = ctx.r11.s64 + 17144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A8FF74;
	sub_831EA400(ctx, base);
	// b 0x83a8ff24
	goto loc_83A8FF24;
loc_83A8FF78:
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1724
	ctx.r3.s64 = ctx.r11.s64 + 1724;
	// bl 0x83ac8258
	ctx.lr = 0x83A8FF88;
	sub_83AC8258(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_83A8FF90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8FF98"))) PPC_WEAK_FUNC(sub_83A8FF98);
PPC_FUNC_IMPL(__imp__sub_83A8FF98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A8FFA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8ffd4
	if (!cr6.eq) goto loc_83A8FFD4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,17356
	ctx.r4.s64 = ctx.r11.s64 + 17356;
loc_83A8FFC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8FFCC;
	sub_831EA3F0(ctx, base);
loc_83A8FFCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a90034
	goto loc_83A90034;
loc_83A8FFD4:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a8ffec
	if (!cr6.eq) goto loc_83A8FFEC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,17316
	ctx.r4.s64 = ctx.r11.s64 + 17316;
	// b 0x83a8ffc4
	goto loc_83A8FFC4;
loc_83A8FFEC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,1788
	ctx.r3.s64 = ctx.r11.s64 + 1788;
	// bl 0x83ac8438
	ctx.lr = 0x83A8FFFC;
	sub_83AC8438(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a90018
	if (!cr0.eq) goto loc_83A90018;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,17268
	ctx.r4.s64 = ctx.r11.s64 + 17268;
	// bl 0x831ea400
	ctx.lr = 0x83A90014;
	sub_831EA400(ctx, base);
	// b 0x83a8ffcc
	goto loc_83A8FFCC;
loc_83A90018:
	// lwz r11,27256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r3,r11,1724
	ctx.r3.s64 = ctx.r11.s64 + 1724;
	// bl 0x83ac8258
	ctx.lr = 0x83A9002C;
	sub_83AC8258(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_83A90034:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9003C"))) PPC_WEAK_FUNC(sub_83A9003C);
PPC_FUNC_IMPL(__imp__sub_83A9003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A90040"))) PPC_WEAK_FUNC(sub_83A90040);
PPC_FUNC_IMPL(__imp__sub_83A90040) {
	PPC_FUNC_PROLOGUE();
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a90084
	if (!cr6.eq) goto loc_83A90084;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,17484
	ctx.r4.s64 = ctx.r11.s64 + 17484;
loc_83A90078:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A90080;
	sub_831EA3F0(ctx, base);
	// b 0x83a900dc
	goto loc_83A900DC;
loc_83A90084:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a9009c
	if (!cr6.eq) goto loc_83A9009C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,17444
	ctx.r4.s64 = ctx.r11.s64 + 17444;
	// b 0x83a90078
	goto loc_83A90078;
loc_83A9009C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,1788
	ctx.r3.s64 = ctx.r11.s64 + 1788;
	// bl 0x83ac8438
	ctx.lr = 0x83A900AC;
	sub_83AC8438(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a900c8
	if (!cr0.eq) goto loc_83A900C8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,17396
	ctx.r4.s64 = ctx.r11.s64 + 17396;
	// bl 0x831ea400
	ctx.lr = 0x83A900C4;
	sub_831EA400(ctx, base);
	// b 0x83a900dc
	goto loc_83A900DC;
loc_83A900C8:
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r3,r11,1724
	ctx.r3.s64 = ctx.r11.s64 + 1724;
	// bl 0x83ac8358
	ctx.lr = 0x83A900DC;
	sub_83AC8358(ctx, base);
loc_83A900DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A900F8"))) PPC_WEAK_FUNC(sub_83A900F8);
PPC_FUNC_IMPL(__imp__sub_83A900F8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,2392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2392);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a90158
	if (cr6.eq) goto loc_83A90158;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,632
	ctx.r3.s64 = ctx.r11.s64 + 632;
	// bl 0x83ac79a8
	ctx.lr = 0x83A90138;
	sub_83AC79A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90158
	if (cr0.eq) goto loc_83A90158;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x831ea778
	ctx.lr = 0x83A90158;
	sub_831EA778(ctx, base);
loc_83A90158:
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

__attribute__((alias("__imp__sub_83A90170"))) PPC_WEAK_FUNC(sub_83A90170);
PPC_FUNC_IMPL(__imp__sub_83A90170) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,2392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2392);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a901a8
	if (!cr6.eq) goto loc_83A901A8;
loc_83A901A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a901dc
	goto loc_83A901DC;
loc_83A901A8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,632
	ctx.r3.s64 = ctx.r11.s64 + 632;
	// bl 0x83ac79a8
	ctx.lr = 0x83A901B8;
	sub_83AC79A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a901a0
	if (cr0.eq) goto loc_83A901A0;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x831ea778
	ctx.lr = 0x83A901D8;
	sub_831EA778(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A901DC:
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

__attribute__((alias("__imp__sub_83A901F4"))) PPC_WEAK_FUNC(sub_83A901F4);
PPC_FUNC_IMPL(__imp__sub_83A901F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A901F8"))) PPC_WEAK_FUNC(sub_83A901F8);
PPC_FUNC_IMPL(__imp__sub_83A901F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A90200;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,2392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2392);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a90254
	if (cr6.eq) goto loc_83A90254;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,740
	ctx.r3.s64 = ctx.r11.s64 + 740;
	// bl 0x83ac7b00
	ctx.lr = 0x83A90234;
	sub_83AC7B00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90254
	if (cr0.eq) goto loc_83A90254;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x831ea778
	ctx.lr = 0x83A90254;
	sub_831EA778(ctx, base);
loc_83A90254:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9025C"))) PPC_WEAK_FUNC(sub_83A9025C);
PPC_FUNC_IMPL(__imp__sub_83A9025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A90260"))) PPC_WEAK_FUNC(sub_83A90260);
PPC_FUNC_IMPL(__imp__sub_83A90260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A90268;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x831ea798
	ctx.lr = 0x83A90288;
	sub_831EA798(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,2392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2392);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a902a4
	if (!cr6.eq) goto loc_83A902A4;
loc_83A9029C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a902d8
	goto loc_83A902D8;
loc_83A902A4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,740
	ctx.r3.s64 = ctx.r11.s64 + 740;
	// bl 0x83ac7b00
	ctx.lr = 0x83A902B4;
	sub_83AC7B00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9029c
	if (cr0.eq) goto loc_83A9029C;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x831ea778
	ctx.lr = 0x83A902D4;
	sub_831EA778(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A902D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A902E0"))) PPC_WEAK_FUNC(sub_83A902E0);
PPC_FUNC_IMPL(__imp__sub_83A902E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,2392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2392);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a9033c
	if (cr6.eq) goto loc_83A9033C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,812
	ctx.r3.s64 = ctx.r11.s64 + 812;
	// bl 0x83ac7c00
	ctx.lr = 0x83A9031C;
	sub_83AC7C00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9033c
	if (cr0.eq) goto loc_83A9033C;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// li r4,4
	ctx.r4.s64 = 4;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831ea778
	ctx.lr = 0x83A9033C;
	sub_831EA778(ctx, base);
loc_83A9033C:
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

__attribute__((alias("__imp__sub_83A90350"))) PPC_WEAK_FUNC(sub_83A90350);
PPC_FUNC_IMPL(__imp__sub_83A90350) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,2392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2392);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a90388
	if (!cr6.eq) goto loc_83A90388;
loc_83A90380:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a903bc
	goto loc_83A903BC;
loc_83A90388:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,812
	ctx.r3.s64 = ctx.r11.s64 + 812;
	// bl 0x83ac7c00
	ctx.lr = 0x83A90398;
	sub_83AC7C00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90380
	if (cr0.eq) goto loc_83A90380;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x831ea778
	ctx.lr = 0x83A903B8;
	sub_831EA778(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A903BC:
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

__attribute__((alias("__imp__sub_83A903D4"))) PPC_WEAK_FUNC(sub_83A903D4);
PPC_FUNC_IMPL(__imp__sub_83A903D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A903D8"))) PPC_WEAK_FUNC(sub_83A903D8);
PPC_FUNC_IMPL(__imp__sub_83A903D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r3,413(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 413);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A90400"))) PPC_WEAK_FUNC(sub_83A90400);
PPC_FUNC_IMPL(__imp__sub_83A90400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A90428"))) PPC_WEAK_FUNC(sub_83A90428);
PPC_FUNC_IMPL(__imp__sub_83A90428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a90440
	if (!cr6.eq) goto loc_83A90440;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A90440:
	// lwz r11,2172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2172);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9044C"))) PPC_WEAK_FUNC(sub_83A9044C);
PPC_FUNC_IMPL(__imp__sub_83A9044C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A90450"))) PPC_WEAK_FUNC(sub_83A90450);
PPC_FUNC_IMPL(__imp__sub_83A90450) {
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
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// lwz r3,27256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a904a0
	if (cr6.eq) goto loc_83A904A0;
	// lwz r11,2372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2372);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a90490
	if (!cr6.gt) goto loc_83A90490;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,17524
	ctx.r4.s64 = ctx.r11.s64 + 17524;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9048C;
	sub_831EA3F0(ctx, base);
	// lwz r3,27256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27256);
loc_83A90490:
	// bl 0x83a8cac8
	ctx.lr = 0x83A90494;
	sub_83A8CAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
loc_83A904A0:
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

__attribute__((alias("__imp__sub_83A904B4"))) PPC_WEAK_FUNC(sub_83A904B4);
PPC_FUNC_IMPL(__imp__sub_83A904B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A904B8"))) PPC_WEAK_FUNC(sub_83A904B8);
PPC_FUNC_IMPL(__imp__sub_83A904B8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r11,2404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a904f8
	if (cr6.eq) goto loc_83A904F8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83a8cf30
	ctx.lr = 0x83A904F0;
	sub_83A8CF30(ctx, base);
	// rlwinm r11,r3,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FFFE;
	// sthx r30,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u16);
loc_83A904F8:
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

__attribute__((alias("__imp__sub_83A90510"))) PPC_WEAK_FUNC(sub_83A90510);
PPC_FUNC_IMPL(__imp__sub_83A90510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A90518;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a90d3c
	if (cr6.eq) goto loc_83A90D3C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83a90d3c
	if (cr6.eq) goto loc_83A90D3C;
	// bl 0x83ac6d20
	ctx.lr = 0x83A90534;
	sub_83AC6D20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d58
	if (cr0.eq) goto loc_83A90D58;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// ori r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 24576;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x83a90564
	if (!cr6.lt) goto loc_83A90564;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,17772
	ctx.r4.s64 = ctx.r11.s64 + 17772;
	// bl 0x831ea3f0
	ctx.lr = 0x83A90560;
	sub_831EA3F0(ctx, base);
	// b 0x83a90d50
	goto loc_83A90D50;
loc_83A90564:
	// bl 0x83a81a50
	ctx.lr = 0x83A90568;
	sub_83A81A50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90598
	if (cr0.eq) goto loc_83A90598;
	// lbz r30,412(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 412);
	// bl 0x83a81ee8
	ctx.lr = 0x83A90578;
	sub_83A81EE8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// ble cr6,0x83a90598
	if (!cr6.gt) goto loc_83A90598;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,17656
	ctx.r4.s64 = ctx.r11.s64 + 17656;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A90594;
	sub_831EA400(ctx, base);
	// b 0x83a90d50
	goto loc_83A90D50;
loc_83A90598:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A905A8;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a905c8
	if (!cr6.eq) goto loc_83A905C8;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac7d90
	ctx.lr = 0x83A905C0;
	sub_83AC7D90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
loc_83A905C8:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A905D8;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a905f8
	if (!cr6.eq) goto loc_83A905F8;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac6700
	ctx.lr = 0x83A905F0;
	sub_83AC6700(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
loc_83A905F8:
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,2400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2400, ctx.r27.u32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stb r27,2368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2368, ctx.r27.u8);
	// beq cr6,0x83a90618
	if (cr6.eq) goto loc_83A90618;
	// cmpwi cr6,r5,6
	cr6.compare<int32_t>(ctx.r5.s32, 6, xer);
	// bne cr6,0x83a90620
	if (!cr6.eq) goto loc_83A90620;
loc_83A90618:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2368, ctx.r11.u8);
loc_83A90620:
	// lbz r11,2368(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2368);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a906f0
	if (cr0.eq) goto loc_83A906F0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A9063C;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a9065c
	if (!cr6.eq) goto loc_83A9065C;
	// addi r3,r31,540
	ctx.r3.s64 = ctx.r31.s64 + 540;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac71d0
	ctx.lr = 0x83A90654;
	sub_83AC71D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
loc_83A9065C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A9066C;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a9068c
	if (!cr6.eq) goto loc_83A9068C;
	// addi r3,r31,632
	ctx.r3.s64 = ctx.r31.s64 + 632;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac76b8
	ctx.lr = 0x83A90684;
	sub_83AC76B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
loc_83A9068C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A9069C;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a906bc
	if (!cr6.eq) goto loc_83A906BC;
	// addi r3,r31,740
	ctx.r3.s64 = ctx.r31.s64 + 740;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac6620
	ctx.lr = 0x83A906B4;
	sub_83AC6620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
loc_83A906BC:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A906CC;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90700
	if (!cr6.eq) goto loc_83A90700;
	// addi r3,r31,812
	ctx.r3.s64 = ctx.r31.s64 + 812;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac7498
	ctx.lr = 0x83A906E4;
	sub_83AC7498(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a90700
	if (!cr0.eq) goto loc_83A90700;
	// b 0x83a90d50
	goto loc_83A90D50;
loc_83A906F0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,17584
	ctx.r4.s64 = ctx.r11.s64 + 17584;
	// bl 0x831ea400
	ctx.lr = 0x83A90700;
	sub_831EA400(ctx, base);
loc_83A90700:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90710;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90730
	if (!cr6.eq) goto loc_83A90730;
	// addi r3,r31,892
	ctx.r3.s64 = ctx.r31.s64 + 892;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac7d90
	ctx.lr = 0x83A90728;
	sub_83AC7D90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
loc_83A90730:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90740;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90760
	if (!cr6.eq) goto loc_83A90760;
	// addi r3,r31,956
	ctx.r3.s64 = ctx.r31.s64 + 956;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac76b8
	ctx.lr = 0x83A90758;
	sub_83AC76B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
loc_83A90760:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90770;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90790
	if (!cr6.eq) goto loc_83A90790;
	// addi r3,r31,1064
	ctx.r3.s64 = ctx.r31.s64 + 1064;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac62f8
	ctx.lr = 0x83A90788;
	sub_83AC62F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
loc_83A90790:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A907A0;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a907c0
	if (!cr6.eq) goto loc_83A907C0;
	// addi r3,r31,1148
	ctx.r3.s64 = ctx.r31.s64 + 1148;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac7d90
	ctx.lr = 0x83A907B8;
	sub_83AC7D90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
loc_83A907C0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A907D0;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a907f0
	if (!cr6.eq) goto loc_83A907F0;
	// addi r3,r31,1212
	ctx.r3.s64 = ctx.r31.s64 + 1212;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac6620
	ctx.lr = 0x83A907E8;
	sub_83AC6620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
loc_83A907F0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90800;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90820
	if (!cr6.eq) goto loc_83A90820;
	// addi r3,r31,1284
	ctx.r3.s64 = ctx.r31.s64 + 1284;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac7de8
	ctx.lr = 0x83A90818;
	sub_83AC7DE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
loc_83A90820:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90830;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90850
	if (!cr6.eq) goto loc_83A90850;
	// addi r3,r31,1372
	ctx.r3.s64 = ctx.r31.s64 + 1372;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac7d90
	ctx.lr = 0x83A90848;
	sub_83AC7D90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
loc_83A90850:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r10,6
	ctx.r10.s64 = 393216;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a908c4
	if (cr6.lt) goto loc_83A908C4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90870;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90890
	if (!cr6.eq) goto loc_83A90890;
	// addi r3,r31,1436
	ctx.r3.s64 = ctx.r31.s64 + 1436;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac6700
	ctx.lr = 0x83A90888;
	sub_83AC6700(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
loc_83A90890:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A908A0;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a908cc
	if (!cr6.eq) goto loc_83A908CC;
	// addi r3,r31,1496
	ctx.r3.s64 = ctx.r31.s64 + 1496;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac6800
	ctx.lr = 0x83A908B8;
	sub_83AC6800(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a908cc
	if (!cr0.eq) goto loc_83A908CC;
	// b 0x83a90d50
	goto loc_83A90D50;
loc_83A908C4:
	// stw r27,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r27.u32);
	// stw r27,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r27.u32);
loc_83A908CC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a909c4
	if (cr6.lt) goto loc_83A909C4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A908EC;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a909c8
	if (!cr6.eq) goto loc_83A909C8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lhz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rotlwi. r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,2376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2376, ctx.r11.u32);
	// ble 0x83a90950
	if (!cr0.gt) goto loc_83A90950;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83A90918:
	// lwz r9,2376(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2376);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r27,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r27.u32);
	// lwz r9,2376(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2376);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r27,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r27.u32);
	// lwz r9,2376(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2376);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r27,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r27.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lhz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a90918
	if (cr6.lt) goto loc_83A90918;
loc_83A90950:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,2376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2376);
	// lhz r8,82(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// stw r27,2380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2380, ctx.r27.u32);
	// stw r27,2384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2384, ctx.r27.u32);
	// stw r27,2388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2388, ctx.r27.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x83a909c8
	if (cr0.eq) goto loc_83A909C8;
loc_83A9097C:
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r10,2380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a90998
	if (!cr6.eq) goto loc_83A90998;
	// stw r11,2384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2384, ctx.r11.u32);
	// b 0x83a9099c
	goto loc_83A9099C;
loc_83A90998:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83A9099C:
	// lwz r10,2388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2388);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,2380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2380, ctx.r11.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,2388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2388, ctx.r10.u32);
	// lhz r10,82(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a9097c
	if (cr6.lt) goto loc_83A9097C;
	// b 0x83a909c8
	goto loc_83A909C8;
loc_83A909C4:
	// stw r27,2376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2376, ctx.r27.u32);
loc_83A909C8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a90a0c
	if (cr6.lt) goto loc_83A90A0C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A909E8;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90a10
	if (!cr6.eq) goto loc_83A90A10;
	// addi r3,r31,1616
	ctx.r3.s64 = ctx.r31.s64 + 1616;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac76b8
	ctx.lr = 0x83A90A00;
	sub_83AC76B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a90a10
	if (!cr0.eq) goto loc_83A90A10;
	// b 0x83a90d50
	goto loc_83A90D50;
loc_83A90A0C:
	// stw r27,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r27.u32);
loc_83A90A10:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r10,132
	ctx.r10.s64 = 8650752;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a90a84
	if (cr6.lt) goto loc_83A90A84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90A30;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90a50
	if (!cr6.eq) goto loc_83A90A50;
	// addi r3,r31,1724
	ctx.r3.s64 = ctx.r31.s64 + 1724;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac8200
	ctx.lr = 0x83A90A48;
	sub_83AC8200(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
loc_83A90A50:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90A60;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90a8c
	if (!cr6.eq) goto loc_83A90A8C;
	// addi r3,r31,1788
	ctx.r3.s64 = ctx.r31.s64 + 1788;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac7d90
	ctx.lr = 0x83A90A78;
	sub_83AC7D90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a90a8c
	if (!cr0.eq) goto loc_83A90A8C;
	// b 0x83a90d50
	goto loc_83A90D50;
loc_83A90A84:
	// stw r27,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r27.u32);
	// stw r27,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r27.u32);
loc_83A90A8C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r10,133
	ctx.r10.s64 = 8716288;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a90b08
	if (cr6.lt) goto loc_83A90B08;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90AAC;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90ad4
	if (!cr6.eq) goto loc_83A90AD4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r9,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r9,2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2392, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,2396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2396, ctx.r11.u32);
loc_83A90AD4:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90AE4;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90b14
	if (!cr6.eq) goto loc_83A90B14;
	// addi r3,r31,1852
	ctx.r3.s64 = ctx.r31.s64 + 1852;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac7498
	ctx.lr = 0x83A90AFC;
	sub_83AC7498(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a90b14
	if (!cr0.eq) goto loc_83A90B14;
	// b 0x83a90d50
	goto loc_83A90D50;
loc_83A90B08:
	// stw r27,2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2392, ctx.r27.u32);
	// stw r27,2396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2396, ctx.r27.u32);
	// stw r27,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r27.u32);
loc_83A90B14:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a90b88
	if (cr6.lt) goto loc_83A90B88;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90B34;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90b54
	if (!cr6.eq) goto loc_83A90B54;
	// addi r3,r31,1932
	ctx.r3.s64 = ctx.r31.s64 + 1932;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac84a0
	ctx.lr = 0x83A90B4C;
	sub_83AC84A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
loc_83A90B54:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90B64;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90b90
	if (!cr6.eq) goto loc_83A90B90;
	// addi r3,r31,2000
	ctx.r3.s64 = ctx.r31.s64 + 2000;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac6700
	ctx.lr = 0x83A90B7C;
	sub_83AC6700(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a90b90
	if (!cr0.eq) goto loc_83A90B90;
	// b 0x83a90d50
	goto loc_83A90D50;
loc_83A90B88:
	// stw r27,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r27.u32);
	// stw r27,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r27.u32);
loc_83A90B90:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r10,262
	ctx.r10.s64 = 17170432;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a90bd4
	if (cr6.lt) goto loc_83A90BD4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90BB0;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90bd8
	if (!cr6.eq) goto loc_83A90BD8;
	// addi r3,r31,2060
	ctx.r3.s64 = ctx.r31.s64 + 2060;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac7d90
	ctx.lr = 0x83A90BC8;
	sub_83AC7D90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a90bd8
	if (!cr0.eq) goto loc_83A90BD8;
	// b 0x83a90d50
	goto loc_83A90D50;
loc_83A90BD4:
	// stw r27,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r27.u32);
loc_83A90BD8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a90c1c
	if (!cr6.gt) goto loc_83A90C1C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90BF8;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90c20
	if (!cr6.eq) goto loc_83A90C20;
	// addi r3,r31,2124
	ctx.r3.s64 = ctx.r31.s64 + 2124;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac6700
	ctx.lr = 0x83A90C10;
	sub_83AC6700(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a90c20
	if (!cr0.eq) goto loc_83A90C20;
	// b 0x83a90d50
	goto loc_83A90D50;
loc_83A90C1C:
	// stw r27,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r27.u32);
loc_83A90C20:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r30,273
	ctx.r30.s64 = 17891328;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// blt cr6,0x83a90c5c
	if (cr6.lt) goto loc_83A90C5C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90C40;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90c60
	if (!cr6.eq) goto loc_83A90C60;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,2404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2404, ctx.r11.u32);
	// b 0x83a90c60
	goto loc_83A90C60;
loc_83A90C5C:
	// stw r27,2404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2404, ctx.r27.u32);
loc_83A90C60:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// blt cr6,0x83a90ce8
	if (cr6.lt) goto loc_83A90CE8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90C7C;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90cec
	if (!cr6.eq) goto loc_83A90CEC;
	// addi r28,r31,2184
	ctx.r28.s64 = ctx.r31.s64 + 2184;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83ac6700
	ctx.lr = 0x83A90C98;
	sub_83AC6700(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a90d50
	if (cr0.eq) goto loc_83A90D50;
	// lwz r11,2232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2232);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a90cec
	if (!cr6.gt) goto loc_83A90CEC;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r11,r11,-14716
	ctx.r11.s64 = ctx.r11.s64 + -14716;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_83A90CBC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83ac8608
	ctx.lr = 0x83A90CCC;
	sub_83AC8608(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// sthu r11,2(r29)
	ea = 2 + ctx.r29.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r29.u32 = ea;
	// lwz r11,2232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2232);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a90cbc
	if (cr6.lt) goto loc_83A90CBC;
	// b 0x83a90cec
	goto loc_83A90CEC;
loc_83A90CE8:
	// stw r27,2232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2232, ctx.r27.u32);
loc_83A90CEC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r10,277
	ctx.r10.s64 = 18153472;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a90d30
	if (cr6.lt) goto loc_83A90D30;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac6fb0
	ctx.lr = 0x83A90D0C;
	sub_83AC6FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a90d34
	if (!cr6.eq) goto loc_83A90D34;
	// addi r3,r31,2244
	ctx.r3.s64 = ctx.r31.s64 + 2244;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83ac8648
	ctx.lr = 0x83A90D24;
	sub_83AC8648(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a90d34
	if (!cr0.eq) goto loc_83A90D34;
	// b 0x83a90d50
	goto loc_83A90D50;
loc_83A90D30:
	// stw r27,2292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2292, ctx.r27.u32);
loc_83A90D34:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a90d5c
	goto loc_83A90D5C;
loc_83A90D3C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,17572
	ctx.r4.s64 = ctx.r11.s64 + 17572;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A90D50;
	sub_831EA418(ctx, base);
loc_83A90D50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a8cac8
	ctx.lr = 0x83A90D58;
	sub_83A8CAC8(ctx, base);
loc_83A90D58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A90D5C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A90D64"))) PPC_WEAK_FUNC(sub_83A90D64);
PPC_FUNC_IMPL(__imp__sub_83A90D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A90D68"))) PPC_WEAK_FUNC(sub_83A90D68);
PPC_FUNC_IMPL(__imp__sub_83A90D68) {
	PPC_FUNC_PROLOGUE();
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
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a90d98
	if (!cr6.eq) goto loc_83A90D98;
loc_83A90D90:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a90e2c
	goto loc_83A90E2C;
loc_83A90D98:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a90d90
	if (cr6.eq) goto loc_83A90D90;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x83a8f7b8
	ctx.lr = 0x83A90DC8;
	sub_83A8F7B8(ctx, base);
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r10,1332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1332);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lbz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 412);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r10,940(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 940);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r11,1004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x83a8fae0
	ctx.lr = 0x83A90DF8;
	sub_83A8FAE0(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// bl 0x83a8f818
	ctx.lr = 0x83A90E00;
	sub_83A8F818(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// bl 0x83a8f8d0
	ctx.lr = 0x83A90E08;
	sub_83A8F8D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x83a8cfe0
	ctx.lr = 0x83A90E18;
	sub_83A8CFE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a90e28
	if (cr0.eq) goto loc_83A90E28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83A90E28:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A90E2C:
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

__attribute__((alias("__imp__sub_83A90E44"))) PPC_WEAK_FUNC(sub_83A90E44);
PPC_FUNC_IMPL(__imp__sub_83A90E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A90E48"))) PPC_WEAK_FUNC(sub_83A90E48);
PPC_FUNC_IMPL(__imp__sub_83A90E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A90E50;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// addi r26,r4,16
	ctx.r26.s64 = ctx.r4.s64 + 16;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r10,1332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1332);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a90e90
	if (cr6.lt) goto loc_83A90E90;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a90fb4
	goto loc_83A90FB4;
loc_83A90E90:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,1284
	ctx.r3.s64 = ctx.r11.s64 + 1284;
	// bl 0x83ac7e40
	ctx.lr = 0x83A90EA0;
	sub_83AC7E40(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22544
	ctx.r11.s64 = ctx.r11.s64 + -22544;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// sth r29,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r29.u16);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// lwz r10,1332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1332);
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a90f0c
	if (cr0.eq) goto loc_83A90F0C;
loc_83A90ED0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,1372
	ctx.r3.s64 = ctx.r11.s64 + 1372;
	// bl 0x83ac4c30
	ctx.lr = 0x83A90EE0;
	sub_83AC4C30(ctx, base);
	// lhz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// beq cr6,0x83a90f0c
	if (cr6.eq) goto loc_83A90F0C;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,1332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1332);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a90ed0
	if (cr6.lt) goto loc_83A90ED0;
loc_83A90F0C:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// sth r25,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r25.u16);
	// sth r29,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r29.u16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// beq cr6,0x83a90f88
	if (cr6.eq) goto loc_83A90F88;
	// bl 0x83a82480
	ctx.lr = 0x83A90F28;
	sub_83A82480(ctx, base);
	// lwz r11,27256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r3,r11,1436
	ctx.r3.s64 = ctx.r11.s64 + 1436;
	// bl 0x83ac6090
	ctx.lr = 0x83A90F3C;
	sub_83AC6090(ctx, base);
	// bl 0x83ab59c0
	ctx.lr = 0x83A90F40;
	sub_83AB59C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83a90f84
	if (cr0.eq) goto loc_83A90F84;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83ab3320
	ctx.lr = 0x83A90F6C;
	sub_83AB3320(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83aaf2a8
	ctx.lr = 0x83A90F7C;
	sub_83AAF2A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ab5a70
	ctx.lr = 0x83A90F84;
	sub_83AB5A70(ctx, base);
loc_83A90F84:
	// bl 0x83a824c0
	ctx.lr = 0x83A90F88;
	sub_83A824C0(ctx, base);
loc_83A90F88:
	// lhz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// stw r7,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r7.u32);
	// beq 0x83a90fb0
	if (cr0.eq) goto loc_83A90FB0;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
loc_83A90FB0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A90FB4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A90FBC"))) PPC_WEAK_FUNC(sub_83A90FBC);
PPC_FUNC_IMPL(__imp__sub_83A90FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A90FC0"))) PPC_WEAK_FUNC(sub_83A90FC0);
PPC_FUNC_IMPL(__imp__sub_83A90FC0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a90ff4
	if (!cr6.eq) goto loc_83A90FF4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,17832
	ctx.r4.s64 = ctx.r11.s64 + 17832;
loc_83A90FE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A90FEC;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a91020
	goto loc_83A91020;
loc_83A90FF4:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a91014
	if (!cr6.eq) goto loc_83A91014;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,17820
	ctx.r4.s64 = ctx.r11.s64 + 17820;
	// b 0x83a90fe4
	goto loc_83A90FE4;
loc_83A91014:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a8d478
	ctx.lr = 0x83A91020;
	sub_83A8D478(ctx, base);
loc_83A91020:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A91030"))) PPC_WEAK_FUNC(sub_83A91030);
PPC_FUNC_IMPL(__imp__sub_83A91030) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a91064
	if (!cr6.eq) goto loc_83A91064;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,17856
	ctx.r4.s64 = ctx.r11.s64 + 17856;
loc_83A91054:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9105C;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a91090
	goto loc_83A91090;
loc_83A91064:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a91084
	if (!cr6.eq) goto loc_83A91084;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,17844
	ctx.r4.s64 = ctx.r11.s64 + 17844;
	// b 0x83a91054
	goto loc_83A91054;
loc_83A91084:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a8d748
	ctx.lr = 0x83A91090;
	sub_83A8D748(ctx, base);
loc_83A91090:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A910A0"))) PPC_WEAK_FUNC(sub_83A910A0);
PPC_FUNC_IMPL(__imp__sub_83A910A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A910A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831ea798
	ctx.lr = 0x83A910CC;
	sub_831EA798(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a910f8
	if (!cr6.eq) goto loc_83A910F8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,17868
	ctx.r4.s64 = ctx.r11.s64 + 17868;
	// bl 0x831ea3f0
	ctx.lr = 0x83A910F0;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a91114
	goto loc_83A91114;
loc_83A910F8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a8d998
	ctx.lr = 0x83A9110C;
	sub_83A8D998(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_83A91114:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9111C"))) PPC_WEAK_FUNC(sub_83A9111C);
PPC_FUNC_IMPL(__imp__sub_83A9111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A91120"))) PPC_WEAK_FUNC(sub_83A91120);
PPC_FUNC_IMPL(__imp__sub_83A91120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A91128;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a91170
	if (!cr6.eq) goto loc_83A91170;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,17908
	ctx.r4.s64 = ctx.r11.s64 + 17908;
	// bl 0x831ea3f0
	ctx.lr = 0x83A91164;
	sub_831EA3F0(ctx, base);
loc_83A91164:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A91168:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A91170:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,740
	ctx.r3.s64 = ctx.r11.s64 + 740;
	// bl 0x83ac7a08
	ctx.lr = 0x83A91180;
	sub_83AC7A08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a91164
	if (cr0.eq) goto loc_83A91164;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a8d998
	ctx.lr = 0x83A9119C;
	sub_83A8D998(ctx, base);
	// b 0x83a91168
	goto loc_83A91168;
}

__attribute__((alias("__imp__sub_83A911A0"))) PPC_WEAK_FUNC(sub_83A911A0);
PPC_FUNC_IMPL(__imp__sub_83A911A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A911A8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce770
	ctx.lr = 0x83A911B0;
	__savefpr_26(ctx, base);
	// stwu r1,-1920(r1)
	ea = -1920 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31739
	ctx.r27.s64 = -2080047104;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27256(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27256);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// addi r3,r11,740
	ctx.r3.s64 = ctx.r11.s64 + 740;
	// bl 0x83ac7a08
	ctx.lr = 0x83A911E0;
	sub_83AC7A08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a91c68
	if (cr0.eq) goto loc_83A91C68;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x83a91c68
	if (!cr6.lt) goto loc_83A91C68;
	// lbz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bgt cr6,0x83a91c68
	if (cr6.gt) goto loc_83A91C68;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,14016
	ctx.r12.s64 = ctx.r12.s64 + 14016;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31831
	ctx.r12.s64 = -2086076416;
	// addi r12,r12,4652
	ctx.r12.s64 = ctx.r12.s64 + 4652;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83A9122C;
	case 1:
		goto loc_83A912B0;
	case 2:
		goto loc_83A91324;
	case 3:
		goto loc_83A91394;
	case 4:
		goto loc_83A913E4;
	case 5:
		goto loc_83A914F0;
	case 6:
		goto loc_83A9154C;
	case 7:
		goto loc_83A915A8;
	case 8:
		goto loc_83A91660;
	case 9:
		goto loc_83A91720;
	case 10:
		goto loc_83A917B8;
	case 11:
		goto loc_83A91C68;
	case 12:
		goto loc_83A9182C;
	case 13:
		goto loc_83A9187C;
	case 14:
		goto loc_83A91A30;
	case 15:
		goto loc_83A91AE8;
	case 16:
		goto loc_83A91B24;
	case 17:
		goto loc_83A91B98;
	default:
		return;
	}
loc_83A9122C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A91240;
	sub_83A90260(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A91250;
	sub_83A910A0(ctx, base);
	// lfs f0,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// li r3,32
	ctx.r3.s64 = 32;
	// lfs f13,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f6,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,20(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmadds f0,f10,f31,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmadds f0,f9,f31,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmadds f0,f8,f31,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmadds f0,f7,f31,f11
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// b 0x83a91c6c
	goto loc_83A91C6C;
loc_83A912B0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A912C4;
	sub_83A90260(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A912D4;
	sub_83A910A0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-23848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x831d1ca8
	ctx.lr = 0x83A912E4;
	sub_831D1CA8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// li r3,12
	ctx.r3.s64 = 12;
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,20048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f13,f10,f31,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f0,f12,f9,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f0.f64));
loc_83A9131C:
	// stfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x83a91c6c
	goto loc_83A91C6C;
loc_83A91324:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A91338;
	sub_83A90260(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A91348;
	sub_83A910A0(ctx, base);
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// fmadds f0,f11,f31,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f0,f10,f31,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f0,f9,f31,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f12.f64));
loc_83A91388:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x83a91c6c
	goto loc_83A91C6C;
loc_83A91394:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A913A8;
	sub_83A90260(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A913B8;
	sub_83A910A0(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// li r3,8
	ctx.r3.s64 = 8;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmadds f0,f12,f31,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f0,f11,f31,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f13.f64));
	// b 0x83a9131c
	goto loc_83A9131C;
loc_83A913E4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A913F8;
	sub_83A90260(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A91408;
	sub_83A910A0(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,27256(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27256);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lis r10,275
	ctx.r10.s64 = 18022400;
	// lfs f11,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f5,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lfs f10,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f4,f4,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fmadds f0,f8,f31,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f0,f7,f31,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f0,f6,f31,f12
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f0,f5,f31,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmadds f0,f4,f31,f10
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmadds f0,f3,f31,f9
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f9.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a914d0
	if (cr6.lt) goto loc_83A914D0;
	// lfs f0,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// li r3,40
	ctx.r3.s64 = 40;
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// fmadds f0,f12,f31,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmadds f0,f11,f31,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f13.f64));
	// b 0x83a914e8
	goto loc_83A914E8;
loc_83A914D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_83A914E8:
	// stfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// b 0x83a91c6c
	goto loc_83A91C6C;
loc_83A914F0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A91504;
	sub_83A90260(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A91514;
	sub_83A910A0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-23848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x831d1ca8
	ctx.lr = 0x83A91524;
	sub_831D1CA8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// li r3,8
	ctx.r3.s64 = 8;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,20048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f0.f64));
	// b 0x83a9131c
	goto loc_83A9131C;
loc_83A9154C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A91560;
	sub_83A90260(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A91570;
	sub_83A910A0(ctx, base);
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// li r3,20
	ctx.r3.s64 = 20;
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// fmadds f0,f12,f31,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f0,f11,f31,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x83a91c6c
	goto loc_83A91C6C;
loc_83A915A8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A915BC;
	sub_83A90260(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A915CC;
	sub_83A910A0(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// subf r8,r31,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r31.s64;
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r31.s64;
	// subf r6,r31,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r31.s64;
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83A915FC:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// lfsx f12,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfsx f13,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f11,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfsx f10,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// fsubs f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// fmadds f0,f12,f31,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f0,f11,f31,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f0,f9,f31,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x83a915fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A915FC;
	// li r3,48
	ctx.r3.s64 = 48;
	// b 0x83a91c6c
	goto loc_83A91C6C;
loc_83A91660:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A91674;
	sub_83A90260(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A91684;
	sub_83A910A0(ctx, base);
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// li r3,36
	ctx.r3.s64 = 36;
	// fsubs f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// lfs f10,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f9,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f3,f3,f10
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// lfs f2,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lfs f8,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f7,f31,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fsubs f1,f1,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// fmadds f0,f6,f31,f13
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmadds f0,f5,f31,f12
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmadds f0,f4,f31,f11
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmadds f0,f3,f31,f10
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f0,f2,f31,f9
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f9.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f30,4(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f0,f1,f31,f8
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f8.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// b 0x83a91c6c
	goto loc_83A91C6C;
loc_83A91720:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A91734;
	sub_83A90260(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A91744;
	sub_83A910A0(ctx, base);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r3,24
	ctx.r3.s64 = 24;
loc_83A91750:
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f5,f5,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// fmadds f0,f9,f31,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f0,f8,f31,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f0,f7,f31,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmadds f0,f6,f31,f11
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmadds f0,f5,f31,f10
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x83a91c6c
	goto loc_83A91C6C;
loc_83A917B8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A917CC;
	sub_83A90260(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A917DC;
	sub_83A910A0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f9,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f8,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f7,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmadds f0,f10,f31,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f0,f9,f31,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f0,f8,f31,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f0,f7,f31,f11
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f11.f64));
	// b 0x83a91388
	goto loc_83A91388;
loc_83A9182C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A91840;
	sub_83A90260(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A91850;
	sub_83A910A0(ctx, base);
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x83a91c6c
	goto loc_83A91C6C;
loc_83A9187C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A91890;
	sub_83A90260(ctx, base);
	// li r5,68
	ctx.r5.s64 = 68;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A918A0;
	sub_83A910A0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f9,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f0,-23848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f31,f0
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f7,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f6,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// lfs f5,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f5,f5,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmadds f0,f9,f31,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f0,f8,f31,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f0,f7,f31,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f0,f6,f31,f11
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmadds f0,f5,f31,f10
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x831d1ca8
	ctx.lr = 0x83A91918;
	sub_831D1CA8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f30,20048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmadds f13,f10,f31,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmadds f0,f12,f11,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x831d1ca8
	ctx.lr = 0x83A91958;
	sub_831D1CA8(ctx, base);
	// lfs f11,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// fsubs f3,f11,f13
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f12,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f6.f64 = double(temp.f32);
	// li r3,68
	ctx.r3.s64 = 68;
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f29,f6,f11
	ctx.f29.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// lfs f8,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f2,f8,f12
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f27,f6,f9
	ctx.f27.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// lfs f1,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// lfs f28,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// lfs f6,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f28,f28,f8
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f8.f64));
	// fsubs f26,f6,f7
	ctx.f26.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmadds f13,f3,f31,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f13.f64));
	// lfs f6,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f30,f5,f30
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fmadds f12,f2,f31,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f12.f64));
	// lfs f5,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f3,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fsubs f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmadds f13,f29,f31,f11
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fmadds f12,f1,f31,f10
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fmadds f13,f27,f31,f9
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 + ctx.f9.f64));
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fmadds f12,f28,f31,f8
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f8.f64));
	// fmadds f13,f26,f31,f7
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f31.f64 + ctx.f7.f64));
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// fmadds f0,f30,f4,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f4.f64 + ctx.f0.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmadds f0,f3,f31,f6
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f6.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// fmadds f0,f2,f31,f5
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f5.f64));
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// b 0x83a91c6c
	goto loc_83A91C6C;
loc_83A91A30:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A91A44;
	sub_83A90260(ctx, base);
	// li r5,68
	ctx.r5.s64 = 68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A91A54;
	sub_83A910A0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,68
	ctx.r10.s64 = ctx.r1.s64 + 68;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r31.s64;
	// subf r6,r31,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r31.s64;
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r31.s64;
loc_83A91A94:
	// lfsx f13,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfsx f10,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f11,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfsx f0,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fmadds f0,f9,f31,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f0,f10,f31,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f0,f8,f31,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x83a91a94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A91A94;
	// li r3,68
	ctx.r3.s64 = 68;
	// b 0x83a91c6c
	goto loc_83A91C6C;
loc_83A91AE8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A91AFC;
	sub_83A90260(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A91B0C;
	sub_83A910A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x83a91750
	goto loc_83A91750;
loc_83A91B24:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A91B38;
	sub_83A90260(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A91B48;
	sub_83A910A0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
loc_83A91B4C:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A91B58:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r1,784
	ctx.r8.s64 = ctx.r1.s64 + 784;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,1040
	ctx.r7.s64 = ctx.r1.s64 + 1040;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfsx f0,r10,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x83a91b58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A91B58;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r9,64
	cr6.compare<int32_t>(ctx.r9.s32, 64, xer);
	// blt cr6,0x83a91b4c
	if (cr6.lt) goto loc_83A91B4C;
	// li r3,256
	ctx.r3.s64 = 256;
	// b 0x83a91c6c
	goto loc_83A91C6C;
loc_83A91B98:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,516
	ctx.r5.s64 = 516;
	// addi r4,r1,1296
	ctx.r4.s64 = ctx.r1.s64 + 1296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90260
	ctx.lr = 0x83A91BAC;
	sub_83A90260(ctx, base);
	// li r5,516
	ctx.r5.s64 = 516;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A91BBC;
	sub_83A910A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a91c60
	if (!cr6.gt) goto loc_83A91C60;
	// addi r11,r1,260
	ctx.r11.s64 = ctx.r1.s64 + 260;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r6,r1,1296
	ctx.r6.s64 = ctx.r1.s64 + 1296;
	// addi r5,r1,260
	ctx.r5.s64 = ctx.r1.s64 + 260;
	// addi r4,r1,1300
	ctx.r4.s64 = ctx.r1.s64 + 1300;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// addi r30,r1,1304
	ctx.r30.s64 = ctx.r1.s64 + 1304;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r6,r31,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r31.s64;
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r31.s64;
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
loc_83A91C08:
	// lfsx f0,r6,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwzu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lfsx f11,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfsx f13,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfsx f10,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f12,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfsx f9,r3,r11
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmadds f0,f11,f31,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f0,f10,f31,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f0,f9,f31,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a91c08
	if (cr6.lt) goto loc_83A91C08;
loc_83A91C60:
	// li r3,516
	ctx.r3.s64 = 516;
	// b 0x83a91c6c
	goto loc_83A91C6C;
loc_83A91C68:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A91C6C:
	// addi r1,r1,1920
	ctx.r1.s64 = ctx.r1.s64 + 1920;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7bc
	ctx.lr = 0x83A91C78;
	__restfpr_26(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A91C7C"))) PPC_WEAK_FUNC(sub_83A91C7C);
PPC_FUNC_IMPL(__imp__sub_83A91C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A91C80"))) PPC_WEAK_FUNC(sub_83A91C80);
PPC_FUNC_IMPL(__imp__sub_83A91C80) {
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
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,27248
	ctx.r31.s64 = ctx.r10.s64 + 27248;
	// stw r11,27248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27248, ctx.r11.u32);
	// bl 0x83a90450
	ctx.lr = 0x83A91CA4;
	sub_83A90450(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A91CC0"))) PPC_WEAK_FUNC(sub_83A91CC0);
PPC_FUNC_IMPL(__imp__sub_83A91CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-2512(r1)
	ea = -2512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a91cf4
	if (!cr6.eq) goto loc_83A91CF4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,18088
	ctx.r4.s64 = ctx.r11.s64 + 18088;
loc_83A91CE4:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A91CF0;
	sub_831EA418(ctx, base);
	// b 0x83a91d3c
	goto loc_83A91D3C;
loc_83A91CF4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a91d08
	if (!cr6.eq) goto loc_83A91D08;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,18076
	ctx.r4.s64 = ctx.r11.s64 + 18076;
	// b 0x83a91ce4
	goto loc_83A91CE4;
loc_83A91D08:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a90510
	ctx.lr = 0x83A91D18;
	sub_83A90510(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a91d2c
	if (cr0.eq) goto loc_83A91D2C;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x83a91d40
	goto loc_83A91D40;
loc_83A91D2C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,17952
	ctx.r4.s64 = ctx.r11.s64 + 17952;
	// bl 0x831ea3f0
	ctx.lr = 0x83A91D3C;
	sub_831EA3F0(ctx, base);
loc_83A91D3C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A91D40:
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A91D54"))) PPC_WEAK_FUNC(sub_83A91D54);
PPC_FUNC_IMPL(__imp__sub_83A91D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A91D58"))) PPC_WEAK_FUNC(sub_83A91D58);
PPC_FUNC_IMPL(__imp__sub_83A91D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,27256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a91dbc
	if (cr6.eq) goto loc_83A91DBC;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a91d98
	if (cr6.eq) goto loc_83A91D98;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,18228
	ctx.r4.s64 = ctx.r11.s64 + 18228;
	// bl 0x831ea3f0
	ctx.lr = 0x83A91D94;
	sub_831EA3F0(ctx, base);
	// b 0x83a91dbc
	goto loc_83A91DBC;
loc_83A91D98:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a90510
	ctx.lr = 0x83A91DA4;
	sub_83A90510(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a91dbc
	if (!cr0.eq) goto loc_83A91DBC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,18104
	ctx.r4.s64 = ctx.r11.s64 + 18104;
	// bl 0x831ea3f0
	ctx.lr = 0x83A91DB8;
	sub_831EA3F0(ctx, base);
	// bl 0x83a90450
	ctx.lr = 0x83A91DBC;
	sub_83A90450(ctx, base);
loc_83A91DBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A91DCC"))) PPC_WEAK_FUNC(sub_83A91DCC);
PPC_FUNC_IMPL(__imp__sub_83A91DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A91DD0"))) PPC_WEAK_FUNC(sub_83A91DD0);
PPC_FUNC_IMPL(__imp__sub_83A91DD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ac8868
	sub_83AC8868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A91DD4"))) PPC_WEAK_FUNC(sub_83A91DD4);
PPC_FUNC_IMPL(__imp__sub_83A91DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A91DD8"))) PPC_WEAK_FUNC(sub_83A91DD8);
PPC_FUNC_IMPL(__imp__sub_83A91DD8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac8998
	sub_83AC8998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A91DE4"))) PPC_WEAK_FUNC(sub_83A91DE4);
PPC_FUNC_IMPL(__imp__sub_83A91DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A91DE8"))) PPC_WEAK_FUNC(sub_83A91DE8);
PPC_FUNC_IMPL(__imp__sub_83A91DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A91DF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83a81a50
	ctx.lr = 0x83A91E04;
	sub_83A81A50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a91e20
	if (!cr0.eq) goto loc_83A91E20;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,18580
	ctx.r4.s64 = ctx.r11.s64 + 18580;
	// bl 0x831ea418
	ctx.lr = 0x83A91E1C;
	sub_831EA418(ctx, base);
	// b 0x83a91ed8
	goto loc_83A91ED8;
loc_83A91E20:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a91e68
	if (!cr6.eq) goto loc_83A91E68;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r8,6
	ctx.r8.s64 = 6;
	// ori r9,r9,48000
	ctx.r9.u64 = ctx.r9.u64 | 48000;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f0,24504(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_83A91E68:
	// bl 0x83a81a60
	ctx.lr = 0x83A91E6C;
	sub_83A81A60(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x83a91ea4
	if (cr6.eq) goto loc_83A91EA4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,18496
	ctx.r4.s64 = ctx.r11.s64 + 18496;
	// bl 0x831ea3f0
	ctx.lr = 0x83A91EA0;
	sub_831EA3F0(ctx, base);
	// b 0x83a91ed8
	goto loc_83A91ED8;
loc_83A91EA4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,127
	cr6.compare<int32_t>(ctx.r11.s32, 127, xer);
	// ble cr6,0x83a91ec8
	if (!cr6.gt) goto loc_83A91EC8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,127
	ctx.r5.s64 = 127;
	// addi r4,r11,18424
	ctx.r4.s64 = ctx.r11.s64 + 18424;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A91EC4;
	sub_831EA400(ctx, base);
	// b 0x83a91ed8
	goto loc_83A91ED8;
loc_83A91EC8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac8de0
	ctx.lr = 0x83A91ED8;
	sub_83AC8DE0(ctx, base);
loc_83A91ED8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A91EE0"))) PPC_WEAK_FUNC(sub_83A91EE0);
PPC_FUNC_IMPL(__imp__sub_83A91EE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ac8bb0
	sub_83AC8BB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A91EE4"))) PPC_WEAK_FUNC(sub_83A91EE4);
PPC_FUNC_IMPL(__imp__sub_83A91EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A91EE8"))) PPC_WEAK_FUNC(sub_83A91EE8);
PPC_FUNC_IMPL(__imp__sub_83A91EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a91f3c
	if (!cr6.eq) goto loc_83A91F3C;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f0,24504(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r9,48000
	ctx.r9.u64 = ctx.r9.u64 | 48000;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_83A91F3C:
	// bl 0x83ac8c10
	ctx.lr = 0x83A91F40;
	sub_83AC8C10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A91F50"))) PPC_WEAK_FUNC(sub_83A91F50);
PPC_FUNC_IMPL(__imp__sub_83A91F50) {
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
	// bl 0x83aa13a8
	ctx.lr = 0x83A91F68;
	sub_83AA13A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac8cb0
	ctx.lr = 0x83A91F70;
	sub_83AC8CB0(ctx, base);
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

__attribute__((alias("__imp__sub_83A91F84"))) PPC_WEAK_FUNC(sub_83A91F84);
PPC_FUNC_IMPL(__imp__sub_83A91F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A91F88"))) PPC_WEAK_FUNC(sub_83A91F88);
PPC_FUNC_IMPL(__imp__sub_83A91F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A91F90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83ac8ba8
	ctx.lr = 0x83A91FAC;
	sub_83AC8BA8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a91fc8
	if (!cr0.eq) goto loc_83A91FC8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,18592
	ctx.r4.s64 = ctx.r11.s64 + 18592;
	// bl 0x831ea418
	ctx.lr = 0x83A91FC4;
	sub_831EA418(ctx, base);
	// b 0x83a91fdc
	goto loc_83A91FDC;
loc_83A91FC8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa1860
	ctx.lr = 0x83A91FDC;
	sub_83AA1860(ctx, base);
loc_83A91FDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A91FE4"))) PPC_WEAK_FUNC(sub_83A91FE4);
PPC_FUNC_IMPL(__imp__sub_83A91FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A91FE8"))) PPC_WEAK_FUNC(sub_83A91FE8);
PPC_FUNC_IMPL(__imp__sub_83A91FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83ac8ba8
	ctx.lr = 0x83A92004;
	sub_83AC8BA8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a92020
	if (!cr0.eq) goto loc_83A92020;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,18604
	ctx.r4.s64 = ctx.r11.s64 + 18604;
	// bl 0x831ea418
	ctx.lr = 0x83A9201C;
	sub_831EA418(ctx, base);
	// b 0x83a92028
	goto loc_83A92028;
loc_83A92020:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa13a8
	ctx.lr = 0x83A92028;
	sub_83AA13A8(ctx, base);
loc_83A92028:
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

__attribute__((alias("__imp__sub_83A9203C"))) PPC_WEAK_FUNC(sub_83A9203C);
PPC_FUNC_IMPL(__imp__sub_83A9203C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A92040"))) PPC_WEAK_FUNC(sub_83A92040);
PPC_FUNC_IMPL(__imp__sub_83A92040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A92048;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83ac8ba8
	ctx.lr = 0x83A92060;
	sub_83AC8BA8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a9207c
	if (!cr0.eq) goto loc_83A9207C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,18616
	ctx.r4.s64 = ctx.r11.s64 + 18616;
	// bl 0x831ea418
	ctx.lr = 0x83A92078;
	sub_831EA418(ctx, base);
	// b 0x83a9208c
	goto loc_83A9208C;
loc_83A9207C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa1ac0
	ctx.lr = 0x83A9208C;
	sub_83AA1AC0(ctx, base);
loc_83A9208C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A92094"))) PPC_WEAK_FUNC(sub_83A92094);
PPC_FUNC_IMPL(__imp__sub_83A92094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A92098"))) PPC_WEAK_FUNC(sub_83A92098);
PPC_FUNC_IMPL(__imp__sub_83A92098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A920A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83ac8ba8
	ctx.lr = 0x83A920A8;
	sub_83AC8BA8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83a92104
	if (cr0.eq) goto loc_83A92104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ac9a48
	ctx.lr = 0x83A920B8;
	sub_83AC9A48(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x83a92104
	if (cr0.eq) goto loc_83A92104;
loc_83A920C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ac9a50
	ctx.lr = 0x83A920D0;
	sub_83AC9A50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83a920f8
	if (cr0.eq) goto loc_83A920F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac91c8
	ctx.lr = 0x83A920E0;
	sub_83AC91C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac90a0
	ctx.lr = 0x83A920E8;
	sub_83AC90A0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a920f8
	if (cr6.eq) goto loc_83A920F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac9068
	ctx.lr = 0x83A920F8;
	sub_83AC9068(ctx, base);
loc_83A920F8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x83a920c4
	if (cr6.lt) goto loc_83A920C4;
loc_83A92104:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9210C"))) PPC_WEAK_FUNC(sub_83A9210C);
PPC_FUNC_IMPL(__imp__sub_83A9210C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A92110"))) PPC_WEAK_FUNC(sub_83A92110);
PPC_FUNC_IMPL(__imp__sub_83A92110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce778
	ctx.lr = 0x83A92124;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,264
	ctx.r5.s64 = 264;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A92148;
	sub_831CDCF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f31,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bne cr6,0x83a921b4
	if (!cr6.eq) goto loc_83A921B4;
	// fcmpu cr6,f30,f31
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x83a921b4
	if (!cr6.eq) goto loc_83A921B4;
	// fcmpu cr6,f29,f31
	cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bne cr6,0x83a921b4
	if (!cr6.eq) goto loc_83A921B4;
	// addi r10,r31,-28
	ctx.r10.s64 = ctx.r31.s64 + -28;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A921A8:
	// stfsu f31,36(r10)
	ctx.fpscr.disableFlushMode();
	ea = 36 + ctx.r10.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83a921a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A921A8;
	// b 0x83a921d0
	goto loc_83A921D0;
loc_83A921B4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa2928
	ctx.lr = 0x83A921C0;
	sub_83AA2928(ctx, base);
	// stfs f31,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,224(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
loc_83A921D0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce7c4
	ctx.lr = 0x83A921DC;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A921EC"))) PPC_WEAK_FUNC(sub_83A921EC);
PPC_FUNC_IMPL(__imp__sub_83A921EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A921F0"))) PPC_WEAK_FUNC(sub_83A921F0);
PPC_FUNC_IMPL(__imp__sub_83A921F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83ac8ba8
	ctx.lr = 0x83A92214;
	sub_83AC8BA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a92234
	if (!cr0.eq) goto loc_83A92234;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,18628
	ctx.r4.s64 = ctx.r11.s64 + 18628;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A92230;
	sub_831EA418(ctx, base);
	// b 0x83a92260
	goto loc_83A92260;
loc_83A92234:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9aa0
	ctx.lr = 0x83A9223C;
	sub_83AC9AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9a50
	ctx.lr = 0x83A92248;
	sub_83AC9A50(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a92258
	if (cr0.eq) goto loc_83A92258;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ac9070
	ctx.lr = 0x83A92258;
	sub_83AC9070(ctx, base);
loc_83A92258:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9aa8
	ctx.lr = 0x83A92260;
	sub_83AC9AA8(ctx, base);
loc_83A92260:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9227C"))) PPC_WEAK_FUNC(sub_83A9227C);
PPC_FUNC_IMPL(__imp__sub_83A9227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A92280"))) PPC_WEAK_FUNC(sub_83A92280);
PPC_FUNC_IMPL(__imp__sub_83A92280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A92288;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83ac8ba8
	ctx.lr = 0x83A922A0;
	sub_83AC8BA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a922c0
	if (!cr0.eq) goto loc_83A922C0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,18640
	ctx.r4.s64 = ctx.r11.s64 + 18640;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A922BC;
	sub_831EA418(ctx, base);
	// b 0x83a922f0
	goto loc_83A922F0;
loc_83A922C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9aa0
	ctx.lr = 0x83A922C8;
	sub_83AC9AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9a50
	ctx.lr = 0x83A922D4;
	sub_83AC9A50(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a922e8
	if (cr0.eq) goto loc_83A922E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ac9090
	ctx.lr = 0x83A922E8;
	sub_83AC9090(ctx, base);
loc_83A922E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9aa8
	ctx.lr = 0x83A922F0;
	sub_83AC9AA8(ctx, base);
loc_83A922F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A922FC"))) PPC_WEAK_FUNC(sub_83A922FC);
PPC_FUNC_IMPL(__imp__sub_83A922FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A92300"))) PPC_WEAK_FUNC(sub_83A92300);
PPC_FUNC_IMPL(__imp__sub_83A92300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,18352
	ctx.r12.s64 = ctx.r12.s64 + 18352;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31831
	ctx.r12.s64 = -2086076416;
	// nop 
	// addi r12,r12,9016
	ctx.r12.s64 = ctx.r12.s64 + 9016;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83A92338;
	case 1:
		goto loc_83A92340;
	case 2:
		goto loc_83A92348;
	case 3:
		goto loc_83A92350;
	case 4:
		goto loc_83A92358;
	case 5:
		goto loc_83A92360;
	case 6:
		goto loc_83A92368;
	case 7:
		goto loc_83A92370;
	case 8:
		goto loc_83A92370;
	case 9:
		goto loc_83A92378;
	case 10:
		goto loc_83A92380;
	case 11:
		goto loc_83A92388;
	case 12:
		goto loc_83A92390;
	case 13:
		goto loc_83A92398;
	case 14:
		goto loc_83A923A0;
	case 15:
		goto loc_83A923A8;
	case 16:
		goto loc_83A923B0;
	case 17:
		goto loc_83A923B8;
	case 18:
		goto loc_83A92368;
	default:
		return;
	}
loc_83A92338:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83A92340:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83A92348:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83A92350:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83A92358:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_83A92360:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83A92368:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_83A92370:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_83A92378:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_83A92380:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_83A92388:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_83A92390:
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
loc_83A92398:
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
loc_83A923A0:
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
loc_83A923A8:
	// li r3,26
	ctx.r3.s64 = 26;
	// blr 
	return;
loc_83A923B0:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_83A923B8:
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A923C0"))) PPC_WEAK_FUNC(sub_83A923C0);
PPC_FUNC_IMPL(__imp__sub_83A923C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A923C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83ac8ba8
	ctx.lr = 0x83A923D8;
	sub_83AC8BA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a923f8
	if (!cr0.eq) goto loc_83A923F8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,18664
	ctx.r4.s64 = ctx.r11.s64 + 18664;
loc_83A923EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A923F4;
	sub_831EA418(ctx, base);
	// b 0x83a9245c
	goto loc_83A9245C;
loc_83A923F8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x83a92410
	if (!cr6.lt) goto loc_83A92410;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,18652
	ctx.r4.s64 = ctx.r11.s64 + 18652;
	// b 0x83a923ec
	goto loc_83A923EC;
loc_83A92410:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a9242c
	if (!cr6.eq) goto loc_83A9242C;
	// li r11,50
	ctx.r11.s64 = 50;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_83A9242C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9aa0
	ctx.lr = 0x83A92434;
	sub_83AC9AA0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9a50
	ctx.lr = 0x83A92440;
	sub_83AC9A50(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a92454
	if (cr0.eq) goto loc_83A92454;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83ac9230
	ctx.lr = 0x83A92454;
	sub_83AC9230(ctx, base);
loc_83A92454:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9aa8
	ctx.lr = 0x83A9245C;
	sub_83AC9AA8(ctx, base);
loc_83A9245C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A92464"))) PPC_WEAK_FUNC(sub_83A92464);
PPC_FUNC_IMPL(__imp__sub_83A92464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A92468"))) PPC_WEAK_FUNC(sub_83A92468);
PPC_FUNC_IMPL(__imp__sub_83A92468) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83ac8ba8
	ctx.lr = 0x83A92484;
	sub_83AC8BA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a924a4
	if (!cr0.eq) goto loc_83A924A4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,18688
	ctx.r4.s64 = ctx.r11.s64 + 18688;
loc_83A92498:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A924A0;
	sub_831EA418(ctx, base);
	// b 0x83a924e4
	goto loc_83A924E4;
loc_83A924A4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x83a924bc
	if (!cr6.lt) goto loc_83A924BC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,18676
	ctx.r4.s64 = ctx.r11.s64 + 18676;
	// b 0x83a92498
	goto loc_83A92498;
loc_83A924BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9aa0
	ctx.lr = 0x83A924C4;
	sub_83AC9AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9a50
	ctx.lr = 0x83A924D0;
	sub_83AC9A50(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a924dc
	if (cr0.eq) goto loc_83A924DC;
	// bl 0x83ac9268
	ctx.lr = 0x83A924DC;
	sub_83AC9268(ctx, base);
loc_83A924DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9aa8
	ctx.lr = 0x83A924E4;
	sub_83AC9AA8(ctx, base);
loc_83A924E4:
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

__attribute__((alias("__imp__sub_83A924FC"))) PPC_WEAK_FUNC(sub_83A924FC);
PPC_FUNC_IMPL(__imp__sub_83A924FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A92500"))) PPC_WEAK_FUNC(sub_83A92500);
PPC_FUNC_IMPL(__imp__sub_83A92500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A92508;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83ac8ba8
	ctx.lr = 0x83A9251C;
	sub_83AC8BA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a92540
	if (!cr6.eq) goto loc_83A92540;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,18712
	ctx.r4.s64 = ctx.r11.s64 + 18712;
loc_83A92534:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9253C;
	sub_831EA418(ctx, base);
	// b 0x83a925cc
	goto loc_83A925CC;
loc_83A92540:
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A9254C;
	sub_831EA7A0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83a92564
	if (!cr6.eq) goto loc_83A92564;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,18700
	ctx.r4.s64 = ctx.r11.s64 + 18700;
	// b 0x83a92534
	goto loc_83A92534;
loc_83A92564:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ac9aa0
	ctx.lr = 0x83A9256C;
	sub_83AC9AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ac9a50
	ctx.lr = 0x83A92578;
	sub_83AC9A50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83a925c4
	if (cr0.eq) goto loc_83A925C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83ac8ba8
	ctx.lr = 0x83A92588;
	sub_83AC8BA8(ctx, base);
	// bl 0x83ac9ab8
	ctx.lr = 0x83A9258C;
	sub_83AC9AB8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,36
	ctx.r5.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac92a0
	ctx.lr = 0x83A925A0;
	sub_83AC92A0(ctx, base);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac9370
	ctx.lr = 0x83A925B0;
	sub_83AC9370(ctx, base);
	// addi r5,r31,68
	ctx.r5.s64 = ctx.r31.s64 + 68;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac9440
	ctx.lr = 0x83A925C0;
	sub_83AC9440(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_83A925C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ac9aa8
	ctx.lr = 0x83A925CC;
	sub_83AC9AA8(ctx, base);
loc_83A925CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A925D4"))) PPC_WEAK_FUNC(sub_83A925D4);
PPC_FUNC_IMPL(__imp__sub_83A925D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A925D8"))) PPC_WEAK_FUNC(sub_83A925D8);
PPC_FUNC_IMPL(__imp__sub_83A925D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ac8d30
	sub_83AC8D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A925DC"))) PPC_WEAK_FUNC(sub_83A925DC);
PPC_FUNC_IMPL(__imp__sub_83A925DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A925E0"))) PPC_WEAK_FUNC(sub_83A925E0);
PPC_FUNC_IMPL(__imp__sub_83A925E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x83ac8ba8
	ctx.lr = 0x83A925F8;
	sub_83AC8BA8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a92618
	if (!cr0.eq) goto loc_83A92618;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,18724
	ctx.r4.s64 = ctx.r11.s64 + 18724;
	// bl 0x831ea400
	ctx.lr = 0x83A92610;
	sub_831EA400(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a9261c
	goto loc_83A9261C;
loc_83A92618:
	// bl 0x83ac9a48
	ctx.lr = 0x83A9261C;
	sub_83AC9A48(ctx, base);
loc_83A9261C:
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

__attribute__((alias("__imp__sub_83A92630"))) PPC_WEAK_FUNC(sub_83A92630);
PPC_FUNC_IMPL(__imp__sub_83A92630) {
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
	ctx.lr = 0x83A92638;
	__savegprlr_18(ctx, base);
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A92660;
	sub_831EA7A0(ctx, base);
	// lbz r11,166(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 166);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a92a50
	if (cr0.eq) goto loc_83A92A50;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r30,260
	ctx.r31.s64 = ctx.r30.s64 + 260;
	// addi r29,r30,44
	ctx.r29.s64 = ctx.r30.s64 + 44;
	// addi r30,r22,20
	ctx.r30.s64 = ctx.r22.s64 + 20;
	// lfs f30,21708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	ctx.f30.f64 = double(temp.f32);
	// li r23,1
	ctx.r23.s64 = 1;
	// lfs f31,20592(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20592);
	ctx.f31.f64 = double(temp.f32);
	// li r24,2
	ctx.r24.s64 = 2;
	// li r26,4
	ctx.r26.s64 = 4;
	// li r25,8
	ctx.r25.s64 = 8;
	// li r20,13
	ctx.r20.s64 = 13;
loc_83A926A0:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x83a8d938
	ctx.lr = 0x83A926A8;
	sub_83A8D938(ctx, base);
	// addi r27,r29,4
	ctx.r27.s64 = ctx.r29.s64 + 4;
	// stw r19,-8(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8, ctx.r19.u32);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r18,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r18.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bgt cr6,0x83a92a34
	if (cr6.gt) goto loc_83A92A34;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,18376
	ctx.r12.s64 = ctx.r12.s64 + 18376;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31831
	ctx.r12.s64 = -2086076416;
	// nop 
	// addi r12,r12,9972
	ctx.r12.s64 = ctx.r12.s64 + 9972;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83A92788;
	case 1:
		goto loc_83A9276C;
	case 2:
		goto loc_83A927E0;
	case 3:
		goto loc_83A9273C;
	case 4:
		goto loc_83A926F4;
	case 5:
		goto loc_83A92800;
	case 6:
		goto loc_83A928BC;
	case 7:
		goto loc_83A927A4;
	case 8:
		goto loc_83A927A4;
	case 9:
		goto loc_83A928DC;
	case 10:
		goto loc_83A928FC;
	case 11:
		goto loc_83A92918;
	case 12:
		goto loc_83A92938;
	case 13:
		goto loc_83A9295C;
	case 14:
		goto loc_83A9297C;
	case 15:
		goto loc_83A92998;
	case 16:
		goto loc_83A929B4;
	case 17:
		goto loc_83A929E0;
	case 18:
		goto loc_83A929FC;
	default:
		return;
	}
loc_83A926F4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83a8d998
	ctx.lr = 0x83A92708;
	sub_83A8D998(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -256, ctx.r11.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lwa r11,120(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 120));
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// lfd f0,208(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// b 0x83a92a2c
	goto loc_83A92A2C;
loc_83A9273C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// bl 0x83a8d998
	ctx.lr = 0x83A92750;
	sub_83A8D998(ctx, base);
	// lfs f0,248(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// li r11,6
	ctx.r11.s64 = 6;
loc_83A92758:
	// stw r11,-256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -256, ctx.r11.u32);
	// stfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_83A92760:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83a92a34
	goto loc_83A92A34;
loc_83A9276C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x83a8d998
	ctx.lr = 0x83A92780;
	sub_83A8D998(ctx, base);
	// stw r23,-256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -256, ctx.r23.u32);
	// b 0x83a92760
	goto loc_83A92760;
loc_83A92788:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// bl 0x83a8d998
	ctx.lr = 0x83A9279C;
	sub_83A8D998(ctx, base);
	// stw r24,-256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -256, ctx.r24.u32);
	// b 0x83a92760
	goto loc_83A92760;
loc_83A927A4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83a8d998
	ctx.lr = 0x83A927B8;
	sub_83A8D998(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,-256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -256, ctx.r11.u32);
	// lwa r11,136(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 136));
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
loc_83A927CC:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// b 0x83a92a2c
	goto loc_83A92A2C;
loc_83A927E0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// bl 0x83a8d998
	ctx.lr = 0x83A927F4;
	sub_83A8D998(ctx, base);
	// lfs f0,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83a92758
	goto loc_83A92758;
loc_83A92800:
	// li r11,128
	ctx.r11.s64 = 128;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r10,256
	ctx.r10.s64 = 256;
	// stb r23,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r23.u8);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// li r9,512
	ctx.r9.s64 = 512;
	// sth r10,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// li r10,2048
	ctx.r10.s64 = 2048;
	// sth r9,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r9.u16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// sth r11,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// li r5,20
	ctx.r5.s64 = 20;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r24,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r24.u8);
	// stb r26,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r26.u8);
	// stb r25,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r25.u8);
	// bl 0x83a8d998
	ctx.lr = 0x83A9284C;
	sub_83A8D998(ctx, base);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwa r7,120(r1)
	ctx.r7.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 120));
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// lfd f0,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r10,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r10.u64);
	// lfd f12,216(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// lfd f13,240(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stw r26,-256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -256, ctx.r26.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// b 0x83a92a34
	goto loc_83A92A34;
loc_83A928BC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83a8d998
	ctx.lr = 0x83A928D0;
	sub_83A8D998(ctx, base);
	// stw r20,-256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -256, ctx.r20.u32);
	// stfs f30,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x83a92760
	goto loc_83A92760;
loc_83A928DC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83a8d998
	ctx.lr = 0x83A928F0;
	sub_83A8D998(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
loc_83A928F4:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83a92758
	goto loc_83A92758;
loc_83A928FC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83a8d998
	ctx.lr = 0x83A92910;
	sub_83A8D998(ctx, base);
	// stw r25,-256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -256, ctx.r25.u32);
	// b 0x83a92760
	goto loc_83A92760;
loc_83A92918:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x83a8d998
	ctx.lr = 0x83A9292C;
	sub_83A8D998(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
loc_83A92930:
	// stw r11,-256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -256, ctx.r11.u32);
	// b 0x83a92760
	goto loc_83A92760;
loc_83A92938:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a8d998
	ctx.lr = 0x83A9294C;
	sub_83A8D998(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,-256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -256, ctx.r11.u32);
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x83a92760
	goto loc_83A92760;
loc_83A9295C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x83a8d998
	ctx.lr = 0x83A92970;
	sub_83A8D998(ctx, base);
	// lfs f0,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x83a92758
	goto loc_83A92758;
loc_83A9297C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,68
	ctx.r5.s64 = 68;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83a8d998
	ctx.lr = 0x83A92990;
	sub_83A8D998(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x83a92930
	goto loc_83A92930;
loc_83A92998:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,68
	ctx.r5.s64 = 68;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83a8d998
	ctx.lr = 0x83A929AC;
	sub_83A8D998(ctx, base);
	// li r11,26
	ctx.r11.s64 = 26;
	// b 0x83a928f4
	goto loc_83A928F4;
loc_83A929B4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83a8d998
	ctx.lr = 0x83A929C8;
	sub_83A8D998(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,-256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -256, ctx.r11.u32);
	// lwa r11,136(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 136));
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lfd f0,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// b 0x83a927cc
	goto loc_83A927CC;
loc_83A929E0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x83a8d998
	ctx.lr = 0x83A929F4;
	sub_83A8D998(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x83a92930
	goto loc_83A92930;
loc_83A929FC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,516
	ctx.r5.s64 = 516;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// bl 0x83a8d998
	ctx.lr = 0x83A92A10;
	sub_83A8D998(ctx, base);
	// lwa r11,576(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 576));
	// std r11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r11.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r20,-256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -256, ctx.r20.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_83A92A2C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_83A92A34:
	// lbz r11,166(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 166);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a926a0
	if (cr6.lt) goto loc_83A926A0;
loc_83A92A50:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A92A60"))) PPC_WEAK_FUNC(sub_83A92A60);
PPC_FUNC_IMPL(__imp__sub_83A92A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f1,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83ab01d0
	ctx.lr = 0x83A92A88;
	sub_83AB01D0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83ab01d0
	ctx.lr = 0x83A92A94;
	sub_83AB01D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a92ab0
	if (!cr6.gt) goto loc_83A92AB0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_83A92AB0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a92ac4
	if (!cr6.gt) goto loc_83A92AC4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_83A92AC4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83a92ad8
	if (!cr6.gt) goto loc_83A92AD8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_83A92AD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A92AEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A92B08"))) PPC_WEAK_FUNC(sub_83A92B08);
PPC_FUNC_IMPL(__imp__sub_83A92B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f1,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83ab01d0
	ctx.lr = 0x83A92B2C;
	sub_83AB01D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a92b54
	if (!cr6.gt) goto loc_83A92B54;
	// lwa r11,0(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 0));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_83A92B54:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a92b68
	if (!cr6.gt) goto loc_83A92B68;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_83A92B68:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83a92b80
	if (!cr6.gt) goto loc_83A92B80;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_83A92B80:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83a92b98
	if (!cr6.gt) goto loc_83A92B98;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_83A92B98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A92BAC;
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

__attribute__((alias("__imp__sub_83A92BC4"))) PPC_WEAK_FUNC(sub_83A92BC4);
PPC_FUNC_IMPL(__imp__sub_83A92BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A92BC8"))) PPC_WEAK_FUNC(sub_83A92BC8);
PPC_FUNC_IMPL(__imp__sub_83A92BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a92be0
	if (!cr6.gt) goto loc_83A92BE0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_83A92BE0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a92bf8
	if (!cr6.gt) goto loc_83A92BF8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_83A92BF8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83a92c10
	if (!cr6.gt) goto loc_83A92C10;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_83A92C10:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83a92c28
	if (!cr6.gt) goto loc_83A92C28;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_83A92C28:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x83a92c40
	if (!cr6.gt) goto loc_83A92C40;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_83A92C40:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A92C50"))) PPC_WEAK_FUNC(sub_83A92C50);
PPC_FUNC_IMPL(__imp__sub_83A92C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83aca2b8
	ctx.lr = 0x83A92C78;
	sub_83ACA2B8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aca2b8
	ctx.lr = 0x83A92C84;
	sub_83ACA2B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a92c98
	if (!cr6.gt) goto loc_83A92C98;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_83A92C98:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a92cac
	if (!cr6.gt) goto loc_83A92CAC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_83A92CAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83a92cd4
	if (!cr6.gt) goto loc_83A92CD4;
	// lwa r11,8(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_83A92CD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A92CE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A92D04"))) PPC_WEAK_FUNC(sub_83A92D04);
PPC_FUNC_IMPL(__imp__sub_83A92D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A92D08"))) PPC_WEAK_FUNC(sub_83A92D08);
PPC_FUNC_IMPL(__imp__sub_83A92D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A92D10;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce778
	ctx.lr = 0x83A92D18;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f28,21708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	ctx.f28.f64 = double(temp.f32);
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
	// lfs f29,-4460(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4460);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,-7352(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7352);
	ctx.f30.f64 = double(temp.f32);
loc_83A92D40:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83a92d60
	if (cr6.lt) goto loc_83A92D60;
	// beq cr6,0x83a92d58
	if (cr6.eq) goto loc_83A92D58;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x83a92d64
	goto loc_83A92D64;
loc_83A92D58:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// b 0x83a92d64
	goto loc_83A92D64;
loc_83A92D60:
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
loc_83A92D64:
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aca2f8
	ctx.lr = 0x83A92D6C;
	sub_83ACA2F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a92d94
	if (!cr6.gt) goto loc_83A92D94;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_83A92D94:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a92da8
	if (!cr6.gt) goto loc_83A92DA8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_83A92DA8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83a92dc0
	if (!cr6.gt) goto loc_83A92DC0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_83A92DC0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83a92dd8
	if (!cr6.gt) goto loc_83A92DD8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_83A92DD8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x83a92dec
	if (!cr6.gt) goto loc_83A92DEC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_83A92DEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A92E00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// blt cr6,0x83a92d40
	if (cr6.lt) goto loc_83A92D40;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7c4
	ctx.lr = 0x83A92E1C;
	__restfpr_28(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A92E20"))) PPC_WEAK_FUNC(sub_83A92E20);
PPC_FUNC_IMPL(__imp__sub_83A92E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A92E28;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce778
	ctx.lr = 0x83A92E30;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a92f3c
	if (!cr6.gt) goto loc_83A92F3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r30,r4,16
	ctx.r30.s64 = ctx.r4.s64 + 16;
	// lfs f28,21708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,-4460(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4460);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,-7352(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7352);
	ctx.f30.f64 = double(temp.f32);
loc_83A92E68:
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83a92e88
	if (cr6.lt) goto loc_83A92E88;
	// beq cr6,0x83a92e80
	if (cr6.eq) goto loc_83A92E80;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x83a92e8c
	goto loc_83A92E8C;
loc_83A92E80:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// b 0x83a92e8c
	goto loc_83A92E8C;
loc_83A92E88:
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
loc_83A92E8C:
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aca2f8
	ctx.lr = 0x83A92E94;
	sub_83ACA2F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a92ebc
	if (!cr6.gt) goto loc_83A92EBC;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_83A92EBC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a92ed0
	if (!cr6.gt) goto loc_83A92ED0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_83A92ED0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83a92ee8
	if (!cr6.gt) goto loc_83A92EE8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_83A92EE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83a92f00
	if (!cr6.gt) goto loc_83A92F00;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_83A92F00:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x83a92f14
	if (!cr6.gt) goto loc_83A92F14;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_83A92F14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A92F28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a92e68
	if (cr6.lt) goto loc_83A92E68;
loc_83A92F3C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7c4
	ctx.lr = 0x83A92F48;
	__restfpr_28(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A92F4C"))) PPC_WEAK_FUNC(sub_83A92F4C);
PPC_FUNC_IMPL(__imp__sub_83A92F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A92F50"))) PPC_WEAK_FUNC(sub_83A92F50);
PPC_FUNC_IMPL(__imp__sub_83A92F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83aca2f8
	ctx.lr = 0x83A92F78;
	sub_83ACA2F8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f1,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aca2f8
	ctx.lr = 0x83A92F84;
	sub_83ACA2F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a92f98
	if (!cr6.gt) goto loc_83A92F98;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_83A92F98:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a92fb0
	if (!cr6.gt) goto loc_83A92FB0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_83A92FB0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83a92fc8
	if (!cr6.gt) goto loc_83A92FC8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_83A92FC8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83a92fe0
	if (!cr6.gt) goto loc_83A92FE0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_83A92FE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x83a92ff4
	if (!cr6.gt) goto loc_83A92FF4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_83A92FF4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// ble cr6,0x83a9300c
	if (!cr6.gt) goto loc_83A9300C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_83A9300C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A93020;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9303C"))) PPC_WEAK_FUNC(sub_83A9303C);
PPC_FUNC_IMPL(__imp__sub_83A9303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A93040"))) PPC_WEAK_FUNC(sub_83A93040);
PPC_FUNC_IMPL(__imp__sub_83A93040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a92f50
	ctx.lr = 0x83A93060;
	sub_83A92F50(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// ble cr6,0x83a93088
	if (!cr6.gt) goto loc_83A93088;
	// lwa r11,28(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 28));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
loc_83A93088:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// ble cr6,0x83a930a0
	if (!cr6.gt) goto loc_83A930A0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_83A930A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// ble cr6,0x83a930b8
	if (!cr6.gt) goto loc_83A930B8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
loc_83A930B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A930CC;
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

__attribute__((alias("__imp__sub_83A930E4"))) PPC_WEAK_FUNC(sub_83A930E4);
PPC_FUNC_IMPL(__imp__sub_83A930E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A930E8"))) PPC_WEAK_FUNC(sub_83A930E8);
PPC_FUNC_IMPL(__imp__sub_83A930E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a93100
	if (!cr6.gt) goto loc_83A93100;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_83A93100:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83a93118
	if (!cr6.gt) goto loc_83A93118;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_83A93118:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a93130
	if (!cr6.gt) goto loc_83A93130;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_83A93130:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83a93148
	if (!cr6.gt) goto loc_83A93148;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_83A93148:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x83a93160
	if (!cr6.gt) goto loc_83A93160;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_83A93160:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// ble cr6,0x83a93178
	if (!cr6.gt) goto loc_83A93178;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_83A93178:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// ble cr6,0x83a93190
	if (!cr6.gt) goto loc_83A93190;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_83A93190:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// ble cr6,0x83a931a8
	if (!cr6.gt) goto loc_83A931A8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_83A931A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A931B8"))) PPC_WEAK_FUNC(sub_83A931B8);
PPC_FUNC_IMPL(__imp__sub_83A931B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a931d0
	if (!cr6.gt) goto loc_83A931D0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_83A931D0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83a931e8
	if (!cr6.gt) goto loc_83A931E8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_83A931E8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a93200
	if (!cr6.gt) goto loc_83A93200;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_83A93200:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83a93218
	if (!cr6.gt) goto loc_83A93218;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_83A93218:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x83a93230
	if (!cr6.gt) goto loc_83A93230;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_83A93230:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// ble cr6,0x83a93248
	if (!cr6.gt) goto loc_83A93248;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_83A93248:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A93258"))) PPC_WEAK_FUNC(sub_83A93258);
PPC_FUNC_IMPL(__imp__sub_83A93258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f1,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83aca2f8
	ctx.lr = 0x83A9327C;
	sub_83ACA2F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a93294
	if (!cr6.gt) goto loc_83A93294;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_83A93294:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a932ac
	if (!cr6.gt) goto loc_83A932AC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_83A932AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83a932c4
	if (!cr6.gt) goto loc_83A932C4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_83A932C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83a932d8
	if (!cr6.gt) goto loc_83A932D8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_83A932D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A932EC;
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

__attribute__((alias("__imp__sub_83A93304"))) PPC_WEAK_FUNC(sub_83A93304);
PPC_FUNC_IMPL(__imp__sub_83A93304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A93308"))) PPC_WEAK_FUNC(sub_83A93308);
PPC_FUNC_IMPL(__imp__sub_83A93308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f1,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83aca2f8
	ctx.lr = 0x83A9332C;
	sub_83ACA2F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a93354
	if (!cr6.gt) goto loc_83A93354;
	// lwa r11,12(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 12));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_83A93354:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a9336c
	if (!cr6.gt) goto loc_83A9336C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_83A9336C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83a93380
	if (!cr6.gt) goto loc_83A93380;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_83A93380:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A93394;
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

__attribute__((alias("__imp__sub_83A933AC"))) PPC_WEAK_FUNC(sub_83A933AC);
PPC_FUNC_IMPL(__imp__sub_83A933AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A933B0"))) PPC_WEAK_FUNC(sub_83A933B0);
PPC_FUNC_IMPL(__imp__sub_83A933B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a933c8
	if (!cr6.gt) goto loc_83A933C8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_83A933C8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a933e0
	if (!cr6.gt) goto loc_83A933E0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_83A933E0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83a933f8
	if (!cr6.gt) goto loc_83A933F8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_83A933F8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83a93410
	if (!cr6.gt) goto loc_83A93410;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_83A93410:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x83a93428
	if (!cr6.gt) goto loc_83A93428;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_83A93428:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// ble cr6,0x83a93440
	if (!cr6.gt) goto loc_83A93440;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_83A93440:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// ble cr6,0x83a93458
	if (!cr6.gt) goto loc_83A93458;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_83A93458:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// ble cr6,0x83a93470
	if (!cr6.gt) goto loc_83A93470;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_83A93470:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// ble cr6,0x83a93488
	if (!cr6.gt) goto loc_83A93488;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
loc_83A93488:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// ble cr6,0x83a934a0
	if (!cr6.gt) goto loc_83A934A0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
loc_83A934A0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// ble cr6,0x83a934b8
	if (!cr6.gt) goto loc_83A934B8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,40(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_83A934B8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// ble cr6,0x83a934d0
	if (!cr6.gt) goto loc_83A934D0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,44(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
loc_83A934D0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// ble cr6,0x83a934e8
	if (!cr6.gt) goto loc_83A934E8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_83A934E8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// ble cr6,0x83a93500
	if (!cr6.gt) goto loc_83A93500;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,52(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_83A93500:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// ble cr6,0x83a93518
	if (!cr6.gt) goto loc_83A93518;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_83A93518:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// ble cr6,0x83a93530
	if (!cr6.gt) goto loc_83A93530;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,60(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
loc_83A93530:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// ble cr6,0x83a93548
	if (!cr6.gt) goto loc_83A93548;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,64(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_83A93548:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A93558"))) PPC_WEAK_FUNC(sub_83A93558);
PPC_FUNC_IMPL(__imp__sub_83A93558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A9356C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r8,-2
	ctx.r7.s64 = ctx.r8.s64 + -2;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bge cr6,0x83a9358c
	if (!cr6.lt) goto loc_83A9358C;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
loc_83A9358C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bge cr6,0x83a935ac
	if (!cr6.lt) goto loc_83A935AC;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
loc_83A935AC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x83a935cc
	if (!cr6.lt) goto loc_83A935CC;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_83A935CC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bge cr6,0x83a935f0
	if (!cr6.lt) goto loc_83A935F0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
loc_83A935F0:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x83a9356c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A9356C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A9360C"))) PPC_WEAK_FUNC(sub_83A9360C);
PPC_FUNC_IMPL(__imp__sub_83A9360C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A93610"))) PPC_WEAK_FUNC(sub_83A93610);
PPC_FUNC_IMPL(__imp__sub_83A93610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f1,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83aca2f8
	ctx.lr = 0x83A93638;
	sub_83ACA2F8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f1,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aca2f8
	ctx.lr = 0x83A93644;
	sub_83ACA2F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a93658
	if (!cr6.gt) goto loc_83A93658;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_83A93658:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a93670
	if (!cr6.gt) goto loc_83A93670;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_83A93670:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83a93688
	if (!cr6.gt) goto loc_83A93688;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_83A93688:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83a9369c
	if (!cr6.gt) goto loc_83A9369C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_83A9369C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x83a936b4
	if (!cr6.gt) goto loc_83A936B4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_83A936B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// ble cr6,0x83a936dc
	if (!cr6.gt) goto loc_83A936DC;
	// lwa r11,0(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 0));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
loc_83A936DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A936F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9370C"))) PPC_WEAK_FUNC(sub_83A9370C);
PPC_FUNC_IMPL(__imp__sub_83A9370C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A93710"))) PPC_WEAK_FUNC(sub_83A93710);
PPC_FUNC_IMPL(__imp__sub_83A93710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r9,0
	ctx.r9.s64 = 0;
loc_83A93714:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A93720:
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x83a93740
	if (!cr6.lt) goto loc_83A93740;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfsx f0,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
loc_83A93740:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83a93720
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A93720;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r9,64
	cr6.compare<uint32_t>(ctx.r9.u32, 64, xer);
	// blt cr6,0x83a93714
	if (cr6.lt) goto loc_83A93714;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A93764"))) PPC_WEAK_FUNC(sub_83A93764);
PPC_FUNC_IMPL(__imp__sub_83A93764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A93768"))) PPC_WEAK_FUNC(sub_83A93768);
PPC_FUNC_IMPL(__imp__sub_83A93768) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_83A9377C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a91fe8
	ctx.lr = 0x83A93784;
	sub_83A91FE8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,128
	cr6.compare<int32_t>(ctx.r31.s32, 128, xer);
	// blt cr6,0x83a9377c
	if (cr6.lt) goto loc_83A9377C;
	// bl 0x83ac8e18
	ctx.lr = 0x83A93794;
	sub_83AC8E18(ctx, base);
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

__attribute__((alias("__imp__sub_83A937A8"))) PPC_WEAK_FUNC(sub_83A937A8);
PPC_FUNC_IMPL(__imp__sub_83A937A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A937B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83ac9c68
	ctx.lr = 0x83A937C8;
	sub_83AC9C68(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x83a93864
	if (cr6.lt) goto loc_83A93864;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a93864
	if (cr6.eq) goto loc_83A93864;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a90fc0
	ctx.lr = 0x83A937E4;
	sub_83A90FC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a93800
	if (!cr0.eq) goto loc_83A93800;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,18792
	ctx.r4.s64 = ctx.r11.s64 + 18792;
	// bl 0x831ea400
	ctx.lr = 0x83A937FC;
	sub_831EA400(ctx, base);
	// b 0x83a93878
	goto loc_83A93878;
loc_83A93800:
	// lbz r11,342(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 342);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a9385c
	if (cr0.eq) goto loc_83A9385C;
	// addi r31,r1,84
	ctx.r31.s64 = ctx.r1.s64 + 84;
loc_83A93814:
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x83a91030
	ctx.lr = 0x83A93820;
	sub_83A91030(ctx, base);
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a92630
	ctx.lr = 0x83A93834;
	sub_83A92630(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x83ac90a8
	ctx.lr = 0x83A9383C;
	sub_83AC90A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83a93878
	if (cr0.lt) goto loc_83A93878;
	// lbz r11,342(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 342);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a93814
	if (cr6.lt) goto loc_83A93814;
loc_83A9385C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x83a9387c
	goto loc_83A9387C;
loc_83A93864:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,18780
	ctx.r4.s64 = ctx.r11.s64 + 18780;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A93878;
	sub_831EA418(ctx, base);
loc_83A93878:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A9387C:
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A93884"))) PPC_WEAK_FUNC(sub_83A93884);
PPC_FUNC_IMPL(__imp__sub_83A93884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A93888"))) PPC_WEAK_FUNC(sub_83A93888);
PPC_FUNC_IMPL(__imp__sub_83A93888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83a92300
	ctx.lr = 0x83A938B0;
	sub_83A92300(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x83a938d0
	if (!cr0.eq) goto loc_83A938D0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,18876
	ctx.r4.s64 = ctx.r11.s64 + 18876;
loc_83A938C0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A938CC;
	sub_831EA400(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A938D0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83ac9510
	ctx.lr = 0x83A938D8;
	sub_83AC9510(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a938ec
	if (!cr0.eq) goto loc_83A938EC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,18836
	ctx.r4.s64 = ctx.r11.s64 + 18836;
	// b 0x83a938c0
	goto loc_83A938C0;
loc_83A938EC:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgt cr6,0x83a93a3c
	if (cr6.gt) goto loc_83A93A3C;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,18400
	ctx.r12.s64 = ctx.r12.s64 + 18400;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31831
	ctx.r12.s64 = -2086076416;
	// nop 
	// addi r12,r12,14624
	ctx.r12.s64 = ctx.r12.s64 + 14624;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83A93920;
	case 1:
		goto loc_83A9392C;
	case 2:
		goto loc_83A93938;
	case 3:
		goto loc_83A93964;
	case 4:
		goto loc_83A93998;
	case 5:
		goto loc_83A939A4;
	case 6:
		goto loc_83A939B0;
	case 7:
		goto loc_83A939BC;
	case 8:
		goto loc_83A939C8;
	case 9:
		goto loc_83A939D4;
	case 10:
		goto loc_83A939E0;
	case 11:
		goto loc_83A939EC;
	case 12:
		goto loc_83A93A3C;
	case 13:
		goto loc_83A939F8;
	case 14:
		goto loc_83A93A04;
	case 15:
		goto loc_83A93A10;
	case 16:
		goto loc_83A93A1C;
	case 17:
		goto loc_83A93A28;
	case 18:
		goto loc_83A93A34;
	default:
		return;
	}
loc_83A93920:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a92a60
	ctx.lr = 0x83A93928;
	sub_83A92A60(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A9392C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a92b08
	ctx.lr = 0x83A93934;
	sub_83A92B08(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A93938:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a93950
	if (!cr6.gt) goto loc_83A93950;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_83A93950:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A93960;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A93964:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a9397c
	if (!cr6.gt) goto loc_83A9397C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_83A9397C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a93950
	if (!cr6.gt) goto loc_83A93950;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x83a93950
	goto loc_83A93950;
loc_83A93998:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a92bc8
	ctx.lr = 0x83A939A0;
	sub_83A92BC8(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A939A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a92c50
	ctx.lr = 0x83A939AC;
	sub_83A92C50(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A939B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a92d08
	ctx.lr = 0x83A939B8;
	sub_83A92D08(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A939BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a92f50
	ctx.lr = 0x83A939C4;
	sub_83A92F50(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A939C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a93040
	ctx.lr = 0x83A939D0;
	sub_83A93040(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A939D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a930e8
	ctx.lr = 0x83A939DC;
	sub_83A930E8(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A939E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a931b8
	ctx.lr = 0x83A939E8;
	sub_83A931B8(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A939EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a93258
	ctx.lr = 0x83A939F4;
	sub_83A93258(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A939F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a93308
	ctx.lr = 0x83A93A00;
	sub_83A93308(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A93A04:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a933b0
	ctx.lr = 0x83A93A0C;
	sub_83A933B0(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A93A10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a93558
	ctx.lr = 0x83A93A18;
	sub_83A93558(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A93A1C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a93610
	ctx.lr = 0x83A93A24;
	sub_83A93610(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A93A28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a93710
	ctx.lr = 0x83A93A30;
	sub_83A93710(ctx, base);
	// b 0x83a93a3c
	goto loc_83A93A3C;
loc_83A93A34:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a92e20
	ctx.lr = 0x83A93A3C;
	sub_83A92E20(ctx, base);
loc_83A93A3C:
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

__attribute__((alias("__imp__sub_83A93A54"))) PPC_WEAK_FUNC(sub_83A93A54);
PPC_FUNC_IMPL(__imp__sub_83A93A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A93A58"))) PPC_WEAK_FUNC(sub_83A93A58);
PPC_FUNC_IMPL(__imp__sub_83A93A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83ac8d38
	ctx.lr = 0x83A93A78;
	sub_83AC8D38(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a93a88
	if (!cr0.eq) goto loc_83A93A88;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a93a98
	goto loc_83A93A98;
loc_83A93A88:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83a937a8
	ctx.lr = 0x83A93A98;
	sub_83A937A8(ctx, base);
loc_83A93A98:
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

__attribute__((alias("__imp__sub_83A93AAC"))) PPC_WEAK_FUNC(sub_83A93AAC);
PPC_FUNC_IMPL(__imp__sub_83A93AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A93AB0"))) PPC_WEAK_FUNC(sub_83A93AB0);
PPC_FUNC_IMPL(__imp__sub_83A93AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A93AB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-1440(r1)
	ea = -1440 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f3,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83ac9078
	ctx.lr = 0x83A93AD8;
	sub_83AC9078(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f3,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83a92110
	ctx.lr = 0x83A93AEC;
	sub_83A92110(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83ac9088
	ctx.lr = 0x83A93B00;
	sub_83AC9088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83ac9070
	ctx.lr = 0x83A93B0C;
	sub_83AC9070(ctx, base);
	// lbz r11,167(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 167);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a93b60
	if (cr0.eq) goto loc_83A93B60;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r28,r31,34
	ctx.r28.s64 = ctx.r31.s64 + 34;
	// addi r27,r11,18340
	ctx.r27.s64 = ctx.r11.s64 + 18340;
loc_83A93B28:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhzu r3,2(r28)
	ea = 2 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// bl 0x83a8f280
	ctx.lr = 0x83A93B34;
	sub_83A8F280(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x83ac9060
	ctx.lr = 0x83A93B50;
	sub_83AC9060(ctx, base);
	// lbz r11,167(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 167);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a93b28
	if (cr6.lt) goto loc_83A93B28;
loc_83A93B60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac9098
	ctx.lr = 0x83A93B68;
	sub_83AC9098(ctx, base);
	// lbz r11,166(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 166);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a93bbc
	if (cr0.eq) goto loc_83A93BBC;
	// addi r29,r31,18
	ctx.r29.s64 = ctx.r31.s64 + 18;
loc_83A93B7C:
	// lhz r3,2(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// bl 0x83a8d938
	ctx.lr = 0x83A93B84;
	sub_83A8D938(ctx, base);
	// lhzu r11,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a910a0
	ctx.lr = 0x83A93B9C;
	sub_83A910A0(ctx, base);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a93888
	ctx.lr = 0x83A93BAC;
	sub_83A93888(ctx, base);
	// lbz r11,166(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 166);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a93b7c
	if (cr6.lt) goto loc_83A93B7C;
loc_83A93BBC:
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A93BC4"))) PPC_WEAK_FUNC(sub_83A93BC4);
PPC_FUNC_IMPL(__imp__sub_83A93BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A93BC8"))) PPC_WEAK_FUNC(sub_83A93BC8);
PPC_FUNC_IMPL(__imp__sub_83A93BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A93BD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83ac8ba8
	ctx.lr = 0x83A93BE4;
	sub_83AC8BA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a93bfc
	if (!cr0.eq) goto loc_83A93BFC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,18924
	ctx.r4.s64 = ctx.r11.s64 + 18924;
	// b 0x83a93c4c
	goto loc_83A93C4C;
loc_83A93BFC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a93c40
	if (cr6.eq) goto loc_83A93C40;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x83a93c40
	if (cr6.lt) goto loc_83A93C40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9aa0
	ctx.lr = 0x83A93C14;
	sub_83AC9AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9a50
	ctx.lr = 0x83A93C20;
	sub_83AC9A50(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a93c34
	if (cr0.eq) goto loc_83A93C34;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83a93888
	ctx.lr = 0x83A93C34;
	sub_83A93888(ctx, base);
loc_83A93C34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9aa8
	ctx.lr = 0x83A93C3C;
	sub_83AC9AA8(ctx, base);
	// b 0x83a93c54
	goto loc_83A93C54;
loc_83A93C40:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,18912
	ctx.r4.s64 = ctx.r11.s64 + 18912;
loc_83A93C4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A93C54;
	sub_831EA418(ctx, base);
loc_83A93C54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A93C5C"))) PPC_WEAK_FUNC(sub_83A93C5C);
PPC_FUNC_IMPL(__imp__sub_83A93C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A93C60"))) PPC_WEAK_FUNC(sub_83A93C60);
PPC_FUNC_IMPL(__imp__sub_83A93C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A93C68;
	__savegprlr_23(ctx, base);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a93db4
	if (cr6.eq) goto loc_83A93DB4;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x83a93db4
	if (cr6.eq) goto loc_83A93DB4;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x83a90fc0
	ctx.lr = 0x83A93C90;
	sub_83A90FC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a93dc8
	if (cr0.eq) goto loc_83A93DC8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83ac8ba8
	ctx.lr = 0x83A93CA0;
	sub_83AC8BA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83a93dc8
	if (cr0.eq) goto loc_83A93DC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9ab8
	ctx.lr = 0x83A93CB0;
	sub_83AC9AB8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9ac0
	ctx.lr = 0x83A93CBC;
	sub_83AC9AC0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r30,518(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 518);
	// bl 0x83ac9a48
	ctx.lr = 0x83A93CCC;
	sub_83AC9A48(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// ble cr6,0x83a93d00
	if (!cr6.gt) goto loc_83A93D00;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x83a93cf4
	if (!cr6.eq) goto loc_83A93CF4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,19056
	ctx.r4.s64 = ctx.r11.s64 + 19056;
loc_83A93CEC:
	// bl 0x831ea400
	ctx.lr = 0x83A93CF0;
	sub_831EA400(ctx, base);
	// b 0x83a93dc8
	goto loc_83A93DC8;
loc_83A93CF4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,18952
	ctx.r4.s64 = ctx.r11.s64 + 18952;
	// b 0x83a93cec
	goto loc_83A93CEC;
loc_83A93D00:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83a93d98
	if (!cr6.gt) goto loc_83A93D98;
	// addi r27,r1,260
	ctx.r27.s64 = ctx.r1.s64 + 260;
loc_83A93D10:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// bl 0x83a91030
	ctx.lr = 0x83A93D1C;
	sub_83A91030(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a93da8
	if (cr0.eq) goto loc_83A93DA8;
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a92630
	ctx.lr = 0x83A93D38;
	sub_83A92630(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9a50
	ctx.lr = 0x83A93D44;
	sub_83AC9A50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83a93da8
	if (cr0.eq) goto loc_83A93DA8;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x83ac90a8
	ctx.lr = 0x83A93D54;
	sub_83AC90A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble 0x83a93d78
	if (!cr0.gt) goto loc_83A93D78;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac9120
	ctx.lr = 0x83A93D74;
	sub_83AC9120(ctx, base);
	// add r24,r29,r24
	ctx.r24.u64 = ctx.r29.u64 + ctx.r24.u64;
loc_83A93D78:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a93ab0
	ctx.lr = 0x83A93D84;
	sub_83A93AB0(ctx, base);
	// lbz r11,518(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 518);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a93d10
	if (cr6.lt) goto loc_83A93D10;
loc_83A93D98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9b10
	ctx.lr = 0x83A93DA0;
	sub_83AC9B10(ctx, base);
	// bl 0x83acb088
	ctx.lr = 0x83A93DA4;
	sub_83ACB088(ctx, base);
	// b 0x83a93dc8
	goto loc_83A93DC8;
loc_83A93DA8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a92098
	ctx.lr = 0x83A93DB0;
	sub_83A92098(ctx, base);
	// b 0x83a93dc8
	goto loc_83A93DC8;
loc_83A93DB4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,18936
	ctx.r4.s64 = ctx.r11.s64 + 18936;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A93DC8;
	sub_831EA418(ctx, base);
loc_83A93DC8:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A93DD0"))) PPC_WEAK_FUNC(sub_83A93DD0);
PPC_FUNC_IMPL(__imp__sub_83A93DD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,520
	ctx.r3.s64 = 520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A93DD8"))) PPC_WEAK_FUNC(sub_83A93DD8);
PPC_FUNC_IMPL(__imp__sub_83A93DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A93DE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31739
	ctx.r27.s64 = -2080047104;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,27260(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27260);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a93e10
	if (cr6.eq) goto loc_83A93E10;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19252
	ctx.r4.s64 = ctx.r11.s64 + 19252;
	// bl 0x831ea3f0
	ctx.lr = 0x83A93E0C;
	sub_831EA3F0(ctx, base);
	// b 0x83a93f68
	goto loc_83A93F68;
loc_83A93E10:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83a93e38
	if (!cr6.eq) goto loc_83A93E38;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83a93e38
	if (!cr6.eq) goto loc_83A93E38;
	// li r3,520
	ctx.r3.s64 = 520;
	// bl 0x83a82d10
	ctx.lr = 0x83A93E28;
	sub_83A82D10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,520
	ctx.r5.s64 = 520;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83a93e3c
	goto loc_83A93E3C;
loc_83A93E38:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A93E3C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a93f54
	if (cr6.eq) goto loc_83A93F54;
	// cmpwi cr6,r5,520
	cr6.compare<int32_t>(ctx.r5.s32, 520, xer);
	// blt cr6,0x83a93f54
	if (cr6.lt) goto loc_83A93F54;
	// addi r11,r28,7
	ctx.r11.s64 = ctx.r28.s64 + 7;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r11,0,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// bl 0x83b673c0
	ctx.lr = 0x83A93E60;
	sub_83B673C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x83A93E68;
	sub_83A7D958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b67480
	ctx.lr = 0x83A93E74;
	sub_83B67480(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83a93e84
	if (!cr6.eq) goto loc_83A93E84;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83a93ea0
	goto loc_83A93EA0;
loc_83A93E84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b67438
	ctx.lr = 0x83A93E8C;
	sub_83B67438(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// divwu r11,r3,r11
	ctx.r11.u32 = PPCDivide(ctx.r3.u32, ctx.r11.u32);
	// mulli r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 * 255;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83A93EA0:
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// li r29,1
	ctx.r29.s64 = 1;
loc_83A93EA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b67438
	ctx.lr = 0x83A93EB0;
	sub_83B67438(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stbx r11,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,512
	cr6.compare<int32_t>(ctx.r29.s32, 512, xer);
	// blt cr6,0x83a93ea8
	if (cr6.lt) goto loc_83A93EA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b67438
	ctx.lr = 0x83A93ECC;
	sub_83B67438(ctx, base);
	// addi r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 7;
	// rlwinm. r29,r11,0,24,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x83a93edc
	if (!cr0.eq) goto loc_83A93EDC;
	// li r29,8
	ctx.r29.s64 = 8;
loc_83A93EDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83A93EE4;
	sub_83102DB0(ctx, base);
	// ld r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldicl r10,r11,50,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 50) & 0x3FFFFFFFFFFFF;
	// rlwimi r5,r11,1,17,30
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x7FFE) | (ctx.r5.u64 & 0xFFFFFFFFFFFF8001);
	// rldicl r11,r11,37,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 37) & 0x1FFFFFFFFF;
	// rlwimi r4,r10,2,17,29
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0x7FFC) | (ctx.r4.u64 & 0xFFFFFFFFFFFF8003);
	// clrlwi r3,r11,17
	ctx.r3.u64 = ctx.r11.u32 & 0x7FFF;
	// bl 0x83b667e8
	ctx.lr = 0x83A93F0C;
	sub_83B667E8(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// add r31,r29,r30
	ctx.r31.u64 = ctx.r29.u64 + ctx.r30.u64;
	// ld r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,-14700(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14700);
	// bl 0x83b672d0
	ctx.lr = 0x83A93F28;
	sub_83B672D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x83a7c190
	ctx.lr = 0x83A93F34;
	sub_83A7C190(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acc318
	ctx.lr = 0x83A93F40;
	sub_83ACC318(ctx, base);
	// lwz r11,27260(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27260);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,27260(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27260, ctx.r11.u32);
	// b 0x83a93f6c
	goto loc_83A93F6C;
loc_83A93F54:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,19240
	ctx.r4.s64 = ctx.r11.s64 + 19240;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A93F68;
	sub_831EA418(ctx, base);
loc_83A93F68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A93F6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A93F74"))) PPC_WEAK_FUNC(sub_83A93F74);
PPC_FUNC_IMPL(__imp__sub_83A93F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A93F78"))) PPC_WEAK_FUNC(sub_83A93F78);
PPC_FUNC_IMPL(__imp__sub_83A93F78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a93fa8
	if (!cr6.eq) goto loc_83A93FA8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,19228
	ctx.r4.s64 = ctx.r11.s64 + 19228;
	// bl 0x831ea418
	ctx.lr = 0x83A93FA4;
	sub_831EA418(ctx, base);
	// b 0x83a93ffc
	goto loc_83A93FFC;
loc_83A93FA8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83b667e8
	ctx.lr = 0x83A93FB8;
	sub_83B667E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a7c190
	ctx.lr = 0x83A93FC4;
	sub_83A7C190(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83acc318
	ctx.lr = 0x83A93FD0;
	sub_83ACC318(ctx, base);
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a93fec
	if (cr0.eq) goto loc_83A93FEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83A93FEC;
	sub_83A82D38(ctx, base);
loc_83A93FEC:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,27260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27260);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,27260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27260, ctx.r11.u32);
loc_83A93FFC:
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

__attribute__((alias("__imp__sub_83A94010"))) PPC_WEAK_FUNC(sub_83A94010);
PPC_FUNC_IMPL(__imp__sub_83A94010) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r11,-14700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14700, ctx.r11.u32);
	// b 0x83a93dd8
	sub_83A93DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A94020"))) PPC_WEAK_FUNC(sub_83A94020);
PPC_FUNC_IMPL(__imp__sub_83A94020) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r11,27264
	ctx.r3.s64 = ctx.r11.s64 + 27264;
	// bl 0x831ea7a0
	ctx.lr = 0x83A9403C;
	sub_831EA7A0(ctx, base);
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

__attribute__((alias("__imp__sub_83A94050"))) PPC_WEAK_FUNC(sub_83A94050);
PPC_FUNC_IMPL(__imp__sub_83A94050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,27264
	ctx.r10.s64 = ctx.r11.s64 + 27264;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A94060:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83a94088
	if (!cr6.eq) goto loc_83A94088;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a94060
	if (cr6.lt) goto loc_83A94060;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A94088:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A94094"))) PPC_WEAK_FUNC(sub_83A94094);
PPC_FUNC_IMPL(__imp__sub_83A94094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A94098"))) PPC_WEAK_FUNC(sub_83A94098);
PPC_FUNC_IMPL(__imp__sub_83A94098) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a940dc
	if (cr6.eq) goto loc_83A940DC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a940dc
	if (cr6.eq) goto loc_83A940DC;
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A940C8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83a940c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A940C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a940f4
	goto loc_83A940F4;
loc_83A940DC:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,19372
	ctx.r4.s64 = ctx.r11.s64 + 19372;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A940F0;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A940F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A94104"))) PPC_WEAK_FUNC(sub_83A94104);
PPC_FUNC_IMPL(__imp__sub_83A94104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A94108"))) PPC_WEAK_FUNC(sub_83A94108);
PPC_FUNC_IMPL(__imp__sub_83A94108) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	// divwu r5,r10,r11
	ctx.r5.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// mulli r6,r6,20
	ctx.r6.s64 = ctx.r6.s64 * 20;
	// mullw r8,r5,r8
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrldi r10,r6,32
	ctx.r10.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 + 180;
	// cmpld cr6,r11,r7
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, xer);
	// ble cr6,0x83a94184
	if (!cr6.gt) goto loc_83A94184;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19384
	ctx.r4.s64 = ctx.r11.s64 + 19384;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9417C;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a94188
	goto loc_83A94188;
loc_83A94184:
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_83A94188:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A94198"))) PPC_WEAK_FUNC(sub_83A94198);
PPC_FUNC_IMPL(__imp__sub_83A94198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A941A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a9426c
	if (cr6.eq) goto loc_83A9426C;
	// b 0x83a941d4
	goto loc_83A941D4;
loc_83A941BC:
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x83a941e4
	if (cr6.eq) goto loc_83A941E4;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// beq cr6,0x83a941e4
	if (cr6.eq) goto loc_83A941E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ac3120
	ctx.lr = 0x83A941D4;
	sub_83AC3120(ctx, base);
loc_83A941D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f8200
	ctx.lr = 0x83A941DC;
	sub_831F8200(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a941bc
	if (!cr0.eq) goto loc_83A941BC;
loc_83A941E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ac2990
	ctx.lr = 0x83A941EC;
	sub_83AC2990(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x83a94258
	goto loc_83A94258;
loc_83A941F4:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a94210
	if (!cr6.eq) goto loc_83A94210;
	// bl 0x83129970
	ctx.lr = 0x83A94208;
	sub_83129970(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// b 0x83a94238
	goto loc_83A94238;
loc_83A94210:
	// bl 0x83129970
	ctx.lr = 0x83A94214;
	sub_83129970(ctx, base);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129970
	ctx.lr = 0x83A94220;
	sub_83129970(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129970
	ctx.lr = 0x83A94230;
	sub_83129970(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_83A94238:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129970
	ctx.lr = 0x83A94240;
	sub_83129970(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// bl 0x83ac2990
	ctx.lr = 0x83A94258;
	sub_83AC2990(ctx, base);
loc_83A94258:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a941f4
	if (!cr0.eq) goto loc_83A941F4;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
	// stw r28,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r28.u32);
loc_83A9426C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A94274"))) PPC_WEAK_FUNC(sub_83A94274);
PPC_FUNC_IMPL(__imp__sub_83A94274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A94278"))) PPC_WEAK_FUNC(sub_83A94278);
PPC_FUNC_IMPL(__imp__sub_83A94278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A94280;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,8(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83a9440c
	if (cr6.eq) goto loc_83A9440C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f30,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-8312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8312);
	ctx.f31.f64 = double(temp.f32);
loc_83A942BC:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a942ec
	if (cr6.eq) goto loc_83A942EC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83a942dc
	if (!cr6.eq) goto loc_83A942DC;
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
loc_83A942DC:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_83A942EC:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83ac1d80
	ctx.lr = 0x83A942F8;
	sub_83AC1D80(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83a94354
	if (cr6.gt) goto loc_83A94354;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A94354:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// ble 0x83a94398
	if (!cr0.gt) goto loc_83A94398;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a94378
	if (!cr6.eq) goto loc_83A94378;
	// stw r31,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r31.u32);
	// b 0x83a94384
	goto loc_83A94384;
loc_83A94378:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_83A94384:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// b 0x83a94404
	goto loc_83A94404;
loc_83A94398:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83a943d4
	if (!cr6.lt) goto loc_83A943D4;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a943b4
	if (!cr6.eq) goto loc_83A943B4;
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// b 0x83a943c0
	goto loc_83A943C0;
loc_83A943B4:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_83A943C0:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// b 0x83a94404
	goto loc_83A94404;
loc_83A943D4:
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a943e8
	if (!cr6.eq) goto loc_83A943E8;
	// stw r31,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r31.u32);
	// b 0x83a943f4
	goto loc_83A943F4;
loc_83A943E8:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_83A943F4:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r31,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
loc_83A94404:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne 0x83a942bc
	if (!cr0.eq) goto loc_83A942BC;
loc_83A9440C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A94420"))) PPC_WEAK_FUNC(sub_83A94420);
PPC_FUNC_IMPL(__imp__sub_83A94420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A94428;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_83A94440:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a945e8
	if (cr6.eq) goto loc_83A945E8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bne cr6,0x83a94464
	if (!cr6.eq) goto loc_83A94464;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// b 0x83a94468
	goto loc_83A94468;
loc_83A94464:
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
loc_83A94468:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// beq cr6,0x83a945e8
	if (cr6.eq) goto loc_83A945E8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83ac2938
	ctx.lr = 0x83A94490;
	sub_83AC2938(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addic. r11,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bne 0x83a94440
	if (!cr0.eq) goto loc_83A94440;
	// b 0x83a945f0
	goto loc_83A945F0;
loc_83A944B0:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a945f0
	if (cr6.eq) goto loc_83A945F0;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x83a94514
	goto loc_83A94514;
loc_83A944C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83ac2990
	ctx.lr = 0x83A944D0;
	sub_83AC2990(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83a94584
	if (cr0.eq) goto loc_83A94584;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x83ac2938
	ctx.lr = 0x83A944F8;
	sub_83AC2938(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addic. r11,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// beq 0x83a945e8
	if (cr0.eq) goto loc_83A945E8;
loc_83A94514:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a944c8
	if (!cr6.eq) goto loc_83A944C8;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a94550
	if (cr6.eq) goto loc_83A94550;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// bne cr6,0x83a94540
	if (!cr6.eq) goto loc_83A94540;
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
loc_83A94540:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_83A94550:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a94564
	if (!cr6.eq) goto loc_83A94564;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x83a94570
	goto loc_83A94570;
loc_83A94564:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83A94570:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83a945e4
	goto loc_83A945E4;
loc_83A94584:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a945b4
	if (cr6.eq) goto loc_83A945B4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// bne cr6,0x83a945a4
	if (!cr6.eq) goto loc_83A945A4;
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
loc_83A945A4:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_83A945B4:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a945c8
	if (!cr6.eq) goto loc_83A945C8;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x83a945d4
	goto loc_83A945D4;
loc_83A945C8:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83A945D4:
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_83A945E4:
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
loc_83A945E8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x83a944b0
	if (!cr6.eq) goto loc_83A944B0;
loc_83A945F0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A945FC"))) PPC_WEAK_FUNC(sub_83A945FC);
PPC_FUNC_IMPL(__imp__sub_83A945FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A94600"))) PPC_WEAK_FUNC(sub_83A94600);
PPC_FUNC_IMPL(__imp__sub_83A94600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A94608;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// b 0x83a9462c
	goto loc_83A9462C;
loc_83A94618:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x83a94640
	if (cr6.eq) goto loc_83A94640;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83A9462C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a94618
	if (!cr6.eq) goto loc_83A94618;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A94638:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A94640:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a94198
	ctx.lr = 0x83A94648;
	sub_83A94198(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a94670
	if (!cr6.eq) goto loc_83A94670;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83a946b4
	if (!cr6.eq) goto loc_83A946B4;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x83a946b4
	goto loc_83A946B4;
loc_83A94670:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a946b4
	if (cr0.eq) goto loc_83A946B4;
loc_83A94678:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83a94690
	if (cr6.eq) goto loc_83A94690;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83a94678
	if (!cr0.eq) goto loc_83A94678;
loc_83A94690:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a946b4
	if (cr6.eq) goto loc_83A946B4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a946b4
	if (!cr6.eq) goto loc_83A946B4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83A946B4:
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x83a94638
	goto loc_83A94638;
}

__attribute__((alias("__imp__sub_83A946CC"))) PPC_WEAK_FUNC(sub_83A946CC);
PPC_FUNC_IMPL(__imp__sub_83A946CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A946D0"))) PPC_WEAK_FUNC(sub_83A946D0);
PPC_FUNC_IMPL(__imp__sub_83A946D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A946D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,72(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r30,64(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83a94734
	if (!cr6.gt) goto loc_83A94734;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
loc_83A94700:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83a94720
	if (cr6.eq) goto loc_83A94720;
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, xer);
	// bge cr6,0x83a94720
	if (!cr6.lt) goto loc_83A94720;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83ac2448
	ctx.lr = 0x83A9471C;
	sub_83AC2448(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_83A94720:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x83a94700
	if (cr6.lt) goto loc_83A94700;
loc_83A94734:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r28,76(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a94784
	if (!cr6.gt) goto loc_83A94784;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r29,r10,r26
	ctx.r29.u64 = ctx.r10.u64 + ctx.r26.u64;
loc_83A94750:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83a94770
	if (cr6.eq) goto loc_83A94770;
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, xer);
	// bge cr6,0x83a94770
	if (!cr6.lt) goto loc_83A94770;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83ac2448
	ctx.lr = 0x83A9476C;
	sub_83AC2448(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_83A94770:
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x83a94750
	if (!cr0.eq) goto loc_83A94750;
loc_83A94784:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lwz r28,88(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a947d4
	if (!cr6.gt) goto loc_83A947D4;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r29,r10,r26
	ctx.r29.u64 = ctx.r10.u64 + ctx.r26.u64;
loc_83A947A0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83a947c0
	if (cr6.eq) goto loc_83A947C0;
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, xer);
	// bge cr6,0x83a947c0
	if (!cr6.lt) goto loc_83A947C0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83ac2448
	ctx.lr = 0x83A947BC;
	sub_83AC2448(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_83A947C0:
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x83a947a0
	if (!cr0.eq) goto loc_83A947A0;
loc_83A947D4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x83a947e4
	if (!cr6.eq) goto loc_83A947E4;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83a947f0
	if (!cr6.gt) goto loc_83A947F0;
loc_83A947E4:
	// cmpw cr6,r25,r31
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r31.s32, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// blt cr6,0x83a947f4
	if (cr6.lt) goto loc_83A947F4;
loc_83A947F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A947F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A947FC"))) PPC_WEAK_FUNC(sub_83A947FC);
PPC_FUNC_IMPL(__imp__sub_83A947FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A94800"))) PPC_WEAK_FUNC(sub_83A94800);
PPC_FUNC_IMPL(__imp__sub_83A94800) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwa r11,8(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 8));
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x83a79988
	ctx.lr = 0x83A9483C;
	sub_83A79988(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x83a94858
	if (!cr6.lt) goto loc_83A94858;
loc_83A94850:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a94994
	goto loc_83A94994;
loc_83A94858:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// bgt cr6,0x83a9487c
	if (cr6.gt) goto loc_83A9487C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,19724
	ctx.r4.s64 = ctx.r11.s64 + 19724;
loc_83A94870:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea410
	ctx.lr = 0x83A94878;
	sub_831EA410(ctx, base);
	// b 0x83a94850
	goto loc_83A94850;
loc_83A9487C:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// bgt cr6,0x83a94898
	if (cr6.gt) goto loc_83A94898;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,19672
	ctx.r4.s64 = ctx.r11.s64 + 19672;
	// b 0x83a94870
	goto loc_83A94870;
loc_83A94898:
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bge cr6,0x83a948b8
	if (!cr6.lt) goto loc_83A948B8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,19592
	ctx.r4.s64 = ctx.r11.s64 + 19592;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea410
	ctx.lr = 0x83A948B8;
	sub_831EA410(ctx, base);
loc_83A948B8:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x83a948c8
	if (cr6.gt) goto loc_83A948C8;
	// li r10,2
	ctx.r10.s64 = 2;
loc_83A948C8:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,-27208(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27208);
	ctx.f0.f64 = double(temp.f32);
	// subf r9,r8,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r8.s64;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,32767
	xer.ca = ctx.r9.u32 <= 32767;
	ctx.r9.s64 = 32767 - ctx.r9.s64;
	// srawi r9,r9,15
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 15;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83a94940
	if (cr6.gt) goto loc_83A94940;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_83A94940:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r10,512
	ctx.r10.s64 = 512;
	// ori r11,r8,32768
	ctx.r11.u64 = ctx.r8.u64 | 32768;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x83a94108
	ctx.lr = 0x83A9496C;
	sub_83A94108(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a94990
	if (!cr6.gt) goto loc_83A94990;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19488
	ctx.r4.s64 = ctx.r11.s64 + 19488;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9498C;
	sub_831EA3F0(ctx, base);
	// b 0x83a94850
	goto loc_83A94850;
loc_83A94990:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A94994:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A949B0"))) PPC_WEAK_FUNC(sub_83A949B0);
PPC_FUNC_IMPL(__imp__sub_83A949B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a94a04
	if (!cr6.eq) goto loc_83A94A04;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r4,r4,48000
	ctx.r4.u64 = ctx.r4.u64 | 48000;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x83a89f60
	ctx.lr = 0x83A949E8;
	sub_83A89F60(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
loc_83A94A04:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a94a98
	if (!cr6.gt) goto loc_83A94A98;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a94a98
	if (!cr6.gt) goto loc_83A94A98;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x83a94a8c
	if (cr6.lt) goto loc_83A94A8C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83a94a8c
	if (cr6.lt) goto loc_83A94A8C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a94a54
	if (!cr6.eq) goto loc_83A94A54;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a94a50
	if (cr6.eq) goto loc_83A94A50;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,19820
	ctx.r4.s64 = ctx.r11.s64 + 19820;
	// b 0x83a94aa0
	goto loc_83A94AA0;
loc_83A94A50:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
loc_83A94A54:
	// ble cr6,0x83a94a6c
	if (!cr6.gt) goto loc_83A94A6C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83a94a6c
	if (cr6.gt) goto loc_83A94A6C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,19808
	ctx.r4.s64 = ctx.r11.s64 + 19808;
	// b 0x83a94aa0
	goto loc_83A94AA0;
loc_83A94A6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83a94800
	ctx.lr = 0x83A94A74;
	sub_83A94800(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a94aac
	if (cr0.eq) goto loc_83A94AAC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a94108
	ctx.lr = 0x83A94A84;
	sub_83A94108(ctx, base);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// b 0x83a94ab0
	goto loc_83A94AB0;
loc_83A94A8C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,19796
	ctx.r4.s64 = ctx.r11.s64 + 19796;
	// b 0x83a94aa0
	goto loc_83A94AA0;
loc_83A94A98:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,19784
	ctx.r4.s64 = ctx.r11.s64 + 19784;
loc_83A94AA0:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A94AAC;
	sub_831EA418(ctx, base);
loc_83A94AAC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A94AB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A94AC4"))) PPC_WEAK_FUNC(sub_83A94AC4);
PPC_FUNC_IMPL(__imp__sub_83A94AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A94AC8"))) PPC_WEAK_FUNC(sub_83A94AC8);
PPC_FUNC_IMPL(__imp__sub_83A94AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A94AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83A94AE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a94b28
	if (cr6.eq) goto loc_83A94B28;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83a94b00
	if (!cr6.eq) goto loc_83A94B00;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83A94B00:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x83a94b28
	if (cr6.eq) goto loc_83A94B28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83a94198
	ctx.lr = 0x83A94B24;
	sub_83A94198(ctx, base);
	// b 0x83a94ae0
	goto loc_83A94AE0;
loc_83A94B28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A94B30"))) PPC_WEAK_FUNC(sub_83A94B30);
PPC_FUNC_IMPL(__imp__sub_83A94B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a94be4
	if (cr0.eq) goto loc_83A94BE4;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,-11408(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11408);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f31,f0,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83a94278
	ctx.lr = 0x83A94BC4;
	sub_83A94278(ctx, base);
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a94278
	ctx.lr = 0x83A94BD4;
	sub_83A94278(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83a94278
	ctx.lr = 0x83A94BE4;
	sub_83A94278(ctx, base);
loc_83A94BE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A94BFC"))) PPC_WEAK_FUNC(sub_83A94BFC);
PPC_FUNC_IMPL(__imp__sub_83A94BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A94C00"))) PPC_WEAK_FUNC(sub_83A94C00);
PPC_FUNC_IMPL(__imp__sub_83A94C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A94C08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83a94c9c
	if (!cr6.eq) goto loc_83A94C9C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83A94C28:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a94d5c
	if (cr6.eq) goto loc_83A94D5C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// bne cr6,0x83a94c48
	if (!cr6.eq) goto loc_83A94C48;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_83A94C48:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// beq cr6,0x83a94d5c
	if (cr6.eq) goto loc_83A94D5C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a94c7c
	if (!cr6.eq) goto loc_83A94C7C;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x83a94c88
	goto loc_83A94C88;
loc_83A94C7C:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83A94C88:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83a94c28
	goto loc_83A94C28;
loc_83A94C9C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a94cb4
	if (!cr6.eq) goto loc_83A94CB4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a94cb4
	if (!cr6.eq) goto loc_83A94CB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a94d60
	goto loc_83A94D60;
loc_83A94CB4:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a94d5c
	if (cr6.eq) goto loc_83A94D5C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83A94CC8:
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a94420
	ctx.lr = 0x83A94CD8;
	sub_83A94420(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a94d48
	if (!cr6.eq) goto loc_83A94D48;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a94d18
	if (cr6.eq) goto loc_83A94D18;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// bne cr6,0x83a94d08
	if (!cr6.eq) goto loc_83A94D08;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_83A94D08:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_83A94D18:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a94d2c
	if (!cr6.eq) goto loc_83A94D2C;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x83a94d38
	goto loc_83A94D38;
loc_83A94D2C:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83A94D38:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83A94D48:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a94d5c
	if (cr6.eq) goto loc_83A94D5C;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a94cc8
	if (!cr6.eq) goto loc_83A94CC8;
loc_83A94D5C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A94D60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A94D68"))) PPC_WEAK_FUNC(sub_83A94D68);
PPC_FUNC_IMPL(__imp__sub_83A94D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A94D70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// ble cr6,0x83a94da0
	if (!cr6.gt) goto loc_83A94DA0;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bge cr6,0x83a94da0
	if (!cr6.lt) goto loc_83A94DA0;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,27264
	ctx.r11.s64 = ctx.r11.s64 + 27264;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x83a94da4
	goto loc_83A94DA4;
loc_83A94DA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A94DA4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a94dc8
	if (!cr6.eq) goto loc_83A94DC8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,19832
	ctx.r4.s64 = ctx.r11.s64 + 19832;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A94DC0;
	sub_831EA418(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a94df4
	goto loc_83A94DF4;
loc_83A94DC8:
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x83a75cd8
	ctx.lr = 0x83A94DD4;
	sub_83A75CD8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a946d0
	ctx.lr = 0x83A94DE4;
	sub_83A946D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x83a75d58
	ctx.lr = 0x83A94DF0;
	sub_83A75D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A94DF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A94DFC"))) PPC_WEAK_FUNC(sub_83A94DFC);
PPC_FUNC_IMPL(__imp__sub_83A94DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A94E00"))) PPC_WEAK_FUNC(sub_83A94E00);
PPC_FUNC_IMPL(__imp__sub_83A94E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A94E08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r3,88
	ctx.r4.s64 = ctx.r3.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a94ac8
	ctx.lr = 0x83A94E18;
	sub_83A94AC8(ctx, base);
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a94ac8
	ctx.lr = 0x83A94E24;
	sub_83A94AC8(ctx, base);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a94ac8
	ctx.lr = 0x83A94E30;
	sub_83A94AC8(ctx, base);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a94ac8
	ctx.lr = 0x83A94E3C;
	sub_83A94AC8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_83A94E40:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a94e84
	if (cr6.eq) goto loc_83A94E84;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bne cr6,0x83a94e64
	if (!cr6.eq) goto loc_83A94E64;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// b 0x83a94e68
	goto loc_83A94E68;
loc_83A94E64:
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
loc_83A94E68:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bne cr6,0x83a94e40
	if (!cr6.eq) goto loc_83A94E40;
loc_83A94E84:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a94eb8
	if (!cr6.gt) goto loc_83A94EB8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83A94E98:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x83A94EA4;
	sub_83102DB0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a94e98
	if (cr6.lt) goto loc_83A94E98;
loc_83A94EB8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a94ee4
	if (cr6.eq) goto loc_83A94EE4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83a94ee4
	if (!cr6.gt) goto loc_83A94EE4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_83A94ED8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a94ed8
	if (cr6.lt) goto loc_83A94ED8;
loc_83A94EE4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a94ef4
	if (cr6.eq) goto loc_83A94EF4;
	// bl 0x83a75c60
	ctx.lr = 0x83A94EF4;
	sub_83A75C60(ctx, base);
loc_83A94EF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A94EFC"))) PPC_WEAK_FUNC(sub_83A94EFC);
PPC_FUNC_IMPL(__imp__sub_83A94EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A94F00"))) PPC_WEAK_FUNC(sub_83A94F00);
PPC_FUNC_IMPL(__imp__sub_83A94F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x83a75cd8
	ctx.lr = 0x83A94F2C;
	sub_83A75CD8(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmsubs f13,f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f31.f64));
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A94F70;
	sub_83A75D58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A94F90"))) PPC_WEAK_FUNC(sub_83A94F90);
PPC_FUNC_IMPL(__imp__sub_83A94F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A94F98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83a94600
	ctx.lr = 0x83A94FC0;
	sub_83A94600(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a94ff0
	if (!cr0.eq) goto loc_83A94FF0;
	// addi r5,r31,76
	ctx.r5.s64 = ctx.r31.s64 + 76;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a94600
	ctx.lr = 0x83A94FD8;
	sub_83A94600(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a94ff0
	if (!cr0.eq) goto loc_83A94FF0;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a94600
	ctx.lr = 0x83A94FF0;
	sub_83A94600(ctx, base);
loc_83A94FF0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac1d80
	ctx.lr = 0x83A94FFC;
	sub_83AC1D80(ctx, base);
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// ble cr6,0x83a95040
	if (!cr6.gt) goto loc_83A95040;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// clrldi r10,r28,32
	ctx.r10.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmsubs f0,f13,f0,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f1.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x83a95048
	goto loc_83A95048;
loc_83A95040:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_83A95048:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// bne cr6,0x83a95064
	if (!cr6.eq) goto loc_83A95064;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// b 0x83a95074
	goto loc_83A95074;
loc_83A95064:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83A95074:
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x83a94b30
	ctx.lr = 0x83A9508C;
	sub_83A94B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a94c00
	ctx.lr = 0x83A95094;
	sub_83A94C00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9509C"))) PPC_WEAK_FUNC(sub_83A9509C);
PPC_FUNC_IMPL(__imp__sub_83A9509C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A950A0"))) PPC_WEAK_FUNC(sub_83A950A0);
PPC_FUNC_IMPL(__imp__sub_83A950A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A950A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,27264
	ctx.r29.s64 = ctx.r11.s64 + 27264;
loc_83A950B8:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// beq cr6,0x83a950f8
	if (cr6.eq) goto loc_83A950F8;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// bge cr6,0x83a950dc
	if (!cr6.lt) goto loc_83A950DC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stwx r9,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u32);
	// b 0x83a950e0
	goto loc_83A950E0;
loc_83A950DC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83A950E0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a950f8
	if (cr6.eq) goto loc_83A950F8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a94e00
	ctx.lr = 0x83A950F0;
	sub_83A94E00(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83a82de8
	ctx.lr = 0x83A950F8;
	sub_83A82DE8(ctx, base);
loc_83A950F8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// blt cr6,0x83a950b8
	if (cr6.lt) goto loc_83A950B8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

