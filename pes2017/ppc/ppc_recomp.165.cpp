#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82CBBC34"))) PPC_WEAK_FUNC(sub_82CBBC34);
PPC_FUNC_IMPL(__imp__sub_82CBBC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBBC38"))) PPC_WEAK_FUNC(sub_82CBBC38);
PPC_FUNC_IMPL(__imp__sub_82CBBC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CBBC40;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbbc70
	if (!cr6.eq) goto loc_82CBBC70;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c325e8
	ctx.lr = 0x82CBBC5C;
	sub_82C325E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83103100
	ctx.lr = 0x82CBBC70;
	sub_83103100(ctx, base);
loc_82CBBC70:
	// bl 0x82d86078
	ctx.lr = 0x82CBBC74;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbbd3c
	if (cr6.eq) goto loc_82CBBD3C;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da26b8
	ctx.lr = 0x82CBBC84;
	sub_82DA26B8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r28,15
	ctx.r28.s64 = 15;
loc_82CBBC94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82df1118
	ctx.lr = 0x82CBBC9C;
	sub_82DF1118(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x82cbbd04
	if (!cr6.lt) goto loc_82CBBD04;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// bl 0x82df1228
	ctx.lr = 0x82CBBCCC;
	sub_82DF1228(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbbcfc
	if (cr6.eq) goto loc_82CBBCFC;
	// addi r3,r27,96
	ctx.r3.s64 = ctx.r27.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cbbb50
	ctx.lr = 0x82CBBCE4;
	sub_82CBBB50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837e3e90
	ctx.lr = 0x82CBBCEC;
	sub_837E3E90(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,20
	cr6.compare<uint32_t>(ctx.r31.u32, 20, xer);
	// blt cr6,0x82cbbc94
	if (cr6.lt) goto loc_82CBBC94;
	// b 0x82cbbd04
	goto loc_82CBBD04;
loc_82CBBCFC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837e3e90
	ctx.lr = 0x82CBBD04;
	sub_837E3E90(ctx, base);
loc_82CBBD04:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// li r10,72
	ctx.r10.s64 = 72;
	// lwz r9,96(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// divw r5,r8,r10
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// bl 0x82d20f50
	ctx.lr = 0x82CBBD2C;
	sub_82D20F50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,132(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// bl 0x82d1eac0
	ctx.lr = 0x82CBBD3C;
	sub_82D1EAC0(ctx, base);
loc_82CBBD3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBBD48"))) PPC_WEAK_FUNC(sub_82CBBD48);
PPC_FUNC_IMPL(__imp__sub_82CBBD48) {
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
	// blt cr6,0x82cbbd70
	if (cr6.lt) goto loc_82CBBD70;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cbbd74
	goto loc_82CBBD74;
loc_82CBBD70:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CBBD74:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CBBD90;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbbda8
	if (cr6.eq) goto loc_82CBBDA8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cbb910
	ctx.lr = 0x82CBBDA4;
	sub_82CBB910(ctx, base);
	// b 0x82cbbdac
	goto loc_82CBBDAC;
loc_82CBBDA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBBDAC:
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

__attribute__((alias("__imp__sub_82CBBDC4"))) PPC_WEAK_FUNC(sub_82CBBDC4);
PPC_FUNC_IMPL(__imp__sub_82CBBDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBBDC8"))) PPC_WEAK_FUNC(sub_82CBBDC8);
PPC_FUNC_IMPL(__imp__sub_82CBBDC8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbbe0c
	if (cr6.eq) goto loc_82CBBE0C;
	// bl 0x82cbca20
	ctx.lr = 0x82CBBDF4;
	sub_82CBCA20(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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
loc_82CBBE0C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82CBBE24"))) PPC_WEAK_FUNC(sub_82CBBE24);
PPC_FUNC_IMPL(__imp__sub_82CBBE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBBE28"))) PPC_WEAK_FUNC(sub_82CBBE28);
PPC_FUNC_IMPL(__imp__sub_82CBBE28) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82cbbe60
	if (!cr6.eq) goto loc_82CBBE60;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cbbeb0
	goto loc_82CBBEB0;
loc_82CBBE60:
	// lis r11,744
	ctx.r11.s64 = 48758784;
	// ori r10,r11,47662
	ctx.r10.u64 = ctx.r11.u64 | 47662;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82cbbe7c
	if (!cr6.gt) goto loc_82CBBE7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82CBBE7C;
	sub_831CC150(ctx, base);
loc_82CBBE7C:
	// li r11,2
	ctx.r11.s64 = 2;
	// mulli r30,r4,88
	ctx.r30.s64 = ctx.r4.s64 * 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CBBE98;
	sub_82595718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82CBBEB0:
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

__attribute__((alias("__imp__sub_82CBBEC8"))) PPC_WEAK_FUNC(sub_82CBBEC8);
PPC_FUNC_IMPL(__imp__sub_82CBBEC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CBBED0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d26640
	ctx.lr = 0x82CBBEDC;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82CBBEE0;
	sub_82D25AB8(ctx, base);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cbbf3c
	if (cr0.eq) goto loc_82CBBF3C;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// ble cr6,0x82cbbf78
	if (!cr6.gt) goto loc_82CBBF78;
loc_82CBBF08:
	// lwzx r28,r29,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x831021a0
	ctx.lr = 0x82CBBF10;
	sub_831021A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83102a08
	ctx.lr = 0x82CBBF1C;
	sub_83102A08(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82cbbf08
	if (cr6.gt) goto loc_82CBBF08;
loc_82CBBF3C:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cbbf6c
	if (cr6.eq) goto loc_82CBBF6C;
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
	ctx.lr = 0x82CBBF64;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82CBBF6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CBBF78:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CBBF84;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CBBF84"))) PPC_WEAK_FUNC(sub_82CBBF84);
PPC_FUNC_IMPL(__imp__sub_82CBBF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBBF88"))) PPC_WEAK_FUNC(sub_82CBBF88);
PPC_FUNC_IMPL(__imp__sub_82CBBF88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CBBF90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,15
	ctx.r28.s64 = 15;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r3,668
	ctx.r31.s64 = ctx.r3.s64 + 668;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CBBFAC:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbbfcc
	if (cr6.lt) goto loc_82CBBFCC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CBBFCC;
	sub_825952B8(ctx, base);
loc_82CBBFCC:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bge 0x82cbbfac
	if (!cr0.lt) goto loc_82CBBFAC;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cbbff8
	if (cr6.eq) goto loc_82CBBFF8;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82CBBFF8;
	sub_825952B8(ctx, base);
loc_82CBBFF8:
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// stw r29,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r29.u32);
	// stw r29,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBC00C"))) PPC_WEAK_FUNC(sub_82CBC00C);
PPC_FUNC_IMPL(__imp__sub_82CBC00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBC010"))) PPC_WEAK_FUNC(sub_82CBC010);
PPC_FUNC_IMPL(__imp__sub_82CBC010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82CBC038:
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// stw r7,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r7.u32);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// stb r10,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// stb r10,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r10.u8);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// stw r8,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r8.u32);
	// stw r7,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r7.u32);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// stb r10,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r10.u8);
	// stb r10,148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 148, ctx.r10.u8);
	// stw r9,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r9.u32);
	// stw r8,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r8.u32);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// bdnz 0x82cbc038
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CBC038;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 668, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC0B4"))) PPC_WEAK_FUNC(sub_82CBC0B4);
PPC_FUNC_IMPL(__imp__sub_82CBC0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBC0B8"))) PPC_WEAK_FUNC(sub_82CBC0B8);
PPC_FUNC_IMPL(__imp__sub_82CBC0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CBC0C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x82CBC0D4;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82CBC0EC;
	sub_82D253F8(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,24464
	ctx.r8.s64 = ctx.r10.s64 + 24464;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x82d199d0
	ctx.lr = 0x82CBC124;
	sub_82D199D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBC130"))) PPC_WEAK_FUNC(sub_82CBC130);
PPC_FUNC_IMPL(__imp__sub_82CBC130) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbc1a4
	if (!cr6.eq) goto loc_82CBC1A4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cbc010
	ctx.lr = 0x82CBC158;
	sub_82CBC010(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBC170;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r9,30552
	ctx.r3.s64 = ctx.r9.s64 + 30552;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cbdb50
	ctx.lr = 0x82CBC184;
	sub_82CBDB50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbc19c
	if (cr6.eq) goto loc_82CBC19C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82CBC19C;
	sub_83103100(ctx, base);
loc_82CBC19C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cbbf88
	ctx.lr = 0x82CBC1A4;
	sub_82CBBF88(ctx, base);
loc_82CBC1A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBC1B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC1D8"))) PPC_WEAK_FUNC(sub_82CBC1D8);
PPC_FUNC_IMPL(__imp__sub_82CBC1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CBC1E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CBC210;
	sub_8259CB28(ctx, base);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// bl 0x8259cb28
	ctx.lr = 0x82CBC230;
	sub_8259CB28(ctx, base);
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// bl 0x8259cb28
	ctx.lr = 0x82CBC250;
	sub_8259CB28(ctx, base);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBC264"))) PPC_WEAK_FUNC(sub_82CBC264);
PPC_FUNC_IMPL(__imp__sub_82CBC264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBC268"))) PPC_WEAK_FUNC(sub_82CBC268);
PPC_FUNC_IMPL(__imp__sub_82CBC268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CBC270;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r4,r4,137
	ctx.r4.u64 = ctx.r4.u64 | 137;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CBC2A8;
	sub_82D042A8(ctx, base);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82CBC2CC;
	sub_8259CB28(ctx, base);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82CBC2EC;
	sub_8259CB28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CBC2FC;
	sub_82A69AD0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbc31c
	if (cr6.lt) goto loc_82CBC31C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CBC31C;
	sub_825952B8(ctx, base);
loc_82CBC31C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBC324"))) PPC_WEAK_FUNC(sub_82CBC324);
PPC_FUNC_IMPL(__imp__sub_82CBC324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBC328"))) PPC_WEAK_FUNC(sub_82CBC328);
PPC_FUNC_IMPL(__imp__sub_82CBC328) {
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
	// beq cr6,0x82cbc360
	if (cr6.eq) goto loc_82CBC360;
loc_82CBC34C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d636d8
	ctx.lr = 0x82CBC354;
	sub_82D636D8(ctx, base);
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82cbc34c
	if (!cr6.eq) goto loc_82CBC34C;
loc_82CBC360:
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

__attribute__((alias("__imp__sub_82CBC378"))) PPC_WEAK_FUNC(sub_82CBC378);
PPC_FUNC_IMPL(__imp__sub_82CBC378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CBC380;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,88
	ctx.r10.s64 = 88;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r4,r7,r10
	ctx.r4.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// bl 0x82cbbe28
	ctx.lr = 0x82CBC3B4;
	sub_82CBBE28(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82cbc3fc
	if (cr6.eq) goto loc_82CBC3FC;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x82cbc3f8
	if (cr6.eq) goto loc_82CBC3F8;
loc_82CBC3D4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cbc3e8
	if (cr6.eq) goto loc_82CBC3E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc1d8
	ctx.lr = 0x82CBC3E8;
	sub_82CBC1D8(ctx, base);
loc_82CBC3E8:
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cbc3d4
	if (!cr6.eq) goto loc_82CBC3D4;
loc_82CBC3F8:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_82CBC3FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBC408"))) PPC_WEAK_FUNC(sub_82CBC408);
PPC_FUNC_IMPL(__imp__sub_82CBC408) {
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
	// beq cr6,0x82cbc448
	if (cr6.eq) goto loc_82CBC448;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82cbc328
	ctx.lr = 0x82CBC434;
	sub_82CBC328(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CBC448;
	sub_825952B8(ctx, base);
loc_82CBC448:
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

__attribute__((alias("__imp__sub_82CBC46C"))) PPC_WEAK_FUNC(sub_82CBC46C);
PPC_FUNC_IMPL(__imp__sub_82CBC46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBC470"))) PPC_WEAK_FUNC(sub_82CBC470);
PPC_FUNC_IMPL(__imp__sub_82CBC470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CBC478;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,2376(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2376);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// bl 0x825add58
	ctx.lr = 0x82CBC494;
	sub_825ADD58(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82cbc378
	ctx.lr = 0x82CBC4A0;
	sub_82CBC378(ctx, base);
	// li r10,88
	ctx.r10.s64 = 88;
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r9,r27,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r27.s64;
	// divw. r28,r9,r10
	ctx.r28.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x82cbc4d4
	if (!cr0.eq) goto loc_82CBC4D4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82cbc408
	ctx.lr = 0x82CBC4C0;
	sub_82CBC408(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x838ae2a8
	ctx.lr = 0x82CBC4C8;
	sub_838AE2A8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CBC4D4:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82cbc528
	if (cr6.eq) goto loc_82CBC528;
	// addi r31,r27,28
	ctx.r31.s64 = ctx.r27.s64 + 28;
loc_82CBC4E4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbc4fc
	if (cr6.lt) goto loc_82CBC4FC;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82cbc500
	goto loc_82CBC500;
loc_82CBC4FC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82CBC500:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82CBC510;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82cbc590
	if (cr6.eq) goto loc_82CBC590;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// blt cr6,0x82cbc4e4
	if (cr6.lt) goto loc_82CBC4E4;
loc_82CBC528:
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82cbc554
	if (cr6.eq) goto loc_82CBC554;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cbc328
	ctx.lr = 0x82CBC544;
	sub_82CBC328(ctx, base);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82CBC554;
	sub_825952B8(ctx, base);
loc_82CBC554:
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cbc584
	if (cr6.eq) goto loc_82CBC584;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x838adab0
	ctx.lr = 0x82CBC574;
	sub_838ADAB0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82CBC584;
	sub_825952B8(ctx, base);
loc_82CBC584:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CBC590:
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cbc5ac
	if (cr6.lt) goto loc_82CBC5AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CBC5AC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d04340
	ctx.lr = 0x82CBC5B4;
	sub_82D04340(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82cbc5e4
	if (cr6.eq) goto loc_82CBC5E4;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cbc328
	ctx.lr = 0x82CBC5D4;
	sub_82CBC328(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82CBC5E4;
	sub_825952B8(ctx, base);
loc_82CBC5E4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cbc610
	if (cr6.eq) goto loc_82CBC610;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x838adab0
	ctx.lr = 0x82CBC600;
	sub_838ADAB0(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82CBC610;
	sub_825952B8(ctx, base);
loc_82CBC610:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBC61C"))) PPC_WEAK_FUNC(sub_82CBC61C);
PPC_FUNC_IMPL(__imp__sub_82CBC61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBC620"))) PPC_WEAK_FUNC(sub_82CBC620);
PPC_FUNC_IMPL(__imp__sub_82CBC620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CBC628;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// bne cr6,0x82cbc654
	if (!cr6.eq) goto loc_82CBC654;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82cbc470
	ctx.lr = 0x82CBC650;
	sub_82CBC470(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82CBC654:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbd270
	ctx.lr = 0x82CBC668;
	sub_82CBD270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBC670"))) PPC_WEAK_FUNC(sub_82CBC670);
PPC_FUNC_IMPL(__imp__sub_82CBC670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// bgt cr6,0x82cbc6f8
	if (cr6.gt) goto loc_82CBC6F8;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82cbc6f8
	if (cr6.eq) goto loc_82CBC6F8;
	// bdz 0x82cbc698
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CBC698;
	// bdz 0x82cbc6c0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CBC6C0;
	// bdz 0x82cbc6ac
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CBC6AC;
	// bdz 0x82cbc6d4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CBC6D4;
	// b 0x82cbc6e8
	goto loc_82CBC6E8;
loc_82CBC698:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-32612
	ctx.r11.s64 = ctx.r11.s64 + -32612;
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// b 0x82cfd3f8
	sub_82CFD3F8(ctx, base);
	return;
loc_82CBC6AC:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-32612
	ctx.r11.s64 = ctx.r11.s64 + -32612;
	// addi r3,r11,-76
	ctx.r3.s64 = ctx.r11.s64 + -76;
	// b 0x82cfcd88
	sub_82CFCD88(ctx, base);
	return;
loc_82CBC6C0:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-32612
	ctx.r11.s64 = ctx.r11.s64 + -32612;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// b 0x82cfbe30
	sub_82CFBE30(ctx, base);
	return;
loc_82CBC6D4:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-32612
	ctx.r11.s64 = ctx.r11.s64 + -32612;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// b 0x82cfba10
	sub_82CFBA10(ctx, base);
	return;
loc_82CBC6E8:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-32612
	ctx.r3.s64 = ctx.r11.s64 + -32612;
	// b 0x82cfb5e0
	sub_82CFB5E0(ctx, base);
	return;
loc_82CBC6F8:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-32612
	ctx.r11.s64 = ctx.r11.s64 + -32612;
	// addi r3,r11,-120
	ctx.r3.s64 = ctx.r11.s64 + -120;
	// b 0x82cfabd8
	sub_82CFABD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBC70C"))) PPC_WEAK_FUNC(sub_82CBC70C);
PPC_FUNC_IMPL(__imp__sub_82CBC70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBC710"))) PPC_WEAK_FUNC(sub_82CBC710);
PPC_FUNC_IMPL(__imp__sub_82CBC710) {
	PPC_FUNC_PROLOGUE();
	// stb r4,156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 156, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC718"))) PPC_WEAK_FUNC(sub_82CBC718);
PPC_FUNC_IMPL(__imp__sub_82CBC718) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,156(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC720"))) PPC_WEAK_FUNC(sub_82CBC720);
PPC_FUNC_IMPL(__imp__sub_82CBC720) {
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
	// bl 0x82d17e98
	ctx.lr = 0x82CBC738;
	sub_82D17E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbc75c
	if (!cr6.eq) goto loc_82CBC75C;
loc_82CBC744:
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
loc_82CBC75C:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbc744
	if (cr6.eq) goto loc_82CBC744;
	// bl 0x82d17e98
	ctx.lr = 0x82CBC76C;
	sub_82D17E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbc744
	if (cr6.eq) goto loc_82CBC744;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbc744
	if (cr6.eq) goto loc_82CBC744;
	// bl 0x82d17e98
	ctx.lr = 0x82CBC788;
	sub_82D17E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82CBC7A8"))) PPC_WEAK_FUNC(sub_82CBC7A8);
PPC_FUNC_IMPL(__imp__sub_82CBC7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r10,r10,20581
	ctx.r10.u64 = ctx.r10.u64 | 20581;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// bl 0x83103068
	ctx.lr = 0x82CBC7E0;
	sub_83103068(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC7F0"))) PPC_WEAK_FUNC(sub_82CBC7F0);
PPC_FUNC_IMPL(__imp__sub_82CBC7F0) {
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
	// lbz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbc828
	if (!cr6.eq) goto loc_82CBC828;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// bl 0x82d199d0
	ctx.lr = 0x82CBC818;
	sub_82D199D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CBC828:
	// bl 0x82d26ed8
	ctx.lr = 0x82CBC82C;
	sub_82D26ED8(ctx, base);
	// li r4,117
	ctx.r4.s64 = 117;
	// bl 0x82d26b30
	ctx.lr = 0x82CBC834;
	sub_82D26B30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC844"))) PPC_WEAK_FUNC(sub_82CBC844);
PPC_FUNC_IMPL(__imp__sub_82CBC844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBC848"))) PPC_WEAK_FUNC(sub_82CBC848);
PPC_FUNC_IMPL(__imp__sub_82CBC848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r10,r10,20582
	ctx.r10.u64 = ctx.r10.u64 | 20582;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// bl 0x83103068
	ctx.lr = 0x82CBC880;
	sub_83103068(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC890"))) PPC_WEAK_FUNC(sub_82CBC890);
PPC_FUNC_IMPL(__imp__sub_82CBC890) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// b 0x82d199d0
	sub_82D199D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBC8A0"))) PPC_WEAK_FUNC(sub_82CBC8A0);
PPC_FUNC_IMPL(__imp__sub_82CBC8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r10,r10,20583
	ctx.r10.u64 = ctx.r10.u64 | 20583;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// bl 0x83103068
	ctx.lr = 0x82CBC8D8;
	sub_83103068(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC8E8"))) PPC_WEAK_FUNC(sub_82CBC8E8);
PPC_FUNC_IMPL(__imp__sub_82CBC8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r10,r10,20584
	ctx.r10.u64 = ctx.r10.u64 | 20584;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// bl 0x83103068
	ctx.lr = 0x82CBC920;
	sub_83103068(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC930"))) PPC_WEAK_FUNC(sub_82CBC930);
PPC_FUNC_IMPL(__imp__sub_82CBC930) {
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
	// lbz r11,157(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbc958
	if (!cr6.eq) goto loc_82CBC958;
	// lbz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82cbc95c
	if (cr6.eq) goto loc_82CBC95C;
loc_82CBC958:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CBC95C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbc994
	if (cr6.eq) goto loc_82CBC994;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,20585
	ctx.r8.u64 = ctx.r10.u64 | 20585;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// bl 0x831036c0
	ctx.lr = 0x82CBC994;
	sub_831036C0(ctx, base);
loc_82CBC994:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC9A4"))) PPC_WEAK_FUNC(sub_82CBC9A4);
PPC_FUNC_IMPL(__imp__sub_82CBC9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBC9A8"))) PPC_WEAK_FUNC(sub_82CBC9A8);
PPC_FUNC_IMPL(__imp__sub_82CBC9A8) {
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
	// lbz r11,157(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbc9d0
	if (!cr6.eq) goto loc_82CBC9D0;
	// lbz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82cbc9d4
	if (cr6.eq) goto loc_82CBC9D4;
loc_82CBC9D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CBC9D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbca0c
	if (cr6.eq) goto loc_82CBCA0C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,20586
	ctx.r8.u64 = ctx.r10.u64 | 20586;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// bl 0x831036c0
	ctx.lr = 0x82CBCA0C;
	sub_831036C0(ctx, base);
loc_82CBCA0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBCA1C"))) PPC_WEAK_FUNC(sub_82CBCA1C);
PPC_FUNC_IMPL(__imp__sub_82CBCA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBCA20"))) PPC_WEAK_FUNC(sub_82CBCA20);
PPC_FUNC_IMPL(__imp__sub_82CBCA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
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
	// bl 0x82c38118
	ctx.lr = 0x82CBCA38;
	sub_82C38118(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r9,40
	ctx.r9.s64 = 40;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r7,r8,r9
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r9.s32);
	// subfc r6,r7,r3
	xer.ca = ctx.r3.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 & ctx.r3.u64;
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

__attribute__((alias("__imp__sub_82CBCA6C"))) PPC_WEAK_FUNC(sub_82CBCA6C);
PPC_FUNC_IMPL(__imp__sub_82CBCA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBCA70"))) PPC_WEAK_FUNC(sub_82CBCA70);
PPC_FUNC_IMPL(__imp__sub_82CBCA70) {
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
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82cbcae4
	if (cr6.eq) goto loc_82CBCAE4;
	// bl 0x82cbc720
	ctx.lr = 0x82CBCA94;
	sub_82CBC720(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbcae4
	if (!cr6.eq) goto loc_82CBCAE4;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82cbcad4
	if (cr6.eq) goto loc_82CBCAD4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82cbcac8
	if (cr6.eq) goto loc_82CBCAC8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82cbcadc
	if (!cr6.eq) goto loc_82CBCADC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbc8a0
	ctx.lr = 0x82CBCAC4;
	sub_82CBC8A0(ctx, base);
	// b 0x82cbcadc
	goto loc_82CBCADC;
loc_82CBCAC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbc848
	ctx.lr = 0x82CBCAD0;
	sub_82CBC848(ctx, base);
	// b 0x82cbcadc
	goto loc_82CBCADC;
loc_82CBCAD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbc7a8
	ctx.lr = 0x82CBCADC;
	sub_82CBC7A8(ctx, base);
loc_82CBCADC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
loc_82CBCAE4:
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

__attribute__((alias("__imp__sub_82CBCAF8"))) PPC_WEAK_FUNC(sub_82CBCAF8);
PPC_FUNC_IMPL(__imp__sub_82CBCAF8) {
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
	// lbz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbcb64
	if (!cr6.eq) goto loc_82CBCB64;
	// bl 0x82c38118
	ctx.lr = 0x82CBCB1C;
	sub_82C38118(ctx, base);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82cbcb70
	if (!cr6.eq) goto loc_82CBCB70;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82CBCB50;
	sub_82D199D0(ctx, base);
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
loc_82CBCB64:
	// bl 0x82d26ed8
	ctx.lr = 0x82CBCB68;
	sub_82D26ED8(ctx, base);
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x82d26b30
	ctx.lr = 0x82CBCB70;
	sub_82D26B30(ctx, base);
loc_82CBCB70:
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

__attribute__((alias("__imp__sub_82CBCB84"))) PPC_WEAK_FUNC(sub_82CBCB84);
PPC_FUNC_IMPL(__imp__sub_82CBCB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBCB88"))) PPC_WEAK_FUNC(sub_82CBCB88);
PPC_FUNC_IMPL(__imp__sub_82CBCB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CBCB90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// li r27,40
	ctx.r27.s64 = 40;
	// lwz r10,196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,192
	ctx.r30.s64 = ctx.r3.s64 + 192;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// divw. r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82cbcbfc
	if (cr0.eq) goto loc_82CBCBFC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CBCBBC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82c389c8
	ctx.lr = 0x82CBCBDC;
	sub_82C389C8(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r5,r6,r27
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r27.s32);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// blt cr6,0x82cbcbbc
	if (cr6.lt) goto loc_82CBCBBC;
loc_82CBCBFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBCC04"))) PPC_WEAK_FUNC(sub_82CBCC04);
PPC_FUNC_IMPL(__imp__sub_82CBCC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBCC08"))) PPC_WEAK_FUNC(sub_82CBCC08);
PPC_FUNC_IMPL(__imp__sub_82CBCC08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CBCC10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CBCC1C;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbcc90
	if (cr6.eq) goto loc_82CBCC90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d17e98
	ctx.lr = 0x82CBCC2C;
	sub_82D17E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbcc90
	if (cr6.eq) goto loc_82CBCC90;
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82d19a68
	ctx.lr = 0x82CBCC4C;
	sub_82D19A68(ctx, base);
	// bl 0x82d2aff8
	ctx.lr = 0x82CBCC50;
	sub_82D2AFF8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x82cbcc90
	if (cr6.eq) goto loc_82CBCC90;
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82d19a68
	ctx.lr = 0x82CBCC70;
	sub_82D19A68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CBCC7C;
	sub_82D2AEC8(ctx, base);
	// lbz r9,156(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r4,r8,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82c38170
	ctx.lr = 0x82CBCC90;
	sub_82C38170(ctx, base);
loc_82CBCC90:
	// lwz r3,160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbcd20
	if (cr6.eq) goto loc_82CBCD20;
	// bl 0x82d17e98
	ctx.lr = 0x82CBCCA0;
	sub_82D17E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbcd20
	if (cr6.eq) goto loc_82CBCD20;
	// lbz r11,157(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 157);
	// addi r29,r30,156
	ctx.r29.s64 = ctx.r30.s64 + 156;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbcccc
	if (!cr6.eq) goto loc_82CBCCCC;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbccd0
	if (cr6.eq) goto loc_82CBCCD0;
loc_82CBCCCC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CBCCD0:
	// lwz r3,160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// bl 0x82d19a68
	ctx.lr = 0x82CBCCD8;
	sub_82D19A68(ctx, base);
	// bl 0x82d2aff8
	ctx.lr = 0x82CBCCDC;
	sub_82D2AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82cbcd20
	if (cr6.eq) goto loc_82CBCD20;
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbcd08
	if (!cr6.eq) goto loc_82CBCD08;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbcd0c
	if (cr6.eq) goto loc_82CBCD0C;
loc_82CBCD08:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CBCD0C:
	// lwz r3,160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// bl 0x82d19a68
	ctx.lr = 0x82CBCD14;
	sub_82D19A68(ctx, base);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CBCD20;
	sub_82D2AEC8(ctx, base);
loc_82CBCD20:
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbcdb0
	if (cr6.eq) goto loc_82CBCDB0;
	// bl 0x82d17e98
	ctx.lr = 0x82CBCD30;
	sub_82D17E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbcdb0
	if (cr6.eq) goto loc_82CBCDB0;
	// lbz r11,157(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 157);
	// addi r29,r30,156
	ctx.r29.s64 = ctx.r30.s64 + 156;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbcd5c
	if (!cr6.eq) goto loc_82CBCD5C;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbcd60
	if (cr6.eq) goto loc_82CBCD60;
loc_82CBCD5C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CBCD60:
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x82d19a68
	ctx.lr = 0x82CBCD68;
	sub_82D19A68(ctx, base);
	// bl 0x82d2aff8
	ctx.lr = 0x82CBCD6C;
	sub_82D2AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82cbcdb0
	if (cr6.eq) goto loc_82CBCDB0;
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbcd98
	if (!cr6.eq) goto loc_82CBCD98;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbcd9c
	if (cr6.eq) goto loc_82CBCD9C;
loc_82CBCD98:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CBCD9C:
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x82d19a68
	ctx.lr = 0x82CBCDA4;
	sub_82D19A68(ctx, base);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CBCDB0;
	sub_82D2AEC8(ctx, base);
loc_82CBCDB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbca70
	ctx.lr = 0x82CBCDB8;
	sub_82CBCA70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBCDC4"))) PPC_WEAK_FUNC(sub_82CBCDC4);
PPC_FUNC_IMPL(__imp__sub_82CBCDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBCDC8"))) PPC_WEAK_FUNC(sub_82CBCDC8);
PPC_FUNC_IMPL(__imp__sub_82CBCDC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CBCDD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82cbce40
	if (!cr6.gt) goto loc_82CBCE40;
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82CBCDF4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbce0c
	if (cr6.lt) goto loc_82CBCE0C;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82cbce10
	goto loc_82CBCE10;
loc_82CBCE0C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82CBCE10:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82CBCE20;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82cbce2c
	if (!cr6.eq) goto loc_82CBCE2C;
	// stb r27,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r27.u8);
loc_82CBCE2C:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82cbcdf4
	if (cr6.lt) goto loc_82CBCDF4;
loc_82CBCE40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBCE48"))) PPC_WEAK_FUNC(sub_82CBCE48);
PPC_FUNC_IMPL(__imp__sub_82CBCE48) {
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
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r9,192(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82cbcea0
	if (cr0.eq) goto loc_82CBCEA0;
	// bl 0x82c38118
	ctx.lr = 0x82CBCE78;
	sub_82C38118(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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
loc_82CBCEA0:
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r31,r11,-760
	ctx.r31.s64 = ctx.r11.s64 + -760;
	// lwz r11,-720(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -720);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cbcf00
	if (!cr6.eq) goto loc_82CBCF00;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,-720(r8)
	PPC_STORE_U32(ctx.r8.u32 + -720, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r10,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r10.u8);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r3,r10,-4760
	ctx.r3.s64 = ctx.r10.s64 + -4760;
	// bl 0x831cdcc8
	ctx.lr = 0x82CBCF00;
	sub_831CDCC8(ctx, base);
loc_82CBCF00:
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

__attribute__((alias("__imp__sub_82CBCF18"))) PPC_WEAK_FUNC(sub_82CBCF18);
PPC_FUNC_IMPL(__imp__sub_82CBCF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CBCF20;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82cbcfe8
	if (cr0.eq) goto loc_82CBCFE8;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x82cbcfe8
	if (!cr6.gt) goto loc_82CBCFE8;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82cbc670
	ctx.lr = 0x82CBCF54;
	sub_82CBC670(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbcfe8
	if (cr6.eq) goto loc_82CBCFE8;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbcf84
	if (cr6.eq) goto loc_82CBCF84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBCF80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
loc_82CBCF84:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82CBCF90;
	sub_83103100(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r29,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbcfe8
	if (cr6.eq) goto loc_82CBCFE8;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,288(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CBCFC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d04220
	ctx.lr = 0x82CBCFD4;
	sub_82D04220(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x82cfe300
	ctx.lr = 0x82CBCFE0;
	sub_82CFE300(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CBCFE8;
	sub_8387E8E0(ctx, base);
loc_82CBCFE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBCFF0"))) PPC_WEAK_FUNC(sub_82CBCFF0);
PPC_FUNC_IMPL(__imp__sub_82CBCFF0) {
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
	// lbz r11,157(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbd018
	if (!cr6.eq) goto loc_82CBD018;
	// lbz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82cbd01c
	if (cr6.eq) goto loc_82CBD01C;
loc_82CBD018:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CBD01C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbd084
	if (cr6.eq) goto loc_82CBD084;
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// addi r11,r3,164
	ctx.r11.s64 = ctx.r3.s64 + 164;
	// lwz r9,168(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// blt cr6,0x82cbd090
	if (cr6.lt) goto loc_82CBD090;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// bge 0x82cbd06c
	if (!cr0.lt) goto loc_82CBD06C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r11,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r7.u32);
loc_82CBD06C:
	// lwz r4,180(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// bl 0x82cbcf18
	ctx.lr = 0x82CBD074;
	sub_82CBCF18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CBD084:
	// bl 0x82d26ed8
	ctx.lr = 0x82CBD088;
	sub_82D26ED8(ctx, base);
	// li r4,118
	ctx.r4.s64 = 118;
	// bl 0x82d26b30
	ctx.lr = 0x82CBD090;
	sub_82D26B30(ctx, base);
loc_82CBD090:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBD0A0"))) PPC_WEAK_FUNC(sub_82CBD0A0);
PPC_FUNC_IMPL(__imp__sub_82CBD0A0) {
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
	// lbz r11,157(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbd0c8
	if (!cr6.eq) goto loc_82CBD0C8;
	// lbz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82cbd0cc
	if (cr6.eq) goto loc_82CBD0CC;
loc_82CBD0C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CBD0CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbd138
	if (cr6.eq) goto loc_82CBD138;
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// addi r11,r3,164
	ctx.r11.s64 = ctx.r3.s64 + 164;
	// lwz r9,168(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// blt cr6,0x82cbd144
	if (cr6.lt) goto loc_82CBD144;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x82cbd120
	if (cr6.lt) goto loc_82CBD120;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
loc_82CBD120:
	// lwz r4,180(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// bl 0x82cbcf18
	ctx.lr = 0x82CBD128;
	sub_82CBCF18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CBD138:
	// bl 0x82d26ed8
	ctx.lr = 0x82CBD13C;
	sub_82D26ED8(ctx, base);
	// li r4,118
	ctx.r4.s64 = 118;
	// bl 0x82d26b30
	ctx.lr = 0x82CBD144;
	sub_82D26B30(ctx, base);
loc_82CBD144:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBD154"))) PPC_WEAK_FUNC(sub_82CBD154);
PPC_FUNC_IMPL(__imp__sub_82CBD154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBD158"))) PPC_WEAK_FUNC(sub_82CBD158);
PPC_FUNC_IMPL(__imp__sub_82CBD158) {
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
	// lwz r4,180(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cbcf18
	ctx.lr = 0x82CBD174;
	sub_82CBCF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcb88
	ctx.lr = 0x82CBD17C;
	sub_82CBCB88(ctx, base);
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

__attribute__((alias("__imp__sub_82CBD194"))) PPC_WEAK_FUNC(sub_82CBD194);
PPC_FUNC_IMPL(__imp__sub_82CBD194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBD198"))) PPC_WEAK_FUNC(sub_82CBD198);
PPC_FUNC_IMPL(__imp__sub_82CBD198) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CBD1D4;
	sub_8259CB28(ctx, base);
	// lbz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r9.u8);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82CBD208"))) PPC_WEAK_FUNC(sub_82CBD208);
PPC_FUNC_IMPL(__imp__sub_82CBD208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CBD210;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cbd264
	if (cr6.eq) goto loc_82CBD264;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CBD230:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbd24c
	if (cr6.lt) goto loc_82CBD24C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CBD24C;
	sub_825952B8(ctx, base);
loc_82CBD24C:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82cbd230
	if (!cr6.eq) goto loc_82CBD230;
loc_82CBD264:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBD26C"))) PPC_WEAK_FUNC(sub_82CBD26C);
PPC_FUNC_IMPL(__imp__sub_82CBD26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBD270"))) PPC_WEAK_FUNC(sub_82CBD270);
PPC_FUNC_IMPL(__imp__sub_82CBD270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CBD278;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cbd31c
	if (!cr6.lt) goto loc_82CBD31C;
	// cmpwi cr6,r5,16
	cr6.compare<int32_t>(ctx.r5.s32, 16, xer);
	// bge cr6,0x82cbd31c
	if (!cr6.lt) goto loc_82CBD31C;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// beq cr6,0x82cbd31c
	if (cr6.eq) goto loc_82CBD31C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x8259cb28
	ctx.lr = 0x82CBD2C8;
	sub_8259CB28(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r28,56(r9)
	PPC_STORE_U8(ctx.r9.u32 + 56, ctx.r28.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,64(r7)
	PPC_STORE_U32(ctx.r7.u32 + 64, ctx.r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
loc_82CBD31C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBD324"))) PPC_WEAK_FUNC(sub_82CBD324);
PPC_FUNC_IMPL(__imp__sub_82CBD324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBD328"))) PPC_WEAK_FUNC(sub_82CBD328);
PPC_FUNC_IMPL(__imp__sub_82CBD328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CBD330;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r25,r11,-712
	ctx.r25.s64 = ctx.r11.s64 + -712;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cbd42c
	if (!cr6.eq) goto loc_82CBD42C;
	// li r9,4
	ctx.r9.s64 = 4;
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// addi r11,r25,48
	ctx.r11.s64 = ctx.r25.s64 + 48;
	// stw r8,248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 248, ctx.r8.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82CBD370:
	// stw r10,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r10.u32);
	// stw r31,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r31.u32);
	// stb r31,-48(r11)
	PPC_STORE_U8(ctx.r11.u32 + -48, ctx.r31.u8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
	// stb r31,-20(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20, ctx.r31.u8);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stb r31,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r31.u8);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cbd3b0
	if (cr6.lt) goto loc_82CBD3B0;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82cbd3b4
	goto loc_82CBD3B4;
loc_82CBD3B0:
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
loc_82CBD3B4:
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r31,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r31.u32);
	// stb r31,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r31.u8);
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// stw r31,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r31.u32);
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cbd3e0
	if (cr6.lt) goto loc_82CBD3E0;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x82cbd3e4
	goto loc_82CBD3E4;
loc_82CBD3E0:
	// addi r9,r11,100
	ctx.r9.s64 = ctx.r11.s64 + 100;
loc_82CBD3E4:
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// stw r31,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r31.u32);
	// stb r31,132(r11)
	PPC_STORE_U8(ctx.r11.u32 + 132, ctx.r31.u8);
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// stw r31,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r31.u32);
	// lwz r9,180(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cbd410
	if (cr6.lt) goto loc_82CBD410;
	// lwz r9,160(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// b 0x82cbd414
	goto loc_82CBD414;
loc_82CBD410:
	// addi r9,r11,160
	ctx.r9.s64 = ctx.r11.s64 + 160;
loc_82CBD414:
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// bdnz 0x82cbd370
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CBD370;
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4656
	ctx.r3.s64 = ctx.r11.s64 + -4656;
	// bl 0x831cdcc8
	ctx.lr = 0x82CBD42C;
	sub_831CDCC8(ctx, base);
loc_82CBD42C:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82cbd4c8
	if (!cr6.gt) goto loc_82CBD4C8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r28,r26,20
	ctx.r28.s64 = ctx.r26.s64 + 20;
	// addi r30,r25,28
	ctx.r30.s64 = ctx.r25.s64 + 28;
	// addi r27,r11,32248
	ctx.r27.s64 = ctx.r11.s64 + 32248;
loc_82CBD448:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r29,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CBD458:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cbd458
	if (!cr6.eq) goto loc_82CBD458;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CBD47C;
	sub_8259CC28(ctx, base);
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CBD488:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cbd488
	if (!cr6.eq) goto loc_82CBD488;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CBD4AC;
	sub_8259CC28(ctx, base);
	// lwzu r11,40(r28)
	ea = 40 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82cbd448
	if (cr6.lt) goto loc_82CBD448;
loc_82CBD4C8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBD4D4"))) PPC_WEAK_FUNC(sub_82CBD4D4);
PPC_FUNC_IMPL(__imp__sub_82CBD4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBD4D8"))) PPC_WEAK_FUNC(sub_82CBD4D8);
PPC_FUNC_IMPL(__imp__sub_82CBD4D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CBD4E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cbd558
	if (cr6.eq) goto loc_82CBD558;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82CBD504:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82cbd544
	if (cr6.eq) goto loc_82CBD544;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CBD52C;
	sub_8259CB28(ctx, base);
	// lbz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -4);
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
loc_82CBD544:
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82cbd504
	if (!cr6.eq) goto loc_82CBD504;
loc_82CBD558:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBD564"))) PPC_WEAK_FUNC(sub_82CBD564);
PPC_FUNC_IMPL(__imp__sub_82CBD564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBD568"))) PPC_WEAK_FUNC(sub_82CBD568);
PPC_FUNC_IMPL(__imp__sub_82CBD568) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82cbd5bc
	if (cr0.eq) goto loc_82CBD5BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82cbd5d4
	if (!cr6.gt) goto loc_82CBD5D4;
loc_82CBD5A0:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpw cr6,r4,r7
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, xer);
	// beq cr6,0x82cbd5c4
	if (cr6.eq) goto loc_82CBD5C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82cbd5a0
	if (cr6.gt) goto loc_82CBD5A0;
loc_82CBD5BC:
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x835977d8
	ctx.lr = 0x82CBD5C4;
	sub_835977D8(ctx, base);
loc_82CBD5C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CBD5D4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CBD5E0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CBD5E0"))) PPC_WEAK_FUNC(sub_82CBD5E0);
PPC_FUNC_IMPL(__imp__sub_82CBD5E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CBD5E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1638
	ctx.r11.s64 = 107347968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,26214
	ctx.r10.u64 = ctx.r11.u64 | 26214;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82cbd60c
	if (!cr6.gt) goto loc_82CBD60C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82CBD60C;
	sub_831CC150(ctx, base);
loc_82CBD60C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,40
	ctx.r27.s64 = 40;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82cbd6c4
	if (!cr6.lt) goto loc_82CBD6C4;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82595718
	ctx.lr = 0x82CBD64C;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82cbd4d8
	ctx.lr = 0x82CBD670;
	sub_82CBD4D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r27,r10,r27
	ctx.r27.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	// beq cr6,0x82cbd6a4
	if (cr6.eq) goto loc_82CBD6A4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82cbd208
	ctx.lr = 0x82CBD694;
	sub_82CBD208(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CBD6A4;
	sub_825952B8(ctx, base);
loc_82CBD6A4:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82CBD6C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBD6CC"))) PPC_WEAK_FUNC(sub_82CBD6CC);
PPC_FUNC_IMPL(__imp__sub_82CBD6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBD6D0"))) PPC_WEAK_FUNC(sub_82CBD6D0);
PPC_FUNC_IMPL(__imp__sub_82CBD6D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CBD6D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-32504
	ctx.r9.s64 = ctx.r11.s64 + -32504;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r31,r3,192
	ctx.r31.s64 = ctx.r3.s64 + 192;
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbd72c
	if (cr6.eq) goto loc_82CBD72C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82cbd208
	ctx.lr = 0x82CBD71C;
	sub_82CBD208(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CBD72C;
	sub_825952B8(ctx, base);
loc_82CBD72C:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r4,164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cbd754
	if (cr6.eq) goto loc_82CBD754;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82CBD754;
	sub_825952B8(ctx, base);
loc_82CBD754:
	// stw r29,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r29.u32);
	// stw r29,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r29.u32);
	// bl 0x82c38c18
	ctx.lr = 0x82CBD768;
	sub_82C38C18(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBD770"))) PPC_WEAK_FUNC(sub_82CBD770);
PPC_FUNC_IMPL(__imp__sub_82CBD770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1638
	ctx.r10.s64 = 107347968;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,40
	ctx.r9.s64 = 40;
	// ori r8,r10,26214
	ctx.r8.u64 = ctx.r10.u64 | 26214;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82cbd7a4
	if (!cr6.lt) goto loc_82CBD7A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82CBD7A4:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r11,r6,r9
	ctx.r11.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82cbd7d4
	if (cr6.lt) goto loc_82CBD7D4;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82CBD7D4:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82cbd7e0
	if (!cr6.lt) goto loc_82CBD7E0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82CBD7E0:
	// b 0x82cbd5e0
	sub_82CBD5E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBD7E4"))) PPC_WEAK_FUNC(sub_82CBD7E4);
PPC_FUNC_IMPL(__imp__sub_82CBD7E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBD7E8"))) PPC_WEAK_FUNC(sub_82CBD7E8);
PPC_FUNC_IMPL(__imp__sub_82CBD7E8) {
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
	// bl 0x82cbd6d0
	ctx.lr = 0x82CBD808;
	sub_82CBD6D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbd820
	if (cr6.eq) goto loc_82CBD820;
	// bl 0x82416268
	ctx.lr = 0x82CBD81C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CBD820:
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

__attribute__((alias("__imp__sub_82CBD838"))) PPC_WEAK_FUNC(sub_82CBD838);
PPC_FUNC_IMPL(__imp__sub_82CBD838) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82cbd870
	if (!cr6.lt) goto loc_82CBD870;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82cbd874
	if (!cr6.gt) goto loc_82CBD874;
loc_82CBD870:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CBD874:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cbd8cc
	if (cr6.eq) goto loc_82CBD8CC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,40
	ctx.r9.s64 = 40;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82cbd8a8
	if (!cr6.eq) goto loc_82CBD8A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbd770
	ctx.lr = 0x82CBD8A8;
	sub_82CBD770(ctx, base);
loc_82CBD8A8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbd8f8
	if (cr6.eq) goto loc_82CBD8F8;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82cbd8f4
	goto loc_82CBD8F4;
loc_82CBD8CC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cbd8e4
	if (!cr6.eq) goto loc_82CBD8E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbd770
	ctx.lr = 0x82CBD8E4;
	sub_82CBD770(ctx, base);
loc_82CBD8E4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbd8f8
	if (cr6.eq) goto loc_82CBD8F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82CBD8F4:
	// bl 0x82cbd198
	ctx.lr = 0x82CBD8F8;
	sub_82CBD198(ctx, base);
loc_82CBD8F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82CBD91C"))) PPC_WEAK_FUNC(sub_82CBD91C);
PPC_FUNC_IMPL(__imp__sub_82CBD91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBD920"))) PPC_WEAK_FUNC(sub_82CBD920);
PPC_FUNC_IMPL(__imp__sub_82CBD920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CBD928;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,668(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 668);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r27,24(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82cbd328
	ctx.lr = 0x82CBD94C;
	sub_82CBD328(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x82c38d98
	ctx.lr = 0x82CBD968;
	sub_82C38D98(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-32504
	ctx.r9.s64 = ctx.r11.s64 + -32504;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r28.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r28,157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 157, ctx.r28.u8);
	// addi r25,r31,164
	ctx.r25.s64 = ctx.r31.s64 + 164;
	// stw r28,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r28.u32);
	// addi r24,r31,192
	ctx.r24.s64 = ctx.r31.s64 + 192;
	// stw r28,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r28.u32);
	// stw r28,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r28.u32);
	// stw r28,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r28.u32);
	// stw r28,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
	// stw r28,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r28.u32);
	// stw r28,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r28.u32);
	// stw r28,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r28.u32);
	// stw r28,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r28.u32);
	// bl 0x82d17e60
	ctx.lr = 0x82CBD9C4;
	sub_82D17E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d195d8
	ctx.lr = 0x82CBD9D0;
	sub_82D195D8(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// bne cr6,0x82cbd9ec
	if (!cr6.eq) goto loc_82CBD9EC;
	// bl 0x8308e078
	ctx.lr = 0x82CBD9E0;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82CBD9EC;
	sub_82D195D8(ctx, base);
loc_82CBD9EC:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,5872
	ctx.r29.s64 = ctx.r11.s64 + 5872;
	// lwz r4,5872(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5872);
	// bl 0x82d20ae0
	ctx.lr = 0x82CBDA00;
	sub_82D20AE0(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82cbda1c
	if (!cr6.eq) goto loc_82CBDA1C;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x82cbda20
	goto loc_82CBDA20;
loc_82CBDA1C:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82CBDA20:
	// bl 0x82d23390
	ctx.lr = 0x82CBDA24;
	sub_82D23390(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82cbda80
	if (cr0.eq) goto loc_82CBDA80;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// ble cr6,0x82cbdb40
	if (!cr6.gt) goto loc_82CBDB40;
loc_82CBDA4C:
	// lwzx r11,r26,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x82CBDA60;
	sub_835977D8(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r11,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82cbda4c
	if (cr6.gt) goto loc_82CBDA4C;
loc_82CBDA80:
	// li r10,2
	ctx.r10.s64 = 2;
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// li r8,-1
	ctx.r8.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// subfze r6,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r6.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r7,-32764
	ctx.r3.s64 = ctx.r7.s64 + -32764;
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82cfe288
	ctx.lr = 0x82CBDAB0;
	sub_82CFE288(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r5.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x83103100
	ctx.lr = 0x82CBDAC4;
	sub_83103100(ctx, base);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ble cr6,0x82cbdaf4
	if (!cr6.gt) goto loc_82CBDAF4;
	// addi r29,r30,28
	ctx.r29.s64 = ctx.r30.s64 + 28;
loc_82CBDAD4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82cbd838
	ctx.lr = 0x82CBDAE0;
	sub_82CBD838(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x82cbdad4
	if (cr6.lt) goto loc_82CBDAD4;
loc_82CBDAF4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CBDB04;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CBDB14;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CBDB24;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CBDB34;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82CBDB40:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CBDB4C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CBDB4C"))) PPC_WEAK_FUNC(sub_82CBDB4C);
PPC_FUNC_IMPL(__imp__sub_82CBDB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBDB50"))) PPC_WEAK_FUNC(sub_82CBDB50);
PPC_FUNC_IMPL(__imp__sub_82CBDB50) {
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
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CBDB7C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbdbac
	if (cr6.eq) goto loc_82CBDBAC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,32756
	ctx.r4.s64 = ctx.r11.s64 + 32756;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82cbd920
	ctx.lr = 0x82CBDB98;
	sub_82CBD920(ctx, base);
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
loc_82CBDBAC:
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

__attribute__((alias("__imp__sub_82CBDBC4"))) PPC_WEAK_FUNC(sub_82CBDBC4);
PPC_FUNC_IMPL(__imp__sub_82CBDBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBDBC8"))) PPC_WEAK_FUNC(sub_82CBDBC8);
PPC_FUNC_IMPL(__imp__sub_82CBDBC8) {
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
	// bl 0x831156e8
	ctx.lr = 0x82CBDBE0;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312ae08
	ctx.lr = 0x82CBDBEC;
	sub_8312AE08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbdc94
	if (cr6.eq) goto loc_82CBDC94;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r31,r11,35265
	ctx.r31.u64 = ctx.r11.u64 | 35265;
loc_82CBDC04:
	// bl 0x831156e8
	ctx.lr = 0x82CBDC08;
	sub_831156E8(ctx, base);
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82cbdc1c
	if (cr6.lt) goto loc_82CBDC1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82cbdc7c
	goto loc_82CBDC7C;
loc_82CBDC1C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82cbdc38
	if (cr6.lt) goto loc_82CBDC38;
	// bne cr6,0x82cbdc3c
	if (!cr6.eq) goto loc_82CBDC3C;
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x82cbdc3c
	goto loc_82CBDC3C;
loc_82CBDC38:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82CBDC3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82CBDC48:
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bne cr6,0x82cbdc60
	if (!cr6.eq) goto loc_82CBDC60;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
loc_82CBDC60:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x82cbdc48
	if (cr6.lt) goto loc_82CBDC48;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82CBDC7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bgt cr6,0x82cbdcb0
	if (cr6.gt) goto loc_82CBDCB0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82cbdc04
	if (cr6.lt) goto loc_82CBDC04;
loc_82CBDC94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CBDC98:
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
loc_82CBDCB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cbdc98
	goto loc_82CBDC98;
}

__attribute__((alias("__imp__sub_82CBDCB8"))) PPC_WEAK_FUNC(sub_82CBDCB8);
PPC_FUNC_IMPL(__imp__sub_82CBDCB8) {
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
	// bl 0x82d26640
	ctx.lr = 0x82CBDCD0;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82CBDCD4;
	sub_82D25AB8(ctx, base);
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbdcf4
	if (cr6.eq) goto loc_82CBDCF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBDCF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CBDCF4:
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

__attribute__((alias("__imp__sub_82CBDD0C"))) PPC_WEAK_FUNC(sub_82CBDD0C);
PPC_FUNC_IMPL(__imp__sub_82CBDD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBDD10"))) PPC_WEAK_FUNC(sub_82CBDD10);
PPC_FUNC_IMPL(__imp__sub_82CBDD10) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82CBDD38;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbdd60
	if (cr6.eq) goto loc_82CBDD60;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82CBDD50;
	sub_82D19AA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82CBDD60;
	sub_82D2B608(ctx, base);
loc_82CBDD60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CBDD68;
	sub_82D1C1A8(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x82cbdd80
	if (cr6.eq) goto loc_82CBDD80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CBDD78;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82cbde18
	if (!cr6.eq) goto loc_82CBDE18;
loc_82CBDD80:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82CBDD8C;
	sub_82D19A88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbde18
	if (cr6.eq) goto loc_82CBDE18;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d19a88
	ctx.lr = 0x82CBDDA4;
	sub_82D19A88(ctx, base);
	// bl 0x82d33c10
	ctx.lr = 0x82CBDDA8;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbde18
	if (cr6.eq) goto loc_82CBDE18;
loc_82CBDDB0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82CBDDC0;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbddd8
	if (cr6.eq) goto loc_82CBDDD8;
	// bl 0x82d2b038
	ctx.lr = 0x82CBDDCC;
	sub_82D2B038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbddf8
	if (!cr6.eq) goto loc_82CBDDF8;
loc_82CBDDD8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82d19a88
	ctx.lr = 0x82CBDDE8;
	sub_82D19A88(ctx, base);
	// bl 0x82d33c10
	ctx.lr = 0x82CBDDEC;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x82cbddb0
	if (cr6.lt) goto loc_82CBDDB0;
	// b 0x82cbde18
	goto loc_82CBDE18;
loc_82CBDDF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82CBDE18;
	sub_82D1EBF8(ctx, base);
loc_82CBDE18:
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

__attribute__((alias("__imp__sub_82CBDE30"))) PPC_WEAK_FUNC(sub_82CBDE30);
PPC_FUNC_IMPL(__imp__sub_82CBDE30) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d198d0
	sub_82D198D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBDE38"))) PPC_WEAK_FUNC(sub_82CBDE38);
PPC_FUNC_IMPL(__imp__sub_82CBDE38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CBDE40;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r27,28
	ctx.r27.s64 = 28;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r28,r3,128
	ctx.r28.s64 = ctx.r3.s64 + 128;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// divw. r10,r9,r27
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cbded0
	if (cr0.eq) goto loc_82CBDED0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// ble cr6,0x82cbdf08
	if (!cr6.gt) goto loc_82CBDF08;
loc_82CBDE7C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cbde98
	if (cr6.lt) goto loc_82CBDE98;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82cbde9c
	goto loc_82CBDE9C;
loc_82CBDE98:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82CBDE9C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x82CBDEA8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82cbdf14
	if (cr6.eq) goto loc_82CBDF14;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r27
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82cbde7c
	if (cr6.gt) goto loc_82CBDE7C;
loc_82CBDED0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbdef0
	if (cr6.lt) goto loc_82CBDEF0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82CBDEE8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CBDEF0;
	sub_825952B8(ctx, base);
loc_82CBDEF0:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r25,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r25.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82CBDF08:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CBDF14;
	sub_831CC188(ctx, base);
loc_82CBDF14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cbdd10
	ctx.lr = 0x82CBDF20;
	sub_82CBDD10(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbdef0
	if (cr6.lt) goto loc_82CBDEF0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82cbdee8
	goto loc_82CBDEE8;
}

__attribute__((alias("__imp__sub_82CBDF3C"))) PPC_WEAK_FUNC(sub_82CBDF3C);
PPC_FUNC_IMPL(__imp__sub_82CBDF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBDF40"))) PPC_WEAK_FUNC(sub_82CBDF40);
PPC_FUNC_IMPL(__imp__sub_82CBDF40) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lwz r11,2376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2376);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82cbdf84
	if (cr6.lt) goto loc_82CBDF84;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CBDF84:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d04340
	ctx.lr = 0x82CBDF8C;
	sub_82D04340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04220
	ctx.lr = 0x82CBDF98;
	sub_82D04220(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CBDFA0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d510
	ctx.lr = 0x82CBDFB0;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbdfd4
	if (cr6.eq) goto loc_82CBDFD4;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cbdfcc
	if (!cr6.lt) goto loc_82CBDFCC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CBDFCC:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d30138
	ctx.lr = 0x82CBDFD4;
	sub_82D30138(ctx, base);
loc_82CBDFD4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbdff4
	if (cr6.lt) goto loc_82CBDFF4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CBDFF4;
	sub_825952B8(ctx, base);
loc_82CBDFF4:
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

__attribute__((alias("__imp__sub_82CBE008"))) PPC_WEAK_FUNC(sub_82CBE008);
PPC_FUNC_IMPL(__imp__sub_82CBE008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CBE010;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x82CBE024;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82CBE03C;
	sub_82D253F8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,31944
	ctx.r9.s64 = ctx.r11.s64 + 31944;
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
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r28,r31,96
	ctx.r28.s64 = ctx.r31.s64 + 96;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stb r11,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r11.u8);
	// lwz r4,6152(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 6152);
	// bl 0x82d23390
	ctx.lr = 0x82CBE0A4;
	sub_82D23390(ctx, base);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r27,96(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r27,r4
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cbe0d4
	if (cr6.eq) goto loc_82CBE0D4;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x831ce420
	ctx.lr = 0x82CBE0CC;
	sub_831CE420(ctx, base);
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82CBE0D4:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cbe108
	if (cr6.eq) goto loc_82CBE108;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83915a50
	ctx.lr = 0x82CBE0F0;
	sub_83915A50(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82CBE104;
	sub_838ADAB0(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_82CBE108:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cbe13c
	if (cr6.eq) goto loc_82CBE13C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83915a50
	ctx.lr = 0x82CBE124;
	sub_83915A50(ctx, base);
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82CBE138;
	sub_838ADAB0(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_82CBE13C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBE148"))) PPC_WEAK_FUNC(sub_82CBE148);
PPC_FUNC_IMPL(__imp__sub_82CBE148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CBE150;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82d19e80
	ctx.lr = 0x82CBE164;
	sub_82D19E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cbc378
	ctx.lr = 0x82CBE170;
	sub_82CBC378(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82CBE17C;
	sub_82D19A88(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cbe1b8
	if (!cr6.eq) goto loc_82CBE1B8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cbc408
	ctx.lr = 0x82CBE190;
	sub_82CBC408(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbe1b0
	if (cr6.lt) goto loc_82CBE1B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CBE1B0;
	sub_825952B8(ctx, base);
loc_82CBE1B0:
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x82cbe26c
	goto loc_82CBE26C;
loc_82CBE1B8:
	// lwz r25,112(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r23,116(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmplw cr6,r25,r23
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, xer);
	// beq cr6,0x82cbe224
	if (cr6.eq) goto loc_82CBE224;
	// addi r31,r25,28
	ctx.r31.s64 = ctx.r25.s64 + 28;
loc_82CBE1D8:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbe1f0
	if (cr6.lt) goto loc_82CBE1F0;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82cbe1f4
	goto loc_82CBE1F4;
loc_82CBE1F0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82CBE1F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82CBE204;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82cbe284
	if (cr6.eq) goto loc_82CBE284;
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// bne cr6,0x82cbe1d8
	if (!cr6.eq) goto loc_82CBE1D8;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82CBE224:
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82cbe250
	if (cr6.eq) goto loc_82CBE250;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cbc328
	ctx.lr = 0x82CBE240;
	sub_82CBC328(ctx, base);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x82CBE250;
	sub_825952B8(ctx, base);
loc_82CBE250:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbe26c
	if (cr6.lt) goto loc_82CBE26C;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CBE26C;
	sub_825952B8(ctx, base);
loc_82CBE26C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r27,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r27.u32);
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// stb r27,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r27.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82CBE284:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82CBE294;
	sub_835977D8(ctx, base);
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(ctx.r26.s32, -1, xer);
	// bne cr6,0x82cbe2c8
	if (!cr6.eq) goto loc_82CBE2C8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cbe2bc
	if (cr6.lt) goto loc_82CBE2BC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CBE2BC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d04340
	ctx.lr = 0x82CBE2C4;
	sub_82D04340(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82CBE2C8:
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d04220
	ctx.lr = 0x82CBE2E4;
	sub_82D04220(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,128
	ctx.r3.s64 = ctx.r29.s64 + 128;
	// bl 0x8291fdc8
	ctx.lr = 0x82CBE2F0;
	sub_8291FDC8(ctx, base);
	// lwz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// blt cr6,0x82cbe308
	if (cr6.lt) goto loc_82CBE308;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,6160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6160);
	// b 0x82cbe318
	goto loc_82CBE318;
loc_82CBE308:
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,6160
	ctx.r8.s64 = ctx.r10.s64 + 6160;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_82CBE318:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82CBE320;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82cbe330
	if (!cr6.eq) goto loc_82CBE330;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82CBE330:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// addi r4,r11,-30044
	ctx.r4.s64 = ctx.r11.s64 + -30044;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82CBE350;
	sub_8259CC28(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CBE360;
	sub_82A69A28(ctx, base);
	// lwz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r10.u32);
	// blt cr6,0x82cbe38c
	if (cr6.lt) goto loc_82CBE38C;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82CBE38C;
	sub_825952B8(ctx, base);
loc_82CBE38C:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// beq cr6,0x82cbe3c0
	if (cr6.eq) goto loc_82CBE3C0;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cbc328
	ctx.lr = 0x82CBE3B0;
	sub_82CBC328(ctx, base);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82CBE3C0;
	sub_825952B8(ctx, base);
loc_82CBE3C0:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbe3dc
	if (cr6.lt) goto loc_82CBE3DC;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CBE3DC;
	sub_825952B8(ctx, base);
loc_82CBE3DC:
	// stw r30,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r30.u32);
	// stw r27,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r27.u32);
	// stb r27,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r27.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBE3F0"))) PPC_WEAK_FUNC(sub_82CBE3F0);
PPC_FUNC_IMPL(__imp__sub_82CBE3F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cbe408
	if (!cr6.eq) goto loc_82CBE408;
	// addic r11,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfe r3,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82CBE408:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82cbe418
	if (!cr6.eq) goto loc_82CBE418;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82CBE418:
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// lbz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// subf. r3,r10,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cbe440
	if (cr6.eq) goto loc_82CBE440;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
loc_82CBE440:
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBE450"))) PPC_WEAK_FUNC(sub_82CBE450);
PPC_FUNC_IMPL(__imp__sub_82CBE450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// blt cr6,0x82cbe464
	if (cr6.lt) goto loc_82CBE464;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CBE464:
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBE474"))) PPC_WEAK_FUNC(sub_82CBE474);
PPC_FUNC_IMPL(__imp__sub_82CBE474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBE478"))) PPC_WEAK_FUNC(sub_82CBE478);
PPC_FUNC_IMPL(__imp__sub_82CBE478) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lbz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82CBE4C8;
	sub_8259CB28(ctx, base);
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// lbz r7,48(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// stb r7,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r7.u8);
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82CBE4FC"))) PPC_WEAK_FUNC(sub_82CBE4FC);
PPC_FUNC_IMPL(__imp__sub_82CBE4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBE500"))) PPC_WEAK_FUNC(sub_82CBE500);
PPC_FUNC_IMPL(__imp__sub_82CBE500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82CBE508;
	__savegprlr_22(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-22864
	ctx.r10.s64 = ctx.r11.s64 + -22864;
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// bl 0x825b4da8
	ctx.lr = 0x82CBE53C;
	sub_825B4DA8(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cbe558
	if (!cr6.eq) goto loc_82CBE558;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_82CBE558:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CBE560;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r26,r10,5
	ctx.r26.s64 = ctx.r10.s64 + 327680;
	// addi r26,r26,14904
	ctx.r26.s64 = ctx.r26.s64 + 14904;
	// bl 0x82a225d0
	ctx.lr = 0x82CBE578;
	sub_82A225D0(ctx, base);
	// lis r9,5
	ctx.r9.s64 = 327680;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// ori r7,r9,8016
	ctx.r7.u64 = ctx.r9.u64 | 8016;
	// addi r6,r8,-22152
	ctx.r6.s64 = ctx.r8.s64 + -22152;
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// ldx r31,r3,r7
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r7.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r29,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r29.u8);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// bl 0x825a9cf0
	ctx.lr = 0x82CBE5AC;
	sub_825A9CF0(ctx, base);
	// lbz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82cbe5c0
	if (!cr6.eq) goto loc_82CBE5C0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a94f0
	ctx.lr = 0x82CBE5C0;
	sub_825A94F0(ctx, base);
loc_82CBE5C0:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cbe5dc
	if (!cr6.eq) goto loc_82CBE5DC;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
loc_82CBE5DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a16890
	ctx.lr = 0x82CBE5E4;
	sub_82A16890(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82CBE5FC;
	sub_825E0CF8(ctx, base);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cbe620
	if (cr6.eq) goto loc_82CBE620;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82CBE61C;
	sub_8353F3B8(ctx, base);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
loc_82CBE620:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r22,15
	ctx.r22.s64 = 15;
	// stb r29,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r29.u8);
	// li r23,-1
	ctx.r23.s64 = -1;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r22,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
loc_82CBE668:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r31,332(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82a225d0
	ctx.lr = 0x82CBE674;
	sub_82A225D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8291adc0
	ctx.lr = 0x82CBE680;
	sub_8291ADC0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bge cr6,0x82cbe78c
	if (!cr6.lt) goto loc_82CBE78C;
	// lbz r11,4076(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4076);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82cbe780
	if (cr6.eq) goto loc_82CBE780;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83123a08
	ctx.lr = 0x82CBE6AC;
	sub_83123A08(ctx, base);
	// lhz r11,808(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x82cbe6c4
	if (!cr6.lt) goto loc_82CBE6C4;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lbz r27,512(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
loc_82CBE6C4:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lfs f0,4148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83123ba8
	ctx.lr = 0x82CBE6E8;
	sub_83123BA8(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CBE6F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cbe6f0
	if (!cr6.eq) goto loc_82CBE6F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CBE714;
	sub_8259CC28(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// subf r9,r25,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r25.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r7.u8);
	// lwz r6,4088(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4088);
	// stw r6,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// lbz r5,4147(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4147);
	// stb r5,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r5.u8);
	// lbz r4,4147(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4147);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cbe74c
	if (cr6.eq) goto loc_82CBE74C;
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// b 0x82cbe754
	goto loc_82CBE754;
loc_82CBE74C:
	// lbz r11,4076(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4076);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
loc_82CBE754:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bge cr6,0x82cbe780
	if (!cr6.lt) goto loc_82CBE780;
	// mulli r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 * 56;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82cbe478
	ctx.lr = 0x82CBE774;
	sub_82CBE478(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82CBE780:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// blt cr6,0x82cbe668
	if (cr6.lt) goto loc_82CBE668;
loc_82CBE78C:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r6,r11,-7184
	ctx.r6.s64 = ctx.r11.s64 + -7184;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x831d88b0
	ctx.lr = 0x82CBE7A4;
	sub_831D88B0(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cbe7c4
	if (cr6.lt) goto loc_82CBE7C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CBE7C4;
	sub_825952B8(ctx, base);
loc_82CBE7C4:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r22,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// addi r6,r10,-16664
	ctx.r6.s64 = ctx.r10.s64 + -16664;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// and r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 & ctx.r11.u64;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// beq cr6,0x82cbe81c
	if (cr6.eq) goto loc_82CBE81C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cbe81c
	if (cr6.eq) goto loc_82CBE81C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8353f3b8
	ctx.lr = 0x82CBE814;
	sub_8353F3B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
loc_82CBE81C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// beq cr6,0x82cbe834
	if (cr6.eq) goto loc_82CBE834;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8353f3b8
	ctx.lr = 0x82CBE834;
	sub_8353F3B8(ctx, base);
loc_82CBE834:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBE83C"))) PPC_WEAK_FUNC(sub_82CBE83C);
PPC_FUNC_IMPL(__imp__sub_82CBE83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBE840"))) PPC_WEAK_FUNC(sub_82CBE840);
PPC_FUNC_IMPL(__imp__sub_82CBE840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CBE848;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,25
	ctx.r11.s64 = 25;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,13
	ctx.r8.s64 = 13;
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82CBE8C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CBE8CC;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CBE8D4;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbe900
	if (cr6.eq) goto loc_82CBE900;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cff698
	ctx.lr = 0x82CBE900;
	sub_82CFF698(ctx, base);
loc_82CBE900:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x82cbe8c4
	if (cr6.lt) goto loc_82CBE8C4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBE91C"))) PPC_WEAK_FUNC(sub_82CBE91C);
PPC_FUNC_IMPL(__imp__sub_82CBE91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBE920"))) PPC_WEAK_FUNC(sub_82CBE920);
PPC_FUNC_IMPL(__imp__sub_82CBE920) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,70
	ctx.r4.u64 = ctx.r4.u64 | 70;
	// b 0x82d04220
	sub_82D04220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBE930"))) PPC_WEAK_FUNC(sub_82CBE930);
PPC_FUNC_IMPL(__imp__sub_82CBE930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CBE938;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x82CBE964;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbe9bc
	if (cr6.eq) goto loc_82CBE9BC;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cfef68
	ctx.lr = 0x82CBE984;
	sub_82CFEF68(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27576
	ctx.r9.s64 = ctx.r11.s64 + -27576;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,6496(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 6496);
	// bl 0x82d23390
	ctx.lr = 0x82CBE9B0;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CBE9BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBE9C8"))) PPC_WEAK_FUNC(sub_82CBE9C8);
PPC_FUNC_IMPL(__imp__sub_82CBE9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBE9E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82CBE9F8"))) PPC_WEAK_FUNC(sub_82CBE9F8);
PPC_FUNC_IMPL(__imp__sub_82CBE9F8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,216
	ctx.r4.u64 = ctx.r4.u64 | 216;
	// b 0x82d04220
	sub_82D04220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBEA08"))) PPC_WEAK_FUNC(sub_82CBEA08);
PPC_FUNC_IMPL(__imp__sub_82CBEA08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CBEA10;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x82CBEA3C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbea94
	if (cr6.eq) goto loc_82CBEA94;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cfef68
	ctx.lr = 0x82CBEA5C;
	sub_82CFEF68(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26544
	ctx.r9.s64 = ctx.r11.s64 + -26544;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,6628(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 6628);
	// bl 0x82d23390
	ctx.lr = 0x82CBEA88;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CBEA94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBEAA0"))) PPC_WEAK_FUNC(sub_82CBEAA0);
PPC_FUNC_IMPL(__imp__sub_82CBEAA0) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27872
	ctx.r9.s64 = ctx.r11.s64 + -27872;
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
	// bl 0x82d25548
	ctx.lr = 0x82CBEAD8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cbeaf0
	if (cr6.eq) goto loc_82CBEAF0;
	// bl 0x82416268
	ctx.lr = 0x82CBEAEC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CBEAF0:
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

__attribute__((alias("__imp__sub_82CBEB08"))) PPC_WEAK_FUNC(sub_82CBEB08);
PPC_FUNC_IMPL(__imp__sub_82CBEB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CBEB10;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CBEB1C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CBEB24;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbed78
	if (cr6.eq) goto loc_82CBED78;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83767d18
	ctx.lr = 0x82CBEB38;
	sub_83767D18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x835410b8
	ctx.lr = 0x82CBEB44;
	sub_835410B8(ctx, base);
	// lis r31,-31776
	ctx.r31.s64 = -2082471936;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,6656(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6656);
	// bl 0x837b0c10
	ctx.lr = 0x82CBEB58;
	sub_837B0C10(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,18392(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18392);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CBEB64:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cbeb64
	if (!cr6.eq) goto loc_82CBEB64;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82CBEB88;
	sub_825A1EB8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,6656(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6656);
	// bl 0x837b0c10
	ctx.lr = 0x82CBEB94;
	sub_837B0C10(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r4,18396(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18396);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CBEBA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cbeba0
	if (!cr6.eq) goto loc_82CBEBA0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82CBEBC4;
	sub_825A1EB8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cbebd8
	if (!cr6.lt) goto loc_82CBEBD8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82CBEBD8:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBEBF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbec04
	if (cr6.eq) goto loc_82CBEC04;
	// lis r4,561
	ctx.r4.s64 = 36765696;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x82d29598
	ctx.lr = 0x82CBEC04;
	sub_82D29598(ctx, base);
loc_82CBEC04:
	// addi r10,r1,93
	ctx.r10.s64 = ctx.r1.s64 + 93;
	// addi r9,r1,89
	ctx.r9.s64 = ctx.r1.s64 + 89;
	// addi r8,r1,85
	ctx.r8.s64 = ctx.r1.s64 + 85;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// addi r30,r11,-27230
	ctx.r30.s64 = ctx.r11.s64 + -27230;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r30,498
	ctx.r5.s64 = ctx.r30.s64 + 498;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r31.u8);
	// stb r31,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r31.u8);
	// stb r31,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r31.u8);
	// stb r31,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r31.u8);
	// lbz r6,2(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// bl 0x831d0b08
	ctx.lr = 0x82CBEC64;
	sub_831D0B08(ctx, base);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r30,506
	ctx.r5.s64 = ctx.r30.s64 + 506;
	// li r4,3
	ctx.r4.s64 = 3;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831d0b08
	ctx.lr = 0x82CBEC7C;
	sub_831D0B08(ctx, base);
	// addi r5,r30,514
	ctx.r5.s64 = ctx.r30.s64 + 514;
	// li r4,3
	ctx.r4.s64 = 3;
	// lbz r6,2(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831d0b08
	ctx.lr = 0x82CBEC90;
	sub_831D0B08(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r30,522
	ctx.r5.s64 = ctx.r30.s64 + 522;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x831d0b08
	ctx.lr = 0x82CBECA8;
	sub_831D0B08(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cbecbc
	if (!cr6.lt) goto loc_82CBECBC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82CBECBC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBECD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbed2c
	if (cr6.eq) goto loc_82CBED2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82CBECE8;
	sub_837B0C10(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lhz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lhz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// ori r4,r4,565
	ctx.r4.u64 = ctx.r4.u64 | 565;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d042a8
	ctx.lr = 0x82CBED10;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CBED24;
	sub_82D291E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82CBED2C;
	sub_8387E8E0(ctx, base);
loc_82CBED2C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbed4c
	if (cr6.lt) goto loc_82CBED4C;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82CBED4C;
	sub_825952B8(ctx, base);
loc_82CBED4C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x82cbed78
	if (cr6.lt) goto loc_82CBED78;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82CBED78;
	sub_825952B8(ctx, base);
loc_82CBED78:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBED80"))) PPC_WEAK_FUNC(sub_82CBED80);
PPC_FUNC_IMPL(__imp__sub_82CBED80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82CBED88;
	__savegprlr_21(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CBED94;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82CBED9C;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbf094
	if (cr6.eq) goto loc_82CBF094;
	// lis r31,-31776
	ctx.r31.s64 = -2082471936;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,6660(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6660);
	// bl 0x837b0c10
	ctx.lr = 0x82CBEDB8;
	sub_837B0C10(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,18392(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18392);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CBEDC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cbedc4
	if (!cr6.eq) goto loc_82CBEDC4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82CBEDE8;
	sub_825A1EB8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,6660(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6660);
	// bl 0x837b0c10
	ctx.lr = 0x82CBEDF4;
	sub_837B0C10(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r4,18396(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18396);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CBEE00:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cbee00
	if (!cr6.eq) goto loc_82CBEE00;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82CBEE24;
	sub_825A1EB8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cbee38
	if (!cr6.lt) goto loc_82CBEE38;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_82CBEE38:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r25,r30,100
	ctx.r25.s64 = ctx.r30.s64 + 100;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBEE50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbee64
	if (cr6.eq) goto loc_82CBEE64;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,566
	ctx.r4.u64 = ctx.r4.u64 | 566;
	// bl 0x82d29598
	ctx.lr = 0x82CBEE64;
	sub_82D29598(ctx, base);
loc_82CBEE64:
	// lwz r3,96(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// bl 0x831299d0
	ctx.lr = 0x82CBEE6C;
	sub_831299D0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbef90
	if (cr6.eq) goto loc_82CBEF90;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r28,4
	ctx.r28.s64 = 4;
loc_82CBEE94:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,96(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// bl 0x83129b28
	ctx.lr = 0x82CBEEA0;
	sub_83129B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83129788
	ctx.lr = 0x82CBEEA8;
	sub_83129788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbef7c
	if (cr6.eq) goto loc_82CBEF7C;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r3,96(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// bl 0x83102db0
	ctx.lr = 0x82CBEEC0;
	sub_83102DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129708
	ctx.lr = 0x82CBEED0;
	sub_83129708(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82cbeefc
	if (!cr6.eq) goto loc_82CBEEFC;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cbef00
	if (cr6.eq) goto loc_82CBEF00;
loc_82CBEEFC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82CBEF00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbef2c
	if (cr6.eq) goto loc_82CBEF2C;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x831297a0
	ctx.lr = 0x82CBEF24;
	sub_831297A0(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// b 0x82cbef44
	goto loc_82CBEF44;
loc_82CBEF2C:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x831297a0
	ctx.lr = 0x82CBEF40;
	sub_831297A0(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_82CBEF44:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831297a0
	ctx.lr = 0x82CBEF5C;
	sub_831297A0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// ble cr6,0x82cbef6c
	if (!cr6.gt) goto loc_82CBEF6C;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// b 0x82cbef7c
	goto loc_82CBEF7C;
loc_82CBEF6C:
	// bne cr6,0x82cbef78
	if (!cr6.eq) goto loc_82CBEF78;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// b 0x82cbef7c
	goto loc_82CBEF7C;
loc_82CBEF78:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_82CBEF7C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// blt cr6,0x82cbee94
	if (cr6.lt) goto loc_82CBEE94;
loc_82CBEF90:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cbefa4
	if (!cr6.lt) goto loc_82CBEFA4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82CBEFA4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBEFB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbf050
	if (cr6.eq) goto loc_82CBF050;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// addi r4,r11,-27229
	ctx.r4.s64 = ctx.r11.s64 + -27229;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82CBEFEC;
	sub_8259CC28(ctx, base);
	// lwz r3,96(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// bl 0x8312dce0
	ctx.lr = 0x82CBEFF4;
	sub_8312DCE0(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// ori r4,r4,567
	ctx.r4.u64 = ctx.r4.u64 | 567;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x82CBF014;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CBF028;
	sub_82D291E0(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cbf044
	if (cr6.lt) goto loc_82CBF044;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82CBF044;
	sub_825952B8(ctx, base);
loc_82CBF044:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
loc_82CBF050:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbf06c
	if (cr6.lt) goto loc_82CBF06C;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82CBF06C;
	sub_825952B8(ctx, base);
loc_82CBF06C:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// blt cr6,0x82cbf094
	if (cr6.lt) goto loc_82CBF094;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82CBF094;
	sub_825952B8(ctx, base);
loc_82CBF094:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBF09C"))) PPC_WEAK_FUNC(sub_82CBF09C);
PPC_FUNC_IMPL(__imp__sub_82CBF09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBF0A0"))) PPC_WEAK_FUNC(sub_82CBF0A0);
PPC_FUNC_IMPL(__imp__sub_82CBF0A0) {
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
	ctx.lr = 0x82CBF0A8;
	__savegprlr_14(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CBF0B4;
	sub_82D19A78(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82d33db0
	ctx.lr = 0x82CBF0BC;
	sub_82D33DB0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbf57c
	if (cr6.eq) goto loc_82CBF57C;
	// bl 0x831156e8
	ctx.lr = 0x82CBF0CC;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r3,96(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 96);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x83102db0
	ctx.lr = 0x82CBF0DC;
	sub_83102DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82CBF0EC;
	sub_8311C148(ctx, base);
	// lwz r10,100(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 100);
	// lis r9,-31759
	ctx.r9.s64 = -2081357824;
	// addi r31,r22,100
	ctx.r31.s64 = ctx.r22.s64 + 100;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,2464(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2464);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CBF110;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbf124
	if (cr6.eq) goto loc_82CBF124;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,569
	ctx.r4.u64 = ctx.r4.u64 | 569;
	// bl 0x82d29598
	ctx.lr = 0x82CBF124;
	sub_82D29598(ctx, base);
loc_82CBF124:
	// lwz r3,96(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 96);
	// bl 0x831299d0
	ctx.lr = 0x82CBF12C;
	sub_831299D0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82CBF138;
	sub_82D33C10(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r16,r11,-26664
	ctx.r16.s64 = ctx.r11.s64 + -26664;
	// beq cr6,0x82cbf1e8
	if (cr6.eq) goto loc_82CBF1E8;
	// cmplw cr6,r17,r3
	cr6.compare<uint32_t>(ctx.r17.u32, ctx.r3.u32, xer);
	// ble cr6,0x82cbf1e8
	if (!cr6.gt) goto loc_82CBF1E8;
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// subf. r30,r15,r17
	ctx.r30.s64 = ctx.r17.s64 - ctx.r15.s64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x82cbf1e8
	if (cr0.eq) goto loc_82CBF1E8;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r27,r11,6652
	ctx.r27.s64 = ctx.r11.s64 + 6652;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,-16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CBF184;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CBF19C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbf20c
	if (cr6.eq) goto loc_82CBF20C;
	// addi r4,r16,-534
	ctx.r4.s64 = ctx.r16.s64 + -534;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82CBF1B4;
	sub_837B0C10(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,571
	ctx.r4.u64 = ctx.r4.u64 | 571;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d042a8
	ctx.lr = 0x82CBF1C8;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CBF1DC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82CBF1E4;
	sub_8387E8E0(ctx, base);
	// b 0x82cbf20c
	goto loc_82CBF20C;
loc_82CBF1E8:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r27,r11,6652
	ctx.r27.s64 = ctx.r11.s64 + 6652;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,-20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CBF20C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CBF20C:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// mr r20,r26
	ctx.r20.u64 = ctx.r26.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// beq cr6,0x82cbf57c
	if (cr6.eq) goto loc_82CBF57C;
	// li r23,15
	ctx.r23.s64 = 15;
	// li r18,2
	ctx.r18.s64 = 2;
	// li r19,4
	ctx.r19.s64 = 4;
loc_82CBF22C:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CBF238;
	sub_82D33DB0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbf570
	if (cr6.eq) goto loc_82CBF570;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r28,r3,100
	ctx.r28.s64 = ctx.r3.s64 + 100;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// subfc r8,r17,r9
	xer.ca = ctx.r9.u32 >= ctx.r17.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r17.s64;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r5,r11
	ctx.r31.u64 = ctx.r5.u64 & ctx.r11.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CBF274;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cbf4c0
	if (cr6.eq) goto loc_82CBF4C0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,96(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 96);
	// bl 0x83129b28
	ctx.lr = 0x82CBF28C;
	sub_83129B28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82CBF294:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83129708
	ctx.lr = 0x82CBF2A4;
	sub_83129708(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cbf2d4
	if (!cr6.eq) goto loc_82CBF2D4;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cbf2d8
	if (cr6.eq) goto loc_82CBF2D8;
loc_82CBF2D4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82CBF2D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cbf2ec
	if (cr6.eq) goto loc_82CBF2EC;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// b 0x82cbf2f8
	goto loc_82CBF2F8;
loc_82CBF2EC:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8311c148
	ctx.lr = 0x82CBF2F4;
	sub_8311C148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CBF2F8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r27,40
	ctx.r10.s64 = ctx.r27.s64 + 40;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CBF31C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbf34c
	if (cr6.eq) goto loc_82CBF34C;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r26,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82cbf33c
	if (cr6.eq) goto loc_82CBF33C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CBF33C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82d329f8
	ctx.lr = 0x82CBF34C;
	sub_82D329F8(ctx, base);
loc_82CBF34C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r27,24
	ctx.r10.s64 = ctx.r27.s64 + 24;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CBF370;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbf3f0
	if (cr6.eq) goto loc_82CBF3F0;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
loc_82CBF390:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cbf390
	if (!cr6.eq) goto loc_82CBF390;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CBF3B4;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CBF3C8;
	sub_82D291E0(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cbf3e4
	if (cr6.lt) goto loc_82CBF3E4;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82CBF3E4;
	sub_825952B8(ctx, base);
loc_82CBF3E4:
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
loc_82CBF3F0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r27,32
	ctx.r10.s64 = ctx.r27.s64 + 32;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CBF414;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbf440
	if (cr6.eq) goto loc_82CBF440;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831297a0
	ctx.lr = 0x82CBF434;
	sub_831297A0(ctx, base);
	// clrldi r4,r3,32
	ctx.r4.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CBF440;
	sub_82D294D0(ctx, base);
loc_82CBF440:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// blt cr6,0x82cbf294
	if (cr6.lt) goto loc_82CBF294;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83129788
	ctx.lr = 0x82CBF454;
	sub_83129788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82cbf484
	if (cr6.eq) goto loc_82CBF484;
	// lwz r4,-12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -12);
	// bctrl 
	ctx.lr = 0x82CBF47C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,-4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// b 0x82cbf54c
	goto loc_82CBF54C;
loc_82CBF484:
	// lwz r4,-8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8);
	// bctrl 
	ctx.lr = 0x82CBF48C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CBF4A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbf4b8
	if (cr6.eq) goto loc_82CBF4B8;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,570
	ctx.r4.u64 = ctx.r4.u64 | 570;
	// bl 0x82d29598
	ctx.lr = 0x82CBF4B8;
	sub_82D29598(ctx, base);
loc_82CBF4B8:
	// lwz r4,-4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// b 0x82cbf54c
	goto loc_82CBF54C;
loc_82CBF4C0:
	// addi r30,r27,40
	ctx.r30.s64 = ctx.r27.s64 + 40;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
loc_82CBF4C8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBF4E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbf53c
	if (cr6.eq) goto loc_82CBF53C;
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// li r5,33
	ctx.r5.s64 = 33;
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x82CBF508;
	sub_8259CC28(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d32958
	ctx.lr = 0x82CBF514;
	sub_82D32958(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbf530
	if (cr6.lt) goto loc_82CBF530;
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82CBF530;
	sub_825952B8(ctx, base);
loc_82CBF530:
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
loc_82CBF53C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82cbf4c8
	if (!cr0.eq) goto loc_82CBF4C8;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82CBF54C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBF564;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82CBF570:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplw cr6,r20,r15
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r15.u32, xer);
	// blt cr6,0x82cbf22c
	if (cr6.lt) goto loc_82CBF22C;
loc_82CBF57C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBF584"))) PPC_WEAK_FUNC(sub_82CBF584);
PPC_FUNC_IMPL(__imp__sub_82CBF584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CBF588"))) PPC_WEAK_FUNC(sub_82CBF588);
PPC_FUNC_IMPL(__imp__sub_82CBF588) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cbeb08
	ctx.lr = 0x82CBF5A8;
	sub_82CBEB08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbed80
	ctx.lr = 0x82CBF5B0;
	sub_82CBED80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CBF5B8;
	sub_82D19A78(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d33db0
	ctx.lr = 0x82CBF5C0;
	sub_82D33DB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82cbf5f8
	if (cr6.eq) goto loc_82CBF5F8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,25
	ctx.r6.s64 = 25;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cff698
	ctx.lr = 0x82CBF5F8;
	sub_82CFF698(ctx, base);
loc_82CBF5F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CBF600;
	sub_82D19A78(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d33db0
	ctx.lr = 0x82CBF608;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbf634
	if (cr6.eq) goto loc_82CBF634;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,25
	ctx.r6.s64 = 25;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cff698
	ctx.lr = 0x82CBF634;
	sub_82CFF698(ctx, base);
loc_82CBF634:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CBF63C;
	sub_82D19A78(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82d33db0
	ctx.lr = 0x82CBF644;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbf674
	if (cr6.eq) goto loc_82CBF674;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,25
	ctx.r6.s64 = 25;
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f1,-23848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cff698
	ctx.lr = 0x82CBF674;
	sub_82CFF698(ctx, base);
loc_82CBF674:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbf0a0
	ctx.lr = 0x82CBF67C;
	sub_82CBF0A0(ctx, base);
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

__attribute__((alias("__imp__sub_82CBF698"))) PPC_WEAK_FUNC(sub_82CBF698);
PPC_FUNC_IMPL(__imp__sub_82CBF698) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,282
	ctx.r4.u64 = ctx.r4.u64 | 282;
	// b 0x82d04220
	sub_82D04220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBF6A8"))) PPC_WEAK_FUNC(sub_82CBF6A8);
PPC_FUNC_IMPL(__imp__sub_82CBF6A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CBF6B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x82CBF6DC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbf734
	if (cr6.eq) goto loc_82CBF734;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cfef68
	ctx.lr = 0x82CBF6FC;
	sub_82CFEF68(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-25712
	ctx.r9.s64 = ctx.r11.s64 + -25712;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,6836(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 6836);
	// bl 0x82d23390
	ctx.lr = 0x82CBF728;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CBF734:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBF740"))) PPC_WEAK_FUNC(sub_82CBF740);
PPC_FUNC_IMPL(__imp__sub_82CBF740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82CBF748;
	__savegprlr_18(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CBF754;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CBF75C;
	sub_82D33DB0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbfcf8
	if (cr6.eq) goto loc_82CBFCF8;
	// li r11,35
	ctx.r11.s64 = 35;
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// li r9,37
	ctx.r9.s64 = 37;
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// li r8,38
	ctx.r8.s64 = 38;
	// li r7,39
	ctx.r7.s64 = 39;
	// stw r9,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r9.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r8,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r8.u32);
	// li r5,41
	ctx.r5.s64 = 41;
	// stw r7,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r7.u32);
	// li r4,42
	ctx.r4.s64 = 42;
	// stw r6,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r6.u32);
	// li r3,43
	ctx.r3.s64 = 43;
	// stw r5,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r5.u32);
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r4,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r4.u32);
	// stw r3,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r3.u32);
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// stw r11,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r11.u32);
	// lis r9,36
	ctx.r9.s64 = 2359296;
	// lis r8,24
	ctx.r8.s64 = 1572864;
	// lis r7,36
	ctx.r7.s64 = 2359296;
	// lis r6,24
	ctx.r6.s64 = 1572864;
	// lwz r4,2840(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2840);
	// lis r5,26
	ctx.r5.s64 = 1703936;
	// ori r11,r9,147
	ctx.r11.u64 = ctx.r9.u64 | 147;
	// ori r10,r8,20
	ctx.r10.u64 = ctx.r8.u64 | 20;
	// ori r9,r7,146
	ctx.r9.u64 = ctx.r7.u64 | 146;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// ori r8,r6,22
	ctx.r8.u64 = ctx.r6.u64 | 22;
	// stw r10,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r10.u32);
	// ori r7,r5,584
	ctx.r7.u64 = ctx.r5.u64 | 584;
	// stw r9,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r9.u32);
	// addi r3,r19,100
	ctx.r3.s64 = ctx.r19.s64 + 100;
	// stw r8,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// stw r7,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r7.u32);
	// lwz r6,100(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 100);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82CBF810;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbf824
	if (cr6.eq) goto loc_82CBF824;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,630
	ctx.r4.u64 = ctx.r4.u64 | 630;
	// bl 0x82d29598
	ctx.lr = 0x82CBF824;
	sub_82D29598(ctx, base);
loc_82CBF824:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwz r4,6852(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6852);
	// bl 0x837b0c10
	ctx.lr = 0x82CBF834;
	sub_837B0C10(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// lwz r5,18392(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18392);
	// bl 0x82ab6970
	ctx.lr = 0x82CBF848;
	sub_82AB6970(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82CBF874;
	sub_8259CB28(ctx, base);
	// lwz r9,580(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// li r18,2
	ctx.r18.s64 = 2;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cbf894
	if (cr6.lt) goto loc_82CBF894;
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r18.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x825952b8
	ctx.lr = 0x82CBF894;
	sub_825952B8(ctx, base);
loc_82CBF894:
	// stw r28,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r28.u32);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lwz r5,18400(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18400);
	// bl 0x82ab6970
	ctx.lr = 0x82CBF8B4;
	sub_82AB6970(ctx, base);
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8259cb28
	ctx.lr = 0x82CBF8D4;
	sub_8259CB28(ctx, base);
	// lwz r10,484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cbf8f0
	if (cr6.lt) goto loc_82CBF8F0;
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x825952b8
	ctx.lr = 0x82CBF8F0;
	sub_825952B8(ctx, base);
loc_82CBF8F0:
	// stw r28,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r28.u32);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lwz r5,18396(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18396);
	// bl 0x82ab6970
	ctx.lr = 0x82CBF910;
	sub_82AB6970(ctx, base);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82CBF930;
	sub_8259CB28(ctx, base);
	// lwz r10,548(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cbf94c
	if (cr6.lt) goto loc_82CBF94C;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x825952b8
	ctx.lr = 0x82CBF94C;
	sub_825952B8(ctx, base);
loc_82CBF94C:
	// stw r28,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r28.u32);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// lwz r5,18408(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18408);
	// bl 0x82ab6970
	ctx.lr = 0x82CBF96C;
	sub_82AB6970(ctx, base);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cb28
	ctx.lr = 0x82CBF98C;
	sub_8259CB28(ctx, base);
	// lwz r10,516(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cbf9a8
	if (cr6.lt) goto loc_82CBF9A8;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,496(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x825952b8
	ctx.lr = 0x82CBF9A8;
	sub_825952B8(ctx, base);
loc_82CBF9A8:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stw r28,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r28.u32);
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// addi r21,r1,352
	ctx.r21.s64 = ctx.r1.s64 + 352;
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
	// addi r23,r1,388
	ctx.r23.s64 = ctx.r1.s64 + 388;
	// addi r24,r11,-26166
	ctx.r24.s64 = ctx.r11.s64 + -26166;
loc_82CBF9C8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CBF9D4;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbfc28
	if (cr6.eq) goto loc_82CBFC28;
	// addi r4,r23,-4
	ctx.r4.s64 = ctx.r23.s64 + -4;
	// lwz r3,96(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// bl 0x83129988
	ctx.lr = 0x82CBF9EC;
	sub_83129988(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,96(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83129988
	ctx.lr = 0x82CBFA00;
	sub_83129988(ctx, base);
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cfebf8
	ctx.lr = 0x82CBFA10;
	sub_82CFEBF8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cbfa28
	if (!cr6.lt) goto loc_82CBFA28;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CBFA28:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBFA40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbfa50
	if (cr6.eq) goto loc_82CBFA50;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82CBFA50;
	sub_82D29598(ctx, base);
loc_82CBFA50:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cbfa64
	if (!cr6.lt) goto loc_82CBFA64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_82CBFA64:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBFA78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbfaf0
	if (cr6.eq) goto loc_82CBFAF0;
	// stw r28,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r28.u32);
	// addi r4,r24,-32
	ctx.r4.s64 = ctx.r24.s64 + -32;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8259cc28
	ctx.lr = 0x82CBFAA0;
	sub_8259CC28(ctx, base);
	// lis r4,562
	ctx.r4.s64 = 36831232;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r4,r4,39
	ctx.r4.u64 = ctx.r4.u64 | 39;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82d042a8
	ctx.lr = 0x82CBFAB4;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CBFAC8;
	sub_82D291E0(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbfae4
	if (cr6.lt) goto loc_82CBFAE4;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82CBFAE4;
	sub_825952B8(ctx, base);
loc_82CBFAE4:
	// stw r28,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r28.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_82CBFAF0:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cbfb04
	if (!cr6.lt) goto loc_82CBFB04;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82CBFB04:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBFB18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbfb8c
	if (cr6.eq) goto loc_82CBFB8C;
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// addi r4,r24,-31
	ctx.r4.s64 = ctx.r24.s64 + -31;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8259cc28
	ctx.lr = 0x82CBFB40;
	sub_8259CC28(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82d042a8
	ctx.lr = 0x82CBFB50;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CBFB64;
	sub_82D291E0(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbfb80
	if (cr6.lt) goto loc_82CBFB80;
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x82CBFB80;
	sub_825952B8(ctx, base);
loc_82CBFB80:
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_82CBFB8C:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cbfba0
	if (!cr6.lt) goto loc_82CBFBA0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_82CBFBA0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBFBB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbfc28
	if (cr6.eq) goto loc_82CBFC28;
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cc28
	ctx.lr = 0x82CBFBDC;
	sub_8259CC28(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d042a8
	ctx.lr = 0x82CBFBEC;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CBFC00;
	sub_82D291E0(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbfc1c
	if (cr6.lt) goto loc_82CBFC1C;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82CBFC1C;
	sub_825952B8(ctx, base);
loc_82CBFC1C:
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_82CBFC28:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplwi cr6,r22,5
	cr6.compare<uint32_t>(ctx.r22.u32, 5, xer);
	// blt cr6,0x82cbf9c8
	if (cr6.lt) goto loc_82CBF9C8;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cbfc58
	if (cr6.lt) goto loc_82CBFC58;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82CBFC58;
	sub_825952B8(ctx, base);
loc_82CBFC58:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x82cbfc80
	if (cr6.lt) goto loc_82CBFC80;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82CBFC80;
	sub_825952B8(ctx, base);
loc_82CBFC80:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x82cbfca8
	if (cr6.lt) goto loc_82CBFCA8;
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82CBFCA8;
	sub_825952B8(ctx, base);
loc_82CBFCA8:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x82cbfcd0
	if (cr6.lt) goto loc_82CBFCD0;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CBFCD0;
	sub_825952B8(ctx, base);
loc_82CBFCD0:
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82cbfcf8
	if (cr6.lt) goto loc_82CBFCF8;
	// stw r18,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r18.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,432(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x825952b8
	ctx.lr = 0x82CBFCF8;
	sub_825952B8(ctx, base);
loc_82CBFCF8:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBFD00"))) PPC_WEAK_FUNC(sub_82CBFD00);
PPC_FUNC_IMPL(__imp__sub_82CBFD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82CBFD08;
	__savegprlr_18(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CBFD14;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82CBFD1C;
	sub_82D33DB0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc0280
	if (cr6.eq) goto loc_82CC0280;
	// li r11,45
	ctx.r11.s64 = 45;
	// li r10,46
	ctx.r10.s64 = 46;
	// li r9,47
	ctx.r9.s64 = 47;
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// li r8,48
	ctx.r8.s64 = 48;
	// stw r10,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r10.u32);
	// li r7,49
	ctx.r7.s64 = 49;
	// stw r9,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r9.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// stw r8,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// stw r7,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r7.u32);
	// lis r5,-31759
	ctx.r5.s64 = -2081357824;
	// stw r6,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r6.u32);
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// ori r7,r11,586
	ctx.r7.u64 = ctx.r11.u64 | 586;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r8,26
	ctx.r8.s64 = 1703936;
	// lwz r4,2840(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2840);
	// ori r6,r9,587
	ctx.r6.u64 = ctx.r9.u64 | 587;
	// ori r5,r8,588
	ctx.r5.u64 = ctx.r8.u64 | 588;
	// stw r7,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r7.u32);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// stw r6,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r6.u32);
	// stw r5,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r5.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CBFD98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbfdac
	if (cr6.eq) goto loc_82CBFDAC;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,629
	ctx.r4.u64 = ctx.r4.u64 | 629;
	// bl 0x82d29598
	ctx.lr = 0x82CBFDAC;
	sub_82D29598(ctx, base);
loc_82CBFDAC:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r4,6852(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6852);
	// bl 0x837b0c10
	ctx.lr = 0x82CBFDBC;
	sub_837B0C10(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwz r5,18392(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18392);
	// bl 0x82ab6970
	ctx.lr = 0x82CBFDD0;
	sub_82AB6970(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82CBFDFC;
	sub_8259CB28(ctx, base);
	// lwz r9,452(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// li r18,2
	ctx.r18.s64 = 2;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cbfe1c
	if (cr6.lt) goto loc_82CBFE1C;
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r18.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,432(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x825952b8
	ctx.lr = 0x82CBFE1C;
	sub_825952B8(ctx, base);
loc_82CBFE1C:
	// stw r28,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r28.u32);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// lwz r5,18400(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18400);
	// bl 0x82ab6970
	ctx.lr = 0x82CBFE3C;
	sub_82AB6970(ctx, base);
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8259cb28
	ctx.lr = 0x82CBFE5C;
	sub_8259CB28(ctx, base);
	// lwz r10,516(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cbfe78
	if (cr6.lt) goto loc_82CBFE78;
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,496(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x825952b8
	ctx.lr = 0x82CBFE78;
	sub_825952B8(ctx, base);
loc_82CBFE78:
	// stw r28,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r28.u32);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lwz r5,18396(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18396);
	// bl 0x82ab6970
	ctx.lr = 0x82CBFE98;
	sub_82AB6970(ctx, base);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82CBFEB8;
	sub_8259CB28(ctx, base);
	// lwz r10,484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cbfed4
	if (cr6.lt) goto loc_82CBFED4;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x825952b8
	ctx.lr = 0x82CBFED4;
	sub_825952B8(ctx, base);
loc_82CBFED4:
	// stw r28,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r28.u32);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lwz r5,18408(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18408);
	// bl 0x82ab6970
	ctx.lr = 0x82CBFEF4;
	sub_82AB6970(ctx, base);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cb28
	ctx.lr = 0x82CBFF14;
	sub_8259CB28(ctx, base);
	// lwz r10,548(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cbff30
	if (cr6.lt) goto loc_82CBFF30;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x825952b8
	ctx.lr = 0x82CBFF30;
	sub_825952B8(ctx, base);
loc_82CBFF30:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stw r28,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r28.u32);
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// addi r21,r1,352
	ctx.r21.s64 = ctx.r1.s64 + 352;
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
	// addi r23,r1,372
	ctx.r23.s64 = ctx.r1.s64 + 372;
	// addi r24,r11,-26134
	ctx.r24.s64 = ctx.r11.s64 + -26134;
loc_82CBFF50:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CBFF5C;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc01b0
	if (cr6.eq) goto loc_82CC01B0;
	// addi r4,r23,-4
	ctx.r4.s64 = ctx.r23.s64 + -4;
	// lwz r3,96(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// bl 0x83129988
	ctx.lr = 0x82CBFF74;
	sub_83129988(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,96(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83129988
	ctx.lr = 0x82CBFF88;
	sub_83129988(ctx, base);
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cfebf8
	ctx.lr = 0x82CBFF98;
	sub_82CFEBF8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cbffb0
	if (!cr6.lt) goto loc_82CBFFB0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CBFFB0:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CBFFC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cbffd8
	if (cr6.eq) goto loc_82CBFFD8;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82CBFFD8;
	sub_82D29598(ctx, base);
loc_82CBFFD8:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cbffec
	if (!cr6.lt) goto loc_82CBFFEC;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_82CBFFEC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC0000;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc0078
	if (cr6.eq) goto loc_82CC0078;
	// stw r28,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r28.u32);
	// addi r4,r24,-31
	ctx.r4.s64 = ctx.r24.s64 + -31;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8259cc28
	ctx.lr = 0x82CC0028;
	sub_8259CC28(ctx, base);
	// lis r4,562
	ctx.r4.s64 = 36831232;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r4,r4,39
	ctx.r4.u64 = ctx.r4.u64 | 39;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82d042a8
	ctx.lr = 0x82CC003C;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CC0050;
	sub_82D291E0(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc006c
	if (cr6.lt) goto loc_82CC006C;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82CC006C;
	sub_825952B8(ctx, base);
loc_82CC006C:
	// stw r28,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r28.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_82CC0078:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc008c
	if (!cr6.lt) goto loc_82CC008C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82CC008C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC00A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc0114
	if (cr6.eq) goto loc_82CC0114;
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// addi r4,r24,-1
	ctx.r4.s64 = ctx.r24.s64 + -1;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8259cc28
	ctx.lr = 0x82CC00C8;
	sub_8259CC28(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82d042a8
	ctx.lr = 0x82CC00D8;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CC00EC;
	sub_82D291E0(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc0108
	if (cr6.lt) goto loc_82CC0108;
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x82CC0108;
	sub_825952B8(ctx, base);
loc_82CC0108:
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_82CC0114:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc0128
	if (!cr6.lt) goto loc_82CC0128;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_82CC0128:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC013C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc01b0
	if (cr6.eq) goto loc_82CC01B0;
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cc28
	ctx.lr = 0x82CC0164;
	sub_8259CC28(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d042a8
	ctx.lr = 0x82CC0174;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CC0188;
	sub_82D291E0(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc01a4
	if (cr6.lt) goto loc_82CC01A4;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82CC01A4;
	sub_825952B8(ctx, base);
loc_82CC01A4:
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_82CC01B0:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplwi cr6,r22,3
	cr6.compare<uint32_t>(ctx.r22.u32, 3, xer);
	// blt cr6,0x82cbff50
	if (cr6.lt) goto loc_82CBFF50;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc01e0
	if (cr6.lt) goto loc_82CC01E0;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82CC01E0;
	sub_825952B8(ctx, base);
loc_82CC01E0:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x82cc0208
	if (cr6.lt) goto loc_82CC0208;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82CC0208;
	sub_825952B8(ctx, base);
loc_82CC0208:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x82cc0230
	if (cr6.lt) goto loc_82CC0230;
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82CC0230;
	sub_825952B8(ctx, base);
loc_82CC0230:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x82cc0258
	if (cr6.lt) goto loc_82CC0258;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CC0258;
	sub_825952B8(ctx, base);
loc_82CC0258:
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82cc0280
	if (cr6.lt) goto loc_82CC0280;
	// stw r18,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r18.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x825952b8
	ctx.lr = 0x82CC0280;
	sub_825952B8(ctx, base);
loc_82CC0280:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0288"))) PPC_WEAK_FUNC(sub_82CC0288);
PPC_FUNC_IMPL(__imp__sub_82CC0288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CC0290;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC029C;
	sub_82D19A78(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d33db0
	ctx.lr = 0x82CC02A4;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc0354
	if (cr6.eq) goto loc_82CC0354;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// li r9,25
	ctx.r9.s64 = 25;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,23
	ctx.r7.s64 = 23;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,2840(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2840);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CC02E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc02f8
	if (cr6.eq) goto loc_82CC02F8;
	// lis r4,10
	ctx.r4.s64 = 655360;
	// ori r4,r4,54
	ctx.r4.u64 = ctx.r4.u64 | 54;
	// bl 0x82d29598
	ctx.lr = 0x82CC02F8;
	sub_82D29598(ctx, base);
loc_82CC02F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82CC0310:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835977d8
	ctx.lr = 0x82CC031C;
	sub_835977D8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82cc0310
	if (!cr0.eq) goto loc_82CC0310;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d000d8
	ctx.lr = 0x82CC0338;
	sub_82D000D8(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc0354
	if (cr6.eq) goto loc_82CC0354;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC0354;
	sub_825952B8(ctx, base);
loc_82CC0354:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC035C"))) PPC_WEAK_FUNC(sub_82CC035C);
PPC_FUNC_IMPL(__imp__sub_82CC035C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC0360"))) PPC_WEAK_FUNC(sub_82CC0360);
PPC_FUNC_IMPL(__imp__sub_82CC0360) {
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
	ctx.lr = 0x82CC0368;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC037C;
	sub_82D19A78(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d33db0
	ctx.lr = 0x82CC0384;
	sub_82D33DB0(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc0db4
	if (cr6.eq) goto loc_82CC0DB4;
	// li r9,51
	ctx.r9.s64 = 51;
	// li r8,58
	ctx.r8.s64 = 58;
	// li r7,52
	ctx.r7.s64 = 52;
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// li r6,59
	ctx.r6.s64 = 59;
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// li r5,53
	ctx.r5.s64 = 53;
	// stw r7,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r5,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r5.u32);
	// li r11,61
	ctx.r11.s64 = 61;
	// li r4,54
	ctx.r4.s64 = 54;
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// li r3,55
	ctx.r3.s64 = 55;
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// li r9,62
	ctx.r9.s64 = 62;
	// stw r4,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r4.u32);
	// li r8,56
	ctx.r8.s64 = 56;
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
	// li r7,63
	ctx.r7.s64 = 63;
	// stw r9,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// li r6,57
	ctx.r6.s64 = 57;
	// stw r8,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r8.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r7,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// stw r6,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r6.u32);
	// lis r3,10
	ctx.r3.s64 = 655360;
	// stw r5,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// lis r9,660
	ctx.r9.s64 = 43253760;
	// stw r10,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// li r10,31
	ctx.r10.s64 = 31;
	// ori r7,r3,129
	ctx.r7.u64 = ctx.r3.u64 | 129;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// stw r10,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
	// ori r6,r9,23
	ctx.r6.u64 = ctx.r9.u64 | 23;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r9,45
	ctx.r9.s64 = 45;
	// ori r5,r8,87
	ctx.r5.u64 = ctx.r8.u64 | 87;
	// stw r3,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r9,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// li r3,91
	ctx.r3.s64 = 91;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lis r4,-31759
	ctx.r4.s64 = -2081357824;
	// stw r11,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// addi r25,r14,100
	ctx.r25.s64 = ctx.r14.s64 + 100;
	// stw r3,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r3.u32);
	// li r8,46
	ctx.r8.s64 = 46;
	// li r7,75
	ctx.r7.s64 = 75;
	// li r6,76
	ctx.r6.s64 = 76;
	// stw r8,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r8.u32);
	// li r5,90
	ctx.r5.s64 = 90;
	// lwz r4,2840(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2840);
	// li r11,120
	ctx.r11.s64 = 120;
	// stw r7,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r6,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r6.u32);
	// li r18,15
	ctx.r18.s64 = 15;
	// stw r5,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r5.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r26,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r26.u32);
	// lwz r10,100(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 100);
	// stw r18,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r18.u32);
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC04AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc04c0
	if (cr6.eq) goto loc_82CC04C0;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,593
	ctx.r4.u64 = ctx.r4.u64 | 593;
	// bl 0x82d29598
	ctx.lr = 0x82CC04C0;
	sub_82D29598(ctx, base);
loc_82CC04C0:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r18,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r18.u32);
	// stw r26,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r26.u32);
	// addi r16,r11,6828
	ctx.r16.s64 = ctx.r11.s64 + 6828;
	// stb r26,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r26.u8);
	// stw r18,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r18.u32);
	// stw r26,908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 908, ctx.r26.u32);
	// stb r26,892(r1)
	PPC_STORE_U8(ctx.r1.u32 + 892, ctx.r26.u8);
	// stw r18,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r18.u32);
	// lwz r4,32(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32);
	// stw r26,936(r1)
	PPC_STORE_U32(ctx.r1.u32 + 936, ctx.r26.u32);
	// stb r26,920(r1)
	PPC_STORE_U8(ctx.r1.u32 + 920, ctx.r26.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r18,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r18.u32);
	// stw r26,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r26.u32);
	// stb r26,960(r1)
	PPC_STORE_U8(ctx.r1.u32 + 960, ctx.r26.u8);
	// stw r18,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r18.u32);
	// stw r26,1004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1004, ctx.r26.u32);
	// stb r26,988(r1)
	PPC_STORE_U8(ctx.r1.u32 + 988, ctx.r26.u8);
	// stw r18,1036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1036, ctx.r18.u32);
	// stw r26,1032(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1032, ctx.r26.u32);
	// stb r26,1016(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1016, ctx.r26.u8);
	// stw r18,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r18.u32);
	// stw r26,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r26.u32);
	// stb r26,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r26.u8);
	// stw r18,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r18.u32);
	// stw r26,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r26.u32);
	// stb r26,396(r1)
	PPC_STORE_U8(ctx.r1.u32 + 396, ctx.r26.u8);
	// stw r18,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r18.u32);
	// stw r26,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r26.u32);
	// stb r26,424(r1)
	PPC_STORE_U8(ctx.r1.u32 + 424, ctx.r26.u8);
loc_82CC053C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc053c
	if (!cr6.eq) goto loc_82CC053C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CC0560;
	sub_8259CC28(ctx, base);
	// lwz r4,28(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CC0568:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc0568
	if (!cr6.eq) goto loc_82CC0568;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,920
	ctx.r3.s64 = ctx.r1.s64 + 920;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CC058C;
	sub_8259CC28(ctx, base);
	// lwz r4,36(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 36);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CC0594:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc0594
	if (!cr6.eq) goto loc_82CC0594;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CC05B8;
	sub_8259CC28(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r28,-31776
	ctx.r28.s64 = -2082471936;
	// li r15,2
	ctx.r15.s64 = 2;
	// lis r27,-31776
	ctx.r27.s64 = -2082471936;
loc_82CC05CC:
	// addi r11,r1,864
	ctx.r11.s64 = ctx.r1.s64 + 864;
	// lwz r5,18392(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 18392);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ab6970
	ctx.lr = 0x82CC05E4;
	sub_82AB6970(ctx, base);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CC05FC;
	sub_8259CB28(ctx, base);
	// lwz r11,484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc0618
	if (cr6.lt) goto loc_82CC0618;
	// stw r15,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r15.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x825952b8
	ctx.lr = 0x82CC0618;
	sub_825952B8(ctx, base);
loc_82CC0618:
	// stw r18,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r18.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r26,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r26.u32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stb r26,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r26.u8);
	// lwz r5,18396(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18396);
	// bl 0x82ab6970
	ctx.lr = 0x82CC0634;
	sub_82AB6970(ctx, base);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CC064C;
	sub_8259CB28(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc0668
	if (cr6.lt) goto loc_82CC0668;
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x825952b8
	ctx.lr = 0x82CC0668;
	sub_825952B8(ctx, base);
loc_82CC0668:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// stw r18,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r18.u32);
	// stw r26,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r26.u32);
	// cmplwi cr6,r31,84
	cr6.compare<uint32_t>(ctx.r31.u32, 84, xer);
	// stb r26,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r26.u8);
	// blt cr6,0x82cc05cc
	if (cr6.lt) goto loc_82CC05CC;
	// stw r18,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r18.u32);
	// addi r30,r16,12
	ctx.r30.s64 = ctx.r16.s64 + 12;
	// stw r26,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r26.u32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stb r26,752(r1)
	PPC_STORE_U8(ctx.r1.u32 + 752, ctx.r26.u8);
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// stw r18,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r18.u32);
	// stw r26,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r26.u32);
	// stb r26,780(r1)
	PPC_STORE_U8(ctx.r1.u32 + 780, ctx.r26.u8);
	// stw r18,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r18.u32);
	// stw r26,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r26.u32);
	// stb r26,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r26.u8);
	// stw r18,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r18.u32);
	// stw r26,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r26.u32);
	// stb r26,652(r1)
	PPC_STORE_U8(ctx.r1.u32 + 652, ctx.r26.u8);
	// stw r18,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r18.u32);
	// stw r26,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r26.u32);
	// stb r26,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, ctx.r26.u8);
	// stw r18,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r18.u32);
	// stw r26,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r26.u32);
	// stb r26,716(r1)
	PPC_STORE_U8(ctx.r1.u32 + 716, ctx.r26.u8);
loc_82CC06D4:
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// lwz r5,40(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 40);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82ab6970
	ctx.lr = 0x82CC06E8;
	sub_82AB6970(ctx, base);
	// addi r11,r1,752
	ctx.r11.s64 = ctx.r1.s64 + 752;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CC0700;
	sub_8259CB28(ctx, base);
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc071c
	if (cr6.lt) goto loc_82CC071C;
	// stw r15,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r15.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,496(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x825952b8
	ctx.lr = 0x82CC071C;
	sub_825952B8(ctx, base);
loc_82CC071C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r18,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r18.u32);
	// stw r26,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r26,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r26.u8);
	// stw r18,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r18.u32);
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// stb r26,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r26.u8);
loc_82CC073C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc073c
	if (!cr6.eq) goto loc_82CC073C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CC0760;
	sub_8259CC28(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// lwz r5,0(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x82CC0770;
	sub_82AB6970(ctx, base);
	// addi r11,r1,624
	ctx.r11.s64 = ctx.r1.s64 + 624;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CC0788;
	sub_8259CB28(ctx, base);
	// lwz r10,580(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cc07a4
	if (cr6.lt) goto loc_82CC07A4;
	// stw r15,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r15.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x825952b8
	ctx.lr = 0x82CC07A4;
	sub_825952B8(ctx, base);
loc_82CC07A4:
	// stw r18,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r18.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r26,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r26.u32);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stb r26,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r26.u8);
	// lwz r5,4(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// bl 0x82ab6970
	ctx.lr = 0x82CC07C0;
	sub_82AB6970(ctx, base);
	// addi r11,r1,688
	ctx.r11.s64 = ctx.r1.s64 + 688;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CC07D8;
	sub_8259CB28(ctx, base);
	// lwz r11,612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc07f4
	if (cr6.lt) goto loc_82CC07F4;
	// stw r15,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r15.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,592(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// bl 0x825952b8
	ctx.lr = 0x82CC07F4;
	sub_825952B8(ctx, base);
loc_82CC07F4:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r18,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r18.u32);
	// stw r26,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r26,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r26.u8);
	// blt cr6,0x82cc081c
	if (cr6.lt) goto loc_82CC081C;
	// stw r15,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82CC081C;
	sub_825952B8(ctx, base);
loc_82CC081C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r18,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r18.u32);
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r26,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r26.u8);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x82cc06d4
	if (!cr0.eq) goto loc_82CC06D4;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,960
	ctx.r31.s64 = ctx.r1.s64 + 960;
	// li r29,3
	ctx.r29.s64 = 3;
loc_82CC0844:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc0858
	if (cr6.lt) goto loc_82CC0858;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82cc085c
	goto loc_82CC085C;
loc_82CC0858:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82CC085C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC0870;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc0880
	if (cr6.eq) goto loc_82CC0880;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82CC0880;
	sub_82D29598(ctx, base);
loc_82CC0880:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82cc0844
	if (!cr0.eq) goto loc_82CC0844;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82CC0898;
	sub_82D33C10(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r26,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1060
	ctx.r3.s64 = ctx.r1.s64 + 1060;
	// bl 0x831cdcf0
	ctx.lr = 0x82CC08B0;
	sub_831CDCF0(ctx, base);
	// addi r11,r1,156
	ctx.r11.s64 = ctx.r1.s64 + 156;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
loc_82CC08CC:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82CC08D4:
	// add r10,r29,r28
	ctx.r10.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwz r3,96(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x83129988
	ctx.lr = 0x82CC08EC;
	sub_83129988(ctx, base);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// lwzx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r6,r31,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stwx r11,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// stwx r5,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u32);
	// ble cr6,0x82cc091c
	if (!cr6.gt) goto loc_82CC091C;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
loc_82CC091C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x82cc08d4
	if (cr6.lt) goto loc_82CC08D4;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplwi cr6,r28,14
	cr6.compare<uint32_t>(ctx.r28.u32, 14, xer);
	// blt cr6,0x82cc08cc
	if (cr6.lt) goto loc_82CC08CC;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x82cc0c4c
	if (cr6.eq) goto loc_82CC0C4C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r21,r1,304
	ctx.r21.s64 = ctx.r1.s64 + 304;
	// addi r20,r11,-26133
	ctx.r20.s64 = ctx.r11.s64 + -26133;
	// lfs f30,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_82CC095C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CC0968;
	sub_82D33DB0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc0c40
	if (cr6.eq) goto loc_82CC0C40;
	// cmplwi cr6,r22,7
	cr6.compare<uint32_t>(ctx.r22.u32, 7, xer);
	// blt cr6,0x82cc098c
	if (cr6.lt) goto loc_82CC098C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC0988;
	sub_82D2AEC8(ctx, base);
	// b 0x82cc0c40
	goto loc_82CC0C40;
loc_82CC098C:
	// lwz r11,444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r4,424(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc09a0
	if (!cr6.lt) goto loc_82CC09A0;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
loc_82CC09A0:
	// lwz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// addi r24,r23,100
	ctx.r24.s64 = ctx.r23.s64 + 100;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC09B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc0a50
	if (cr6.eq) goto loc_82CC0A50;
	// lwz r30,0(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r30,90
	cr6.compare<uint32_t>(ctx.r30.u32, 90, xer);
	// ble cr6,0x82cc09e0
	if (!cr6.gt) goto loc_82CC09E0;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,167
	ctx.r4.u64 = ctx.r4.u64 | 167;
	// bl 0x82d29598
	ctx.lr = 0x82CC09DC;
	sub_82D29598(ctx, base);
	// b 0x82cc0a50
	goto loc_82CC0A50;
loc_82CC09E0:
	// stw r18,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r18.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r26,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r26.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cc28
	ctx.lr = 0x82CC09FC;
	sub_8259CC28(ctx, base);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,4(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// ori r4,r4,491
	ctx.r4.u64 = ctx.r4.u64 | 491;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d042a8
	ctx.lr = 0x82CC0A14;
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
	ctx.lr = 0x82CC0A28;
	sub_82D291E0(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc0a44
	if (cr6.lt) goto loc_82CC0A44;
	// stw r15,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r15.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82CC0A44;
	sub_825952B8(ctx, base);
loc_82CC0A44:
	// stw r18,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r18.u32);
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r26.u32);
	// stb r26,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r26.u8);
loc_82CC0A50:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// rlwinm r25,r22,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// addi r11,r1,388
	ctx.r11.s64 = ctx.r1.s64 + 388;
loc_82CC0A68:
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// blt cr6,0x82cc0a80
	if (cr6.lt) goto loc_82CC0A80;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// b 0x82cc0a84
	goto loc_82CC0A84;
loc_82CC0A80:
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_82CC0A84:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC0A98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc0ab4
	if (cr6.eq) goto loc_82CC0AB4;
	// add r11,r29,r25
	ctx.r11.u64 = ctx.r29.u64 + ctx.r25.u64;
	// addi r10,r1,1056
	ctx.r10.s64 = ctx.r1.s64 + 1056;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d294d0
	ctx.lr = 0x82CC0AB4;
	sub_82D294D0(ctx, base);
loc_82CC0AB4:
	// lwz r30,48(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cc0b60
	if (cr6.eq) goto loc_82CC0B60;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc0b0c
	if (cr6.eq) goto loc_82CC0B0C;
	// add r10,r29,r25
	ctx.r10.u64 = ctx.r29.u64 + ctx.r25.u64;
	// addi r9,r1,1056
	ctx.r9.s64 = ctx.r1.s64 + 1056;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r7,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r7.u64);
	// lfd f0,360(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f31,f9,f12
	ctx.f31.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// b 0x82cc0b10
	goto loc_82CC0B10;
loc_82CC0B0C:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_82CC0B10:
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// lwz r4,20(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// bl 0x83815d38
	ctx.lr = 0x82CC0B1C;
	sub_83815D38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x83815b28
	ctx.lr = 0x82CC0B28;
	sub_83815B28(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x83815b28
	ctx.lr = 0x82CC0B34;
	sub_83815B28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x83815b28
	ctx.lr = 0x82CC0B40;
	sub_83815B28(ctx, base);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82CC0B4C;
	sub_83815B68(ctx, base);
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838153c8
	ctx.lr = 0x82CC0B58;
	sub_838153C8(ctx, base);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x83815cb8
	ctx.lr = 0x82CC0B60;
	sub_83815CB8(ctx, base);
loc_82CC0B60:
	// add r11,r29,r25
	ctx.r11.u64 = ctx.r29.u64 + ctx.r25.u64;
	// addi r10,r1,1056
	ctx.r10.s64 = ctx.r1.s64 + 1056;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cc0be8
	if (cr6.eq) goto loc_82CC0BE8;
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cc0be8
	if (!cr6.eq) goto loc_82CC0BE8;
	// addi r11,r1,772
	ctx.r11.s64 = ctx.r1.s64 + 772;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r11,r1,752
	ctx.r11.s64 = ctx.r1.s64 + 752;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cc0ba4
	if (cr6.lt) goto loc_82CC0BA4;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// b 0x82cc0ba8
	goto loc_82CC0BA8;
loc_82CC0BA4:
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_82CC0BA8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC0BBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc0bcc
	if (cr6.eq) goto loc_82CC0BCC;
	// clrldi r4,r30,32
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82CC0BCC;
	sub_82D294D0(ctx, base);
loc_82CC0BCC:
	// addi r11,r1,644
	ctx.r11.s64 = ctx.r1.s64 + 644;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r11,r1,624
	ctx.r11.s64 = ctx.r1.s64 + 624;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cc0c04
	if (cr6.lt) goto loc_82CC0C04;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// b 0x82cc0c08
	goto loc_82CC0C08;
loc_82CC0BE8:
	// addi r11,r1,708
	ctx.r11.s64 = ctx.r1.s64 + 708;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r11,r1,688
	ctx.r11.s64 = ctx.r1.s64 + 688;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cc0c04
	if (cr6.lt) goto loc_82CC0C04;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// b 0x82cc0c08
	goto loc_82CC0C08;
loc_82CC0C04:
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_82CC0C08:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC0C20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r11,r1,388
	ctx.r11.s64 = ctx.r1.s64 + 388;
	// bne 0x82cc0a68
	if (!cr0.eq) goto loc_82CC0A68;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r21,r21,8
	ctx.r21.s64 = ctx.r21.s64 + 8;
loc_82CC0C40:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmplw cr6,r19,r17
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r17.u32, xer);
	// blt cr6,0x82cc095c
	if (cr6.lt) goto loc_82CC095C;
loc_82CC0C4C:
	// addi r31,r1,744
	ctx.r31.s64 = ctx.r1.s64 + 744;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CC0C54:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc0c74
	if (cr6.lt) goto loc_82CC0C74;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r15,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC0C74;
	sub_825952B8(ctx, base);
loc_82CC0C74:
	// stw r18,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r18.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// bge 0x82cc0c54
	if (!cr0.lt) goto loc_82CC0C54;
	// addi r31,r1,680
	ctx.r31.s64 = ctx.r1.s64 + 680;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CC0C90:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc0cb0
	if (cr6.lt) goto loc_82CC0CB0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r15,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC0CB0;
	sub_825952B8(ctx, base);
loc_82CC0CB0:
	// stw r18,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r18.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// bge 0x82cc0c90
	if (!cr0.lt) goto loc_82CC0C90;
	// addi r31,r1,808
	ctx.r31.s64 = ctx.r1.s64 + 808;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CC0CCC:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc0cec
	if (cr6.lt) goto loc_82CC0CEC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC0CEC;
	sub_825952B8(ctx, base);
loc_82CC0CEC:
	// stw r18,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r18.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// bge 0x82cc0ccc
	if (!cr0.lt) goto loc_82CC0CCC;
	// addi r31,r1,452
	ctx.r31.s64 = ctx.r1.s64 + 452;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_82CC0D08:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc0d28
	if (cr6.lt) goto loc_82CC0D28;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r15,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC0D28;
	sub_825952B8(ctx, base);
loc_82CC0D28:
	// stw r18,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r18.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// bge 0x82cc0d08
	if (!cr0.lt) goto loc_82CC0D08;
	// addi r31,r1,1044
	ctx.r31.s64 = ctx.r1.s64 + 1044;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_82CC0D44:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc0d64
	if (cr6.lt) goto loc_82CC0D64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC0D64;
	sub_825952B8(ctx, base);
loc_82CC0D64:
	// stw r18,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r18.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// bge 0x82cc0d44
	if (!cr0.lt) goto loc_82CC0D44;
	// addi r31,r1,948
	ctx.r31.s64 = ctx.r1.s64 + 948;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_82CC0D80:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc0da0
	if (cr6.lt) goto loc_82CC0DA0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r15,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r15.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC0DA0;
	sub_825952B8(ctx, base);
loc_82CC0DA0:
	// stw r18,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r18.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// bge 0x82cc0d80
	if (!cr0.lt) goto loc_82CC0D80;
loc_82CC0DB4:
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0DC4"))) PPC_WEAK_FUNC(sub_82CC0DC4);
PPC_FUNC_IMPL(__imp__sub_82CC0DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC0DC8"))) PPC_WEAK_FUNC(sub_82CC0DC8);
PPC_FUNC_IMPL(__imp__sub_82CC0DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x82CC0DD0;
	__savegprlr_15(ctx, base);
	// stfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f30.u64);
	// stfd f31,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC0DE4;
	sub_82D19A78(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82d33db0
	ctx.lr = 0x82CC0DEC;
	sub_82D33DB0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc177c
	if (cr6.eq) goto loc_82CC177C;
	// li r11,65
	ctx.r11.s64 = 65;
	// li r10,72
	ctx.r10.s64 = 72;
	// li r9,66
	ctx.r9.s64 = 66;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// li r7,67
	ctx.r7.s64 = 67;
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// li r6,74
	ctx.r6.s64 = 74;
	// stw r7,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r7.u32);
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,75
	ctx.r4.s64 = 75;
	// stw r6,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// li r3,69
	ctx.r3.s64 = 69;
	// stw r5,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r5.u32);
	// li r11,76
	ctx.r11.s64 = 76;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// li r10,70
	ctx.r10.s64 = 70;
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// li r9,77
	ctx.r9.s64 = 77;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// li r8,71
	ctx.r8.s64 = 71;
	// stw r10,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// li r7,78
	ctx.r7.s64 = 78;
	// stw r9,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r9.u32);
	// stw r8,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r8.u32);
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// stw r7,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r7.u32);
	// lis r6,-31759
	ctx.r6.s64 = -2081357824;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// lis r9,24
	ctx.r9.s64 = 1572864;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// ori r9,r9,10
	ctx.r9.u64 = ctx.r9.u64 | 10;
	// lis r11,35
	ctx.r11.s64 = 2293760;
	// lwz r4,2840(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2840);
	// lis r3,660
	ctx.r3.s64 = 43253760;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// ori r5,r5,129
	ctx.r5.u64 = ctx.r5.u64 | 129;
	// ori r11,r11,185
	ctx.r11.u64 = ctx.r11.u64 | 185;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lis r8,26
	ctx.r8.s64 = 1703936;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r7,24
	ctx.r7.s64 = 1572864;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,24
	ctx.r6.s64 = 1572864;
	// lis r31,102
	ctx.r31.s64 = 6684672;
	// addi r25,r15,100
	ctx.r25.s64 = ctx.r15.s64 + 100;
	// ori r8,r8,584
	ctx.r8.u64 = ctx.r8.u64 | 584;
	// ori r7,r7,20
	ctx.r7.u64 = ctx.r7.u64 | 20;
	// ori r6,r6,46
	ctx.r6.u64 = ctx.r6.u64 | 46;
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// lis r5,67
	ctx.r5.s64 = 4390912;
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// ori r11,r31,147
	ctx.r11.u64 = ctx.r31.u64 | 147;
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// lwz r10,100(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 100);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC0EFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc0f10
	if (cr6.eq) goto loc_82CC0F10;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,602
	ctx.r4.u64 = ctx.r4.u64 | 602;
	// bl 0x82d29598
	ctx.lr = 0x82CC0F10;
	sub_82D29598(ctx, base);
loc_82CC0F10:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r17,r11,6828
	ctx.r17.s64 = ctx.r11.s64 + 6828;
	// li r19,15
	ctx.r19.s64 = 15;
	// stw r26,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r26.u32);
	// stb r26,784(r1)
	PPC_STORE_U8(ctx.r1.u32 + 784, ctx.r26.u8);
	// stw r19,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r19.u32);
	// stw r19,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r19.u32);
	// lwz r4,32(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 32);
	// stw r26,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r26.u32);
	// stb r26,812(r1)
	PPC_STORE_U8(ctx.r1.u32 + 812, ctx.r26.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r19,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r19.u32);
	// stw r26,856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 856, ctx.r26.u32);
	// stb r26,840(r1)
	PPC_STORE_U8(ctx.r1.u32 + 840, ctx.r26.u8);
	// stw r19,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r19.u32);
	// stw r26,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r26.u32);
	// stb r26,880(r1)
	PPC_STORE_U8(ctx.r1.u32 + 880, ctx.r26.u8);
	// stw r19,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r19.u32);
	// stw r26,924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 924, ctx.r26.u32);
	// stb r26,908(r1)
	PPC_STORE_U8(ctx.r1.u32 + 908, ctx.r26.u8);
	// stw r19,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, ctx.r19.u32);
	// stw r26,952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 952, ctx.r26.u32);
	// stb r26,936(r1)
	PPC_STORE_U8(ctx.r1.u32 + 936, ctx.r26.u8);
	// stw r19,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r19.u32);
	// stw r26,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r26.u32);
	// stb r26,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r26.u8);
	// stw r19,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r19.u32);
	// stw r26,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r26.u32);
	// stb r26,316(r1)
	PPC_STORE_U8(ctx.r1.u32 + 316, ctx.r26.u8);
	// stw r19,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r19.u32);
	// stw r26,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r26.u32);
	// stb r26,344(r1)
	PPC_STORE_U8(ctx.r1.u32 + 344, ctx.r26.u8);
loc_82CC0F94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc0f94
	if (!cr6.eq) goto loc_82CC0F94;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CC0FB8;
	sub_8259CC28(ctx, base);
	// lwz r4,28(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CC0FC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc0fc0
	if (!cr6.eq) goto loc_82CC0FC0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CC0FE4;
	sub_8259CC28(ctx, base);
	// lwz r4,36(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 36);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CC0FEC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc0fec
	if (!cr6.eq) goto loc_82CC0FEC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,812
	ctx.r3.s64 = ctx.r1.s64 + 812;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CC1010;
	sub_8259CC28(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r28,-31776
	ctx.r28.s64 = -2082471936;
	// li r16,2
	ctx.r16.s64 = 2;
	// lis r27,-31776
	ctx.r27.s64 = -2082471936;
loc_82CC1024:
	// addi r11,r1,784
	ctx.r11.s64 = ctx.r1.s64 + 784;
	// lwz r5,18392(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 18392);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ab6970
	ctx.lr = 0x82CC103C;
	sub_82AB6970(ctx, base);
	// addi r11,r1,880
	ctx.r11.s64 = ctx.r1.s64 + 880;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CC1054;
	sub_8259CB28(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc1070
	if (cr6.lt) goto loc_82CC1070;
	// stw r16,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r16.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x825952b8
	ctx.lr = 0x82CC1070;
	sub_825952B8(ctx, base);
loc_82CC1070:
	// stw r19,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r19.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r26,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r26.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stb r26,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r26.u8);
	// lwz r5,18396(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18396);
	// bl 0x82ab6970
	ctx.lr = 0x82CC108C;
	sub_82AB6970(ctx, base);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CC10A4;
	sub_8259CB28(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc10c0
	if (cr6.lt) goto loc_82CC10C0;
	// stw r16,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r16.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,480(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x825952b8
	ctx.lr = 0x82CC10C0;
	sub_825952B8(ctx, base);
loc_82CC10C0:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// stw r19,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r19.u32);
	// stw r26,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r26.u32);
	// cmplwi cr6,r31,84
	cr6.compare<uint32_t>(ctx.r31.u32, 84, xer);
	// stb r26,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r26.u8);
	// blt cr6,0x82cc1024
	if (cr6.lt) goto loc_82CC1024;
	// stw r19,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r19.u32);
	// addi r30,r17,12
	ctx.r30.s64 = ctx.r17.s64 + 12;
	// stw r26,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r26.u32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stb r26,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r26.u8);
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// stw r19,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r19.u32);
	// stw r26,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r26.u32);
	// stb r26,700(r1)
	PPC_STORE_U8(ctx.r1.u32 + 700, ctx.r26.u8);
	// stw r19,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r19.u32);
	// stw r26,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r26.u32);
	// stb r26,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r26.u8);
	// stw r19,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r19.u32);
	// stw r26,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r26.u32);
	// stb r26,636(r1)
	PPC_STORE_U8(ctx.r1.u32 + 636, ctx.r26.u8);
	// stw r19,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r19.u32);
	// stw r26,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r26.u32);
	// stb r26,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r26.u8);
	// stw r19,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r19.u32);
	// stw r26,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r26.u32);
	// stb r26,572(r1)
	PPC_STORE_U8(ctx.r1.u32 + 572, ctx.r26.u8);
loc_82CC112C:
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// lwz r5,40(r17)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + 40);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82ab6970
	ctx.lr = 0x82CC1140;
	sub_82AB6970(ctx, base);
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CC1158;
	sub_8259CB28(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc1174
	if (cr6.lt) goto loc_82CC1174;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x825952b8
	ctx.lr = 0x82CC1174;
	sub_825952B8(ctx, base);
loc_82CC1174:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r19,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r19.u32);
	// stw r26,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r26,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r26.u8);
	// stw r19,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r19.u32);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
loc_82CC1194:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc1194
	if (!cr6.eq) goto loc_82CC1194;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CC11B8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lwz r5,0(r17)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x82CC11C8;
	sub_82AB6970(ctx, base);
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CC11E0;
	sub_8259CB28(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cc11fc
	if (cr6.lt) goto loc_82CC11FC;
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x825952b8
	ctx.lr = 0x82CC11FC;
	sub_825952B8(ctx, base);
loc_82CC11FC:
	// stw r19,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r19.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r26,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r26.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stb r26,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r26.u8);
	// lwz r5,4(r17)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// bl 0x82ab6970
	ctx.lr = 0x82CC1218;
	sub_82AB6970(ctx, base);
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CC1230;
	sub_8259CB28(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc124c
	if (cr6.lt) goto loc_82CC124C;
	// stw r16,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,512(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x825952b8
	ctx.lr = 0x82CC124C;
	sub_825952B8(ctx, base);
loc_82CC124C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r19,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r19.u32);
	// stw r26,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r26,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r26.u8);
	// blt cr6,0x82cc1274
	if (cr6.lt) goto loc_82CC1274;
	// stw r16,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r16.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82CC1274;
	sub_825952B8(ctx, base);
loc_82CC1274:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r19,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r19.u32);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x82cc112c
	if (!cr0.eq) goto loc_82CC112C;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,880
	ctx.r31.s64 = ctx.r1.s64 + 880;
	// li r29,3
	ctx.r29.s64 = 3;
loc_82CC129C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc12b0
	if (cr6.lt) goto loc_82CC12B0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82cc12b4
	goto loc_82CC12B4;
loc_82CC12B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82CC12B4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC12C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc12d8
	if (cr6.eq) goto loc_82CC12D8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82CC12D8;
	sub_82D29598(ctx, base);
loc_82CC12D8:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82cc129c
	if (!cr0.eq) goto loc_82CC129C;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82CC12F0;
	sub_82D33C10(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r26,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,980
	ctx.r3.s64 = ctx.r1.s64 + 980;
	// bl 0x831cdcf0
	ctx.lr = 0x82CC1308;
	sub_831CDCF0(ctx, base);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
loc_82CC1324:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82CC132C:
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r3,96(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x83129988
	ctx.lr = 0x82CC1344;
	sub_83129988(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,976
	ctx.r7.s64 = ctx.r1.s64 + 976;
	// lwzx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r6,r31,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// stwx r5,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u32);
	// ble cr6,0x82cc1374
	if (!cr6.gt) goto loc_82CC1374;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
loc_82CC1374:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x82cc132c
	if (cr6.lt) goto loc_82CC132C;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplwi cr6,r28,14
	cr6.compare<uint32_t>(ctx.r28.u32, 14, xer);
	// blt cr6,0x82cc1324
	if (cr6.lt) goto loc_82CC1324;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x82cc1614
	if (cr6.eq) goto loc_82CC1614;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r20,r1,192
	ctx.r20.s64 = ctx.r1.s64 + 192;
	// lfs f30,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_82CC13AC:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CC13B8;
	sub_82D33DB0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc1608
	if (cr6.eq) goto loc_82CC1608;
	// cmplwi cr6,r22,7
	cr6.compare<uint32_t>(ctx.r22.u32, 7, xer);
	// blt cr6,0x82cc13dc
	if (cr6.lt) goto loc_82CC13DC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC13D8;
	sub_82D2AEC8(ctx, base);
	// b 0x82cc1608
	goto loc_82CC1608;
loc_82CC13DC:
	// lwz r11,364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r4,344(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc13f0
	if (!cr6.lt) goto loc_82CC13F0;
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
loc_82CC13F0:
	// lwz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// addi r24,r23,100
	ctx.r24.s64 = ctx.r23.s64 + 100;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC1408;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc1418
	if (cr6.eq) goto loc_82CC1418;
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82CC1418;
	sub_82D29598(ctx, base);
loc_82CC1418:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// rlwinm r25,r22,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
loc_82CC1430:
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// blt cr6,0x82cc1448
	if (cr6.lt) goto loc_82CC1448;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// b 0x82cc144c
	goto loc_82CC144C;
loc_82CC1448:
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_82CC144C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC1460;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc147c
	if (cr6.eq) goto loc_82CC147C;
	// add r11,r25,r29
	ctx.r11.u64 = ctx.r25.u64 + ctx.r29.u64;
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d294d0
	ctx.lr = 0x82CC147C;
	sub_82D294D0(ctx, base);
loc_82CC147C:
	// lwz r30,48(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cc1528
	if (cr6.eq) goto loc_82CC1528;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc14d4
	if (cr6.eq) goto loc_82CC14D4;
	// add r10,r25,r29
	ctx.r10.u64 = ctx.r25.u64 + ctx.r29.u64;
	// addi r9,r1,976
	ctx.r9.s64 = ctx.r1.s64 + 976;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r7,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r7.u64);
	// lfd f0,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f31,f9,f12
	ctx.f31.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// b 0x82cc14d8
	goto loc_82CC14D8;
loc_82CC14D4:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_82CC14D8:
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// lwz r4,20(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// bl 0x83815d38
	ctx.lr = 0x82CC14E4;
	sub_83815D38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x83815b28
	ctx.lr = 0x82CC14F0;
	sub_83815B28(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x83815b28
	ctx.lr = 0x82CC14FC;
	sub_83815B28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x83815b28
	ctx.lr = 0x82CC1508;
	sub_83815B28(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82CC1514;
	sub_83815B68(ctx, base);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838153c8
	ctx.lr = 0x82CC1520;
	sub_838153C8(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x83815cb8
	ctx.lr = 0x82CC1528;
	sub_83815CB8(ctx, base);
loc_82CC1528:
	// add r11,r25,r29
	ctx.r11.u64 = ctx.r25.u64 + ctx.r29.u64;
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cc15b0
	if (cr6.eq) goto loc_82CC15B0;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cc15b0
	if (!cr6.eq) goto loc_82CC15B0;
	// addi r11,r1,692
	ctx.r11.s64 = ctx.r1.s64 + 692;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cc156c
	if (cr6.lt) goto loc_82CC156C;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// b 0x82cc1570
	goto loc_82CC1570;
loc_82CC156C:
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_82CC1570:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC1584;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc1594
	if (cr6.eq) goto loc_82CC1594;
	// clrldi r4,r30,32
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82CC1594;
	sub_82D294D0(ctx, base);
loc_82CC1594:
	// addi r11,r1,628
	ctx.r11.s64 = ctx.r1.s64 + 628;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cc15cc
	if (cr6.lt) goto loc_82CC15CC;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// b 0x82cc15d0
	goto loc_82CC15D0;
loc_82CC15B0:
	// addi r11,r1,564
	ctx.r11.s64 = ctx.r1.s64 + 564;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cc15cc
	if (cr6.lt) goto loc_82CC15CC;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// b 0x82cc15d0
	goto loc_82CC15D0;
loc_82CC15CC:
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_82CC15D0:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC15E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
	// bne 0x82cc1430
	if (!cr0.eq) goto loc_82CC1430;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
loc_82CC1608:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplw cr6,r21,r18
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r18.u32, xer);
	// blt cr6,0x82cc13ac
	if (cr6.lt) goto loc_82CC13AC;
loc_82CC1614:
	// addi r31,r1,600
	ctx.r31.s64 = ctx.r1.s64 + 600;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CC161C:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc163c
	if (cr6.lt) goto loc_82CC163C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r16,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC163C;
	sub_825952B8(ctx, base);
loc_82CC163C:
	// stw r19,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r19.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// bge 0x82cc161c
	if (!cr0.lt) goto loc_82CC161C;
	// addi r31,r1,664
	ctx.r31.s64 = ctx.r1.s64 + 664;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CC1658:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc1678
	if (cr6.lt) goto loc_82CC1678;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r16,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC1678;
	sub_825952B8(ctx, base);
loc_82CC1678:
	// stw r19,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r19.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// bge 0x82cc1658
	if (!cr0.lt) goto loc_82CC1658;
	// addi r31,r1,728
	ctx.r31.s64 = ctx.r1.s64 + 728;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CC1694:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc16b4
	if (cr6.lt) goto loc_82CC16B4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC16B4;
	sub_825952B8(ctx, base);
loc_82CC16B4:
	// stw r19,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r19.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// bge 0x82cc1694
	if (!cr0.lt) goto loc_82CC1694;
	// addi r31,r1,372
	ctx.r31.s64 = ctx.r1.s64 + 372;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_82CC16D0:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc16f0
	if (cr6.lt) goto loc_82CC16F0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC16F0;
	sub_825952B8(ctx, base);
loc_82CC16F0:
	// stw r19,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r19.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// bge 0x82cc16d0
	if (!cr0.lt) goto loc_82CC16D0;
	// addi r31,r1,964
	ctx.r31.s64 = ctx.r1.s64 + 964;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_82CC170C:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc172c
	if (cr6.lt) goto loc_82CC172C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r16,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r16.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC172C;
	sub_825952B8(ctx, base);
loc_82CC172C:
	// stw r19,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r19.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// bge 0x82cc170c
	if (!cr0.lt) goto loc_82CC170C;
	// addi r31,r1,868
	ctx.r31.s64 = ctx.r1.s64 + 868;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_82CC1748:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc1768
	if (cr6.lt) goto loc_82CC1768;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r16.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC1768;
	sub_825952B8(ctx, base);
loc_82CC1768:
	// stw r19,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r19.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// bge 0x82cc1748
	if (!cr0.lt) goto loc_82CC1748;
loc_82CC177C:
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// lfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC178C"))) PPC_WEAK_FUNC(sub_82CC178C);
PPC_FUNC_IMPL(__imp__sub_82CC178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1790"))) PPC_WEAK_FUNC(sub_82CC1790);
PPC_FUNC_IMPL(__imp__sub_82CC1790) {
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
	// bl 0x82cbf740
	ctx.lr = 0x82CC17A8;
	sub_82CBF740(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbfd00
	ctx.lr = 0x82CC17B0;
	sub_82CBFD00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc0288
	ctx.lr = 0x82CC17B8;
	sub_82CC0288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc0360
	ctx.lr = 0x82CC17C0;
	sub_82CC0360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc0dc8
	ctx.lr = 0x82CC17C8;
	sub_82CC0DC8(ctx, base);
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

__attribute__((alias("__imp__sub_82CC17DC"))) PPC_WEAK_FUNC(sub_82CC17DC);
PPC_FUNC_IMPL(__imp__sub_82CC17DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC17E0"))) PPC_WEAK_FUNC(sub_82CC17E0);
PPC_FUNC_IMPL(__imp__sub_82CC17E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,13
	cr6.compare<uint32_t>(ctx.r4.u32, 13, xer);
	// bgt cr6,0x82cc18b0
	if (cr6.gt) goto loc_82CC18B0;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6144
	ctx.r12.s64 = ctx.r12.s64 + 6144;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_82CC1838;
	case 1:
		goto loc_82CC1844;
	case 2:
		goto loc_82CC1850;
	case 3:
		goto loc_82CC185C;
	case 4:
		goto loc_82CC1868;
	case 5:
		goto loc_82CC1874;
	case 6:
		goto loc_82CC18B0;
	case 7:
		goto loc_82CC18B0;
	case 8:
		goto loc_82CC1880;
	case 9:
		goto loc_82CC188C;
	case 10:
		goto loc_82CC1874;
	case 11:
		goto loc_82CC1868;
	case 12:
		goto loc_82CC1898;
	case 13:
		goto loc_82CC18A4;
	default:
		return;
	}
	// lwz r22,6200(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6200);
	// lwz r22,6212(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6212);
	// lwz r22,6224(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6224);
	// lwz r22,6236(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6236);
	// lwz r22,6248(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6248);
	// lwz r22,6260(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6260);
	// lwz r22,6320(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6320);
	// lwz r22,6320(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6320);
	// lwz r22,6272(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6272);
	// lwz r22,6284(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6284);
	// lwz r22,6260(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6260);
	// lwz r22,6248(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6248);
	// lwz r22,6296(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6296);
	// lwz r22,6308(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6308);
loc_82CC1838:
	// lis r3,61
	ctx.r3.s64 = 3997696;
	// ori r3,r3,116
	ctx.r3.u64 = ctx.r3.u64 | 116;
	// blr 
	return;
loc_82CC1844:
	// lis r3,11
	ctx.r3.s64 = 720896;
	// ori r3,r3,253
	ctx.r3.u64 = ctx.r3.u64 | 253;
	// blr 
	return;
loc_82CC1850:
	// lis r3,24
	ctx.r3.s64 = 1572864;
	// ori r3,r3,158
	ctx.r3.u64 = ctx.r3.u64 | 158;
	// blr 
	return;
loc_82CC185C:
	// lis r3,24
	ctx.r3.s64 = 1572864;
	// ori r3,r3,157
	ctx.r3.u64 = ctx.r3.u64 | 157;
	// blr 
	return;
loc_82CC1868:
	// lis r3,61
	ctx.r3.s64 = 3997696;
	// ori r3,r3,118
	ctx.r3.u64 = ctx.r3.u64 | 118;
	// blr 
	return;
loc_82CC1874:
	// lis r3,11
	ctx.r3.s64 = 720896;
	// ori r3,r3,255
	ctx.r3.u64 = ctx.r3.u64 | 255;
	// blr 
	return;
loc_82CC1880:
	// lis r3,61
	ctx.r3.s64 = 3997696;
	// ori r3,r3,124
	ctx.r3.u64 = ctx.r3.u64 | 124;
	// blr 
	return;
loc_82CC188C:
	// lis r3,61
	ctx.r3.s64 = 3997696;
	// ori r3,r3,78
	ctx.r3.u64 = ctx.r3.u64 | 78;
	// blr 
	return;
loc_82CC1898:
	// lis r3,61
	ctx.r3.s64 = 3997696;
	// ori r3,r3,126
	ctx.r3.u64 = ctx.r3.u64 | 126;
	// blr 
	return;
loc_82CC18A4:
	// lis r3,61
	ctx.r3.s64 = 3997696;
	// ori r3,r3,58
	ctx.r3.u64 = ctx.r3.u64 | 58;
	// blr 
	return;
loc_82CC18B0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC18B8"))) PPC_WEAK_FUNC(sub_82CC18B8);
PPC_FUNC_IMPL(__imp__sub_82CC18B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CC18C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// bne cr6,0x82cc190c
	if (!cr6.eq) goto loc_82CC190C;
	// li r3,79
	ctx.r3.s64 = 79;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CC190C:
	// rlwinm r31,r4,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83129988
	ctx.lr = 0x82CC1924;
	sub_83129988(ctx, base);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x83129988
	ctx.lr = 0x82CC1940;
	sub_83129988(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// ble cr6,0x82cc1958
	if (!cr6.gt) goto loc_82CC1958;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CC1958:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1964"))) PPC_WEAK_FUNC(sub_82CC1964);
PPC_FUNC_IMPL(__imp__sub_82CC1964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1968"))) PPC_WEAK_FUNC(sub_82CC1968);
PPC_FUNC_IMPL(__imp__sub_82CC1968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CC1970;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r6,13
	ctx.r6.s64 = 13;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// bne cr6,0x82cc19bc
	if (!cr6.eq) goto loc_82CC19BC;
	// li r3,79
	ctx.r3.s64 = 79;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CC19BC:
	// rlwinm r31,r4,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83129988
	ctx.lr = 0x82CC19D4;
	sub_83129988(ctx, base);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x83129988
	ctx.lr = 0x82CC19F0;
	sub_83129988(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// ble cr6,0x82cc1a08
	if (!cr6.gt) goto loc_82CC1A08;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CC1A08:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1A14"))) PPC_WEAK_FUNC(sub_82CC1A14);
PPC_FUNC_IMPL(__imp__sub_82CC1A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1A18"))) PPC_WEAK_FUNC(sub_82CC1A18);
PPC_FUNC_IMPL(__imp__sub_82CC1A18) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,61
	ctx.r4.s64 = 3997696;
	// ori r4,r4,114
	ctx.r4.u64 = ctx.r4.u64 | 114;
	// b 0x82d04220
	sub_82D04220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1A28"))) PPC_WEAK_FUNC(sub_82CC1A28);
PPC_FUNC_IMPL(__imp__sub_82CC1A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CC1A30;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x82CC1A5C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc1ab4
	if (cr6.eq) goto loc_82CC1AB4;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cfef68
	ctx.lr = 0x82CC1A7C;
	sub_82CFEF68(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24920
	ctx.r9.s64 = ctx.r11.s64 + -24920;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7024(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 7024);
	// bl 0x82d23390
	ctx.lr = 0x82CC1AA8;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CC1AB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1AC0"))) PPC_WEAK_FUNC(sub_82CC1AC0);
PPC_FUNC_IMPL(__imp__sub_82CC1AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CC1AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-25366
	ctx.r4.s64 = ctx.r10.s64 + -25366;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82CC1AF8;
	sub_8259CC28(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x82cc1bdc
	if (cr6.gt) goto loc_82CC1BDC;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6944
	ctx.r12.s64 = ctx.r12.s64 + 6944;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82CC1B50;
	case 1:
		goto loc_82CC1B5C;
	case 2:
		goto loc_82CC1B68;
	case 3:
		goto loc_82CC1B74;
	case 4:
		goto loc_82CC1B80;
	case 5:
		goto loc_82CC1B8C;
	case 6:
		goto loc_82CC1B98;
	case 7:
		goto loc_82CC1BA4;
	case 8:
		goto loc_82CC1BB0;
	case 9:
		goto loc_82CC1BBC;
	case 10:
		goto loc_82CC1BC8;
	case 11:
		goto loc_82CC1BD4;
	default:
		return;
	}
	// lwz r22,6992(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6992);
	// lwz r22,7004(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 7004);
	// lwz r22,7016(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 7016);
	// lwz r22,7028(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 7028);
	// lwz r22,7040(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 7040);
	// lwz r22,7052(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 7052);
	// lwz r22,7064(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 7064);
	// lwz r22,7076(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 7076);
	// lwz r22,7088(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 7088);
	// lwz r22,7100(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 7100);
	// lwz r22,7112(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 7112);
	// lwz r22,7124(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 7124);
loc_82CC1B50:
	// lis r31,108
	ctx.r31.s64 = 7077888;
	// ori r31,r31,237
	ctx.r31.u64 = ctx.r31.u64 | 237;
	// b 0x82cc1bdc
	goto loc_82CC1BDC;
loc_82CC1B5C:
	// lis r31,108
	ctx.r31.s64 = 7077888;
	// ori r31,r31,238
	ctx.r31.u64 = ctx.r31.u64 | 238;
	// b 0x82cc1bdc
	goto loc_82CC1BDC;
loc_82CC1B68:
	// lis r31,108
	ctx.r31.s64 = 7077888;
	// ori r31,r31,239
	ctx.r31.u64 = ctx.r31.u64 | 239;
	// b 0x82cc1bdc
	goto loc_82CC1BDC;
loc_82CC1B74:
	// lis r31,108
	ctx.r31.s64 = 7077888;
	// ori r31,r31,240
	ctx.r31.u64 = ctx.r31.u64 | 240;
	// b 0x82cc1bdc
	goto loc_82CC1BDC;
loc_82CC1B80:
	// lis r31,108
	ctx.r31.s64 = 7077888;
	// ori r31,r31,241
	ctx.r31.u64 = ctx.r31.u64 | 241;
	// b 0x82cc1bdc
	goto loc_82CC1BDC;
loc_82CC1B8C:
	// lis r31,108
	ctx.r31.s64 = 7077888;
	// ori r31,r31,242
	ctx.r31.u64 = ctx.r31.u64 | 242;
	// b 0x82cc1bdc
	goto loc_82CC1BDC;
loc_82CC1B98:
	// lis r31,108
	ctx.r31.s64 = 7077888;
	// ori r31,r31,243
	ctx.r31.u64 = ctx.r31.u64 | 243;
	// b 0x82cc1bdc
	goto loc_82CC1BDC;
loc_82CC1BA4:
	// lis r31,108
	ctx.r31.s64 = 7077888;
	// ori r31,r31,244
	ctx.r31.u64 = ctx.r31.u64 | 244;
	// b 0x82cc1bdc
	goto loc_82CC1BDC;
loc_82CC1BB0:
	// lis r31,108
	ctx.r31.s64 = 7077888;
	// ori r31,r31,245
	ctx.r31.u64 = ctx.r31.u64 | 245;
	// b 0x82cc1bdc
	goto loc_82CC1BDC;
loc_82CC1BBC:
	// lis r31,108
	ctx.r31.s64 = 7077888;
	// ori r31,r31,246
	ctx.r31.u64 = ctx.r31.u64 | 246;
	// b 0x82cc1bdc
	goto loc_82CC1BDC;
loc_82CC1BC8:
	// lis r31,108
	ctx.r31.s64 = 7077888;
	// ori r31,r31,247
	ctx.r31.u64 = ctx.r31.u64 | 247;
	// b 0x82cc1bdc
	goto loc_82CC1BDC;
loc_82CC1BD4:
	// lis r31,108
	ctx.r31.s64 = 7077888;
	// ori r31,r31,248
	ctx.r31.u64 = ctx.r31.u64 | 248;
loc_82CC1BDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82CC1BE8;
	sub_82D042A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1BF4"))) PPC_WEAK_FUNC(sub_82CC1BF4);
PPC_FUNC_IMPL(__imp__sub_82CC1BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC1BF8"))) PPC_WEAK_FUNC(sub_82CC1BF8);
PPC_FUNC_IMPL(__imp__sub_82CC1BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CC1C00;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC1C0C;
	sub_82D19A78(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d33db0
	ctx.lr = 0x82CC1C14;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc1e00
	if (cr6.eq) goto loc_82CC1E00;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// lis r9,61
	ctx.r9.s64 = 3997696;
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// lis r7,61
	ctx.r7.s64 = 3997696;
	// ori r5,r9,115
	ctx.r5.u64 = ctx.r9.u64 | 115;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r11,r8,101
	ctx.r11.u64 = ctx.r8.u64 | 101;
	// lwz r4,3216(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3216);
	// ori r10,r7,117
	ctx.r10.u64 = ctx.r7.u64 | 117;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CC1C60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc1c74
	if (cr6.eq) goto loc_82CC1C74;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,578
	ctx.r4.u64 = ctx.r4.u64 | 578;
	// bl 0x82d29598
	ctx.lr = 0x82CC1C74;
	sub_82D29598(ctx, base);
loc_82CC1C74:
	// lis r31,-31759
	ctx.r31.s64 = -2081357824;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,3220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3220);
	// bl 0x837b0c10
	ctx.lr = 0x82CC1C84;
	sub_837B0C10(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,18392(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18392);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CC1C90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc1c90
	if (!cr6.eq) goto loc_82CC1C90;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82CC1CB4;
	sub_825A1EB8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,3220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3220);
	// bl 0x837b0c10
	ctx.lr = 0x82CC1CC0;
	sub_837B0C10(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r4,18396(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18396);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CC1CCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc1ccc
	if (!cr6.eq) goto loc_82CC1CCC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82CC1CF0;
	sub_825A1EB8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r1,88
	ctx.r29.s64 = ctx.r1.s64 + 88;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82CC1CFC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CC1D08;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc1da4
	if (cr6.eq) goto loc_82CC1DA4;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc1d24
	if (!cr6.lt) goto loc_82CC1D24;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82CC1D24:
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC1D3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc1d4c
	if (cr6.eq) goto loc_82CC1D4C;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82CC1D4C;
	sub_82D29598(ctx, base);
loc_82CC1D4C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc1d60
	if (!cr6.lt) goto loc_82CC1D60;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82CC1D60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC1D74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc1da4
	if (cr6.eq) goto loc_82CC1DA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x82cc18b8
	ctx.lr = 0x82CC1D8C;
	sub_82CC18B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cc17e0
	ctx.lr = 0x82CC1D98;
	sub_82CC17E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82CC1DA4;
	sub_82D29598(ctx, base);
loc_82CC1DA4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82cc1cfc
	if (cr6.lt) goto loc_82CC1CFC;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc1dd4
	if (cr6.lt) goto loc_82CC1DD4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82CC1DD4;
	sub_825952B8(ctx, base);
loc_82CC1DD4:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// blt cr6,0x82cc1e00
	if (cr6.lt) goto loc_82CC1E00;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82CC1E00;
	sub_825952B8(ctx, base);
loc_82CC1E00:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1E08"))) PPC_WEAK_FUNC(sub_82CC1E08);
PPC_FUNC_IMPL(__imp__sub_82CC1E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CC1E10;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC1E1C;
	sub_82D19A78(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82d33db0
	ctx.lr = 0x82CC1E24;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc2010
	if (cr6.eq) goto loc_82CC2010;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// lis r9,61
	ctx.r9.s64 = 3997696;
	// lis r8,61
	ctx.r8.s64 = 3997696;
	// lis r7,990
	ctx.r7.s64 = 64880640;
	// ori r5,r9,123
	ctx.r5.u64 = ctx.r9.u64 | 123;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r11,r8,125
	ctx.r11.u64 = ctx.r8.u64 | 125;
	// lwz r4,3216(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3216);
	// ori r10,r7,174
	ctx.r10.u64 = ctx.r7.u64 | 174;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CC1E70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc1e84
	if (cr6.eq) goto loc_82CC1E84;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,579
	ctx.r4.u64 = ctx.r4.u64 | 579;
	// bl 0x82d29598
	ctx.lr = 0x82CC1E84;
	sub_82D29598(ctx, base);
loc_82CC1E84:
	// lis r31,-31759
	ctx.r31.s64 = -2081357824;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,3220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3220);
	// bl 0x837b0c10
	ctx.lr = 0x82CC1E94;
	sub_837B0C10(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,18392(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18392);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CC1EA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc1ea0
	if (!cr6.eq) goto loc_82CC1EA0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82CC1EC4;
	sub_825A1EB8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,3220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3220);
	// bl 0x837b0c10
	ctx.lr = 0x82CC1ED0;
	sub_837B0C10(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r4,18396(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18396);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CC1EDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc1edc
	if (!cr6.eq) goto loc_82CC1EDC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82CC1F00;
	sub_825A1EB8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r1,88
	ctx.r29.s64 = ctx.r1.s64 + 88;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82CC1F0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CC1F18;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc1fb4
	if (cr6.eq) goto loc_82CC1FB4;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc1f34
	if (!cr6.lt) goto loc_82CC1F34;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82CC1F34:
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC1F4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc1f5c
	if (cr6.eq) goto loc_82CC1F5C;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82CC1F5C;
	sub_82D29598(ctx, base);
loc_82CC1F5C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc1f70
	if (!cr6.lt) goto loc_82CC1F70;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82CC1F70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC1F84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc1fb4
	if (cr6.eq) goto loc_82CC1FB4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x82cc1968
	ctx.lr = 0x82CC1F9C;
	sub_82CC1968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cc17e0
	ctx.lr = 0x82CC1FA8;
	sub_82CC17E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82CC1FB4;
	sub_82D29598(ctx, base);
loc_82CC1FB4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82cc1f0c
	if (cr6.lt) goto loc_82CC1F0C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc1fe4
	if (cr6.lt) goto loc_82CC1FE4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82CC1FE4;
	sub_825952B8(ctx, base);
loc_82CC1FE4:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// blt cr6,0x82cc2010
	if (cr6.lt) goto loc_82CC2010;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82CC2010;
	sub_825952B8(ctx, base);
loc_82CC2010:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2018"))) PPC_WEAK_FUNC(sub_82CC2018);
PPC_FUNC_IMPL(__imp__sub_82CC2018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82CC2020;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce760
	ctx.lr = 0x82CC2028;
	__savefpr_22(ctx, base);
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC2034;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CC203C;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc313c
	if (cr6.eq) goto loc_82CC313C;
	// lwz r3,96(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 96);
	// bl 0x83767d18
	ctx.lr = 0x82CC2050;
	sub_83767D18(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lwz r3,96(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 96);
	// bl 0x835427f8
	ctx.lr = 0x82CC205C;
	sub_835427F8(ctx, base);
	// lwz r11,100(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 100);
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r30,1
	ctx.r30.s64 = 1;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r28,r10,2864
	ctx.r28.s64 = ctx.r10.s64 + 2864;
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc20a4
	if (!cr6.eq) goto loc_82CC20A4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82b06c70
	ctx.lr = 0x82CC2094;
	sub_82B06C70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc20a8
	if (!cr6.eq) goto loc_82CC20A8;
loc_82CC20A4:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82CC20A8:
	// addi r11,r1,452
	ctx.r11.s64 = ctx.r1.s64 + 452;
	// stw r30,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r30.u32);
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// stw r30,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r30.u32);
	// lis r8,26
	ctx.r8.s64 = 1703936;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// lis r7,26
	ctx.r7.s64 = 1703936;
	// stw r31,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r31.u32);
	// lis r6,61
	ctx.r6.s64 = 3997696;
	// stw r31,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r31.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lis r4,24
	ctx.r4.s64 = 1572864;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// li r25,14
	ctx.r25.s64 = 14;
	// li r24,17
	ctx.r24.s64 = 17;
	// stb r10,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r10.u8);
	// ori r9,r9,573
	ctx.r9.u64 = ctx.r9.u64 | 573;
	// stw r25,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r25.u32);
	// ori r8,r8,574
	ctx.r8.u64 = ctx.r8.u64 | 574;
	// stw r24,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r24.u32);
	// ori r7,r7,575
	ctx.r7.u64 = ctx.r7.u64 | 575;
	// stw r9,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r9.u32);
	// ori r6,r6,116
	ctx.r6.u64 = ctx.r6.u64 | 116;
	// stw r8,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r8.u32);
	// ori r5,r5,253
	ctx.r5.u64 = ctx.r5.u64 | 253;
	// stw r7,696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 696, ctx.r7.u32);
	// ori r4,r4,157
	ctx.r4.u64 = ctx.r4.u64 | 157;
	// stw r6,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r6.u32);
	// lis r30,61
	ctx.r30.s64 = 3997696;
	// stw r5,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r5.u32);
	// lis r29,61
	ctx.r29.s64 = 3997696;
	// stw r4,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r4.u32);
	// lis r3,24
	ctx.r3.s64 = 1572864;
	// ori r9,r30,124
	ctx.r9.u64 = ctx.r30.u64 | 124;
	// ori r8,r29,78
	ctx.r8.u64 = ctx.r29.u64 | 78;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r9,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r9.u32);
	// li r14,2
	ctx.r14.s64 = 2;
	// stw r8,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r8.u32);
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// stw r26,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r26.u32);
	// li r23,16
	ctx.r23.s64 = 16;
	// stw r14,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r14.u32);
	// li r25,19
	ctx.r25.s64 = 19;
	// li r24,18
	ctx.r24.s64 = 18;
	// stw r23,776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 776, ctx.r23.u32);
	// ori r3,r3,158
	ctx.r3.u64 = ctx.r3.u64 | 158;
	// stw r25,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r25.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r24,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r24.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r3,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r3.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r7,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r7.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r6,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r6.u32);
	// stw r5,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r5.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r4,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r4.u32);
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82CC219C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CC21A8;
	sub_82D33DB0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82cc219c
	if (cr6.lt) goto loc_82CC219C;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3216(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3216);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC21D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r21,r11,-25008
	ctx.r21.s64 = ctx.r11.s64 + -25008;
	// beq cr6,0x82cc241c
	if (cr6.eq) goto loc_82CC241C;
	// lwz r3,96(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 96);
	// bl 0x83767d18
	ctx.lr = 0x82CC21F0;
	sub_83767D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,96(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 96);
	// lbz r29,2(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x835410b8
	ctx.lr = 0x82CC2200;
	sub_835410B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r27,2(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// bl 0x8315fe20
	ctx.lr = 0x82CC2214;
	sub_8315FE20(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8315fe20
	ctx.lr = 0x82CC2220;
	sub_8315FE20(ctx, base);
	// stw r26,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// addi r4,r21,-357
	ctx.r4.s64 = ctx.r21.s64 + -357;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8259cc28
	ctx.lr = 0x82CC223C;
	sub_8259CC28(ctx, base);
	// lwz r3,96(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 96);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// bne cr6,0x82cc22dc
	if (!cr6.eq) goto loc_82CC22DC;
	// bl 0x835427f8
	ctx.lr = 0x82CC2254;
	sub_835427F8(ctx, base);
	// lbz r4,2(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x82cc22b4
	if (cr6.eq) goto loc_82CC22B4;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x8315fe20
	ctx.lr = 0x82CC2270;
	sub_8315FE20(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r6,416(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc2284
	if (!cr6.lt) goto loc_82CC2284;
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
loc_82CC2284:
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r5,1296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1296);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc2298
	if (!cr6.lt) goto loc_82CC2298;
	// addi r5,r1,1296
	ctx.r5.s64 = ctx.r1.s64 + 1296;
loc_82CC2298:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// ori r4,r4,572
	ctx.r4.u64 = ctx.r4.u64 | 572;
	// bl 0x82d042a8
	ctx.lr = 0x82CC22A8;
	sub_82D042A8(ctx, base);
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x8387e8e0
	ctx.lr = 0x82CC22B0;
	sub_8387E8E0(ctx, base);
	// b 0x82cc2390
	goto loc_82CC2390;
loc_82CC22B4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc22c8
	if (!cr6.lt) goto loc_82CC22C8;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82CC22C8:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// ori r4,r4,603
	ctx.r4.u64 = ctx.r4.u64 | 603;
	// bl 0x82d042a8
	ctx.lr = 0x82CC22D8;
	sub_82D042A8(ctx, base);
	// b 0x82cc2390
	goto loc_82CC2390;
loc_82CC22DC:
	// bl 0x835410b8
	ctx.lr = 0x82CC22E0;
	sub_835410B8(ctx, base);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82cc22f8
	if (cr6.eq) goto loc_82CC22F8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82cc2324
	goto loc_82CC2324;
loc_82CC22F8:
	// lbz r9,2(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82cc2310
	if (cr6.eq) goto loc_82CC2310;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82cc2324
	goto loc_82CC2324;
loc_82CC2310:
	// lbz r9,3(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_82CC2324:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc2358
	if (cr6.eq) goto loc_82CC2358;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc2344
	if (!cr6.lt) goto loc_82CC2344;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82CC2344:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// ori r4,r4,603
	ctx.r4.u64 = ctx.r4.u64 | 603;
	// bl 0x82d042a8
	ctx.lr = 0x82CC2354;
	sub_82D042A8(ctx, base);
	// b 0x82cc2390
	goto loc_82CC2390;
loc_82CC2358:
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r6,416(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc236c
	if (!cr6.lt) goto loc_82CC236C;
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
loc_82CC236C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc2380
	if (!cr6.lt) goto loc_82CC2380;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82CC2380:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// ori r4,r4,572
	ctx.r4.u64 = ctx.r4.u64 | 572;
	// bl 0x82d042a8
	ctx.lr = 0x82CC2390;
	sub_82D042A8(ctx, base);
loc_82CC2390:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CC23A4;
	sub_82D291E0(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc23c0
	if (cr6.lt) goto loc_82CC23C0;
	// stw r14,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r14.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82CC23C0;
	sub_825952B8(ctx, base);
loc_82CC23C0:
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// stw r26,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x82cc23e8
	if (cr6.lt) goto loc_82CC23E8;
	// stw r14,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r14.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x825952b8
	ctx.lr = 0x82CC23E8;
	sub_825952B8(ctx, base);
loc_82CC23E8:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r26,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r26.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// blt cr6,0x82cc2410
	if (cr6.lt) goto loc_82CC2410;
	// stw r14,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r14.u32);
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CC2410;
	sub_825952B8(ctx, base);
loc_82CC2410:
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_82CC241C:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r26,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r26.u32);
	// stw r31,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r31.u32);
	// addi r25,r11,7016
	ctx.r25.s64 = ctx.r11.s64 + 7016;
	// stb r31,816(r1)
	PPC_STORE_U8(ctx.r1.u32 + 816, ctx.r31.u8);
	// lwz r4,20(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CC2438:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc2438
	if (!cr6.eq) goto loc_82CC2438;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CC245C;
	sub_8259CC28(ctx, base);
	// lwz r4,24(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// stw r26,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_82CC2470:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc2470
	if (!cr6.eq) goto loc_82CC2470;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CC2494;
	sub_8259CC28(ctx, base);
	// lwz r4,28(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// stw r26,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r26.u32);
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
loc_82CC24A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc24a8
	if (!cr6.eq) goto loc_82CC24A8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CC24CC;
	sub_8259CC28(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f27,-10804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f27.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f28,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f28.f64 = double(temp.f32);
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// lfs f25,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f25.f64 = double(temp.f32);
	// lfs f29,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// lfs f22,8976(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8976);
	ctx.f22.f64 = double(temp.f32);
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// lfs f24,20056(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20056);
	ctx.f24.f64 = double(temp.f32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// lfs f23,20048(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20048);
	ctx.f23.f64 = double(temp.f32);
	// ori r17,r3,623
	ctx.r17.u64 = ctx.r3.u64 | 623;
	// lis r15,-31776
	ctx.r15.s64 = -2082471936;
	// lis r16,-31776
	ctx.r16.s64 = -2082471936;
loc_82CC2520:
	// rlwinm r20,r19,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r20,r11
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82cc30c0
	if (cr6.eq) goto loc_82CC30C0;
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// lwz r5,18392(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18392);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// lwz r29,16(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// bl 0x82ab6970
	ctx.lr = 0x82CC2544;
	sub_82AB6970(ctx, base);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82CC2564;
	sub_8259CB28(ctx, base);
	// lwz r11,1284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1284);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc2580
	if (cr6.lt) goto loc_82CC2580;
	// stw r14,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,1264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1264);
	// bl 0x825952b8
	ctx.lr = 0x82CC2580;
	sub_825952B8(ctx, base);
loc_82CC2580:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,1284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1284, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,1280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1280, ctx.r31.u32);
	// stb r31,1264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1264, ctx.r31.u8);
	// bge cr6,0x82cc25a0
	if (!cr6.lt) goto loc_82CC25A0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CC25A0:
	// lwz r11,100(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 100);
	// addi r28,r22,100
	ctx.r28.s64 = ctx.r22.s64 + 100;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC25B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc25cc
	if (cr6.eq) goto loc_82CC25CC;
	// addi r11,r1,688
	ctx.r11.s64 = ctx.r1.s64 + 688;
	// lwzx r4,r20,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// bl 0x82d29598
	ctx.lr = 0x82CC25CC;
	sub_82D29598(ctx, base);
loc_82CC25CC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bge cr6,0x82cc25e4
	if (!cr6.lt) goto loc_82CC25E4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82CC25E4:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r21,-326
	ctx.r4.s64 = ctx.r21.s64 + -326;
	// stw r26,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CC2604;
	sub_8259CC28(ctx, base);
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// lwz r5,18396(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 18396);
	// bl 0x82ab6970
	ctx.lr = 0x82CC2614;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8259cb28
	ctx.lr = 0x82CC2628;
	sub_8259CB28(ctx, base);
	// lwz r11,964(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 964);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc2644
	if (cr6.lt) goto loc_82CC2644;
	// stw r14,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r14.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lwz r4,944(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	// bl 0x825952b8
	ctx.lr = 0x82CC2644;
	sub_825952B8(ctx, base);
loc_82CC2644:
	// stw r26,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r26.u32);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// stw r31,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r31.u32);
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// stb r31,944(r1)
	PPC_STORE_U8(ctx.r1.u32 + 944, ctx.r31.u8);
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82ab6970
	ctx.lr = 0x82CC2660;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82CC2674;
	sub_8259CB28(ctx, base);
	// lwz r11,1252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1252);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc2690
	if (cr6.lt) goto loc_82CC2690;
	// stw r14,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r14.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,1232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1232);
	// bl 0x825952b8
	ctx.lr = 0x82CC2690;
	sub_825952B8(ctx, base);
loc_82CC2690:
	// stw r26,1252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1252, ctx.r26.u32);
	// addi r11,r1,768
	ctx.r11.s64 = ctx.r1.s64 + 768;
	// stw r31,1248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1248, ctx.r31.u32);
	// rlwinm r23,r19,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r31,1232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1232, ctx.r31.u8);
	// add r4,r23,r11
	ctx.r4.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r3,96(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 96);
	// bl 0x83129988
	ctx.lr = 0x82CC26B0;
	sub_83129988(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r9,872(r1)
	PPC_STORE_U64(ctx.r1.u32 + 872, ctx.r9.u64);
	// lfd f0,872(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 872);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82cfefb8
	ctx.lr = 0x82CC26D4;
	sub_82CFEFB8(ctx, base);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmuls f31,f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f23.f64));
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82cc26ec
	if (!cr6.lt) goto loc_82CC26EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CC26EC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC2700;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc277c
	if (cr6.eq) goto loc_82CC277C;
	// stw r26,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r26.u32);
	// addi r4,r21,-325
	ctx.r4.s64 = ctx.r21.s64 + -325;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8259cc28
	ctx.lr = 0x82CC2728;
	sub_8259CC28(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d042a8
	ctx.lr = 0x82CC2740;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CC2754;
	sub_82D291E0(ctx, base);
	// lwz r11,484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc2770
	if (cr6.lt) goto loc_82CC2770;
	// stw r14,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r14.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x825952b8
	ctx.lr = 0x82CC2770;
	sub_825952B8(ctx, base);
loc_82CC2770:
	// stw r26,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r26.u32);
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
loc_82CC277C:
	// lbz r24,108(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82cc2b18
	if (cr6.eq) goto loc_82CC2B18;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bge cr6,0x82cc27a0
	if (!cr6.lt) goto loc_82CC27A0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82CC27A0:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x82CC27B4;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82CC27C8;
	sub_8259CB28(ctx, base);
	// lwz r11,1028(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1028);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc27e4
	if (cr6.lt) goto loc_82CC27E4;
	// stw r14,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r14.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lwz r4,1008(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1008);
	// bl 0x825952b8
	ctx.lr = 0x82CC27E4;
	sub_825952B8(ctx, base);
loc_82CC27E4:
	// stw r26,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, ctx.r26.u32);
	// addi r11,r1,772
	ctx.r11.s64 = ctx.r1.s64 + 772;
	// stw r31,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r31.u32);
	// stb r31,1008(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1008, ctx.r31.u8);
	// add r4,r23,r11
	ctx.r4.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r3,96(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 96);
	// bl 0x83129988
	ctx.lr = 0x82CC2800;
	sub_83129988(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r9,864(r1)
	PPC_STORE_U64(ctx.r1.u32 + 864, ctx.r9.u64);
	// lfd f0,864(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 864);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82cfefb8
	ctx.lr = 0x82CC2824;
	sub_82CFEFB8(ctx, base);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmuls f31,f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f23.f64));
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82cc283c
	if (!cr6.lt) goto loc_82CC283C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CC283C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC2850;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc28cc
	if (cr6.eq) goto loc_82CC28CC;
	// stw r26,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r26.u32);
	// addi r4,r21,-295
	ctx.r4.s64 = ctx.r21.s64 + -295;
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x8259cc28
	ctx.lr = 0x82CC2878;
	sub_8259CC28(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82d042a8
	ctx.lr = 0x82CC2890;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CC28A4;
	sub_82D291E0(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc28c0
	if (cr6.lt) goto loc_82CC28C0;
	// stw r14,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r14.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// lwz r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x825952b8
	ctx.lr = 0x82CC28C0;
	sub_825952B8(ctx, base);
loc_82CC28C0:
	// stw r26,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r26.u32);
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
loc_82CC28CC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bge cr6,0x82cc28e4
	if (!cr6.lt) goto loc_82CC28E4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82CC28E4:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x82CC28F8;
	sub_82AB6970(ctx, base);
	// addi r4,r21,-20
	ctx.r4.s64 = ctx.r21.s64 + -20;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x825a1eb8
	ctx.lr = 0x82CC2904;
	sub_825A1EB8(ctx, base);
	// stw r26,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r26.u32);
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x8292a448
	ctx.lr = 0x82CC291C;
	sub_8292A448(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82CC2930;
	sub_8259CB28(ctx, base);
	// lwz r11,580(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc294c
	if (cr6.lt) goto loc_82CC294C;
	// stw r14,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r14.u32);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x825952b8
	ctx.lr = 0x82CC294C;
	sub_825952B8(ctx, base);
loc_82CC294C:
	// lwz r11,1220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1220);
	// stw r26,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r26.u32);
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
	// blt cr6,0x82cc2974
	if (cr6.lt) goto loc_82CC2974;
	// stw r14,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r14.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,1200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	// bl 0x825952b8
	ctx.lr = 0x82CC2974;
	sub_825952B8(ctx, base);
loc_82CC2974:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,1220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1220, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,1216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1216, ctx.r31.u32);
	// stb r31,1200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1200, ctx.r31.u8);
	// bge cr6,0x82cc2994
	if (!cr6.lt) goto loc_82CC2994;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CC2994:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC29A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc2a00
	if (cr6.eq) goto loc_82CC2A00;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// lbz r4,2(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// bl 0x82cc1ac0
	ctx.lr = 0x82CC29C4;
	sub_82CC1AC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82CC29D8;
	sub_82D291E0(ctx, base);
	// lwz r11,1092(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1092);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc29f4
	if (cr6.lt) goto loc_82CC29F4;
	// stw r14,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r14.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,1072(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1072);
	// bl 0x825952b8
	ctx.lr = 0x82CC29F4;
	sub_825952B8(ctx, base);
loc_82CC29F4:
	// stw r26,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r26.u32);
	// stw r31,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r31.u32);
	// stb r31,1072(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1072, ctx.r31.u8);
loc_82CC2A00:
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82ab6970
	ctx.lr = 0x82CC2A10;
	sub_82AB6970(ctx, base);
	// addi r4,r21,-16
	ctx.r4.s64 = ctx.r21.s64 + -16;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x825a1eb8
	ctx.lr = 0x82CC2A1C;
	sub_825A1EB8(ctx, base);
	// stw r26,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r26.u32);
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r31.u8);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8292a448
	ctx.lr = 0x82CC2A34;
	sub_8292A448(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82CC2A48;
	sub_8259CB28(ctx, base);
	// lwz r11,612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc2a64
	if (cr6.lt) goto loc_82CC2A64;
	// stw r14,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r14.u32);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lwz r4,592(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// bl 0x825952b8
	ctx.lr = 0x82CC2A64;
	sub_825952B8(ctx, base);
loc_82CC2A64:
	// lwz r11,900(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 900);
	// stw r26,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r26.u32);
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r31.u8);
	// blt cr6,0x82cc2a8c
	if (cr6.lt) goto loc_82CC2A8C;
	// stw r14,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r14.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,880(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	// bl 0x825952b8
	ctx.lr = 0x82CC2A8C;
	sub_825952B8(ctx, base);
loc_82CC2A8C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r31.u32);
	// stb r31,880(r1)
	PPC_STORE_U8(ctx.r1.u32 + 880, ctx.r31.u8);
	// bge cr6,0x82cc2aac
	if (!cr6.lt) goto loc_82CC2AAC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CC2AAC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC2AC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc2b14
	if (cr6.eq) goto loc_82CC2B14;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// lbz r4,2(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// bl 0x82cc1ac0
	ctx.lr = 0x82CC2AD8;
	sub_82CC1AC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82CC2AEC;
	sub_82D291E0(ctx, base);
	// lwz r11,1156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc2b08
	if (cr6.lt) goto loc_82CC2B08;
	// stw r14,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r14.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,1136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1136);
	// bl 0x825952b8
	ctx.lr = 0x82CC2B08;
	sub_825952B8(ctx, base);
loc_82CC2B08:
	// stw r26,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r26.u32);
	// stw r31,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r31.u32);
	// stb r31,1136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1136, ctx.r31.u8);
loc_82CC2B14:
	// lwz r29,12(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
loc_82CC2B18:
	// stw r26,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r26.u32);
	// addi r4,r21,-294
	ctx.r4.s64 = ctx.r21.s64 + -294;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8259cc28
	ctx.lr = 0x82CC2B34;
	sub_8259CC28(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// beq cr6,0x82cc2b58
	if (cr6.eq) goto loc_82CC2B58;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d042a8
	ctx.lr = 0x82CC2B54;
	sub_82D042A8(ctx, base);
	// b 0x82cc2ba0
	goto loc_82CC2BA0;
loc_82CC2B58:
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x82cc1ac0
	ctx.lr = 0x82CC2B64;
	sub_82CC1AC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8259cb28
	ctx.lr = 0x82CC2B78;
	sub_8259CB28(ctx, base);
	// lwz r10,932(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cc2b94
	if (cr6.lt) goto loc_82CC2B94;
	// stw r14,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r14.u32);
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// lwz r4,912(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	// bl 0x825952b8
	ctx.lr = 0x82CC2B94;
	sub_825952B8(ctx, base);
loc_82CC2B94:
	// stw r26,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r26.u32);
	// stw r31,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r31.u32);
	// stb r31,912(r1)
	PPC_STORE_U8(ctx.r1.u32 + 912, ctx.r31.u8);
loc_82CC2BA0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bge cr6,0x82cc2bb8
	if (!cr6.lt) goto loc_82CC2BB8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82CC2BB8:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82ab6970
	ctx.lr = 0x82CC2BCC;
	sub_82AB6970(ctx, base);
	// addi r4,r21,-12
	ctx.r4.s64 = ctx.r21.s64 + -12;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x825a1eb8
	ctx.lr = 0x82CC2BD8;
	sub_825A1EB8(ctx, base);
	// stw r26,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r26.u32);
	// stw r31,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r31.u8);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x8292a448
	ctx.lr = 0x82CC2BF0;
	sub_8292A448(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82CC2C04;
	sub_8259CB28(ctx, base);
	// lwz r11,676(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc2c20
	if (cr6.lt) goto loc_82CC2C20;
	// stw r14,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r14.u32);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// lwz r4,656(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// bl 0x825952b8
	ctx.lr = 0x82CC2C20;
	sub_825952B8(ctx, base);
loc_82CC2C20:
	// lwz r11,996(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	// stw r26,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r26.u32);
	// stw r31,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r31.u8);
	// blt cr6,0x82cc2c48
	if (cr6.lt) goto loc_82CC2C48;
	// stw r14,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r14.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r4,976(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// bl 0x825952b8
	ctx.lr = 0x82CC2C48;
	sub_825952B8(ctx, base);
loc_82CC2C48:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r31.u32);
	// stb r31,976(r1)
	PPC_STORE_U8(ctx.r1.u32 + 976, ctx.r31.u8);
	// bge cr6,0x82cc2c68
	if (!cr6.lt) goto loc_82CC2C68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CC2C68:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC2C7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc2c94
	if (cr6.eq) goto loc_82CC2C94;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x82d291e0
	ctx.lr = 0x82CC2C94;
	sub_82D291E0(ctx, base);
loc_82CC2C94:
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x82ab6970
	ctx.lr = 0x82CC2CA4;
	sub_82AB6970(ctx, base);
	// addi r4,r21,-8
	ctx.r4.s64 = ctx.r21.s64 + -8;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x825a1eb8
	ctx.lr = 0x82CC2CB0;
	sub_825A1EB8(ctx, base);
	// stw r26,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r26.u32);
	// stw r31,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r31.u8);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x8292a448
	ctx.lr = 0x82CC2CC8;
	sub_8292A448(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82CC2CDC;
	sub_8259CB28(ctx, base);
	// lwz r11,644(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc2cf8
	if (cr6.lt) goto loc_82CC2CF8;
	// stw r14,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r14.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// lwz r4,624(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// bl 0x825952b8
	ctx.lr = 0x82CC2CF8;
	sub_825952B8(ctx, base);
loc_82CC2CF8:
	// lwz r11,1060(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// stw r26,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r26.u32);
	// stw r31,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r31.u8);
	// blt cr6,0x82cc2d20
	if (cr6.lt) goto loc_82CC2D20;
	// stw r14,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r14.u32);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// lwz r4,1040(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1040);
	// bl 0x825952b8
	ctx.lr = 0x82CC2D20;
	sub_825952B8(ctx, base);
loc_82CC2D20:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r31.u32);
	// stb r31,1040(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1040, ctx.r31.u8);
	// bge cr6,0x82cc2d40
	if (!cr6.lt) goto loc_82CC2D40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CC2D40:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC2D54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc2d6c
	if (cr6.eq) goto loc_82CC2D6C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x82d291e0
	ctx.lr = 0x82CC2D6C;
	sub_82D291E0(ctx, base);
loc_82CC2D6C:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC2D88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82cc2da0
	if (!cr6.lt) goto loc_82CC2DA0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82CC2DA0:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r21,-4
	ctx.r5.s64 = ctx.r21.s64 + -4;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x82ab6970
	ctx.lr = 0x82CC2DB4;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82CC2DC8;
	sub_8259CB28(ctx, base);
	// lwz r11,1124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1124);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc2de4
	if (cr6.lt) goto loc_82CC2DE4;
	// stw r14,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r14.u32);
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// lwz r4,1104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// bl 0x825952b8
	ctx.lr = 0x82CC2DE4;
	sub_825952B8(ctx, base);
loc_82CC2DE4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,1124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1124, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r31.u32);
	// stb r31,1104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1104, ctx.r31.u8);
	// bge cr6,0x82cc2e04
	if (!cr6.lt) goto loc_82CC2E04;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CC2E04:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC2E18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc2e2c
	if (cr6.eq) goto loc_82CC2E2C;
	// addi r11,r1,736
	ctx.r11.s64 = ctx.r1.s64 + 736;
	// lwzx r4,r23,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// bl 0x82d29598
	ctx.lr = 0x82CC2E2C;
	sub_82D29598(ctx, base);
loc_82CC2E2C:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82ab6970
	ctx.lr = 0x82CC2E3C;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82CC2E50;
	sub_8259CB28(ctx, base);
	// lwz r11,1188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1188);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc2e6c
	if (cr6.lt) goto loc_82CC2E6C;
	// stw r14,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r14.u32);
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// lwz r4,1168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1168);
	// bl 0x825952b8
	ctx.lr = 0x82CC2E6C;
	sub_825952B8(ctx, base);
loc_82CC2E6C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r31.u32);
	// stb r31,1168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1168, ctx.r31.u8);
	// bge cr6,0x82cc2e8c
	if (!cr6.lt) goto loc_82CC2E8C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CC2E8C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC2EA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc2eb4
	if (cr6.eq) goto loc_82CC2EB4;
	// addi r11,r1,740
	ctx.r11.s64 = ctx.r1.s64 + 740;
	// lwzx r4,r23,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// bl 0x82d29598
	ctx.lr = 0x82CC2EB4;
	sub_82D29598(ctx, base);
loc_82CC2EB4:
	// lwz r29,48(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82cc3048
	if (cr6.eq) goto loc_82CC3048;
	// addi r11,r1,792
	ctx.r11.s64 = ctx.r1.s64 + 792;
	// lwz r4,96(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f31,f24
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f24.f64;
	// add r30,r20,r11
	ctx.r30.u64 = ctx.r20.u64 + ctx.r11.u64;
	// fmr f26,f24
	ctx.f26.f64 = ctx.f24.f64;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831c9e98
	ctx.lr = 0x82CC2EE4;
	sub_831C9E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc2f08
	if (cr6.eq) goto loc_82CC2F08;
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// std r10,856(r1)
	PPC_STORE_U64(ctx.r1.u32 + 856, ctx.r10.u64);
	// lfd f0,856(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 856);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f22
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f22.f64));
loc_82CC2F08:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82cc2f48
	if (cr6.eq) goto loc_82CC2F48;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,96(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 96);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x831c9e98
	ctx.lr = 0x82CC2F24;
	sub_831C9E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc2f48
	if (cr6.eq) goto loc_82CC2F48;
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// std r10,848(r1)
	PPC_STORE_U64(ctx.r1.u32 + 848, ctx.r10.u64);
	// lfd f0,848(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 848);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f26,f12,f22
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f22.f64));
loc_82CC2F48:
	// lwz r3,96(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 96);
	// cmplwi cr6,r19,1
	cr6.compare<uint32_t>(ctx.r19.u32, 1, xer);
	// blt cr6,0x82cc2f7c
	if (cr6.lt) goto loc_82CC2F7C;
	// beq cr6,0x82cc2f74
	if (cr6.eq) goto loc_82CC2F74;
	// cmplwi cr6,r19,3
	cr6.compare<uint32_t>(ctx.r19.u32, 3, xer);
	// blt cr6,0x82cc2f68
	if (cr6.lt) goto loc_82CC2F68;
	// li r3,79
	ctx.r3.s64 = 79;
	// b 0x82cc2f84
	goto loc_82CC2F84;
loc_82CC2F68:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cc1968
	ctx.lr = 0x82CC2F70;
	sub_82CC1968(ctx, base);
	// b 0x82cc2f84
	goto loc_82CC2F84;
loc_82CC2F74:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82cc2f80
	goto loc_82CC2F80;
loc_82CC2F7C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82CC2F80:
	// bl 0x82cc18b8
	ctx.lr = 0x82CC2F84;
	sub_82CC18B8(ctx, base);
loc_82CC2F84:
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64;
	// lwzx r10,r23,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bne cr6,0x82cc2fa8
	if (!cr6.eq) goto loc_82CC2FA8;
	// fsubs f0,f25,f31
	ctx.f0.f64 = double(float(ctx.f25.f64 - ctx.f31.f64));
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fmuls f0,f13,f27
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// b 0x82cc2fc0
	goto loc_82CC2FC0;
loc_82CC2FA8:
	// addi r11,r1,708
	ctx.r11.s64 = ctx.r1.s64 + 708;
	// lwzx r10,r23,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bne cr6,0x82cc2fcc
	if (!cr6.eq) goto loc_82CC2FCC;
	// fsubs f0,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
loc_82CC2FC0:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82cc2fcc
	if (!cr6.gt) goto loc_82CC2FCC;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_82CC2FCC:
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// lwz r4,32(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// bl 0x83815d38
	ctx.lr = 0x82CC2FD8;
	sub_83815D38(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x83815b28
	ctx.lr = 0x82CC2FE4;
	sub_83815B28(ctx, base);
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82CC2FF0;
	sub_83815B68(ctx, base);
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x83815b68
	ctx.lr = 0x82CC2FFC;
	sub_83815B68(ctx, base);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// lwz r4,36(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// bl 0x83815d38
	ctx.lr = 0x82CC3008;
	sub_83815D38(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x83815b28
	ctx.lr = 0x82CC3014;
	sub_83815B28(ctx, base);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83815b68
	ctx.lr = 0x82CC3020;
	sub_83815B68(ctx, base);
	// addi r4,r1,1328
	ctx.r4.s64 = ctx.r1.s64 + 1328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838153c8
	ctx.lr = 0x82CC302C;
	sub_838153C8(ctx, base);
	// addi r4,r1,1376
	ctx.r4.s64 = ctx.r1.s64 + 1376;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838153c8
	ctx.lr = 0x82CC3038;
	sub_838153C8(ctx, base);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x83815cb8
	ctx.lr = 0x82CC3040;
	sub_83815CB8(ctx, base);
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x83815cb8
	ctx.lr = 0x82CC3048;
	sub_83815CB8(ctx, base);
loc_82CC3048:
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc3064
	if (cr6.lt) goto loc_82CC3064;
	// stw r14,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r14.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x825952b8
	ctx.lr = 0x82CC3064;
	sub_825952B8(ctx, base);
loc_82CC3064:
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// stw r26,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r26.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// blt cr6,0x82cc308c
	if (cr6.lt) goto loc_82CC308C;
	// stw r14,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r14.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x825952b8
	ctx.lr = 0x82CC308C;
	sub_825952B8(ctx, base);
loc_82CC308C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r26,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r26.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x82cc30b4
	if (cr6.lt) goto loc_82CC30B4;
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r14.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x82CC30B4;
	sub_825952B8(ctx, base);
loc_82CC30B4:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
loc_82CC30C0:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// cmplwi cr6,r19,3
	cr6.compare<uint32_t>(ctx.r19.u32, 3, xer);
	// blt cr6,0x82cc2520
	if (cr6.lt) goto loc_82CC2520;
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc30ec
	if (cr6.lt) goto loc_82CC30EC;
	// stw r14,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r14.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,496(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x825952b8
	ctx.lr = 0x82CC30EC;
	sub_825952B8(ctx, base);
loc_82CC30EC:
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// stw r26,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r26.u32);
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
	// blt cr6,0x82cc3114
	if (cr6.lt) goto loc_82CC3114;
	// stw r14,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r14.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x82CC3114;
	sub_825952B8(ctx, base);
loc_82CC3114:
	// lwz r11,836(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// stw r26,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x82cc313c
	if (cr6.lt) goto loc_82CC313C;
	// stw r14,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r14.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,816(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// bl 0x825952b8
	ctx.lr = 0x82CC313C;
	sub_825952B8(ctx, base);
loc_82CC313C:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7ac
	ctx.lr = 0x82CC3148;
	__restfpr_22(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC314C"))) PPC_WEAK_FUNC(sub_82CC314C);
PPC_FUNC_IMPL(__imp__sub_82CC314C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC3150"))) PPC_WEAK_FUNC(sub_82CC3150);
PPC_FUNC_IMPL(__imp__sub_82CC3150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CC3158;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC3164;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82CC316C;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc321c
	if (cr6.eq) goto loc_82CC321C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3216(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3216);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC3194;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc31a8
	if (cr6.eq) goto loc_82CC31A8;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,576
	ctx.r4.u64 = ctx.r4.u64 | 576;
	// bl 0x82d29598
	ctx.lr = 0x82CC31A8;
	sub_82D29598(ctx, base);
loc_82CC31A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r8,22
	ctx.r8.s64 = 22;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82CC31D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835977d8
	ctx.lr = 0x82CC31E4;
	sub_835977D8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82cc31d8
	if (!cr0.eq) goto loc_82CC31D8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d000d8
	ctx.lr = 0x82CC3200;
	sub_82D000D8(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc321c
	if (cr6.eq) goto loc_82CC321C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC321C;
	sub_825952B8(ctx, base);
loc_82CC321C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3224"))) PPC_WEAK_FUNC(sub_82CC3224);
PPC_FUNC_IMPL(__imp__sub_82CC3224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC3228"))) PPC_WEAK_FUNC(sub_82CC3228);
PPC_FUNC_IMPL(__imp__sub_82CC3228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CC3230;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC323C;
	sub_82D19A78(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d33db0
	ctx.lr = 0x82CC3244;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc3324
	if (cr6.eq) goto loc_82CC3324;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3216(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3216);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC326C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc3280
	if (cr6.eq) goto loc_82CC3280;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,577
	ctx.r4.u64 = ctx.r4.u64 | 577;
	// bl 0x82d29598
	ctx.lr = 0x82CC3280;
	sub_82D29598(ctx, base);
loc_82CC3280:
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r9,29
	ctx.r9.s64 = 29;
	// li r8,26
	ctx.r8.s64 = 26;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r7,33
	ctx.r7.s64 = 33;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r6,30
	ctx.r6.s64 = 30;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// li r5,27
	ctx.r5.s64 = 27;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// li r4,34
	ctx.r4.s64 = 34;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// li r3,31
	ctx.r3.s64 = 31;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// li r31,9
	ctx.r31.s64 = 9;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82CC32E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82CC32EC;
	sub_835977D8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82cc32e0
	if (!cr0.eq) goto loc_82CC32E0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d000d8
	ctx.lr = 0x82CC3308;
	sub_82D000D8(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc3324
	if (cr6.eq) goto loc_82CC3324;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC3324;
	sub_825952B8(ctx, base);
loc_82CC3324:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC332C"))) PPC_WEAK_FUNC(sub_82CC332C);
PPC_FUNC_IMPL(__imp__sub_82CC332C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC3330"))) PPC_WEAK_FUNC(sub_82CC3330);
PPC_FUNC_IMPL(__imp__sub_82CC3330) {
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
	// bl 0x82cc2018
	ctx.lr = 0x82CC3348;
	sub_82CC2018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc3150
	ctx.lr = 0x82CC3350;
	sub_82CC3150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc3228
	ctx.lr = 0x82CC3358;
	sub_82CC3228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc1bf8
	ctx.lr = 0x82CC3360;
	sub_82CC1BF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc1e08
	ctx.lr = 0x82CC3368;
	sub_82CC1E08(ctx, base);
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

__attribute__((alias("__imp__sub_82CC337C"))) PPC_WEAK_FUNC(sub_82CC337C);
PPC_FUNC_IMPL(__imp__sub_82CC337C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC3380"))) PPC_WEAK_FUNC(sub_82CC3380);
PPC_FUNC_IMPL(__imp__sub_82CC3380) {
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
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc33cc
	if (cr6.eq) goto loc_82CC33CC;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82d46928
	ctx.lr = 0x82CC33AC;
	sub_82D46928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CC33B8;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2aef8
	ctx.lr = 0x82CC33C0;
	sub_82D2AEF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc33d8
	if (cr6.eq) goto loc_82CC33D8;
loc_82CC33CC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82CC33D8;
	sub_82D19858(ctx, base);
loc_82CC33D8:
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

__attribute__((alias("__imp__sub_82CC33F0"))) PPC_WEAK_FUNC(sub_82CC33F0);
PPC_FUNC_IMPL(__imp__sub_82CC33F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CC33F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC3404;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r9,r11,40316
	ctx.r9.u64 = ctx.r11.u64 | 40316;
	// lwzx r29,r10,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r30,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r30.u8);
	// cmplwi cr6,r29,48
	cr6.compare<uint32_t>(ctx.r29.u32, 48, xer);
	// bgt cr6,0x82cc35a8
	if (cr6.gt) goto loc_82CC35A8;
	// beq cr6,0x82cc3564
	if (cr6.eq) goto loc_82CC3564;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82cc35a8
	if (cr6.gt) goto loc_82CC35A8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82cc3498
	if (cr6.eq) goto loc_82CC3498;
	// bdz 0x82cc34dc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CC34DC;
	// bdz 0x82cc3520
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CC3520;
	// bdz 0x82cc3564
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CC3564;
	// bdz 0x82cc35a8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CC35A8;
	// bdz 0x82cc35a8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CC35A8;
	// lis r28,-31776
	ctx.r28.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r28,7184
	ctx.r27.s64 = ctx.r28.s64 + 7184;
	// lwz r4,72(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC3468;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7184(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7184);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC3474;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// bl 0x82d23390
	ctx.lr = 0x82CC3484;
	sub_82D23390(ctx, base);
	// stb r30,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a673c0
	ctx.lr = 0x82CC3490;
	sub_82A673C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CC3498:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,7184
	ctx.r28.s64 = ctx.r11.s64 + 7184;
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC34AC;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC34B8;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x82d23390
	ctx.lr = 0x82CC34C8;
	sub_82D23390(ctx, base);
	// stb r30,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a673c0
	ctx.lr = 0x82CC34D4;
	sub_82A673C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CC34DC:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,7184
	ctx.r28.s64 = ctx.r11.s64 + 7184;
	// lwz r4,60(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC34F0;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC34FC;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// bl 0x82d23390
	ctx.lr = 0x82CC350C;
	sub_82D23390(ctx, base);
	// stb r30,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a673c0
	ctx.lr = 0x82CC3518;
	sub_82A673C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CC3520:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,7184
	ctx.r28.s64 = ctx.r11.s64 + 7184;
	// lwz r4,64(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC3534;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC3540;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,36(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// bl 0x82d23390
	ctx.lr = 0x82CC3550;
	sub_82D23390(ctx, base);
	// stb r30,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a673c0
	ctx.lr = 0x82CC355C;
	sub_82A673C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CC3564:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,7184
	ctx.r28.s64 = ctx.r11.s64 + 7184;
	// lwz r4,68(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC3578;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC3584;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,40(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// bl 0x82d23390
	ctx.lr = 0x82CC3594;
	sub_82D23390(ctx, base);
	// stb r30,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a673c0
	ctx.lr = 0x82CC35A0;
	sub_82A673C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CC35A8:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,7184
	ctx.r30.s64 = ctx.r11.s64 + 7184;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC35BC;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC35C8;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82d23390
	ctx.lr = 0x82CC35D8;
	sub_82D23390(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r10.u8);
	// bl 0x82a673c0
	ctx.lr = 0x82CC35E8;
	sub_82A673C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC35F0"))) PPC_WEAK_FUNC(sub_82CC35F0);
PPC_FUNC_IMPL(__imp__sub_82CC35F0) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23456
	ctx.r9.s64 = ctx.r11.s64 + -23456;
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
	// bl 0x82cd0388
	ctx.lr = 0x82CC3628;
	sub_82CD0388(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cc3640
	if (cr6.eq) goto loc_82CC3640;
	// bl 0x82416268
	ctx.lr = 0x82CC363C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CC3640:
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

__attribute__((alias("__imp__sub_82CC3658"))) PPC_WEAK_FUNC(sub_82CC3658);
PPC_FUNC_IMPL(__imp__sub_82CC3658) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r4,r8,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// and r30,r7,r6
	ctx.r30.u64 = ctx.r7.u64 & ctx.r6.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82CC3690;
	sub_82D199D0(ctx, base);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r4,6
	ctx.r4.s64 = 6;
	// divw r10,r11,r5
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r5.s32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82cc36c4
	if (!cr6.eq) goto loc_82CC36C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82CC36BC;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82cc36d0
	goto loc_82CC36D0;
loc_82CC36C4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CC36CC;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82CC36D0:
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CC36DC;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CC36EC;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CC36FC;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_82CC3714"))) PPC_WEAK_FUNC(sub_82CC3714);
PPC_FUNC_IMPL(__imp__sub_82CC3714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC3718"))) PPC_WEAK_FUNC(sub_82CC3718);
PPC_FUNC_IMPL(__imp__sub_82CC3718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CC3720;
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
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CC3744;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc3798
	if (cr6.eq) goto loc_82CC3798;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cd0530
	ctx.lr = 0x82CC3760;
	sub_82CD0530(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-23456
	ctx.r8.s64 = ctx.r10.s64 + -23456;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stb r11,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r11.u8);
	// bl 0x82cc33f0
	ctx.lr = 0x82CC378C;
	sub_82CC33F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CC3798:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC37A4"))) PPC_WEAK_FUNC(sub_82CC37A4);
PPC_FUNC_IMPL(__imp__sub_82CC37A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC37A8"))) PPC_WEAK_FUNC(sub_82CC37A8);
PPC_FUNC_IMPL(__imp__sub_82CC37A8) {
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
	// bl 0x82d34e50
	ctx.lr = 0x82CC37C0;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82CC37C4;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc37e8
	if (!cr6.eq) goto loc_82CC37E8;
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
loc_82CC37E8:
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc3800
	if (!cr6.eq) goto loc_82CC3800;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82CC3800:
	// bl 0x82cc3658
	ctx.lr = 0x82CC3804;
	sub_82CC3658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccfd98
	ctx.lr = 0x82CC380C;
	sub_82CCFD98(ctx, base);
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

__attribute__((alias("__imp__sub_82CC3820"))) PPC_WEAK_FUNC(sub_82CC3820);
PPC_FUNC_IMPL(__imp__sub_82CC3820) {
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
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82d46928
	ctx.lr = 0x82CC3840;
	sub_82D46928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CC384C;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2aef8
	ctx.lr = 0x82CC3854;
	sub_82D2AEF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc3880
	if (cr6.eq) goto loc_82CC3880;
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc3880
	if (cr6.eq) goto loc_82CC3880;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc3658
	ctx.lr = 0x82CC3880;
	sub_82CC3658(ctx, base);
loc_82CC3880:
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

__attribute__((alias("__imp__sub_82CC3898"))) PPC_WEAK_FUNC(sub_82CC3898);
PPC_FUNC_IMPL(__imp__sub_82CC3898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc38a8
	if (cr6.lt) goto loc_82CC38A8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82CC38A8:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82cc3718
	sub_82CC3718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC38B0"))) PPC_WEAK_FUNC(sub_82CC38B0);
PPC_FUNC_IMPL(__imp__sub_82CC38B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CC38B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC38C4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82ccea90
	ctx.lr = 0x82CC38D4;
	sub_82CCEA90(ctx, base);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82cc38f8
	if (!cr0.eq) goto loc_82CC38F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC38F8;
	sub_831CC188(ctx, base);
loc_82CC38F8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8311c3d8
	ctx.lr = 0x82CC390C;
	sub_8311C3D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x8311c338
	ctx.lr = 0x82CC391C;
	sub_8311C338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC3928;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r4,r10,-23552
	ctx.r4.s64 = ctx.r10.s64 + -23552;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CC3944;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc3ad0
	if (cr6.eq) goto loc_82CC3AD0;
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// bl 0x83195c08
	ctx.lr = 0x82CC3958;
	sub_83195C08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc3978
	if (cr6.eq) goto loc_82CC3978;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,559
	ctx.r4.u64 = ctx.r4.u64 | 559;
	// bl 0x82d303d0
	ctx.lr = 0x82CC3974;
	sub_82D303D0(ctx, base);
	// b 0x82cc39a0
	goto loc_82CC39A0;
loc_82CC3978:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83162d40
	ctx.lr = 0x82CC398C;
	sub_83162D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d30008
	ctx.lr = 0x82CC3998;
	sub_82D30008(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82CC39A0;
	sub_8387E8E0(ctx, base);
loc_82CC39A0:
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r26,2
	ctx.r26.s64 = 2;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cc39d8
	if (!cr6.eq) goto loc_82CC39D8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82cc39d4
	if (cr6.eq) goto loc_82CC39D4;
	// stb r28,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r28.u8);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
loc_82CC39D4:
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
loc_82CC39D8:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83125548
	ctx.lr = 0x82CC39F0;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc3a04
	if (cr6.lt) goto loc_82CC3A04;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cc3a08
	goto loc_82CC3A08;
loc_82CC3A04:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82CC3A08:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CC3A10;
	sub_837B0C10(ctx, base);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82cc3a60
	if (!cr6.eq) goto loc_82CC3A60;
	// stb r28,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r28.u8);
	// li r9,7
	ctx.r9.s64 = 7;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// stb r30,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r30.u8);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x8259cb28
	ctx.lr = 0x82CC3A60;
	sub_8259CB28(ctx, base);
loc_82CC3A60:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc3a7c
	if (cr6.lt) goto loc_82CC3A7C;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CC3A7C;
	sub_825952B8(ctx, base);
loc_82CC3A7C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// blt cr6,0x82cc3aa8
	if (cr6.lt) goto loc_82CC3AA8;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CC3AA8;
	sub_825952B8(ctx, base);
loc_82CC3AA8:
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// bl 0x82d2fe58
	ctx.lr = 0x82CC3ABC;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc3ad0
	if (cr6.eq) goto loc_82CC3AD0;
	// lwz r11,112(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d7f8
	ctx.lr = 0x82CC3AD0;
	sub_82D3D7F8(ctx, base);
loc_82CC3AD0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3AD8"))) PPC_WEAK_FUNC(sub_82CC3AD8);
PPC_FUNC_IMPL(__imp__sub_82CC3AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CC3AE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,129(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 129);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc3b00
	if (!cr6.eq) goto loc_82CC3B00;
	// bl 0x82cc38b0
	ctx.lr = 0x82CC3AF8;
	sub_82CC38B0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CC3B00:
	// bl 0x831156e8
	ctx.lr = 0x82CC3B04;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82ccea90
	ctx.lr = 0x82CC3B14;
	sub_82CCEA90(ctx, base);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82cc3b38
	if (!cr0.eq) goto loc_82CC3B38;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC3B38;
	sub_831CC188(ctx, base);
loc_82CC3B38:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8311c3d8
	ctx.lr = 0x82CC3B4C;
	sub_8311C3D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x8311c338
	ctx.lr = 0x82CC3B5C;
	sub_8311C338(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC3B68;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r30,r11,-23564
	ctx.r30.s64 = ctx.r11.s64 + -23564;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC3B88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC3B94;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CC3BAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc3bd8
	if (cr6.eq) goto loc_82CC3BD8;
	// lwz r26,88(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82CC3BC4;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82CC3BD8;
	sub_82D32C58(ctx, base);
loc_82CC3BD8:
	// addi r4,r30,-1010
	ctx.r4.s64 = ctx.r30.s64 + -1010;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CC3BE4;
	sub_837B0C10(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,40
	ctx.r4.u64 = ctx.r4.u64 | 40;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// divw r6,r7,r10
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// bl 0x82d042a8
	ctx.lr = 0x82CC3C10;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CC3C18;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82CC3C30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc3c48
	if (cr6.eq) goto loc_82CC3C48;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82d291e0
	ctx.lr = 0x82CC3C48;
	sub_82D291E0(ctx, base);
loc_82CC3C48:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83162d40
	ctx.lr = 0x82CC3C5C;
	sub_83162D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82CC3C70;
	sub_82D291E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc3c90
	if (cr6.lt) goto loc_82CC3C90;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CC3C90;
	sub_825952B8(ctx, base);
loc_82CC3C90:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// bl 0x82d19a78
	ctx.lr = 0x82CC3CAC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC3CC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc3d00
	if (cr6.eq) goto loc_82CC3D00;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83125548
	ctx.lr = 0x82CC3CE4;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82CC3CF8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82CC3D00;
	sub_8387E8E0(ctx, base);
loc_82CC3D00:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc3d1c
	if (cr6.lt) goto loc_82CC3D1C;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CC3D1C;
	sub_825952B8(ctx, base);
loc_82CC3D1C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3D24"))) PPC_WEAK_FUNC(sub_82CC3D24);
PPC_FUNC_IMPL(__imp__sub_82CC3D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC3D28"))) PPC_WEAK_FUNC(sub_82CC3D28);
PPC_FUNC_IMPL(__imp__sub_82CC3D28) {
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
	ctx.lr = 0x82CC3D30;
	__savegprlr_14(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC3D48;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r10,r11,40316
	ctx.r10.u64 = ctx.r11.u64 | 40316;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x83197d10
	ctx.lr = 0x82CC3D78;
	sub_83197D10(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi. r6,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82cc3d9c
	if (!cr0.eq) goto loc_82CC3D9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC3D9C;
	sub_831CC188(ctx, base);
loc_82CC3D9C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x8316ef18
	ctx.lr = 0x82CC3DB0;
	sub_8316EF18(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82cc3df0
	if (!cr6.eq) goto loc_82CC3DF0;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82cc3de0
	if (!cr0.eq) goto loc_82CC3DE0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC3DE0;
	sub_831CC188(ctx, base);
loc_82CC3DE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8311bf00
	ctx.lr = 0x82CC3DEC;
	sub_8311BF00(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
loc_82CC3DF0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// beq cr6,0x82cc3e60
	if (cr6.eq) goto loc_82CC3E60;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// beq cr6,0x82cc3e3c
	if (cr6.eq) goto loc_82CC3E3C;
	// addi r11,r11,-24340
	ctx.r11.s64 = ctx.r11.s64 + -24340;
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
loc_82CC3E20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835977d8
	ctx.lr = 0x82CC3E2C;
	sub_835977D8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82cc3e20
	if (!cr0.eq) goto loc_82CC3E20;
	// b 0x82cc3e88
	goto loc_82CC3E88;
loc_82CC3E3C:
	// li r31,5
	ctx.r31.s64 = 5;
	// addi r30,r11,-24340
	ctx.r30.s64 = ctx.r11.s64 + -24340;
loc_82CC3E44:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835977d8
	ctx.lr = 0x82CC3E50;
	sub_835977D8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82cc3e44
	if (!cr0.eq) goto loc_82CC3E44;
	// b 0x82cc3e88
	goto loc_82CC3E88;
loc_82CC3E60:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r11,r11,-24340
	ctx.r11.s64 = ctx.r11.s64 + -24340;
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
loc_82CC3E70:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835977d8
	ctx.lr = 0x82CC3E7C;
	sub_835977D8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82cc3e70
	if (!cr0.eq) goto loc_82CC3E70;
loc_82CC3E88:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// lwz r15,112(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r16,24
	ctx.r16.s64 = 24;
	// li r14,2
	ctx.r14.s64 = 2;
	// subf r10,r15,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r15.s64;
	// srawi r19,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r19.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x82cc4128
	if (cr6.eq) goto loc_82CC4128;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r17,r15
	ctx.r17.u64 = ctx.r15.u64;
	// li r22,55
	ctx.r22.s64 = 55;
	// lis r23,-31776
	ctx.r23.s64 = -2082471936;
	// ori r18,r11,65535
	ctx.r18.u64 = ctx.r11.u64 | 65535;
loc_82CC3EC0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r19,r21
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r21.u32, xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// ble cr6,0x82cc4198
	if (!cr6.gt) goto loc_82CC4198;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831c6648
	ctx.lr = 0x82CC3EE0;
	sub_831C6648(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc4118
	if (cr6.eq) goto loc_82CC4118;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// sth r18,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r18.u16);
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// srawi. r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// beq 0x82cc41a4
	if (cr0.eq) goto loc_82CC41A4;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// sth r11,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r11.u16);
	// lwz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cc40bc
	if (cr6.eq) goto loc_82CC40BC;
	// addi r25,r3,4
	ctx.r25.s64 = ctx.r3.s64 + 4;
	// li r26,8
	ctx.r26.s64 = 8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82CC3F40:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// blt cr6,0x82cc3f70
	if (cr6.lt) goto loc_82CC3F70;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82cd05f8
	ctx.lr = 0x82CC3F54;
	sub_82CD05F8(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82cc3f6c
	if (cr6.eq) goto loc_82CC3F6C;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
loc_82CC3F6C:
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
loc_82CC3F70:
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bge cr6,0x82cc3f80
	if (!cr6.lt) goto loc_82CC3F80;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC3F80:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82CC3F90:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82cc3f90
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CC3F90;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r11,r11,22,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3F;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// bne cr6,0x82cc3fb0
	if (!cr6.eq) goto loc_82CC3FB0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82CC3FB0:
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8312db38
	ctx.lr = 0x82CC3FC0;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82cc3fdc
	if (!cr6.eq) goto loc_82CC3FDC;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8312db38
	ctx.lr = 0x82CC3FD8;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
loc_82CC3FDC:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x83546fd8
	ctx.lr = 0x82CC3FF0;
	sub_83546FD8(ctx, base);
	// lwz r11,7344(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 7344);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// rlwinm r8,r9,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cc4020
	if (!cr6.eq) goto loc_82CC4020;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cc4024
	if (cr6.eq) goto loc_82CC4024;
loc_82CC4020:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82CC4024:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cc406c
	if (!cr6.eq) goto loc_82CC406C;
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// ori r29,r29,2
	ctx.r29.u64 = ctx.r29.u64 | 2;
	// rlwinm r8,r9,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cc4058
	if (!cr6.eq) goto loc_82CC4058;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc405c
	if (cr6.eq) goto loc_82CC405C;
loc_82CC4058:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82CC405C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq cr6,0x82cc4070
	if (cr6.eq) goto loc_82CC4070;
loc_82CC406C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CC4070:
	// rlwinm r10,r29,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cc4084
	if (cr6.eq) goto loc_82CC4084;
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82CC4084:
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cc4094
	if (cr6.eq) goto loc_82CC4094;
	// rlwinm r29,r29,0,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
loc_82CC4094:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,516(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 516);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r10,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// and r28,r6,r28
	ctx.r28.u64 = ctx.r6.u64 & ctx.r28.u64;
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, xer);
	// blt cr6,0x82cc3f40
	if (cr6.lt) goto loc_82CC3F40;
loc_82CC40BC:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82cd05f8
	ctx.lr = 0x82CC40C8;
	sub_82CD05F8(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc40f4
	if (cr6.eq) goto loc_82CC40F4;
	// lwz r11,100(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 100);
	// lwz r10,96(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r11,r9,r16
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r16.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,112(r20)
	PPC_STORE_U32(ctx.r20.u32 + 112, ctx.r11.u32);
	// beq 0x82cc40f4
	if (cr0.eq) goto loc_82CC40F4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,112(r20)
	PPC_STORE_U32(ctx.r20.u32 + 112, ctx.r11.u32);
loc_82CC40F4:
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc410c
	if (cr6.eq) goto loc_82CC410C;
	// stw r14,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82CC410C;
	sub_825952B8(ctx, base);
loc_82CC410C:
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
loc_82CC4118:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// cmplw cr6,r21,r19
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, xer);
	// blt cr6,0x82cc3ec0
	if (cr6.lt) goto loc_82CC3EC0;
loc_82CC4128:
	// lwz r11,100(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 100);
	// lwz r10,96(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r16
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r16.s32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bgt cr6,0x82cc4160
	if (cr6.gt) goto loc_82CC4160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CC4150;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CC4160;
	sub_82D19788(ctx, base);
loc_82CC4160:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// beq cr6,0x82cc4178
	if (cr6.eq) goto loc_82CC4178;
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82CC4178;
	sub_825952B8(ctx, base);
loc_82CC4178:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc4190
	if (cr6.eq) goto loc_82CC4190;
	// stw r14,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x82CC4190;
	sub_825952B8(ctx, base);
loc_82CC4190:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82CC4198:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC41A4;
	sub_831CC188(ctx, base);
loc_82CC41A4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC41B0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CC41B0"))) PPC_WEAK_FUNC(sub_82CC41B0);
PPC_FUNC_IMPL(__imp__sub_82CC41B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CC41B8;
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
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CC41DC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc4218
	if (cr6.eq) goto loc_82CC4218;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cc4768
	ctx.lr = 0x82CC41F4;
	sub_82CC4768(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22792
	ctx.r9.s64 = ctx.r11.s64 + -22792;
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
loc_82CC4218:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4224"))) PPC_WEAK_FUNC(sub_82CC4224);
PPC_FUNC_IMPL(__imp__sub_82CC4224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC4228"))) PPC_WEAK_FUNC(sub_82CC4228);
PPC_FUNC_IMPL(__imp__sub_82CC4228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82CC4230;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC423C;
	sub_831156E8(ctx, base);
	// lwz r23,48(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82CC4244;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r24,r11,5
	ctx.r24.s64 = ctx.r11.s64 + 327680;
	// addi r24,r24,14904
	ctx.r24.s64 = ctx.r24.s64 + 14904;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83123778
	ctx.lr = 0x82CC4258;
	sub_83123778(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8311c338
	ctx.lr = 0x82CC4264;
	sub_8311C338(ctx, base);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x83197d10
	ctx.lr = 0x82CC428C;
	sub_83197D10(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// li r22,2
	ctx.r22.s64 = 2;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lwz r28,144(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x82cc4350
	if (!cr6.lt) goto loc_82CC4350;
loc_82CC42B8:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// lhz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// bl 0x8316aeb8
	ctx.lr = 0x82CC42D4;
	sub_8316AEB8(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bge cr6,0x82cc431c
	if (!cr6.lt) goto loc_82CC431C;
loc_82CC42EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r4,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r4.s64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x83546fd8
	ctx.lr = 0x82CC430C;
	sub_83546FD8(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82cc42ec
	if (cr6.lt) goto loc_82CC42EC;
loc_82CC431C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc4330
	if (cr6.eq) goto loc_82CC4330;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82CC4330;
	sub_825952B8(ctx, base);
loc_82CC4330:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// blt cr6,0x82cc42b8
	if (cr6.lt) goto loc_82CC42B8;
	// lwz r29,164(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82CC4350:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, xer);
	// bge cr6,0x82cc43d0
	if (!cr6.lt) goto loc_82CC43D0;
loc_82CC4370:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83546fd8
	ctx.lr = 0x82CC437C;
	sub_83546FD8(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r9,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// blt cr6,0x82cc43c4
	if (cr6.lt) goto loc_82CC43C4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC43AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x82cc43c4
	if (cr6.eq) goto loc_82CC43C4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
loc_82CC43C4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82cc4370
	if (cr6.lt) goto loc_82CC4370;
loc_82CC43D0:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi. r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cc43f8
	if (cr0.eq) goto loc_82CC43F8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC43F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82CC43F8:
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,40124
	ctx.r10.u64 = ctx.r11.u64 | 40124;
	// lbzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82cc4428
	if (!cr6.eq) goto loc_82CC4428;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83123768
	ctx.lr = 0x82CC4414;
	sub_83123768(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc48b8
	ctx.lr = 0x82CC4420;
	sub_82CC48B8(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r3,112(r25)
	PPC_STORE_U32(ctx.r25.u32 + 112, ctx.r3.u32);
loc_82CC4428:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc443c
	if (cr6.eq) goto loc_82CC443C;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82CC443C;
	sub_825952B8(ctx, base);
loc_82CC443C:
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// beq cr6,0x82cc4460
	if (cr6.eq) goto loc_82CC4460;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82CC4460;
	sub_825952B8(ctx, base);
loc_82CC4460:
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc4478
	if (cr6.eq) goto loc_82CC4478;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82CC4478;
	sub_825952B8(ctx, base);
loc_82CC4478:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4480"))) PPC_WEAK_FUNC(sub_82CC4480);
PPC_FUNC_IMPL(__imp__sub_82CC4480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CC4488;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC4498;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,55
	ctx.r10.s64 = 55;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r9,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82af1ca8
	ctx.lr = 0x82CC44C8;
	sub_82AF1CA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi. r6,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82cc44e8
	if (!cr0.eq) goto loc_82CC44E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC44E8;
	sub_831CC188(ctx, base);
loc_82CC44E8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC44F8;
	sub_8311C3D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// sth r9,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// bne 0x82cc4520
	if (!cr0.eq) goto loc_82CC4520;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC4520;
	sub_831CC188(ctx, base);
loc_82CC4520:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC4530;
	sub_8311C3D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r8,r9,28,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFF;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x82cd05f8
	ctx.lr = 0x82CC454C;
	sub_82CD05F8(ctx, base);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc4568
	if (cr6.eq) goto loc_82CC4568;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC4568;
	sub_825952B8(ctx, base);
loc_82CC4568:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4570"))) PPC_WEAK_FUNC(sub_82CC4570);
PPC_FUNC_IMPL(__imp__sub_82CC4570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CC4578;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC4588;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,40316
	ctx.r9.u64 = ctx.r11.u64 | 40316;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bgt cr6,0x82cc46e8
	if (cr6.gt) goto loc_82CC46E8;
	// beq cr6,0x82cc46b0
	if (cr6.eq) goto loc_82CC46B0;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82cc46e8
	if (cr6.gt) goto loc_82CC46E8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82cc4608
	if (cr6.eq) goto loc_82CC4608;
	// bdz 0x82cc4640
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CC4640;
	// bdz 0x82cc4678
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CC4678;
	// bdz 0x82cc46b0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CC46B0;
	// bdz 0x82cc46e8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CC46E8;
	// bdz 0x82cc46e8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CC46E8;
	// lis r29,-31776
	ctx.r29.s64 = -2082471936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r29,7520
	ctx.r28.s64 = ctx.r29.s64 + 7520;
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC45E4;
	sub_82D20AE0(ctx, base);
	// lwz r11,7520(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7520);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,125(r30)
	PPC_STORE_U8(ctx.r30.u32 + 125, ctx.r9.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CC4608:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,7520
	ctx.r29.s64 = ctx.r11.s64 + 7520;
	// lwz r4,56(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC461C;
	sub_82D20AE0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,125(r30)
	PPC_STORE_U8(ctx.r30.u32 + 125, ctx.r9.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CC4640:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,7520
	ctx.r29.s64 = ctx.r11.s64 + 7520;
	// lwz r4,60(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC4654;
	sub_82D20AE0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,125(r30)
	PPC_STORE_U8(ctx.r30.u32 + 125, ctx.r9.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CC4678:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,7520
	ctx.r29.s64 = ctx.r11.s64 + 7520;
	// lwz r4,64(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC468C;
	sub_82D20AE0(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,125(r30)
	PPC_STORE_U8(ctx.r30.u32 + 125, ctx.r9.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CC46B0:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,7520
	ctx.r29.s64 = ctx.r11.s64 + 7520;
	// lwz r4,68(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC46C4;
	sub_82D20AE0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,125(r30)
	PPC_STORE_U8(ctx.r30.u32 + 125, ctx.r9.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CC46E8:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r30,r11,7520
	ctx.r30.s64 = ctx.r11.s64 + 7520;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC46FC;
	sub_82D20AE0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4718"))) PPC_WEAK_FUNC(sub_82CC4718);
PPC_FUNC_IMPL(__imp__sub_82CC4718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CC4720;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cc475c
	if (cr6.eq) goto loc_82CC475C;
loc_82CC4738:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82CC4744;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc475c
	if (!cr6.eq) goto loc_82CC475C;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82cc4738
	if (!cr6.eq) goto loc_82CC4738;
loc_82CC475C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4768"))) PPC_WEAK_FUNC(sub_82CC4768);
PPC_FUNC_IMPL(__imp__sub_82CC4768) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cd0530
	ctx.lr = 0x82CC4784;
	sub_82CD0530(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,11544
	ctx.r9.s64 = ctx.r11.s64 + 11544;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc4570
	ctx.lr = 0x82CC47A8;
	sub_82CC4570(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r5.u32);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC47C8;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82d23390
	ctx.lr = 0x82CC47D8;
	sub_82D23390(ctx, base);
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

__attribute__((alias("__imp__sub_82CC47F0"))) PPC_WEAK_FUNC(sub_82CC47F0);
PPC_FUNC_IMPL(__imp__sub_82CC47F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CC47F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cc4844
	if (cr6.eq) goto loc_82CC4844;
loc_82CC4814:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82CC4820;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc4838
	if (!cr6.eq) goto loc_82CC4838;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82CC4838:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82cc4814
	if (!cr6.eq) goto loc_82CC4814;
loc_82CC4844:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4850"))) PPC_WEAK_FUNC(sub_82CC4850);
PPC_FUNC_IMPL(__imp__sub_82CC4850) {
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
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CC4884;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc489c
	if (cr6.eq) goto loc_82CC489C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cc4768
	ctx.lr = 0x82CC4898;
	sub_82CC4768(ctx, base);
	// b 0x82cc48a0
	goto loc_82CC48A0;
loc_82CC489C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC48A0:
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

__attribute__((alias("__imp__sub_82CC48B8"))) PPC_WEAK_FUNC(sub_82CC48B8);
PPC_FUNC_IMPL(__imp__sub_82CC48B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,100(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,96(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r6,24
	ctx.r6.s64 = 24;
loc_82CC48D4:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82cc4918
	if (cr6.eq) goto loc_82CC4918;
loc_82CC48E4:
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cc4904
	if (cr6.eq) goto loc_82CC4904;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cc48e4
	if (!cr6.eq) goto loc_82CC48E4;
loc_82CC4904:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82cc4918
	if (cr6.eq) goto loc_82CC4918;
	// lwz r11,96(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r3,r9,r6
	ctx.r3.s32 = PPCDivide(ctx.r9.s32, ctx.r6.s32);
loc_82CC4918:
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x82cc48d4
	if (cr6.lt) goto loc_82CC48D4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC4928"))) PPC_WEAK_FUNC(sub_82CC4928);
PPC_FUNC_IMPL(__imp__sub_82CC4928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CC4930;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC493C;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82CC4944;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r29,r11,5
	ctx.r29.s64 = ctx.r11.s64 + 327680;
	// addi r29,r29,14904
	ctx.r29.s64 = ctx.r29.s64 + 14904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123778
	ctx.lr = 0x82CC4958;
	sub_83123778(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,194
	ctx.r10.s64 = 12713984;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ori r9,r10,52144
	ctx.r9.u64 = ctx.r10.u64 | 52144;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lhzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x8316aeb8
	ctx.lr = 0x82CC497C;
	sub_8316AEB8(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,308(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 308);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CC4994;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123768
	ctx.lr = 0x82CC499C;
	sub_83123768(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc48b8
	ctx.lr = 0x82CC49A8;
	sub_82CC48B8(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc49c8
	if (cr6.eq) goto loc_82CC49C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC49C8;
	sub_825952B8(ctx, base);
loc_82CC49C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC49D0"))) PPC_WEAK_FUNC(sub_82CC49D0);
PPC_FUNC_IMPL(__imp__sub_82CC49D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82CC49D8;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC49E8;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,-7112
	ctx.r5.s64 = ctx.r10.s64 + -7112;
	// lwz r22,48(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82cc4718
	ctx.lr = 0x82CC4A08;
	sub_82CC4718(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x82cc4a20
	if (cr6.eq) goto loc_82CC4A20;
	// lis r11,-32051
	ctx.r11.s64 = -2100494336;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-7112
	ctx.r5.s64 = ctx.r11.s64 + -7112;
	// bl 0x82cc47f0
	ctx.lr = 0x82CC4A20;
	sub_82CC47F0(ctx, base);
loc_82CC4A20:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x82cc4a50
	if (cr6.eq) goto loc_82CC4A50;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x831ce420
	ctx.lr = 0x82CC4A48;
	sub_831CE420(ctx, base);
	// add r9,r31,r29
	ctx.r9.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
loc_82CC4A50:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// addi r24,r10,1
	ctx.r24.s64 = ctx.r10.s64 + 1;
	// ble cr6,0x82cc4a80
	if (!cr6.gt) goto loc_82CC4A80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r27,r11,31,1,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_82CC4A80:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// beq cr6,0x82cc4bac
	if (cr6.eq) goto loc_82CC4BAC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// li r23,55
	ctx.r23.s64 = 55;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
	// li r21,2
	ctx.r21.s64 = 2;
loc_82CC4AA4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// sth r25,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r25.u16);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// beq 0x82cc4bb4
	if (cr0.eq) goto loc_82CC4BB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC4AE0;
	sub_8311C3D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r8,r9,28,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFF;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x8311c3d8
	ctx.lr = 0x82CC4AFC;
	sub_8311C3D8(ctx, base);
	// lhz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// sth r7,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r7.u16);
	// beq cr6,0x82cc4b6c
	if (cr6.eq) goto loc_82CC4B6C;
loc_82CC4B10:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r9,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82cc4b6c
	if (!cr6.gt) goto loc_82CC4B6C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwzx r19,r11,r10
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x831c64a0
	ctx.lr = 0x82CC4B40;
	sub_831C64A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82cce660
	ctx.lr = 0x82CC4B4C;
	sub_82CCE660(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83546fd8
	ctx.lr = 0x82CC4B60;
	sub_83546FD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x82cc4b10
	if (cr6.lt) goto loc_82CC4B10;
loc_82CC4B6C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82cd05f8
	ctx.lr = 0x82CC4B78;
	sub_82CD05F8(ctx, base);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc4b90
	if (cr6.eq) goto loc_82CC4B90;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82CC4B90;
	sub_825952B8(ctx, base);
loc_82CC4B90:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// blt cr6,0x82cc4aa4
	if (cr6.lt) goto loc_82CC4AA4;
loc_82CC4BAC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82CC4BB4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC4BC0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CC4BC0"))) PPC_WEAK_FUNC(sub_82CC4BC0);
PPC_FUNC_IMPL(__imp__sub_82CC4BC0) {
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
	// bl 0x82d34e50
	ctx.lr = 0x82CC4BD8;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82CC4BDC;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc4c00
	if (!cr6.eq) goto loc_82CC4C00;
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
loc_82CC4C00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccfd98
	ctx.lr = 0x82CC4C08;
	sub_82CCFD98(ctx, base);
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

__attribute__((alias("__imp__sub_82CC4C1C"))) PPC_WEAK_FUNC(sub_82CC4C1C);
PPC_FUNC_IMPL(__imp__sub_82CC4C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC4C20"))) PPC_WEAK_FUNC(sub_82CC4C20);
PPC_FUNC_IMPL(__imp__sub_82CC4C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CC4C28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bgt cr6,0x82cc4dac
	if (cr6.gt) goto loc_82CC4DAC;
	// beq cr6,0x82cc4d6c
	if (cr6.eq) goto loc_82CC4D6C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82cc4dac
	if (cr6.gt) goto loc_82CC4DAC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82cc4cac
	if (cr6.eq) goto loc_82CC4CAC;
	// bdz 0x82cc4cec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CC4CEC;
	// bdz 0x82cc4d2c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CC4D2C;
	// bdz 0x82cc4d6c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CC4D6C;
	// bdz 0x82cc4dac
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CC4DAC;
	// bdz 0x82cc4dac
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CC4DAC;
	// lis r30,-31776
	ctx.r30.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r30,7728
	ctx.r29.s64 = ctx.r30.s64 + 7728;
	// lwz r4,72(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC4C80;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7728(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7728);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC4C8C;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82d23390
	ctx.lr = 0x82CC4C9C;
	sub_82D23390(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CC4CAC:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,7728
	ctx.r30.s64 = ctx.r11.s64 + 7728;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC4CC0;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC4CCC;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82d23390
	ctx.lr = 0x82CC4CDC;
	sub_82D23390(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CC4CEC:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,7728
	ctx.r30.s64 = ctx.r11.s64 + 7728;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC4D00;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC4D0C;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82d23390
	ctx.lr = 0x82CC4D1C;
	sub_82D23390(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CC4D2C:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,7728
	ctx.r30.s64 = ctx.r11.s64 + 7728;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC4D40;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC4D4C;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82d23390
	ctx.lr = 0x82CC4D5C;
	sub_82D23390(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CC4D6C:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,7728
	ctx.r30.s64 = ctx.r11.s64 + 7728;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC4D80;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC4D8C;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82d23390
	ctx.lr = 0x82CC4D9C;
	sub_82D23390(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CC4DAC:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,7728
	ctx.r30.s64 = ctx.r11.s64 + 7728;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC4DC0;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC4DCC;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82d23390
	ctx.lr = 0x82CC4DDC;
	sub_82D23390(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4DE4"))) PPC_WEAK_FUNC(sub_82CC4DE4);
PPC_FUNC_IMPL(__imp__sub_82CC4DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC4DE8"))) PPC_WEAK_FUNC(sub_82CC4DE8);
PPC_FUNC_IMPL(__imp__sub_82CC4DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CC4DF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82cd0530
	ctx.lr = 0x82CC4E00;
	sub_82CD0530(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20256
	ctx.r9.s64 = ctx.r11.s64 + -20256;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// stw r7,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r7.u32);
	// bl 0x82d17d90
	ctx.lr = 0x82CC4E24;
	sub_82D17D90(ctx, base);
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC4E30;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC4E40;
	sub_8311C3D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,588
	ctx.r5.s64 = 588;
	// bl 0x831ce980
	ctx.lr = 0x82CC4E50;
	sub_831CE980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r29,r31,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8311c338
	ctx.lr = 0x82CC4E64;
	sub_8311C338(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// rlwinm r5,r31,28,20,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFF;
	// sth r29,136(r30)
	PPC_STORE_U16(ctx.r30.u32 + 136, ctx.r29.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r5.u32);
	// lwz r4,88(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 88);
	// stw r4,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r4.u32);
	// bl 0x82cc4c20
	ctx.lr = 0x82CC4E84;
	sub_82CC4C20(ctx, base);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x82a673c0
	ctx.lr = 0x82CC4E8C;
	sub_82A673C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4E98"))) PPC_WEAK_FUNC(sub_82CC4E98);
PPC_FUNC_IMPL(__imp__sub_82CC4E98) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20256
	ctx.r9.s64 = ctx.r11.s64 + -20256;
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
	// bl 0x82cd0388
	ctx.lr = 0x82CC4ED0;
	sub_82CD0388(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cc4ee8
	if (cr6.eq) goto loc_82CC4EE8;
	// bl 0x82416268
	ctx.lr = 0x82CC4EE4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CC4EE8:
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

__attribute__((alias("__imp__sub_82CC4F00"))) PPC_WEAK_FUNC(sub_82CC4F00);
PPC_FUNC_IMPL(__imp__sub_82CC4F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// divw r6,r7,r10
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// subfic r5,r6,1
	xer.ca = ctx.r6.u32 <= 1;
	ctx.r5.s64 = 1 - ctx.r6.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r10,r8
	ctx.r30.u64 = ctx.r10.u64 & ctx.r8.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CC4F48;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82d19788
	ctx.lr = 0x82CC4F58;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CC4F68;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_82CC4F80"))) PPC_WEAK_FUNC(sub_82CC4F80);
PPC_FUNC_IMPL(__imp__sub_82CC4F80) {
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
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CC4FB4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc4fcc
	if (cr6.eq) goto loc_82CC4FCC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cc4de8
	ctx.lr = 0x82CC4FC8;
	sub_82CC4DE8(ctx, base);
	// b 0x82cc4fd0
	goto loc_82CC4FD0;
loc_82CC4FCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC4FD0:
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

__attribute__((alias("__imp__sub_82CC4FE8"))) PPC_WEAK_FUNC(sub_82CC4FE8);
PPC_FUNC_IMPL(__imp__sub_82CC4FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82CC4FF0;
	__savegprlr_21(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x831156e8
	ctx.lr = 0x82CC5000;
	sub_831156E8(ctx, base);
	// lwz r11,128(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 128);
	// addi r30,r24,128
	ctx.r30.s64 = ctx.r24.s64 + 128;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC5018;
	sub_8311C3D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// bl 0x8311c338
	ctx.lr = 0x82CC5028;
	sub_8311C338(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,88(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 88);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82CC503C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r25,r11,-20356
	ctx.r25.s64 = ctx.r11.s64 + -20356;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-56
	ctx.r4.s64 = ctx.r25.s64 + -56;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CC505C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc5088
	if (cr6.eq) goto loc_82CC5088;
	// lwz r28,88(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82CC5074;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82CC5088;
	sub_82D32C58(ctx, base);
loc_82CC5088:
	// li r23,15
	ctx.r23.s64 = 15;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x83162d40
	ctx.lr = 0x82CC50B0;
	sub_83162D40(ctx, base);
	// addi r6,r25,-994
	ctx.r6.s64 = ctx.r25.s64 + -994;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x82CC50C4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82cc5104
	if (cr6.eq) goto loc_82CC5104;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// li r31,3
	ctx.r31.s64 = 3;
	// bl 0x83162d40
	ctx.lr = 0x82CC50E4;
	sub_83162D40(ctx, base);
	// addi r6,r25,-44
	ctx.r6.s64 = ctx.r25.s64 + -44;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x82CC50F8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x82cc5108
	if (!cr6.eq) goto loc_82CC5108;
loc_82CC5104:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CC5108:
	// rlwinm r10,r31,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// li r21,2
	ctx.r21.s64 = 2;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cc5148
	if (cr6.eq) goto loc_82CC5148;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc513c
	if (cr6.lt) goto loc_82CC513C;
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x82CC513C;
	sub_825952B8(ctx, base);
loc_82CC513C:
	// stw r23,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r23.u32);
	// stw r26,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r26.u32);
	// stb r26,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r26.u8);
loc_82CC5148:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82cc517c
	if (cr6.eq) goto loc_82CC517C;
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc5170
	if (cr6.lt) goto loc_82CC5170;
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82CC5170;
	sub_825952B8(ctx, base);
loc_82CC5170:
	// stw r23,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r23.u32);
	// stw r26,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r26.u32);
	// stb r26,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r26.u8);
loc_82CC517C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc520c
	if (cr6.eq) goto loc_82CC520C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC5198;
	sub_8311C3D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// li r5,588
	ctx.r5.s64 = 588;
	// bl 0x831ce980
	ctx.lr = 0x82CC51A8;
	sub_831CE980(ctx, base);
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r10,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bne cr6,0x82cc51cc
	if (!cr6.eq) goto loc_82CC51CC;
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// ori r4,r4,110
	ctx.r4.u64 = ctx.r4.u64 | 110;
	// bl 0x82d04220
	ctx.lr = 0x82CC51C8;
	sub_82D04220(ctx, base);
	// b 0x82cc52dc
	goto loc_82CC52DC;
loc_82CC51CC:
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// bne cr6,0x82cc51e4
	if (!cr6.eq) goto loc_82CC51E4;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,335
	ctx.r4.u64 = ctx.r4.u64 | 335;
	// bl 0x82d04220
	ctx.lr = 0x82CC51E0;
	sub_82D04220(ctx, base);
	// b 0x82cc52dc
	goto loc_82CC52DC;
loc_82CC51E4:
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// bne cr6,0x82cc51fc
	if (!cr6.eq) goto loc_82CC51FC;
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// ori r4,r4,267
	ctx.r4.u64 = ctx.r4.u64 | 267;
	// bl 0x82d04220
	ctx.lr = 0x82CC51F8;
	sub_82D04220(ctx, base);
	// b 0x82cc52dc
	goto loc_82CC52DC;
loc_82CC51FC:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,559
	ctx.r4.u64 = ctx.r4.u64 | 559;
	// bl 0x82d04220
	ctx.lr = 0x82CC5208;
	sub_82D04220(ctx, base);
	// b 0x82cc52dc
	goto loc_82CC52DC;
loc_82CC520C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83195918
	ctx.lr = 0x82CC5218;
	sub_83195918(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82cc528c
	if (cr6.eq) goto loc_82CC528C;
	// addi r4,r25,-993
	ctx.r4.s64 = ctx.r25.s64 + -993;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82CC5234;
	sub_837B0C10(ctx, base);
	// lhz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// bl 0x83195988
	ctx.lr = 0x82CC523C;
	sub_83195988(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8314d680
	ctx.lr = 0x82CC524C;
	sub_8314D680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cc5260
	if (cr6.eq) goto loc_82CC5260;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d04220
	ctx.lr = 0x82CC5260;
	sub_82D04220(ctx, base);
loc_82CC5260:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82CC5274;
	sub_825A1DA8(ctx, base);
	// addi r4,r25,-40
	ctx.r4.s64 = ctx.r25.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82CC5284;
	sub_825A1EB8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x82CC528C;
	sub_8387E8E0(ctx, base);
loc_82CC528C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83162d40
	ctx.lr = 0x82CC52A0;
	sub_83162D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82CC52B4;
	sub_825A1DA8(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc52d0
	if (cr6.lt) goto loc_82CC52D0;
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82CC52D0;
	sub_825952B8(ctx, base);
loc_82CC52D0:
	// stw r23,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r23.u32);
	// stw r26,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r26.u32);
	// stb r26,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r26.u8);
loc_82CC52DC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC52E4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,-36
	ctx.r4.s64 = ctx.r25.s64 + -36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC52FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc53f0
	if (cr6.eq) goto loc_82CC53F0;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc531c
	if (!cr6.lt) goto loc_82CC531C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CC531C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30208
	ctx.lr = 0x82CC5324;
	sub_82D30208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2fe58
	ctx.lr = 0x82CC532C;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc5340
	if (cr6.eq) goto loc_82CC5340;
	// lwz r11,112(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 112);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d7f8
	ctx.lr = 0x82CC5340;
	sub_82D3D7F8(ctx, base);
loc_82CC5340:
	// lwz r11,88(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 88);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x82cc53f0
	if (cr6.eq) goto loc_82CC53F0;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x82cc53f0
	if (cr6.eq) goto loc_82CC53F0;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// beq cr6,0x82cc53f0
	if (cr6.eq) goto loc_82CC53F0;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// beq cr6,0x82cc53f0
	if (cr6.eq) goto loc_82CC53F0;
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82cc5398
	if (!cr6.eq) goto loc_82CC5398;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x82cc5394
	if (cr6.eq) goto loc_82CC5394;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r9.u8);
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
loc_82CC5394:
	// stw r21,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
loc_82CC5398:
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x83125548
	ctx.lr = 0x82CC53AC;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc53c0
	if (cr6.lt) goto loc_82CC53C0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cc53c4
	goto loc_82CC53C4;
loc_82CC53C0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82CC53C4:
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x837b0c10
	ctx.lr = 0x82CC53CC;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r3,88(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 88);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// bl 0x82b3f950
	ctx.lr = 0x82CC53E0;
	sub_82B3F950(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x82CC53E8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8387e8e0
	ctx.lr = 0x82CC53F0;
	sub_8387E8E0(ctx, base);
loc_82CC53F0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC53F8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,-24
	ctx.r4.s64 = ctx.r25.s64 + -24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC5410;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc5538
	if (cr6.eq) goto loc_82CC5538;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cc5430
	if (!cr6.lt) goto loc_82CC5430;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CC5430:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82CC5438;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CC544C;
	sub_82D291E0(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc5468
	if (cr6.lt) goto loc_82CC5468;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82CC5468;
	sub_825952B8(ctx, base);
loc_82CC5468:
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// addi r4,r25,-962
	ctx.r4.s64 = ctx.r25.s64 + -962;
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r26,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r26.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82CC5480;
	sub_837B0C10(ctx, base);
	// lwz r11,112(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 112);
	// lwz r10,96(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// li r30,24
	ctx.r30.s64 = 24;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,40
	ctx.r4.u64 = ctx.r4.u64 | 40;
	// addi r31,r24,96
	ctx.r31.s64 = ctx.r24.s64 + 96;
	// lwz r11,100(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r6,r9,r30
	ctx.r6.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	// bl 0x82d042a8
	ctx.lr = 0x82CC54B0;
	sub_82D042A8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CC54B8;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,-12
	ctx.r4.s64 = ctx.r25.s64 + -12;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CC54D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc5510
	if (cr6.eq) goto loc_82CC5510;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// ble cr6,0x82cc5504
	if (!cr6.gt) goto loc_82CC5504;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82d291e0
	ctx.lr = 0x82CC5500;
	sub_82D291E0(ctx, base);
	// b 0x82cc5510
	goto loc_82CC5510;
loc_82CC5504:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC5510;
	sub_82D2AEC8(ctx, base);
loc_82CC5510:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc552c
	if (cr6.lt) goto loc_82CC552C;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82CC552C;
	sub_825952B8(ctx, base);
loc_82CC552C:
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
loc_82CC5538:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC5540;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC5558;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc55b4
	if (cr6.eq) goto loc_82CC55B4;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83125548
	ctx.lr = 0x82CC5578;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82CC558C;
	sub_82D291E0(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc55a8
	if (cr6.lt) goto loc_82CC55A8;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82CC55A8;
	sub_825952B8(ctx, base);
loc_82CC55A8:
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stw r26,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// stb r26,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r26.u8);
loc_82CC55B4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc55d0
	if (cr6.lt) goto loc_82CC55D0;
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CC55D0;
	sub_825952B8(ctx, base);
loc_82CC55D0:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC55D8"))) PPC_WEAK_FUNC(sub_82CC55D8);
PPC_FUNC_IMPL(__imp__sub_82CC55D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CC55E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC55EC;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r4,136(r25)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + 136);
	// bl 0x8311c338
	ctx.lr = 0x82CC55F8;
	sub_8311C338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r25,140
	ctx.r4.s64 = ctx.r25.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x831c6648
	ctx.lr = 0x82CC5610;
	sub_831C6648(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc576c
	if (cr6.eq) goto loc_82CC576C;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc5648
	if (cr6.eq) goto loc_82CC5648;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82cc5648
	if (cr6.lt) goto loc_82CC5648;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r26,r11,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_82CC5648:
	// lhz r11,136(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 136);
	// li r9,55
	ctx.r9.s64 = 55;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// sth r11,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r11.u16);
	// lwz r8,516(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 516);
	// rlwinm r7,r8,0,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cc5744
	if (cr6.eq) goto loc_82CC5744;
	// addi r27,r29,4
	ctx.r27.s64 = ctx.r29.s64 + 4;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82CC5684:
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bge cr6,0x82cc5694
	if (!cr6.lt) goto loc_82CC5694;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC5694:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82CC56A4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82cc56a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CC56A4;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x82cc56dc
	if (cr6.lt) goto loc_82CC56DC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cd05f8
	ctx.lr = 0x82CC56C4;
	sub_82CD05F8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82cc56d8
	if (cr6.eq) goto loc_82CC56D8;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_82CC56D8:
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
loc_82CC56DC:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm r11,r11,22,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3F;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// bne cr6,0x82cc56ec
	if (!cr6.eq) goto loc_82CC56EC;
loc_82CC56EC:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8312db38
	ctx.lr = 0x82CC56FC;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82cc5718
	if (!cr6.eq) goto loc_82CC5718;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8312db38
	ctx.lr = 0x82CC5714;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
loc_82CC5718:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83546fd8
	ctx.lr = 0x82CC572C;
	sub_83546FD8(ctx, base);
	// lwz r11,516(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 516);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82cc5684
	if (cr6.lt) goto loc_82CC5684;
loc_82CC5744:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cd05f8
	ctx.lr = 0x82CC5750;
	sub_82CD05F8(ctx, base);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc576c
	if (cr6.eq) goto loc_82CC576C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC576C;
	sub_825952B8(ctx, base);
loc_82CC576C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC5774"))) PPC_WEAK_FUNC(sub_82CC5774);
PPC_FUNC_IMPL(__imp__sub_82CC5774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC5778"))) PPC_WEAK_FUNC(sub_82CC5778);
PPC_FUNC_IMPL(__imp__sub_82CC5778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82CC5780;
	__savegprlr_18(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC578C;
	sub_831156E8(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r4,r22,132
	ctx.r4.s64 = ctx.r22.s64 + 132;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// bl 0x83197d10
	ctx.lr = 0x82CC57B0;
	sub_83197D10(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x82cc57e0
	if (!cr6.eq) goto loc_82CC57E0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc5990
	if (cr6.eq) goto loc_82CC5990;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC57D8;
	sub_825952B8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82CC57E0:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// li r19,2
	ctx.r19.s64 = 2;
	// srawi. r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// beq 0x82cc597c
	if (cr0.eq) goto loc_82CC597C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// li r20,55
	ctx.r20.s64 = 55;
	// ori r21,r10,65535
	ctx.r21.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// ble cr6,0x82cc5998
	if (!cr6.gt) goto loc_82CC5998;
loc_82CC580C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhzx r4,r23,r4
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + ctx.r4.u32);
	// bl 0x8311c338
	ctx.lr = 0x82CC5818;
	sub_8311C338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r22,140
	ctx.r4.s64 = ctx.r22.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x831c6648
	ctx.lr = 0x82CC5830;
	sub_831C6648(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc595c
	if (cr6.eq) goto loc_82CC595C;
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// sth r21,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r21.u16);
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc592c
	if (cr6.eq) goto loc_82CC592C;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82CC586C:
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bge cr6,0x82cc587c
	if (!cr6.lt) goto loc_82CC587C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82CC587C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,22,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3F;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// bne cr6,0x82cc5890
	if (!cr6.eq) goto loc_82CC5890;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82CC5890:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CC58A0;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82cc58bc
	if (!cr6.eq) goto loc_82CC58BC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CC58B8;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
loc_82CC58BC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x83546fd8
	ctx.lr = 0x82CC58D0;
	sub_83546FD8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8311c148
	ctx.lr = 0x82CC58E0;
	sub_8311C148(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8311c148
	ctx.lr = 0x82CC58F0;
	sub_8311C148(ctx, base);
	// lwz r11,788(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x82cc5910
	if (!cr6.eq) goto loc_82CC5910;
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82cc5914
	if (cr6.eq) goto loc_82CC5914;
loc_82CC5910:
	// stw r24,112(r22)
	PPC_STORE_U32(ctx.r22.u32 + 112, ctx.r24.u32);
loc_82CC5914:
	// lwz r11,516(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 516);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82cc586c
	if (cr6.lt) goto loc_82CC586C;
loc_82CC592C:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82cd05f8
	ctx.lr = 0x82CC5938;
	sub_82CD05F8(ctx, base);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc5950
	if (cr6.eq) goto loc_82CC5950;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82CC5950;
	sub_825952B8(ctx, base);
loc_82CC5950:
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
loc_82CC595C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bgt cr6,0x82cc580c
	if (cr6.gt) goto loc_82CC580C;
loc_82CC597C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc5990
	if (cr6.eq) goto loc_82CC5990;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82CC5990;
	sub_825952B8(ctx, base);
loc_82CC5990:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82CC5998:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC59A4;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CC59A4"))) PPC_WEAK_FUNC(sub_82CC59A4);
PPC_FUNC_IMPL(__imp__sub_82CC59A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC59A8"))) PPC_WEAK_FUNC(sub_82CC59A8);
PPC_FUNC_IMPL(__imp__sub_82CC59A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CC59B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC59BC;
	sub_831156E8(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC59CC;
	sub_8311C3D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,588
	ctx.r5.s64 = 588;
	// bl 0x831ce980
	ctx.lr = 0x82CC59DC;
	sub_831CE980(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r29,r10,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r29,65535
	cr6.compare<uint32_t>(ctx.r29.u32, 65535, xer);
	// beq cr6,0x82cc5a9c
	if (cr6.eq) goto loc_82CC5A9C;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r30,132
	ctx.r4.s64 = ctx.r30.s64 + 132;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x83197d10
	ctx.lr = 0x82CC5A0C;
	sub_83197D10(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc5a64
	if (cr6.eq) goto loc_82CC5A64;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82cc5a54
	if (!cr6.gt) goto loc_82CC5A54;
loc_82CC5A34:
	// lhz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, xer);
	// beq cr6,0x82cc5a60
	if (cr6.eq) goto loc_82CC5A60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82cc5a34
	if (cr6.gt) goto loc_82CC5A34;
	// b 0x82cc5a64
	goto loc_82CC5A64;
loc_82CC5A54:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC5A60;
	sub_831CC188(ctx, base);
loc_82CC5A60:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82CC5A64:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc5a7c
	if (cr6.eq) goto loc_82CC5A7C;
	// bl 0x82cc5778
	ctx.lr = 0x82CC5A78;
	sub_82CC5778(ctx, base);
	// b 0x82cc5a80
	goto loc_82CC5A80;
loc_82CC5A7C:
	// bl 0x82cc55d8
	ctx.lr = 0x82CC5A80;
	sub_82CC55D8(ctx, base);
loc_82CC5A80:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc5a9c
	if (cr6.eq) goto loc_82CC5A9C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC5A9C;
	sub_825952B8(ctx, base);
loc_82CC5A9C:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC5AA4"))) PPC_WEAK_FUNC(sub_82CC5AA4);
PPC_FUNC_IMPL(__imp__sub_82CC5AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC5AA8"))) PPC_WEAK_FUNC(sub_82CC5AA8);
PPC_FUNC_IMPL(__imp__sub_82CC5AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc5ac0
	if (!cr6.eq) goto loc_82CC5AC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d19788
	sub_82D19788(ctx, base);
	return;
loc_82CC5AC0:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82d19788
	sub_82D19788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC5AC8"))) PPC_WEAK_FUNC(sub_82CC5AC8);
PPC_FUNC_IMPL(__imp__sub_82CC5AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CC5AD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x82CC5AFC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc5b40
	if (cr6.eq) goto loc_82CC5B40;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cc4768
	ctx.lr = 0x82CC5B14;
	sub_82CC4768(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r27,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r27.u8);
	// addi r9,r11,-19592
	ctx.r9.s64 = ctx.r11.s64 + -19592;
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CC5B40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC5B4C"))) PPC_WEAK_FUNC(sub_82CC5B4C);
PPC_FUNC_IMPL(__imp__sub_82CC5B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC5B50"))) PPC_WEAK_FUNC(sub_82CC5B50);
PPC_FUNC_IMPL(__imp__sub_82CC5B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82CC5B58;
	__savegprlr_21(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC5B64;
	sub_831156E8(ctx, base);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82CC5B6C;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r21,52(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r9,140(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 140);
	// ori r10,r11,40316
	ctx.r10.u64 = ctx.r11.u64 | 40316;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r8,r24,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// beq cr6,0x82cc5bac
	if (cr6.eq) goto loc_82CC5BAC;
	// li r5,2
	ctx.r5.s64 = 2;
loc_82CC5BAC:
	// bl 0x83197d10
	ctx.lr = 0x82CC5BB0;
	sub_83197D10(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// srawi. r11,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82cc5cf4
	if (cr0.eq) goto loc_82CC5CF4;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// li r23,53
	ctx.r23.s64 = 53;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// ble cr6,0x82cc5e54
	if (!cr6.gt) goto loc_82CC5E54;
loc_82CC5BEC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhzx r4,r10,r26
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
	// bl 0x8311bf00
	ctx.lr = 0x82CC5BF8;
	sub_8311BF00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc5cec
	if (cr6.eq) goto loc_82CC5CEC;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x831c6648
	ctx.lr = 0x82CC5C18;
	sub_831C6648(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc5ccc
	if (cr6.eq) goto loc_82CC5CCC;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc5ccc
	if (cr6.eq) goto loc_82CC5CCC;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82CC5C40:
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x82cc5c50
	if (!cr6.lt) goto loc_82CC5C50;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC5C50:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82CC5C60:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82cc5c60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CC5C60;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// bl 0x8312db38
	ctx.lr = 0x82CC5C80;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82cc5ca4
	if (!cr6.eq) goto loc_82CC5CA4;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8312db38
	ctx.lr = 0x82CC5C98;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82cc5cb4
	if (cr6.eq) goto loc_82CC5CB4;
loc_82CC5CA4:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83546fd8
	ctx.lr = 0x82CC5CB4;
	sub_83546FD8(ctx, base);
loc_82CC5CB4:
	// lwz r11,516(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 516);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82cc5c40
	if (cr6.lt) goto loc_82CC5C40;
loc_82CC5CCC:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bgt cr6,0x82cc5bec
	if (cr6.gt) goto loc_82CC5BEC;
loc_82CC5CEC:
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r30,148(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_82CC5CF4:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bge cr6,0x82cc5d74
	if (!cr6.lt) goto loc_82CC5D74;
loc_82CC5D14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83546fd8
	ctx.lr = 0x82CC5D20;
	sub_83546FD8(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplwi cr6,r8,8
	cr6.compare<uint32_t>(ctx.r8.u32, 8, xer);
	// blt cr6,0x82cc5d68
	if (cr6.lt) goto loc_82CC5D68;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC5D50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82cc5d68
	if (cr6.eq) goto loc_82CC5D68;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_82CC5D68:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x82cc5d14
	if (cr6.lt) goto loc_82CC5D14;
loc_82CC5D74:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cc5d98
	if (cr0.eq) goto loc_82CC5D98;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC5D98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CC5D98:
	// addis r3,r21,5
	ctx.r3.s64 = ctx.r21.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123768
	ctx.lr = 0x82CC5DA4;
	sub_83123768(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82cc48b8
	ctx.lr = 0x82CC5DB0;
	sub_82CC48B8(ctx, base);
	// stw r3,112(r22)
	PPC_STORE_U32(ctx.r22.u32 + 112, ctx.r3.u32);
	// lwz r11,100(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 100);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r9,96(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 96);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// li r31,2
	ctx.r31.s64 = 2;
	// subfic r6,r7,1
	xer.ca = ctx.r7.u32 <= 1;
	ctx.r6.s64 = 1 - ctx.r7.s64;
	// li r4,6
	ctx.r4.s64 = 6;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// and r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 & ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CC5DE8;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CC5DF8;
	sub_82D19788(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc5e10
	if (cr6.eq) goto loc_82CC5E10;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82CC5E10;
	sub_825952B8(ctx, base);
loc_82CC5E10:
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// beq cr6,0x82cc5e34
	if (cr6.eq) goto loc_82CC5E34;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82CC5E34;
	sub_825952B8(ctx, base);
loc_82CC5E34:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc5e4c
	if (cr6.eq) goto loc_82CC5E4C;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x82CC5E4C;
	sub_825952B8(ctx, base);
loc_82CC5E4C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82CC5E54:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC5E60;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CC5E60"))) PPC_WEAK_FUNC(sub_82CC5E60);
PPC_FUNC_IMPL(__imp__sub_82CC5E60) {
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
	// bl 0x82b4cab0
	ctx.lr = 0x82CC5E78;
	sub_82B4CAB0(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lbz r7,137(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 137);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-17128
	ctx.r9.s64 = ctx.r11.s64 + -17128;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bne cr6,0x82cc5eb4
	if (!cr6.eq) goto loc_82CC5EB4;
	// bl 0x831156e8
	ctx.lr = 0x82CC5EA0;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,40316
	ctx.r9.u64 = ctx.r11.u64 | 40316;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82a673c0
	ctx.lr = 0x82CC5EB4;
	sub_82A673C0(ctx, base);
loc_82CC5EB4:
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

__attribute__((alias("__imp__sub_82CC5ECC"))) PPC_WEAK_FUNC(sub_82CC5ECC);
PPC_FUNC_IMPL(__imp__sub_82CC5ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC5ED0"))) PPC_WEAK_FUNC(sub_82CC5ED0);
PPC_FUNC_IMPL(__imp__sub_82CC5ED0) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-17256
	ctx.r10.s64 = ctx.r10.s64 + -17256;
loc_82CC5EF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82cc5f1c
	if (cr6.eq) goto loc_82CC5F1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82cc5ef8
	if (cr6.eq) goto loc_82CC5EF8;
loc_82CC5F1C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,180
	ctx.r4.s64 = 180;
	// bne cr6,0x82cc5f58
	if (!cr6.eq) goto loc_82CC5F58;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CC5F3C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc5f80
	if (cr6.eq) goto loc_82CC5F80;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cc5e60
	ctx.lr = 0x82CC5F54;
	sub_82CC5E60(ctx, base);
	// b 0x82cc5f84
	goto loc_82CC5F84;
loc_82CC5F58:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82CC5F64;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc5f80
	if (cr6.eq) goto loc_82CC5F80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cc5e60
	ctx.lr = 0x82CC5F7C;
	sub_82CC5E60(ctx, base);
	// b 0x82cc5f84
	goto loc_82CC5F84;
loc_82CC5F80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CC5F84:
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

__attribute__((alias("__imp__sub_82CC5F9C"))) PPC_WEAK_FUNC(sub_82CC5F9C);
PPC_FUNC_IMPL(__imp__sub_82CC5F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC5FA0"))) PPC_WEAK_FUNC(sub_82CC5FA0);
PPC_FUNC_IMPL(__imp__sub_82CC5FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,137(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 137);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82d19858
	sub_82D19858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC5FB4"))) PPC_WEAK_FUNC(sub_82CC5FB4);
PPC_FUNC_IMPL(__imp__sub_82CC5FB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC5FB8"))) PPC_WEAK_FUNC(sub_82CC5FB8);
PPC_FUNC_IMPL(__imp__sub_82CC5FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CC5FC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82CC5FD4;
	sub_82D19A10(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,-17484
	ctx.r4.s64 = ctx.r11.s64 + -17484;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83815d38
	ctx.lr = 0x82CC5FE8;
	sub_83815D38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83815b28
	ctx.lr = 0x82CC5FF4;
	sub_83815B28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83815b28
	ctx.lr = 0x82CC6000;
	sub_83815B28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83815b28
	ctx.lr = 0x82CC600C;
	sub_83815B28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838153c8
	ctx.lr = 0x82CC6018;
	sub_838153C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83815cb8
	ctx.lr = 0x82CC6020;
	sub_83815CB8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC6028"))) PPC_WEAK_FUNC(sub_82CC6028);
PPC_FUNC_IMPL(__imp__sub_82CC6028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82CC6030;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r4,53
	cr6.compare<int32_t>(ctx.r4.s32, 53, xer);
	// beq cr6,0x82cc6050
	if (cr6.eq) goto loc_82CC6050;
	// cmpwi cr6,r4,54
	cr6.compare<int32_t>(ctx.r4.s32, 54, xer);
	// bne cr6,0x82cc6500
	if (!cr6.eq) goto loc_82CC6500;
loc_82CC6050:
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x831c6648
	ctx.lr = 0x82CC6068;
	sub_831C6648(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc6500
	if (cr6.eq) goto loc_82CC6500;
	// addi r24,r3,4
	ctx.r24.s64 = ctx.r3.s64 + 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CC6080;
	sub_8312DB38(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r31,65535
	cr6.compare<uint32_t>(ctx.r31.u32, 65535, xer);
	// bne cr6,0x82cc609c
	if (!cr6.eq) goto loc_82CC609C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CC6098;
	sub_8312DB38(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
loc_82CC609C:
	// bl 0x831156e8
	ctx.lr = 0x82CC60A0;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC60B0;
	sub_8311C3D8(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lwz r10,8204(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8204);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cc60e4
	if (!cr6.eq) goto loc_82CC60E4;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cc60e8
	if (cr6.eq) goto loc_82CC60E8;
loc_82CC60E4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82CC60E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc612c
	if (!cr6.eq) goto loc_82CC612C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cc6118
	if (!cr6.eq) goto loc_82CC6118;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc611c
	if (cr6.eq) goto loc_82CC611C;
loc_82CC6118:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82CC611C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x82cc6130
	if (cr6.eq) goto loc_82CC6130;
loc_82CC612C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CC6130:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc6500
	if (!cr6.eq) goto loc_82CC6500;
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,53
	cr6.compare<int32_t>(ctx.r11.s32, 53, xer);
	// bne cr6,0x82cc6160
	if (!cr6.eq) goto loc_82CC6160;
	// bl 0x82d19a78
	ctx.lr = 0x82CC6150;
	sub_82D19A78(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r25,r11,8116
	ctx.r25.s64 = ctx.r11.s64 + 8116;
	// lwz r4,-44(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -44);
	// b 0x82cc6170
	goto loc_82CC6170;
loc_82CC6160:
	// bl 0x82d19a78
	ctx.lr = 0x82CC6164;
	sub_82D19A78(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r25,r11,8116
	ctx.r25.s64 = ctx.r11.s64 + 8116;
	// lwz r4,-40(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -40);
loc_82CC6170:
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC6184;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc6500
	if (cr6.eq) goto loc_82CC6500;
	// lwz r4,-36(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -36);
	// bl 0x82d2f098
	ctx.lr = 0x82CC6198;
	sub_82D2F098(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r4,-32(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82CC61A8;
	sub_82D2F098(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82cc6500
	if (cr6.eq) goto loc_82CC6500;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc6500
	if (cr6.eq) goto loc_82CC6500;
	// lwz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// addi r28,r23,100
	ctx.r28.s64 = ctx.r23.s64 + 100;
	// lwz r4,-28(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC61D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 100);
	// addi r26,r22,100
	ctx.r26.s64 = ctx.r22.s64 + 100;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,-28(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CC61F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cc6500
	if (cr6.eq) goto loc_82CC6500;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc6500
	if (cr6.eq) goto loc_82CC6500;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x82cc6278
	if (!cr6.eq) goto loc_82CC6278;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r21,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r21.u32);
	// beq cr6,0x82cc623c
	if (cr6.eq) goto loc_82CC623C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC623C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CC6250;
	sub_82D329F8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r10,324(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r21,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r21.u32);
	// beq cr6,0x82cc6270
	if (cr6.eq) goto loc_82CC6270;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC6270:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// b 0x82cc62cc
	goto loc_82CC62CC;
loc_82CC6278:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r21,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r21.u32);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cc6294
	if (cr6.eq) goto loc_82CC6294;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC6294:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CC62A8;
	sub_82D329F8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r10,324(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r21,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r21.u32);
	// beq cr6,0x82cc62c8
	if (cr6.eq) goto loc_82CC62C8;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC62C8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CC62CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CC62DC;
	sub_82D329F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc64b8
	if (cr6.eq) goto loc_82CC64B8;
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lbz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lbz r9,23(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8312dc40
	ctx.lr = 0x82CC6314;
	sub_8312DC40(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cc6380
	if (cr6.eq) goto loc_82CC6380;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CC632C;
	sub_8312DB38(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC6338;
	sub_8311C3D8(ctx, base);
	// lbz r10,23(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lbz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// lbz r9,23(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// lbz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82CC6380:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r27,r10,-17224
	ctx.r27.s64 = ctx.r10.s64 + -17224;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC63A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CC63BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82cc6408
	if (cr6.eq) goto loc_82CC6408;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc6408
	if (cr6.eq) goto loc_82CC6408;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC63E0;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC63F0;
	sub_82D2AEC8(ctx, base);
	// clrldi r4,r30,48
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CC63FC;
	sub_82D294D0(ctx, base);
	// clrldi r4,r29,48
	ctx.r4.u64 = ctx.r29.u64 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CC6408;
	sub_82D294D0(ctx, base);
loc_82CC6408:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r30,r9,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x8315bf10
	ctx.lr = 0x82CC642C;
	sub_8315BF10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82cc6454
	if (!cr6.eq) goto loc_82CC6454;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc6458
	if (cr6.eq) goto loc_82CC6458;
loc_82CC6454:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82CC6458:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc64c4
	if (cr6.eq) goto loc_82CC64C4;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cc6478
	if (!cr6.eq) goto loc_82CC6478;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// b 0x82cc647c
	goto loc_82CC647C;
loc_82CC6478:
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_82CC647C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC6494;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cc64f8
	if (!cr6.eq) goto loc_82CC64F8;
loc_82CC649C:
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_82CC64A0:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC64B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CC64B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82CC64C4:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cc64d4
	if (!cr6.eq) goto loc_82CC64D4;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x82cc64d8
	goto loc_82CC64D8;
loc_82CC64D4:
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82CC64D8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC64F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cc649c
	if (!cr6.eq) goto loc_82CC649C;
loc_82CC64F8:
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// b 0x82cc64a0
	goto loc_82CC64A0;
loc_82CC6500:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC650C"))) PPC_WEAK_FUNC(sub_82CC650C);
PPC_FUNC_IMPL(__imp__sub_82CC650C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC6510"))) PPC_WEAK_FUNC(sub_82CC6510);
PPC_FUNC_IMPL(__imp__sub_82CC6510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// addi r10,r4,-46
	ctx.r10.s64 = ctx.r4.s64 + -46;
	// bgt cr6,0x82cc659c
	if (cr6.gt) goto loc_82CC659C;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82cc658c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CC658C;
	// bdzf 4*cr6+eq,0x82cc6594
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CC6594;
	// bdzf 4*cr6+eq,0x82cc6620
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CC6620;
	// bdzf 4*cr6+eq,0x82cc6620
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CC6620;
	// bdzf 4*cr6+eq,0x82cc6584
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CC6584;
	// bdzf 4*cr6+eq,0x82cc658c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CC658C;
	// bne cr6,0x82cc6594
	if (!cr6.eq) goto loc_82CC6594;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r10,536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// lwz r9,532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// rlwinm r8,r10,10,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	// rlwinm r11,r9,25,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x3F;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cc6574
	if (cr6.eq) goto loc_82CC6574;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82CC6574:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r11,2
	xer.ca = ctx.r11.u32 <= 2;
	ctx.r11.s64 = 2 - ctx.r11.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82CC6584:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CC658C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82CC6594:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82CC659C:
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,26044
	ctx.r12.s64 = ctx.r12.s64 + 26044;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82CC65E4;
	case 1:
		goto loc_82CC658C;
	case 2:
		goto loc_82CC6620;
	case 3:
		goto loc_82CC6620;
	case 4:
		goto loc_82CC6620;
	case 5:
		goto loc_82CC6594;
	case 6:
		goto loc_82CC6614;
	case 7:
		goto loc_82CC661C;
	case 8:
		goto loc_82CC6620;
	case 9:
		goto loc_82CC6620;
	default:
		return;
	}
	// lwz r22,26084(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26084);
	// lwz r22,25996(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25996);
	// lwz r22,26144(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26144);
	// lwz r22,26144(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26144);
	// lwz r22,26144(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26144);
	// lwz r22,26004(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26004);
	// lwz r22,26132(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26132);
	// lwz r22,26140(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26140);
	// lwz r22,26144(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26144);
	// lwz r22,26144(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26144);
loc_82CC65E4:
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r10,536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// lwz r9,532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// rlwinm r8,r10,10,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	// rlwinm r11,r9,25,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x3F;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cc6604
	if (cr6.eq) goto loc_82CC6604;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82CC6604:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r11,4
	xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82CC6614:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82CC661C:
	// li r3,4
	ctx.r3.s64 = 4;
loc_82CC6620:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC6624"))) PPC_WEAK_FUNC(sub_82CC6624);
PPC_FUNC_IMPL(__imp__sub_82CC6624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC6628"))) PPC_WEAK_FUNC(sub_82CC6628);
PPC_FUNC_IMPL(__imp__sub_82CC6628) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82cc6510
	ctx.lr = 0x82CC6640;
	sub_82CC6510(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// clrldi r3,r7,32
	ctx.r3.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// lfd f1,-2240(r5)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2240);
	// bl 0x831d20a0
	ctx.lr = 0x82CC6668;
	sub_831D20A0(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f11,f12,f1
	ctx.f11.f64 = ctx.f12.f64 / ctx.f1.f64;
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
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

__attribute__((alias("__imp__sub_82CC6690"))) PPC_WEAK_FUNC(sub_82CC6690);
PPC_FUNC_IMPL(__imp__sub_82CC6690) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82cc6510
	ctx.lr = 0x82CC66B0;
	sub_82CC6510(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// lfd f1,-2240(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -2240);
	// bl 0x831d20a0
	ctx.lr = 0x82CC66D0;
	sub_831D20A0(ctx, base);
	// fctidz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,105
	ctx.r9.s64 = ctx.r31.s64 + 105;
loc_82CC66E8:
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cc6700
	if (cr6.eq) goto loc_82CC6700;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x82cc6710
	if (cr6.eq) goto loc_82CC6710;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CC6700:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82cc66e8
	if (cr6.lt) goto loc_82CC66E8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC6710:
	// divwu r10,r11,r8
	ctx.r10.u32 = PPCDivide(ctx.r11.u32, ctx.r8.u32);
	// rlwinm r9,r8,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// twllei r8,0
	// mullw r8,r10,r8
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfc r6,r9,r7
	xer.ca = ctx.r7.u32 >= ctx.r9.u32;
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
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

__attribute__((alias("__imp__sub_82CC6748"))) PPC_WEAK_FUNC(sub_82CC6748);
PPC_FUNC_IMPL(__imp__sub_82CC6748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CC6750;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lbz r10,5068(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5068);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc67e8
	if (!cr6.eq) goto loc_82CC67E8;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-14744
	ctx.r30.s64 = ctx.r11.s64 + -14744;
	// rlwinm r31,r5,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r27,r29,r30
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82CC6788;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,18
	ctx.r4.s64 = 18;
	// add r5,r27,r31
	ctx.r5.u64 = ctx.r27.u64 + ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82CC6798;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc67e8
	if (cr6.eq) goto loc_82CC67E8;
	// clrldi r4,r26,32
	ctx.r4.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82CC67A8;
	sub_82D294D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r30,r29,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82CC67B4;
	sub_82D19A78(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82d2d510
	ctx.lr = 0x82CC67C8;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc67e8
	if (cr6.eq) goto loc_82CC67E8;
	// clrldi r4,r25,32
	ctx.r4.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82CC67D8;
	sub_82D294D0(ctx, base);
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// lwz r11,5064(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5064);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5064, ctx.r11.u32);
loc_82CC67E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC67F0"))) PPC_WEAK_FUNC(sub_82CC67F0);
PPC_FUNC_IMPL(__imp__sub_82CC67F0) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-17128
	ctx.r9.s64 = ctx.r11.s64 + -17128;
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
	// bl 0x82b4ca38
	ctx.lr = 0x82CC6828;
	sub_82B4CA38(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cc6840
	if (cr6.eq) goto loc_82CC6840;
	// bl 0x82416268
	ctx.lr = 0x82CC683C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CC6840:
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

__attribute__((alias("__imp__sub_82CC6858"))) PPC_WEAK_FUNC(sub_82CC6858);
PPC_FUNC_IMPL(__imp__sub_82CC6858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CC6860;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r5,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r5.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x831c6648
	ctx.lr = 0x82CC6890;
	sub_831C6648(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc69d0
	if (cr6.eq) goto loc_82CC69D0;
	// lwz r11,140(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// lwz r10,144(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 144);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r24
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, xer);
	// bgt cr6,0x82cc68bc
	if (cr6.gt) goto loc_82CC68BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC68BC;
	sub_831CC188(ctx, base);
loc_82CC68BC:
	// lwz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r8,r10,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwzx r26,r9,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// beq cr6,0x82cc69d0
	if (cr6.eq) goto loc_82CC69D0;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// rlwinm r28,r26,14,18,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 14) & 0x3FFF;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_82CC68E4:
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// bge cr6,0x82cc68f4
	if (!cr6.lt) goto loc_82CC68F4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82CC68F4:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82CC6904:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82cc6904
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CC6904;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 1;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cc6938
	if (!cr6.eq) goto loc_82CC6938;
	// xor r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc693c
	if (cr6.eq) goto loc_82CC693C;
loc_82CC6938:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC693C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc6984
	if (!cr6.eq) goto loc_82CC6984;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cc6970
	if (!cr6.eq) goto loc_82CC6970;
	// xor r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc6974
	if (cr6.eq) goto loc_82CC6974;
loc_82CC6970:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC6974:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82cc6988
	if (cr6.eq) goto loc_82CC6988;
loc_82CC6984:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC6988:
	// rlwinm r10,r31,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cc699c
	if (cr6.eq) goto loc_82CC699C;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82CC699C:
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cc69ac
	if (cr6.eq) goto loc_82CC69AC;
	// rlwinm r31,r31,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
loc_82CC69AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc69dc
	if (cr6.eq) goto loc_82CC69DC;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// blt cr6,0x82cc68e4
	if (cr6.lt) goto loc_82CC68E4;
loc_82CC69D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82CC69DC:
	// bl 0x831156e8
	ctx.lr = 0x82CC69E0;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8312db38
	ctx.lr = 0x82CC69F4;
	sub_8312DB38(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// bne cr6,0x82cc6a10
	if (!cr6.eq) goto loc_82CC6A10;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8312db38
	ctx.lr = 0x82CC6A0C;
	sub_8312DB38(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
loc_82CC6A10:
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC6A1C;
	sub_8311C3D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// beq cr6,0x82cc6cec
	if (cr6.eq) goto loc_82CC6CEC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc6cec
	if (cr6.eq) goto loc_82CC6CEC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cc6a64
	if (!cr6.eq) goto loc_82CC6A64;
	// xor r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cc6a68
	if (cr6.eq) goto loc_82CC6A68;
loc_82CC6A64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC6A68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r7,r10
	ctx.r29.u64 = ctx.r7.u64 & ctx.r10.u64;
	// bl 0x8315bf10
	ctx.lr = 0x82CC6A84;
	sub_8315BF10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r28
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cc6aa8
	if (!cr6.eq) goto loc_82CC6AA8;
	// xor r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc6aac
	if (cr6.eq) goto loc_82CC6AAC;
loc_82CC6AA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC6AAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc6abc
	if (cr6.eq) goto loc_82CC6ABC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CC6ABC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc6ce0
	if (cr6.eq) goto loc_82CC6CE0;
	// lwz r11,156(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 156);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8315bd00
	ctx.lr = 0x82CC6AD8;
	sub_8315BD00(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r28,r25,105
	ctx.r28.s64 = ctx.r25.s64 + 105;
	// beq cr6,0x82cc6b84
	if (cr6.eq) goto loc_82CC6B84;
loc_82CC6AF0:
	// lbzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cc6b08
	if (cr6.eq) goto loc_82CC6B08;
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// beq cr6,0x82cc6b18
	if (cr6.eq) goto loc_82CC6B18;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CC6B08:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82cc6af0
	if (cr6.lt) goto loc_82CC6AF0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82CC6B18:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc6628
	ctx.lr = 0x82CC6B28;
	sub_82CC6628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82cc6510
	ctx.lr = 0x82CC6B38;
	sub_82CC6510(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// bl 0x82cc5fb8
	ctx.lr = 0x82CC6B54;
	sub_82CC5FB8(ctx, base);
	// lwz r9,100(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// bgt cr6,0x82cc6be8
	if (cr6.gt) goto loc_82CC6BE8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82cc6510
	ctx.lr = 0x82CC6B6C;
	sub_82CC6510(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x82cc6be8
	if (!cr6.eq) goto loc_82CC6BE8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82cc6be0
	goto loc_82CC6BE0;
loc_82CC6B84:
	// lbzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cc6b9c
	if (cr6.eq) goto loc_82CC6B9C;
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// beq cr6,0x82cc6bac
	if (cr6.eq) goto loc_82CC6BAC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CC6B9C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82cc6b84
	if (cr6.lt) goto loc_82CC6B84;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82CC6BAC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc6628
	ctx.lr = 0x82CC6BBC;
	sub_82CC6628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82cc6510
	ctx.lr = 0x82CC6BCC;
	sub_82CC6510(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r6,r11,6
	ctx.r6.s64 = ctx.r11.s64 + 6;
loc_82CC6BE0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc5fb8
	ctx.lr = 0x82CC6BE8;
	sub_82CC5FB8(ctx, base);
loc_82CC6BE8:
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lbz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lbz r9,23(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8312dc40
	ctx.lr = 0x82CC6C10;
	sub_8312DC40(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cc6c7c
	if (cr6.eq) goto loc_82CC6C7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8312db38
	ctx.lr = 0x82CC6C28;
	sub_8312DB38(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC6C34;
	sub_8311C3D8(ctx, base);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// lbz r8,21(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// lbz r9,23(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// lbz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82CC6C7C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC6C84:
	// lbzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cc6c9c
	if (cr6.eq) goto loc_82CC6C9C;
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// beq cr6,0x82cc6cac
	if (cr6.eq) goto loc_82CC6CAC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CC6C9C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82cc6c84
	if (cr6.lt) goto loc_82CC6C84;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82CC6CAC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc6628
	ctx.lr = 0x82CC6CBC;
	sub_82CC6628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82cc6510
	ctx.lr = 0x82CC6CCC;
	sub_82CC6510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r6,r30,16
	ctx.r6.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x82cc6748
	ctx.lr = 0x82CC6CE0;
	sub_82CC6748(ctx, base);
loc_82CC6CE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82CC6CEC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82cc6510
	ctx.lr = 0x82CC6CF8;
	sub_82CC6510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r25,105
	ctx.r9.s64 = ctx.r25.s64 + 105;
loc_82CC6D08:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cc6d20
	if (cr6.eq) goto loc_82CC6D20;
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// beq cr6,0x82cc6e18
	if (cr6.eq) goto loc_82CC6E18;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CC6D20:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82cc6d08
	if (cr6.lt) goto loc_82CC6D08;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_82CC6D30:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc6510
	ctx.lr = 0x82CC6D38;
	sub_82CC6510(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r8,r7,32
	ctx.r8.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f1,-2240(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -2240);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x831d20a0
	ctx.lr = 0x82CC6D60;
	sub_831D20A0(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r8,r7,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x3FFF;
	// lwz r11,8204(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8204);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// fdiv f11,f12,f1
	ctx.f11.f64 = ctx.f12.f64 / ctx.f1.f64;
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x82cc6da8
	if (!cr6.eq) goto loc_82CC6DA8;
	// xor r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// clrlwi r6,r9,14
	ctx.r6.u64 = ctx.r9.u32 & 0x3FFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82cc6dac
	if (cr6.eq) goto loc_82CC6DAC;
loc_82CC6DA8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82CC6DAC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cc6df0
	if (!cr6.eq) goto loc_82CC6DF0;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r6,r9,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cc6ddc
	if (!cr6.eq) goto loc_82CC6DDC;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc6de0
	if (cr6.eq) goto loc_82CC6DE0;
loc_82CC6DDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC6DE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82cc6df4
	if (cr6.eq) goto loc_82CC6DF4;
loc_82CC6DF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC6DF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc6e20
	if (cr6.eq) goto loc_82CC6E20;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc6690
	ctx.lr = 0x82CC6E10;
	sub_82CC6690(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x82cc6e54
	goto loc_82CC6E54;
loc_82CC6E18:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// b 0x82cc6d30
	goto loc_82CC6D30;
loc_82CC6E20:
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cc6e3c
	if (!cr6.eq) goto loc_82CC6E3C;
	// xor r11,r7,r26
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r26.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc6e40
	if (cr6.eq) goto loc_82CC6E40;
loc_82CC6E3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC6E40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc6e54
	if (!cr6.eq) goto loc_82CC6E54;
	// li r6,2
	ctx.r6.s64 = 2;
loc_82CC6E54:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc5fb8
	ctx.lr = 0x82CC6E64;
	sub_82CC5FB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC6E70"))) PPC_WEAK_FUNC(sub_82CC6E70);
PPC_FUNC_IMPL(__imp__sub_82CC6E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CC6E78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82cc6ec8
	if (!cr6.gt) goto loc_82CC6EC8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r27,r11,13728
	ctx.r27.s64 = ctx.r11.s64 + 13728;
loc_82CC6E98:
	// li r31,8
	ctx.r31.s64 = 8;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_82CC6EA0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cc6858
	ctx.lr = 0x82CC6EB0;
	sub_82CC6858(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82cc6ea0
	if (!cr0.eq) goto loc_82CC6EA0;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82cc6e98
	if (cr6.lt) goto loc_82CC6E98;
loc_82CC6EC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC6ED0"))) PPC_WEAK_FUNC(sub_82CC6ED0);
PPC_FUNC_IMPL(__imp__sub_82CC6ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82CC6ED8;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// bl 0x82d26640
	ctx.lr = 0x82CC6EE8;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82CC6EEC;
	sub_82D25AB8(ctx, base);
	// lbz r11,137(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 137);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,4
	ctx.r4.s64 = 4;
	// bne cr6,0x82cc6f04
	if (!cr6.eq) goto loc_82CC6F04;
	// li r4,5
	ctx.r4.s64 = 5;
loc_82CC6F04:
	// bl 0x82b4c1f0
	ctx.lr = 0x82CC6F08;
	sub_82B4C1F0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82b4d248
	ctx.lr = 0x82CC6F10;
	sub_82B4D248(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82b4ce90
	ctx.lr = 0x82CC6F18;
	sub_82B4CE90(ctx, base);
	// lwz r10,156(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 156);
	// li r11,53
	ctx.r11.s64 = 53;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// bl 0x831c6648
	ctx.lr = 0x82CC6F38;
	sub_831C6648(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r23,r11,8116
	ctx.r23.s64 = ctx.r11.s64 + 8116;
	// beq cr6,0x82cc73cc
	if (cr6.eq) goto loc_82CC73CC;
	// addi r25,r3,4
	ctx.r25.s64 = ctx.r3.s64 + 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CC6F58;
	sub_8312DB38(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r31,65535
	cr6.compare<uint32_t>(ctx.r31.u32, 65535, xer);
	// bne cr6,0x82cc6f74
	if (!cr6.eq) goto loc_82CC6F74;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CC6F70;
	sub_8312DB38(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
loc_82CC6F74:
	// bl 0x831156e8
	ctx.lr = 0x82CC6F78;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC6F88;
	sub_8311C3D8(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lwz r10,8204(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8204);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cc6fbc
	if (!cr6.eq) goto loc_82CC6FBC;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cc6fc0
	if (cr6.eq) goto loc_82CC6FC0;
loc_82CC6FBC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82CC6FC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc7004
	if (!cr6.eq) goto loc_82CC7004;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cc6ff0
	if (!cr6.eq) goto loc_82CC6FF0;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc6ff4
	if (cr6.eq) goto loc_82CC6FF4;
loc_82CC6FF0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82CC6FF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x82cc7008
	if (cr6.eq) goto loc_82CC7008;
loc_82CC7004:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CC7008:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc73cc
	if (!cr6.eq) goto loc_82CC73CC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,53
	cr6.compare<int32_t>(ctx.r11.s32, 53, xer);
	// bne cr6,0x82cc7030
	if (!cr6.eq) goto loc_82CC7030;
	// bl 0x82d19a78
	ctx.lr = 0x82CC7028;
	sub_82D19A78(ctx, base);
	// lwz r4,-44(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + -44);
	// b 0x82cc7038
	goto loc_82CC7038;
loc_82CC7030:
	// bl 0x82d19a78
	ctx.lr = 0x82CC7034;
	sub_82D19A78(ctx, base);
	// lwz r4,-40(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + -40);
loc_82CC7038:
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC704C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc73cc
	if (cr6.eq) goto loc_82CC73CC;
	// lwz r4,-36(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + -36);
	// bl 0x82d2f098
	ctx.lr = 0x82CC7060;
	sub_82D2F098(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r4,-32(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + -32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82CC7070;
	sub_82D2F098(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82cc73cc
	if (cr6.eq) goto loc_82CC73CC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc73cc
	if (cr6.eq) goto loc_82CC73CC;
	// lwz r11,100(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// addi r28,r24,100
	ctx.r28.s64 = ctx.r24.s64 + 100;
	// lwz r4,-28(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC70A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 100);
	// addi r26,r22,100
	ctx.r26.s64 = ctx.r22.s64 + 100;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,-28(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CC70C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cc73cc
	if (cr6.eq) goto loc_82CC73CC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc73cc
	if (cr6.eq) goto loc_82CC73CC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x82cc7140
	if (!cr6.eq) goto loc_82CC7140;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r21,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r21.u32);
	// beq cr6,0x82cc7104
	if (cr6.eq) goto loc_82CC7104;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC7104:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CC7118;
	sub_82D329F8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r10,324(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r21,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r21.u32);
	// beq cr6,0x82cc7138
	if (cr6.eq) goto loc_82CC7138;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC7138:
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// b 0x82cc7194
	goto loc_82CC7194;
loc_82CC7140:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r21,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r21.u32);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cc715c
	if (cr6.eq) goto loc_82CC715C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC715C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CC7170;
	sub_82D329F8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,324(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r21,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r21.u32);
	// beq cr6,0x82cc7190
	if (cr6.eq) goto loc_82CC7190;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC7190:
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
loc_82CC7194:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CC71A4;
	sub_82D329F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc71bc
	if (!cr6.eq) goto loc_82CC71BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82cc73d0
	goto loc_82CC73D0;
loc_82CC71BC:
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lbz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lbz r9,23(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8312dc40
	ctx.lr = 0x82CC71E4;
	sub_8312DC40(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cc7250
	if (cr6.eq) goto loc_82CC7250;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CC71FC;
	sub_8312DB38(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC7208;
	sub_8311C3D8(ctx, base);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// lbz r8,21(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// lbz r9,23(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// lbz r7,21(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82CC7250:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r27,r10,-17224
	ctx.r27.s64 = ctx.r10.s64 + -17224;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC7270;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CC728C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82cc72d8
	if (cr6.eq) goto loc_82CC72D8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc72d8
	if (cr6.eq) goto loc_82CC72D8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC72B0;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC72C0;
	sub_82D2AEC8(ctx, base);
	// clrldi r4,r30,48
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CC72CC;
	sub_82D294D0(ctx, base);
	// clrldi r4,r29,48
	ctx.r4.u64 = ctx.r29.u64 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CC72D8;
	sub_82D294D0(ctx, base);
loc_82CC72D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r30,r9,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x8315bf10
	ctx.lr = 0x82CC72FC;
	sub_8315BF10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82cc7324
	if (!cr6.eq) goto loc_82CC7324;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc7328
	if (cr6.eq) goto loc_82CC7328;
loc_82CC7324:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82CC7328:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc7390
	if (cr6.eq) goto loc_82CC7390;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cc7348
	if (!cr6.eq) goto loc_82CC7348;
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// b 0x82cc734c
	goto loc_82CC734C;
loc_82CC7348:
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
loc_82CC734C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC7364;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cc73c4
	if (!cr6.eq) goto loc_82CC73C4;
loc_82CC736C:
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
loc_82CC7370:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC7388;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82cc73d0
	goto loc_82CC73D0;
loc_82CC7390:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cc73a0
	if (!cr6.eq) goto loc_82CC73A0;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// b 0x82cc73a4
	goto loc_82CC73A4;
loc_82CC73A0:
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_82CC73A4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC73BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cc736c
	if (!cr6.eq) goto loc_82CC736C;
loc_82CC73C4:
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// b 0x82cc7370
	goto loc_82CC7370;
loc_82CC73CC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82CC73D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc7428
	if (cr6.eq) goto loc_82CC7428;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC73E4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-44(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + -44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC73FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc7428
	if (cr6.eq) goto loc_82CC7428;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82CC7418;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC7428;
	sub_82D2AEC8(ctx, base);
loc_82CC7428:
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82cc6028
	ctx.lr = 0x82CC7434;
	sub_82CC6028(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc748c
	if (cr6.eq) goto loc_82CC748C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC7448;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-40(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + -40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC7460;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc748c
	if (cr6.eq) goto loc_82CC748C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82CC747C;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC748C;
	sub_82D2AEC8(ctx, base);
loc_82CC748C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC7494;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-48(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + -48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC74AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc74f8
	if (cr6.eq) goto loc_82CC74F8;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82CC74C8;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC74D8;
	sub_82D2AEC8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC74E0;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC74F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CC74F8:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CC7500;
	sub_82D19A68(ctx, base);
	// bl 0x82d2ec40
	ctx.lr = 0x82CC7504;
	sub_82D2EC40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82CC7514;
	sub_82D2B608(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC751C;
	sub_82D19A78(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x82CC7520;
	sub_83574C00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d44fa8
	ctx.lr = 0x82CC7528;
	sub_82D44FA8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82cc6e70
	ctx.lr = 0x82CC7530;
	sub_82CC6E70(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7538"))) PPC_WEAK_FUNC(sub_82CC7538);
PPC_FUNC_IMPL(__imp__sub_82CC7538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82CC7540;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x831156e8
	ctx.lr = 0x82CC755C;
	sub_831156E8(ctx, base);
	// lwz r20,48(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r4,108(r23)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + 108);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8311c338
	ctx.lr = 0x82CC756C;
	sub_8311C338(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r11,47
	ctx.r11.s64 = 47;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x831c64a0
	ctx.lr = 0x82CC758C;
	sub_831C64A0(ctx, base);
	// lwz r9,516(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r8,r9,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// lis r21,-31776
	ctx.r21.s64 = -2082471936;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cc774c
	if (cr6.eq) goto loc_82CC774C;
	// addi r22,r3,4
	ctx.r22.s64 = ctx.r3.s64 + 4;
	// lwz r8,8536(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8536);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_82CC75B4:
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// bge cr6,0x82cc75c4
	if (!cr6.lt) goto loc_82CC75C4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82CC75C4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r8,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3FFF;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// rlwinm r11,r9,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cc75f0
	if (!cr6.eq) goto loc_82CC75F0;
	// xor r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cc75f4
	if (cr6.eq) goto loc_82CC75F4;
loc_82CC75F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC75F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc763c
	if (!cr6.eq) goto loc_82CC763C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r30,r30,2
	ctx.r30.u64 = ctx.r30.u64 | 2;
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cc7628
	if (!cr6.eq) goto loc_82CC7628;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cc762c
	if (cr6.eq) goto loc_82CC762C;
loc_82CC7628:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC762C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82cc7640
	if (cr6.eq) goto loc_82CC7640;
loc_82CC763C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CC7640:
	// rlwinm r7,r30,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82cc7654
	if (cr6.eq) goto loc_82CC7654;
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82CC7654:
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82cc7664
	if (cr6.eq) goto loc_82CC7664;
	// rlwinm r30,r30,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_82CC7664:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r7,r9,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// addic r6,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r26,r4,r26
	ctx.r26.u64 = ctx.r4.u64 & ctx.r26.u64;
	// bne cr6,0x82cc7694
	if (!cr6.eq) goto loc_82CC7694;
	// xor r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc7698
	if (cr6.eq) goto loc_82CC7698;
loc_82CC7694:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC7698:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc76d0
	if (!cr6.eq) goto loc_82CC76D0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82CC76B8;
	sub_8311C148(ctx, base);
	// lwz r10,788(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// lwz r8,8536(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8536);
	// rlwinm r9,r10,15,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x82cc76d0
	if (cr6.eq) goto loc_82CC76D0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82CC76D0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// xor r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm r9,r11,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cc76f8
	if (!cr6.eq) goto loc_82CC76F8;
	// xor r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cc76fc
	if (cr6.eq) goto loc_82CC76FC;
loc_82CC76F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC76FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc7734
	if (!cr6.eq) goto loc_82CC7734;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82CC771C;
	sub_8311C148(ctx, base);
	// lwz r10,788(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// lwz r8,8536(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8536);
	// rlwinm r9,r10,15,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x82cc7734
	if (cr6.eq) goto loc_82CC7734;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82CC7734:
	// lwz r11,516(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 516);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x82cc75b4
	if (cr6.lt) goto loc_82CC75B4;
loc_82CC774C:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc78cc
	if (!cr6.eq) goto loc_82CC78CC;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc78cc
	if (!cr6.eq) goto loc_82CC78CC;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// li r10,46
	ctx.r10.s64 = 46;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r26,0
	ctx.r26.s64 = 0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x831c64a0
	ctx.lr = 0x82CC7784;
	sub_831C64A0(ctx, base);
	// lwz r9,516(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r8,r9,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cc7898
	if (cr6.eq) goto loc_82CC7898;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// lwz r9,8536(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8536);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82CC77A8:
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bge cr6,0x82cc77b8
	if (!cr6.lt) goto loc_82CC77B8;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82CC77B8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// xor r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r8,r11,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82cc77e0
	if (!cr6.eq) goto loc_82CC77E0;
	// xor r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cc77e4
	if (cr6.eq) goto loc_82CC77E4;
loc_82CC77E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC77E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc7818
	if (!cr6.eq) goto loc_82CC7818;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82CC7804;
	sub_8311C148(ctx, base);
	// lwz r10,788(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r9,r10,15,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// bne cr6,0x82cc7894
	if (!cr6.eq) goto loc_82CC7894;
	// lwz r9,8536(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8536);
loc_82CC7818:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// xor r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r8,r11,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82cc7840
	if (!cr6.eq) goto loc_82CC7840;
	// xor r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cc7844
	if (cr6.eq) goto loc_82CC7844;
loc_82CC7840:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC7844:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc7878
	if (!cr6.eq) goto loc_82CC7878;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82CC7864;
	sub_8311C148(ctx, base);
	// lwz r10,788(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r9,r10,15,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// bne cr6,0x82cc7894
	if (!cr6.eq) goto loc_82CC7894;
	// lwz r9,8536(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8536);
loc_82CC7878:
	// lwz r11,516(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 516);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82cc77a8
	if (cr6.lt) goto loc_82CC77A8;
	// b 0x82cc7898
	goto loc_82CC7898;
loc_82CC7894:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_82CC7898:
	// lwz r11,516(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 516);
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,512
	cr6.compare<uint32_t>(ctx.r10.u32, 512, xer);
	// ble cr6,0x82cc78c0
	if (!cr6.gt) goto loc_82CC78C0;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// ble cr6,0x82cc78c0
	if (!cr6.gt) goto loc_82CC78C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82CC78C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82CC78CC:
	// lwz r11,104(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 104);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC78DC"))) PPC_WEAK_FUNC(sub_82CC78DC);
PPC_FUNC_IMPL(__imp__sub_82CC78DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC78E0"))) PPC_WEAK_FUNC(sub_82CC78E0);
PPC_FUNC_IMPL(__imp__sub_82CC78E0) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82CC7908;
	sub_82D253F8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// sth r30,102(r31)
	PPC_STORE_U16(ctx.r31.u32 + 102, ctx.r30.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-15032
	ctx.r8.s64 = ctx.r10.s64 + -15032;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r30,-31776
	ctx.r30.s64 = -2082471936;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// addi r6,r30,8316
	ctx.r6.s64 = ctx.r30.s64 + 8316;
	// lwz r4,-4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC7944;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8316(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8316);
	// bl 0x82d23390
	ctx.lr = 0x82CC7954;
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

__attribute__((alias("__imp__sub_82CC7970"))) PPC_WEAK_FUNC(sub_82CC7970);
PPC_FUNC_IMPL(__imp__sub_82CC7970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CC7978;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r11,22(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 22);
	// rlwinm r9,r10,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lbz r29,25(r5)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 25);
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x82cc79a4
	if (!cr6.eq) goto loc_82CC79A4;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x82cc79a8
	goto loc_82CC79A8;
loc_82CC79A4:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82CC79A8:
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lis r27,-31776
	ctx.r27.s64 = -2082471936;
	// addi r31,r28,100
	ctx.r31.s64 = ctx.r28.s64 + 100;
	// addi r10,r27,8372
	ctx.r10.s64 = ctx.r27.s64 + 8372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC79CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r30
	ctx.r4.s64 = ctx.r30.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CC79D4;
	sub_82D294D0(ctx, base);
	// lwz r8,100(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8372(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8372);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CC79EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CC79F4;
	sub_82D294D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC79FC"))) PPC_WEAK_FUNC(sub_82CC79FC);
PPC_FUNC_IMPL(__imp__sub_82CC79FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC7A00"))) PPC_WEAK_FUNC(sub_82CC7A00);
PPC_FUNC_IMPL(__imp__sub_82CC7A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CC7A08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r28,-31776
	ctx.r28.s64 = -2082471936;
	// addi r30,r4,100
	ctx.r30.s64 = ctx.r4.s64 + 100;
	// lbz r27,20(r5)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r5.u32 + 20);
	// addi r26,r28,8348
	ctx.r26.s64 = ctx.r28.s64 + 8348;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC7A3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CC7A48;
	sub_82D294D0(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CC7A60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CC7A68;
	sub_82D294D0(ctx, base);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// lbz r29,23(r29)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r29.u32 + 23);
	// bctrl 
	ctx.lr = 0x82CC7A84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CC7A90;
	sub_82D294D0(ctx, base);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8348(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8348);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CC7AA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CC7AB0;
	sub_82D294D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7AB8"))) PPC_WEAK_FUNC(sub_82CC7AB8);
PPC_FUNC_IMPL(__imp__sub_82CC7AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CC7AC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,100(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r27,-31776
	ctx.r27.s64 = -2082471936;
	// lbz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 24);
	// addi r30,r4,100
	ctx.r30.s64 = ctx.r4.s64 + 100;
	// lbz r11,23(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 23);
	// addi r26,r27,8364
	ctx.r26.s64 = ctx.r27.s64 + 8364;
	// lbz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r4,-20(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// add r25,r11,r9
	ctx.r25.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CC7B08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r25
	ctx.r4.s64 = ctx.r25.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CC7B10;
	sub_82D294D0(ctx, base);
	// lbz r10,23(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 23);
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,-16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	// add r25,r11,r9
	ctx.r25.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC7B3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r25
	ctx.r4.s64 = ctx.r25.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CC7B44;
	sub_82D294D0(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lbz r25,20(r29)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20);
	// bctrl 
	ctx.lr = 0x82CC7B60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r25
	ctx.r4.s64 = ctx.r25.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CC7B68;
	sub_82D294D0(ctx, base);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// lbz r29,23(r29)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r29.u32 + 23);
	// bctrl 
	ctx.lr = 0x82CC7B84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CC7B8C;
	sub_82D294D0(ctx, base);
	// lbz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 24);
	// lbz r11,23(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 23);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC7BB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CC7BB8;
	sub_82D294D0(ctx, base);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lbz r10,21(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// lwz r4,8364(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8364);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CC7BDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r30
	ctx.r4.s64 = ctx.r30.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CC7BE4;
	sub_82D294D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7BEC"))) PPC_WEAK_FUNC(sub_82CC7BEC);
PPC_FUNC_IMPL(__imp__sub_82CC7BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC7BF0"))) PPC_WEAK_FUNC(sub_82CC7BF0);
PPC_FUNC_IMPL(__imp__sub_82CC7BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CC7BF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82CC7C0C;
	sub_82D19A10(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,-15432
	ctx.r4.s64 = ctx.r11.s64 + -15432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83815d38
	ctx.lr = 0x82CC7C20;
	sub_83815D38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83815b28
	ctx.lr = 0x82CC7C2C;
	sub_83815B28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83815b28
	ctx.lr = 0x82CC7C38;
	sub_83815B28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83815b28
	ctx.lr = 0x82CC7C44;
	sub_83815B28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838153c8
	ctx.lr = 0x82CC7C50;
	sub_838153C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83815cb8
	ctx.lr = 0x82CC7C58;
	sub_83815CB8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7C60"))) PPC_WEAK_FUNC(sub_82CC7C60);
PPC_FUNC_IMPL(__imp__sub_82CC7C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82CC7C68;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r4,53
	cr6.compare<int32_t>(ctx.r4.s32, 53, xer);
	// beq cr6,0x82cc7c88
	if (cr6.eq) goto loc_82CC7C88;
	// cmpwi cr6,r4,54
	cr6.compare<int32_t>(ctx.r4.s32, 54, xer);
	// bne cr6,0x82cc8188
	if (!cr6.eq) goto loc_82CC8188;
loc_82CC7C88:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x831c6648
	ctx.lr = 0x82CC7CA0;
	sub_831C6648(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc8188
	if (cr6.eq) goto loc_82CC8188;
	// addi r23,r3,4
	ctx.r23.s64 = ctx.r3.s64 + 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CC7CB8;
	sub_8312DB38(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r31,65535
	cr6.compare<uint32_t>(ctx.r31.u32, 65535, xer);
	// bne cr6,0x82cc7cd4
	if (!cr6.eq) goto loc_82CC7CD4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CC7CD0;
	sub_8312DB38(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
loc_82CC7CD4:
	// bl 0x831156e8
	ctx.lr = 0x82CC7CD8;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC7CE8;
	sub_8311C3D8(ctx, base);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,53
	cr6.compare<int32_t>(ctx.r11.s32, 53, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82cc7d10
	if (!cr6.eq) goto loc_82CC7D10;
	// bl 0x82d19a78
	ctx.lr = 0x82CC7D00;
	sub_82D19A78(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r25,r11,8304
	ctx.r25.s64 = ctx.r11.s64 + 8304;
	// lwz r4,116(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// b 0x82cc7d20
	goto loc_82CC7D20;
loc_82CC7D10:
	// bl 0x82d19a78
	ctx.lr = 0x82CC7D14;
	sub_82D19A78(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r25,r11,8304
	ctx.r25.s64 = ctx.r11.s64 + 8304;
	// lwz r4,120(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 120);
loc_82CC7D20:
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC7D34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc8188
	if (cr6.eq) goto loc_82CC8188;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,148(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 148);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC7D58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc7d8c
	if (cr6.eq) goto loc_82CC7D8C;
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpwi cr6,r11,53
	cr6.compare<int32_t>(ctx.r11.s32, 53, xer);
	// bne cr6,0x82cc7d78
	if (!cr6.eq) goto loc_82CC7D78;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,29
	ctx.r4.u64 = ctx.r4.u64 | 29;
	// b 0x82cc7d88
	goto loc_82CC7D88;
loc_82CC7D78:
	// cmpwi cr6,r11,54
	cr6.compare<int32_t>(ctx.r11.s32, 54, xer);
	// bne cr6,0x82cc7d8c
	if (!cr6.eq) goto loc_82CC7D8C;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
loc_82CC7D88:
	// bl 0x82d29598
	ctx.lr = 0x82CC7D8C;
	sub_82D29598(ctx, base);
loc_82CC7D8C:
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lwz r10,8536(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8536);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cc7dbc
	if (!cr6.eq) goto loc_82CC7DBC;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cc7dc0
	if (cr6.eq) goto loc_82CC7DC0;
loc_82CC7DBC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82CC7DC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc7e04
	if (!cr6.eq) goto loc_82CC7E04;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cc7df0
	if (!cr6.eq) goto loc_82CC7DF0;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc7df4
	if (cr6.eq) goto loc_82CC7DF4;
loc_82CC7DF0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82CC7DF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x82cc7e08
	if (cr6.eq) goto loc_82CC7E08;
loc_82CC7E04:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CC7E08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc8188
	if (!cr6.eq) goto loc_82CC8188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,124(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 124);
	// bl 0x82d2f098
	ctx.lr = 0x82CC7E20;
	sub_82D2F098(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,128(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// bl 0x82d2f098
	ctx.lr = 0x82CC7E30;
	sub_82D2F098(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82cc8188
	if (cr6.eq) goto loc_82CC8188;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc8188
	if (cr6.eq) goto loc_82CC8188;
	// lwz r11,100(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// addi r28,r24,100
	ctx.r28.s64 = ctx.r24.s64 + 100;
	// lwz r4,140(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC7E60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 100);
	// addi r26,r22,100
	ctx.r26.s64 = ctx.r22.s64 + 100;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,140(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CC7E80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cc8188
	if (cr6.eq) goto loc_82CC8188;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc8188
	if (cr6.eq) goto loc_82CC8188;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x82cc7f00
	if (!cr6.eq) goto loc_82CC7F00;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r21,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r21.u32);
	// beq cr6,0x82cc7ec4
	if (cr6.eq) goto loc_82CC7EC4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC7EC4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CC7ED8;
	sub_82D329F8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r10,324(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r21,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r21.u32);
	// beq cr6,0x82cc7ef8
	if (cr6.eq) goto loc_82CC7EF8;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC7EF8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// b 0x82cc7f54
	goto loc_82CC7F54;
loc_82CC7F00:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r21,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r21.u32);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cc7f1c
	if (cr6.eq) goto loc_82CC7F1C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC7F1C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CC7F30;
	sub_82D329F8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r10,324(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r21,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r21.u32);
	// beq cr6,0x82cc7f50
	if (cr6.eq) goto loc_82CC7F50;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC7F50:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CC7F54:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CC7F64;
	sub_82D329F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc8140
	if (cr6.eq) goto loc_82CC8140;
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lbz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lbz r9,23(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8312dc40
	ctx.lr = 0x82CC7F9C;
	sub_8312DC40(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cc8008
	if (cr6.eq) goto loc_82CC8008;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CC7FB4;
	sub_8312DB38(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC7FC0;
	sub_8311C3D8(ctx, base);
	// lbz r10,23(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lbz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// lbz r9,23(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// lbz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82CC8008:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r27,r10,-15412
	ctx.r27.s64 = ctx.r10.s64 + -15412;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC8028;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CC8044;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82cc8090
	if (cr6.eq) goto loc_82CC8090;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc8090
	if (cr6.eq) goto loc_82CC8090;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC8068;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC8078;
	sub_82D2AEC8(ctx, base);
	// clrldi r4,r30,48
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CC8084;
	sub_82D294D0(ctx, base);
	// clrldi r4,r29,48
	ctx.r4.u64 = ctx.r29.u64 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CC8090;
	sub_82D294D0(ctx, base);
loc_82CC8090:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r30,r9,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x8315bf10
	ctx.lr = 0x82CC80B4;
	sub_8315BF10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82cc80dc
	if (!cr6.eq) goto loc_82CC80DC;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc80e0
	if (cr6.eq) goto loc_82CC80E0;
loc_82CC80DC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82CC80E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc814c
	if (cr6.eq) goto loc_82CC814C;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cc8100
	if (!cr6.eq) goto loc_82CC8100;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// b 0x82cc8104
	goto loc_82CC8104;
loc_82CC8100:
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_82CC8104:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC811C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cc8180
	if (!cr6.eq) goto loc_82CC8180;
loc_82CC8124:
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_82CC8128:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC8140;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CC8140:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82CC814C:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cc815c
	if (!cr6.eq) goto loc_82CC815C;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x82cc8160
	goto loc_82CC8160;
loc_82CC815C:
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_82CC8160:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC8178;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cc8124
	if (!cr6.eq) goto loc_82CC8124;
loc_82CC8180:
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// b 0x82cc8128
	goto loc_82CC8128;
loc_82CC8188:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC8194"))) PPC_WEAK_FUNC(sub_82CC8194);
PPC_FUNC_IMPL(__imp__sub_82CC8194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC8198"))) PPC_WEAK_FUNC(sub_82CC8198);
PPC_FUNC_IMPL(__imp__sub_82CC8198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,-46
	ctx.r11.s64 = ctx.r4.s64 + -46;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32051
	ctx.r12.s64 = -2100494336;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-32320
	ctx.r12.s64 = ctx.r12.s64 + -32320;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82CC820C;
	case 1:
		goto loc_82CC81E8;
	case 2:
		goto loc_82CC81F0;
	case 3:
		goto loc_82CC820C;
	case 4:
		goto loc_82CC820C;
	case 5:
		goto loc_82CC81F8;
	case 6:
		goto loc_82CC8200;
	case 7:
		goto loc_82CC8208;
	case 8:
		goto loc_82CC820C;
	case 9:
		goto loc_82CC820C;
	default:
		return;
	}
	// lwz r22,-32244(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -32244);
	// lwz r22,-32280(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -32280);
	// lwz r22,-32272(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -32272);
	// lwz r22,-32244(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -32244);
	// lwz r22,-32244(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -32244);
	// lwz r22,-32264(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -32264);
	// lwz r22,-32256(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -32256);
	// lwz r22,-32248(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -32248);
	// lwz r22,-32244(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -32244);
	// lwz r22,-32244(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -32244);
loc_82CC81E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CC81F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82CC81F8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82CC8200:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82CC8208:
	// li r3,4
	ctx.r3.s64 = 4;
loc_82CC820C:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC8210"))) PPC_WEAK_FUNC(sub_82CC8210);
PPC_FUNC_IMPL(__imp__sub_82CC8210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82cc8198
	ctx.lr = 0x82CC822C;
	sub_82CC8198(ctx, base);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// lfd f1,-2240(r9)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r9.u32 + -2240);
	// bl 0x831d20a0
	ctx.lr = 0x82CC824C;
	sub_831D20A0(ctx, base);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f11,f12,f1
	ctx.f11.f64 = ctx.f12.f64 / ctx.f1.f64;
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC8274"))) PPC_WEAK_FUNC(sub_82CC8274);
PPC_FUNC_IMPL(__imp__sub_82CC8274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC8278"))) PPC_WEAK_FUNC(sub_82CC8278);
PPC_FUNC_IMPL(__imp__sub_82CC8278) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82cc8198
	ctx.lr = 0x82CC8298;
	sub_82CC8198(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// lfd f1,-2240(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -2240);
	// bl 0x831d20a0
	ctx.lr = 0x82CC82B8;
	sub_831D20A0(ctx, base);
	// fctidz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,104
	ctx.r9.s64 = ctx.r31.s64 + 104;
loc_82CC82D0:
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cc82e8
	if (cr6.eq) goto loc_82CC82E8;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x82cc82f8
	if (cr6.eq) goto loc_82CC82F8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CC82E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82cc82d0
	if (cr6.lt) goto loc_82CC82D0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CC82F8:
	// divwu r10,r11,r8
	ctx.r10.u32 = PPCDivide(ctx.r11.u32, ctx.r8.u32);
	// rlwinm r9,r8,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// twllei r8,0
	// mullw r8,r10,r8
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfc r6,r9,r7
	xer.ca = ctx.r7.u32 >= ctx.r9.u32;
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
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

__attribute__((alias("__imp__sub_82CC8330"))) PPC_WEAK_FUNC(sub_82CC8330);
PPC_FUNC_IMPL(__imp__sub_82CC8330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CC8338;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,-14744
	ctx.r29.s64 = ctx.r11.s64 + -14744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// rlwinm r30,r5,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r26,r28,r29
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82CC8360;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,18
	ctx.r4.s64 = 18;
	// add r5,r26,r30
	ctx.r5.u64 = ctx.r26.u64 + ctx.r30.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82CC8370;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc83c0
	if (cr6.eq) goto loc_82CC83C0;
	// clrldi r4,r27,32
	ctx.r4.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82CC8380;
	sub_82D294D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r31,r28,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82CC838C;
	sub_82D19A78(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82d2d510
	ctx.lr = 0x82CC83A0;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc83c0
	if (cr6.eq) goto loc_82CC83C0;
	// clrldi r4,r25,32
	ctx.r4.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82CC83B0;
	sub_82D294D0(ctx, base);
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// lwz r11,5440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5440);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5440, ctx.r11.u32);
loc_82CC83C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC83C8"))) PPC_WEAK_FUNC(sub_82CC83C8);
PPC_FUNC_IMPL(__imp__sub_82CC83C8) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15320
	ctx.r9.s64 = ctx.r11.s64 + -15320;
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
	// bl 0x82d25548
	ctx.lr = 0x82CC8400;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cc8418
	if (cr6.eq) goto loc_82CC8418;
	// bl 0x82416268
	ctx.lr = 0x82CC8414;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CC8418:
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

__attribute__((alias("__imp__sub_82CC8430"))) PPC_WEAK_FUNC(sub_82CC8430);
PPC_FUNC_IMPL(__imp__sub_82CC8430) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15032
	ctx.r9.s64 = ctx.r11.s64 + -15032;
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
	// bl 0x82d25548
	ctx.lr = 0x82CC8468;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cc8480
	if (cr6.eq) goto loc_82CC8480;
	// bl 0x82416268
	ctx.lr = 0x82CC847C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CC8480:
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

__attribute__((alias("__imp__sub_82CC8498"))) PPC_WEAK_FUNC(sub_82CC8498);
PPC_FUNC_IMPL(__imp__sub_82CC8498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CC84A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r5,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r5.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x831c6648
	ctx.lr = 0x82CC84D0;
	sub_831C6648(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc8648
	if (cr6.eq) goto loc_82CC8648;
	// lwz r11,140(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// lwz r10,144(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 144);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r24
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, xer);
	// bgt cr6,0x82cc84fc
	if (cr6.gt) goto loc_82CC84FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC84FC;
	sub_831CC188(ctx, base);
loc_82CC84FC:
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r29,-31776
	ctx.r29.s64 = -2082471936;
	// lwzx r26,r10,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8536(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8536);
	// rlwinm r28,r26,14,18,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 14) & 0x3FFF;
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cc8530
	if (!cr6.eq) goto loc_82CC8530;
	// xor r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc8534
	if (cr6.eq) goto loc_82CC8534;
loc_82CC8530:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC8534:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc8a90
	if (!cr6.eq) goto loc_82CC8A90;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc8648
	if (cr6.eq) goto loc_82CC8648;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_82CC855C:
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// bge cr6,0x82cc856c
	if (!cr6.lt) goto loc_82CC856C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82CC856C:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82CC857C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82cc857c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CC857C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 1;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cc85b0
	if (!cr6.eq) goto loc_82CC85B0;
	// xor r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc85b4
	if (cr6.eq) goto loc_82CC85B4;
loc_82CC85B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC85B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc85fc
	if (!cr6.eq) goto loc_82CC85FC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cc85e8
	if (!cr6.eq) goto loc_82CC85E8;
	// xor r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc85ec
	if (cr6.eq) goto loc_82CC85EC;
loc_82CC85E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC85EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82cc8600
	if (cr6.eq) goto loc_82CC8600;
loc_82CC85FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC8600:
	// rlwinm r10,r31,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cc8614
	if (cr6.eq) goto loc_82CC8614;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82CC8614:
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cc8624
	if (cr6.eq) goto loc_82CC8624;
	// rlwinm r31,r31,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
loc_82CC8624:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc8654
	if (cr6.eq) goto loc_82CC8654;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// blt cr6,0x82cc855c
	if (cr6.lt) goto loc_82CC855C;
loc_82CC8648:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82CC8654:
	// bl 0x831156e8
	ctx.lr = 0x82CC8658;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8312db38
	ctx.lr = 0x82CC866C;
	sub_8312DB38(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// bne cr6,0x82cc8688
	if (!cr6.eq) goto loc_82CC8688;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8312db38
	ctx.lr = 0x82CC8684;
	sub_8312DB38(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
loc_82CC8688:
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC8694;
	sub_8311C3D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// beq cr6,0x82cc892c
	if (cr6.eq) goto loc_82CC892C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc892c
	if (cr6.eq) goto loc_82CC892C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cc86dc
	if (!cr6.eq) goto loc_82CC86DC;
	// xor r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cc86e0
	if (cr6.eq) goto loc_82CC86E0;
loc_82CC86DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC86E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r7,r10
	ctx.r29.u64 = ctx.r7.u64 & ctx.r10.u64;
	// bl 0x8315bf10
	ctx.lr = 0x82CC86FC;
	sub_8315BF10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r28
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cc8720
	if (!cr6.eq) goto loc_82CC8720;
	// xor r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc8724
	if (cr6.eq) goto loc_82CC8724;
loc_82CC8720:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC8724:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc8734
	if (cr6.eq) goto loc_82CC8734;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CC8734:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc8920
	if (cr6.eq) goto loc_82CC8920;
	// lwz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8315bd00
	ctx.lr = 0x82CC8750;
	sub_8315BD00(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r28,r25,104
	ctx.r28.s64 = ctx.r25.s64 + 104;
	// beq cr6,0x82cc87c4
	if (cr6.eq) goto loc_82CC87C4;
loc_82CC8768:
	// lbzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cc8780
	if (cr6.eq) goto loc_82CC8780;
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// beq cr6,0x82cc8790
	if (cr6.eq) goto loc_82CC8790;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CC8780:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82cc8768
	if (cr6.lt) goto loc_82CC8768;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82CC8790:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc8210
	ctx.lr = 0x82CC87A0;
	sub_82CC8210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82cc8198
	ctx.lr = 0x82CC87B0;
	sub_82CC8198(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// b 0x82cc881c
	goto loc_82CC881C;
loc_82CC87C4:
	// lbzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cc87dc
	if (cr6.eq) goto loc_82CC87DC;
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// beq cr6,0x82cc87ec
	if (cr6.eq) goto loc_82CC87EC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CC87DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82cc87c4
	if (cr6.lt) goto loc_82CC87C4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82CC87EC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc8210
	ctx.lr = 0x82CC87FC;
	sub_82CC8210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82cc8198
	ctx.lr = 0x82CC880C;
	sub_82CC8198(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r6,r11,6
	ctx.r6.s64 = ctx.r11.s64 + 6;
loc_82CC881C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc7bf0
	ctx.lr = 0x82CC8828;
	sub_82CC7BF0(ctx, base);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lbz r9,23(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8312dc40
	ctx.lr = 0x82CC8850;
	sub_8312DC40(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cc88bc
	if (cr6.eq) goto loc_82CC88BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8312db38
	ctx.lr = 0x82CC8868;
	sub_8312DB38(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC8874;
	sub_8311C3D8(ctx, base);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lbz r8,23(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// lbz r9,23(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// lbz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82CC88BC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC88C4:
	// lbzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cc88dc
	if (cr6.eq) goto loc_82CC88DC;
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// beq cr6,0x82cc88ec
	if (cr6.eq) goto loc_82CC88EC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CC88DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82cc88c4
	if (cr6.lt) goto loc_82CC88C4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82CC88EC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc8210
	ctx.lr = 0x82CC88FC;
	sub_82CC8210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82cc8198
	ctx.lr = 0x82CC890C;
	sub_82CC8198(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r6,r30,16
	ctx.r6.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x82cc8330
	ctx.lr = 0x82CC8920;
	sub_82CC8330(ctx, base);
loc_82CC8920:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82CC892C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82cc8198
	ctx.lr = 0x82CC8938;
	sub_82CC8198(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r25,104
	ctx.r9.s64 = ctx.r25.s64 + 104;
loc_82CC8948:
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cc8960
	if (cr6.eq) goto loc_82CC8960;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// beq cr6,0x82cc8970
	if (cr6.eq) goto loc_82CC8970;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82CC8960:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x82cc8948
	if (cr6.lt) goto loc_82CC8948;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82CC8970:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// lfd f1,-2240(r9)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r9.u32 + -2240);
	// bl 0x831d20a0
	ctx.lr = 0x82CC8998;
	sub_831D20A0(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r11,8536(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8536);
	// rlwinm r8,r7,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// fdiv f11,f12,f1
	ctx.f11.f64 = ctx.f12.f64 / ctx.f1.f64;
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x82cc89dc
	if (!cr6.eq) goto loc_82CC89DC;
	// xor r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// clrlwi r6,r9,14
	ctx.r6.u64 = ctx.r9.u32 & 0x3FFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82cc89e0
	if (cr6.eq) goto loc_82CC89E0;
loc_82CC89DC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82CC89E0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cc8a24
	if (!cr6.eq) goto loc_82CC8A24;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r6,r9,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cc8a10
	if (!cr6.eq) goto loc_82CC8A10;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc8a14
	if (cr6.eq) goto loc_82CC8A14;
loc_82CC8A10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC8A14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82cc8a28
	if (cr6.eq) goto loc_82CC8A28;
loc_82CC8A24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC8A28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc8a4c
	if (cr6.eq) goto loc_82CC8A4C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc8278
	ctx.lr = 0x82CC8A44;
	sub_82CC8278(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x82cc8a80
	goto loc_82CC8A80;
loc_82CC8A4C:
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cc8a68
	if (!cr6.eq) goto loc_82CC8A68;
	// xor r11,r7,r26
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r26.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc8a6c
	if (cr6.eq) goto loc_82CC8A6C;
loc_82CC8A68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC8A6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cc8a80
	if (!cr6.eq) goto loc_82CC8A80;
	// li r6,2
	ctx.r6.s64 = 2;
loc_82CC8A80:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc7bf0
	ctx.lr = 0x82CC8A90;
	sub_82CC7BF0(ctx, base);
loc_82CC8A90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC8A9C"))) PPC_WEAK_FUNC(sub_82CC8A9C);
PPC_FUNC_IMPL(__imp__sub_82CC8A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC8AA0"))) PPC_WEAK_FUNC(sub_82CC8AA0);
PPC_FUNC_IMPL(__imp__sub_82CC8AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CC8AA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,140(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r9,r6,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r6.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82cc8b2c
	if (cr0.eq) goto loc_82CC8B2C;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,8536(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8536);
loc_82CC8AD8:
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// ble cr6,0x82cc8b88
	if (!cr6.gt) goto loc_82CC8B88;
	// lwzx r11,r9,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// xor r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// rlwinm r3,r4,0,0,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cc8b08
	if (!cr6.eq) goto loc_82CC8B08;
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc8b0c
	if (cr6.eq) goto loc_82CC8B0C;
loc_82CC8B08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CC8B0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addic r4,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// and r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 & ctx.r7.u64;
	// blt cr6,0x82cc8ad8
	if (cr6.lt) goto loc_82CC8AD8;
loc_82CC8B2C:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc8b80
	if (cr6.eq) goto loc_82CC8B80;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82cc8b80
	if (!cr6.gt) goto loc_82CC8B80;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r27,r11,-14724
	ctx.r27.s64 = ctx.r11.s64 + -14724;
loc_82CC8B50:
	// li r31,7
	ctx.r31.s64 = 7;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_82CC8B58:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cc8498
	ctx.lr = 0x82CC8B68;
	sub_82CC8498(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82cc8b58
	if (!cr0.eq) goto loc_82CC8B58;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82cc8b50
	if (cr6.lt) goto loc_82CC8B50;
loc_82CC8B80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CC8B88:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC8B94;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CC8B94"))) PPC_WEAK_FUNC(sub_82CC8B94);
PPC_FUNC_IMPL(__imp__sub_82CC8B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC8B98"))) PPC_WEAK_FUNC(sub_82CC8B98);
PPC_FUNC_IMPL(__imp__sub_82CC8B98) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-14696
	ctx.r9.s64 = ctx.r11.s64 + -14696;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,140(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc8be0
	if (cr6.eq) goto loc_82CC8BE0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC8BE0;
	sub_825952B8(ctx, base);
loc_82CC8BE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82CC8BF8;
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

__attribute__((alias("__imp__sub_82CC8C0C"))) PPC_WEAK_FUNC(sub_82CC8C0C);
PPC_FUNC_IMPL(__imp__sub_82CC8C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC8C10"))) PPC_WEAK_FUNC(sub_82CC8C10);
PPC_FUNC_IMPL(__imp__sub_82CC8C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CC8C18;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc8c44
	if (cr6.eq) goto loc_82CC8C44;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82cc8c44
	if (cr6.eq) goto loc_82CC8C44;
	// bl 0x82d26640
	ctx.lr = 0x82CC8C38;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82CC8C3C;
	sub_82D25AB8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CC8C44:
	// bl 0x831156e8
	ctx.lr = 0x82CC8C48;
	sub_831156E8(ctx, base);
	// lhz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 108);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c338
	ctx.lr = 0x82CC8C54;
	sub_8311C338(ctx, base);
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r26,2
	ctx.r26.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cc8c90
	if (!cr6.eq) goto loc_82CC8C90;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82cc8c8c
	if (cr6.eq) goto loc_82CC8C8C;
	// stb r28,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r28.u8);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
loc_82CC8C8C:
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
loc_82CC8C90:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83125548
	ctx.lr = 0x82CC8CA8;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc8cbc
	if (cr6.lt) goto loc_82CC8CBC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82CC8CBC:
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
loc_82CC8CD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc8cd0
	if (!cr6.eq) goto loc_82CC8CD0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CC8CF4;
	sub_8259CC28(ctx, base);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82cc8d44
	if (!cr6.eq) goto loc_82CC8D44;
	// stb r28,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r28.u8);
	// li r9,7
	ctx.r9.s64 = 7;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// stb r30,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r30.u8);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x8259cb28
	ctx.lr = 0x82CC8D44;
	sub_8259CB28(ctx, base);
loc_82CC8D44:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc8d60
	if (cr6.lt) goto loc_82CC8D60;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CC8D60;
	sub_825952B8(ctx, base);
loc_82CC8D60:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// blt cr6,0x82cc8d88
	if (cr6.lt) goto loc_82CC8D88;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CC8D88;
	sub_825952B8(ctx, base);
loc_82CC8D88:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// bl 0x82d26640
	ctx.lr = 0x82CC8D98;
	sub_82D26640(ctx, base);
	// bl 0x82d25a90
	ctx.lr = 0x82CC8D9C;
	sub_82D25A90(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC8DA4"))) PPC_WEAK_FUNC(sub_82CC8DA4);
PPC_FUNC_IMPL(__imp__sub_82CC8DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC8DA8"))) PPC_WEAK_FUNC(sub_82CC8DA8);
PPC_FUNC_IMPL(__imp__sub_82CC8DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82CC8DB0;
	__savegprlr_18(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC8DC4;
	sub_831156E8(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r20,48(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82CC8DE0;
	sub_8311C148(ctx, base);
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82CC8DFC;
	sub_8311C148(ctx, base);
	// lwz r7,100(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// addi r30,r11,8388
	ctx.r30.s64 = ctx.r11.s64 + 8388;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,-60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CC8E24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,100(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -56);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CC8E40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -52);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC8E5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -48);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CC8E78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82cc9540
	if (cr6.eq) goto loc_82CC9540;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82cc9540
	if (cr6.eq) goto loc_82CC9540;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82cc9540
	if (cr6.eq) goto loc_82CC9540;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc9540
	if (cr6.eq) goto loc_82CC9540;
	// addi r4,r24,4
	ctx.r4.s64 = ctx.r24.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CC8EA8;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CC8EBC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CC8EC4;
	sub_8387E8E0(ctx, base);
	// addi r4,r23,4
	ctx.r4.s64 = ctx.r23.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CC8ED0;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CC8EE4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CC8EEC;
	sub_8387E8E0(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,324(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r28,104(r27)
	PPC_STORE_U32(ctx.r27.u32 + 104, ctx.r28.u32);
	// beq cr6,0x82cc8f10
	if (cr6.eq) goto loc_82CC8F10;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC8F10:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CC8F24;
	sub_82D329F8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r10,324(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r28,104(r25)
	PPC_STORE_U32(ctx.r25.u32 + 104, ctx.r28.u32);
	// beq cr6,0x82cc8f44
	if (cr6.eq) goto loc_82CC8F44;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC8F44:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CC8F58;
	sub_82D329F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -112);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC8F70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc8f94
	if (cr6.eq) goto loc_82CC8F94;
	// lwz r11,788(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 788);
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,-255
	ctx.r11.s64 = ctx.r11.s64 + -255;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC8F94;
	sub_82D2AEC8(ctx, base);
loc_82CC8F94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC8FAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc8fd0
	if (cr6.eq) goto loc_82CC8FD0;
	// lwz r11,788(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 788);
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,-255
	ctx.r11.s64 = ctx.r11.s64 + -255;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC8FD0;
	sub_82D2AEC8(ctx, base);
loc_82CC8FD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -44);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC8FE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -40);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CC9004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -36);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CC9020;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CC903C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC9058;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CC9074;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82CC9090;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC90AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82cc9540
	if (cr6.eq) goto loc_82CC9540;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82cc9540
	if (cr6.eq) goto loc_82CC9540;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82cc9540
	if (cr6.eq) goto loc_82CC9540;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc9540
	if (cr6.eq) goto loc_82CC9540;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82cc9540
	if (cr6.eq) goto loc_82CC9540;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82cc9540
	if (cr6.eq) goto loc_82CC9540;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82cc9540
	if (cr6.eq) goto loc_82CC9540;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82cc9540
	if (cr6.eq) goto loc_82CC9540;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8312dc08
	ctx.lr = 0x82CC90F8;
	sub_8312DC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc9218
	if (cr6.eq) goto loc_82CC9218;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CC9110;
	sub_8312DB38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC911C;
	sub_8311C3D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// bl 0x83158540
	ctx.lr = 0x82CC9128;
	sub_83158540(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bgt cr6,0x82cc91a0
	if (cr6.gt) goto loc_82CC91A0;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82cc9174
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CC9174;
	// bdzf 4*cr6+eq,0x82cc91a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CC91A0;
	// bdzf 4*cr6+eq,0x82cc917c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CC917C;
	// bdzf 4*cr6+eq,0x82cc91a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CC91A0;
	// bne cr6,0x82cc9184
	if (!cr6.eq) goto loc_82CC9184;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC916C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82CC9174:
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// b 0x82cc9188
	goto loc_82CC9188;
loc_82CC917C:
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// b 0x82cc9188
	goto loc_82CC9188;
loc_82CC9184:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82CC9188:
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
	ctx.lr = 0x82CC91A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CC91A0:
	// lbz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CC91B0;
	sub_82D294D0(ctx, base);
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82cc91d0
	if (!cr6.eq) goto loc_82CC91D0;
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82cc91d8
	goto loc_82CC91D8;
loc_82CC91D0:
	// lbz r4,22(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82CC91D8:
	// bl 0x82d294d0
	ctx.lr = 0x82CC91DC;
	sub_82D294D0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lbz r30,23(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CC91EC;
	sub_82D294D0(ctx, base);
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82cc920c
	if (!cr6.eq) goto loc_82CC920C;
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82cc9214
	goto loc_82CC9214;
loc_82CC920C:
	// lbz r4,25(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82CC9214:
	// bl 0x82d294d0
	ctx.lr = 0x82CC9218;
	sub_82D294D0(ctx, base);
loc_82CC9218:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8312dc40
	ctx.lr = 0x82CC9220;
	sub_8312DC40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc9540
	if (cr6.eq) goto loc_82CC9540;
	// bl 0x831156e8
	ctx.lr = 0x82CC9230;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8312db38
	ctx.lr = 0x82CC9244;
	sub_8312DB38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC9250;
	sub_8311C3D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CC9260;
	sub_8312DB38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CC926C;
	sub_8311C3D8(ctx, base);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83158540
	ctx.lr = 0x82CC927C;
	sub_83158540(ctx, base);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83158540
	ctx.lr = 0x82CC928C;
	sub_83158540(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x82cc92c0
	if (!cr6.eq) goto loc_82CC92C0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,-15732
	ctx.r11.s64 = ctx.r9.s64 + -15732;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-196
	ctx.r4.s64 = ctx.r11.s64 + -196;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CC92B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82CC92C0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82cc9304
	if (!cr6.eq) goto loc_82CC9304;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,-15732
	ctx.r11.s64 = ctx.r9.s64 + -15732;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-184
	ctx.r4.s64 = ctx.r11.s64 + -184;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CC92EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82cc7a00
	ctx.lr = 0x82CC92FC;
	sub_82CC7A00(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82CC9304:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82cc934c
	if (!cr6.eq) goto loc_82CC934C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,-15732
	ctx.r11.s64 = ctx.r9.s64 + -15732;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-168
	ctx.r4.s64 = ctx.r11.s64 + -168;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CC9330;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82cc7ab8
	ctx.lr = 0x82CC9344;
	sub_82CC7AB8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82CC934C:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82cc93d8
	if (!cr6.eq) goto loc_82CC93D8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,-15732
	ctx.r28.s64 = ctx.r11.s64 + -15732;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r28,-148
	ctx.r4.s64 = ctx.r28.s64 + -148;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC9378;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82cc7ab8
	ctx.lr = 0x82CC938C;
	sub_82CC7AB8(ctx, base);
	// lwz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x83157f88
	ctx.lr = 0x82CC93A8;
	sub_83157F88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r4,r28,-128
	ctx.r4.s64 = ctx.r28.s64 + -128;
	// beq cr6,0x82cc93b8
	if (cr6.eq) goto loc_82CC93B8;
	// addi r4,r28,-112
	ctx.r4.s64 = ctx.r28.s64 + -112;
loc_82CC93B8:
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
	ctx.lr = 0x82CC93D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82CC93D8:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82cc9420
	if (!cr6.eq) goto loc_82CC9420;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,-15732
	ctx.r11.s64 = ctx.r9.s64 + -15732;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-96
	ctx.r4.s64 = ctx.r11.s64 + -96;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CC9404;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82cc7ab8
	ctx.lr = 0x82CC9418;
	sub_82CC7AB8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82CC9420:
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82cc94ac
	if (!cr6.eq) goto loc_82CC94AC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,-15732
	ctx.r28.s64 = ctx.r11.s64 + -15732;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r28,-80
	ctx.r4.s64 = ctx.r28.s64 + -80;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC944C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82cc7ab8
	ctx.lr = 0x82CC9460;
	sub_82CC7AB8(ctx, base);
	// lwz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x83157f88
	ctx.lr = 0x82CC947C;
	sub_83157F88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r4,r28,-64
	ctx.r4.s64 = ctx.r28.s64 + -64;
	// beq cr6,0x82cc948c
	if (cr6.eq) goto loc_82CC948C;
	// addi r4,r28,-48
	ctx.r4.s64 = ctx.r28.s64 + -48;
loc_82CC948C:
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
	ctx.lr = 0x82CC94A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82CC94AC:
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x82cc9540
	if (!cr6.eq) goto loc_82CC9540;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,-15732
	ctx.r28.s64 = ctx.r11.s64 + -15732;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC94D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82cc7ab8
	ctx.lr = 0x82CC94EC;
	sub_82CC7AB8(ctx, base);
	// lwz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x83157f88
	ctx.lr = 0x82CC9508;
	sub_83157F88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// beq cr6,0x82cc9518
	if (cr6.eq) goto loc_82CC9518;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82CC9518:
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
	ctx.lr = 0x82CC9530;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82cc7970
	ctx.lr = 0x82CC9540;
	sub_82CC7970(ctx, base);
loc_82CC9540:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC9548"))) PPC_WEAK_FUNC(sub_82CC9548);
PPC_FUNC_IMPL(__imp__sub_82CC9548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CC9550;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC9560;
	sub_831156E8(ctx, base);
	// lhz r4,102(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 102);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c338
	ctx.lr = 0x82CC956C;
	sub_8311C338(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83125548
	ctx.lr = 0x82CC9588;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc959c
	if (cr6.lt) goto loc_82CC959C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82CC959C:
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
loc_82CC95B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cc95b0
	if (!cr6.eq) goto loc_82CC95B0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CC95D4;
	sub_8259CC28(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cc95f4
	if (cr6.lt) goto loc_82CC95F4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CC95F4;
	sub_825952B8(ctx, base);
loc_82CC95F4:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bl 0x83125548
	ctx.lr = 0x82CC9614;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc9628
	if (cr6.lt) goto loc_82CC9628;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cc962c
	goto loc_82CC962C;
loc_82CC9628:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82CC962C:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,625
	ctx.r4.u64 = ctx.r4.u64 | 625;
	// bl 0x82d042a8
	ctx.lr = 0x82CC963C;
	sub_82D042A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc9658
	if (cr6.lt) goto loc_82CC9658;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CC9658;
	sub_825952B8(ctx, base);
loc_82CC9658:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC9664"))) PPC_WEAK_FUNC(sub_82CC9664);
PPC_FUNC_IMPL(__imp__sub_82CC9664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC9668"))) PPC_WEAK_FUNC(sub_82CC9668);
PPC_FUNC_IMPL(__imp__sub_82CC9668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CC9670;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82CC968C;
	sub_82D253F8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-14696
	ctx.r9.s64 = ctx.r11.s64 + -14696;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stb r30,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r30.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stb r28,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r28.u8);
	// bl 0x831156e8
	ctx.lr = 0x82CC96C8;
	sub_831156E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf00
	ctx.lr = 0x82CC96D4;
	sub_8311BF00(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// addi r10,r31,104
	ctx.r10.s64 = ctx.r31.s64 + 104;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CC96E8:
	// stbx r11,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bdnz 0x82cc96e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CC96E8;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc971c
	if (cr6.eq) goto loc_82CC971C;
	// lwz r11,540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// rlwinm r10,r11,23,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// ble cr6,0x82cc971c
	if (!cr6.gt) goto loc_82CC971C;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82CC971C:
	// lis r30,-31776
	ctx.r30.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r30,8404
	ctx.r29.s64 = ctx.r30.s64 + 8404;
	// lwz r4,-8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC9730;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC973C;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8404(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8404);
	// bl 0x82d23390
	ctx.lr = 0x82CC974C;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC9758"))) PPC_WEAK_FUNC(sub_82CC9758);
PPC_FUNC_IMPL(__imp__sub_82CC9758) {
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
	// bl 0x82cc8b98
	ctx.lr = 0x82CC9778;
	sub_82CC8B98(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc9790
	if (cr6.eq) goto loc_82CC9790;
	// bl 0x82416268
	ctx.lr = 0x82CC978C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CC9790:
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

__attribute__((alias("__imp__sub_82CC97A8"))) PPC_WEAK_FUNC(sub_82CC97A8);
PPC_FUNC_IMPL(__imp__sub_82CC97A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CC97B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15456
	ctx.r10.s64 = ctx.r10.s64 + -15456;
loc_82CC97CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82cc97f0
	if (cr6.eq) goto loc_82CC97F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82cc97cc
	if (cr6.eq) goto loc_82CC97CC;
loc_82CC97F0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// bne cr6,0x82cc9834
	if (!cr6.eq) goto loc_82CC9834;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CC9810;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc9864
	if (cr6.eq) goto loc_82CC9864;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cc9668
	ctx.lr = 0x82CC982C;
	sub_82CC9668(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CC9834:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82CC9840;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc9864
	if (cr6.eq) goto loc_82CC9864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cc9668
	ctx.lr = 0x82CC985C;
	sub_82CC9668(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CC9864:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC9870"))) PPC_WEAK_FUNC(sub_82CC9870);
PPC_FUNC_IMPL(__imp__sub_82CC9870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CC9878;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc9920
	if (cr6.eq) goto loc_82CC9920;
	// li r10,47
	ctx.r10.s64 = 47;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// bl 0x831c6648
	ctx.lr = 0x82CC98A8;
	sub_831C6648(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc9920
	if (cr6.eq) goto loc_82CC9920;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc9920
	if (cr6.eq) goto loc_82CC9920;
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82CC98D0:
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bge cr6,0x82cc98e0
	if (!cr6.lt) goto loc_82CC98E0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82CC98E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x82CC98F4;
	sub_835977D8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x835977d8
	ctx.lr = 0x82CC9908;
	sub_835977D8(ctx, base);
	// lwz r9,516(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 516);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r8,r9,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82cc98d0
	if (cr6.lt) goto loc_82CC98D0;
loc_82CC9920:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC9928"))) PPC_WEAK_FUNC(sub_82CC9928);
PPC_FUNC_IMPL(__imp__sub_82CC9928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82CC9930;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC993C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r24,r11,8272
	ctx.r24.s64 = ctx.r11.s64 + 8272;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,140(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC995C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc9b48
	if (cr6.eq) goto loc_82CC9B48;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r26,r31,140
	ctx.r26.s64 = ctx.r31.s64 + 140;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82cc9b48
	if (cr0.eq) goto loc_82CC9B48;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lis r22,-31776
	ctx.r22.s64 = -2082471936;
loc_82CC9990:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CC999C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc9b28
	if (cr6.eq) goto loc_82CC9B28;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// lwz r4,172(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC99C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,168(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 168);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CC99DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cc9b28
	if (cr6.eq) goto loc_82CC9B28;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc9b28
	if (cr6.eq) goto loc_82CC9B28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC9A08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc9b28
	if (cr6.eq) goto loc_82CC9B28;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r25
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, xer);
	// ble cr6,0x82cc9b50
	if (!cr6.gt) goto loc_82CC9B50;
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r10,8536(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8536);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82cc9a58
	if (!cr6.eq) goto loc_82CC9A58;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cc9a5c
	if (cr6.eq) goto loc_82CC9A5C;
loc_82CC9A58:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82CC9A5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc9a80
	if (cr6.eq) goto loc_82CC9A80;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC9A78;
	sub_82D2AEC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cc9b1c
	goto loc_82CC9B1C;
loc_82CC9A80:
	// bl 0x831156e8
	ctx.lr = 0x82CC9A84;
	sub_831156E8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r25
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, xer);
	// ble cr6,0x82cc9b5c
	if (!cr6.gt) goto loc_82CC9B5C;
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x8311c148
	ctx.lr = 0x82CC9AA8;
	sub_8311C148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82CC9AB8;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CC9ACC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CC9AD4;
	sub_8387E8E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r23,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r23.u32);
	// beq cr6,0x82cc9af4
	if (cr6.eq) goto loc_82CC9AF4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CC9AF4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CC9B08;
	sub_82D329F8(ctx, base);
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,-255
	ctx.r11.s64 = ctx.r11.s64 + -255;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82CC9B1C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC9B28;
	sub_82D2AEC8(ctx, base);
loc_82CC9B28:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r25,r8
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r8.u32, xer);
	// blt cr6,0x82cc9990
	if (cr6.lt) goto loc_82CC9990;
loc_82CC9B48:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82CC9B50:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC9B5C;
	sub_831CC188(ctx, base);
loc_82CC9B5C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CC9B68;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CC9B68"))) PPC_WEAK_FUNC(sub_82CC9B68);
PPC_FUNC_IMPL(__imp__sub_82CC9B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CC9B70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// addi r31,r11,5444
	ctx.r31.s64 = ctx.r11.s64 + 5444;
	// addi r30,r9,8288
	ctx.r30.s64 = ctx.r9.s64 + 8288;
	// lwz r11,5500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5500);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cc9bc8
	if (!cr6.eq) goto loc_82CC9BC8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lwz r4,140(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,5500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5500, ctx.r11.u32);
	// bl 0x82475d40
	ctx.lr = 0x82CC9BB0;
	sub_82475D40(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// bl 0x82475d40
	ctx.lr = 0x82CC9BBC;
	sub_82475D40(ctx, base);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-2608
	ctx.r3.s64 = ctx.r11.s64 + -2608;
	// bl 0x831cdcc8
	ctx.lr = 0x82CC9BC8;
	sub_831CDCC8(ctx, base);
loc_82CC9BC8:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82CC9BD0:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc9be4
	if (cr6.lt) goto loc_82CC9BE4;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82cc9be8
	goto loc_82CC9BE8;
loc_82CC9BE4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82CC9BE8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82CC9BF0;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc9c54
	if (cr6.eq) goto loc_82CC9C54;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC9C14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc9c28
	if (cr6.eq) goto loc_82CC9C28;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC9C28;
	sub_82D2AEC8(ctx, base);
loc_82CC9C28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC9C40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc9c54
	if (cr6.eq) goto loc_82CC9C54;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CC9C54;
	sub_82D2AEC8(ctx, base);
loc_82CC9C54:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x82cc9bd0
	if (!cr0.eq) goto loc_82CC9BD0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC9C68"))) PPC_WEAK_FUNC(sub_82CC9C68);
PPC_FUNC_IMPL(__imp__sub_82CC9C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CC9C70;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// bl 0x8308e078
	ctx.lr = 0x82CC9C88;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82CC9CA0;
	sub_82D253F8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-15320
	ctx.r9.s64 = ctx.r11.s64 + -15320;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r27,r7,8252
	ctx.r27.s64 = ctx.r7.s64 + 8252;
	// sth r30,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r30.u16);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// lwz r4,8252(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8252);
	// bl 0x82d20ae0
	ctx.lr = 0x82CC9CE8;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82CC9CF8;
	sub_82D23390(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82CC9CFC;
	sub_831156E8(ctx, base);
	// lis r6,220
	ctx.r6.s64 = 14417920;
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r11,r6,40316
	ctx.r11.u64 = ctx.r6.u64 | 40316;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x83197d10
	ctx.lr = 0x82CC9D2C;
	sub_83197D10(ctx, base);
	// lis r9,194
	ctx.r9.s64 = 12713984;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r8,r9,52144
	ctx.r8.u64 = ctx.r9.u64 | 52144;
	// lhzx r4,r27,r8
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r8.u32);
	// bl 0x831578f0
	ctx.lr = 0x82CC9D40;
	sub_831578F0(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r3.u16);
	// cmplwi cr6,r7,65535
	cr6.compare<uint32_t>(ctx.r7.u32, 65535, xer);
	// bne cr6,0x82cc9d64
	if (!cr6.eq) goto loc_82CC9D64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316ef18
	ctx.lr = 0x82CC9D60;
	sub_8316EF18(ctx, base);
	// sth r3,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r3.u16);
loc_82CC9D64:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cc97a8
	ctx.lr = 0x82CC9D74;
	sub_82CC97A8(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lhz r28,108(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 108);
	// bl 0x82595718
	ctx.lr = 0x82CC9D94;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc9db4
	if (cr6.eq) goto loc_82CC9DB4;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,-16288
	ctx.r4.s64 = ctx.r11.s64 + -16288;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82cc78e0
	ctx.lr = 0x82CC9DB0;
	sub_82CC78E0(ctx, base);
	// b 0x82cc9db8
	goto loc_82CC9DB8;
loc_82CC9DB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CC9DB8:
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d23788
	ctx.lr = 0x82CC9DC8;
	sub_82D23788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82d23788
	ctx.lr = 0x82CC9DD4;
	sub_82D23788(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a673c0
	ctx.lr = 0x82CC9DDC;
	sub_82A673C0(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cc9df8
	if (cr6.eq) goto loc_82CC9DF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC9DF8;
	sub_825952B8(ctx, base);
loc_82CC9DF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC9E04"))) PPC_WEAK_FUNC(sub_82CC9E04);
PPC_FUNC_IMPL(__imp__sub_82CC9E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC9E08"))) PPC_WEAK_FUNC(sub_82CC9E08);
PPC_FUNC_IMPL(__imp__sub_82CC9E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CC9E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CC9E1C;
	sub_831156E8(ctx, base);
	// lhz r4,102(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 102);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c338
	ctx.lr = 0x82CC9E28;
	sub_8311C338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC9E34;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8260(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8260);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CC9E50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc9ed8
	if (cr6.eq) goto loc_82CC9ED8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82cc9548
	ctx.lr = 0x82CC9E68;
	sub_82CC9548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30008
	ctx.lr = 0x82CC9E74;
	sub_82D30008(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cc9e94
	if (cr6.lt) goto loc_82CC9E94;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CC9E94;
	sub_825952B8(ctx, base);
loc_82CC9E94:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82d2fe58
	ctx.lr = 0x82CC9EB0;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cc9ed8
	if (cr6.eq) goto loc_82CC9ED8;
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// rlwinm r10,r11,0,16,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE00;
	// cmplwi cr6,r10,16384
	cr6.compare<uint32_t>(ctx.r10.u32, 16384, xer);
	// bge cr6,0x82cc9ed4
	if (!cr6.lt) goto loc_82CC9ED4;
	// li r5,2
	ctx.r5.s64 = 2;
loc_82CC9ED4:
	// bl 0x82d3d968
	ctx.lr = 0x82CC9ED8;
	sub_82D3D968(ctx, base);
loc_82CC9ED8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,100(r30)
	PPC_STORE_U8(ctx.r30.u32 + 100, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC9EEC"))) PPC_WEAK_FUNC(sub_82CC9EEC);
PPC_FUNC_IMPL(__imp__sub_82CC9EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CC9EF0"))) PPC_WEAK_FUNC(sub_82CC9EF0);
PPC_FUNC_IMPL(__imp__sub_82CC9EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82CC9EF8;
	__savegprlr_17(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82cca1d0
	if (!cr6.lt) goto loc_82CCA1D0;
	// bl 0x831156e8
	ctx.lr = 0x82CC9F10;
	sub_831156E8(ctx, base);
	// li r11,46
	ctx.r11.s64 = 46;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r21,102
	ctx.r3.s64 = ctx.r21.s64 + 102;
	// bl 0x831c64a0
	ctx.lr = 0x82CC9F24;
	sub_831C64A0(ctx, base);
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// li r23,0
	ctx.r23.s64 = 0;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bge cr6,0x82cc9f48
	if (!cr6.lt) goto loc_82CC9F48;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// b 0x82cc9f84
	goto loc_82CC9F84;
loc_82CC9F48:
	// rlwinm r20,r11,25,7,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// bne cr6,0x82cc9f68
	if (!cr6.eq) goto loc_82CC9F68;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc9f84
	if (cr6.eq) goto loc_82CC9F84;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// b 0x82cc9f84
	goto loc_82CC9F84;
loc_82CC9F68:
	// cmpwi cr6,r17,1
	cr6.compare<int32_t>(ctx.r17.s32, 1, xer);
	// bne cr6,0x82cc9f84
	if (!cr6.eq) goto loc_82CC9F84;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cc9f84
	if (cr6.eq) goto loc_82CC9F84;
	// addi r31,r20,1
	ctx.r31.s64 = ctx.r20.s64 + 1;
loc_82CC9F84:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r26,r11,8260
	ctx.r26.s64 = ctx.r11.s64 + 8260;
	// lwz r4,132(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 132);
	// bl 0x837b0c10
	ctx.lr = 0x82CC9F98;
	sub_837B0C10(ctx, base);
	// addi r11,r20,48
	ctx.r11.s64 = ctx.r20.s64 + 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82b142a0
	ctx.lr = 0x82CC9FA8;
	sub_82B142A0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC9FB0;
	sub_82D19A78(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cc9fc4
	if (!cr6.lt) goto loc_82CC9FC4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CC9FC4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CC9FD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CC9FE0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,60(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CC9FF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r24,15
	ctx.r24.s64 = 15;
	// li r18,2
	ctx.r18.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cca130
	if (cr6.eq) goto loc_82CCA130;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82CCA014;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cca130
	if (cr6.eq) goto loc_82CCA130;
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r25,r28,100
	ctx.r25.s64 = ctx.r28.s64 + 100;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// addi r22,r31,-48
	ctx.r22.s64 = ctx.r31.s64 + -48;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
loc_82CCA030:
	// addi r31,r30,48
	ctx.r31.s64 = ctx.r30.s64 + 48;
	// addi r29,r19,4
	ctx.r29.s64 = ctx.r19.s64 + 4;
	// add r11,r22,r31
	ctx.r11.u64 = ctx.r22.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cca048
	if (!cr6.lt) goto loc_82CCA048;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82CCA048:
	// lwz r4,64(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
loc_82CCA05C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cca05c
	if (!cr6.eq) goto loc_82CCA05C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CCA080;
	sub_8259CC28(ctx, base);
	// extsb r4,r31
	ctx.r4.s64 = ctx.r31.s8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b142a0
	ctx.lr = 0x82CCA08C;
	sub_82B142A0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cca0a0
	if (!cr6.lt) goto loc_82CCA0A0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CCA0A0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCA0B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cca0f0
	if (cr6.eq) goto loc_82CCA0F0;
	// cmplw cr6,r30,r20
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, xer);
	// bge cr6,0x82cca0e0
	if (!cr6.lt) goto loc_82CCA0E0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82cc8da8
	ctx.lr = 0x82CCA0D8;
	sub_82CC8DA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82cca0e4
	goto loc_82CCA0E4;
loc_82CCA0E0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82CCA0E4:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCA0F0;
	sub_82D2AEC8(ctx, base);
loc_82CCA0F0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cca10c
	if (cr6.lt) goto loc_82CCA10C;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CCA10C;
	sub_825952B8(ctx, base);
loc_82CCA10C:
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// bl 0x82d33c10
	ctx.lr = 0x82CCA128;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x82cca030
	if (cr6.lt) goto loc_82CCA030;
loc_82CCA130:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CCA138;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCA150;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cca1b4
	if (cr6.eq) goto loc_82CCA1B4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82cc9548
	ctx.lr = 0x82CCA168;
	sub_82CC9548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30008
	ctx.lr = 0x82CCA174;
	sub_82D30008(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cca190
	if (cr6.lt) goto loc_82CCA190;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82CCA190;
	sub_825952B8(ctx, base);
loc_82CCA190:
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// stb r23,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r23.u8);
	// bl 0x82d2fe58
	ctx.lr = 0x82CCA1A4;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cca1b4
	if (cr6.eq) goto loc_82CCA1B4;
	// addi r4,r17,1
	ctx.r4.s64 = ctx.r17.s64 + 1;
	// bl 0x82d3d7f8
	ctx.lr = 0x82CCA1B4;
	sub_82D3D7F8(ctx, base);
loc_82CCA1B4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cca1d0
	if (cr6.lt) goto loc_82CCA1D0;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CCA1D0;
	sub_825952B8(ctx, base);
loc_82CCA1D0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCA1D8"))) PPC_WEAK_FUNC(sub_82CCA1D8);
PPC_FUNC_IMPL(__imp__sub_82CCA1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82CCA1E0;
	__savegprlr_16(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// bl 0x831156e8
	ctx.lr = 0x82CCA1F0;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r16,1
	ctx.r16.s64 = 1;
	// lbz r11,156(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 156);
	// li r28,2
	ctx.r28.s64 = 2;
	// addis r27,r30,221
	ctx.r27.s64 = ctx.r30.s64 + 14483456;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r27,r27,-26512
	ctx.r27.s64 = ctx.r27.s64 + -26512;
	// bne cr6,0x82cca240
	if (!cr6.eq) goto loc_82CCA240;
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82cca240
	if (!cr6.eq) goto loc_82CCA240;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x82cca23c
	if (cr6.eq) goto loc_82CCA23C;
	// stb r16,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r16.u8);
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
loc_82CCA23C:
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_82CCA240:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CCA248;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r22,r11,8304
	ctx.r22.s64 = ctx.r11.s64 + 8304;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,104(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 104);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCA268;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r19,r11,-15412
	ctx.r19.s64 = ctx.r11.s64 + -15412;
	// beq cr6,0x82cca374
	if (cr6.eq) goto loc_82CCA374;
	// addi r4,r19,-1370
	ctx.r4.s64 = ctx.r19.s64 + -1370;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CCA288;
	sub_837B0C10(ctx, base);
	// lwz r11,96(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8311c338
	ctx.lr = 0x82CCA298;
	sub_8311C338(ctx, base);
	// stb r21,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r21.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83125548
	ctx.lr = 0x82CCA2B0;
	sub_83125548(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cca2c4
	if (cr6.lt) goto loc_82CCA2C4;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cca2c8
	goto loc_82CCA2C8;
loc_82CCA2C4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82CCA2C8:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,626
	ctx.r4.u64 = ctx.r4.u64 | 626;
	// bl 0x82d042a8
	ctx.lr = 0x82CCA2D8;
	sub_82D042A8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cca2f4
	if (cr6.lt) goto loc_82CCA2F4;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82CCA2F4;
	sub_825952B8(ctx, base);
loc_82CCA2F4:
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r21,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r21.u32);
	// stb r21,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r21.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2fde0
	ctx.lr = 0x82CCA314;
	sub_82D2FDE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2fe58
	ctx.lr = 0x82CCA31C;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cca34c
	if (cr6.eq) goto loc_82CCA34C;
	// lwz r11,540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// rlwinm r10,r11,0,16,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE00;
	// cmplwi cr6,r10,16384
	cr6.compare<uint32_t>(ctx.r10.u32, 16384, xer);
	// ble cr6,0x82cca340
	if (!cr6.gt) goto loc_82CCA340;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82cca348
	goto loc_82CCA348;
loc_82CCA340:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
loc_82CCA348:
	// bl 0x82d3d968
	ctx.lr = 0x82CCA34C;
	sub_82D3D968(ctx, base);
loc_82CCA34C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cca368
	if (cr6.lt) goto loc_82CCA368;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CCA368;
	sub_825952B8(ctx, base);
loc_82CCA368:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// stb r21,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r21.u8);
loc_82CCA374:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CCA37C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,132(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCA394;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cca3d0
	if (cr6.eq) goto loc_82CCA3D0;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r31,1292(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1292);
	// lwz r11,8484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8484);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82cca3d0
	if (cr6.eq) goto loc_82CCA3D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82CCA3BC;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82CCA3D0;
	sub_82D32C58(ctx, base);
loc_82CCA3D0:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CCA3D8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,116(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 116);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCA3F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CCA3FC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,120(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 120);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCA414;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x82cca998
	if (cr6.eq) goto loc_82CCA998;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cca998
	if (cr6.eq) goto loc_82CCA998;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82cc9b68
	ctx.lr = 0x82CCA434;
	sub_82CC9B68(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82cc9b68
	ctx.lr = 0x82CCA440;
	sub_82CC9B68(ctx, base);
	// lwz r10,96(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// li r11,53
	ctx.r11.s64 = 53;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// bl 0x831c6648
	ctx.lr = 0x82CCA460;
	sub_831C6648(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cca934
	if (cr6.eq) goto loc_82CCA934;
	// addi r25,r3,4
	ctx.r25.s64 = ctx.r3.s64 + 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CCA478;
	sub_8312DB38(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r31,65535
	cr6.compare<uint32_t>(ctx.r31.u32, 65535, xer);
	// bne cr6,0x82cca494
	if (!cr6.eq) goto loc_82CCA494;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CCA490;
	sub_8312DB38(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
loc_82CCA494:
	// bl 0x831156e8
	ctx.lr = 0x82CCA498;
	sub_831156E8(ctx, base);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CCA4A8;
	sub_8311C3D8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,53
	cr6.compare<int32_t>(ctx.r11.s32, 53, xer);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bne cr6,0x82cca4c8
	if (!cr6.eq) goto loc_82CCA4C8;
	// bl 0x82d19a78
	ctx.lr = 0x82CCA4C0;
	sub_82D19A78(ctx, base);
	// lwz r4,116(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 116);
	// b 0x82cca4d0
	goto loc_82CCA4D0;
loc_82CCA4C8:
	// bl 0x82d19a78
	ctx.lr = 0x82CCA4CC;
	sub_82D19A78(ctx, base);
	// lwz r4,120(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 120);
loc_82CCA4D0:
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCA4E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cca934
	if (cr6.eq) goto loc_82CCA934;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,148(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 148);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCA508;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cca53c
	if (cr6.eq) goto loc_82CCA53C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,53
	cr6.compare<int32_t>(ctx.r11.s32, 53, xer);
	// bne cr6,0x82cca528
	if (!cr6.eq) goto loc_82CCA528;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,29
	ctx.r4.u64 = ctx.r4.u64 | 29;
	// b 0x82cca538
	goto loc_82CCA538;
loc_82CCA528:
	// cmpwi cr6,r11,54
	cr6.compare<int32_t>(ctx.r11.s32, 54, xer);
	// bne cr6,0x82cca53c
	if (!cr6.eq) goto loc_82CCA53C;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
loc_82CCA538:
	// bl 0x82d29598
	ctx.lr = 0x82CCA53C;
	sub_82D29598(ctx, base);
loc_82CCA53C:
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lwz r10,8536(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8536);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cca56c
	if (!cr6.eq) goto loc_82CCA56C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cca570
	if (cr6.eq) goto loc_82CCA570;
loc_82CCA56C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82CCA570:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cca5b4
	if (!cr6.eq) goto loc_82CCA5B4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cca5a0
	if (!cr6.eq) goto loc_82CCA5A0;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cca5a4
	if (cr6.eq) goto loc_82CCA5A4;
loc_82CCA5A0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82CCA5A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x82cca5b8
	if (cr6.eq) goto loc_82CCA5B8;
loc_82CCA5B4:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82CCA5B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cca934
	if (!cr6.eq) goto loc_82CCA934;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,124(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 124);
	// bl 0x82d2f098
	ctx.lr = 0x82CCA5D0;
	sub_82D2F098(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,128(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 128);
	// bl 0x82d2f098
	ctx.lr = 0x82CCA5E0;
	sub_82D2F098(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82cca934
	if (cr6.eq) goto loc_82CCA934;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cca934
	if (cr6.eq) goto loc_82CCA934;
	// lwz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// addi r28,r26,100
	ctx.r28.s64 = ctx.r26.s64 + 100;
	// lwz r4,140(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 140);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCA610;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// addi r27,r23,100
	ctx.r27.s64 = ctx.r23.s64 + 100;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,140(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 140);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCA630;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cca934
	if (cr6.eq) goto loc_82CCA934;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cca934
	if (cr6.eq) goto loc_82CCA934;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x82cca6b0
	if (!cr6.eq) goto loc_82CCA6B0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r21,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r21.u32);
	// beq cr6,0x82cca674
	if (cr6.eq) goto loc_82CCA674;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
loc_82CCA674:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CCA688;
	sub_82D329F8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,324(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r21,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r21.u32);
	// beq cr6,0x82cca6a8
	if (cr6.eq) goto loc_82CCA6A8;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
loc_82CCA6A8:
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// b 0x82cca704
	goto loc_82CCA704;
loc_82CCA6B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r21,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r21.u32);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cca6cc
	if (cr6.eq) goto loc_82CCA6CC;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
loc_82CCA6CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CCA6E0;
	sub_82D329F8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r10,324(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r21,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r21.u32);
	// beq cr6,0x82cca700
	if (cr6.eq) goto loc_82CCA700;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
loc_82CCA700:
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
loc_82CCA704:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CCA714;
	sub_82D329F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cca72c
	if (!cr6.eq) goto loc_82CCA72C;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// b 0x82cca938
	goto loc_82CCA938;
loc_82CCA72C:
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lbz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lbz r9,23(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8312dc40
	ctx.lr = 0x82CCA754;
	sub_8312DC40(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cca7c0
	if (cr6.eq) goto loc_82CCA7C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CCA76C;
	sub_8312DB38(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CCA778;
	sub_8311C3D8(ctx, base);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// lbz r8,21(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r9,23(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// add r30,r9,r7
	ctx.r30.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82CCA7C0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r19,-8
	ctx.r4.s64 = ctx.r19.s64 + -8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCA7D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCA7F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82cca840
	if (cr6.eq) goto loc_82CCA840;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cca840
	if (cr6.eq) goto loc_82CCA840;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCA818;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCA828;
	sub_82D2AEC8(ctx, base);
	// clrldi r4,r30,48
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CCA834;
	sub_82D294D0(ctx, base);
	// clrldi r4,r29,48
	ctx.r4.u64 = ctx.r29.u64 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CCA840;
	sub_82D294D0(ctx, base);
loc_82CCA840:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r30,r9,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x8315bf10
	ctx.lr = 0x82CCA864;
	sub_8315BF10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82cca88c
	if (!cr6.eq) goto loc_82CCA88C;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cca890
	if (cr6.eq) goto loc_82CCA890;
loc_82CCA88C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82CCA890:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cca8f8
	if (cr6.eq) goto loc_82CCA8F8;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cca8b0
	if (!cr6.eq) goto loc_82CCA8B0;
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// b 0x82cca8b4
	goto loc_82CCA8B4;
loc_82CCA8B0:
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
loc_82CCA8B4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCA8CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cca92c
	if (!cr6.eq) goto loc_82CCA92C;
loc_82CCA8D4:
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
loc_82CCA8D8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCA8F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// b 0x82cca938
	goto loc_82CCA938;
loc_82CCA8F8:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cca908
	if (!cr6.eq) goto loc_82CCA908;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// b 0x82cca90c
	goto loc_82CCA90C;
loc_82CCA908:
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
loc_82CCA90C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCA924;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82cca8d4
	if (!cr6.eq) goto loc_82CCA8D4;
loc_82CCA92C:
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// b 0x82cca8d8
	goto loc_82CCA8D8;
loc_82CCA934:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82CCA938:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cca954
	if (cr6.eq) goto loc_82CCA954;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCA954;
	sub_82D2AEC8(ctx, base);
loc_82CCA954:
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82cc7c60
	ctx.lr = 0x82CCA960;
	sub_82CC7C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cca974
	if (cr6.eq) goto loc_82CCA974;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82cca98c
	goto loc_82CCA98C;
loc_82CCA974:
	// lwz r11,96(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// lwz r10,536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// rlwinm r9,r10,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cca998
	if (!cr6.eq) goto loc_82CCA998;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82CCA98C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCA998;
	sub_82D2AEC8(ctx, base);
loc_82CCA998:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CCA9A0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,112(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCA9B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cca9ec
	if (cr6.eq) goto loc_82CCA9EC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCA9CC;
	sub_82D2AEC8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CCA9D4;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCA9EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CCA9EC:
	// addi r4,r20,140
	ctx.r4.s64 = ctx.r20.s64 + 140;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82cc9870
	ctx.lr = 0x82CCA9F8;
	sub_82CC9870(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82cc9928
	ctx.lr = 0x82CCAA00;
	sub_82CC9928(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82cc8aa0
	ctx.lr = 0x82CCAA08;
	sub_82CC8AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r16,136(r20)
	PPC_STORE_U8(ctx.r20.u32 + 136, ctx.r16.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCAA18"))) PPC_WEAK_FUNC(sub_82CCAA18);
PPC_FUNC_IMPL(__imp__sub_82CCAA18) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-16312
	ctx.r10.s64 = ctx.r10.s64 + -16312;
loc_82CCAA40:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82ccaa64
	if (cr6.eq) goto loc_82CCAA64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ccaa40
	if (cr6.eq) goto loc_82CCAA40;
loc_82CCAA64:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// bne cr6,0x82ccaaa0
	if (!cr6.eq) goto loc_82CCAAA0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CCAA84;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccaac8
	if (cr6.eq) goto loc_82CCAAC8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cc9c68
	ctx.lr = 0x82CCAA9C;
	sub_82CC9C68(ctx, base);
	// b 0x82ccaacc
	goto loc_82CCAACC;
loc_82CCAAA0:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82CCAAAC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccaac8
	if (cr6.eq) goto loc_82CCAAC8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cc9c68
	ctx.lr = 0x82CCAAC4;
	sub_82CC9C68(ctx, base);
	// b 0x82ccaacc
	goto loc_82CCAACC;
loc_82CCAAC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CCAACC:
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

__attribute__((alias("__imp__sub_82CCAAE4"))) PPC_WEAK_FUNC(sub_82CCAAE4);
PPC_FUNC_IMPL(__imp__sub_82CCAAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCAAE8"))) PPC_WEAK_FUNC(sub_82CCAAE8);
PPC_FUNC_IMPL(__imp__sub_82CCAAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CCAAF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccab74
	if (cr6.eq) goto loc_82CCAB74;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82ccab74
	if (cr6.eq) goto loc_82CCAB74;
	// bl 0x82d26640
	ctx.lr = 0x82CCAB10;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82CCAB14;
	sub_82D25AB8(ctx, base);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x82d19a78
	ctx.lr = 0x82CCAB1C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82CCAB2C;
	sub_82D2B608(ctx, base);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x82d19a78
	ctx.lr = 0x82CCAB34;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCAB40;
	sub_82D2AEC8(ctx, base);
	// lwz r3,112(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// bl 0x82d19a78
	ctx.lr = 0x82CCAB48;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82CCAB58;
	sub_82D2B608(ctx, base);
	// lwz r3,112(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// bl 0x82d19a78
	ctx.lr = 0x82CCAB60;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCAB6C;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82CCAB74:
	// bl 0x831156e8
	ctx.lr = 0x82CCAB78;
	sub_831156E8(ctx, base);
	// lhz r4,108(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 108);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c338
	ctx.lr = 0x82CCAB84;
	sub_8311C338(ctx, base);
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r25,2
	ctx.r25.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ccabc0
	if (!cr6.eq) goto loc_82CCABC0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82ccabbc
	if (cr6.eq) goto loc_82CCABBC;
	// stb r26,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r26.u8);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
loc_82CCABBC:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82CCABC0:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83125548
	ctx.lr = 0x82CCABD8;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccabec
	if (cr6.lt) goto loc_82CCABEC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82CCABEC:
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
loc_82CCAC00:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ccac00
	if (!cr6.eq) goto loc_82CCAC00;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CCAC24;
	sub_8259CC28(ctx, base);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ccac74
	if (!cr6.eq) goto loc_82CCAC74;
	// stb r26,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r26.u8);
	// li r9,7
	ctx.r9.s64 = 7;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// stb r30,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r30.u8);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x8259cb28
	ctx.lr = 0x82CCAC74;
	sub_8259CB28(ctx, base);
loc_82CCAC74:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccac90
	if (cr6.lt) goto loc_82CCAC90;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CCAC90;
	sub_825952B8(ctx, base);
loc_82CCAC90:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// blt cr6,0x82ccacb8
	if (cr6.lt) goto loc_82CCACB8;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CCACB8;
	sub_825952B8(ctx, base);
loc_82CCACB8:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// bl 0x82d266f0
	ctx.lr = 0x82CCACC8;
	sub_82D266F0(ctx, base);
	// bl 0x82d26640
	ctx.lr = 0x82CCACCC;
	sub_82D26640(ctx, base);
	// bl 0x82d25a90
	ctx.lr = 0x82CCACD0;
	sub_82D25A90(ctx, base);
	// lwz r3,112(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// bl 0x82d19a78
	ctx.lr = 0x82CCACD8;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82CCACE8;
	sub_82D2B608(ctx, base);
	// lwz r3,112(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// bl 0x82d19a78
	ctx.lr = 0x82CCACF0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCACFC;
	sub_82D2AEC8(ctx, base);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x82d19a78
	ctx.lr = 0x82CCAD04;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82CCAD14;
	sub_82D2B608(ctx, base);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x82d19a78
	ctx.lr = 0x82CCAD1C;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCAD28;
	sub_82D2AEC8(ctx, base);
	// lwz r4,100(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x82cc9ef0
	ctx.lr = 0x82CCAD34;
	sub_82CC9EF0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCAD3C"))) PPC_WEAK_FUNC(sub_82CCAD3C);
PPC_FUNC_IMPL(__imp__sub_82CCAD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCAD40"))) PPC_WEAK_FUNC(sub_82CCAD40);
PPC_FUNC_IMPL(__imp__sub_82CCAD40) {
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
	// bl 0x82d34e50
	ctx.lr = 0x82CCAD5C;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82CCAD60;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccae18
	if (cr6.eq) goto loc_82CCAE18;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lbz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ccae18
	if (cr6.eq) goto loc_82CCAE18;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lbz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ccae18
	if (cr6.eq) goto loc_82CCAE18;
	// bl 0x831156e8
	ctx.lr = 0x82CCAD90;
	sub_831156E8(ctx, base);
	// lhz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 108);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c338
	ctx.lr = 0x82CCAD9C;
	sub_8311C338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CCADB0;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CCADC0;
	sub_82D19788(ctx, base);
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x82ccaddc
	if (!cr6.eq) goto loc_82CCADDC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82CCADDC:
	// bl 0x82d19788
	ctx.lr = 0x82CCADE0;
	sub_82D19788(ctx, base);
	// lwz r11,540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// rlwinm r10,r11,0,16,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE00;
	// li r11,3
	ctx.r11.s64 = 3;
	// cmplwi cr6,r10,16384
	cr6.compare<uint32_t>(ctx.r10.u32, 16384, xer);
	// bgt cr6,0x82ccadf8
	if (cr6.gt) goto loc_82CCADF8;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82CCADF8:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc7538
	ctx.lr = 0x82CCAE04;
	sub_82CC7538(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccaae8
	ctx.lr = 0x82CCAE10;
	sub_82CCAAE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ccae1c
	goto loc_82CCAE1C;
loc_82CCAE18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CCAE1C:
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

__attribute__((alias("__imp__sub_82CCAE34"))) PPC_WEAK_FUNC(sub_82CCAE34);
PPC_FUNC_IMPL(__imp__sub_82CCAE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCAE38"))) PPC_WEAK_FUNC(sub_82CCAE38);
PPC_FUNC_IMPL(__imp__sub_82CCAE38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ccae48
	if (!cr6.eq) goto loc_82CCAE48;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
loc_82CCAE48:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// b 0x82ccaae8
	sub_82CCAAE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCAE54"))) PPC_WEAK_FUNC(sub_82CCAE54);
PPC_FUNC_IMPL(__imp__sub_82CCAE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCAE58"))) PPC_WEAK_FUNC(sub_82CCAE58);
PPC_FUNC_IMPL(__imp__sub_82CCAE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ccae74
	if (!cr6.eq) goto loc_82CCAE74;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ccae78
	goto loc_82CCAE78;
loc_82CCAE74:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82CCAE78:
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// b 0x82ccaae8
	sub_82CCAAE8(ctx, base);
	return;
}

