#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B8D898"))) PPC_WEAK_FUNC(sub_82B8D898);
PPC_FUNC_IMPL(__imp__sub_82B8D898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B8D8A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r3,164
	ctx.r30.s64 = ctx.r3.s64 + 164;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82B8D8C0;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b8d8ec
	if (cr6.eq) goto loc_82B8D8EC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82B8D8E8;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82B8D8EC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82B8D904;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b8d92c
	if (cr6.eq) goto loc_82B8D92C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82B8D928;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82B8D92C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,124
	ctx.r30.s64 = ctx.r31.s64 + 124;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82B8D944;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b8d96c
	if (cr6.eq) goto loc_82B8D96C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82B8D968;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82B8D96C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b860d0
	ctx.lr = 0x82B8D974;
	sub_82B860D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8D97C"))) PPC_WEAK_FUNC(sub_82B8D97C);
PPC_FUNC_IMPL(__imp__sub_82B8D97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8D980"))) PPC_WEAK_FUNC(sub_82B8D980);
PPC_FUNC_IMPL(__imp__sub_82B8D980) {
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
	// bl 0x82b8d898
	ctx.lr = 0x82B8D9A0;
	sub_82B8D898(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8d9b8
	if (cr6.eq) goto loc_82B8D9B8;
	// bl 0x82416268
	ctx.lr = 0x82B8D9B4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B8D9B8:
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

__attribute__((alias("__imp__sub_82B8D9D0"))) PPC_WEAK_FUNC(sub_82B8D9D0);
PPC_FUNC_IMPL(__imp__sub_82B8D9D0) {
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
	// li r4,184
	ctx.r4.s64 = 184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B8DA04;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8da1c
	if (cr6.eq) goto loc_82B8DA1C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b8d7a0
	ctx.lr = 0x82B8DA18;
	sub_82B8D7A0(ctx, base);
	// b 0x82b8da20
	goto loc_82B8DA20;
loc_82B8DA1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B8DA20:
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

__attribute__((alias("__imp__sub_82B8DA38"))) PPC_WEAK_FUNC(sub_82B8DA38);
PPC_FUNC_IMPL(__imp__sub_82B8DA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B8DA40;
	__savegprlr_20(ctx, base);
	// stwu r1,-2272(r1)
	ea = -2272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B8DA50;
	sub_82DAD2E0(ctx, base);
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stb r23,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r23.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cbd568
	ctx.lr = 0x82B8DA68;
	sub_82CBD568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82cbd568
	ctx.lr = 0x82B8DA74;
	sub_82CBD568(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbd568
	ctx.lr = 0x82B8DA80;
	sub_82CBD568(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x82B8DA8C;
	sub_8311E3D0(ctx, base);
	// ld r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 212);
	// lis r26,-31743
	ctx.r26.s64 = -2080309248;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// bne cr6,0x82b8dab0
	if (!cr6.eq) goto loc_82B8DAB0;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// stw r22,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r22.u32);
	// b 0x82b8dadc
	goto loc_82B8DADC;
loc_82B8DAB0:
	// lwz r11,-22208(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22208);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r28,5(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// bl 0x82b8c8c0
	ctx.lr = 0x82B8DAC0;
	sub_82B8C8C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b8dad8
	if (cr6.eq) goto loc_82B8DAD8;
	// stw r22,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r22.u32);
	// b 0x82b8dadc
	goto loc_82B8DADC;
loc_82B8DAD8:
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
loc_82B8DADC:
	// lwz r11,-22208(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22208);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82b8db00
	if (!cr6.eq) goto loc_82B8DB00;
	// bl 0x8308e078
	ctx.lr = 0x82B8DAF4;
	sub_8308E078(ctx, base);
	// lwz r11,-22208(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22208);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82B8DB00:
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82b8db10
	if (cr6.lt) goto loc_82B8DB10;
	// bl 0x8308e078
	ctx.lr = 0x82B8DB0C;
	sub_8308E078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B8DB10:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8353b168
	ctx.lr = 0x82B8DB1C;
	sub_8353B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b8db2c
	if (!cr6.eq) goto loc_82B8DB2C;
	// bl 0x8308e078
	ctx.lr = 0x82B8DB28;
	sub_8308E078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B8DB2C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B8DB3C;
	sub_82D195D8(ctx, base);
	// li r20,2
	ctx.r20.s64 = 2;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// bl 0x830ff290
	ctx.lr = 0x82B8DB48;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B8DB4C;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-7
	ctx.r11.s64 = ctx.r3.s64 + -7;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r21,15
	ctx.r21.s64 = 15;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// addi r30,r10,-30616
	ctx.r30.s64 = ctx.r10.s64 + -30616;
	// bgt cr6,0x82b8e7c4
	if (cr6.gt) goto loc_82B8E7C4;
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9348
	ctx.r12.s64 = ctx.r12.s64 + -9348;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B8E0A4;
	case 1:
		goto loc_82B8DBB8;
	case 2:
		goto loc_82B8DBB8;
	case 3:
		goto loc_82B8DDEC;
	case 4:
		goto loc_82B8DBB8;
	case 5:
		goto loc_82B8DBB8;
	case 6:
		goto loc_82B8DDEC;
	case 7:
		goto loc_82B8EA88;
	case 8:
		goto loc_82B8EA88;
	case 9:
		goto loc_82B8E3E0;
	case 10:
		goto loc_82B8E3E0;
	case 11:
		goto loc_82B8E3E0;
	case 12:
		goto loc_82B8E56C;
	case 13:
		goto loc_82B8E3E0;
	case 14:
		goto loc_82B8E1AC;
	default:
		return;
	}
	// lwz r21,-8028(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8028);
	// lwz r21,-9288(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9288);
	// lwz r21,-9288(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9288);
	// lwz r21,-8724(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8724);
	// lwz r21,-9288(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9288);
	// lwz r21,-9288(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9288);
	// lwz r21,-8724(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8724);
	// lwz r21,-5496(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5496);
	// lwz r21,-5496(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5496);
	// lwz r21,-7200(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7200);
	// lwz r21,-7200(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7200);
	// lwz r21,-7200(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7200);
	// lwz r21,-6804(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6804);
	// lwz r21,-7200(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7200);
	// lwz r21,-7764(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7764);
loc_82B8DBB8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b8c8c0
	ctx.lr = 0x82B8DBC0;
	sub_82B8C8C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8dc0c
	if (cr6.eq) goto loc_82B8DC0C;
	// addi r4,r30,-552
	ctx.r4.s64 = ctx.r30.s64 + -552;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DBDC;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r5,r1,944
	ctx.r5.s64 = ctx.r1.s64 + 944;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8DBF8;
	sub_82CBC620(ctx, base);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DC00;
	sub_8387E8E0(ctx, base);
	// lwz r11,-22208(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22208);
	// li r27,3
	ctx.r27.s64 = 3;
	// stb r23,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r23.u8);
loc_82B8DC0C:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8dc1c
	if (cr6.eq) goto loc_82B8DC1C;
	// stw r27,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r27.u32);
loc_82B8DC1C:
	// addi r4,r30,-536
	ctx.r4.s64 = ctx.r30.s64 + -536;
	// addi r3,r1,2128
	ctx.r3.s64 = ctx.r1.s64 + 2128;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DC28;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,2128
	ctx.r5.s64 = ctx.r1.s64 + 2128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8DC44;
	sub_82CBC620(ctx, base);
	// addi r3,r1,2128
	ctx.r3.s64 = ctx.r1.s64 + 2128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DC4C;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-520
	ctx.r4.s64 = ctx.r30.s64 + -520;
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DC58;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,2032
	ctx.r5.s64 = ctx.r1.s64 + 2032;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8DC74;
	sub_82CBC620(ctx, base);
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DC7C;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-504
	ctx.r4.s64 = ctx.r30.s64 + -504;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DC88;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8DCA4;
	sub_82CBC620(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DCAC;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-496
	ctx.r4.s64 = ctx.r30.s64 + -496;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DCB8;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r1,1392
	ctx.r5.s64 = ctx.r1.s64 + 1392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8DCD4;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DCDC;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-488
	ctx.r4.s64 = ctx.r30.s64 + -488;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DCE8;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,688
	ctx.r5.s64 = ctx.r1.s64 + 688;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8DD04;
	sub_82CBC620(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DD0C;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-480
	ctx.r4.s64 = ctx.r30.s64 + -480;
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DD18;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,1776
	ctx.r5.s64 = ctx.r1.s64 + 1776;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8DD34;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DD3C;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-472
	ctx.r4.s64 = ctx.r30.s64 + -472;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DD48;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r1,752
	ctx.r5.s64 = ctx.r1.s64 + 752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8DD64;
	sub_82CBC620(ctx, base);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DD6C;
	sub_8387E8E0(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x82B8DD7C;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8ea88
	if (cr6.eq) goto loc_82B8EA88;
	// addi r4,r30,-464
	ctx.r4.s64 = ctx.r30.s64 + -464;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DD94;
	sub_837B0C10(ctx, base);
	// addi r4,r1,1456
	ctx.r4.s64 = ctx.r1.s64 + 1456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B8DDA0;
	sub_82CBCDC8(ctx, base);
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DDA8;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-448
	ctx.r4.s64 = ctx.r30.s64 + -448;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DDB4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B8DDC0;
	sub_82CBCDC8(ctx, base);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DDC8;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-440
	ctx.r4.s64 = ctx.r30.s64 + -440;
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DDD4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,1968
	ctx.r4.s64 = ctx.r1.s64 + 1968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B8DDE0;
	sub_82CBCDC8(ctx, base);
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DDE8;
	sub_8387E8E0(ctx, base);
	// b 0x82b8ea88
	goto loc_82B8EA88;
loc_82B8DDEC:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8ddfc
	if (cr6.eq) goto loc_82B8DDFC;
	// stw r20,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r20.u32);
loc_82B8DDFC:
	// addi r4,r30,-432
	ctx.r4.s64 = ctx.r30.s64 + -432;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DE08;
	sub_837B0C10(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,880
	ctx.r5.s64 = ctx.r1.s64 + 880;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8DE28;
	sub_82CBC620(ctx, base);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DE30;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-416
	ctx.r4.s64 = ctx.r30.s64 + -416;
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DE3C;
	sub_837B0C10(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,1520
	ctx.r5.s64 = ctx.r1.s64 + 1520;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8DE58;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DE60;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-400
	ctx.r4.s64 = ctx.r30.s64 + -400;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DE6C;
	sub_837B0C10(ctx, base);
	// lis r7,12
	ctx.r7.s64 = 786432;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,123
	ctx.r7.u64 = ctx.r7.u64 | 123;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8DE8C;
	sub_82CBC620(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DE94;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-392
	ctx.r4.s64 = ctx.r30.s64 + -392;
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DEA0;
	sub_837B0C10(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r1,1840
	ctx.r5.s64 = ctx.r1.s64 + 1840;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8DEBC;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DEC4;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-384
	ctx.r4.s64 = ctx.r30.s64 + -384;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DED0;
	sub_837B0C10(ctx, base);
	// lis r7,12
	ctx.r7.s64 = 786432;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,108
	ctx.r7.u64 = ctx.r7.u64 | 108;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,1008
	ctx.r5.s64 = ctx.r1.s64 + 1008;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8DEF0;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DEF8;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-376
	ctx.r4.s64 = ctx.r30.s64 + -376;
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DF04;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,1584
	ctx.r5.s64 = ctx.r1.s64 + 1584;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8DF20;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DF28;
	sub_8387E8E0(ctx, base);
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r4,192(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x82a32398
	ctx.lr = 0x82B8DF40;
	sub_82A32398(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82B8DF4C;
	sub_82A0C738(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82a16a60
	ctx.lr = 0x82B8DF54;
	sub_82A16A60(ctx, base);
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// bne cr6,0x82b8df78
	if (!cr6.eq) goto loc_82B8DF78;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82B8DF68;
	sub_82A0C738(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82a16a60
	ctx.lr = 0x82B8DF70;
	sub_82A16A60(ctx, base);
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x82b8dfc8
	if (cr6.eq) goto loc_82B8DFC8;
loc_82B8DF78:
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// blt cr6,0x82b8df94
	if (cr6.lt) goto loc_82B8DF94;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// blt cr6,0x82b8df98
	if (cr6.lt) goto loc_82B8DF98;
loc_82B8DF94:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82B8DF98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8dfb8
	if (cr6.eq) goto loc_82B8DFB8;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82b8dfbc
	goto loc_82B8DFBC;
loc_82B8DFB8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82B8DFBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8dfcc
	if (!cr6.eq) goto loc_82B8DFCC;
loc_82B8DFC8:
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_82B8DFCC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8dff8
	if (cr6.eq) goto loc_82B8DFF8;
	// addi r4,r30,-368
	ctx.r4.s64 = ctx.r30.s64 + -368;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x837b0c10
	ctx.lr = 0x82B8DFE4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B8DFF0;
	sub_82CBCDC8(ctx, base);
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8DFF8;
	sub_8387E8E0(ctx, base);
loc_82B8DFF8:
	// addi r4,r30,-360
	ctx.r4.s64 = ctx.r30.s64 + -360;
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E004;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r1,2096
	ctx.r5.s64 = ctx.r1.s64 + 2096;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E020;
	sub_82CBC620(ctx, base);
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E028;
	sub_8387E8E0(ctx, base);
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x82B8E034;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8ea88
	if (cr6.eq) goto loc_82B8EA88;
	// addi r4,r30,-352
	ctx.r4.s64 = ctx.r30.s64 + -352;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E04C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,1136
	ctx.r4.s64 = ctx.r1.s64 + 1136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B8E058;
	sub_82CBCDC8(ctx, base);
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E060;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-336
	ctx.r4.s64 = ctx.r30.s64 + -336;
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E06C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,1648
	ctx.r4.s64 = ctx.r1.s64 + 1648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B8E078;
	sub_82CBCDC8(ctx, base);
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E080;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-328
	ctx.r4.s64 = ctx.r30.s64 + -328;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E08C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,1200
	ctx.r4.s64 = ctx.r1.s64 + 1200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B8E098;
	sub_82CBCDC8(ctx, base);
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E0A0;
	sub_8387E8E0(ctx, base);
	// b 0x82b8ea88
	goto loc_82B8EA88;
loc_82B8E0A4:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8e0b4
	if (cr6.eq) goto loc_82B8E0B4;
	// stw r23,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r23.u32);
loc_82B8E0B4:
	// addi r4,r30,-320
	ctx.r4.s64 = ctx.r30.s64 + -320;
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E0C0;
	sub_837B0C10(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,1904
	ctx.r5.s64 = ctx.r1.s64 + 1904;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E0E0;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E0E8;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-304
	ctx.r4.s64 = ctx.r30.s64 + -304;
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E0F4;
	sub_837B0C10(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r1,1264
	ctx.r5.s64 = ctx.r1.s64 + 1264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E110;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E118;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-296
	ctx.r4.s64 = ctx.r30.s64 + -296;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E124;
	sub_837B0C10(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,1712
	ctx.r5.s64 = ctx.r1.s64 + 1712;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E140;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E148;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-288
	ctx.r4.s64 = ctx.r30.s64 + -288;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E154;
	sub_837B0C10(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,1328
	ctx.r5.s64 = ctx.r1.s64 + 1328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E170;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E178;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-280
	ctx.r4.s64 = ctx.r30.s64 + -280;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E184;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E1A0;
	sub_82CBC620(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E1A8;
	sub_8387E8E0(ctx, base);
	// b 0x82b8ea88
	goto loc_82B8EA88;
loc_82B8E1AC:
	// bl 0x830ff290
	ctx.lr = 0x82B8E1B0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// beq cr6,0x82b8e1dc
	if (cr6.eq) goto loc_82B8E1DC;
	// bl 0x830ff290
	ctx.lr = 0x82B8E1C0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// beq cr6,0x82b8e1dc
	if (cr6.eq) goto loc_82B8E1DC;
	// bl 0x830ff290
	ctx.lr = 0x82B8E1D0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82b8e3e0
	if (!cr6.eq) goto loc_82B8E3E0;
loc_82B8E1DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b8c8c0
	ctx.lr = 0x82B8E1E4;
	sub_82B8C8C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8e230
	if (cr6.eq) goto loc_82B8E230;
	// addi r4,r30,-272
	ctx.r4.s64 = ctx.r30.s64 + -272;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E200;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E21C;
	sub_82CBC620(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E224;
	sub_8387E8E0(ctx, base);
	// lwz r11,-22208(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22208);
	// li r27,3
	ctx.r27.s64 = 3;
	// stb r23,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r23.u8);
loc_82B8E230:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8e240
	if (cr6.eq) goto loc_82B8E240;
	// stw r27,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r27.u32);
loc_82B8E240:
	// addi r4,r30,-256
	ctx.r4.s64 = ctx.r30.s64 + -256;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E24C;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E268;
	sub_82CBC620(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E270;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-240
	ctx.r4.s64 = ctx.r30.s64 + -240;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E27C;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E298;
	sub_82CBC620(ctx, base);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E2A0;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-224
	ctx.r4.s64 = ctx.r30.s64 + -224;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E2AC;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,784
	ctx.r5.s64 = ctx.r1.s64 + 784;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E2C8;
	sub_82CBC620(ctx, base);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E2D0;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-216
	ctx.r4.s64 = ctx.r30.s64 + -216;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E2DC;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r1,848
	ctx.r5.s64 = ctx.r1.s64 + 848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E2F8;
	sub_82CBC620(ctx, base);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E300;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-208
	ctx.r4.s64 = ctx.r30.s64 + -208;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E30C;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,912
	ctx.r5.s64 = ctx.r1.s64 + 912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E328;
	sub_82CBC620(ctx, base);
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E330;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-200
	ctx.r4.s64 = ctx.r30.s64 + -200;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E33C;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,976
	ctx.r5.s64 = ctx.r1.s64 + 976;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E358;
	sub_82CBC620(ctx, base);
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E360;
	sub_8387E8E0(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x82B8E370;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8ea88
	if (cr6.eq) goto loc_82B8EA88;
	// addi r4,r30,-192
	ctx.r4.s64 = ctx.r30.s64 + -192;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E388;
	sub_837B0C10(ctx, base);
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B8E394;
	sub_82CBCDC8(ctx, base);
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E39C;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-176
	ctx.r4.s64 = ctx.r30.s64 + -176;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E3A8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,1104
	ctx.r4.s64 = ctx.r1.s64 + 1104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B8E3B4;
	sub_82CBCDC8(ctx, base);
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E3BC;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E3C8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,1168
	ctx.r4.s64 = ctx.r1.s64 + 1168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B8E3D4;
	sub_82CBCDC8(ctx, base);
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E3DC;
	sub_8387E8E0(ctx, base);
	// b 0x82b8ea88
	goto loc_82B8EA88;
loc_82B8E3E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83572958
	ctx.lr = 0x82B8E3E8;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8e46c
	if (cr6.eq) goto loc_82B8E46C;
	// bl 0x830ff290
	ctx.lr = 0x82B8E3FC;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// beq cr6,0x82b8e46c
	if (cr6.eq) goto loc_82B8E46C;
	// bl 0x830ff290
	ctx.lr = 0x82B8E40C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// beq cr6,0x82b8e46c
	if (cr6.eq) goto loc_82B8E46C;
	// bl 0x830ff290
	ctx.lr = 0x82B8E41C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// beq cr6,0x82b8e46c
	if (cr6.eq) goto loc_82B8E46C;
	// addi r4,r30,-160
	ctx.r4.s64 = ctx.r30.s64 + -160;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E434;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// addi r5,r1,1232
	ctx.r5.s64 = ctx.r1.s64 + 1232;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E450;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E458;
	sub_8387E8E0(ctx, base);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8e47c
	if (cr6.eq) goto loc_82B8E47C;
	// stw r20,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r20.u32);
	// b 0x82b8e47c
	goto loc_82B8E47C;
loc_82B8E46C:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8e47c
	if (cr6.eq) goto loc_82B8E47C;
	// stw r23,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r23.u32);
loc_82B8E47C:
	// addi r4,r30,-148
	ctx.r4.s64 = ctx.r30.s64 + -148;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E488;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,1296
	ctx.r5.s64 = ctx.r1.s64 + 1296;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E4A4;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E4AC;
	sub_8387E8E0(ctx, base);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82b8e4d8
	if (cr6.eq) goto loc_82B8E4D8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82db0a88
	ctx.lr = 0x82B8E4C4;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8e4d8
	if (!cr6.eq) goto loc_82B8E4D8;
	// lis r27,600
	ctx.r27.s64 = 39321600;
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
loc_82B8E4D8:
	// addi r4,r30,-132
	ctx.r4.s64 = ctx.r30.s64 + -132;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E4E4;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,1360
	ctx.r5.s64 = ctx.r1.s64 + 1360;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E500;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E508;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E514;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,1424
	ctx.r5.s64 = ctx.r1.s64 + 1424;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E530;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E538;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E544;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,1488
	ctx.r5.s64 = ctx.r1.s64 + 1488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E560;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E568;
	sub_8387E8E0(ctx, base);
	// b 0x82b8ea88
	goto loc_82B8EA88;
loc_82B8E56C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83572958
	ctx.lr = 0x82B8E574;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8e5c8
	if (cr6.eq) goto loc_82B8E5C8;
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E590;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// addi r5,r1,1552
	ctx.r5.s64 = ctx.r1.s64 + 1552;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E5AC;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E5B4;
	sub_8387E8E0(ctx, base);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8e5d8
	if (cr6.eq) goto loc_82B8E5D8;
	// stw r20,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r20.u32);
	// b 0x82b8e5d8
	goto loc_82B8E5D8;
loc_82B8E5C8:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8e5d8
	if (cr6.eq) goto loc_82B8E5D8;
	// stw r23,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r23.u32);
loc_82B8E5D8:
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// addi r3,r1,1616
	ctx.r3.s64 = ctx.r1.s64 + 1616;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E5E4;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,1616
	ctx.r5.s64 = ctx.r1.s64 + 1616;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E600;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1616
	ctx.r3.s64 = ctx.r1.s64 + 1616;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E608;
	sub_8387E8E0(ctx, base);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82b8e634
	if (cr6.eq) goto loc_82B8E634;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82db0a88
	ctx.lr = 0x82B8E620;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8e634
	if (!cr6.eq) goto loc_82B8E634;
	// lis r27,600
	ctx.r27.s64 = 39321600;
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
loc_82B8E634:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// lwz r26,2056(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// beq cr6,0x82b8e6dc
	if (cr6.eq) goto loc_82B8E6DC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82db0a88
	ctx.lr = 0x82B8E650;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8e6dc
	if (cr6.eq) goto loc_82B8E6DC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8E670;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b8e6ac
	if (cr6.eq) goto loc_82B8E6AC;
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E688;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,1680
	ctx.r5.s64 = ctx.r1.s64 + 1680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E6A4;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// b 0x82b8e728
	goto loc_82B8E728;
loc_82B8E6AC:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E6B8;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,1744
	ctx.r5.s64 = ctx.r1.s64 + 1744;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E6D4;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// b 0x82b8e728
	goto loc_82B8E728;
loc_82B8E6DC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8E6F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b8e72c
	if (!cr6.eq) goto loc_82B8E72C;
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E708;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,1808
	ctx.r5.s64 = ctx.r1.s64 + 1808;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E724;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
loc_82B8E728:
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E72C;
	sub_8387E8E0(ctx, base);
loc_82B8E72C:
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E738;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,1872
	ctx.r5.s64 = ctx.r1.s64 + 1872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E754;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E75C;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E768;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,1936
	ctx.r5.s64 = ctx.r1.s64 + 1936;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E784;
	sub_82CBC620(ctx, base);
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E78C;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E798;
	sub_837B0C10(ctx, base);
	// lis r7,508
	ctx.r7.s64 = 33292288;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,41
	ctx.r7.u64 = ctx.r7.u64 | 41;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r1,2000
	ctx.r5.s64 = ctx.r1.s64 + 2000;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E7B8;
	sub_82CBC620(ctx, base);
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E7C0;
	sub_8387E8E0(ctx, base);
	// b 0x82b8ea88
	goto loc_82B8EA88;
loc_82B8E7C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b8c8c0
	ctx.lr = 0x82B8E7CC;
	sub_82B8C8C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8e818
	if (cr6.eq) goto loc_82B8E818;
	// addi r4,r30,-652
	ctx.r4.s64 = ctx.r30.s64 + -652;
	// addi r3,r1,2064
	ctx.r3.s64 = ctx.r1.s64 + 2064;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E7E8;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r5,r1,2064
	ctx.r5.s64 = ctx.r1.s64 + 2064;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E804;
	sub_82CBC620(ctx, base);
	// addi r3,r1,2064
	ctx.r3.s64 = ctx.r1.s64 + 2064;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8E80C;
	sub_8387E8E0(ctx, base);
	// lwz r11,-22208(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22208);
	// li r27,3
	ctx.r27.s64 = 3;
	// stb r23,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r23.u8);
loc_82B8E818:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8e828
	if (cr6.eq) goto loc_82B8E828;
	// stw r27,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r27.u32);
loc_82B8E828:
	// addi r4,r30,-636
	ctx.r4.s64 = ctx.r30.s64 + -636;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82B8E834;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E850;
	sub_82CBC620(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8e86c
	if (cr6.lt) goto loc_82B8E86C;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82B8E86C;
	sub_825952B8(ctx, base);
loc_82B8E86C:
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// addi r4,r30,-620
	ctx.r4.s64 = ctx.r30.s64 + -620;
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stb r22,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r22.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82B8E884;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E8A0;
	sub_82CBC620(ctx, base);
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8e8bc
	if (cr6.lt) goto loc_82B8E8BC;
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,432(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x825952b8
	ctx.lr = 0x82B8E8BC;
	sub_825952B8(ctx, base);
loc_82B8E8BC:
	// stw r21,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r21.u32);
	// addi r4,r30,-604
	ctx.r4.s64 = ctx.r30.s64 + -604;
	// stw r22,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r22.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r22,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r22.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82B8E8D4;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E8F0;
	sub_82CBC620(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8e90c
	if (cr6.lt) goto loc_82B8E90C;
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82B8E90C;
	sub_825952B8(ctx, base);
loc_82B8E90C:
	// stw r21,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r21.u32);
	// addi r4,r30,-596
	ctx.r4.s64 = ctx.r30.s64 + -596;
	// stw r22,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r22.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stb r22,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r22.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82B8E924;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E940;
	sub_82CBC620(ctx, base);
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8e95c
	if (cr6.lt) goto loc_82B8E95C;
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x825952b8
	ctx.lr = 0x82B8E95C;
	sub_825952B8(ctx, base);
loc_82B8E95C:
	// stw r21,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r21.u32);
	// addi r4,r30,-588
	ctx.r4.s64 = ctx.r30.s64 + -588;
	// stw r22,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r22.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stb r22,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r22.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82B8E974;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E990;
	sub_82CBC620(ctx, base);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8e9ac
	if (cr6.lt) goto loc_82B8E9AC;
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x82B8E9AC;
	sub_825952B8(ctx, base);
loc_82B8E9AC:
	// stw r21,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r21.u32);
	// addi r4,r30,-580
	ctx.r4.s64 = ctx.r30.s64 + -580;
	// stw r22,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r22.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r22,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r22.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82B8E9C4;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8E9E0;
	sub_82CBC620(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8e9fc
	if (cr6.lt) goto loc_82B8E9FC;
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82B8E9FC;
	sub_825952B8(ctx, base);
loc_82B8E9FC:
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// addi r4,r30,-572
	ctx.r4.s64 = ctx.r30.s64 + -572;
	// stw r22,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r22.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stb r22,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r22.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82B8EA14;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8EA30;
	sub_82CBC620(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8EA38;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-560
	ctx.r4.s64 = ctx.r30.s64 + -560;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82B8EA44;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8EA60;
	sub_82CBC620(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8ea7c
	if (cr6.lt) goto loc_82B8EA7C;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82B8EA7C;
	sub_825952B8(ctx, base);
loc_82B8EA7C:
	// stw r21,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r21.u32);
	// stw r22,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r22.u32);
	// stb r22,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r22.u8);
loc_82B8EA88:
	// lbz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 128);
	// addi r28,r29,124
	ctx.r28.s64 = ctx.r29.s64 + 124;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8eaa0
	if (!cr6.eq) goto loc_82B8EAA0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x82B8EAA0;
	sub_825AB6C8(ctx, base);
loc_82B8EAA0:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8eabc
	if (!cr6.eq) goto loc_82B8EABC;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
loc_82B8EABC:
	// lwz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lbz r11,5816(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5816);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8eb0c
	if (!cr6.eq) goto loc_82B8EB0C;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x82B8EAD8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B8EAE4;
	sub_82CBCDC8(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8eb00
	if (cr6.lt) goto loc_82B8EB00;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82B8EB00;
	sub_825952B8(ctx, base);
loc_82B8EB00:
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// stw r22,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r22.u32);
	// stb r22,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r22.u8);
loc_82B8EB0C:
	// lwz r11,4456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x82b8ebd8
	if (!cr6.eq) goto loc_82B8EBD8;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x837b0c10
	ctx.lr = 0x82B8EB24;
	sub_837B0C10(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B8EB30;
	sub_82CBCDC8(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8eb4c
	if (cr6.lt) goto loc_82B8EB4C;
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x825952b8
	ctx.lr = 0x82B8EB4C;
	sub_825952B8(ctx, base);
loc_82B8EB4C:
	// stw r21,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r21.u32);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// stw r22,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r22.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stb r22,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r22.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82B8EB64;
	sub_837B0C10(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B8EB70;
	sub_82CBCDC8(ctx, base);
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8eb8c
	if (cr6.lt) goto loc_82B8EB8C;
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x825952b8
	ctx.lr = 0x82B8EB8C;
	sub_825952B8(ctx, base);
loc_82B8EB8C:
	// stw r21,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r21.u32);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// stw r22,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r22.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stb r22,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r22.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82B8EBA4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B8EBB0;
	sub_82CBCDC8(ctx, base);
	// lwz r11,484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8ebcc
	if (cr6.lt) goto loc_82B8EBCC;
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x825952b8
	ctx.lr = 0x82B8EBCC;
	sub_825952B8(ctx, base);
loc_82B8EBCC:
	// stw r21,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r21.u32);
	// stw r22,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r22.u32);
	// stb r22,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r22.u8);
loc_82B8EBD8:
	// bl 0x830ff290
	ctx.lr = 0x82B8EBDC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B8EBE0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,26
	cr6.compare<uint32_t>(ctx.r3.u32, 26, xer);
	// bne cr6,0x82b8ec24
	if (!cr6.eq) goto loc_82B8EC24;
	// bl 0x831156e8
	ctx.lr = 0x82B8EBEC;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,35067
	ctx.r9.u64 = ctx.r11.u64 | 35067;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b8ec24
	if (!cr6.eq) goto loc_82B8EC24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x837b0c10
	ctx.lr = 0x82B8EC10;
	sub_837B0C10(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B8EC1C;
	sub_82CBCDC8(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8EC24;
	sub_8387E8E0(ctx, base);
loc_82B8EC24:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8ec34
	if (cr6.eq) goto loc_82B8EC34;
	// stw r22,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r22.u32);
loc_82B8EC34:
	// addi r1,r1,2272
	ctx.r1.s64 = ctx.r1.s64 + 2272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8EC3C"))) PPC_WEAK_FUNC(sub_82B8EC3C);
PPC_FUNC_IMPL(__imp__sub_82B8EC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8EC40"))) PPC_WEAK_FUNC(sub_82B8EC40);
PPC_FUNC_IMPL(__imp__sub_82B8EC40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B8EC48;
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
	ctx.lr = 0x82B8EC5C;
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
	ctx.lr = 0x82B8EC74;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-29392
	ctx.r9.s64 = ctx.r11.s64 + -29392;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,14652(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14652);
	// bl 0x82d20ae0
	ctx.lr = 0x82B8EC9C;
	sub_82D20AE0(ctx, base);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,14520(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 14520);
	// bl 0x82d23390
	ctx.lr = 0x82B8ECB0;
	sub_82D23390(ctx, base);
	// bl 0x82d17d90
	ctx.lr = 0x82B8ECB4;
	sub_82D17D90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b8ece8
	if (!cr6.eq) goto loc_82B8ECE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// bl 0x8311e3d0
	ctx.lr = 0x82B8ECC8;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x82B8ECD0;
	sub_8311D680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B8ECDC;
	sub_82D195D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B8ECE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8ECFC"))) PPC_WEAK_FUNC(sub_82B8ECFC);
PPC_FUNC_IMPL(__imp__sub_82B8ECFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8ED00"))) PPC_WEAK_FUNC(sub_82B8ED00);
PPC_FUNC_IMPL(__imp__sub_82B8ED00) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-29392
	ctx.r9.s64 = ctx.r11.s64 + -29392;
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
	ctx.lr = 0x82B8ED38;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b8ed50
	if (cr6.eq) goto loc_82B8ED50;
	// bl 0x82416268
	ctx.lr = 0x82B8ED4C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B8ED50:
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

__attribute__((alias("__imp__sub_82B8ED68"))) PPC_WEAK_FUNC(sub_82B8ED68);
PPC_FUNC_IMPL(__imp__sub_82B8ED68) {
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
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B8ED9C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8edb4
	if (cr6.eq) goto loc_82B8EDB4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b8ec40
	ctx.lr = 0x82B8EDB0;
	sub_82B8EC40(ctx, base);
	// b 0x82b8edb8
	goto loc_82B8EDB8;
loc_82B8EDB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B8EDB8:
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

__attribute__((alias("__imp__sub_82B8EDD0"))) PPC_WEAK_FUNC(sub_82B8EDD0);
PPC_FUNC_IMPL(__imp__sub_82B8EDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B8EDD8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8EDE4;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82B8EDEC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8ee00
	if (cr6.eq) goto loc_82B8EE00;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B8EE00;
	sub_82D2AEC8(ctx, base);
loc_82B8EE00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8EE08;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r26,r11,-29512
	ctx.r26.s64 = ctx.r11.s64 + -29512;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r26,-36
	ctx.r4.s64 = ctx.r26.s64 + -36;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8EE28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82B8EE38;
	sub_82D1ED60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8EE40;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B8EE58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82B8EE5C;
	sub_831156E8(ctx, base);
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addis r25,r7,6
	ctx.r25.s64 = ctx.r7.s64 + 393216;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r25,r25,-30316
	ctx.r25.s64 = ctx.r25.s64 + -30316;
	// addi r28,r11,14656
	ctx.r28.s64 = ctx.r11.s64 + 14656;
	// addi r27,r10,-29088
	ctx.r27.s64 = ctx.r10.s64 + -29088;
	// addi r24,r9,-29100
	ctx.r24.s64 = ctx.r9.s64 + -29100;
loc_82B8EE84:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B8EE98;
	sub_82D21408(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B8EEA8;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8ef48
	if (cr6.eq) goto loc_82B8EF48;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8EECC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8eee0
	if (cr6.eq) goto loc_82B8EEE0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x82d29598
	ctx.lr = 0x82B8EEE0;
	sub_82D29598(ctx, base);
loc_82B8EEE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B8EEF0;
	sub_82D2D510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8ef48
	if (cr6.eq) goto loc_82B8EF48;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x82d3b6a0
	ctx.lr = 0x82B8EF0C;
	sub_82D3B6A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x82b8ef34
	if (cr6.lt) goto loc_82B8EF34;
	// beq cr6,0x82b8ef2c
	if (cr6.eq) goto loc_82B8EF2C;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x82b8ef3c
	if (!cr6.lt) goto loc_82B8EF3C;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// b 0x82b8ef38
	goto loc_82B8EF38;
loc_82B8EF2C:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// b 0x82b8ef38
	goto loc_82B8EF38;
loc_82B8EF34:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
loc_82B8EF38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B8EF3C:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B8EF48;
	sub_82D3B298(ctx, base);
loc_82B8EF48:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82b8ee84
	if (cr6.lt) goto loc_82B8EE84;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8EF68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8EF70;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d510
	ctx.lr = 0x82B8EF80;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8ef98
	if (cr6.eq) goto loc_82B8EF98;
	// lis r4,22
	ctx.r4.s64 = 1441792;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x82d30340
	ctx.lr = 0x82B8EF98;
	sub_82D30340(ctx, base);
loc_82B8EF98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8EFA4"))) PPC_WEAK_FUNC(sub_82B8EFA4);
PPC_FUNC_IMPL(__imp__sub_82B8EFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8EFA8"))) PPC_WEAK_FUNC(sub_82B8EFA8);
PPC_FUNC_IMPL(__imp__sub_82B8EFA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B8EFB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B8EFBC;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r31,0
	ctx.r31.s64 = 0;
	// addis r30,r11,6
	ctx.r30.s64 = ctx.r11.s64 + 393216;
	// addi r30,r30,-30316
	ctx.r30.s64 = ctx.r30.s64 + -30316;
loc_82B8EFCC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B8EFE0;
	sub_82D21408(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B8EFF0;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8f03c
	if (cr6.eq) goto loc_82B8F03C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B8F008;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8f03c
	if (cr6.eq) goto loc_82B8F03C;
	// bl 0x83a970c8
	ctx.lr = 0x82B8F014;
	sub_83A970C8(ctx, base);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x82b8f038
	if (cr6.lt) goto loc_82B8F038;
	// beq cr6,0x82b8f030
	if (cr6.eq) goto loc_82B8F030;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x82b8f03c
	if (!cr6.lt) goto loc_82B8F03C;
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// b 0x82b8f03c
	goto loc_82B8F03C;
loc_82B8F030:
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// b 0x82b8f03c
	goto loc_82B8F03C;
loc_82B8F038:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
loc_82B8F03C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82b8efcc
	if (cr6.lt) goto loc_82B8EFCC;
	// lbz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// beq cr6,0x82b8f074
	if (cr6.eq) goto loc_82B8F074;
	// addi r11,r11,-29488
	ctx.r11.s64 = ctx.r11.s64 + -29488;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// bl 0x82d20da8
	ctx.lr = 0x82B8F06C;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B8F074:
	// addi r5,r11,-29488
	ctx.r5.s64 = ctx.r11.s64 + -29488;
	// bl 0x82d20da8
	ctx.lr = 0x82B8F07C;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8F084"))) PPC_WEAK_FUNC(sub_82B8F084);
PPC_FUNC_IMPL(__imp__sub_82B8F084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8F088"))) PPC_WEAK_FUNC(sub_82B8F088);
PPC_FUNC_IMPL(__imp__sub_82B8F088) {
	PPC_FUNC_PROLOGUE();
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82d19788
	sub_82D19788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8F094"))) PPC_WEAK_FUNC(sub_82B8F094);
PPC_FUNC_IMPL(__imp__sub_82B8F094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8F098"))) PPC_WEAK_FUNC(sub_82B8F098);
PPC_FUNC_IMPL(__imp__sub_82B8F098) {
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
	// bl 0x82a63868
	ctx.lr = 0x82B8F0B0;
	sub_82A63868(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r8,r10,-28408
	ctx.r8.s64 = ctx.r10.s64 + -28408;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stb r11,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r11.u8);
	// stb r11,134(r31)
	PPC_STORE_U8(ctx.r31.u32 + 134, ctx.r11.u8);
	// stb r11,135(r31)
	PPC_STORE_U8(ctx.r31.u32 + 135, ctx.r11.u8);
	// stb r6,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r6.u8);
	// bl 0x8311e3d0
	ctx.lr = 0x82B8F0E8;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x82B8F0F0;
	sub_8311D680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B8F0FC;
	sub_82D195D8(ctx, base);
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

__attribute__((alias("__imp__sub_82B8F114"))) PPC_WEAK_FUNC(sub_82B8F114);
PPC_FUNC_IMPL(__imp__sub_82B8F114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8F118"))) PPC_WEAK_FUNC(sub_82B8F118);
PPC_FUNC_IMPL(__imp__sub_82B8F118) {
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
	// li r4,140
	ctx.r4.s64 = 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B8F14C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8f164
	if (cr6.eq) goto loc_82B8F164;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b8f098
	ctx.lr = 0x82B8F160;
	sub_82B8F098(ctx, base);
	// b 0x82b8f168
	goto loc_82B8F168;
loc_82B8F164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B8F168:
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

__attribute__((alias("__imp__sub_82B8F180"))) PPC_WEAK_FUNC(sub_82B8F180);
PPC_FUNC_IMPL(__imp__sub_82B8F180) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-28408
	ctx.r9.s64 = ctx.r11.s64 + -28408;
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
	// bl 0x82a637b0
	ctx.lr = 0x82B8F1B8;
	sub_82A637B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b8f1d0
	if (cr6.eq) goto loc_82B8F1D0;
	// bl 0x82416268
	ctx.lr = 0x82B8F1CC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B8F1D0:
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

__attribute__((alias("__imp__sub_82B8F1E8"))) PPC_WEAK_FUNC(sub_82B8F1E8);
PPC_FUNC_IMPL(__imp__sub_82B8F1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r9,22
	ctx.r9.s64 = 22;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// lwz r9,25892(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25892);
loc_82B8F200:
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b8f218
	if (cr6.eq) goto loc_82B8F218;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B8F218:
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// bdnz 0x82b8f200
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B8F200;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8F238"))) PPC_WEAK_FUNC(sub_82B8F238);
PPC_FUNC_IMPL(__imp__sub_82B8F238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r9,22
	ctx.r9.s64 = 22;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// lwz r9,25896(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25896);
loc_82B8F250:
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b8f268
	if (cr6.eq) goto loc_82B8F268;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B8F268:
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// bdnz 0x82b8f250
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B8F250;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8F288"))) PPC_WEAK_FUNC(sub_82B8F288);
PPC_FUNC_IMPL(__imp__sub_82B8F288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B8F290;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82a63638
	ctx.lr = 0x82B8F2A4;
	sub_82A63638(ctx, base);
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8f2e8
	if (cr6.eq) goto loc_82B8F2E8;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x83089ad0
	ctx.lr = 0x82B8F2BC;
	sub_83089AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8f2e8
	if (!cr6.eq) goto loc_82B8F2E8;
	// lbz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b8f2e8
	if (!cr6.eq) goto loc_82B8F2E8;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B8F2E8;
	sub_82D2B608(ctx, base);
loc_82B8F2E8:
	// bl 0x831156e8
	ctx.lr = 0x82B8F2EC;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8f30c
	if (cr6.eq) goto loc_82B8F30C;
	// bl 0x83115808
	ctx.lr = 0x82B8F2FC;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82b8f310
	if (!cr6.eq) goto loc_82B8F310;
loc_82B8F30C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B8F310:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8f3bc
	if (!cr6.eq) goto loc_82B8F3BC;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8f370
	if (cr6.eq) goto loc_82B8F370;
	// bl 0x82a1aaa8
	ctx.lr = 0x82B8F334;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8f370
	if (cr6.eq) goto loc_82B8F370;
	// lbz r11,133(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 133);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b8f35c
	if (cr6.eq) goto loc_82B8F35C;
	// lbz r11,135(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 135);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b8f360
	if (!cr6.eq) goto loc_82B8F360;
loc_82B8F35C:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82B8F360:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B8F370;
	sub_82D2B608(ctx, base);
loc_82B8F370:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8f3bc
	if (cr6.eq) goto loc_82B8F3BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8F390;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82b8f3bc
	if (!cr6.eq) goto loc_82B8F3BC;
	// lbz r11,134(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 134);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b8f3bc
	if (!cr6.eq) goto loc_82B8F3BC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B8F3BC;
	sub_82D2B608(ctx, base);
loc_82B8F3BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8F3C4"))) PPC_WEAK_FUNC(sub_82B8F3C4);
PPC_FUNC_IMPL(__imp__sub_82B8F3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8F3C8"))) PPC_WEAK_FUNC(sub_82B8F3C8);
PPC_FUNC_IMPL(__imp__sub_82B8F3C8) {
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
	// blt cr6,0x82b8f3f0
	if (cr6.lt) goto loc_82B8F3F0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b8f3f4
	goto loc_82B8F3F4;
loc_82B8F3F0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B8F3F4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B8F410;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8f42c
	if (cr6.eq) goto loc_82B8F42C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b8f098
	ctx.lr = 0x82B8F424;
	sub_82B8F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b8f430
	if (!cr6.eq) goto loc_82B8F430;
loc_82B8F42C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B8F430:
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

__attribute__((alias("__imp__sub_82B8F448"))) PPC_WEAK_FUNC(sub_82B8F448);
PPC_FUNC_IMPL(__imp__sub_82B8F448) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B8F460;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8f470
	if (cr6.eq) goto loc_82B8F470;
	// lwz r31,228(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// b 0x82b8f4a4
	goto loc_82B8F4A4;
loc_82B8F470:
	// bl 0x831156e8
	ctx.lr = 0x82B8F474;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82d19638
	ctx.lr = 0x82B8F484;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r8,r10,35265
	ctx.r8.u64 = ctx.r10.u64 | 35265;
	// lbzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r31,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r7.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82B8F4A4:
	// bl 0x831156e8
	ctx.lr = 0x82B8F4A8;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b8f0
	ctx.lr = 0x82B8F4B4;
	sub_8312B8F0(ctx, base);
	// bl 0x82d47a58
	ctx.lr = 0x82B8F4B8;
	sub_82D47A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r9,-28516
	ctx.r4.s64 = ctx.r9.s64 + -28516;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82B8F4E0;
	sub_8259CC28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d47bb8
	ctx.lr = 0x82B8F4E8;
	sub_82D47BB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d47b08
	ctx.lr = 0x82B8F4F0;
	sub_82D47B08(ctx, base);
	// bl 0x82d476f0
	ctx.lr = 0x82B8F4F4;
	sub_82D476F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8F508"))) PPC_WEAK_FUNC(sub_82B8F508);
PPC_FUNC_IMPL(__imp__sub_82B8F508) {
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
	// lbz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8f55c
	if (cr6.eq) goto loc_82B8F55C;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,388(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B8F540;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b8f55c
	if (!cr6.eq) goto loc_82B8F55C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8f448
	ctx.lr = 0x82B8F554;
	sub_82B8F448(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
loc_82B8F55C:
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

__attribute__((alias("__imp__sub_82B8F570"))) PPC_WEAK_FUNC(sub_82B8F570);
PPC_FUNC_IMPL(__imp__sub_82B8F570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B8F578;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r5,28
	ctx.r3.s64 = ctx.r5.s64 + 28;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83915a50
	ctx.lr = 0x82B8F598;
	sub_83915A50(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r4,-28
	ctx.r3.s64 = ctx.r4.s64 + -28;
	// bl 0x838adab0
	ctx.lr = 0x82B8F5AC;
	sub_838ADAB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8F5C8"))) PPC_WEAK_FUNC(sub_82B8F5C8);
PPC_FUNC_IMPL(__imp__sub_82B8F5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82B8F5D0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B8F5DC;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8f5fc
	if (cr6.eq) goto loc_82B8F5FC;
	// bl 0x83115808
	ctx.lr = 0x82B8F5EC;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82b8f600
	if (!cr6.eq) goto loc_82B8F600;
loc_82B8F5FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B8F600:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8f61c
	if (!cr6.eq) goto loc_82B8F61C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82B8F618;
	sub_82D198D0(ctx, base);
	// b 0x82b8f640
	goto loc_82B8F640;
loc_82B8F61C:
	// bl 0x82d16ed0
	ctx.lr = 0x82B8F620;
	sub_82D16ED0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8f640
	if (cr6.eq) goto loc_82B8F640;
	// bl 0x82d16ed0
	ctx.lr = 0x82B8F62C;
	sub_82D16ED0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82d17018
	ctx.lr = 0x82B8F640;
	sub_82D17018(ctx, base);
loc_82B8F640:
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r23,96(r21)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r22,112(r21)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r21.u32 + 112);
	// addi r10,r10,14668
	ctx.r10.s64 = ctx.r10.s64 + 14668;
	// lbz r18,80(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r15,80(r1)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r28,r21,96
	ctx.r28.s64 = ctx.r21.s64 + 96;
	// lbz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r27,r21,112
	ctx.r27.s64 = ctx.r21.s64 + 112;
	// lbz r14,80(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r19,0
	ctx.r19.s64 = 0;
	// lbz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r20,r11,-28528
	ctx.r20.s64 = ctx.r11.s64 + -28528;
	// li r24,-1
	ctx.r24.s64 = -1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82B8F680:
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r25,6
	ctx.r25.s64 = 6;
loc_82B8F68C:
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82B8F694:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8f694
	if (!cr6.eq) goto loc_82B8F694;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82B8F6C0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8f774
	if (!cr6.eq) goto loc_82B8F774;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r23,28
	ctx.r31.s64 = ctx.r23.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82b8f6fc
	if (cr6.eq) goto loc_82B8F6FC;
	// subf r29,r31,r23
	ctx.r29.s64 = ctx.r23.s64 - ctx.r31.s64;
loc_82B8F6DC:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B8F6F0;
	sub_8259CB28(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b8f6dc
	if (!cr6.eq) goto loc_82B8F6DC;
loc_82B8F6FC:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// addi r3,r4,-28
	ctx.r3.s64 = ctx.r4.s64 + -28;
	// bl 0x838adab0
	ctx.lr = 0x82B8F710;
	sub_838ADAB0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r22,28
	ctx.r31.s64 = ctx.r22.s64 + 28;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82b8f750
	if (cr6.eq) goto loc_82B8F750;
	// subf r29,r31,r22
	ctx.r29.s64 = ctx.r22.s64 - ctx.r31.s64;
loc_82B8F730:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B8F744;
	sub_8259CB28(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b8f730
	if (!cr6.eq) goto loc_82B8F730;
loc_82B8F750:
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// addi r5,r27,12
	ctx.r5.s64 = ctx.r27.s64 + 12;
	// addi r3,r4,-28
	ctx.r3.s64 = ctx.r4.s64 + -28;
	// bl 0x838adab0
	ctx.lr = 0x82B8F764;
	sub_838ADAB0(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_82B8F774:
	// bl 0x830ff290
	ctx.lr = 0x82B8F778;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B8F77C;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8f864
	if (!cr6.eq) goto loc_82B8F864;
	// bl 0x830ff290
	ctx.lr = 0x82B8F78C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(ctx.r11.u32, 67, xer);
	// beq cr6,0x82b8f864
	if (cr6.eq) goto loc_82B8F864;
	// addi r6,r20,-40
	ctx.r6.s64 = ctx.r20.s64 + -40;
	// lwz r5,16(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8F7B0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8f864
	if (!cr6.eq) goto loc_82B8F864;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r23,28
	ctx.r31.s64 = ctx.r23.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82b8f7ec
	if (cr6.eq) goto loc_82B8F7EC;
	// subf r29,r31,r23
	ctx.r29.s64 = ctx.r23.s64 - ctx.r31.s64;
loc_82B8F7CC:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B8F7E0;
	sub_8259CB28(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b8f7cc
	if (!cr6.eq) goto loc_82B8F7CC;
loc_82B8F7EC:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// addi r3,r4,-28
	ctx.r3.s64 = ctx.r4.s64 + -28;
	// bl 0x838adab0
	ctx.lr = 0x82B8F800;
	sub_838ADAB0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r22,28
	ctx.r31.s64 = ctx.r22.s64 + 28;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82b8f840
	if (cr6.eq) goto loc_82B8F840;
	// subf r29,r31,r22
	ctx.r29.s64 = ctx.r22.s64 - ctx.r31.s64;
loc_82B8F820:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B8F834;
	sub_8259CB28(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b8f820
	if (!cr6.eq) goto loc_82B8F820;
loc_82B8F840:
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r27,12
	ctx.r5.s64 = ctx.r27.s64 + 12;
	// addi r3,r4,-28
	ctx.r3.s64 = ctx.r4.s64 + -28;
	// bl 0x838adab0
	ctx.lr = 0x82B8F854;
	sub_838ADAB0(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_82B8F864:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82b8f68c
	if (!cr0.eq) goto loc_82B8F68C;
	// addi r11,r20,-64
	ctx.r11.s64 = ctx.r20.s64 + -64;
	// li r25,3
	ctx.r25.s64 = 3;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
loc_82B8F87C:
	// lwz r6,-4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82B8F884:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8f884
	if (!cr6.eq) goto loc_82B8F884;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82B8F8B0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8f994
	if (!cr6.eq) goto loc_82B8F994;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lbz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// bl 0x82b8f1e8
	ctx.lr = 0x82B8F8C4;
	sub_82B8F1E8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x82b8f8e8
	if (!cr6.eq) goto loc_82B8F8E8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lbz r5,1(r26)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// bl 0x82b8f238
	ctx.lr = 0x82B8F8DC;
	sub_82B8F238(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x82b8f994
	if (cr6.eq) goto loc_82B8F994;
loc_82B8F8E8:
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r23,28
	ctx.r31.s64 = ctx.r23.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82b8f91c
	if (cr6.eq) goto loc_82B8F91C;
	// subf r29,r31,r23
	ctx.r29.s64 = ctx.r23.s64 - ctx.r31.s64;
loc_82B8F8FC:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B8F910;
	sub_8259CB28(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b8f8fc
	if (!cr6.eq) goto loc_82B8F8FC;
loc_82B8F91C:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// addi r3,r4,-28
	ctx.r3.s64 = ctx.r4.s64 + -28;
	// bl 0x838adab0
	ctx.lr = 0x82B8F930;
	sub_838ADAB0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r22,28
	ctx.r31.s64 = ctx.r22.s64 + 28;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82b8f970
	if (cr6.eq) goto loc_82B8F970;
	// subf r29,r31,r22
	ctx.r29.s64 = ctx.r22.s64 - ctx.r31.s64;
loc_82B8F950:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B8F964;
	sub_8259CB28(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b8f950
	if (!cr6.eq) goto loc_82B8F950;
loc_82B8F970:
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r5,r27,12
	ctx.r5.s64 = ctx.r27.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r4,-28
	ctx.r3.s64 = ctx.r4.s64 + -28;
	// bl 0x838adab0
	ctx.lr = 0x82B8F984;
	sub_838ADAB0(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_82B8F994:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// bne 0x82b8f87c
	if (!cr0.eq) goto loc_82B8F87C;
	// addi r6,r20,-28
	ctx.r6.s64 = ctx.r20.s64 + -28;
	// lwz r5,16(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8F9B8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8fa88
	if (!cr6.eq) goto loc_82B8FA88;
	// bl 0x830ff290
	ctx.lr = 0x82B8F9C4;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82B8F9C8;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8fa84
	if (cr6.eq) goto loc_82B8FA84;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r23,28
	ctx.r31.s64 = ctx.r23.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82b8fa08
	if (cr6.eq) goto loc_82B8FA08;
	// subf r29,r31,r23
	ctx.r29.s64 = ctx.r23.s64 - ctx.r31.s64;
loc_82B8F9E8:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B8F9FC;
	sub_8259CB28(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b8f9e8
	if (!cr6.eq) goto loc_82B8F9E8;
loc_82B8FA08:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r4,-28
	ctx.r3.s64 = ctx.r4.s64 + -28;
	// bl 0x838adab0
	ctx.lr = 0x82B8FA1C;
	sub_838ADAB0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r22,28
	ctx.r31.s64 = ctx.r22.s64 + 28;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82b8fa5c
	if (cr6.eq) goto loc_82B8FA5C;
	// subf r29,r31,r22
	ctx.r29.s64 = ctx.r22.s64 - ctx.r31.s64;
loc_82B8FA3C:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B8FA50;
	sub_8259CB28(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b8fa3c
	if (!cr6.eq) goto loc_82B8FA3C;
loc_82B8FA5C:
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r5,r27,12
	ctx.r5.s64 = ctx.r27.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r4,-28
	ctx.r3.s64 = ctx.r4.s64 + -28;
	// bl 0x838adab0
	ctx.lr = 0x82B8FA70;
	sub_838ADAB0(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// b 0x82b8fa88
	goto loc_82B8FA88;
loc_82B8FA84:
	// stb r19,135(r21)
	PPC_STORE_U8(ctx.r21.u32 + 135, ctx.r19.u8);
loc_82B8FA88:
	// addi r6,r20,-16
	ctx.r6.s64 = ctx.r20.s64 + -16;
	// lwz r5,16(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8FAA0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8faac
	if (!cr6.eq) goto loc_82B8FAAC;
	// stb r19,132(r21)
	PPC_STORE_U8(ctx.r21.u32 + 132, ctx.r19.u8);
loc_82B8FAAC:
	// addi r6,r20,-8
	ctx.r6.s64 = ctx.r20.s64 + -8;
	// lwz r5,16(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8FAC4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8fad0
	if (!cr6.eq) goto loc_82B8FAD0;
	// stb r19,133(r21)
	PPC_STORE_U8(ctx.r21.u32 + 133, ctx.r19.u8);
loc_82B8FAD0:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r5,16(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8FAE8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8faf4
	if (!cr6.eq) goto loc_82B8FAF4;
	// stb r19,134(r21)
	PPC_STORE_U8(ctx.r21.u32 + 134, ctx.r19.u8);
loc_82B8FAF4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8fb34
	if (!cr6.eq) goto loc_82B8FB34;
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8fb14
	if (cr6.lt) goto loc_82B8FB14;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// b 0x82b8fb18
	goto loc_82B8FB18;
loc_82B8FB14:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_82B8FB18:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82B8FB28;
	sub_82D233B0(ctx, base);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r23,r23,28
	ctx.r23.s64 = ctx.r23.s64 + 28;
	// addi r22,r22,28
	ctx.r22.s64 = ctx.r22.s64 + 28;
loc_82B8FB34:
	// lwz r11,100(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 100);
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b8f680
	if (!cr6.eq) goto loc_82B8F680;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// divw r5,r8,r10
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82B8FB68;
	sub_82D20F50(ctx, base);
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lwz r3,2056(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2056);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,388(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 388);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82B8FB80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,136(r21)
	PPC_STORE_U8(ctx.r21.u32 + 136, ctx.r3.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8FB90"))) PPC_WEAK_FUNC(sub_82B8FB90);
PPC_FUNC_IMPL(__imp__sub_82B8FB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B8FB98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B8FBB0;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B8FBC8;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r28,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r28.u32);
	// addi r9,r11,-27424
	ctx.r9.s64 = ctx.r11.s64 + -27424;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stb r7,100(r30)
	PPC_STORE_U8(ctx.r30.u32 + 100, ctx.r7.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r6,-27656
	ctx.r31.s64 = ctx.r6.s64 + -27656;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// bl 0x82d20ae0
	ctx.lr = 0x82B8FC00;
	sub_82D20AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82B8FC10;
	sub_82D23390(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82B8FC14;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x82B8FC1C;
	sub_8311D680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B8FC28;
	sub_82D195D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8FC34"))) PPC_WEAK_FUNC(sub_82B8FC34);
PPC_FUNC_IMPL(__imp__sub_82B8FC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8FC38"))) PPC_WEAK_FUNC(sub_82B8FC38);
PPC_FUNC_IMPL(__imp__sub_82B8FC38) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8FC58;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B8FC60;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8fc90
	if (cr6.eq) goto loc_82B8FC90;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B8FC70;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d510
	ctx.lr = 0x82B8FC80;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8fc90
	if (cr6.eq) goto loc_82B8FC90;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B8FC90;
	sub_82D3B298(ctx, base);
loc_82B8FC90:
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

__attribute__((alias("__imp__sub_82B8FCA8"))) PPC_WEAK_FUNC(sub_82B8FCA8);
PPC_FUNC_IMPL(__imp__sub_82B8FCA8) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82B8FCC0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B8FCC8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b8fce8
	if (!cr6.eq) goto loc_82B8FCE8;
loc_82B8FCD0:
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
loc_82B8FCE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B8FCF0;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d510
	ctx.lr = 0x82B8FD00;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8fcd0
	if (cr6.eq) goto loc_82B8FCD0;
	// bl 0x83a970c8
	ctx.lr = 0x82B8FD0C;
	sub_83A970C8(ctx, base);
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

__attribute__((alias("__imp__sub_82B8FD20"))) PPC_WEAK_FUNC(sub_82B8FD20);
PPC_FUNC_IMPL(__imp__sub_82B8FD20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b8fd90
	if (!cr6.eq) goto loc_82B8FD90;
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// ori r9,r11,52429
	ctx.r9.u64 = ctx.r11.u64 | 52429;
	// addi r8,r10,-27124
	ctx.r8.s64 = ctx.r10.s64 + -27124;
	// mulhwu r7,r4,r9
	ctx.r7.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r11,r7,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b8fd78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B8FD78;
	// bdzf 4*cr6+eq,0x82b8fd84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B8FD84;
	// bne cr6,0x82b8fd84
	if (!cr6.eq) goto loc_82B8FD84;
loc_82B8FD78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82B8FD84:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82B8FD90:
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// ori r9,r11,43691
	ctx.r9.u64 = ctx.r11.u64 | 43691;
	// addi r8,r10,-27136
	ctx.r8.s64 = ctx.r10.s64 + -27136;
	// mulhwu r7,r4,r9
	ctx.r7.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r11,r7,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r6,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r6.s64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8FDC4"))) PPC_WEAK_FUNC(sub_82B8FDC4);
PPC_FUNC_IMPL(__imp__sub_82B8FDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8FDC8"))) PPC_WEAK_FUNC(sub_82B8FDC8);
PPC_FUNC_IMPL(__imp__sub_82B8FDC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b8fe18
	if (!cr6.eq) goto loc_82B8FE18;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// clrlwi r9,r5,31
	ctx.r9.u64 = ctx.r5.u32 & 0x1;
	// ori r8,r11,43691
	ctx.r8.u64 = ctx.r11.u64 | 43691;
	// rlwinm r10,r5,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x2;
	// mulhwu r7,r4,r8
	ctx.r7.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r11,r7,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r3,r6,-27104
	ctx.r3.s64 = ctx.r6.s64 + -27104;
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82B8FE18:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x82b8fe3c
	if (cr6.lt) goto loc_82B8FE3C;
	// beq cr6,0x82b8fe34
	if (cr6.eq) goto loc_82B8FE34;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82B8FE34:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82B8FE3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8FE44"))) PPC_WEAK_FUNC(sub_82B8FE44);
PPC_FUNC_IMPL(__imp__sub_82B8FE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8FE48"))) PPC_WEAK_FUNC(sub_82B8FE48);
PPC_FUNC_IMPL(__imp__sub_82B8FE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B8FE50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8FE60;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B8FE68;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8fee8
	if (cr6.eq) goto loc_82B8FEE8;
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8fe94
	if (cr6.eq) goto loc_82B8FE94;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// beq cr6,0x82b8fe9c
	if (cr6.eq) goto loc_82B8FE9C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8fea0
	if (!cr6.eq) goto loc_82B8FEA0;
loc_82B8FE94:
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// bne cr6,0x82b8fea0
	if (!cr6.eq) goto loc_82B8FEA0;
loc_82B8FE9C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B8FEA0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B8FEAC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8fec4
	if (cr6.eq) goto loc_82B8FEC4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B8FEC4;
	sub_82D2B608(ctx, base);
loc_82B8FEC4:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B8FED0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8fee8
	if (cr6.eq) goto loc_82B8FEE8;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B8FEE8;
	sub_82D2B608(ctx, base);
loc_82B8FEE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8FEF0"))) PPC_WEAK_FUNC(sub_82B8FEF0);
PPC_FUNC_IMPL(__imp__sub_82B8FEF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B8FEF8;
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
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B8FF20;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8ff40
	if (cr6.eq) goto loc_82B8FF40;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b8fb90
	ctx.lr = 0x82B8FF38;
	sub_82B8FB90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B8FF40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8FF4C"))) PPC_WEAK_FUNC(sub_82B8FF4C);
PPC_FUNC_IMPL(__imp__sub_82B8FF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8FF50"))) PPC_WEAK_FUNC(sub_82B8FF50);
PPC_FUNC_IMPL(__imp__sub_82B8FF50) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27424
	ctx.r9.s64 = ctx.r11.s64 + -27424;
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
	ctx.lr = 0x82B8FF88;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b8ffa0
	if (cr6.eq) goto loc_82B8FFA0;
	// bl 0x82416268
	ctx.lr = 0x82B8FF9C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B8FFA0:
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

__attribute__((alias("__imp__sub_82B8FFB8"))) PPC_WEAK_FUNC(sub_82B8FFB8);
PPC_FUNC_IMPL(__imp__sub_82B8FFB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B8FFC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8FFD4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B8FFDC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90140
	if (cr6.eq) goto loc_82B90140;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B8FFEC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90140
	if (cr6.eq) goto loc_82B90140;
	// bl 0x831156e8
	ctx.lr = 0x82B8FFF8;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90140
	if (cr6.eq) goto loc_82B90140;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r28,9
	cr6.compare<uint32_t>(ctx.r28.u32, 9, xer);
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// addi r31,r31,24068
	ctx.r31.s64 = ctx.r31.s64 + 24068;
	// bgt cr6,0x82b90140
	if (cr6.gt) goto loc_82B90140;
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// rlwinm r0,r28,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,44
	ctx.r12.s64 = ctx.r12.s64 + 44;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r28.u32) {
	case 0:
		goto loc_82B90054;
	case 1:
		goto loc_82B900DC;
	case 2:
		goto loc_82B900E8;
	case 3:
		goto loc_82B900F4;
	case 4:
		goto loc_82B90100;
	case 5:
		goto loc_82B9010C;
	case 6:
		goto loc_82B90118;
	case 7:
		goto loc_82B90124;
	case 8:
		goto loc_82B90130;
	case 9:
		goto loc_82B9013C;
	default:
		return;
	}
	// lwz r21,84(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// lwz r21,220(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 220);
	// lwz r21,232(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// lwz r21,244(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// lwz r21,256(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 256);
	// lwz r21,268(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 268);
	// lwz r21,280(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 280);
	// lwz r21,292(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 292);
	// lwz r21,304(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 304);
	// lwz r21,316(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 316);
loc_82B90054:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82b8fd20
	ctx.lr = 0x82B90078;
	sub_82B8FD20(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,21845
	ctx.r9.s64 = 1431633920;
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// ori r7,r9,21846
	ctx.r7.u64 = ctx.r9.u64 | 21846;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulhw r11,r8,r7
	ctx.r11.s64 = (int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32)) >> 32;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r9,r6,1
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// stb r8,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// bl 0x82b8fdc8
	ctx.lr = 0x82B900C8;
	sub_82B8FDC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b8fe48
	ctx.lr = 0x82B900D4;
	sub_82B8FE48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B900DC:
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B900E8:
	// stb r29,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B900F4:
	// stb r29,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B90100:
	// stb r29,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B9010C:
	// stb r29,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B90118:
	// stb r29,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B90124:
	// stb r29,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B90130:
	// stb r29,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B9013C:
	// stb r29,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r29.u8);
loc_82B90140:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B90148"))) PPC_WEAK_FUNC(sub_82B90148);
PPC_FUNC_IMPL(__imp__sub_82B90148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B90150;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B9015C;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90230
	if (cr6.eq) goto loc_82B90230;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// addi r30,r30,24068
	ctx.r30.s64 = ctx.r30.s64 + 24068;
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82b8fdc8
	ctx.lr = 0x82B90180;
	sub_82B8FDC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8fc38
	ctx.lr = 0x82B90194;
	sub_82B8FC38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// bl 0x82b8fc38
	ctx.lr = 0x82B901A4;
	sub_82B8FC38(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// bl 0x82b8fc38
	ctx.lr = 0x82B901B4;
	sub_82B8FC38(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,3(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// bl 0x82b8fc38
	ctx.lr = 0x82B901C4;
	sub_82B8FC38(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,5(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// bl 0x82b8fc38
	ctx.lr = 0x82B901D4;
	sub_82B8FC38(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,6(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// bl 0x82b8fc38
	ctx.lr = 0x82B901E4;
	sub_82B8FC38(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,7(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// bl 0x82b8fc38
	ctx.lr = 0x82B901F4;
	sub_82B8FC38(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// bl 0x82b8fc38
	ctx.lr = 0x82B90204;
	sub_82B8FC38(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,10(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// bl 0x82b8fc38
	ctx.lr = 0x82B90214;
	sub_82B8FC38(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,11(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11);
	// bl 0x82b8fc38
	ctx.lr = 0x82B90224;
	sub_82B8FC38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8fe48
	ctx.lr = 0x82B90230;
	sub_82B8FE48(ctx, base);
loc_82B90230:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B90238"))) PPC_WEAK_FUNC(sub_82B90238);
PPC_FUNC_IMPL(__imp__sub_82B90238) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B90254;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b903b8
	if (cr6.eq) goto loc_82B903B8;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// addi r31,r31,24068
	ctx.r31.s64 = ctx.r31.s64 + 24068;
	// bl 0x82d19a78
	ctx.lr = 0x82B90270;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B90278;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b903b8
	if (cr6.eq) goto loc_82B903B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B90288;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d510
	ctx.lr = 0x82B90298;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b903b8
	if (cr6.eq) goto loc_82B903B8;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83a970c8
	ctx.lr = 0x82B902B4;
	sub_83A970C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// bl 0x82b8fd20
	ctx.lr = 0x82B902C8;
	sub_82B8FD20(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,21845
	ctx.r9.s64 = 1431633920;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// ori r8,r9,21846
	ctx.r8.u64 = ctx.r9.u64 | 21846;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// mulhw r11,r5,r8
	ctx.r11.s64 = (int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r6,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r6.s64;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b8fca8
	ctx.lr = 0x82B9031C;
	sub_82B8FCA8(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b8fca8
	ctx.lr = 0x82B9032C;
	sub_82B8FCA8(ctx, base);
	// stb r3,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r3.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b8fca8
	ctx.lr = 0x82B9033C;
	sub_82B8FCA8(ctx, base);
	// stb r3,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r3.u8);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b8fca8
	ctx.lr = 0x82B9034C;
	sub_82B8FCA8(ctx, base);
	// stb r3,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r3.u8);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b8fca8
	ctx.lr = 0x82B9035C;
	sub_82B8FCA8(ctx, base);
	// stb r3,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r3.u8);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b8fca8
	ctx.lr = 0x82B9036C;
	sub_82B8FCA8(ctx, base);
	// stb r3,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r3.u8);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b8fca8
	ctx.lr = 0x82B9037C;
	sub_82B8FCA8(ctx, base);
	// stb r3,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r3.u8);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b8fca8
	ctx.lr = 0x82B9038C;
	sub_82B8FCA8(ctx, base);
	// stb r3,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r3.u8);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b8fca8
	ctx.lr = 0x82B9039C;
	sub_82B8FCA8(ctx, base);
	// stb r3,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r3.u8);
	// bl 0x831156e8
	ctx.lr = 0x82B903A4;
	sub_831156E8(ctx, base);
	// lis r5,5
	ctx.r5.s64 = 327680;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r3,r5,37446
	ctx.r3.u64 = ctx.r5.u64 | 37446;
	// stbx r11,r4,r3
	PPC_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u8);
loc_82B903B8:
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

__attribute__((alias("__imp__sub_82B903D0"))) PPC_WEAK_FUNC(sub_82B903D0);
PPC_FUNC_IMPL(__imp__sub_82B903D0) {
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
	// blt cr6,0x82b903f8
	if (cr6.lt) goto loc_82B903F8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b903fc
	goto loc_82B903FC;
loc_82B903F8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B903FC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B90418;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90438
	if (cr6.eq) goto loc_82B90438;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b8fb90
	ctx.lr = 0x82B90430;
	sub_82B8FB90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b9043c
	if (!cr6.eq) goto loc_82B9043C;
loc_82B90438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B9043C:
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

__attribute__((alias("__imp__sub_82B90454"))) PPC_WEAK_FUNC(sub_82B90454);
PPC_FUNC_IMPL(__imp__sub_82B90454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90458"))) PPC_WEAK_FUNC(sub_82B90458);
PPC_FUNC_IMPL(__imp__sub_82B90458) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d1c0c0
	ctx.lr = 0x82B90478;
	sub_82D1C0C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b904a0
	if (cr6.eq) goto loc_82B904A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B90490;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b904a0
	if (cr6.eq) goto loc_82B904A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b90238
	ctx.lr = 0x82B904A0;
	sub_82B90238(ctx, base);
loc_82B904A0:
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

__attribute__((alias("__imp__sub_82B904B4"))) PPC_WEAK_FUNC(sub_82B904B4);
PPC_FUNC_IMPL(__imp__sub_82B904B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B904B8"))) PPC_WEAK_FUNC(sub_82B904B8);
PPC_FUNC_IMPL(__imp__sub_82B904B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82B904C0;
	__savegprlr_18(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B904CC;
	sub_831156E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90b44
	if (cr6.eq) goto loc_82B90B44;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B904E0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B904E8;
	sub_82D33DB0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90b44
	if (cr6.eq) goto loc_82B90B44;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82B90504;
	sub_82D1ED60(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9050C;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-27520
	ctx.r30.s64 = ctx.r11.s64 + -27520;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9052C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B90534;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B9054C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B90554;
	sub_82D19A78(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B9056C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B90574;
	sub_82D19A78(ctx, base);
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// bl 0x82d2f098
	ctx.lr = 0x82B9057C;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b905a8
	if (cr6.eq) goto loc_82B905A8;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B90598;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B905A8;
	sub_82D2AEC8(ctx, base);
loc_82B905A8:
	// lwz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b905c0
	if (!cr6.eq) goto loc_82B905C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82B905C0;
	sub_82D198D0(ctx, base);
loc_82B905C0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B905C8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B905E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b905f8
	if (cr6.eq) goto loc_82B905F8;
	// lis r4,49
	ctx.r4.s64 = 3211264;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 | 10;
	// bl 0x82d30340
	ctx.lr = 0x82B905F8;
	sub_82D30340(ctx, base);
loc_82B905F8:
	// bl 0x830ff290
	ctx.lr = 0x82B905FC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B90600;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bne cr6,0x82b90668
	if (!cr6.eq) goto loc_82B90668;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82a47d40
	ctx.lr = 0x82B90618;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82b906ac
	if (cr6.gt) goto loc_82B906AC;
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1600
	ctx.r12.s64 = ctx.r12.s64 + 1600;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B906A4;
	case 1:
		goto loc_82B906A4;
	case 2:
		goto loc_82B906A4;
	case 3:
		goto loc_82B906AC;
	case 4:
		goto loc_82B906AC;
	case 5:
		goto loc_82B906AC;
	case 6:
		goto loc_82B906A4;
	case 7:
		goto loc_82B906AC;
	case 8:
		goto loc_82B906AC;
	case 9:
		goto loc_82B906A4;
	default:
		return;
	}
	// lwz r21,1700(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1700);
	// lwz r21,1700(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1700);
	// lwz r21,1700(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1700);
	// lwz r21,1708(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1708);
	// lwz r21,1708(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1708);
	// lwz r21,1708(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1708);
	// lwz r21,1700(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1700);
	// lwz r21,1708(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1708);
	// lwz r21,1708(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1708);
	// lwz r21,1700(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1700);
loc_82B90668:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82b90690
	if (!cr6.lt) goto loc_82B90690;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B90690:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,24120
	ctx.r11.s64 = ctx.r11.s64 + 24120;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x82b906ac
	if (!cr6.eq) goto loc_82B906AC;
loc_82B906A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,100(r21)
	PPC_STORE_U8(ctx.r21.u32 + 100, ctx.r11.u8);
loc_82B906AC:
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// ori r24,r11,15
	ctx.r24.u64 = ctx.r11.u64 | 15;
	// li r26,-1
	ctx.r26.s64 = -1;
	// ori r20,r10,128
	ctx.r20.u64 = ctx.r10.u64 | 128;
	// ori r22,r9,3
	ctx.r22.u64 = ctx.r9.u64 | 3;
	// li r18,2
	ctx.r18.s64 = 2;
loc_82B906D4:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82B906DC;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r25,r3
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, xer);
	// bge cr6,0x82b90a90
	if (!cr6.lt) goto loc_82B90A90;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B906F8;
	sub_82D21408(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B90704;
	sub_82D33DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9071C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B90728;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90b44
	if (cr6.eq) goto loc_82B90B44;
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B90744;
	sub_82D2D510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90b44
	if (cr6.eq) goto loc_82B90B44;
	// cmplwi cr6,r25,7
	cr6.compare<uint32_t>(ctx.r25.u32, 7, xer);
	// bgt cr6,0x82b90a2c
	if (cr6.gt) goto loc_82B90A2C;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b90a2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B90A2C;
	// bdzf 4*cr6+eq,0x82b9093c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B9093C;
	// bdzf 4*cr6+eq,0x82b9093c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B9093C;
	// bdzf 4*cr6+eq,0x82b90a2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B90A2C;
	// bdzf 4*cr6+eq,0x82b90a2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B90A2C;
	// bdzf 4*cr6+eq,0x82b90a2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B90A2C;
	// bne cr6,0x82b90964
	if (!cr6.eq) goto loc_82B90964;
	// lbz r11,100(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 100);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b90868
	if (!cr6.eq) goto loc_82B90868;
	// addi r31,r30,-248
	ctx.r31.s64 = ctx.r30.s64 + -248;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82B90790:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82b90828
	if (!cr6.eq) goto loc_82B90828;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b90828
	if (cr6.eq) goto loc_82B90828;
	// addi r4,r30,-542
	ctx.r4.s64 = ctx.r30.s64 + -542;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82B907B0;
	sub_837B0C10(ctx, base);
	// addi r4,r30,-541
	ctx.r4.s64 = ctx.r30.s64 + -541;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x837b0c10
	ctx.lr = 0x82B907BC;
	sub_837B0C10(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x82d04220
	ctx.lr = 0x82B907C8;
	sub_82D04220(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82d04220
	ctx.lr = 0x82B907D4;
	sub_82D04220(ctx, base);
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825a1eb8
	ctx.lr = 0x82B907E4;
	sub_825A1EB8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825a1da8
	ctx.lr = 0x82B907F8;
	sub_825A1DA8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b9080c
	if (!cr6.lt) goto loc_82B9080C;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_82B9080C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82B90814;
	sub_82D3B548(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x82B9081C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82B90824;
	sub_8387E8E0(ctx, base);
	// b 0x82b90830
	goto loc_82B90830;
loc_82B90828:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b620
	ctx.lr = 0x82B90830;
	sub_82D3B620(ctx, base);
loc_82B90830:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,5
	cr6.compare<uint32_t>(ctx.r29.u32, 5, xer);
	// blt cr6,0x82b90790
	if (cr6.lt) goto loc_82B90790;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B90858;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90a84
	if (cr6.eq) goto loc_82B90A84;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x82b90a80
	goto loc_82B90A80;
loc_82B90868:
	// addi r31,r30,-260
	ctx.r31.s64 = ctx.r30.s64 + -260;
	// li r29,3
	ctx.r29.s64 = 3;
loc_82B90870:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82b90900
	if (!cr6.eq) goto loc_82B90900;
	// addi r4,r30,-510
	ctx.r4.s64 = ctx.r30.s64 + -510;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82B90888;
	sub_837B0C10(ctx, base);
	// addi r4,r30,-509
	ctx.r4.s64 = ctx.r30.s64 + -509;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82B90894;
	sub_837B0C10(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d04220
	ctx.lr = 0x82B908A0;
	sub_82D04220(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d04220
	ctx.lr = 0x82B908AC;
	sub_82D04220(ctx, base);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825a1eb8
	ctx.lr = 0x82B908BC;
	sub_825A1EB8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825a1da8
	ctx.lr = 0x82B908D0;
	sub_825A1DA8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b908e4
	if (!cr6.lt) goto loc_82B908E4;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82B908E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82B908EC;
	sub_82D3B548(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82B908F4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B908FC;
	sub_8387E8E0(ctx, base);
	// b 0x82b90908
	goto loc_82B90908;
loc_82B90900:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b620
	ctx.lr = 0x82B90908;
	sub_82D3B620(ctx, base);
loc_82B90908:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82b90870
	if (!cr0.eq) goto loc_82B90870;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9092C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90a84
	if (cr6.eq) goto loc_82B90A84;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x82b90a80
	goto loc_82B90A80;
loc_82B9093C:
	// addi r11,r30,-228
	ctx.r11.s64 = ctx.r30.s64 + -228;
	// li r31,10
	ctx.r31.s64 = 10;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82B90948:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82B90954;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b90948
	if (!cr0.eq) goto loc_82B90948;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// b 0x82b90a50
	goto loc_82B90A50;
loc_82B90964:
	// addi r11,r30,-188
	ctx.r11.s64 = ctx.r30.s64 + -188;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82B90970:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82B9097C;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b90970
	if (!cr0.eq) goto loc_82B90970;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9099C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90a84
	if (cr6.eq) goto loc_82B90A84;
	// addi r4,r30,-479
	ctx.r4.s64 = ctx.r30.s64 + -479;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82B909B4;
	sub_837B0C10(ctx, base);
	// addi r4,r30,-478
	ctx.r4.s64 = ctx.r30.s64 + -478;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x837b0c10
	ctx.lr = 0x82B909C0;
	sub_837B0C10(ctx, base);
	// lis r4,15
	ctx.r4.s64 = 983040;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// ori r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 | 10;
	// bl 0x82d04220
	ctx.lr = 0x82B909D0;
	sub_82D04220(ctx, base);
	// lis r4,15
	ctx.r4.s64 = 983040;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// ori r4,r4,13
	ctx.r4.u64 = ctx.r4.u64 | 13;
	// bl 0x82d04220
	ctx.lr = 0x82B909E0;
	sub_82D04220(ctx, base);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825a1eb8
	ctx.lr = 0x82B909F0;
	sub_825A1EB8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825a1da8
	ctx.lr = 0x82B90A04;
	sub_825A1DA8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B90A18;
	sub_82D291E0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x82B90A20;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82B90A28;
	sub_8387E8E0(ctx, base);
	// b 0x82b90a84
	goto loc_82B90A84;
loc_82B90A2C:
	// addi r11,r30,-188
	ctx.r11.s64 = ctx.r30.s64 + -188;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82B90A38:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82B90A44;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b90a38
	if (!cr0.eq) goto loc_82B90A38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B90A50:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B90A64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90a84
	if (cr6.eq) goto loc_82B90A84;
	// addi r11,r30,-300
	ctx.r11.s64 = ctx.r30.s64 + -300;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82b90a84
	if (cr6.eq) goto loc_82B90A84;
loc_82B90A80:
	// bl 0x82d29598
	ctx.lr = 0x82B90A84;
	sub_82D29598(ctx, base);
loc_82B90A84:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r25,10
	cr6.compare<uint32_t>(ctx.r25.u32, 10, xer);
	// blt cr6,0x82b906d4
	if (cr6.lt) goto loc_82B906D4;
loc_82B90A90:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82b90148
	ctx.lr = 0x82B90A98;
	sub_82B90148(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// li r30,10
	ctx.r30.s64 = 10;
	// addi r31,r11,-27080
	ctx.r31.s64 = ctx.r11.s64 + -27080;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// li r29,15
	ctx.r29.s64 = 15;
loc_82B90AB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stb r23,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r23.u8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x830f6558
	ctx.lr = 0x82B90AD4;
	sub_830F6558(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b90af0
	if (cr6.lt) goto loc_82B90AF0;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x82B90AF0;
	sub_825952B8(ctx, base);
loc_82B90AF0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r23,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r23.u8);
	// bne 0x82b90ab4
	if (!cr0.eq) goto loc_82B90AB4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82B90B18;
	sub_82D24C38(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90b44
	if (cr6.eq) goto loc_82B90B44;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x830f6290
	ctx.lr = 0x82B90B34;
	sub_830F6290(ctx, base);
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B90B44;
	sub_825952B8(ctx, base);
loc_82B90B44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B90B50"))) PPC_WEAK_FUNC(sub_82B90B50);
PPC_FUNC_IMPL(__imp__sub_82B90B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B90B58;
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
	ctx.lr = 0x82B90B6C;
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
	ctx.lr = 0x82B90B84;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26520
	ctx.r9.s64 = ctx.r11.s64 + -26520;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,-26760
	ctx.r4.s64 = ctx.r7.s64 + -26760;
	// bl 0x82d20ae0
	ctx.lr = 0x82B90BAC;
	sub_82D20AE0(ctx, base);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,14972(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 14972);
	// bl 0x82d23390
	ctx.lr = 0x82B90BC0;
	sub_82D23390(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82B90BC4;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x82B90BCC;
	sub_8311D680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B90BD8;
	sub_82D195D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B90BE4"))) PPC_WEAK_FUNC(sub_82B90BE4);
PPC_FUNC_IMPL(__imp__sub_82B90BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90BE8"))) PPC_WEAK_FUNC(sub_82B90BE8);
PPC_FUNC_IMPL(__imp__sub_82B90BE8) {
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
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,24556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24556);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x831156e8
	ctx.lr = 0x82B90C2C;
	sub_831156E8(ctx, base);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r11,r11,24080
	ctx.r11.s64 = ctx.r11.s64 + 24080;
	// bgt cr6,0x82b90cb8
	if (cr6.gt) goto loc_82B90CB8;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b90c6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B90C6C;
	// bdzf 4*cr6+eq,0x82b90c78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B90C78;
	// bdzf 4*cr6+eq,0x82b90c84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B90C84;
	// bdzf 4*cr6+eq,0x82b90c90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B90C90;
	// bdzf 4*cr6+eq,0x82b90c9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B90C9C;
	// bne cr6,0x82b90ca8
	if (!cr6.eq) goto loc_82B90CA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// b 0x82b90cb0
	goto loc_82B90CB0;
loc_82B90C6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r31,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r31.u8);
	// b 0x82b90cb0
	goto loc_82B90CB0;
loc_82B90C78:
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r31,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r31.u8);
	// b 0x82b90cb0
	goto loc_82B90CB0;
loc_82B90C84:
	// li r3,3
	ctx.r3.s64 = 3;
	// stb r31,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r31.u8);
	// b 0x82b90cb0
	goto loc_82B90CB0;
loc_82B90C90:
	// li r3,4
	ctx.r3.s64 = 4;
	// stb r31,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r31.u8);
	// b 0x82b90cb0
	goto loc_82B90CB0;
loc_82B90C9C:
	// li r3,5
	ctx.r3.s64 = 5;
	// stb r31,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r31.u8);
	// b 0x82b90cb0
	goto loc_82B90CB0;
loc_82B90CA8:
	// li r3,6
	ctx.r3.s64 = 6;
	// stb r31,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r31.u8);
loc_82B90CB0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830eb4d8
	ctx.lr = 0x82B90CB8;
	sub_830EB4D8(ctx, base);
loc_82B90CB8:
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

__attribute__((alias("__imp__sub_82B90CD4"))) PPC_WEAK_FUNC(sub_82B90CD4);
PPC_FUNC_IMPL(__imp__sub_82B90CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90CD8"))) PPC_WEAK_FUNC(sub_82B90CD8);
PPC_FUNC_IMPL(__imp__sub_82B90CD8) {
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
	ctx.lr = 0x82B90D0C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90d24
	if (cr6.eq) goto loc_82B90D24;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b90b50
	ctx.lr = 0x82B90D20;
	sub_82B90B50(ctx, base);
	// b 0x82b90d28
	goto loc_82B90D28;
loc_82B90D24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B90D28:
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

__attribute__((alias("__imp__sub_82B90D40"))) PPC_WEAK_FUNC(sub_82B90D40);
PPC_FUNC_IMPL(__imp__sub_82B90D40) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26520
	ctx.r9.s64 = ctx.r11.s64 + -26520;
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
	ctx.lr = 0x82B90D78;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b90d90
	if (cr6.eq) goto loc_82B90D90;
	// bl 0x82416268
	ctx.lr = 0x82B90D8C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B90D90:
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

__attribute__((alias("__imp__sub_82B90DA8"))) PPC_WEAK_FUNC(sub_82B90DA8);
PPC_FUNC_IMPL(__imp__sub_82B90DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B90DB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B90DC4;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90ddc
	if (cr6.eq) goto loc_82B90DDC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b90be8
	ctx.lr = 0x82B90DDC;
	sub_82B90BE8(ctx, base);
loc_82B90DDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B90DE4"))) PPC_WEAK_FUNC(sub_82B90DE4);
PPC_FUNC_IMPL(__imp__sub_82B90DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B90DE8"))) PPC_WEAK_FUNC(sub_82B90DE8);
PPC_FUNC_IMPL(__imp__sub_82B90DE8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d1c0c0
	ctx.lr = 0x82B90E10;
	sub_82D1C0C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90e68
	if (cr6.eq) goto loc_82B90E68;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,-26620
	ctx.r4.s64 = ctx.r10.s64 + -26620;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B90E34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90e68
	if (cr6.eq) goto loc_82B90E68;
	// bl 0x82dad040
	ctx.lr = 0x82B90E40;
	sub_82DAD040(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b90be8
	ctx.lr = 0x82B90E50;
	sub_82B90BE8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B90E54;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,37446
	ctx.r8.u64 = ctx.r11.u64 | 37446;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
loc_82B90E68:
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

__attribute__((alias("__imp__sub_82B90E80"))) PPC_WEAK_FUNC(sub_82B90E80);
PPC_FUNC_IMPL(__imp__sub_82B90E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B90E88;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f30,24556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24556);
	ctx.f30.f64 = double(temp.f32);
	// ori r29,r9,24080
	ctx.r29.u64 = ctx.r9.u64 | 24080;
	// addi r28,r11,-26612
	ctx.r28.s64 = ctx.r11.s64 + -26612;
loc_82B90EB4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d1c0c0
	ctx.lr = 0x82B90EC4;
	sub_82D1C0C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90fa4
	if (cr6.eq) goto loc_82B90FA4;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B90EE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b90fa4
	if (cr6.eq) goto loc_82B90FA4;
	// bl 0x82dad040
	ctx.lr = 0x82B90EF0;
	sub_82DAD040(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f30
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x831156e8
	ctx.lr = 0x82B90F10;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bgt cr6,0x82b90f98
	if (cr6.gt) goto loc_82B90F98;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b90f4c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B90F4C;
	// bdzf 4*cr6+eq,0x82b90f58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B90F58;
	// bdzf 4*cr6+eq,0x82b90f64
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B90F64;
	// bdzf 4*cr6+eq,0x82b90f70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B90F70;
	// bdzf 4*cr6+eq,0x82b90f7c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B90F7C;
	// bne cr6,0x82b90f88
	if (!cr6.eq) goto loc_82B90F88;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// b 0x82b90f90
	goto loc_82B90F90;
loc_82B90F4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r31,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r31.u8);
	// b 0x82b90f90
	goto loc_82B90F90;
loc_82B90F58:
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r31,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r31.u8);
	// b 0x82b90f90
	goto loc_82B90F90;
loc_82B90F64:
	// li r3,3
	ctx.r3.s64 = 3;
	// stb r31,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r31.u8);
	// b 0x82b90f90
	goto loc_82B90F90;
loc_82B90F70:
	// li r3,4
	ctx.r3.s64 = 4;
	// stb r31,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r31.u8);
	// b 0x82b90f90
	goto loc_82B90F90;
loc_82B90F7C:
	// li r3,5
	ctx.r3.s64 = 5;
	// stb r31,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r31.u8);
	// b 0x82b90f90
	goto loc_82B90F90;
loc_82B90F88:
	// li r3,6
	ctx.r3.s64 = 6;
	// stb r31,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r31.u8);
loc_82B90F90:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830eb4d8
	ctx.lr = 0x82B90F98;
	sub_830EB4D8(ctx, base);
loc_82B90F98:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,7
	cr6.compare<uint32_t>(ctx.r30.u32, 7, xer);
	// blt cr6,0x82b90eb4
	if (cr6.lt) goto loc_82B90EB4;
loc_82B90FA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B90FB8"))) PPC_WEAK_FUNC(sub_82B90FB8);
PPC_FUNC_IMPL(__imp__sub_82B90FB8) {
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
	// blt cr6,0x82b90fe0
	if (cr6.lt) goto loc_82B90FE0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b90fe4
	goto loc_82B90FE4;
loc_82B90FE0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B90FE4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B91000;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b91018
	if (cr6.eq) goto loc_82B91018;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b90b50
	ctx.lr = 0x82B91014;
	sub_82B90B50(ctx, base);
	// b 0x82b9101c
	goto loc_82B9101C;
loc_82B91018:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B9101C:
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

__attribute__((alias("__imp__sub_82B91034"))) PPC_WEAK_FUNC(sub_82B91034);
PPC_FUNC_IMPL(__imp__sub_82B91034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91038"))) PPC_WEAK_FUNC(sub_82B91038);
PPC_FUNC_IMPL(__imp__sub_82B91038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B91040;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82B91054;
	sub_82D1ED60(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9105C;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,-26628
	ctx.r28.s64 = ctx.r11.s64 + -26628;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-88
	ctx.r4.s64 = ctx.r28.s64 + -88;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9107C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B91084;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-72
	ctx.r4.s64 = ctx.r28.s64 + -72;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B9109C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B910A4;
	sub_82D19A78(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-52
	ctx.r4.s64 = ctx.r28.s64 + -52;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B910BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B910C4;
	sub_82D19A78(ctx, base);
	// addi r4,r28,-40
	ctx.r4.s64 = ctx.r28.s64 + -40;
	// bl 0x82d2f098
	ctx.lr = 0x82B910CC;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b910e0
	if (cr6.eq) goto loc_82B910E0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B910E0;
	sub_82D2AEC8(ctx, base);
loc_82B910E0:
	// bl 0x831156e8
	ctx.lr = 0x82B910E4;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b91108
	if (cr6.eq) goto loc_82B91108;
	// bl 0x83115808
	ctx.lr = 0x82B910F8;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82b9110c
	if (!cr6.eq) goto loc_82B9110C;
loc_82B91108:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82B9110C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b91124
	if (!cr6.eq) goto loc_82B91124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82B91124;
	sub_82D198D0(ctx, base);
loc_82B91124:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9112C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B91144;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9115c
	if (cr6.eq) goto loc_82B9115C;
	// lis r4,6
	ctx.r4.s64 = 393216;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82d30340
	ctx.lr = 0x82B9115C;
	sub_82D30340(ctx, base);
loc_82B9115C:
	// bl 0x831156e8
	ctx.lr = 0x82B91160;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addis r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 65536;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r27,r27,24080
	ctx.r27.s64 = ctx.r27.s64 + 24080;
	// addi r24,r11,-26204
	ctx.r24.s64 = ctx.r11.s64 + -26204;
loc_82B91178:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d1c0c0
	ctx.lr = 0x82B91188;
	sub_82D1C0C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9129c
	if (cr6.eq) goto loc_82B9129C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B911B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b911c4
	if (cr6.eq) goto loc_82B911C4;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x82d29598
	ctx.lr = 0x82B911C4;
	sub_82D29598(ctx, base);
loc_82B911C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B911E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B911F4;
	sub_82D21408(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B9120C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9129c
	if (cr6.eq) goto loc_82B9129C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d4b8
	ctx.lr = 0x82B91220;
	sub_82D3D4B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3d548
	ctx.lr = 0x82B9122C;
	sub_82D3D548(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(ctx.r29.u32, 6, xer);
	// bgt cr6,0x82b9128c
	if (cr6.gt) goto loc_82B9128C;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b91260
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B91260;
	// bdzf 4*cr6+eq,0x82b91268
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B91268;
	// bdzf 4*cr6+eq,0x82b91270
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B91270;
	// bdzf 4*cr6+eq,0x82b91278
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B91278;
	// bdzf 4*cr6+eq,0x82b91280
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B91280;
	// bne cr6,0x82b91288
	if (!cr6.eq) goto loc_82B91288;
	// lbz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// b 0x82b9128c
	goto loc_82B9128C;
loc_82B91260:
	// lbz r6,1(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// b 0x82b9128c
	goto loc_82B9128C;
loc_82B91268:
	// lbz r6,2(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2);
	// b 0x82b9128c
	goto loc_82B9128C;
loc_82B91270:
	// lbz r6,3(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 3);
	// b 0x82b9128c
	goto loc_82B9128C;
loc_82B91278:
	// lbz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4);
	// b 0x82b9128c
	goto loc_82B9128C;
loc_82B91280:
	// lbz r6,5(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// b 0x82b9128c
	goto loc_82B9128C;
loc_82B91288:
	// lbz r6,6(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 6);
loc_82B9128C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3d3b0
	ctx.lr = 0x82B9129C;
	sub_82D3D3B0(ctx, base);
loc_82B9129C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,7
	cr6.compare<uint32_t>(ctx.r29.u32, 7, xer);
	// blt cr6,0x82b91178
	if (cr6.lt) goto loc_82B91178;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r30,7
	ctx.r30.s64 = 7;
	// addi r31,r11,-26232
	ctx.r31.s64 = ctx.r11.s64 + -26232;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// li r29,15
	ctx.r29.s64 = 15;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82B912C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stb r26,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r26.u8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x830f6558
	ctx.lr = 0x82B912E8;
	sub_830F6558(ctx, base);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b91304
	if (cr6.lt) goto loc_82B91304;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x82B91304;
	sub_825952B8(ctx, base);
loc_82B91304:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r26,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r26.u8);
	// bne 0x82b912c8
	if (!cr0.eq) goto loc_82B912C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82B9132C;
	sub_82D24C38(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b91358
	if (cr6.eq) goto loc_82B91358;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x830f6290
	ctx.lr = 0x82B91348;
	sub_830F6290(ctx, base);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B91358;
	sub_825952B8(ctx, base);
loc_82B91358:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B91364"))) PPC_WEAK_FUNC(sub_82B91364);
PPC_FUNC_IMPL(__imp__sub_82B91364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91368"))) PPC_WEAK_FUNC(sub_82B91368);
PPC_FUNC_IMPL(__imp__sub_82B91368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B91370;
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
	ctx.lr = 0x82B91384;
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
	ctx.lr = 0x82B9139C;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-25680
	ctx.r9.s64 = ctx.r11.s64 + -25680;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,15104(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15104);
	// bl 0x82d20b30
	ctx.lr = 0x82B913C4;
	sub_82D20B30(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-25864
	ctx.r4.s64 = ctx.r6.s64 + -25864;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82B913D8;
	sub_82D23390(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82B913DC;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x82B913E4;
	sub_8311D680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B913F0;
	sub_82D195D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B913FC"))) PPC_WEAK_FUNC(sub_82B913FC);
PPC_FUNC_IMPL(__imp__sub_82B913FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91400"))) PPC_WEAK_FUNC(sub_82B91400);
PPC_FUNC_IMPL(__imp__sub_82B91400) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B91410;
	sub_831156E8(ctx, base);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,37446
	ctx.r10.u64 = ctx.r10.u64 | 37446;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B91434"))) PPC_WEAK_FUNC(sub_82B91434);
PPC_FUNC_IMPL(__imp__sub_82B91434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91438"))) PPC_WEAK_FUNC(sub_82B91438);
PPC_FUNC_IMPL(__imp__sub_82B91438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B91440;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B9144C;
	sub_831156E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B91458;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B91460;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b91474
	if (!cr6.eq) goto loc_82B91474;
loc_82B91468:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B91474:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B9147C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b91468
	if (cr6.eq) goto loc_82B91468;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B91494;
	sub_82D2D510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b91468
	if (cr6.eq) goto loc_82B91468;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addis r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 65536;
	// addi r31,r11,-25908
	ctx.r31.s64 = ctx.r11.s64 + -25908;
	// addi r29,r29,24087
	ctx.r29.s64 = ctx.r29.s64 + 24087;
loc_82B914B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82dad040
	ctx.lr = 0x82B914C4;
	sub_82DAD040(ctx, base);
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, xer);
	// beq cr6,0x82b914e8
	if (cr6.eq) goto loc_82B914E8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// ble cr6,0x82b914b8
	if (!cr6.gt) goto loc_82B914B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B914E8:
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B914F8"))) PPC_WEAK_FUNC(sub_82B914F8);
PPC_FUNC_IMPL(__imp__sub_82B914F8) {
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
	ctx.lr = 0x82B9152C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b91544
	if (cr6.eq) goto loc_82B91544;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b91368
	ctx.lr = 0x82B91540;
	sub_82B91368(ctx, base);
	// b 0x82b91548
	goto loc_82B91548;
loc_82B91544:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B91548:
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

__attribute__((alias("__imp__sub_82B91560"))) PPC_WEAK_FUNC(sub_82B91560);
PPC_FUNC_IMPL(__imp__sub_82B91560) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-25680
	ctx.r9.s64 = ctx.r11.s64 + -25680;
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
	ctx.lr = 0x82B91598;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b915b0
	if (cr6.eq) goto loc_82B915B0;
	// bl 0x82416268
	ctx.lr = 0x82B915AC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B915B0:
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

__attribute__((alias("__imp__sub_82B915C8"))) PPC_WEAK_FUNC(sub_82B915C8);
PPC_FUNC_IMPL(__imp__sub_82B915C8) {
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
	// blt cr6,0x82b915f0
	if (cr6.lt) goto loc_82B915F0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b915f4
	goto loc_82B915F4;
loc_82B915F0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B915F4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B91610;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9162c
	if (cr6.eq) goto loc_82B9162C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b91368
	ctx.lr = 0x82B91624;
	sub_82B91368(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b91630
	if (!cr6.eq) goto loc_82B91630;
loc_82B9162C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B91630:
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

__attribute__((alias("__imp__sub_82B91648"))) PPC_WEAK_FUNC(sub_82B91648);
PPC_FUNC_IMPL(__imp__sub_82B91648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B91650;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B9165C;
	sub_831156E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B91668;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B91670;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b91934
	if (cr6.eq) goto loc_82B91934;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addis r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 65536;
	// addi r25,r25,24087
	ctx.r25.s64 = ctx.r25.s64 + 24087;
	// bl 0x82d19a78
	ctx.lr = 0x82B91690;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-25772
	ctx.r31.s64 = ctx.r11.s64 + -25772;
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B916B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82B916C0;
	sub_82D1ED60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B916C8;
	sub_82D19A78(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B916E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B916E8;
	sub_82D19A78(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B91700;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B91708;
	sub_82D19A78(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82d2f098
	ctx.lr = 0x82B91710;
	sub_82D2F098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9173c
	if (cr6.eq) goto loc_82B9173C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B9172C;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9173C;
	sub_82D2AEC8(ctx, base);
loc_82B9173C:
	// bl 0x831156e8
	ctx.lr = 0x82B91740;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b91764
	if (cr6.eq) goto loc_82B91764;
	// bl 0x83115808
	ctx.lr = 0x82B91754;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82b91768
	if (!cr6.eq) goto loc_82B91768;
loc_82B91764:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82B91768:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b91780
	if (!cr6.eq) goto loc_82B91780;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82B91780;
	sub_82D198D0(ctx, base);
loc_82B91780:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B91788;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B917A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b917b8
	if (cr6.eq) goto loc_82B917B8;
	// lis r4,49
	ctx.r4.s64 = 3211264;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,16
	ctx.r4.u64 = ctx.r4.u64 | 16;
	// bl 0x82d30340
	ctx.lr = 0x82B917B8;
	sub_82D30340(ctx, base);
loc_82B917B8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B917CC;
	sub_82D21408(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B917D8;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b918a4
	if (cr6.eq) goto loc_82B918A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B917FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r26,r30,100
	ctx.r26.s64 = ctx.r30.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B91810;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b918a4
	if (cr6.eq) goto loc_82B918A4;
	// addi r11,r31,-136
	ctx.r11.s64 = ctx.r31.s64 + -136;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_82B91828:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3d190
	ctx.lr = 0x82B91838;
	sub_82D3D190(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x82b91828
	if (!cr0.eq) goto loc_82B91828;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3d4b8
	ctx.lr = 0x82B9184C;
	sub_82D3D4B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3d548
	ctx.lr = 0x82B91858;
	sub_82D3D548(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// addi r11,r31,-136
	ctx.r11.s64 = ctx.r31.s64 + -136;
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x82d3d3b0
	ctx.lr = 0x82B91878;
	sub_82D3D3B0(ctx, base);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B91890;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b918a4
	if (cr6.eq) goto loc_82B918A4;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// ori r4,r4,20
	ctx.r4.u64 = ctx.r4.u64 | 20;
	// bl 0x82d29598
	ctx.lr = 0x82B918A4;
	sub_82D29598(ctx, base);
loc_82B918A4:
	// lis r11,206
	ctx.r11.s64 = 13500416;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// ori r9,r11,187
	ctx.r9.u64 = ctx.r11.u64 | 187;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r24,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r24.u8);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x830f6558
	ctx.lr = 0x82B918D8;
	sub_830F6558(ctx, base);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82b918f8
	if (cr6.lt) goto loc_82B918F8;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x82B918F8;
	sub_825952B8(ctx, base);
loc_82B918F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82B91908;
	sub_82D24C38(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b91934
	if (cr6.eq) goto loc_82B91934;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x830f6290
	ctx.lr = 0x82B91924;
	sub_830F6290(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B91934;
	sub_825952B8(ctx, base);
loc_82B91934:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B91940"))) PPC_WEAK_FUNC(sub_82B91940);
PPC_FUNC_IMPL(__imp__sub_82B91940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B91948;
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
	ctx.lr = 0x82B9195C;
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
	ctx.lr = 0x82B91974;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24824
	ctx.r9.s64 = ctx.r11.s64 + -24824;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,15236(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15236);
	// bl 0x82d20ae0
	ctx.lr = 0x82B9199C;
	sub_82D20AE0(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-24976
	ctx.r4.s64 = ctx.r6.s64 + -24976;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82B919B0;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B919BC"))) PPC_WEAK_FUNC(sub_82B919BC);
PPC_FUNC_IMPL(__imp__sub_82B919BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B919C0"))) PPC_WEAK_FUNC(sub_82B919C0);
PPC_FUNC_IMPL(__imp__sub_82B919C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B919C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B919D4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B919DC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b91a40
	if (cr6.eq) goto loc_82B91A40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B919EC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b91a40
	if (cr6.eq) goto loc_82B91A40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B91A04;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b91a40
	if (cr6.eq) goto loc_82B91A40;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-25072
	ctx.r31.s64 = ctx.r11.s64 + -25072;
loc_82B91A1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82dad040
	ctx.lr = 0x82B91A28;
	sub_82DAD040(ctx, base);
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, xer);
	// beq cr6,0x82b91a4c
	if (cr6.eq) goto loc_82B91A4C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// ble cr6,0x82b91a1c
	if (!cr6.gt) goto loc_82B91A1C;
loc_82B91A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B91A4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B91A58"))) PPC_WEAK_FUNC(sub_82B91A58);
PPC_FUNC_IMPL(__imp__sub_82B91A58) {
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
	ctx.lr = 0x82B91A8C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b91aa4
	if (cr6.eq) goto loc_82B91AA4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b91940
	ctx.lr = 0x82B91AA0;
	sub_82B91940(ctx, base);
	// b 0x82b91aa8
	goto loc_82B91AA8;
loc_82B91AA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B91AA8:
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

__attribute__((alias("__imp__sub_82B91AC0"))) PPC_WEAK_FUNC(sub_82B91AC0);
PPC_FUNC_IMPL(__imp__sub_82B91AC0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24824
	ctx.r9.s64 = ctx.r11.s64 + -24824;
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
	ctx.lr = 0x82B91AF8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b91b10
	if (cr6.eq) goto loc_82B91B10;
	// bl 0x82416268
	ctx.lr = 0x82B91B0C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B91B10:
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

__attribute__((alias("__imp__sub_82B91B28"))) PPC_WEAK_FUNC(sub_82B91B28);
PPC_FUNC_IMPL(__imp__sub_82B91B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B91B30;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce774
	ctx.lr = 0x82B91B38;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B91B4C;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b91ccc
	if (cr6.eq) goto loc_82B91CCC;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// addis r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 65536;
	// addi r28,r28,24088
	ctx.r28.s64 = ctx.r28.s64 + 24088;
	// bne cr6,0x82b91b78
	if (!cr6.eq) goto loc_82B91B78;
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82b91b94
	goto loc_82B91B94;
loc_82B91B78:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b919c0
	ctx.lr = 0x82B91B84;
	sub_82B919C0(ctx, base);
	// addi r10,r3,-6
	ctx.r10.s64 = ctx.r3.s64 + -6;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82B91B94:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r10,-26260
	ctx.r10.s64 = ctx.r10.s64 + -26260;
	// addi r11,r11,-24536
	ctx.r11.s64 = ctx.r11.s64 + -24536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f29,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f31,f12,f30,f29
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f29.f64));
	// bl 0x82b919c0
	ctx.lr = 0x82B91BC4;
	sub_82B919C0(ctx, base);
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
	// li r4,1
	ctx.r4.s64 = 1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f11,f12,f30,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmuls f28,f11,f31
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// bl 0x82b919c0
	ctx.lr = 0x82B91BF0;
	sub_82B919C0(ctx, base);
	// addi r9,r3,-6
	ctx.r9.s64 = ctx.r3.s64 + -6;
	// li r4,2
	ctx.r4.s64 = 2;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f7,f8,f30,f29
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmuls f27,f7,f31
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// bl 0x82b919c0
	ctx.lr = 0x82B91C1C;
	sub_82B919C0(ctx, base);
	// addi r7,r3,-6
	ctx.r7.s64 = ctx.r3.s64 + -6;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f6,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmadds f3,f4,f30,f29
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmuls f0,f3,f31
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// blt cr6,0x82b91c90
	if (cr6.lt) goto loc_82B91C90;
	// beq cr6,0x82b91c70
	if (cr6.eq) goto loc_82B91C70;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bge cr6,0x82b91cac
	if (!cr6.lt) goto loc_82B91CAC;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f11,f12,f30,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// b 0x82b91cac
	goto loc_82B91CAC;
loc_82B91C70:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f10,f11,f30,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmuls f27,f10,f31
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// b 0x82b91cac
	goto loc_82B91CAC;
loc_82B91C90:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f10,f11,f30,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmuls f28,f10,f31
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
loc_82B91CAC:
	// lfs f1,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lhz r4,2(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// lhz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// fmuls f5,f0,f31
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f4,f27,f31
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// fmuls f3,f28,f31
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// bl 0x833ca750
	ctx.lr = 0x82B91CCC;
	sub_833CA750(ctx, base);
loc_82B91CCC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7c0
	ctx.lr = 0x82B91CD8;
	__restfpr_27(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B91CDC"))) PPC_WEAK_FUNC(sub_82B91CDC);
PPC_FUNC_IMPL(__imp__sub_82B91CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91CE0"))) PPC_WEAK_FUNC(sub_82B91CE0);
PPC_FUNC_IMPL(__imp__sub_82B91CE0) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce774
	ctx.lr = 0x82B91CF8;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B91D04;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b91e0c
	if (cr6.eq) goto loc_82B91E0C;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// addi r30,r30,24088
	ctx.r30.s64 = ctx.r30.s64 + 24088;
	// bl 0x82b919c0
	ctx.lr = 0x82B91D24;
	sub_82B919C0(ctx, base);
	// addi r10,r3,-6
	ctx.r10.s64 = ctx.r3.s64 + -6;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r4,0
	ctx.r4.s64 = 0;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f31,-24536(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24536);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmadds f29,f12,f31,f30
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f30.f64));
	// bl 0x82b919c0
	ctx.lr = 0x82B91D5C;
	sub_82B919C0(ctx, base);
	// addi r6,r3,-6
	ctx.r6.s64 = ctx.r3.s64 + -6;
	// li r4,1
	ctx.r4.s64 = 1;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f9,f31,f30
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fmuls f28,f8,f29
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// bl 0x82b919c0
	ctx.lr = 0x82B91D88;
	sub_82B919C0(ctx, base);
	// addi r3,r3,-6
	ctx.r3.s64 = ctx.r3.s64 + -6;
	// li r4,2
	ctx.r4.s64 = 2;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f7,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmadds f4,f5,f31,f30
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fmuls f27,f4,f29
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// bl 0x82b919c0
	ctx.lr = 0x82B91DB4;
	sub_82B919C0(ctx, base);
	// addi r10,r3,-6
	ctx.r10.s64 = ctx.r3.s64 + -6;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lhz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// fmuls f4,f27,f29
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f3
	ctx.f0.f64 = double(ctx.f3.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fmuls f3,f28,f29
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// fmadds f12,f13,f31,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f5,f11,f29
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// bl 0x833ca750
	ctx.lr = 0x82B91DF4;
	sub_833CA750(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B91DF8;
	sub_831156E8(ctx, base);
	// lis r8,5
	ctx.r8.s64 = 327680;
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r8,37446
	ctx.r5.u64 = ctx.r8.u64 | 37446;
	// stbx r6,r7,r5
	PPC_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r6.u8);
loc_82B91E0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7c0
	ctx.lr = 0x82B91E18;
	__restfpr_27(ctx, base);
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

__attribute__((alias("__imp__sub_82B91E2C"))) PPC_WEAK_FUNC(sub_82B91E2C);
PPC_FUNC_IMPL(__imp__sub_82B91E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B91E30"))) PPC_WEAK_FUNC(sub_82B91E30);
PPC_FUNC_IMPL(__imp__sub_82B91E30) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B91E4C;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b91ea4
	if (cr6.eq) goto loc_82B91EA4;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// addi r30,r30,24096
	ctx.r30.s64 = ctx.r30.s64 + 24096;
	// bl 0x82b919c0
	ctx.lr = 0x82B91E6C;
	sub_82B919C0(ctx, base);
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b919c0
	ctx.lr = 0x82B91E7C;
	sub_82B919C0(ctx, base);
	// stb r3,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r3.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b919c0
	ctx.lr = 0x82B91E8C;
	sub_82B919C0(ctx, base);
	// stb r3,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r3.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b919c0
	ctx.lr = 0x82B91E9C;
	sub_82B919C0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r3,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r3.u8);
loc_82B91EA4:
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

__attribute__((alias("__imp__sub_82B91EC0"))) PPC_WEAK_FUNC(sub_82B91EC0);
PPC_FUNC_IMPL(__imp__sub_82B91EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B91EC8;
	__savegprlr_20(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B91ED4;
	sub_831156E8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b92478
	if (cr6.eq) goto loc_82B92478;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r26,r1,304
	ctx.r26.s64 = ctx.r1.s64 + 304;
	// addi r27,r11,-25088
	ctx.r27.s64 = ctx.r11.s64 + -25088;
	// li r24,4
	ctx.r24.s64 = 4;
	// addi r11,r27,-32
	ctx.r11.s64 = ctx.r27.s64 + -32;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r25,r11,4
	ctx.r25.s64 = ctx.r11.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r21,2
	ctx.r21.s64 = 2;
loc_82B91F08:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// addi r4,r27,-254
	ctx.r4.s64 = ctx.r27.s64 + -254;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x82B91F24;
	sub_8259CC28(ctx, base);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r4,r27,-253
	ctx.r4.s64 = ctx.r27.s64 + -253;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cc28
	ctx.lr = 0x82B91F40;
	sub_8259CC28(ctx, base);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r4,r27,-222
	ctx.r4.s64 = ctx.r27.s64 + -222;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cc28
	ctx.lr = 0x82B91F5C;
	sub_8259CC28(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,-4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// bl 0x82d04220
	ctx.lr = 0x82B91F68;
	sub_82D04220(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82d04220
	ctx.lr = 0x82B91F74;
	sub_82D04220(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b91f88
	if (!cr6.lt) goto loc_82B91F88;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
loc_82B91F88:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b91f9c
	if (!cr6.lt) goto loc_82B91F9C;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_82B91F9C:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,276
	ctx.r4.u64 = ctx.r4.u64 | 276;
	// bl 0x82d042a8
	ctx.lr = 0x82B91FAC;
	sub_82D042A8(ctx, base);
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// addi r4,r27,128
	ctx.r4.s64 = ctx.r27.s64 + 128;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8259cc28
	ctx.lr = 0x82B91FC8;
	sub_8259CC28(ctx, base);
	// stw r30,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r30.u32);
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r31.u32);
	// addi r4,r27,132
	ctx.r4.s64 = ctx.r27.s64 + 132;
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,332
	ctx.r3.s64 = ctx.r1.s64 + 332;
	// bl 0x8259cc28
	ctx.lr = 0x82B91FE4;
	sub_8259CC28(ctx, base);
	// stw r30,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r30.u32);
	// stw r31,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r31.u32);
	// addi r4,r27,136
	ctx.r4.s64 = ctx.r27.s64 + 136;
	// stb r31,360(r1)
	PPC_STORE_U8(ctx.r1.u32 + 360, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x8259cc28
	ctx.lr = 0x82B92000;
	sub_8259CC28(ctx, base);
	// stw r30,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r30.u32);
	// stw r31,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r31.u32);
	// addi r4,r27,140
	ctx.r4.s64 = ctx.r27.s64 + 140;
	// stb r31,388(r1)
	PPC_STORE_U8(ctx.r1.u32 + 388, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// bl 0x8259cc28
	ctx.lr = 0x82B9201C;
	sub_8259CC28(ctx, base);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r4,r27,144
	ctx.r4.s64 = ctx.r27.s64 + 144;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82B92038;
	sub_8259CC28(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1da8
	ctx.lr = 0x82B9204C;
	sub_825A1DA8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B92054;
	sub_82D19A78(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b9206c
	if (!cr6.lt) goto loc_82B9206C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82B9206C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9207C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9210c
	if (cr6.eq) goto loc_82B9210C;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b9209c
	if (!cr6.lt) goto loc_82B9209C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82B9209C:
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
loc_82B920AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b920ac
	if (!cr6.eq) goto loc_82B920AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B920D0;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B920E4;
	sub_82D291E0(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b92100
	if (cr6.lt) goto loc_82B92100;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82B92100;
	sub_825952B8(ctx, base);
loc_82B92100:
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
loc_82B9210C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b92128
	if (cr6.lt) goto loc_82B92128;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82B92128;
	sub_825952B8(ctx, base);
loc_82B92128:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r29,r1,416
	ctx.r29.s64 = ctx.r1.s64 + 416;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_82B9213C:
	// addi r29,r29,-28
	ctx.r29.s64 = ctx.r29.s64 + -28;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b9215c
	if (cr6.lt) goto loc_82B9215C;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B9215C;
	sub_825952B8(ctx, base);
loc_82B9215C:
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// bge 0x82b9213c
	if (!cr0.lt) goto loc_82B9213C;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b9218c
	if (cr6.lt) goto loc_82B9218C;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82B9218C;
	sub_825952B8(ctx, base);
loc_82B9218C:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// blt cr6,0x82b921b4
	if (cr6.lt) goto loc_82B921B4;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82B921B4;
	sub_825952B8(ctx, base);
loc_82B921B4:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x82b921dc
	if (cr6.lt) goto loc_82B921DC;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82B921DC;
	sub_825952B8(ctx, base);
loc_82B921DC:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r26,r26,28
	ctx.r26.s64 = ctx.r26.s64 + 28;
	// bne 0x82b91f08
	if (!cr0.eq) goto loc_82B91F08;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B92200;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B92208;
	sub_82D33DB0(ctx, base);
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// addi r4,r27,-221
	ctx.r4.s64 = ctx.r27.s64 + -221;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8259cc28
	ctx.lr = 0x82B92228;
	sub_8259CC28(ctx, base);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
loc_82B9222C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B92240;
	sub_82D21408(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9224C;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b922dc
	if (cr6.eq) goto loc_82B922DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,160
	ctx.r4.s64 = ctx.r27.s64 + 160;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B92270;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r26,r30,100
	ctx.r26.s64 = ctx.r30.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B92284;
	sub_82D2D510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b922dc
	if (cr6.eq) goto loc_82B922DC;
	// addi r11,r27,16
	ctx.r11.s64 = ctx.r27.s64 + 16;
	// li r30,12
	ctx.r30.s64 = 12;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82B9229C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3d190
	ctx.lr = 0x82B922AC;
	sub_82D3D190(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x82b9229c
	if (!cr0.eq) goto loc_82B9229C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r27,172
	ctx.r4.s64 = ctx.r27.s64 + 172;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B922CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b922dc
	if (cr6.eq) goto loc_82B922DC;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82B922DC;
	sub_82D29598(ctx, base);
loc_82B922DC:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r11,r27,16
	ctx.r11.s64 = ctx.r27.s64 + 16;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, xer);
	// blt cr6,0x82b9222c
	if (cr6.lt) goto loc_82B9222C;
	// lwz r11,52(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// addi r31,r31,24096
	ctx.r31.s64 = ctx.r31.s64 + 24096;
	// lbz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82d19a78
	ctx.lr = 0x82B92308;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B92310;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B92318;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b92354
	if (cr6.eq) goto loc_82B92354;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B92330;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b92354
	if (cr6.eq) goto loc_82B92354;
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,-6
	ctx.r5.s64 = -6;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d3d3b0
	ctx.lr = 0x82B92354;
	sub_82D3D3B0(ctx, base);
loc_82B92354:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lbz r30,1(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// bl 0x82d19a78
	ctx.lr = 0x82B92360;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B92368;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82B92370;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b923ac
	if (cr6.eq) goto loc_82B923AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B92388;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b923ac
	if (cr6.eq) goto loc_82B923AC;
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,-6
	ctx.r5.s64 = -6;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d3d3b0
	ctx.lr = 0x82B923AC;
	sub_82D3D3B0(ctx, base);
loc_82B923AC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lbz r30,2(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// bl 0x82d19a78
	ctx.lr = 0x82B923B8;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B923C0;
	sub_82D33DB0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d33db0
	ctx.lr = 0x82B923C8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b92404
	if (cr6.eq) goto loc_82B92404;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B923E0;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b92404
	if (cr6.eq) goto loc_82B92404;
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,-6
	ctx.r5.s64 = -6;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d3d3b0
	ctx.lr = 0x82B92404;
	sub_82D3D3B0(ctx, base);
loc_82B92404:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lbz r31,3(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// bl 0x82d19a78
	ctx.lr = 0x82B92410;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B92418;
	sub_82D33DB0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d33db0
	ctx.lr = 0x82B92420;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9245c
	if (cr6.eq) goto loc_82B9245C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B92438;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9245c
	if (cr6.eq) goto loc_82B9245C;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,-6
	ctx.r5.s64 = -6;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d3d3b0
	ctx.lr = 0x82B9245C;
	sub_82D3D3B0(ctx, base);
loc_82B9245C:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b92478
	if (cr6.lt) goto loc_82B92478;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82B92478;
	sub_825952B8(ctx, base);
loc_82B92478:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B92484"))) PPC_WEAK_FUNC(sub_82B92484);
PPC_FUNC_IMPL(__imp__sub_82B92484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B92488"))) PPC_WEAK_FUNC(sub_82B92488);
PPC_FUNC_IMPL(__imp__sub_82B92488) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B924A0;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b924c0
	if (cr6.eq) goto loc_82B924C0;
	// bl 0x83115808
	ctx.lr = 0x82B924B0;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82b924c4
	if (!cr6.eq) goto loc_82B924C4;
loc_82B924C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B924C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b924dc
	if (!cr6.eq) goto loc_82B924DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82B924DC;
	sub_82D198D0(ctx, base);
loc_82B924DC:
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

__attribute__((alias("__imp__sub_82B924F4"))) PPC_WEAK_FUNC(sub_82B924F4);
PPC_FUNC_IMPL(__imp__sub_82B924F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B924F8"))) PPC_WEAK_FUNC(sub_82B924F8);
PPC_FUNC_IMPL(__imp__sub_82B924F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B92500;
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
	ctx.lr = 0x82B92524;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b92578
	if (cr6.eq) goto loc_82B92578;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a63868
	ctx.lr = 0x82B9253C;
	sub_82A63868(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24176
	ctx.r9.s64 = ctx.r11.s64 + -24176;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x8311e3d0
	ctx.lr = 0x82B92558;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x82B92560;
	sub_8311D680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B9256C;
	sub_82D195D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B92578:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B92584"))) PPC_WEAK_FUNC(sub_82B92584);
PPC_FUNC_IMPL(__imp__sub_82B92584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B92588"))) PPC_WEAK_FUNC(sub_82B92588);
PPC_FUNC_IMPL(__imp__sub_82B92588) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24176
	ctx.r9.s64 = ctx.r11.s64 + -24176;
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
	// bl 0x82a637b0
	ctx.lr = 0x82B925C0;
	sub_82A637B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b925d8
	if (cr6.eq) goto loc_82B925D8;
	// bl 0x82416268
	ctx.lr = 0x82B925D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B925D8:
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

__attribute__((alias("__imp__sub_82B925F0"))) PPC_WEAK_FUNC(sub_82B925F0);
PPC_FUNC_IMPL(__imp__sub_82B925F0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x82B9260C;
	sub_83102DB0(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B92610;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B92614;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b92674
	if (cr6.eq) goto loc_82B92674;
	// bl 0x831156e8
	ctx.lr = 0x82B92624;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r31,r10,6
	ctx.r31.s64 = ctx.r10.s64 + 393216;
	// addi r31,r31,-30316
	ctx.r31.s64 = ctx.r31.s64 + -30316;
	// bl 0x82d19638
	ctx.lr = 0x82B9263C;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r31,45(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 45);
	// bl 0x831156e8
	ctx.lr = 0x82B9264C;
	sub_831156E8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b8d0
	ctx.lr = 0x82B92658;
	sub_8312B8D0(ctx, base);
	// bl 0x82d47a58
	ctx.lr = 0x82B9265C;
	sub_82D47A58(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r3,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82d47b08
	ctx.lr = 0x82B92670;
	sub_82D47B08(ctx, base);
	// bl 0x82d476f0
	ctx.lr = 0x82B92674;
	sub_82D476F0(ctx, base);
loc_82B92674:
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

__attribute__((alias("__imp__sub_82B9268C"))) PPC_WEAK_FUNC(sub_82B9268C);
PPC_FUNC_IMPL(__imp__sub_82B9268C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B92690"))) PPC_WEAK_FUNC(sub_82B92690);
PPC_FUNC_IMPL(__imp__sub_82B92690) {
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
	// bl 0x830ff290
	ctx.lr = 0x82B926A0;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B926A4;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b926b8
	if (cr6.eq) goto loc_82B926B8;
	// bl 0x82d47830
	ctx.lr = 0x82B926B4;
	sub_82D47830(ctx, base);
	// bl 0x82d47978
	ctx.lr = 0x82B926B8;
	sub_82D47978(ctx, base);
loc_82B926B8:
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

__attribute__((alias("__imp__sub_82B926CC"))) PPC_WEAK_FUNC(sub_82B926CC);
PPC_FUNC_IMPL(__imp__sub_82B926CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B926D0"))) PPC_WEAK_FUNC(sub_82B926D0);
PPC_FUNC_IMPL(__imp__sub_82B926D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B926D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B926F8;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// addi r9,r11,-22832
	ctx.r9.s64 = ctx.r11.s64 + -22832;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stb r30,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r30.u8);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// addi r29,r6,15496
	ctx.r29.s64 = ctx.r6.s64 + 15496;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// lwz r4,15496(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 15496);
	// bl 0x82d20ae0
	ctx.lr = 0x82B92750;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82B9275C;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82d23390
	ctx.lr = 0x82B9276C;
	sub_82D23390(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r10,r31,132
	ctx.r10.s64 = ctx.r31.s64 + 132;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82B92778:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stbx r11,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bdnz 0x82b92778
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B92778;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B92798;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B927A8;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B927B8;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B927C4"))) PPC_WEAK_FUNC(sub_82B927C4);
PPC_FUNC_IMPL(__imp__sub_82B927C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B927C8"))) PPC_WEAK_FUNC(sub_82B927C8);
PPC_FUNC_IMPL(__imp__sub_82B927C8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22832
	ctx.r9.s64 = ctx.r11.s64 + -22832;
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
	ctx.lr = 0x82B92800;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b92818
	if (cr6.eq) goto loc_82B92818;
	// bl 0x82416268
	ctx.lr = 0x82B92814;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B92818:
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

__attribute__((alias("__imp__sub_82B92830"))) PPC_WEAK_FUNC(sub_82B92830);
PPC_FUNC_IMPL(__imp__sub_82B92830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// bl 0x82d19a68
	ctx.lr = 0x82B92850;
	sub_82D19A68(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-23236
	ctx.r4.s64 = ctx.r10.s64 + -23236;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B9286C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19720
	ctx.lr = 0x82B92878;
	sub_82D19720(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B92888;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_82B9289C"))) PPC_WEAK_FUNC(sub_82B9289C);
PPC_FUNC_IMPL(__imp__sub_82B9289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B928A0"))) PPC_WEAK_FUNC(sub_82B928A0);
PPC_FUNC_IMPL(__imp__sub_82B928A0) {
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
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r3,96
	ctx.r9.s64 = ctx.r3.s64 + 96;
	// addi r8,r11,21716
	ctx.r8.s64 = ctx.r11.s64 + 21716;
	// ori r7,r10,20480
	ctx.r7.u64 = ctx.r10.u64 | 20480;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// bl 0x83103068
	ctx.lr = 0x82B928DC;
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

__attribute__((alias("__imp__sub_82B928EC"))) PPC_WEAK_FUNC(sub_82B928EC);
PPC_FUNC_IMPL(__imp__sub_82B928EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B928F0"))) PPC_WEAK_FUNC(sub_82B928F0);
PPC_FUNC_IMPL(__imp__sub_82B928F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B928F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B92904;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B9290C;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r30,r11,-22980
	ctx.r30.s64 = ctx.r11.s64 + -22980;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B92930;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82b9297c
	if (cr6.lt) goto loc_82B9297C;
	// bne cr6,0x82b929a0
	if (!cr6.eq) goto loc_82B929A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B92964;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
	// bl 0x82d29598
	ctx.lr = 0x82B92974;
	sub_82D29598(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B9297C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B92998;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,35
	ctx.r4.s64 = 2293760;
	// ori r4,r4,137
	ctx.r4.u64 = ctx.r4.u64 | 137;
loc_82B929A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d29598
	ctx.lr = 0x82B929A8;
	sub_82D29598(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B929B0"))) PPC_WEAK_FUNC(sub_82B929B0);
PPC_FUNC_IMPL(__imp__sub_82B929B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B929B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B929C4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B929CC;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B929D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B929E0;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B929F0;
	sub_82D2D510(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B929FC;
	sub_82D2AEC8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82b929d4
	if (cr6.lt) goto loc_82B929D4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B92A10"))) PPC_WEAK_FUNC(sub_82B92A10);
PPC_FUNC_IMPL(__imp__sub_82B92A10) {
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
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b92a60
	if (!cr6.eq) goto loc_82B92A60;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b92a3c
	if (!cr6.eq) goto loc_82B92A3C;
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// b 0x82b92a48
	goto loc_82B92A48;
loc_82B92A3C:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82b92a4c
	if (!cr6.eq) goto loc_82B92A4C;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
loc_82B92A48:
	// bl 0x82b92830
	ctx.lr = 0x82B92A4C;
	sub_82B92830(ctx, base);
loc_82B92A4C:
	// bl 0x831021a0
	ctx.lr = 0x82B92A50;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,46
	ctx.r4.u64 = ctx.r4.u64 | 46;
	// bl 0x83102a08
	ctx.lr = 0x82B92A60;
	sub_83102A08(ctx, base);
loc_82B92A60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B92A70"))) PPC_WEAK_FUNC(sub_82B92A70);
PPC_FUNC_IMPL(__imp__sub_82B92A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B92A78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b92b30
	if (!cr6.eq) goto loc_82B92B30;
	// bl 0x82d19a68
	ctx.lr = 0x82B92A90;
	sub_82D19A68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82B92AA0;
	sub_82D2B608(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B92AA8;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-23172
	ctx.r11.s64 = ctx.r11.s64 + -23172;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B92AC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r7,264
	ctx.r7.s64 = 17301504;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r8,21716
	ctx.r6.s64 = ctx.r8.s64 + 21716;
	// ori r5,r7,20481
	ctx.r5.u64 = ctx.r7.u64 | 20481;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// bl 0x82d19720
	ctx.lr = 0x82B92AFC;
	sub_82D19720(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B92B0C;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B92B1C;
	sub_82D19788(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82B92B28;
	sub_83103068(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B92B30:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b92cf4
	if (!cr6.eq) goto loc_82B92CF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82B92B40;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82b92c04
	if (!cr6.eq) goto loc_82B92C04;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B92B4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B92B54;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B92B5C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b92b80
	if (cr6.eq) goto loc_82B92B80;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82b92b7c
	if (cr6.eq) goto loc_82B92B7C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82B92B7C:
	// bl 0x82d2b608
	ctx.lr = 0x82B92B80;
	sub_82D2B608(ctx, base);
loc_82B92B80:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82b92b4c
	if (cr6.lt) goto loc_82B92B4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B92B94;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-23172
	ctx.r4.s64 = ctx.r11.s64 + -23172;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B92BB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b929b0
	ctx.lr = 0x82B92BBC;
	sub_82B929B0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B92BCC;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B92BDC;
	sub_82D19788(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82B92BFC;
	sub_82D1EBF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B92C04:
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b92cf4
	if (cr6.eq) goto loc_82B92CF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82B92C1C;
	sub_82D19A88(ctx, base);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B92C28;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82B92C38;
	sub_82D2B608(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82b92c88
	if (!cr6.eq) goto loc_82B92C88;
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x82b92cac
	if (!cr6.lt) goto loc_82B92CAC;
loc_82B92C58:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B92C64;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82B92C74;
	sub_82D2B608(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b92c58
	if (cr6.lt) goto loc_82B92C58;
	// b 0x82b92cac
	goto loc_82B92CAC;
loc_82B92C88:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b92cac
	if (cr6.lt) goto loc_82B92CAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B92C9C;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82B92CAC;
	sub_82D2B608(ctx, base);
loc_82B92CAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B92CCC;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b92ce4
	if (cr6.eq) goto loc_82B92CE4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82B92CE4;
	sub_82D2B608(ctx, base);
loc_82B92CE4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B92CF4;
	sub_82D19788(ctx, base);
loc_82B92CF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B92CFC"))) PPC_WEAK_FUNC(sub_82B92CFC);
PPC_FUNC_IMPL(__imp__sub_82B92CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B92D00"))) PPC_WEAK_FUNC(sub_82B92D00);
PPC_FUNC_IMPL(__imp__sub_82B92D00) {
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
	// bl 0x82d19a68
	ctx.lr = 0x82B92D18;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-23160
	ctx.r4.s64 = ctx.r11.s64 + -23160;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B92D34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b92d84
	if (cr6.eq) goto loc_82B92D84;
	// bl 0x82d2fe58
	ctx.lr = 0x82B92D40;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b92d84
	if (cr6.eq) goto loc_82B92D84;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d908
	ctx.lr = 0x82B92D50;
	sub_82D3D908(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b92d6c
	if (!cr6.gt) goto loc_82B92D6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b92d78
	goto loc_82B92D78;
loc_82B92D6C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82b92d78
	if (!cr6.lt) goto loc_82B92D78;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B92D78:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b928f0
	ctx.lr = 0x82B92D84;
	sub_82B928F0(ctx, base);
loc_82B92D84:
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

__attribute__((alias("__imp__sub_82B92D98"))) PPC_WEAK_FUNC(sub_82B92D98);
PPC_FUNC_IMPL(__imp__sub_82B92D98) {
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
	// bl 0x82d19a68
	ctx.lr = 0x82B92DB0;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-23148
	ctx.r4.s64 = ctx.r11.s64 + -23148;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B92DCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d2fe58
	ctx.lr = 0x82B92DD0;
	sub_82D2FE58(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d8a8
	ctx.lr = 0x82B92DD8;
	sub_82D3D8A8(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b92df4
	if (!cr6.gt) goto loc_82B92DF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b92e00
	goto loc_82B92E00;
loc_82B92DF4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82b92e00
	if (!cr6.lt) goto loc_82B92E00;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B92E00:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b928f0
	ctx.lr = 0x82B92E0C;
	sub_82B928F0(ctx, base);
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

__attribute__((alias("__imp__sub_82B92E20"))) PPC_WEAK_FUNC(sub_82B92E20);
PPC_FUNC_IMPL(__imp__sub_82B92E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B92E28;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 132);
	// bl 0x831156e8
	ctx.lr = 0x82B92E40;
	sub_831156E8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addis r3,r9,5
	ctx.r3.s64 = ctx.r9.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123ba8
	ctx.lr = 0x82B92E60;
	sub_83123BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82B92E70;
	sub_831CE980(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8314b3a8
	ctx.lr = 0x82B92E7C;
	sub_8314B3A8(ctx, base);
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 + 100;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r7,-22952
	ctx.r4.s64 = ctx.r7.s64 + -22952;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B92EA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r4,r31,56
	ctx.r4.u64 = ctx.r31.u64 & 0xFF;
	// bl 0x82d45d88
	ctx.lr = 0x82B92EA8;
	sub_82D45D88(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B92EB0"))) PPC_WEAK_FUNC(sub_82B92EB0);
PPC_FUNC_IMPL(__imp__sub_82B92EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B92EB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r30,r5,r3
	ctx.r30.u64 = ctx.r5.u64 + ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r30,132
	ctx.r11.s64 = ctx.r30.s64 + 132;
	// lbz r28,132(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 132);
	// bl 0x831156e8
	ctx.lr = 0x82B92ED4;
	sub_831156E8(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addis r3,r10,5
	ctx.r3.s64 = ctx.r10.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123ba8
	ctx.lr = 0x82B92EF4;
	sub_83123BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82B92F04;
	sub_831CE980(ctx, base);
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// addi r4,r8,-22936
	ctx.r4.s64 = ctx.r8.s64 + -22936;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B92F20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-31763
	ctx.r6.s64 = -2081619968;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-3564(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82B92F34;
	sub_82A0C738(ctx, base);
	// lbz r30,132(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 132);
	// bl 0x831156e8
	ctx.lr = 0x82B92F3C;
	sub_831156E8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b810
	ctx.lr = 0x82B92F4C;
	sub_8312B810(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82b92f6c
	if (cr6.eq) goto loc_82B92F6C;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d4ba30
	ctx.lr = 0x82B92F64;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B92F6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r10,24,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// bl 0x83120738
	ctx.lr = 0x82B92F8C;
	sub_83120738(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82b93080
	if (cr6.gt) goto loc_82B93080;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b93074
	if (cr6.eq) goto loc_82B93074;
	// bdz 0x82b93044
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B93044;
	// bdz 0x82b93014
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B93014;
	// bdz 0x82b92fe4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B92FE4;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b92fd4
	if (cr6.eq) goto loc_82B92FD4;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82d4ba30
	ctx.lr = 0x82B92FCC;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B92FD4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d4ba30
	ctx.lr = 0x82B92FDC;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B92FE4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b93004
	if (cr6.eq) goto loc_82B93004;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82d4ba30
	ctx.lr = 0x82B92FFC;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B93004:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d4ba30
	ctx.lr = 0x82B9300C;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B93014:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b93034
	if (cr6.eq) goto loc_82B93034;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82d4ba30
	ctx.lr = 0x82B9302C;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B93034:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4ba30
	ctx.lr = 0x82B9303C;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B93044:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b93064
	if (cr6.eq) goto loc_82B93064;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82d4ba30
	ctx.lr = 0x82B9305C;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B93064:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d4ba30
	ctx.lr = 0x82B9306C;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B93074:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d4ba30
	ctx.lr = 0x82B93080;
	sub_82D4BA30(ctx, base);
loc_82B93080:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B93088"))) PPC_WEAK_FUNC(sub_82B93088);
PPC_FUNC_IMPL(__imp__sub_82B93088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B93090;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,96(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,292(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c738
	ctx.lr = 0x82B930B4;
	sub_82A0C738(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r4,132(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 132);
	// bl 0x82a163f0
	ctx.lr = 0x82B930C0;
	sub_82A163F0(ctx, base);
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mulli r11,r8,11
	ctx.r11.s64 = ctx.r8.s64 * 11;
	// add. r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x82b930dc
	if (cr0.lt) goto loc_82B930DC;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82b930e0
	if (cr6.lt) goto loc_82B930E0;
loc_82B930DC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B930E0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b93100
	if (cr6.eq) goto loc_82B93100;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82b93104
	goto loc_82B93104;
loc_82B93100:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B93104:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b93124
	if (!cr6.eq) goto loc_82B93124;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B93124;
	sub_82D2B608(ctx, base);
loc_82B93124:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b92e20
	ctx.lr = 0x82B93134;
	sub_82B92E20(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b92eb0
	ctx.lr = 0x82B93144;
	sub_82B92EB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9314C"))) PPC_WEAK_FUNC(sub_82B9314C);
PPC_FUNC_IMPL(__imp__sub_82B9314C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B93150"))) PPC_WEAK_FUNC(sub_82B93150);
PPC_FUNC_IMPL(__imp__sub_82B93150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82B93158;
	__savegprlr_17(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B9316C;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B93184;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r9,r11,-22544
	ctx.r9.s64 = ctx.r11.s64 + -22544;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r20,104(r22)
	PPC_STORE_U32(ctx.r22.u32 + 104, ctx.r20.u32);
	// stw r9,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// stw r8,72(r22)
	PPC_STORE_U32(ctx.r22.u32 + 72, ctx.r8.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r20,112(r22)
	PPC_STORE_U32(ctx.r22.u32 + 112, ctx.r20.u32);
	// addi r31,r7,15496
	ctx.r31.s64 = ctx.r7.s64 + 15496;
	// stw r20,116(r22)
	PPC_STORE_U32(ctx.r22.u32 + 116, ctx.r20.u32);
	// stw r20,120(r22)
	PPC_STORE_U32(ctx.r22.u32 + 120, ctx.r20.u32);
	// stw r20,124(r22)
	PPC_STORE_U32(ctx.r22.u32 + 124, ctx.r20.u32);
	// stw r20,128(r22)
	PPC_STORE_U32(ctx.r22.u32 + 128, ctx.r20.u32);
	// stw r20,132(r22)
	PPC_STORE_U32(ctx.r22.u32 + 132, ctx.r20.u32);
	// stw r20,136(r22)
	PPC_STORE_U32(ctx.r22.u32 + 136, ctx.r20.u32);
	// stw r20,140(r22)
	PPC_STORE_U32(ctx.r22.u32 + 140, ctx.r20.u32);
	// stw r20,144(r22)
	PPC_STORE_U32(ctx.r22.u32 + 144, ctx.r20.u32);
	// stw r20,148(r22)
	PPC_STORE_U32(ctx.r22.u32 + 148, ctx.r20.u32);
	// stb r20,108(r22)
	PPC_STORE_U8(ctx.r22.u32 + 108, ctx.r20.u8);
	// lwz r4,15496(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15496);
	// bl 0x82d20ae0
	ctx.lr = 0x82B931E4;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d23390
	ctx.lr = 0x82B931F4;
	sub_82D23390(ctx, base);
	// stw r20,152(r22)
	PPC_STORE_U32(ctx.r22.u32 + 152, ctx.r20.u32);
	// stw r20,156(r22)
	PPC_STORE_U32(ctx.r22.u32 + 156, ctx.r20.u32);
	// addi r11,r22,152
	ctx.r11.s64 = ctx.r22.s64 + 152;
	// stw r20,160(r22)
	PPC_STORE_U32(ctx.r22.u32 + 160, ctx.r20.u32);
	// li r19,11
	ctx.r19.s64 = 11;
	// stw r20,164(r22)
	PPC_STORE_U32(ctx.r22.u32 + 164, ctx.r20.u32);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stw r20,168(r22)
	PPC_STORE_U32(ctx.r22.u32 + 168, ctx.r20.u32);
loc_82B93214:
	// bl 0x831156e8
	ctx.lr = 0x82B93218;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b6e8
	ctx.lr = 0x82B93224;
	sub_8312B6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x831ce980
	ctx.lr = 0x82B93234;
	sub_831CE980(ctx, base);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
loc_82B9323C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,25
	cr6.compare<int32_t>(ctx.r9.s32, 25, xer);
	// bge cr6,0x82b9325c
	if (!cr6.lt) goto loc_82B9325C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x82b9323c
	if (cr6.lt) goto loc_82B9323C;
	// b 0x82b93268
	goto loc_82B93268;
loc_82B9325C:
	// cmplw cr6,r11,r19
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, xer);
	// bge cr6,0x82b93268
	if (!cr6.lt) goto loc_82B93268;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
loc_82B93268:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82b93214
	if (cr6.lt) goto loc_82B93214;
	// li r17,-1
	ctx.r17.s64 = -1;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// stw r17,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r17.u32);
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// bl 0x830ff290
	ctx.lr = 0x82B9328C;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B93290;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b934c0
	if (cr6.eq) goto loc_82B934C0;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r26,8
	ctx.r26.s64 = 8;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r28,192(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
loc_82B932B8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x82b932c8
	if (cr6.lt) goto loc_82B932C8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82B932C8:
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B932E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b93328
	if (cr6.eq) goto loc_82B93328;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b93328
	if (cr6.eq) goto loc_82B93328;
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lwz r25,76(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B93318;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r25,r9
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b93328
	if (!cr6.eq) goto loc_82B93328;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82B93328:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfc r11,r26,r10
	xer.ca = ctx.r10.u32 >= ctx.r26.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r26.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 & ctx.r30.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b93398
	if (cr6.eq) goto loc_82B93398;
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b9336c
	if (cr6.eq) goto loc_82B9336C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82b9336c
	if (cr6.eq) goto loc_82B9336C;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82b9336c
	if (!cr0.eq) goto loc_82B9336C;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
loc_82B9336C:
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b93398
	if (cr6.eq) goto loc_82B93398;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82b93398
	if (cr6.eq) goto loc_82B93398;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82b93398
	if (!cr6.eq) goto loc_82B93398;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
loc_82B93398:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x82b932b8
	if (cr6.lt) goto loc_82B932B8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// addi r29,r22,116
	ctx.r29.s64 = ctx.r22.s64 + 116;
	// li r26,5
	ctx.r26.s64 = 5;
	// li r25,29
	ctx.r25.s64 = 29;
	// addi r28,r11,17524
	ctx.r28.s64 = ctx.r11.s64 + 17524;
	// addi r27,r10,272
	ctx.r27.s64 = ctx.r10.s64 + 272;
loc_82B933C8:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,392
	ctx.r4.s64 = 392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B933DC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b933f4
	if (cr6.eq) goto loc_82B933F4;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82e7e170
	ctx.lr = 0x82B933EC;
	sub_82E7E170(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82b933f8
	goto loc_82B933F8;
loc_82B933F4:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82B933F8:
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82B9340C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b93438
	if (cr6.eq) goto loc_82B93438;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82B93428;
	sub_8257FA88(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r24,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r24.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x82b9343c
	goto loc_82B9343C;
loc_82B93438:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82B9343C:
	// stw r30,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82b934a0
	if (cr6.eq) goto loc_82B934A0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b9348c
	if (cr6.eq) goto loc_82B9348C;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x82B93464;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82b9348c
	if (cr6.lt) goto loc_82B9348C;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8257fb60
	ctx.lr = 0x82B93488;
	sub_8257FB60(ctx, base);
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
loc_82B9348C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9349c
	if (cr6.eq) goto loc_82B9349C;
	// bl 0x8259b510
	ctx.lr = 0x82B9349C;
	sub_8259B510(ctx, base);
loc_82B9349C:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82B934A0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b934b0
	if (cr6.eq) goto loc_82B934B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b510
	ctx.lr = 0x82B934B0;
	sub_8259B510(ctx, base);
loc_82B934B0:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82b933c8
	if (!cr0.eq) goto loc_82B933C8;
	// b 0x82b936b0
	goto loc_82B936B0;
loc_82B934C0:
	// bl 0x831156e8
	ctx.lr = 0x82B934C4;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,2
	ctx.r9.s64 = 2;
	// addis r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 393216;
	// addi r8,r8,-30316
	ctx.r8.s64 = ctx.r8.s64 + -30316;
loc_82B934D4:
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(ctx.r23.s32, -1, xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// bne cr6,0x82b934fc
	if (!cr6.eq) goto loc_82B934FC;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82b934fc
	if (!cr6.eq) goto loc_82B934FC;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82B934FC:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(ctx.r21.s32, -1, xer);
	// bne cr6,0x82b93514
	if (!cr6.eq) goto loc_82B93514;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82b93514
	if (!cr6.eq) goto loc_82B93514;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_82B93514:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(ctx.r23.s32, -1, xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// bne cr6,0x82b9353c
	if (!cr6.eq) goto loc_82B9353C;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82b9353c
	if (!cr6.eq) goto loc_82B9353C;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82B9353C:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(ctx.r21.s32, -1, xer);
	// bne cr6,0x82b93554
	if (!cr6.eq) goto loc_82B93554;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82b93554
	if (!cr6.eq) goto loc_82B93554;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_82B93554:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(ctx.r23.s32, -1, xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r11,45(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// bne cr6,0x82b93578
	if (!cr6.eq) goto loc_82B93578;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b93578
	if (!cr6.eq) goto loc_82B93578;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
loc_82B93578:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(ctx.r21.s32, -1, xer);
	// bne cr6,0x82b93590
	if (!cr6.eq) goto loc_82B93590;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82b93590
	if (!cr6.eq) goto loc_82B93590;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
loc_82B93590:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(ctx.r23.s32, -1, xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// bne cr6,0x82b935b8
	if (!cr6.eq) goto loc_82B935B8;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82b935b8
	if (!cr6.eq) goto loc_82B935B8;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82B935B8:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(ctx.r21.s32, -1, xer);
	// bne cr6,0x82b935d0
	if (!cr6.eq) goto loc_82B935D0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82b935d0
	if (!cr6.eq) goto loc_82B935D0;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_82B935D0:
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(ctx.r23.s32, -1, xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// bne cr6,0x82b935f8
	if (!cr6.eq) goto loc_82B935F8;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82b935f8
	if (!cr6.eq) goto loc_82B935F8;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82B935F8:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(ctx.r21.s32, -1, xer);
	// bne cr6,0x82b93610
	if (!cr6.eq) goto loc_82B93610;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82b93610
	if (!cr6.eq) goto loc_82B93610;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_82B93610:
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(ctx.r23.s32, -1, xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// bne cr6,0x82b93638
	if (!cr6.eq) goto loc_82B93638;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82b93638
	if (!cr6.eq) goto loc_82B93638;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82B93638:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(ctx.r21.s32, -1, xer);
	// bne cr6,0x82b93650
	if (!cr6.eq) goto loc_82B93650;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82b93650
	if (!cr6.eq) goto loc_82B93650;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_82B93650:
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82b934d4
	if (cr6.lt) goto loc_82B934D4;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// bl 0x830ff290
	ctx.lr = 0x82B9366C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B93670;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// beq cr6,0x82b93688
	if (cr6.eq) goto loc_82B93688;
	// bl 0x830ff290
	ctx.lr = 0x82B9367C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B93680;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82b936b0
	if (!cr6.eq) goto loc_82B936B0;
loc_82B93688:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,108(r22)
	PPC_STORE_U8(ctx.r22.u32 + 108, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B936A0;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B936B0;
	sub_82D19788(ctx, base);
loc_82B936B0:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(ctx.r23.s32, -1, xer);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bne cr6,0x82b936e4
	if (!cr6.eq) goto loc_82B936E4;
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(ctx.r21.s32, -1, xer);
	// bne cr6,0x82b936ec
	if (!cr6.eq) goto loc_82B936EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B936D0;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B936E0;
	sub_82D19788(ctx, base);
	// b 0x82b936f4
	goto loc_82B936F4;
loc_82B936E4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x82b936f0
	goto loc_82B936F0;
loc_82B936EC:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_82B936F0:
	// bl 0x82d195d8
	ctx.lr = 0x82B936F4;
	sub_82D195D8(ctx, base);
loc_82B936F4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// addi r27,r1,104
	ctx.r27.s64 = ctx.r1.s64 + 104;
	// addi r28,r22,92
	ctx.r28.s64 = ctx.r22.s64 + 92;
	// li r26,27
	ctx.r26.s64 = 27;
	// addi r29,r11,-23348
	ctx.r29.s64 = ctx.r11.s64 + -23348;
loc_82B9370C:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// beq cr6,0x82b93794
	if (cr6.eq) goto loc_82B93794;
	// lbz r11,108(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b93760
	if (cr6.eq) goto loc_82B93760;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82B93738;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b937c8
	if (cr6.eq) goto loc_82B937C8;
	// addi r4,r29,-60
	ctx.r4.s64 = ctx.r29.s64 + -60;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x82b926d0
	ctx.lr = 0x82B9375C;
	sub_82B926D0(ctx, base);
	// b 0x82b937cc
	goto loc_82B937CC;
loc_82B93760:
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82B9376C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b937c8
	if (cr6.eq) goto loc_82B937C8;
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x82b926d0
	ctx.lr = 0x82B93790;
	sub_82B926D0(ctx, base);
	// b 0x82b937cc
	goto loc_82B937CC;
loc_82B93794:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x82B937A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b937c8
	if (cr6.eq) goto loc_82B937C8;
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x82b926d0
	ctx.lr = 0x82B937C4;
	sub_82B926D0(ctx, base);
	// b 0x82b937cc
	goto loc_82B937CC;
loc_82B937C8:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82B937CC:
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwzu r6,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x82d238b8
	ctx.lr = 0x82B937E4;
	sub_82D238B8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82b9370c
	if (cr6.lt) goto loc_82B9370C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B93800"))) PPC_WEAK_FUNC(sub_82B93800);
PPC_FUNC_IMPL(__imp__sub_82B93800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B93808;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82B93820:
	// lwzu r3,-8(r31)
	ea = -8 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b93830
	if (cr6.eq) goto loc_82B93830;
	// bl 0x8259b510
	ctx.lr = 0x82B93830;
	sub_8259B510(ctx, base);
loc_82B93830:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x82b93820
	if (!cr0.lt) goto loc_82B93820;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d25548
	ctx.lr = 0x82B93840;
	sub_82D25548(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b93858
	if (cr6.eq) goto loc_82B93858;
	// bl 0x82416268
	ctx.lr = 0x82B93854;
	sub_82416268(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82B93858:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B93860"))) PPC_WEAK_FUNC(sub_82B93860);
PPC_FUNC_IMPL(__imp__sub_82B93860) {
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
	// li r4,172
	ctx.r4.s64 = 172;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B93894;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b938ac
	if (cr6.eq) goto loc_82B938AC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b93150
	ctx.lr = 0x82B938A8;
	sub_82B93150(ctx, base);
	// b 0x82b938b0
	goto loc_82B938B0;
loc_82B938AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B938B0:
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

__attribute__((alias("__imp__sub_82B938C8"))) PPC_WEAK_FUNC(sub_82B938C8);
PPC_FUNC_IMPL(__imp__sub_82B938C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B938D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B938E0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B938E8;
	sub_82D33DB0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B938F0;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B93908;
	sub_82D21408(ctx, base);
	// add r29,r26,r31
	ctx.r29.u64 = ctx.r26.u64 + ctx.r31.u64;
	// lbz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 132);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bne cr6,0x82b93944
	if (!cr6.eq) goto loc_82B93944;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B93928;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B9393C;
	sub_82D2B608(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B93944:
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r27,r31,96
	ctx.r27.s64 = ctx.r31.s64 + 96;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82B93958;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x82B9396C;
	sub_82A0C738(ctx, base);
	// lbz r4,132(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 132);
	// bl 0x82a163f0
	ctx.lr = 0x82B93974;
	sub_82A163F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x82917550
	ctx.lr = 0x82B9398C;
	sub_82917550(ctx, base);
	// addi r28,r30,100
	ctx.r28.s64 = ctx.r30.s64 + 100;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82d2d510
	ctx.lr = 0x82B939A4;
	sub_82D2D510(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82d39310
	ctx.lr = 0x82B939AC;
	sub_82D39310(ctx, base);
	// lbz r29,132(r29)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r29.u32 + 132);
	// bl 0x831156e8
	ctx.lr = 0x82B939B4;
	sub_831156E8(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addis r3,r9,5
	ctx.r3.s64 = ctx.r9.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123ba8
	ctx.lr = 0x82B939D4;
	sub_83123BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82B939E4;
	sub_831CE980(ctx, base);
	// lwz r7,100(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r8,-22964
	ctx.r4.s64 = ctx.r8.s64 + -22964;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B93A00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B93A10;
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
	ctx.lr = 0x82B93A24;
	sub_82D291E0(ctx, base);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82b93a44
	if (cr6.lt) goto loc_82B93A44;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B93A44;
	sub_825952B8(ctx, base);
loc_82B93A44:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b93088
	ctx.lr = 0x82B93A68;
	sub_82B93088(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B93A70"))) PPC_WEAK_FUNC(sub_82B93A70);
PPC_FUNC_IMPL(__imp__sub_82B93A70) {
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
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addi r9,r11,132
	ctx.r9.s64 = ctx.r11.s64 + 132;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 132);
	// addi r9,r10,132
	ctx.r9.s64 = ctx.r10.s64 + 132;
	// lbz r7,132(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 132);
	// stb r8,132(r10)
	PPC_STORE_U8(ctx.r10.u32 + 132, ctx.r8.u8);
	// stb r7,132(r11)
	PPC_STORE_U8(ctx.r11.u32 + 132, ctx.r7.u8);
	// bl 0x82b938c8
	ctx.lr = 0x82B93AB0;
	sub_82B938C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b938c8
	ctx.lr = 0x82B93ABC;
	sub_82B938C8(ctx, base);
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

__attribute__((alias("__imp__sub_82B93AD4"))) PPC_WEAK_FUNC(sub_82B93AD4);
PPC_FUNC_IMPL(__imp__sub_82B93AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B93AD8"))) PPC_WEAK_FUNC(sub_82B93AD8);
PPC_FUNC_IMPL(__imp__sub_82B93AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B93AE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B93AEC;
	sub_82DAD2E0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b93be4
	if (cr6.eq) goto loc_82B93BE4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r28,152
	ctx.r30.s64 = ctx.r28.s64 + 152;
	// addi r31,r28,112
	ctx.r31.s64 = ctx.r28.s64 + 112;
	// li r25,5
	ctx.r25.s64 = 5;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r27,r11,-23324
	ctx.r27.s64 = ctx.r11.s64 + -23324;
loc_82B93B14:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82b93b78
	if (cr6.lt) goto loc_82B93B78;
	// bne cr6,0x82b93bd4
	if (!cr6.eq) goto loc_82B93BD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b93bd4
	if (cr6.eq) goto loc_82B93BD4;
	// addi r3,r11,356
	ctx.r3.s64 = ctx.r11.s64 + 356;
	// lwz r5,372(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x82B93B4C;
	sub_827A8810(ctx, base);
	// addic r9,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfe r11,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,388(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// lwz r4,384(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 384);
	// lwzx r3,r7,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// bl 0x82b93a70
	ctx.lr = 0x82B93B70;
	sub_82B93A70(ctx, base);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// b 0x82b93bd4
	goto loc_82B93BD4;
loc_82B93B78:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b93bd4
	if (cr6.eq) goto loc_82B93BD4;
	// bl 0x82e744f8
	ctx.lr = 0x82B93B88;
	sub_82E744F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x82B93B9C;
	sub_82B64B88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b66948
	ctx.lr = 0x82B93BA8;
	sub_82B66948(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r29,r9,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x82b93bc4
	if (cr6.eq) goto loc_82B93BC4;
	// bl 0x8259b510
	ctx.lr = 0x82B93BC4;
	sub_8259B510(ctx, base);
loc_82B93BC4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b93bd4
	if (!cr6.eq) goto loc_82B93BD4;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_82B93BD4:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82b93b14
	if (!cr0.eq) goto loc_82B93B14;
loc_82B93BE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B93BF0"))) PPC_WEAK_FUNC(sub_82B93BF0);
PPC_FUNC_IMPL(__imp__sub_82B93BF0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r11,-22240
	ctx.r8.s64 = ctx.r11.s64 + -22240;
	// addi r7,r10,-22252
	ctx.r7.s64 = ctx.r10.s64 + -22252;
	// addi r6,r9,-22256
	ctx.r6.s64 = ctx.r9.s64 + -22256;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r31,r3,316
	ctx.r31.s64 = ctx.r3.s64 + 316;
	// lwz r5,336(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82b93c44
	if (cr6.lt) goto loc_82B93C44;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82B93C44;
	sub_8386D088(ctx, base);
loc_82B93C44:
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
	// bl 0x82b6a590
	ctx.lr = 0x82B93C60;
	sub_82B6A590(ctx, base);
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

__attribute__((alias("__imp__sub_82B93C78"))) PPC_WEAK_FUNC(sub_82B93C78);
PPC_FUNC_IMPL(__imp__sub_82B93C78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82b93c88
	sub_82B93C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B93C80"))) PPC_WEAK_FUNC(sub_82B93C80);
PPC_FUNC_IMPL(__imp__sub_82B93C80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82b93c88
	sub_82B93C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B93C88"))) PPC_WEAK_FUNC(sub_82B93C88);
PPC_FUNC_IMPL(__imp__sub_82B93C88) {
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
	// bl 0x82b93bf0
	ctx.lr = 0x82B93CA8;
	sub_82B93BF0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b93cc0
	if (cr6.eq) goto loc_82B93CC0;
	// bl 0x82416268
	ctx.lr = 0x82B93CBC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B93CC0:
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

__attribute__((alias("__imp__sub_82B93CD8"))) PPC_WEAK_FUNC(sub_82B93CD8);
PPC_FUNC_IMPL(__imp__sub_82B93CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B93CE0;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,2
	ctx.r29.s64 = 2;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82B93CF4:
	// bl 0x830ff290
	ctx.lr = 0x82B93CF8;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B93CFC;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b93d10
	if (!cr6.eq) goto loc_82B93D10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r29.u32);
loc_82B93D10:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82b93cf4
	if (!cr0.eq) goto loc_82B93CF4;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// addi r24,r11,-25152
	ctx.r24.s64 = ctx.r11.s64 + -25152;
	// addi r21,r10,-25140
	ctx.r21.s64 = ctx.r10.s64 + -25140;
	// addi r20,r9,-25136
	ctx.r20.s64 = ctx.r9.s64 + -25136;
	// addi r22,r8,-24712
	ctx.r22.s64 = ctx.r8.s64 + -24712;
	// addi r23,r7,-22152
	ctx.r23.s64 = ctx.r7.s64 + -22152;
loc_82B93D4C:
	// bl 0x831156e8
	ctx.lr = 0x82B93D50;
	sub_831156E8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b6e8
	ctx.lr = 0x82B93D5C;
	sub_8312B6E8(ctx, base);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// beq cr6,0x82b93d84
	if (cr6.eq) goto loc_82B93D84;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_82B93D84:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831d0b08
	ctx.lr = 0x82B93D94;
	sub_831D0B08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B93DA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a93f0
	ctx.lr = 0x82B93DB8;
	sub_825A93F0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// bne cr6,0x82b93ddc
	if (!cr6.eq) goto loc_82B93DDC;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82B93DDC:
	// addi r10,r25,24
	ctx.r10.s64 = ctx.r25.s64 + 24;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lwzx r10,r29,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x82b93e34
	if (!cr6.gt) goto loc_82B93E34;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
loc_82B93E04:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,132(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 132);
	// bl 0x82a16440
	ctx.lr = 0x82B93E10;
	sub_82A16440(ctx, base);
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// lwzx r11,r29,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x82b93e04
	if (cr6.lt) goto loc_82B93E04;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82B93E34:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lbz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & ctx.r11.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// beq cr6,0x82b93e78
	if (cr6.eq) goto loc_82B93E78;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b93e78
	if (cr6.eq) goto loc_82B93E78;
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
	ctx.lr = 0x82B93E70;
	sub_8353F3B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
loc_82B93E78:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// beq cr6,0x82b93e9c
	if (cr6.eq) goto loc_82B93E9C;
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
	ctx.lr = 0x82B93E98;
	sub_8353F3B8(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
loc_82B93E9C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// blt cr6,0x82b93d4c
	if (cr6.lt) goto loc_82B93D4C;
	// lbz r11,108(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 108);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,104(r27)
	PPC_STORE_U32(ctx.r27.u32 + 104, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b93ed0
	if (!cr6.eq) goto loc_82B93ED0;
	// bl 0x831021a0
	ctx.lr = 0x82B93EC0;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,46
	ctx.r4.u64 = ctx.r4.u64 | 46;
	// bl 0x83102a08
	ctx.lr = 0x82B93ED0;
	sub_83102A08(ctx, base);
loc_82B93ED0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B93ED8"))) PPC_WEAK_FUNC(sub_82B93ED8);
PPC_FUNC_IMPL(__imp__sub_82B93ED8) {
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
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r10,47
	ctx.r9.u64 = ctx.r10.u64 | 47;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b93fbc
	if (cr6.eq) goto loc_82B93FBC;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-20480
	xer.ca = ctx.r11.u32 > 20479;
	ctx.r11.s64 = ctx.r11.s64 + -20480;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82b93f3c
	if (cr0.eq) goto loc_82B93F3C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b93fe4
	if (!cr6.eq) goto loc_82B93FE4;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b93fe4
	if (cr6.eq) goto loc_82B93FE4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bgt cr6,0x82b93fe4
	if (cr6.gt) goto loc_82B93FE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// b 0x82b93fe4
	goto loc_82B93FE4;
loc_82B93F3C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82b93f8c
	if (cr6.lt) goto loc_82B93F8C;
	// beq cr6,0x82b93f70
	if (cr6.eq) goto loc_82B93F70;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82b93fe4
	if (!cr6.lt) goto loc_82B93FE4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82b93fe4
	if (!cr6.eq) goto loc_82B93FE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b93cd8
	ctx.lr = 0x82B93F6C;
	sub_82B93CD8(ctx, base);
	// b 0x82b93fe4
	goto loc_82B93FE4;
loc_82B93F70:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82b93fe4
	if (!cr6.eq) goto loc_82B93FE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b93cd8
	ctx.lr = 0x82B93F88;
	sub_82B93CD8(ctx, base);
	// b 0x82b93fe4
	goto loc_82B93FE4;
loc_82B93F8C:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82b93fa8
	if (!cr6.eq) goto loc_82B93FA8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x82b93fe4
	goto loc_82B93FE4;
loc_82B93FA8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82b93fe4
	if (!cr6.eq) goto loc_82B93FE4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x82b93fe4
	goto loc_82B93FE4;
loc_82B93FBC:
	// bl 0x831021a0
	ctx.lr = 0x82B93FC0;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,48
	ctx.r4.u64 = ctx.r4.u64 | 48;
	// bl 0x83102a08
	ctx.lr = 0x82B93FD0;
	sub_83102A08(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-23332
	ctx.r5.s64 = ctx.r11.s64 + -23332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B93FE4;
	sub_82D20DA8(ctx, base);
loc_82B93FE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82B94000"))) PPC_WEAK_FUNC(sub_82B94000);
PPC_FUNC_IMPL(__imp__sub_82B94000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B94008;
	__savegprlr_23(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B94014;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r24,r11,-23248
	ctx.r24.s64 = ctx.r11.s64 + -23248;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r24,-68
	ctx.r4.s64 = ctx.r24.s64 + -68;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B94034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b94048
	if (cr6.eq) goto loc_82B94048;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B94048;
	sub_82D2AEC8(ctx, base);
loc_82B94048:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B94050;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r24,-48
	ctx.r4.s64 = ctx.r24.s64 + -48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B94068;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B94070;
	sub_831156E8(ctx, base);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r23,r31,96
	ctx.r23.s64 = ctx.r31.s64 + 96;
	// addis r3,r9,5
	ctx.r3.s64 = ctx.r9.s64 + 327680;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a08
	ctx.lr = 0x82B94088;
	sub_83123A08(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
loc_82B940A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b940a4
	if (!cr6.eq) goto loc_82B940A4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B940C8;
	sub_8259CC28(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82b940dc
	if (!cr6.lt) goto loc_82B940DC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82B940DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d30138
	ctx.lr = 0x82B940E8;
	sub_82D30138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2fe58
	ctx.lr = 0x82B940F0;
	sub_82D2FE58(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d3d968
	ctx.lr = 0x82B94100;
	sub_82D3D968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x82B94108;
	sub_82D19638(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82b94120
	if (!cr6.eq) goto loc_82B94120;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B94120;
	sub_82D2AEC8(ctx, base);
loc_82B94120:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82B94124:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82B94130;
	sub_82D19A88(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B94138;
	sub_82D33DB0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b941a0
	if (cr6.lt) goto loc_82B941A0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b94154
	if (!cr6.eq) goto loc_82B94154;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82B94154:
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// addi r4,r24,-582
	ctx.r4.s64 = ctx.r24.s64 + -582;
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r27,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r27.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cc28
	ctx.lr = 0x82B94170;
	sub_8259CC28(ctx, base);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// addi r4,r24,-36
	ctx.r4.s64 = ctx.r24.s64 + -36;
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x82B9418C;
	sub_8259CC28(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B9419C;
	sub_82A69AD0(ctx, base);
	// b 0x82b941d8
	goto loc_82B941D8;
loc_82B941A0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b941ac
	if (!cr6.eq) goto loc_82B941AC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82B941AC:
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// addi r4,r24,-24
	ctx.r4.s64 = ctx.r24.s64 + -24;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x82B941C8;
	sub_8259CC28(ctx, base);
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82B941D8;
	sub_82A6A1B8(ctx, base);
loc_82B941D8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// blt cr6,0x82b94124
	if (cr6.lt) goto loc_82B94124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b928f0
	ctx.lr = 0x82B941EC;
	sub_82B928F0(ctx, base);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r30,7
	cr6.compare<uint32_t>(ctx.r30.u32, 7, xer);
	// blt cr6,0x82b94234
	if (cr6.lt) goto loc_82B94234;
	// addi r11,r30,-7
	ctx.r11.s64 = ctx.r30.s64 + -7;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bge cr6,0x82b94234
	if (!cr6.lt) goto loc_82B94234;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B9420C;
	sub_82D19A68(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r30,-7
	ctx.r11.s64 = ctx.r30.s64 + -7;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,15652
	ctx.r8.s64 = ctx.r10.s64 + 15652;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B94234;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B94234:
	// bl 0x831156e8
	ctx.lr = 0x82B94238;
	sub_831156E8(ctx, base);
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b6e8
	ctx.lr = 0x82B94244;
	sub_8312B6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x831ce980
	ctx.lr = 0x82B94254;
	sub_831CE980(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r9,r11,-22152
	ctx.r9.s64 = ctx.r11.s64 + -22152;
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// bne cr6,0x82b94288
	if (!cr6.eq) goto loc_82B94288;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-25136
	ctx.r6.s64 = ctx.r11.s64 + -25136;
	// b 0x82b94290
	goto loc_82B94290;
loc_82B94288:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-25140
	ctx.r6.s64 = ctx.r11.s64 + -25140;
loc_82B94290:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,-25152
	ctx.r5.s64 = ctx.r11.s64 + -25152;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x831d0b08
	ctx.lr = 0x82B942A4;
	sub_831D0B08(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B942B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a93f0
	ctx.lr = 0x82B942C8;
	sub_825A93F0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r8,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// bne cr6,0x82b942ec
	if (!cr6.eq) goto loc_82B942EC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82B942EC:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r29,r31,132
	ctx.r29.s64 = ctx.r31.s64 + 132;
	// addi r26,r1,160
	ctx.r26.s64 = ctx.r1.s64 + 160;
	// li r25,32
	ctx.r25.s64 = 32;
loc_82B94300:
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// blt cr6,0x82b94314
	if (cr6.lt) goto loc_82B94314;
	// stbx r25,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r25.u8);
	// b 0x82b9432c
	goto loc_82B9432C;
loc_82B94314:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a161a8
	ctx.lr = 0x82B9431C;
	sub_82A161A8(ctx, base);
	// stbx r3,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u8);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
loc_82B9432C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x82b94300
	if (cr6.lt) goto loc_82B94300;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r7,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r7.u32);
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
loc_82B94360:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b938c8
	ctx.lr = 0x82B9436C;
	sub_82B938C8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x82b94360
	if (cr6.lt) goto loc_82B94360;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b943f0
	if (!cr6.eq) goto loc_82B943F0;
	// bl 0x82d19a68
	ctx.lr = 0x82B9438C;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r24,-12
	ctx.r4.s64 = ctx.r24.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B943A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B943AC;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82B943BC;
	sub_82D2B608(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r23,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r23.u32);
	// addi r30,r9,21716
	ctx.r30.s64 = ctx.r9.s64 + 21716;
	// stb r27,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r27.u8);
	// ori r7,r8,20480
	ctx.r7.u64 = ctx.r8.u64 | 20480;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82B943E8;
	sub_83103068(ctx, base);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// b 0x82b943fc
	goto loc_82B943FC;
loc_82B943F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d1eac0
	ctx.lr = 0x82B943FC;
	sub_82D1EAC0(ctx, base);
loc_82B943FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B94404;
	sub_82D19A68(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82d2ec48
	ctx.lr = 0x82B9440C;
	sub_82D2EC48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b944a4
	if (!cr6.eq) goto loc_82B944A4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r10,-24712
	ctx.r9.s64 = ctx.r10.s64 + -24712;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82b94454
	if (cr6.eq) goto loc_82B94454;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b94454
	if (cr6.eq) goto loc_82B94454;
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
	ctx.lr = 0x82B9444C;
	sub_8353F3B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_82B94454:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// beq cr6,0x82b94478
	if (cr6.eq) goto loc_82B94478;
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
	ctx.lr = 0x82B94474;
	sub_8353F3B8(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_82B94478:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b94548
	if (cr6.lt) goto loc_82B94548;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B94498;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B944A4:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B944B4;
	sub_82D2B608(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82d1ed60
	ctx.lr = 0x82B944C4;
	sub_82D1ED60(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b94504
	if (cr6.eq) goto loc_82B94504;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b94504
	if (cr6.eq) goto loc_82B94504;
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
	ctx.lr = 0x82B944FC;
	sub_8353F3B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_82B94504:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// beq cr6,0x82b94528
	if (cr6.eq) goto loc_82B94528;
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
	ctx.lr = 0x82B94524;
	sub_8353F3B8(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_82B94528:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b94548
	if (cr6.lt) goto loc_82B94548;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B94548;
	sub_825952B8(ctx, base);
loc_82B94548:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B94554"))) PPC_WEAK_FUNC(sub_82B94554);
PPC_FUNC_IMPL(__imp__sub_82B94554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B94558"))) PPC_WEAK_FUNC(sub_82B94558);
PPC_FUNC_IMPL(__imp__sub_82B94558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B94560;
	__savegprlr_28(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b949e8
	if (!cr6.eq) goto loc_82B949E8;
	// bl 0x82d19ba0
	ctx.lr = 0x82B94578;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82b945f4
	if (!cr6.eq) goto loc_82B945F4;
	// bl 0x82b92830
	ctx.lr = 0x82B94588;
	sub_82B92830(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,20480
	ctx.r8.u64 = ctx.r10.u64 | 20480;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82B945BC;
	sub_83103068(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,40
	ctx.r5.u64 = ctx.r5.u64 | 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B945DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B945EC;
	sub_82D19788(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B945F4:
	// bl 0x82d19ba0
	ctx.lr = 0x82B945F8;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82b946c0
	if (!cr6.eq) goto loc_82B946C0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B94604:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9460C;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B94614;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b94638
	if (cr6.eq) goto loc_82B94638;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82b94634
	if (cr6.eq) goto loc_82B94634;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82B94634:
	// bl 0x82d2b608
	ctx.lr = 0x82B94638;
	sub_82D2B608(ctx, base);
loc_82B94638:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82b94604
	if (cr6.lt) goto loc_82B94604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B9464C;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-23192
	ctx.r11.s64 = ctx.r11.s64 + -23192;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B9466C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b929b0
	ctx.lr = 0x82B94678;
	sub_82B929B0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B94688;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B94698;
	sub_82D19788(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82B946B8;
	sub_82D1EBF8(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B946C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B946C8;
	sub_82D19BB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82b949e8
	if (cr6.eq) goto loc_82B949E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82B946E0;
	sub_82D19A88(ctx, base);
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b94784
	if (!cr6.eq) goto loc_82B94784;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// bl 0x82d33db0
	ctx.lr = 0x82B94704;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82B94714;
	sub_82D2B608(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B94724;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9474c
	if (cr6.eq) goto loc_82B9474C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B9473C;
	sub_82D19AA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82B9474C;
	sub_82D2B608(ctx, base);
loc_82B9474C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9475C;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,40
	ctx.r5.u64 = ctx.r5.u64 | 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9477C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B94784:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82b947a0
	if (!cr6.eq) goto loc_82B947A0;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b947b4
	if (!cr6.lt) goto loc_82B947B4;
loc_82B947A0:
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// blt cr6,0x82b94878
	if (cr6.lt) goto loc_82B94878;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// bne cr6,0x82b94878
	if (!cr6.eq) goto loc_82B94878;
loc_82B947B4:
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B947BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B947C4;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B947CC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b947f0
	if (cr6.eq) goto loc_82B947F0;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82b947ec
	if (cr6.eq) goto loc_82B947EC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B947EC:
	// bl 0x82d2b608
	ctx.lr = 0x82B947F0;
	sub_82D2B608(ctx, base);
loc_82B947F0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82b947bc
	if (cr6.lt) goto loc_82B947BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B94804;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-23192
	ctx.r11.s64 = ctx.r11.s64 + -23192;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B94824;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b929b0
	ctx.lr = 0x82B94830;
	sub_82B929B0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82B94850;
	sub_82D1EBF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B94860;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B94870;
	sub_82D19788(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B94878:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82b948c0
	if (!cr6.eq) goto loc_82B948C0;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x82b948f0
	if (!cr6.lt) goto loc_82B948F0;
loc_82B94890:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9489C;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82B948AC;
	sub_82D2B608(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b94890
	if (cr6.lt) goto loc_82B94890;
	// b 0x82b948f0
	goto loc_82B948F0;
loc_82B948C0:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// blt cr6,0x82b948e4
	if (cr6.lt) goto loc_82B948E4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B948D0;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82B948E0;
	sub_82D2B608(ctx, base);
	// b 0x82b948f0
	goto loc_82B948F0;
loc_82B948E4:
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// bne cr6,0x82b948f0
	if (!cr6.eq) goto loc_82B948F0;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_82B948F0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b93a70
	ctx.lr = 0x82B94900;
	sub_82B93A70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d33db0
	ctx.lr = 0x82B9490C;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82B9491C;
	sub_82D2B608(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B94934;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9494c
	if (cr6.eq) goto loc_82B9494C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82B9494C;
	sub_82D2B608(ctx, base);
loc_82B9494C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9495C;
	sub_82D19788(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82B94960;
	sub_82DAD2E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b949e8
	if (cr6.eq) goto loc_82B949E8;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e7e0b8
	ctx.lr = 0x82B94978;
	sub_82E7E0B8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// bne cr6,0x82b94994
	if (!cr6.eq) goto loc_82B94994;
	// addi r11,r11,-23192
	ctx.r11.s64 = ctx.r11.s64 + -23192;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x82b94998
	goto loc_82B94998;
loc_82B94994:
	// addi r4,r11,-23192
	ctx.r4.s64 = ctx.r11.s64 + -23192;
loc_82B94998:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82B9499C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b9499c
	if (!cr6.eq) goto loc_82B9499C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82B949C0;
	sub_824208C8(ctx, base);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r29,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r29.u32);
	// stw r10,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// lwz r3,564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b949e0
	if (cr6.eq) goto loc_82B949E0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82e74498
	ctx.lr = 0x82B949E0;
	sub_82E74498(ctx, base);
loc_82B949E0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b93bf0
	ctx.lr = 0x82B949E8;
	sub_82B93BF0(ctx, base);
loc_82B949E8:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B949F0"))) PPC_WEAK_FUNC(sub_82B949F0);
PPC_FUNC_IMPL(__imp__sub_82B949F0) {
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
	// bl 0x830ff290
	ctx.lr = 0x82B94A08;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B94A0C;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b94a50
	if (cr6.eq) goto loc_82B94A50;
	// bl 0x82d478c8
	ctx.lr = 0x82B94A1C;
	sub_82D478C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b94a50
	if (cr6.eq) goto loc_82B94A50;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82b94a50
	if (cr6.eq) goto loc_82B94A50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b93cd8
	ctx.lr = 0x82B94A3C;
	sub_82B93CD8(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r11.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,120(r9)
	PPC_STORE_U32(ctx.r9.u32 + 120, ctx.r11.u32);
loc_82B94A50:
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

__attribute__((alias("__imp__sub_82B94A64"))) PPC_WEAK_FUNC(sub_82B94A64);
PPC_FUNC_IMPL(__imp__sub_82B94A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B94A68"))) PPC_WEAK_FUNC(sub_82B94A68);
PPC_FUNC_IMPL(__imp__sub_82B94A68) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-21764
	ctx.r5.s64 = ctx.r11.s64 + -21764;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B94A8C;
	sub_82D20DA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B94A98;
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
}

__attribute__((alias("__imp__sub_82B94AAC"))) PPC_WEAK_FUNC(sub_82B94AAC);
PPC_FUNC_IMPL(__imp__sub_82B94AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B94AB0"))) PPC_WEAK_FUNC(sub_82B94AB0);
PPC_FUNC_IMPL(__imp__sub_82B94AB0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-21756
	ctx.r5.s64 = ctx.r11.s64 + -21756;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B94AD4;
	sub_82D20DA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B94AE0;
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
}

__attribute__((alias("__imp__sub_82B94AF4"))) PPC_WEAK_FUNC(sub_82B94AF4);
PPC_FUNC_IMPL(__imp__sub_82B94AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B94AF8"))) PPC_WEAK_FUNC(sub_82B94AF8);
PPC_FUNC_IMPL(__imp__sub_82B94AF8) {
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
	// lbz r11,105(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 105);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b94ba8
	if (cr6.eq) goto loc_82B94BA8;
	// bl 0x830ff290
	ctx.lr = 0x82B94B1C;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B94B20;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b94b3c
	if (!cr6.eq) goto loc_82B94B3C;
	// bl 0x830ff290
	ctx.lr = 0x82B94B30;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// bne cr6,0x82b94ba8
	if (!cr6.eq) goto loc_82B94BA8;
loc_82B94B3C:
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b94ba8
	if (!cr6.eq) goto loc_82B94BA8;
	// bl 0x830fe8a0
	ctx.lr = 0x82B94B4C;
	sub_830FE8A0(ctx, base);
	// bl 0x835240d8
	ctx.lr = 0x82B94B50;
	sub_835240D8(ctx, base);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,10000
	cr6.compare<uint64_t>(ctx.r10.u64, 10000, xer);
	// ble cr6,0x82b94ba8
	if (!cr6.gt) goto loc_82B94BA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B94B70;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B94B80;
	sub_82D19788(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-21764
	ctx.r5.s64 = ctx.r11.s64 + -21764;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B94B94;
	sub_82D20DA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B94BA0;
	sub_82D199D0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r10.u8);
loc_82B94BA8:
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

__attribute__((alias("__imp__sub_82B94BBC"))) PPC_WEAK_FUNC(sub_82B94BBC);
PPC_FUNC_IMPL(__imp__sub_82B94BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B94BC0"))) PPC_WEAK_FUNC(sub_82B94BC0);
PPC_FUNC_IMPL(__imp__sub_82B94BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,-3564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,292(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r11,4456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4456);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82b94c54
	if (cr6.gt) goto loc_82B94C54;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b94c54
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B94C54;
	// bdzf 4*cr6+eq,0x82b94c14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B94C14;
	// bdzf 4*cr6+eq,0x82b94c54
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B94C54;
	// bdzf 4*cr6+eq,0x82b94c24
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B94C24;
	// bdzf 4*cr6+eq,0x82b94c54
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B94C54;
	// bdzf 4*cr6+eq,0x82b94c34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B94C34;
	// bdzf 4*cr6+eq,0x82b94c34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B94C34;
	// bne cr6,0x82b94c54
	if (!cr6.eq) goto loc_82B94C54;
	// lis r11,11
	ctx.r11.s64 = 720896;
	// ori r10,r11,12
	ctx.r10.u64 = ctx.r11.u64 | 12;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82B94C14:
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r10,r11,367
	ctx.r10.u64 = ctx.r11.u64 | 367;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82B94C24:
	// lis r11,10
	ctx.r11.s64 = 655360;
	// ori r10,r11,269
	ctx.r10.u64 = ctx.r11.u64 | 269;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82B94C34:
	// lwz r11,312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b94c14
	if (cr6.eq) goto loc_82B94C14;
	// lis r11,56
	ctx.r11.s64 = 3670016;
	// ori r10,r11,301
	ctx.r10.u64 = ctx.r11.u64 | 301;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82B94C54:
	// lis r11,56
	ctx.r11.s64 = 3670016;
	// ori r10,r11,302
	ctx.r10.u64 = ctx.r11.u64 | 302;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B94C64"))) PPC_WEAK_FUNC(sub_82B94C64);
PPC_FUNC_IMPL(__imp__sub_82B94C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B94C68"))) PPC_WEAK_FUNC(sub_82B94C68);
PPC_FUNC_IMPL(__imp__sub_82B94C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B94C70;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x82b94cc0
	if (!cr6.eq) goto loc_82B94CC0;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b94ca4
	if (cr6.lt) goto loc_82B94CA4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B94CA4;
	sub_825952B8(ctx, base);
loc_82B94CA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// stw r10,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r10.u32);
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B94CC0:
	// bl 0x82d19a68
	ctx.lr = 0x82B94CC4;
	sub_82D19A68(ctx, base);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b94cdc
	if (cr6.lt) goto loc_82B94CDC;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82b94ce0
	goto loc_82B94CE0;
loc_82B94CDC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82B94CE0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B94CF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b94e0c
	if (cr6.eq) goto loc_82B94E0C;
	// bl 0x82d4bb00
	ctx.lr = 0x82B94D00;
	sub_82D4BB00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b94dfc
	if (cr6.eq) goto loc_82B94DFC;
	// bl 0x82d4bb60
	ctx.lr = 0x82B94D10;
	sub_82D4BB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b94dfc
	if (cr6.eq) goto loc_82B94DFC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B94D2C;
	sub_82D2AEC8(ctx, base);
	// bl 0x82d4bb00
	ctx.lr = 0x82B94D30;
	sub_82D4BB00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d4bc28
	ctx.lr = 0x82B94D38;
	sub_82D4BC28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b94d78
	if (cr6.eq) goto loc_82B94D78;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82B94D48:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d4bb78
	ctx.lr = 0x82B94D54;
	sub_82D4BB78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32830
	ctx.lr = 0x82B94D68;
	sub_82D32830(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82B94D70;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B94D78:
	// bl 0x83911640
	ctx.lr = 0x82B94D7C;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82b94d90
	if (!cr6.gt) goto loc_82B94D90;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82b94d94
	if (!cr6.gt) goto loc_82B94D94;
loc_82B94D90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B94D94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b94db4
	if (cr6.eq) goto loc_82B94DB4;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// b 0x82b94d48
	goto loc_82B94D48;
loc_82B94DB4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d4c400
	ctx.lr = 0x82B94DC4;
	sub_82D4C400(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d4bb78
	ctx.lr = 0x82B94DD4;
	sub_82D4BB78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d328c8
	ctx.lr = 0x82B94DE4;
	sub_82D328C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B94DEC;
	sub_8387E8E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82B94DF4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B94DFC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B94E0C;
	sub_82D2AEC8(ctx, base);
loc_82B94E0C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82B94E14;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B94E1C"))) PPC_WEAK_FUNC(sub_82B94E1C);
PPC_FUNC_IMPL(__imp__sub_82B94E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B94E20"))) PPC_WEAK_FUNC(sub_82B94E20);
PPC_FUNC_IMPL(__imp__sub_82B94E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B94E28;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83911640
	ctx.lr = 0x82B94E34;
	sub_83911640(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82b94ebc
	if (cr6.gt) goto loc_82B94EBC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b94e6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B94E6C;
	// bdzf 4*cr6+eq,0x82b94e7c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B94E7C;
	// bdzf 4*cr6+eq,0x82b94e8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B94E8C;
	// bdzf 4*cr6+eq,0x82b94e9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B94E9C;
	// bne cr6,0x82b94eac
	if (!cr6.eq) goto loc_82B94EAC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-21784
	ctx.r31.s64 = ctx.r11.s64 + -21784;
	// addi r30,r31,-136
	ctx.r30.s64 = ctx.r31.s64 + -136;
	// b 0x82b94ec8
	goto loc_82B94EC8;
loc_82B94E6C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-21784
	ctx.r31.s64 = ctx.r11.s64 + -21784;
	// addi r30,r31,-132
	ctx.r30.s64 = ctx.r31.s64 + -132;
	// b 0x82b94ec8
	goto loc_82B94EC8;
loc_82B94E7C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-21784
	ctx.r31.s64 = ctx.r11.s64 + -21784;
	// addi r30,r31,-128
	ctx.r30.s64 = ctx.r31.s64 + -128;
	// b 0x82b94ec8
	goto loc_82B94EC8;
loc_82B94E8C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-21784
	ctx.r31.s64 = ctx.r11.s64 + -21784;
	// addi r30,r31,-124
	ctx.r30.s64 = ctx.r31.s64 + -124;
	// b 0x82b94ec8
	goto loc_82B94EC8;
loc_82B94E9C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-21784
	ctx.r31.s64 = ctx.r11.s64 + -21784;
	// addi r30,r31,-120
	ctx.r30.s64 = ctx.r31.s64 + -120;
	// b 0x82b94ec8
	goto loc_82B94EC8;
loc_82B94EAC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-21784
	ctx.r31.s64 = ctx.r11.s64 + -21784;
	// addi r30,r31,-116
	ctx.r30.s64 = ctx.r31.s64 + -116;
	// b 0x82b94ec8
	goto loc_82B94EC8;
loc_82B94EBC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-21784
	ctx.r31.s64 = ctx.r11.s64 + -21784;
	// addi r30,r31,-140
	ctx.r30.s64 = ctx.r31.s64 + -140;
loc_82B94EC8:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82B94EEC;
	sub_825A1EB8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82B94EF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b94ef0
	if (!cr6.eq) goto loc_82B94EF0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82B94F14;
	sub_825A1EB8(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x825a1eb8
	ctx.lr = 0x82B94F20;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82b94f34
	if (!cr6.lt) goto loc_82B94F34;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82B94F34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20ae0
	ctx.lr = 0x82B94F3C;
	sub_82D20AE0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x82b94f54
	if (!cr6.lt) goto loc_82B94F54;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82B94F54:
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// li r5,42
	ctx.r5.s64 = 42;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82B94F68;
	sub_825A1EB8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82B94F6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b94f6c
	if (!cr6.eq) goto loc_82B94F6C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82B94F90;
	sub_825A1EB8(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x825a1eb8
	ctx.lr = 0x82B94F9C;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82b94fb0
	if (!cr6.lt) goto loc_82B94FB0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82B94FB0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20ae0
	ctx.lr = 0x82B94FB8;
	sub_82D20AE0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x82b94fd0
	if (!cr6.lt) goto loc_82B94FD0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82B94FD0:
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82B94FE4;
	sub_825A1EB8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82B94FE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b94fe8
	if (!cr6.eq) goto loc_82B94FE8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82B9500C;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82b95020
	if (!cr6.lt) goto loc_82B95020;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82B95020:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d23390
	ctx.lr = 0x82B9502C;
	sub_82D23390(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b9504c
	if (cr6.lt) goto loc_82B9504C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B9504C;
	sub_825952B8(ctx, base);
loc_82B9504C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B95054"))) PPC_WEAK_FUNC(sub_82B95054);
PPC_FUNC_IMPL(__imp__sub_82B95054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B95058"))) PPC_WEAK_FUNC(sub_82B95058);
PPC_FUNC_IMPL(__imp__sub_82B95058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B95060;
	__savegprlr_28(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B95078;
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
	ctx.lr = 0x82B95090;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20992
	ctx.r9.s64 = ctx.r11.s64 + -20992;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x830fe8a0
	ctx.lr = 0x82B950AC;
	sub_830FE8A0(ctx, base);
	// bl 0x835240d8
	ctx.lr = 0x82B950B0;
	sub_835240D8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// std r3,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r3.u64);
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// stb r7,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r7.u8);
	// stb r28,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r28.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0db20
	ctx.lr = 0x82B950CC;
	sub_82A0DB20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b94e20
	ctx.lr = 0x82B950D4;
	sub_82B94E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22560
	ctx.lr = 0x82B950DC;
	sub_82A22560(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x82B950E8;
	sub_82A22530(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a125c8
	ctx.lr = 0x82B950F4;
	sub_82A125C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a12748
	ctx.lr = 0x82B950FC;
	sub_82A12748(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x82B95104;
	sub_82A0CC80(ctx, base);
	// clrlwi r6,r28,24
	ctx.r6.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b9511c
	if (cr6.eq) goto loc_82B9511C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82b95124
	goto loc_82B95124;
loc_82B9511C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82B95124:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B95130;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B95140;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9514C"))) PPC_WEAK_FUNC(sub_82B9514C);
PPC_FUNC_IMPL(__imp__sub_82B9514C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B95150"))) PPC_WEAK_FUNC(sub_82B95150);
PPC_FUNC_IMPL(__imp__sub_82B95150) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20992
	ctx.r9.s64 = ctx.r11.s64 + -20992;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a0dc70
	ctx.lr = 0x82B9518C;
	sub_82A0DC70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82B95194;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b951ac
	if (cr6.eq) goto loc_82B951AC;
	// bl 0x82416268
	ctx.lr = 0x82B951A8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B951AC:
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

__attribute__((alias("__imp__sub_82B951C4"))) PPC_WEAK_FUNC(sub_82B951C4);
PPC_FUNC_IMPL(__imp__sub_82B951C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B951C8"))) PPC_WEAK_FUNC(sub_82B951C8);
PPC_FUNC_IMPL(__imp__sub_82B951C8) {
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
	// bne cr6,0x82b951f4
	if (!cr6.eq) goto loc_82B951F4;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82B951F4:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// blt cr6,0x82b95208
	if (cr6.lt) goto loc_82B95208;
	// lwz r4,15752(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15752);
	// b 0x82b95214
	goto loc_82B95214;
loc_82B95208:
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,15752
	ctx.r8.s64 = ctx.r11.s64 + 15752;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_82B95214:
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
loc_82B95228:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b95228
	if (!cr6.eq) goto loc_82B95228;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B9524C;
	sub_8259CC28(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82B9525C;
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

__attribute__((alias("__imp__sub_82B95274"))) PPC_WEAK_FUNC(sub_82B95274);
PPC_FUNC_IMPL(__imp__sub_82B95274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B95278"))) PPC_WEAK_FUNC(sub_82B95278);
PPC_FUNC_IMPL(__imp__sub_82B95278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B95280;
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
	ctx.lr = 0x82B952B4;
	sub_82D042A8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// bne cr6,0x82b952c4
	if (!cr6.eq) goto loc_82B952C4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82B952C4:
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
	ctx.lr = 0x82B952E4;
	sub_8259CB28(ctx, base);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// blt cr6,0x82b952f8
	if (cr6.lt) goto loc_82B952F8;
	// lwz r4,15752(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15752);
	// b 0x82b95304
	goto loc_82B95304;
loc_82B952F8:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15752
	ctx.r9.s64 = ctx.r11.s64 + 15752;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82B95304:
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_82B95314:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b95314
	if (!cr6.eq) goto loc_82B95314;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B95338;
	sub_8259CC28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B95348;
	sub_82A69AD0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b95368
	if (cr6.lt) goto loc_82B95368;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B95368;
	sub_825952B8(ctx, base);
loc_82B95368:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B95370"))) PPC_WEAK_FUNC(sub_82B95370);
PPC_FUNC_IMPL(__imp__sub_82B95370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B95378;
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
	ctx.lr = 0x82B953B0;
	sub_82D042A8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// bne cr6,0x82b953c0
	if (!cr6.eq) goto loc_82B953C0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82B953C0:
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
	ctx.lr = 0x82B953E0;
	sub_8259CB28(ctx, base);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// blt cr6,0x82b953f4
	if (cr6.lt) goto loc_82B953F4;
	// lwz r4,15752(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15752);
	// b 0x82b95400
	goto loc_82B95400;
loc_82B953F4:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15752
	ctx.r9.s64 = ctx.r11.s64 + 15752;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82B95400:
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_82B95410:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b95410
	if (!cr6.eq) goto loc_82B95410;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B95434;
	sub_8259CC28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B95444;
	sub_82A69AD0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b95464
	if (cr6.lt) goto loc_82B95464;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B95464;
	sub_825952B8(ctx, base);
loc_82B95464:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9546C"))) PPC_WEAK_FUNC(sub_82B9546C);
PPC_FUNC_IMPL(__imp__sub_82B9546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B95470"))) PPC_WEAK_FUNC(sub_82B95470);
PPC_FUNC_IMPL(__imp__sub_82B95470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B95478;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,100
	cr6.compare<uint32_t>(ctx.r5.u32, 100, xer);
	// blt cr6,0x82b9549c
	if (cr6.lt) goto loc_82B9549C;
	// li r25,99
	ctx.r25.s64 = 99;
loc_82B9549C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B954A4;
	sub_82D19A68(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r28,r3,100
	ctx.r28.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82b954b8
	if (!cr6.eq) goto loc_82B954B8;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82B954B8:
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,-21404
	ctx.r31.s64 = ctx.r11.s64 + -21404;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-762
	ctx.r4.s64 = ctx.r31.s64 + -762;
	// bl 0x8259cc28
	ctx.lr = 0x82B954E0;
	sub_8259CC28(ctx, base);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82B954FC;
	sub_8259CC28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B9550C;
	sub_82A69AD0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B95514;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r28,r3,100
	ctx.r28.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82b95524
	if (!cr6.eq) goto loc_82B95524;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82B95524:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r4,r31,-761
	ctx.r4.s64 = ctx.r31.s64 + -761;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82B95540;
	sub_8259CC28(ctx, base);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82B9555C;
	sub_8259CC28(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B9556C;
	sub_82A69AD0(ctx, base);
	// lis r30,-31761
	ctx.r30.s64 = -2081488896;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r28,r11,4864
	ctx.r28.s64 = ctx.r11.s64 + 4864;
	// lwz r11,4920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4920);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b955b8
	if (!cr6.eq) goto loc_82B955B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// stw r11,4920(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4920, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9559C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// bl 0x837b0c10
	ctx.lr = 0x82B955A8;
	sub_837B0C10(ctx, base);
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11976
	ctx.r3.s64 = ctx.r11.s64 + 11976;
	// bl 0x831cdcc8
	ctx.lr = 0x82B955B4;
	sub_831CDCC8(ctx, base);
	// lwz r11,4920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4920);
loc_82B955B8:
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r10,-31761
	ctx.r10.s64 = -2081488896;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r29,r10,4752
	ctx.r29.s64 = ctx.r10.s64 + 4752;
	// bne cr6,0x82b95610
	if (!cr6.eq) goto loc_82B95610;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// stw r11,4920(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4920, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B955E0;
	sub_837B0C10(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x837b0c10
	ctx.lr = 0x82B955EC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// bl 0x837b0c10
	ctx.lr = 0x82B955F8;
	sub_837B0C10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,84
	ctx.r3.s64 = ctx.r29.s64 + 84;
	// bl 0x837b0c10
	ctx.lr = 0x82B95604;
	sub_837B0C10(ctx, base);
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11872
	ctx.r3.s64 = ctx.r11.s64 + 11872;
	// bl 0x831cdcc8
	ctx.lr = 0x82B95610;
	sub_831CDCC8(ctx, base);
loc_82B95610:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f30,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// bl 0x83911640
	ctx.lr = 0x82B95620;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b95630
	if (!cr6.eq) goto loc_82B95630;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f31,14612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14612);
	ctx.f31.f64 = double(temp.f32);
loc_82B95630:
	// cmplwi cr6,r25,10
	cr6.compare<uint32_t>(ctx.r25.u32, 10, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bge cr6,0x82b956b8
	if (!cr6.lt) goto loc_82B956B8;
	// bl 0x82d19a68
	ctx.lr = 0x82B95640;
	sub_82D19A68(ctx, base);
	// mulli r11,r26,28
	ctx.r11.s64 = ctx.r26.s64 * 28;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b9565c
	if (cr6.lt) goto loc_82B9565C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B9565C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B95670;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b95824
	if (cr6.eq) goto loc_82B95824;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d2b250
	ctx.lr = 0x82B95690;
	sub_82D2B250(ctx, base);
	// bl 0x82d4bb00
	ctx.lr = 0x82B95694;
	sub_82D4BB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// clrlwi r5,r25,24
	ctx.r5.u64 = ctx.r25.u32 & 0xFF;
	// bl 0x82d4c690
	ctx.lr = 0x82B956A4;
	sub_82D4C690(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b95800
	if (cr6.lt) goto loc_82B95800;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b95804
	goto loc_82B95804;
loc_82B956B8:
	// bl 0x82d19a68
	ctx.lr = 0x82B956BC;
	sub_82D19A68(ctx, base);
	// mulli r28,r26,56
	ctx.r28.s64 = ctx.r26.s64 * 56;
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b956d8
	if (cr6.lt) goto loc_82B956D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B956D8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B956EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b95824
	if (cr6.eq) goto loc_82B95824;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d2b250
	ctx.lr = 0x82B9570C;
	sub_82D2B250(ctx, base);
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// ori r10,r11,52429
	ctx.r10.u64 = ctx.r11.u64 | 52429;
	// mulhwu r9,r25,r10
	ctx.r9.u64 = (uint64_t(ctx.r25.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r30,r9,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82d4bb00
	ctx.lr = 0x82B95720;
	sub_82D4BB00(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r7,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r7.s64;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x82d4c690
	ctx.lr = 0x82B95740;
	sub_82D4C690(ctx, base);
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82b95754
	if (cr6.lt) goto loc_82B95754;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b95758
	goto loc_82B95758;
loc_82B95754:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B95758:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B95770;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B95778;
	sub_8387E8E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B95780;
	sub_82D19A68(ctx, base);
	// addi r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 + 28;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82b9579c
	if (cr6.lt) goto loc_82B9579C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B9579C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B957B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b95824
	if (cr6.eq) goto loc_82B95824;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d2b250
	ctx.lr = 0x82B957D0;
	sub_82D2B250(ctx, base);
	// bl 0x82d4bb00
	ctx.lr = 0x82B957D4;
	sub_82D4BB00(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// divwu r10,r25,r11
	ctx.r10.u32 = PPCDivide(ctx.r25.u32, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82d4c690
	ctx.lr = 0x82B957EC;
	sub_82D4C690(ctx, base);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82b95800
	if (cr6.lt) goto loc_82B95800;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b95804
	goto loc_82B95804;
loc_82B95800:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B95804:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9581C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B95824;
	sub_8387E8E0(ctx, base);
loc_82B95824:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B95834"))) PPC_WEAK_FUNC(sub_82B95834);
PPC_FUNC_IMPL(__imp__sub_82B95834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B95838"))) PPC_WEAK_FUNC(sub_82B95838);
PPC_FUNC_IMPL(__imp__sub_82B95838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B95840;
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
	// li r4,752
	ctx.r4.s64 = 752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B95868;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b95888
	if (cr6.eq) goto loc_82B95888;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b95058
	ctx.lr = 0x82B95880;
	sub_82B95058(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B95888:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B95894"))) PPC_WEAK_FUNC(sub_82B95894);
PPC_FUNC_IMPL(__imp__sub_82B95894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B95898"))) PPC_WEAK_FUNC(sub_82B95898);
PPC_FUNC_IMPL(__imp__sub_82B95898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B958A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B958AC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-21488
	ctx.r28.s64 = ctx.r11.s64 + -21488;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-260
	ctx.r4.s64 = ctx.r28.s64 + -260;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B958CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b95914
	if (cr6.eq) goto loc_82B95914;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b94bc0
	ctx.lr = 0x82B958E4;
	sub_82B94BC0(ctx, base);
	// bl 0x82d19a68
	ctx.lr = 0x82B958E8;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82b958f8
	if (!cr6.eq) goto loc_82B958F8;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82B958F8:
	// addi r4,r28,-252
	ctx.r4.s64 = ctx.r28.s64 + -252;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82B95904;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a69a28
	ctx.lr = 0x82B95914;
	sub_82A69A28(ctx, base);
loc_82B95914:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B9591C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-244
	ctx.r4.s64 = ctx.r28.s64 + -244;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B95934;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b959e4
	if (cr6.eq) goto loc_82B959E4;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// ori r4,r4,282
	ctx.r4.u64 = ctx.r4.u64 | 282;
	// bl 0x82d04220
	ctx.lr = 0x82B95960;
	sub_82D04220(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b95974
	if (!cr6.lt) goto loc_82B95974;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82B95974:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82B9597C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B95990;
	sub_82D291E0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b959b0
	if (cr6.lt) goto loc_82B959B0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B959B0;
	sub_825952B8(ctx, base);
loc_82B959B0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82b959d8
	if (cr6.lt) goto loc_82B959D8;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B959D8;
	sub_825952B8(ctx, base);
loc_82B959D8:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_82B959E4:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// addi r4,r28,-236
	ctx.r4.s64 = ctx.r28.s64 + -236;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x82B95A00;
	sub_8259CC28(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b94c68
	ctx.lr = 0x82B95A10;
	sub_82B94C68(ctx, base);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r4,r28,-224
	ctx.r4.s64 = ctx.r28.s64 + -224;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x82B95A2C;
	sub_8259CC28(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b94c68
	ctx.lr = 0x82B95A3C;
	sub_82B94C68(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B95A44;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-208
	ctx.r4.s64 = ctx.r28.s64 + -208;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B95A5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b95a70
	if (cr6.eq) goto loc_82B95A70;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B95A70;
	sub_82D2AEC8(ctx, base);
loc_82B95A70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B95A78;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-188
	ctx.r4.s64 = ctx.r28.s64 + -188;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B95A90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b95aa4
	if (cr6.eq) goto loc_82B95AA4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B95AA4;
	sub_82D2AEC8(ctx, base);
loc_82B95AA4:
	// bl 0x83911640
	ctx.lr = 0x82B95AA8;
	sub_83911640(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82b95b24
	if (cr6.gt) goto loc_82B95B24;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b95b0c
	if (cr6.eq) goto loc_82B95B0C;
	// bdz 0x82b95ad0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B95AD0;
	// bdz 0x82b95b0c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B95B0C;
	// bdz 0x82b95b24
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B95B24;
	// b 0x82b95af4
	goto loc_82B95AF4;
loc_82B95AD0:
	// addi r4,r28,-128
	ctx.r4.s64 = ctx.r28.s64 + -128;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cd0d18
	ctx.lr = 0x82B95AE0;
	sub_82CD0D18(ctx, base);
	// addi r4,r28,-108
	ctx.r4.s64 = ctx.r28.s64 + -108;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cd0d18
	ctx.lr = 0x82B95AF0;
	sub_82CD0D18(ctx, base);
	// b 0x82b95b44
	goto loc_82B95B44;
loc_82B95AF4:
	// addi r4,r28,-88
	ctx.r4.s64 = ctx.r28.s64 + -88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cd0a28
	ctx.lr = 0x82B95B04;
	sub_82CD0A28(ctx, base);
	// addi r4,r28,-64
	ctx.r4.s64 = ctx.r28.s64 + -64;
	// b 0x82b95b38
	goto loc_82B95B38;
loc_82B95B0C:
	// addi r4,r28,-40
	ctx.r4.s64 = ctx.r28.s64 + -40;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cd0a28
	ctx.lr = 0x82B95B1C;
	sub_82CD0A28(ctx, base);
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// b 0x82b95b38
	goto loc_82B95B38;
loc_82B95B24:
	// addi r4,r28,-168
	ctx.r4.s64 = ctx.r28.s64 + -168;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cd0a28
	ctx.lr = 0x82B95B34;
	sub_82CD0A28(ctx, base);
	// addi r4,r28,-148
	ctx.r4.s64 = ctx.r28.s64 + -148;
loc_82B95B38:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cd0a28
	ctx.lr = 0x82B95B44;
	sub_82CD0A28(ctx, base);
loc_82B95B44:
	// bl 0x83911640
	ctx.lr = 0x82B95B48;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82b95b5c
	if (!cr6.gt) goto loc_82B95B5C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82b95b60
	if (!cr6.gt) goto loc_82B95B60;
loc_82B95B5C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B95B60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b95c04
	if (cr6.eq) goto loc_82B95C04;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4456(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// cmpwi cr6,r9,10
	cr6.compare<int32_t>(ctx.r9.s32, 10, xer);
	// bne cr6,0x82b95ba4
	if (!cr6.eq) goto loc_82B95BA4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B95B8C;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B95BA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B95BA4:
	// addi r25,r29,108
	ctx.r25.s64 = ctx.r29.s64 + 108;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a12748
	ctx.lr = 0x82B95BB0;
	sub_82A12748(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// ori r27,r11,36400
	ctx.r27.u64 = ctx.r11.u64 | 36400;
	// ori r28,r10,7264
	ctx.r28.u64 = ctx.r10.u64 | 7264;
	// lwz r26,240(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
loc_82B95BC8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a225d0
	ctx.lr = 0x82B95BD0;
	sub_82A225D0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// bl 0x82919698
	ctx.lr = 0x82B95BDC;
	sub_82919698(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b95470
	ctx.lr = 0x82B95BEC;
	sub_82B95470(ctx, base);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x82b95bc8
	if (cr6.lt) goto loc_82B95BC8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x82B95C04;
	sub_82A0CC80(ctx, base);
loc_82B95C04:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B95C0C"))) PPC_WEAK_FUNC(sub_82B95C0C);
PPC_FUNC_IMPL(__imp__sub_82B95C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B95C10"))) PPC_WEAK_FUNC(sub_82B95C10);
PPC_FUNC_IMPL(__imp__sub_82B95C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B95C18;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,10
	ctx.r11.s64 = 655360;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lis r9,10
	ctx.r9.s64 = 655360;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,129
	ctx.r11.u64 = ctx.r11.u64 | 129;
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// ori r9,r9,190
	ctx.r9.u64 = ctx.r9.u64 | 190;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r8,10
	ctx.r8.s64 = 655360;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r7,10
	ctx.r7.s64 = 655360;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r6,10
	ctx.r6.s64 = 655360;
	// lis r5,56
	ctx.r5.s64 = 3670016;
	// lis r3,10
	ctx.r3.s64 = 655360;
	// lis r31,10
	ctx.r31.s64 = 655360;
	// lis r30,56
	ctx.r30.s64 = 3670016;
	// lis r29,10
	ctx.r29.s64 = 655360;
	// ori r8,r8,191
	ctx.r8.u64 = ctx.r8.u64 | 191;
	// ori r7,r7,144
	ctx.r7.u64 = ctx.r7.u64 | 144;
	// ori r6,r6,187
	ctx.r6.u64 = ctx.r6.u64 | 187;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// ori r5,r5,197
	ctx.r5.u64 = ctx.r5.u64 | 197;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// ori r3,r3,264
	ctx.r3.u64 = ctx.r3.u64 | 264;
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// ori r11,r31,186
	ctx.r11.u64 = ctx.r31.u64 | 186;
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// ori r10,r30,196
	ctx.r10.u64 = ctx.r30.u64 | 196;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// ori r9,r29,124
	ctx.r9.u64 = ctx.r29.u64 | 124;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// bge cr6,0x82b95d2c
	if (!cr6.lt) goto loc_82B95D2C;
	// cmplwi cr6,r4,20
	cr6.compare<uint32_t>(ctx.r4.u32, 20, xer);
	// bge cr6,0x82b95d2c
	if (!cr6.lt) goto loc_82B95D2C;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,15672
	ctx.r10.s64 = ctx.r11.s64 + 15672;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r30,r31,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82d19a68
	ctx.lr = 0x82B95CCC;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2eca0
	ctx.lr = 0x82B95CD4;
	sub_82D2ECA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b95d2c
	if (cr6.eq) goto loc_82B95D2C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21472
	ctx.r4.s64 = ctx.r11.s64 + -21472;
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82B95CF4;
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
	ctx.lr = 0x82B95D08;
	sub_82A69A28(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B95D0C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b951c8
	ctx.lr = 0x82B95D20;
	sub_82B951C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82b95d0c
	if (cr6.lt) goto loc_82B95D0C;
loc_82B95D2C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B95D34"))) PPC_WEAK_FUNC(sub_82B95D34);
PPC_FUNC_IMPL(__imp__sub_82B95D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B95D38"))) PPC_WEAK_FUNC(sub_82B95D38);
PPC_FUNC_IMPL(__imp__sub_82B95D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B95D40;
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
	ctx.lr = 0x82B95D5C;
	sub_82A225D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8291ad98
	ctx.lr = 0x82B95D64;
	sub_8291AD98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,20
	cr6.compare<uint32_t>(ctx.r27.u32, 20, xer);
	// bge cr6,0x82b95f98
	if (!cr6.lt) goto loc_82B95F98;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15672
	ctx.r9.s64 = ctx.r11.s64 + 15672;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d19a68
	ctx.lr = 0x82B95D88;
	sub_82D19A68(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d2eca0
	ctx.lr = 0x82B95D90;
	sub_82D2ECA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b95f98
	if (cr6.eq) goto loc_82B95F98;
	// cmplwi cr6,r27,10
	cr6.compare<uint32_t>(ctx.r27.u32, 10, xer);
	// bgt cr6,0x82b95f98
	if (cr6.gt) goto loc_82B95F98;
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// rlwinm r0,r27,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23996
	ctx.r12.s64 = ctx.r12.s64 + 23996;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r27.u32) {
	case 0:
		goto loc_82B95DE8;
	case 1:
		goto loc_82B95DFC;
	case 2:
		goto loc_82B95E4C;
	case 3:
		goto loc_82B95E90;
	case 4:
		goto loc_82B95ED4;
	case 5:
		goto loc_82B95EDC;
	case 6:
		goto loc_82B95EE4;
	case 7:
		goto loc_82B95F5C;
	case 8:
		goto loc_82B95F64;
	case 9:
		goto loc_82B95F6C;
	case 10:
		goto loc_82B95F74;
	default:
		return;
	}
	// lwz r21,24040(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24040);
	// lwz r21,24060(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24060);
	// lwz r21,24140(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24140);
	// lwz r21,24208(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24208);
	// lwz r21,24276(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24276);
	// lwz r21,24284(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24284);
	// lwz r21,24292(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24292);
	// lwz r21,24412(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24412);
	// lwz r21,24420(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24420);
	// lwz r21,24428(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24428);
	// lwz r21,24436(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24436);
loc_82B95DE8:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82919698
	ctx.lr = 0x82B95DF4;
	sub_82919698(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82b95f88
	goto loc_82B95F88;
loc_82B95DFC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a225d0
	ctx.lr = 0x82B95E04;
	sub_82A225D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x8291b4e0
	ctx.lr = 0x82B95E10;
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
	// bl 0x82b95278
	ctx.lr = 0x82B95E44;
	sub_82B95278(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B95E4C:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x82B95E5C;
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
	ctx.lr = 0x82B95E70;
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
	// bl 0x82b95370
	ctx.lr = 0x82B95E88;
	sub_82B95370(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B95E90:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x82B95EA0;
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
	ctx.lr = 0x82B95EB4;
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
	// bl 0x82b95370
	ctx.lr = 0x82B95ECC;
	sub_82B95370(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B95ED4:
	// li r4,51
	ctx.r4.s64 = 51;
	// b 0x82b95f78
	goto loc_82B95F78;
loc_82B95EDC:
	// li r4,49
	ctx.r4.s64 = 49;
	// b 0x82b95f78
	goto loc_82B95F78;
loc_82B95EE4:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x82B95EF4;
	sub_829194E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b95f40
	if (cr6.eq) goto loc_82B95F40;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x82B95F0C;
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
	ctx.lr = 0x82B95F20;
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
	// bl 0x82b95278
	ctx.lr = 0x82B95F38;
	sub_82B95278(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B95F40:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b95278
	ctx.lr = 0x82B95F54;
	sub_82B95278(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B95F5C:
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x82b95f78
	goto loc_82B95F78;
loc_82B95F64:
	// li r4,62
	ctx.r4.s64 = 62;
	// b 0x82b95f78
	goto loc_82B95F78;
loc_82B95F6C:
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x82b95f78
	goto loc_82B95F78;
loc_82B95F74:
	// li r4,111
	ctx.r4.s64 = 111;
loc_82B95F78:
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x82B95F84;
	sub_829194E8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82B95F88:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b951c8
	ctx.lr = 0x82B95F98;
	sub_82B951C8(ctx, base);
loc_82B95F98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B95FA0"))) PPC_WEAK_FUNC(sub_82B95FA0);
PPC_FUNC_IMPL(__imp__sub_82B95FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B95FA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B95FB4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b95c10
	ctx.lr = 0x82B95FC0;
	sub_82B95C10(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82b95fb4
	if (cr6.lt) goto loc_82B95FB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B95FD4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B95FDC;
	sub_82D33DB0(ctx, base);
	// bl 0x82d33c10
	ctx.lr = 0x82B95FE0;
	sub_82D33C10(ctx, base);
	// addi r27,r30,108
	ctx.r27.s64 = ctx.r30.s64 + 108;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a12748
	ctx.lr = 0x82B95FEC;
	sub_82A12748(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r28,240(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
loc_82B95FF4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B95FF8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b95d38
	ctx.lr = 0x82B9600C;
	sub_82B95D38(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82b95ff8
	if (cr6.lt) goto loc_82B95FF8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x82b95ff4
	if (cr6.lt) goto loc_82B95FF4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x82B9602C;
	sub_82A0CC80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B96034"))) PPC_WEAK_FUNC(sub_82B96034);
PPC_FUNC_IMPL(__imp__sub_82B96034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B96038"))) PPC_WEAK_FUNC(sub_82B96038);
PPC_FUNC_IMPL(__imp__sub_82B96038) {
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
	// bl 0x82b95898
	ctx.lr = 0x82B96050;
	sub_82B95898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b95fa0
	ctx.lr = 0x82B96058;
	sub_82B95FA0(ctx, base);
	// bl 0x82d4dbb0
	ctx.lr = 0x82B9605C;
	sub_82D4DBB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d198d0
	ctx.lr = 0x82B96068;
	sub_82D198D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19720
	ctx.lr = 0x82B96074;
	sub_82D19720(ctx, base);
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

__attribute__((alias("__imp__sub_82B9608C"))) PPC_WEAK_FUNC(sub_82B9608C);
PPC_FUNC_IMPL(__imp__sub_82B9608C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B96090"))) PPC_WEAK_FUNC(sub_82B96090);
PPC_FUNC_IMPL(__imp__sub_82B96090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82b960e4
	if (cr6.gt) goto loc_82B960E4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b960c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B960C4;
	// bdzf 4*cr6+eq,0x82b960cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B960CC;
	// bdzf 4*cr6+eq,0x82b960d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B960D4;
	// bdzf 4*cr6+eq,0x82b960e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B960E4;
	// bdzf 4*cr6+eq,0x82b960d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B960D4;
	// bne cr6,0x82b960dc
	if (!cr6.eq) goto loc_82B960DC;
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_82B960C4:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82B960CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82B960D4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82B960DC:
	// lbz r3,5(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// blr 
	return;
loc_82B960E4:
	// lbz r3,2(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B960EC"))) PPC_WEAK_FUNC(sub_82B960EC);
PPC_FUNC_IMPL(__imp__sub_82B960EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B960F0"))) PPC_WEAK_FUNC(sub_82B960F0);
PPC_FUNC_IMPL(__imp__sub_82B960F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82b96134
	if (cr6.gt) goto loc_82B96134;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b9611c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B9611C;
	// bdzf 4*cr6+eq,0x82b9611c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B9611C;
	// bdzf 4*cr6+eq,0x82b96124
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B96124;
	// bdzf 4*cr6+eq,0x82b96134
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B96134;
	// bdzf 4*cr6+eq,0x82b96124
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B96124;
	// bne cr6,0x82b9612c
	if (!cr6.eq) goto loc_82B9612C;
loc_82B9611C:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82B96124:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82B9612C:
	// lbz r3,6(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// blr 
	return;
loc_82B96134:
	// lbz r3,3(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9613C"))) PPC_WEAK_FUNC(sub_82B9613C);
PPC_FUNC_IMPL(__imp__sub_82B9613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B96140"))) PPC_WEAK_FUNC(sub_82B96140);
PPC_FUNC_IMPL(__imp__sub_82B96140) {
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
	// bl 0x831021a0
	ctx.lr = 0x82B96150;
	sub_831021A0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// addi r5,r11,-20654
	ctx.r5.s64 = ctx.r11.s64 + -20654;
	// ori r4,r4,55
	ctx.r4.u64 = ctx.r4.u64 | 55;
	// bl 0x83102a08
	ctx.lr = 0x82B96164;
	sub_83102A08(ctx, base);
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

__attribute__((alias("__imp__sub_82B96178"))) PPC_WEAK_FUNC(sub_82B96178);
PPC_FUNC_IMPL(__imp__sub_82B96178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B96180;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B96194;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82b961bc
	if (!cr6.lt) goto loc_82B961BC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B961BC:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r11,24120
	ctx.r11.s64 = ctx.r11.s64 + 24120;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B961D4:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82b961d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B961D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B961E8;
	sub_82D19A78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B961F0;
	sub_82D33DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B961F8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b96260
	if (cr6.eq) goto loc_82B96260;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82b96240
	if (cr6.lt) goto loc_82B96240;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// bge cr6,0x82b96260
	if (!cr6.lt) goto loc_82B96260;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// stb r11,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r11.u8);
	// bl 0x82d2d510
	ctx.lr = 0x82B96228;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b96260
	if (cr6.eq) goto loc_82B96260;
	// bl 0x82dad040
	ctx.lr = 0x82B96234;
	sub_82DAD040(ctx, base);
	// stb r3,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r3.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B96240:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B96250;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b96260
	if (cr6.eq) goto loc_82B96260;
	// bl 0x83a970c8
	ctx.lr = 0x82B9625C;
	sub_83A970C8(ctx, base);
	// stb r3,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r3.u8);
loc_82B96260:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B96268"))) PPC_WEAK_FUNC(sub_82B96268);
PPC_FUNC_IMPL(__imp__sub_82B96268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x831156e8
	ctx.lr = 0x82B96278;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82b962a0
	if (!cr6.lt) goto loc_82B962A0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B962A0:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r11,24120
	ctx.r11.s64 = ctx.r11.s64 + 24120;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B962B8:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82b962b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B962B8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82b96388
	if (cr6.gt) goto loc_82B96388;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b96374
	if (cr6.eq) goto loc_82B96374;
	// bdz 0x82b96374
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B96374;
	// bdz 0x82b962fc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B962FC;
	// bdz 0x82b96360
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B96360;
	// bdz 0x82b96310
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B96310;
	// bdz 0x82b96324
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B96324;
	// bdz 0x82b9634c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B9634C;
	// b 0x82b96338
	goto loc_82B96338;
loc_82B962FC:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B96310:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B96324:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B96338:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B9634C:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B96360:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B96374:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B96388:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9639C"))) PPC_WEAK_FUNC(sub_82B9639C);
PPC_FUNC_IMPL(__imp__sub_82B9639C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B963A0"))) PPC_WEAK_FUNC(sub_82B963A0);
PPC_FUNC_IMPL(__imp__sub_82B963A0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B963B8;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82b963e0
	if (!cr6.lt) goto loc_82B963E0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B963E0:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r11,24120
	ctx.r11.s64 = ctx.r11.s64 + 24120;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B963F8:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82b963f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B963F8;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82b964e8
	if (cr6.gt) goto loc_82B964E8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b9643c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B9643C;
	// bdzf 4*cr6+eq,0x82b96458
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B96458;
	// bne cr6,0x82b96474
	if (!cr6.eq) goto loc_82B96474;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
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
loc_82B9643C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b96090
	ctx.lr = 0x82B96444;
	sub_82B96090(ctx, base);
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
loc_82B96458:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b960f0
	ctx.lr = 0x82B96460;
	sub_82B960F0(ctx, base);
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
loc_82B96474:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82b964d0
	if (cr6.gt) goto loc_82B964D0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b964a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B964A0;
	// bdzf 4*cr6+eq,0x82b964a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B964A0;
	// bdzf 4*cr6+eq,0x82b964a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B964A0;
	// bdzf 4*cr6+eq,0x82b964d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B964D0;
	// bdzf 4*cr6+eq,0x82b964a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B964A0;
	// bne cr6,0x82b964b8
	if (!cr6.eq) goto loc_82B964B8;
loc_82B964A0:
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
loc_82B964B8:
	// lbz r3,87(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
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
loc_82B964D0:
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
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
loc_82B964E8:
	// li r3,255
	ctx.r3.s64 = 255;
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

__attribute__((alias("__imp__sub_82B96500"))) PPC_WEAK_FUNC(sub_82B96500);
PPC_FUNC_IMPL(__imp__sub_82B96500) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B96520;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82b96548
	if (!cr6.lt) goto loc_82B96548;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B96548:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// addi r11,r11,24120
	ctx.r11.s64 = ctx.r11.s64 + 24120;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82b965a4
	if (cr6.eq) goto loc_82B965A4;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82b96588
	if (cr6.eq) goto loc_82B96588;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82b965bc
	if (!cr6.eq) goto loc_82B965BC;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x82b96580
	if (!cr6.eq) goto loc_82B96580;
	// stb r31,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r31.u8);
	// b 0x82b965bc
	goto loc_82B965BC;
loc_82B96580:
	// stb r31,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r31.u8);
	// b 0x82b965bc
	goto loc_82B965BC;
loc_82B96588:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x82b9659c
	if (!cr6.eq) goto loc_82B9659C;
	// stb r31,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r31.u8);
	// b 0x82b965bc
	goto loc_82B965BC;
loc_82B9659C:
	// stb r31,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r31.u8);
	// b 0x82b965bc
	goto loc_82B965BC;
loc_82B965A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x82b965b8
	if (!cr6.eq) goto loc_82B965B8;
	// stb r31,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r31.u8);
	// b 0x82b965bc
	goto loc_82B965BC;
loc_82B965B8:
	// stb r31,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r31.u8);
loc_82B965BC:
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

__attribute__((alias("__imp__sub_82B965D4"))) PPC_WEAK_FUNC(sub_82B965D4);
PPC_FUNC_IMPL(__imp__sub_82B965D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B965D8"))) PPC_WEAK_FUNC(sub_82B965D8);
PPC_FUNC_IMPL(__imp__sub_82B965D8) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B965F0;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82b96618
	if (!cr6.lt) goto loc_82B96618;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B96618:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r11,24120
	ctx.r11.s64 = ctx.r11.s64 + 24120;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B96630:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82b96630
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B96630;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf. r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b96680
	if (cr0.eq) goto loc_82B96680;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
loc_82B9665C:
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lbzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// beq cr6,0x82b9667c
	if (cr6.eq) goto loc_82B9667C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b9665c
	if (cr6.lt) goto loc_82B9665C;
	// b 0x82b96680
	goto loc_82B96680;
loc_82B9667C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82B96680:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b966a4
	if (!cr6.eq) goto loc_82B966A4;
loc_82B9668C:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82B966A4:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82b966c8
	if (cr6.lt) goto loc_82B966C8;
	// li r3,255
	ctx.r3.s64 = 255;
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
loc_82B966C8:
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82b96750
	if (cr6.gt) goto loc_82B96750;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b96708
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B96708;
	// bdzf 4*cr6+eq,0x82b9668c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B9668C;
	// bdzf 4*cr6+eq,0x82b96720
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B96720;
	// bdzf 4*cr6+eq,0x82b96750
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B96750;
	// bdzf 4*cr6+eq,0x82b96720
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B96720;
	// bne cr6,0x82b96738
	if (!cr6.eq) goto loc_82B96738;
	// li r3,9
	ctx.r3.s64 = 9;
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
loc_82B96708:
	// li r3,5
	ctx.r3.s64 = 5;
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
loc_82B96720:
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_82B96738:
	// lbz r3,85(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
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
loc_82B96750:
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
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

__attribute__((alias("__imp__sub_82B96768"))) PPC_WEAK_FUNC(sub_82B96768);
PPC_FUNC_IMPL(__imp__sub_82B96768) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B96780;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82b967a8
	if (!cr6.lt) goto loc_82B967A8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B967A8:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r11,24120
	ctx.r11.s64 = ctx.r11.s64 + 24120;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B967C0:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82b967c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B967C0;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf. r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b96810
	if (cr0.eq) goto loc_82B96810;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
loc_82B967EC:
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lbzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// beq cr6,0x82b9680c
	if (cr6.eq) goto loc_82B9680C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b967ec
	if (cr6.lt) goto loc_82B967EC;
	// b 0x82b96810
	goto loc_82B96810;
loc_82B9680C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82B96810:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b96868
	if (cr6.eq) goto loc_82B96868;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82b96840
	if (cr6.lt) goto loc_82B96840;
	// li r3,255
	ctx.r3.s64 = 255;
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
loc_82B96840:
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82b968b0
	if (cr6.gt) goto loc_82B968B0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b96868
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B96868;
	// bdzf 4*cr6+eq,0x82b96868
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B96868;
	// bdzf 4*cr6+eq,0x82b96880
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B96880;
	// bdzf 4*cr6+eq,0x82b968b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B968B0;
	// bdzf 4*cr6+eq,0x82b96880
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B96880;
	// bne cr6,0x82b96898
	if (!cr6.eq) goto loc_82B96898;
loc_82B96868:
	// li r3,7
	ctx.r3.s64 = 7;
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
loc_82B96880:
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_82B96898:
	// lbz r3,86(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
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
loc_82B968B0:
	// lbz r3,83(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
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

__attribute__((alias("__imp__sub_82B968C8"))) PPC_WEAK_FUNC(sub_82B968C8);
PPC_FUNC_IMPL(__imp__sub_82B968C8) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B968E0;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82b96908
	if (!cr6.lt) goto loc_82B96908;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B96908:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r11,24120
	ctx.r11.s64 = ctx.r11.s64 + 24120;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B96920:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82b96920
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B96920;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf. r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b96970
	if (cr0.eq) goto loc_82B96970;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
loc_82B9694C:
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lbzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// beq cr6,0x82b9696c
	if (cr6.eq) goto loc_82B9696C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b9694c
	if (cr6.lt) goto loc_82B9694C;
	// b 0x82b96970
	goto loc_82B96970;
loc_82B9696C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82B96970:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b969c8
	if (cr6.eq) goto loc_82B969C8;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x82b969a0
	if (cr6.lt) goto loc_82B969A0;
	// li r3,255
	ctx.r3.s64 = 255;
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
loc_82B969A0:
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82b969f8
	if (cr6.gt) goto loc_82B969F8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b969c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B969C8;
	// bdzf 4*cr6+eq,0x82b969c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B969C8;
	// bdzf 4*cr6+eq,0x82b969c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B969C8;
	// bdzf 4*cr6+eq,0x82b969f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B969F8;
	// bdzf 4*cr6+eq,0x82b969c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B969C8;
	// bne cr6,0x82b969e0
	if (!cr6.eq) goto loc_82B969E0;
loc_82B969C8:
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
loc_82B969E0:
	// lbz r3,87(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
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
loc_82B969F8:
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_82B96A10"))) PPC_WEAK_FUNC(sub_82B96A10);
PPC_FUNC_IMPL(__imp__sub_82B96A10) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B96A2C;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r31,r11,37448
	ctx.r31.u64 = ctx.r11.u64 | 37448;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82b96ad4
	if (cr6.eq) goto loc_82B96AD4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82b96ad4
	if (cr6.eq) goto loc_82B96AD4;
	// bl 0x831156e8
	ctx.lr = 0x82B96A50;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82b96a70
	if (!cr6.lt) goto loc_82B96A70;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B96A70:
	// addis r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 65536;
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,24120
	ctx.r7.s64 = ctx.r7.s64 + 24120;
	// li r11,0
	ctx.r11.s64 = 0;
	// subf. r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b96ab8
	if (cr0.eq) goto loc_82B96AB8;
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
loc_82B96A94:
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lbzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// beq cr6,0x82b96ab4
	if (cr6.eq) goto loc_82B96AB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b96a94
	if (cr6.lt) goto loc_82B96A94;
	// b 0x82b96ab8
	goto loc_82B96AB8;
loc_82B96AB4:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82B96AB8:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b96ad8
	if (cr6.eq) goto loc_82B96AD8;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82b96ad8
	if (cr6.lt) goto loc_82B96AD8;
loc_82B96AD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B96AD8:
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

__attribute__((alias("__imp__sub_82B96AF0"))) PPC_WEAK_FUNC(sub_82B96AF0);
PPC_FUNC_IMPL(__imp__sub_82B96AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B96AF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b96b1c
	if (!cr6.gt) goto loc_82B96B1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B96B1C;
	sub_831CC150(ctx, base);
loc_82B96B1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// bge cr6,0x82b96b7c
	if (!cr6.lt) goto loc_82B96B7C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8246c8c8
	ctx.lr = 0x82B96B3C;
	sub_8246C8C8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// bl 0x831ce420
	ctx.lr = 0x82B96B50;
	sub_831CE420(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r28,r3,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r3.s64;
	// beq cr6,0x82b96b68
	if (cr6.eq) goto loc_82B96B68;
	// bl 0x82416268
	ctx.lr = 0x82B96B68;
	sub_82416268(ctx, base);
loc_82B96B68:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82B96B7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B96B84"))) PPC_WEAK_FUNC(sub_82B96B84);
PPC_FUNC_IMPL(__imp__sub_82B96B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B96B88"))) PPC_WEAK_FUNC(sub_82B96B88);
PPC_FUNC_IMPL(__imp__sub_82B96B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B96B90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B96B9C;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82b96bc4
	if (!cr6.lt) goto loc_82B96BC4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B96BC4:
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addis r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 65536;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r30,r30,24120
	ctx.r30.s64 = ctx.r30.s64 + 24120;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b96c58
	if (cr6.eq) goto loc_82B96C58;
	// subf. r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b96c18
	if (cr0.eq) goto loc_82B96C18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B96BEC:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b96c60
	if (!cr6.gt) goto loc_82B96C60;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x82b96c58
	if (cr6.eq) goto loc_82B96C58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b96bec
	if (cr6.lt) goto loc_82B96BEC;
loc_82B96C18:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b96c50
	if (cr6.eq) goto loc_82B96C50;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B96C28:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b96c6c
	if (!cr6.gt) goto loc_82B96C6C;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// beq cr6,0x82b96c78
	if (cr6.eq) goto loc_82B96C78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b96c28
	if (cr6.lt) goto loc_82B96C28;
loc_82B96C50:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_82B96C58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B96C60:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B96C6C;
	sub_831CC188(ctx, base);
loc_82B96C6C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B96C78;
	sub_831CC188(ctx, base);
loc_82B96C78:
	// bl 0x830ff290
	ctx.lr = 0x82B96C7C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B96C80;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// beq cr6,0x82b96c90
	if (cr6.eq) goto loc_82B96C90;
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_82B96C90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B96C9C"))) PPC_WEAK_FUNC(sub_82B96C9C);
PPC_FUNC_IMPL(__imp__sub_82B96C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B96CA0"))) PPC_WEAK_FUNC(sub_82B96CA0);
PPC_FUNC_IMPL(__imp__sub_82B96CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r9,r4,-1
	xer.ca = ctx.r4.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r4.s64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b96cc4
	if (!cr6.lt) goto loc_82B96CC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82B96CC4:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subfic r8,r9,-1
	xer.ca = ctx.r9.u32 <= 4294967295;
	ctx.r8.s64 = -1 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b96cf0
	if (cr6.lt) goto loc_82B96CF0;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82B96CF0:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b96cfc
	if (!cr6.lt) goto loc_82B96CFC;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82B96CFC:
	// b 0x82b96af0
	sub_82B96AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B96D00"))) PPC_WEAK_FUNC(sub_82B96D00);
PPC_FUNC_IMPL(__imp__sub_82B96D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B96D04"))) PPC_WEAK_FUNC(sub_82B96D04);
PPC_FUNC_IMPL(__imp__sub_82B96D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B96D08"))) PPC_WEAK_FUNC(sub_82B96D08);
PPC_FUNC_IMPL(__imp__sub_82B96D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B96D10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,100(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// lwz r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b96d40
	if (cr6.eq) goto loc_82B96D40;
	// subf r29,r4,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82B96D38;
	sub_831CE420(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82B96D40:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B96D4C"))) PPC_WEAK_FUNC(sub_82B96D4C);
PPC_FUNC_IMPL(__imp__sub_82B96D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B96D50"))) PPC_WEAK_FUNC(sub_82B96D50);
PPC_FUNC_IMPL(__imp__sub_82B96D50) {
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
	// bge cr6,0x82b96d88
	if (!cr6.lt) goto loc_82B96D88;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82b96d8c
	if (!cr6.gt) goto loc_82B96D8C;
loc_82B96D88:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B96D8C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b96dd4
	if (cr6.eq) goto loc_82B96DD4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r30,r10,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b96db8
	if (!cr6.eq) goto loc_82B96DB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b96ca0
	ctx.lr = 0x82B96DB8;
	sub_82B96CA0(ctx, base);
loc_82B96DB8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b96e00
	if (cr6.eq) goto loc_82B96E00;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// b 0x82b96e00
	goto loc_82B96E00;
loc_82B96DD4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b96dec
	if (!cr6.eq) goto loc_82B96DEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b96ca0
	ctx.lr = 0x82B96DEC;
	sub_82B96CA0(ctx, base);
loc_82B96DEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b96e00
	if (cr6.eq) goto loc_82B96E00;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82B96E00:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_82B96E24"))) PPC_WEAK_FUNC(sub_82B96E24);
PPC_FUNC_IMPL(__imp__sub_82B96E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B96E28"))) PPC_WEAK_FUNC(sub_82B96E28);
PPC_FUNC_IMPL(__imp__sub_82B96E28) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20008
	ctx.r9.s64 = ctx.r11.s64 + -20008;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b96e6c
	if (cr6.eq) goto loc_82B96E6C;
	// bl 0x82416268
	ctx.lr = 0x82B96E6C;
	sub_82416268(ctx, base);
loc_82B96E6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82B96E84;
	sub_82D25548(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b96e9c
	if (cr6.eq) goto loc_82B96E9C;
	// bl 0x82416268
	ctx.lr = 0x82B96E98;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B96E9C:
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

__attribute__((alias("__imp__sub_82B96EB4"))) PPC_WEAK_FUNC(sub_82B96EB4);
PPC_FUNC_IMPL(__imp__sub_82B96EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B96EB8"))) PPC_WEAK_FUNC(sub_82B96EB8);
PPC_FUNC_IMPL(__imp__sub_82B96EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B96EC0;
	__savegprlr_20(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,100(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r21,r3,100
	ctx.r21.s64 = ctx.r3.s64 + 100;
	// lwz r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b96ef0
	if (cr6.eq) goto loc_82B96EF0;
	// subf r30,r4,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82B96EE8;
	sub_831CE420(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r11,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
loc_82B96EF0:
	// bl 0x831156e8
	ctx.lr = 0x82B96EF4;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r31,r11,37448
	ctx.r31.u64 = ctx.r11.u64 | 37448;
	// lwzx r20,r10,r31
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x831156e8
	ctx.lr = 0x82B96F08;
	sub_831156E8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,176
	ctx.r5.s64 = 176;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// addis r4,r8,6
	ctx.r4.s64 = ctx.r8.s64 + 393216;
	// addi r4,r4,-30316
	ctx.r4.s64 = ctx.r4.s64 + -30316;
	// bl 0x831ce980
	ctx.lr = 0x82B96F24;
	sub_831CE980(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B96F28;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82b96f48
	if (!cr6.lt) goto loc_82B96F48;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B96F48:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r11,24120
	ctx.r11.s64 = ctx.r11.s64 + 24120;
	// addi r10,r1,87
	ctx.r10.s64 = ctx.r1.s64 + 87;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B96F60:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82b96f60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B96F60;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lbz r24,156(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// lbz r23,97(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// li r25,0
	ctx.r25.s64 = 0;
	// lbz r22,96(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// lis r27,-31778
	ctx.r27.s64 = -2082603008;
	// addi r28,r11,-20312
	ctx.r28.s64 = ctx.r11.s64 + -20312;
loc_82B96F8C:
	// rlwinm r29,r25,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x82b97110
	if (cr6.eq) goto loc_82B97110;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82b96fb0
	if (!cr6.eq) goto loc_82B96FB0;
	// clrlwi r10,r22,24
	ctx.r10.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b97110
	if (cr6.eq) goto loc_82B97110;
loc_82B96FB0:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82b96fc4
	if (!cr6.eq) goto loc_82B96FC4;
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b97110
	if (cr6.eq) goto loc_82B97110;
loc_82B96FC4:
	// cmplwi cr6,r20,2
	cr6.compare<uint32_t>(ctx.r20.u32, 2, xer);
	// beq cr6,0x82b96fd4
	if (cr6.eq) goto loc_82B96FD4;
	// cmplwi cr6,r20,3
	cr6.compare<uint32_t>(ctx.r20.u32, 3, xer);
	// bne cr6,0x82b97020
	if (!cr6.eq) goto loc_82B97020;
loc_82B96FD4:
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82b97020
	if (cr6.gt) goto loc_82B97020;
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28664
	ctx.r12.s64 = ctx.r12.s64 + 28664;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B97110;
	case 1:
		goto loc_82B97110;
	case 2:
		goto loc_82B97020;
	case 3:
		goto loc_82B97110;
	case 4:
		goto loc_82B97020;
	case 5:
		goto loc_82B97110;
	case 6:
		goto loc_82B97020;
	case 7:
		goto loc_82B97110;
	case 8:
		goto loc_82B97110;
	case 9:
		goto loc_82B97110;
	default:
		return;
	}
	// lwz r21,28944(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28944);
	// lwz r21,28944(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28944);
	// lwz r21,28704(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28704);
	// lwz r21,28944(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28944);
	// lwz r21,28704(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28704);
	// lwz r21,28944(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28944);
	// lwz r21,28704(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28704);
	// lwz r21,28944(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28944);
	// lwz r21,28944(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28944);
	// lwz r21,28944(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28944);
loc_82B97020:
	// bl 0x830ff290
	ctx.lr = 0x82B97024;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B97028;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bne cr6,0x82b97060
	if (!cr6.eq) goto loc_82B97060;
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82b97060
	if (cr6.gt) goto loc_82B97060;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b97110
	if (cr6.eq) goto loc_82B97110;
	// bdz 0x82b97110
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B97110;
	// bdz 0x82b97110
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B97110;
	// bdz 0x82b97060
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B97060;
	// bdz 0x82b97110
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B97110;
	// b 0x82b97110
	goto loc_82B97110;
loc_82B97060:
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82b970fc
	if (!cr6.eq) goto loc_82B970FC;
	// lwz r3,2056(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B97080;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b970e0
	if (cr6.eq) goto loc_82B970E0;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r30,192(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
loc_82B97098:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x82b970a8
	if (cr6.lt) goto loc_82B970A8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82B970A8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b970d0
	if (cr6.eq) goto loc_82B970D0;
	// lwz r3,2056(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B970D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B970D0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x82b97098
	if (cr6.lt) goto loc_82B97098;
	// b 0x82b970fc
	goto loc_82B970FC;
loc_82B970E0:
	// bl 0x830ff290
	ctx.lr = 0x82B970E4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B970E8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// beq cr6,0x82b970fc
	if (cr6.eq) goto loc_82B970FC;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b97110
	if (!cr6.eq) goto loc_82B97110;
loc_82B970FC:
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82b96d50
	ctx.lr = 0x82B97110;
	sub_82B96D50(ctx, base);
loc_82B97110:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// blt cr6,0x82b96f8c
	if (cr6.lt) goto loc_82B96F8C;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9712C"))) PPC_WEAK_FUNC(sub_82B9712C);
PPC_FUNC_IMPL(__imp__sub_82B9712C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B97130"))) PPC_WEAK_FUNC(sub_82B97130);
PPC_FUNC_IMPL(__imp__sub_82B97130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B97138;
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
	ctx.lr = 0x82B9714C;
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
	ctx.lr = 0x82B97164;
	sub_82D253F8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-20008
	ctx.r8.s64 = ctx.r10.s64 + -20008;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stb r11,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r11.u8);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// bl 0x82b96eb8
	ctx.lr = 0x82B971A0;
	sub_82B96EB8(ctx, base);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,15900
	ctx.r30.s64 = ctx.r6.s64 + 15900;
	// lwz r4,15900(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 15900);
	// bl 0x82d20ae0
	ctx.lr = 0x82B971B4;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82B971C4;
	sub_82D23390(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82B971C8;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x82B971D0;
	sub_8311D680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B971DC;
	sub_82D195D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d198d0
	ctx.lr = 0x82B971E8;
	sub_82D198D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B971F4"))) PPC_WEAK_FUNC(sub_82B971F4);
PPC_FUNC_IMPL(__imp__sub_82B971F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B971F8"))) PPC_WEAK_FUNC(sub_82B971F8);
PPC_FUNC_IMPL(__imp__sub_82B971F8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B97210;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97220
	if (cr6.eq) goto loc_82B97220;
	// lwz r31,228(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// b 0x82b97254
	goto loc_82B97254;
loc_82B97220:
	// bl 0x831156e8
	ctx.lr = 0x82B97224;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82d19638
	ctx.lr = 0x82B97234;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r8,r10,35265
	ctx.r8.u64 = ctx.r10.u64 | 35265;
	// lbzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r31,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r7.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82B97254:
	// bl 0x831156e8
	ctx.lr = 0x82B97258;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b8f0
	ctx.lr = 0x82B97264;
	sub_8312B8F0(ctx, base);
	// bl 0x82d47a58
	ctx.lr = 0x82B97268;
	sub_82D47A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r9,-20116
	ctx.r4.s64 = ctx.r9.s64 + -20116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82B97290;
	sub_8259CC28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d47bb8
	ctx.lr = 0x82B97298;
	sub_82D47BB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d47b08
	ctx.lr = 0x82B972A0;
	sub_82D47B08(ctx, base);
	// bl 0x82d476f0
	ctx.lr = 0x82B972A4;
	sub_82D476F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B972B8"))) PPC_WEAK_FUNC(sub_82B972B8);
PPC_FUNC_IMPL(__imp__sub_82B972B8) {
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
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B972EC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97304
	if (cr6.eq) goto loc_82B97304;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b97130
	ctx.lr = 0x82B97300;
	sub_82B97130(ctx, base);
	// b 0x82b97308
	goto loc_82B97308;
loc_82B97304:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B97308:
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

__attribute__((alias("__imp__sub_82B97320"))) PPC_WEAK_FUNC(sub_82B97320);
PPC_FUNC_IMPL(__imp__sub_82B97320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B97328;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B97334;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B9733C;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97474
	if (cr6.eq) goto loc_82B97474;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// bl 0x831156e8
	ctx.lr = 0x82B97360;
	sub_831156E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9736C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9746c
	if (cr6.eq) goto loc_82B9746C;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r27,r11,-20120
	ctx.r27.s64 = ctx.r11.s64 + -20120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B97398;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9746c
	if (cr6.eq) goto loc_82B9746C;
	// lis r4,14
	ctx.r4.s64 = 917504;
	// bl 0x82d29598
	ctx.lr = 0x82B973A8;
	sub_82D29598(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B973B8;
	sub_82D2D510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9746c
	if (cr6.eq) goto loc_82B9746C;
	// bl 0x82d3b3f8
	ctx.lr = 0x82B973C8;
	sub_82D3B3F8(ctx, base);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf. r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82b9746c
	if (cr0.eq) goto loc_82B9746C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82B973E0:
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x82b9747c
	if (!cr6.gt) goto loc_82B9747C;
	// lbzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bge cr6,0x82b9744c
	if (!cr6.lt) goto loc_82B9744C;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x82b97420
	if (!cr6.eq) goto loc_82B97420;
	// lis r4,14
	ctx.r4.s64 = 917504;
	// ori r4,r4,22
	ctx.r4.u64 = ctx.r4.u64 | 22;
	// bl 0x82d04220
	ctx.lr = 0x82B9740C;
	sub_82D04220(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1eb8
	ctx.lr = 0x82B9741C;
	sub_825A1EB8(ctx, base);
	// b 0x82b97430
	goto loc_82B97430;
loc_82B97420:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r27,-140
	ctx.r10.s64 = ctx.r27.s64 + -140;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d04220
	ctx.lr = 0x82B97430;
	sub_82D04220(ctx, base);
loc_82B97430:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b97444
	if (!cr6.lt) goto loc_82B97444;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82B97444:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82B9744C;
	sub_82D3B548(ctx, base);
loc_82B9744C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b973e0
	if (cr6.lt) goto loc_82B973E0;
loc_82B9746C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B97474;
	sub_8387E8E0(ctx, base);
loc_82B97474:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B9747C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B97488;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B97488"))) PPC_WEAK_FUNC(sub_82B97488);
PPC_FUNC_IMPL(__imp__sub_82B97488) {
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
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b974dc
	if (cr6.eq) goto loc_82B974DC;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,388(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B974C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b974dc
	if (!cr6.eq) goto loc_82B974DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b971f8
	ctx.lr = 0x82B974D4;
	sub_82B971F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
loc_82B974DC:
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

__attribute__((alias("__imp__sub_82B974F0"))) PPC_WEAK_FUNC(sub_82B974F0);
PPC_FUNC_IMPL(__imp__sub_82B974F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B974F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9750C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B97514;
	sub_82D33DB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9765c
	if (cr6.eq) goto loc_82B9765C;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82b9765c
	if (cr6.eq) goto loc_82B9765C;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82b9765c
	if (cr6.eq) goto loc_82B9765C;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
loc_82B97550:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x82b97588
	if (cr6.eq) goto loc_82B97588;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// beq cr6,0x82b9757c
	if (cr6.eq) goto loc_82B9757C;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// beq cr6,0x82b97570
	if (cr6.eq) goto loc_82B97570;
	// li r3,255
	ctx.r3.s64 = 255;
	// b 0x82b97590
	goto loc_82B97590;
loc_82B97570:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b968c8
	ctx.lr = 0x82B97578;
	sub_82B968C8(ctx, base);
	// b 0x82b97590
	goto loc_82B97590;
loc_82B9757C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b96768
	ctx.lr = 0x82B97584;
	sub_82B96768(ctx, base);
	// b 0x82b97590
	goto loc_82B97590;
loc_82B97588:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b965d8
	ctx.lr = 0x82B97590;
	sub_82B965D8(ctx, base);
loc_82B97590:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stbx r3,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u8);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x82b97550
	if (!cr6.gt) goto loc_82B97550;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x82b975c4
	if (!cr6.eq) goto loc_82B975C4;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r29,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r29.u8);
	// b 0x82b975cc
	goto loc_82B975CC;
loc_82B975C4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r29,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r29.u8);
loc_82B975CC:
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b96eb8
	ctx.lr = 0x82B975D8;
	sub_82B96EB8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b97320
	ctx.lr = 0x82B975E0;
	sub_82B97320(ctx, base);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82B975E4:
	// cmplw cr6,r25,r29
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b97648
	if (cr6.eq) goto loc_82B97648;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B975F8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9765c
	if (cr6.eq) goto loc_82B9765C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// bgt cr6,0x82b97648
	if (cr6.gt) goto loc_82B97648;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B97624;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9765c
	if (cr6.eq) goto loc_82B9765C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d3d190
	ctx.lr = 0x82B97638;
	sub_82D3D190(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b96500
	ctx.lr = 0x82B97648;
	sub_82B96500(ctx, base);
loc_82B97648:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// ble cr6,0x82b975e4
	if (!cr6.gt) goto loc_82B975E4;
loc_82B9765C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B97664"))) PPC_WEAK_FUNC(sub_82B97664);
PPC_FUNC_IMPL(__imp__sub_82B97664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B97668"))) PPC_WEAK_FUNC(sub_82B97668);
PPC_FUNC_IMPL(__imp__sub_82B97668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B97670;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9767C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B97684;
	sub_82D33DB0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97830
	if (cr6.eq) goto loc_82B97830;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82B976A8;
	sub_831156E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b97320
	ctx.lr = 0x82B976B0;
	sub_82B97320(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r26,r10,-20140
	ctx.r26.s64 = ctx.r10.s64 + -20140;
	// addi r25,r11,-19720
	ctx.r25.s64 = ctx.r11.s64 + -19720;
loc_82B976C8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B976D4;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97830
	if (cr6.eq) goto loc_82B97830;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// addi r4,r26,-8
	ctx.r4.s64 = ctx.r26.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B976FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97828
	if (cr6.eq) goto loc_82B97828;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r25
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x82d29598
	ctx.lr = 0x82B97710;
	sub_82D29598(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B97724;
	sub_82D21408(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B97740;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B97750;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97828
	if (cr6.eq) goto loc_82B97828;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// beq cr6,0x82b97794
	if (cr6.eq) goto loc_82B97794;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// beq cr6,0x82b97788
	if (cr6.eq) goto loc_82B97788;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// beq cr6,0x82b9777c
	if (cr6.eq) goto loc_82B9777C;
	// li r3,255
	ctx.r3.s64 = 255;
	// b 0x82b9779c
	goto loc_82B9779C;
loc_82B9777C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b968c8
	ctx.lr = 0x82B97784;
	sub_82B968C8(ctx, base);
	// b 0x82b9779c
	goto loc_82B9779C;
loc_82B97788:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b96768
	ctx.lr = 0x82B97790;
	sub_82B96768(ctx, base);
	// b 0x82b9779c
	goto loc_82B9779C;
loc_82B97794:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b965d8
	ctx.lr = 0x82B9779C;
	sub_82B965D8(ctx, base);
loc_82B9779C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x82b977ec
	if (cr6.gt) goto loc_82B977EC;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// beq cr6,0x82b977e0
	if (cr6.eq) goto loc_82B977E0;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// beq cr6,0x82b977d4
	if (cr6.eq) goto loc_82B977D4;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// beq cr6,0x82b977c8
	if (cr6.eq) goto loc_82B977C8;
	// li r3,255
	ctx.r3.s64 = 255;
	// b 0x82b977f8
	goto loc_82B977F8;
loc_82B977C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b968c8
	ctx.lr = 0x82B977D0;
	sub_82B968C8(ctx, base);
	// b 0x82b977f8
	goto loc_82B977F8;
loc_82B977D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b96768
	ctx.lr = 0x82B977DC;
	sub_82B96768(ctx, base);
	// b 0x82b977f8
	goto loc_82B977F8;
loc_82B977E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b965d8
	ctx.lr = 0x82B977E8;
	sub_82B965D8(ctx, base);
	// b 0x82b977f8
	goto loc_82B977F8;
loc_82B977EC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b963a0
	ctx.lr = 0x82B977F8;
	sub_82B963A0(ctx, base);
loc_82B977F8:
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3d3b0
	ctx.lr = 0x82B9780C;
	sub_82D3D3B0(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// ble cr6,0x82b976c8
	if (!cr6.gt) goto loc_82B976C8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B97828:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B97830;
	sub_8387E8E0(ctx, base);
loc_82B97830:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B97838"))) PPC_WEAK_FUNC(sub_82B97838);
PPC_FUNC_IMPL(__imp__sub_82B97838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B97840;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B97858;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B97860;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97b54
	if (cr6.eq) goto loc_82B97B54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r10,r11,-24672
	ctx.r10.s64 = ctx.r11.s64 + -24672;
	// stb r26,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r26.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// bl 0x825a9e30
	ctx.lr = 0x82B97894;
	sub_825A9E30(ctx, base);
	// lbz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b978a8
	if (!cr6.eq) goto loc_82B978A8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a9e30
	ctx.lr = 0x82B978A8;
	sub_825A9E30(ctx, base);
loc_82B978A8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b978c4
	if (!cr6.eq) goto loc_82B978C4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82B978C4:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B978CC;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82b978f4
	if (!cr6.lt) goto loc_82B978F4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B978F4:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r11,24120
	ctx.r11.s64 = ctx.r11.s64 + 24120;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B9790C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82b9790c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B9790C;
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r9,104(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r28,1
	ctx.r28.s64 = 1;
	// lbz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf. r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b9795c
	if (cr0.eq) goto loc_82B9795C;
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
loc_82B9793C:
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// beq cr6,0x82b97958
	if (cr6.eq) goto loc_82B97958;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82b9793c
	if (cr6.lt) goto loc_82B9793C;
	// b 0x82b9795c
	goto loc_82B9795C;
loc_82B97958:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_82B9795C:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b97a90
	if (cr6.eq) goto loc_82B97A90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b96268
	ctx.lr = 0x82B97970;
	sub_82B96268(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stb r3,64(r29)
	PPC_STORE_U8(ctx.r29.u32 + 64, ctx.r3.u8);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82b979a0
	if (cr6.eq) goto loc_82B979A0;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x82b97998
	if (cr6.eq) goto loc_82B97998;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82b979a0
	if (cr6.lt) goto loc_82B979A0;
	// bne cr6,0x82b979a4
	if (!cr6.eq) goto loc_82B979A4;
loc_82B97998:
	// stb r28,65(r29)
	PPC_STORE_U8(ctx.r29.u32 + 65, ctx.r28.u8);
	// b 0x82b979a4
	goto loc_82B979A4;
loc_82B979A0:
	// stb r26,65(r29)
	PPC_STORE_U8(ctx.r29.u32 + 65, ctx.r26.u8);
loc_82B979A4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lfs f30,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,20048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f31.f64 = double(temp.f32);
loc_82B979B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B979C4;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97b64
	if (cr6.eq) goto loc_82B97B64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B979DC;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97b94
	if (cr6.eq) goto loc_82B97B94;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x82b97a1c
	if (cr6.eq) goto loc_82B97A1C;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// beq cr6,0x82b97a10
	if (cr6.eq) goto loc_82B97A10;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// beq cr6,0x82b97a04
	if (cr6.eq) goto loc_82B97A04;
	// li r3,255
	ctx.r3.s64 = 255;
	// b 0x82b97a24
	goto loc_82B97A24;
loc_82B97A04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b968c8
	ctx.lr = 0x82B97A0C;
	sub_82B968C8(ctx, base);
	// b 0x82b97a24
	goto loc_82B97A24;
loc_82B97A10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b96768
	ctx.lr = 0x82B97A18;
	sub_82B96768(ctx, base);
	// b 0x82b97a24
	goto loc_82B97A24;
loc_82B97A1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b965d8
	ctx.lr = 0x82B97A24;
	sub_82B965D8(ctx, base);
loc_82B97A24:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// beq cr6,0x82b97a64
	if (cr6.eq) goto loc_82B97A64;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// beq cr6,0x82b97a5c
	if (cr6.eq) goto loc_82B97A5C;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82b97a6c
	if (!cr6.eq) goto loc_82B97A6C;
	// stfs f0,76(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 76, temp.u32);
	// b 0x82b97a6c
	goto loc_82B97A6C;
loc_82B97A5C:
	// stfs f0,72(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 72, temp.u32);
	// b 0x82b97a6c
	goto loc_82B97A6C;
loc_82B97A64:
	// fsubs f0,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f0,68(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 68, temp.u32);
loc_82B97A6C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x82b979b8
	if (!cr6.gt) goto loc_82B979B8;
	// lbz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 80);
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,80(r29)
	PPC_STORE_U8(ctx.r29.u32 + 80, ctx.r9.u8);
loc_82B97A90:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b97af4
	if (cr6.eq) goto loc_82B97AF4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_82B97AA4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r28,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82b97aa4
	if (!cr0.eq) goto loc_82B97AA4;
loc_82B97ABC:
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b97af0
	if (!cr6.eq) goto loc_82B97AF0;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x82B97AD0;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,19664
	ctx.r5.s64 = ctx.r11.s64 + 19664;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B97AF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B97AF0:
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
loc_82B97AF4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r9,r10,-24712
	ctx.r9.s64 = ctx.r10.s64 + -24712;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x82b97b34
	if (cr6.eq) goto loc_82B97B34;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b97b34
	if (cr6.eq) goto loc_82B97B34;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82B97B2C;
	sub_8353F3B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
loc_82B97B34:
	// stb r26,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r26.u8);
loc_82B97B38:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b97b54
	if (cr6.eq) goto loc_82B97B54;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82B97B54;
	sub_8353F3B8(ctx, base);
loc_82B97B54:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B97B64:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b97af4
	if (cr6.eq) goto loc_82B97AF4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_82B97B78:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r28,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82b97b78
	if (!cr0.eq) goto loc_82B97B78;
	// b 0x82b97abc
	goto loc_82B97ABC;
loc_82B97B94:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b97bac
	if (cr6.eq) goto loc_82B97BAC;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825a5c98
	ctx.lr = 0x82B97BA8;
	sub_825A5C98(ctx, base);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
loc_82B97BAC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82B97BC0;
	sub_825E0CF8(ctx, base);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x82b97b38
	goto loc_82B97B38;
}

__attribute__((alias("__imp__sub_82B97BC8"))) PPC_WEAK_FUNC(sub_82B97BC8);
PPC_FUNC_IMPL(__imp__sub_82B97BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B97BD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B97BE0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B97BE8;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97ddc
	if (cr6.eq) goto loc_82B97DDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B97BFC;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b97c48
	if (cr6.eq) goto loc_82B97C48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B97C10;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97ddc
	if (cr6.eq) goto loc_82B97DDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B97C28;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97ddc
	if (cr6.eq) goto loc_82B97DDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b96b88
	ctx.lr = 0x82B97C3C;
	sub_82B96B88(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B97C48;
	sub_82D3B298(ctx, base);
loc_82B97C48:
	// bl 0x831156e8
	ctx.lr = 0x82B97C4C;
	sub_831156E8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_82B97C50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B97C58;
	sub_82D19BB0(ctx, base);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, xer);
	// beq cr6,0x82b97da4
	if (cr6.eq) goto loc_82B97DA4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B97C6C;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97ddc
	if (cr6.eq) goto loc_82B97DDC;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// beq cr6,0x82b97cb0
	if (cr6.eq) goto loc_82B97CB0;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// beq cr6,0x82b97ca4
	if (cr6.eq) goto loc_82B97CA4;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// beq cr6,0x82b97c98
	if (cr6.eq) goto loc_82B97C98;
	// li r3,255
	ctx.r3.s64 = 255;
	// b 0x82b97cb8
	goto loc_82B97CB8;
loc_82B97C98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b968c8
	ctx.lr = 0x82B97CA0;
	sub_82B968C8(ctx, base);
	// b 0x82b97cb8
	goto loc_82B97CB8;
loc_82B97CA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b96768
	ctx.lr = 0x82B97CAC;
	sub_82B96768(ctx, base);
	// b 0x82b97cb8
	goto loc_82B97CB8;
loc_82B97CB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b965d8
	ctx.lr = 0x82B97CB8;
	sub_82B965D8(ctx, base);
loc_82B97CB8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x82b97d5c
	if (cr6.gt) goto loc_82B97D5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b96a10
	ctx.lr = 0x82B97CCC;
	sub_82B96A10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82B97CE0;
	sub_82D2B608(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B97CF0;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97ddc
	if (cr6.eq) goto loc_82B97DDC;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// beq cr6,0x82b97d34
	if (cr6.eq) goto loc_82B97D34;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// beq cr6,0x82b97d28
	if (cr6.eq) goto loc_82B97D28;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// beq cr6,0x82b97d1c
	if (cr6.eq) goto loc_82B97D1C;
	// li r3,255
	ctx.r3.s64 = 255;
	// b 0x82b97d3c
	goto loc_82B97D3C;
loc_82B97D1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b968c8
	ctx.lr = 0x82B97D24;
	sub_82B968C8(ctx, base);
	// b 0x82b97d3c
	goto loc_82B97D3C;
loc_82B97D28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b96768
	ctx.lr = 0x82B97D30;
	sub_82B96768(ctx, base);
	// b 0x82b97d3c
	goto loc_82B97D3C;
loc_82B97D34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b965d8
	ctx.lr = 0x82B97D3C;
	sub_82B965D8(ctx, base);
loc_82B97D3C:
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3d190
	ctx.lr = 0x82B97D4C;
	sub_82D3D190(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3d548
	ctx.lr = 0x82B97D58;
	sub_82D3D548(ctx, base);
	// b 0x82b97da4
	goto loc_82B97DA4;
loc_82B97D5C:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B97D70;
	sub_82D2B608(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B97D80;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97ddc
	if (cr6.eq) goto loc_82B97DDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d548
	ctx.lr = 0x82B97D94;
	sub_82D3D548(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3d190
	ctx.lr = 0x82B97DA4;
	sub_82D3D190(ctx, base);
loc_82B97DA4:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x82b97c50
	if (!cr6.gt) goto loc_82B97C50;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b97838
	ctx.lr = 0x82B97DC4;
	sub_82B97838(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82B97DC8;
	sub_831021A0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// addi r5,r11,-20653
	ctx.r5.s64 = ctx.r11.s64 + -20653;
	// ori r4,r4,55
	ctx.r4.u64 = ctx.r4.u64 | 55;
	// bl 0x83102a08
	ctx.lr = 0x82B97DDC;
	sub_83102A08(ctx, base);
loc_82B97DDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B97DE4"))) PPC_WEAK_FUNC(sub_82B97DE4);
PPC_FUNC_IMPL(__imp__sub_82B97DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B97DE8"))) PPC_WEAK_FUNC(sub_82B97DE8);
PPC_FUNC_IMPL(__imp__sub_82B97DE8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82B97E0C;
	sub_82D1ED60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B97E14;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-20168
	ctx.r30.s64 = ctx.r11.s64 + -20168;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B97E34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B97E3C;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B97E54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b97668
	ctx.lr = 0x82B97E5C;
	sub_82B97668(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b97bc8
	ctx.lr = 0x82B97E68;
	sub_82B97BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B97E70;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B97E88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b97edc
	if (cr6.eq) goto loc_82B97EDC;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,135
	ctx.r4.u64 = ctx.r4.u64 | 135;
	// bl 0x82d30340
	ctx.lr = 0x82B97EA0;
	sub_82D30340(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,388(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B97EB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B97EC4;
	sub_82D19A78(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B97EDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B97EDC:
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

__attribute__((alias("__imp__sub_82B97EF8"))) PPC_WEAK_FUNC(sub_82B97EF8);
PPC_FUNC_IMPL(__imp__sub_82B97EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B97F00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B97F14;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82b97f3c
	if (!cr6.lt) goto loc_82B97F3C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B97F3C:
	// addis r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 65536;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r28,r28,24120
	ctx.r28.s64 = ctx.r28.s64 + 24120;
	// bl 0x82d19a78
	ctx.lr = 0x82B97F4C;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B97F54;
	sub_82D33DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B97F5C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b981e4
	if (cr6.eq) goto loc_82B981E4;
	// lbz r31,96(r27)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r27.u32 + 96);
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bgt cr6,0x82b981d8
	if (cr6.gt) goto loc_82B981D8;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b9803c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B9803C;
	// bdzf 4*cr6+eq,0x82b980cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B980CC;
	// bne cr6,0x82b9815c
	if (!cr6.eq) goto loc_82B9815C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B97F94;
	sub_82D2D510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b981e4
	if (cr6.eq) goto loc_82B981E4;
	// bl 0x83a970c8
	ctx.lr = 0x82B97FA4;
	sub_83A970C8(ctx, base);
	// lbz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 96);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82b97fd4
	if (cr6.eq) goto loc_82B97FD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a970c8
	ctx.lr = 0x82B97FBC;
	sub_83A970C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B97FC4;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37446
	ctx.r9.u64 = ctx.r11.u64 | 37446;
	// stbx r29,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u8);
loc_82B97FD4:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lwz r10,104(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82b97ff4
	if (cr6.gt) goto loc_82B97FF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B97FF4;
	sub_831CC188(ctx, base);
loc_82B97FF4:
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// bne cr6,0x82b9801c
	if (!cr6.eq) goto loc_82B9801C;
	// stb r29,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r29.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B98014;
	sub_82B97BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B9801C:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82b981d8
	if (!cr6.eq) goto loc_82B981D8;
	// stb r29,9(r28)
	PPC_STORE_U8(ctx.r28.u32 + 9, ctx.r29.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B98034;
	sub_82B97BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B9803C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B9804C;
	sub_82D2D510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b981e4
	if (cr6.eq) goto loc_82B981E4;
	// bl 0x82dad040
	ctx.lr = 0x82B9805C;
	sub_82DAD040(ctx, base);
	// lbz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 96);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82b9808c
	if (cr6.eq) goto loc_82B9808C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dad040
	ctx.lr = 0x82B98070;
	sub_82DAD040(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B98078;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,37446
	ctx.r8.u64 = ctx.r11.u64 | 37446;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
loc_82B9808C:
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x82b980b4
	if (!cr6.eq) goto loc_82B980B4;
	// stb r11,5(r28)
	PPC_STORE_U8(ctx.r28.u32 + 5, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B980AC;
	sub_82B97BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B980B4:
	// stb r11,2(r28)
	PPC_STORE_U8(ctx.r28.u32 + 2, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B980C4;
	sub_82B97BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B980CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B980DC;
	sub_82D2D510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b981e4
	if (cr6.eq) goto loc_82B981E4;
	// bl 0x82dad040
	ctx.lr = 0x82B980EC;
	sub_82DAD040(ctx, base);
	// lbz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 96);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82b9811c
	if (cr6.eq) goto loc_82B9811C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dad040
	ctx.lr = 0x82B98100;
	sub_82DAD040(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B98108;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,37446
	ctx.r8.u64 = ctx.r11.u64 | 37446;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
loc_82B9811C:
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x82b98144
	if (!cr6.eq) goto loc_82B98144;
	// stb r11,6(r28)
	PPC_STORE_U8(ctx.r28.u32 + 6, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B9813C;
	sub_82B97BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B98144:
	// stb r11,3(r28)
	PPC_STORE_U8(ctx.r28.u32 + 3, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B98154;
	sub_82B97BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B9815C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B9816C;
	sub_82D2D510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b981e4
	if (cr6.eq) goto loc_82B981E4;
	// bl 0x82dad040
	ctx.lr = 0x82B9817C;
	sub_82DAD040(ctx, base);
	// lbz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 96);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82b981ac
	if (cr6.eq) goto loc_82B981AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dad040
	ctx.lr = 0x82B98190;
	sub_82DAD040(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B98198;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,37446
	ctx.r8.u64 = ctx.r11.u64 | 37446;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
loc_82B981AC:
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x82b981d4
	if (!cr6.eq) goto loc_82B981D4;
	// stb r11,7(r28)
	PPC_STORE_U8(ctx.r28.u32 + 7, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B981CC;
	sub_82B97BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B981D4:
	// stb r11,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r11.u8);
loc_82B981D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B981E4;
	sub_82B97BC8(ctx, base);
loc_82B981E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B981EC"))) PPC_WEAK_FUNC(sub_82B981EC);
PPC_FUNC_IMPL(__imp__sub_82B981EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B981F0"))) PPC_WEAK_FUNC(sub_82B981F0);
PPC_FUNC_IMPL(__imp__sub_82B981F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B981F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B9820C;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82b98234
	if (!cr6.lt) goto loc_82B98234;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B98234:
	// addis r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 65536;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// addi r31,r31,24120
	ctx.r31.s64 = ctx.r31.s64 + 24120;
	// bgt cr6,0x82b983a4
	if (cr6.gt) goto loc_82B983A4;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b982c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B982C8;
	// bdzf 4*cr6+eq,0x82b98318
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B98318;
	// bne cr6,0x82b98368
	if (!cr6.eq) goto loc_82B98368;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lwz r10,104(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b98278
	if (cr6.gt) goto loc_82B98278;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B98278;
	sub_831CC188(ctx, base);
loc_82B98278:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bne cr6,0x82b982a4
	if (!cr6.eq) goto loc_82B982A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B9829C;
	sub_82B97BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B982A4:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82b983a4
	if (!cr6.eq) goto loc_82B983A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B982C0;
	sub_82B97BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B982C8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b974f0
	ctx.lr = 0x82B982D8;
	sub_82B974F0(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x82b98300
	if (!cr6.eq) goto loc_82B98300;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B982F8;
	sub_82B97BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B98300:
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B98310;
	sub_82B97BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B98318:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b974f0
	ctx.lr = 0x82B98328;
	sub_82B974F0(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x82b98350
	if (!cr6.eq) goto loc_82B98350;
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B98348;
	sub_82B97BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B98350:
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B98360;
	sub_82B97BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B98368:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b974f0
	ctx.lr = 0x82B98378;
	sub_82B974F0(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x82b983a0
	if (!cr6.eq) goto loc_82B983A0;
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B98398;
	sub_82B97BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B983A0:
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_82B983A4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b97bc8
	ctx.lr = 0x82B983B0;
	sub_82B97BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B983B8"))) PPC_WEAK_FUNC(sub_82B983B8);
PPC_FUNC_IMPL(__imp__sub_82B983B8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82B983D4;
	sub_82D198D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82B983DC;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b98404
	if (!cr6.eq) goto loc_82B98404;
	// bl 0x831156e8
	ctx.lr = 0x82B983EC;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 131072;
	// addi r10,r10,-26044
	ctx.r10.s64 = ctx.r10.s64 + -26044;
	// lwz r11,3832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3832);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,3832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3832, ctx.r9.u32);
loc_82B98404:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82cbe500
	ctx.lr = 0x82B98410;
	sub_82CBE500(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1052
	ctx.r3.s64 = ctx.r31.s64 + 1052;
	// bl 0x82cbe500
	ctx.lr = 0x82B9841C;
	sub_82CBE500(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9842C;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9843C;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9844C;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9845C;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_82B98474"))) PPC_WEAK_FUNC(sub_82B98474);
PPC_FUNC_IMPL(__imp__sub_82B98474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B98478"))) PPC_WEAK_FUNC(sub_82B98478);
PPC_FUNC_IMPL(__imp__sub_82B98478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B98488"))) PPC_WEAK_FUNC(sub_82B98488);
PPC_FUNC_IMPL(__imp__sub_82B98488) {
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
	// cmplwi cr6,r4,17
	cr6.compare<uint32_t>(ctx.r4.u32, 17, xer);
	// blt cr6,0x82b984bc
	if (cr6.lt) goto loc_82B984BC;
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
loc_82B984BC:
	// bl 0x82d19a68
	ctx.lr = 0x82B984C0;
	sub_82D19A68(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-18668
	ctx.r4.s64 = ctx.r11.s64 + -18668;
	// bl 0x82d2ec48
	ctx.lr = 0x82B984CC;
	sub_82D2EC48(ctx, base);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,16280
	ctx.r8.s64 = ctx.r10.s64 + 16280;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82d2e228
	ctx.lr = 0x82B984E4;
	sub_82D2E228(ctx, base);
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

__attribute__((alias("__imp__sub_82B984F8"))) PPC_WEAK_FUNC(sub_82B984F8);
PPC_FUNC_IMPL(__imp__sub_82B984F8) {
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
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// blt cr6,0x82b9852c
	if (cr6.lt) goto loc_82B9852C;
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
loc_82B9852C:
	// bl 0x82d19a68
	ctx.lr = 0x82B98530;
	sub_82D19A68(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-18632
	ctx.r4.s64 = ctx.r11.s64 + -18632;
	// bl 0x82d2ec48
	ctx.lr = 0x82B9853C;
	sub_82D2EC48(ctx, base);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,16348
	ctx.r8.s64 = ctx.r10.s64 + 16348;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82d2e228
	ctx.lr = 0x82B98554;
	sub_82D2E228(ctx, base);
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

__attribute__((alias("__imp__sub_82B98568"))) PPC_WEAK_FUNC(sub_82B98568);
PPC_FUNC_IMPL(__imp__sub_82B98568) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r4,140
	cr6.compare<uint32_t>(ctx.r4.u32, 140, xer);
	// bge cr6,0x82b9861c
	if (!cr6.lt) goto loc_82B9861C;
	// bl 0x82d19a68
	ctx.lr = 0x82B98590;
	sub_82D19A68(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-14568
	ctx.r4.s64 = ctx.r11.s64 + -14568;
	// bl 0x82d2ec48
	ctx.lr = 0x82B9859C;
	sub_82D2EC48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9861c
	if (cr6.eq) goto loc_82B9861C;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16376
	ctx.r9.s64 = ctx.r11.s64 + 16376;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d2e228
	ctx.lr = 0x82B985BC;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9861c
	if (cr6.eq) goto loc_82B9861C;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-14392
	ctx.r10.s64 = ctx.r10.s64 + -14392;
loc_82B985D0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82b985f0
	if (!cr6.gt) goto loc_82B985F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x82b985d0
	if (cr6.lt) goto loc_82B985D0;
	// b 0x82b9861c
	goto loc_82B9861C;
loc_82B985F0:
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bge cr6,0x82b9861c
	if (!cr6.lt) goto loc_82B9861C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,16356
	ctx.r7.s64 = ctx.r9.s64 + 16356;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,72(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B9861C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9861C:
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

__attribute__((alias("__imp__sub_82B98634"))) PPC_WEAK_FUNC(sub_82B98634);
PPC_FUNC_IMPL(__imp__sub_82B98634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B98638"))) PPC_WEAK_FUNC(sub_82B98638);
PPC_FUNC_IMPL(__imp__sub_82B98638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B98640;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_82B98660:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B98664:
	// cmplwi cr6,r30,14
	cr6.compare<uint32_t>(ctx.r30.u32, 14, xer);
	// blt cr6,0x82b98674
	if (cr6.lt) goto loc_82B98674;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82b98694
	goto loc_82B98694;
loc_82B98674:
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x82b98684
	if (cr6.lt) goto loc_82B98684;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82b98694
	goto loc_82B98694;
loc_82B98684:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// subfic r4,r30,13
	xer.ca = ctx.r30.u32 <= 13;
	ctx.r4.s64 = 13 - ctx.r30.s64;
	// addi r3,r27,4152
	ctx.r3.s64 = ctx.r27.s64 + 4152;
	// bl 0x8291bb78
	ctx.lr = 0x82B98694;
	sub_8291BB78(ctx, base);
loc_82B98694:
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b98568
	ctx.lr = 0x82B986A0;
	sub_82B98568(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x82b98664
	if (cr6.lt) goto loc_82B98664;
	// addi r29,r29,10
	ctx.r29.s64 = ctx.r29.s64 + 10;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r29,140
	cr6.compare<uint32_t>(ctx.r29.u32, 140, xer);
	// blt cr6,0x82b98660
	if (cr6.lt) goto loc_82B98660;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B986C8"))) PPC_WEAK_FUNC(sub_82B986C8);
PPC_FUNC_IMPL(__imp__sub_82B986C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B986D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,956
	ctx.r11.s64 = ctx.r3.s64 + 956;
	// li r30,16
	ctx.r30.s64 = 16;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B986EC:
	// addi r31,r31,-56
	ctx.r31.s64 = ctx.r31.s64 + -56;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b9870c
	if (cr6.lt) goto loc_82B9870C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B9870C;
	sub_825952B8(ctx, base);
loc_82B9870C:
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
	// bge 0x82b986ec
	if (!cr0.lt) goto loc_82B986EC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B98728"))) PPC_WEAK_FUNC(sub_82B98728);
PPC_FUNC_IMPL(__imp__sub_82B98728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// lfs f0,9008(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r8,13
	ctx.r8.s64 = 13;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82B9875C:
	// stfs f0,-24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stb r10,-32(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32, ctx.r10.u8);
	// stw r10,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r10.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82b98788
	if (cr6.lt) goto loc_82B98788;
	// lwz r5,-20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// b 0x82b9878c
	goto loc_82B9878C;
loc_82B98788:
	// addi r5,r11,-20
	ctx.r5.s64 = ctx.r11.s64 + -20;
loc_82B9878C:
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82b987c8
	if (cr6.lt) goto loc_82B987C8;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82b987cc
	goto loc_82B987CC;
loc_82B987C8:
	// addi r5,r11,36
	ctx.r5.s64 = ctx.r11.s64 + 36;
loc_82B987CC:
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// stw r6,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r6.u32);
	// stb r10,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r7,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r7.u32);
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// lwz r5,112(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82b98808
	if (cr6.lt) goto loc_82B98808;
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// b 0x82b9880c
	goto loc_82B9880C;
loc_82B98808:
	// addi r5,r11,92
	ctx.r5.s64 = ctx.r11.s64 + 92;
loc_82B9880C:
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stfs f0,144(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stw r8,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r8.u32);
	// stb r10,124(r11)
	PPC_STORE_U8(ctx.r11.u32 + 124, ctx.r10.u8);
	// stw r9,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r9.u32);
	// stw r6,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r6.u32);
	// stb r10,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r10.u8);
	// stw r10,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// stw r7,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r7.u32);
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// lwz r5,168(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82b98848
	if (cr6.lt) goto loc_82B98848;
	// lwz r5,148(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x82b9884c
	goto loc_82B9884C;
loc_82B98848:
	// addi r5,r11,148
	ctx.r5.s64 = ctx.r11.s64 + 148;
loc_82B9884C:
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stfs f0,200(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// stw r8,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r8.u32);
	// stb r10,180(r11)
	PPC_STORE_U8(ctx.r11.u32 + 180, ctx.r10.u8);
	// stw r9,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r9.u32);
	// stw r6,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r6.u32);
	// stb r10,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r10.u8);
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// stw r7,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r7.u32);
	// stw r10,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r10.u32);
	// lwz r5,224(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82b98888
	if (cr6.lt) goto loc_82B98888;
	// lwz r5,204(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// b 0x82b9888c
	goto loc_82B9888C;
loc_82B98888:
	// addi r5,r11,204
	ctx.r5.s64 = ctx.r11.s64 + 204;
loc_82B9888C:
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stfs f0,256(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 256, temp.u32);
	// stw r8,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r8.u32);
	// stb r10,236(r11)
	PPC_STORE_U8(ctx.r11.u32 + 236, ctx.r10.u8);
	// stw r9,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r9.u32);
	// stw r6,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r6.u32);
	// stb r10,248(r11)
	PPC_STORE_U8(ctx.r11.u32 + 248, ctx.r10.u8);
	// stw r10,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r10.u32);
	// stw r7,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r7.u32);
	// stw r10,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// lwz r5,280(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82b988c8
	if (cr6.lt) goto loc_82B988C8;
	// lwz r5,260(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// b 0x82b988cc
	goto loc_82B988CC;
loc_82B988C8:
	// addi r5,r11,260
	ctx.r5.s64 = ctx.r11.s64 + 260;
loc_82B988CC:
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stfs f0,312(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 312, temp.u32);
	// stw r8,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r8.u32);
	// stb r10,292(r11)
	PPC_STORE_U8(ctx.r11.u32 + 292, ctx.r10.u8);
	// stw r9,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r9.u32);
	// stw r6,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r6.u32);
	// stb r10,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r10.u8);
	// stw r10,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r10.u32);
	// stw r7,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r7.u32);
	// stw r10,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r10.u32);
	// lwz r5,336(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82b98908
	if (cr6.lt) goto loc_82B98908;
	// lwz r5,316(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// b 0x82b9890c
	goto loc_82B9890C;
loc_82B98908:
	// addi r5,r11,316
	ctx.r5.s64 = ctx.r11.s64 + 316;
loc_82B9890C:
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stfs f0,368(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 368, temp.u32);
	// stw r8,344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 344, ctx.r8.u32);
	// stb r10,348(r11)
	PPC_STORE_U8(ctx.r11.u32 + 348, ctx.r10.u8);
	// stw r9,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r9.u32);
	// stw r6,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r6.u32);
	// stb r10,360(r11)
	PPC_STORE_U8(ctx.r11.u32 + 360, ctx.r10.u8);
	// stw r10,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r10.u32);
	// stw r7,392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 392, ctx.r7.u32);
	// stw r10,388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 388, ctx.r10.u32);
	// lwz r5,392(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82b98948
	if (cr6.lt) goto loc_82B98948;
	// lwz r5,372(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// b 0x82b9894c
	goto loc_82B9894C;
loc_82B98948:
	// addi r5,r11,372
	ctx.r5.s64 = ctx.r11.s64 + 372;
loc_82B9894C:
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// addi r31,r31,448
	ctx.r31.s64 = ctx.r31.s64 + 448;
	// stw r8,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r8.u32);
	// stb r10,404(r11)
	PPC_STORE_U8(ctx.r11.u32 + 404, ctx.r10.u8);
	// stw r9,408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 408, ctx.r9.u32);
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// bdnz 0x82b9875c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B9875C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// addi r5,r31,-56
	ctx.r5.s64 = ctx.r31.s64 + -56;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_82B98978:
	// stfs f0,-24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// stb r10,-32(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32, ctx.r10.u8);
	// stw r10,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r10.u32);
	// stwu r6,56(r5)
	ea = 56 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stb r10,-20(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20, ctx.r10.u8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// bdnz 0x82b98978
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B98978;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B989B0"))) PPC_WEAK_FUNC(sub_82B989B0);
PPC_FUNC_IMPL(__imp__sub_82B989B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B989B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B989CC;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B989E4;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-14368
	ctx.r9.s64 = ctx.r11.s64 + -14368;
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
loc_82B98A04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b98728
	ctx.lr = 0x82B98A0C;
	sub_82B98728(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,956
	ctx.r29.s64 = ctx.r29.s64 + 956;
	// bge 0x82b98a04
	if (!cr0.lt) goto loc_82B98A04;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r11.u32);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// addi r8,r10,-22864
	ctx.r8.s64 = ctx.r10.s64 + -22864;
	// stb r11,2020(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2020, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2024, ctx.r11.u32);
	// addi r30,r9,16048
	ctx.r30.s64 = ctx.r9.s64 + 16048;
	// stw r8,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r8.u32);
	// stw r11,2028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2028, ctx.r11.u32);
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// stb r28,2036(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2036, ctx.r28.u8);
	// lwz r4,16048(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16048);
	// bl 0x82d20ae0
	ctx.lr = 0x82B98A58;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82B98A68;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82B98A74;
	sub_82D20AE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82d23390
	ctx.lr = 0x82B98A84;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B98A90"))) PPC_WEAK_FUNC(sub_82B98A90);
PPC_FUNC_IMPL(__imp__sub_82B98A90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B98A98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-14368
	ctx.r8.s64 = ctx.r11.s64 + -14368;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r6,r9,-16652
	ctx.r6.s64 = ctx.r9.s64 + -16652;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r3,r3,2016
	ctx.r3.s64 = ctx.r3.s64 + 2016;
	// stw r6,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r6.u32);
	// bl 0x825c3358
	ctx.lr = 0x82B98ACC;
	sub_825C3358(ctx, base);
	// addi r30,r31,2008
	ctx.r30.s64 = ctx.r31.s64 + 2008;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82B98AD4:
	// addi r30,r30,-956
	ctx.r30.s64 = ctx.r30.s64 + -956;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b986c8
	ctx.lr = 0x82B98AE0;
	sub_82B986C8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x82b98ad4
	if (!cr0.lt) goto loc_82B98AD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82B98AF0;
	sub_82D25548(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B98AF8"))) PPC_WEAK_FUNC(sub_82B98AF8);
PPC_FUNC_IMPL(__imp__sub_82B98AF8) {
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
	// bl 0x82b98a90
	ctx.lr = 0x82B98B18;
	sub_82B98A90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b98b30
	if (cr6.eq) goto loc_82B98B30;
	// bl 0x82416268
	ctx.lr = 0x82B98B2C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B98B30:
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

__attribute__((alias("__imp__sub_82B98B48"))) PPC_WEAK_FUNC(sub_82B98B48);
PPC_FUNC_IMPL(__imp__sub_82B98B48) {
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
	// li r4,2040
	ctx.r4.s64 = 2040;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B98B7C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b98b94
	if (cr6.eq) goto loc_82B98B94;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b989b0
	ctx.lr = 0x82B98B90;
	sub_82B989B0(ctx, base);
	// b 0x82b98b98
	goto loc_82B98B98;
loc_82B98B94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B98B98:
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

__attribute__((alias("__imp__sub_82B98BB0"))) PPC_WEAK_FUNC(sub_82B98BB0);
PPC_FUNC_IMPL(__imp__sub_82B98BB0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// lwz r8,292(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r7,4456(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4456);
	// cmpwi cr6,r7,10
	cr6.compare<int32_t>(ctx.r7.s32, 10, xer);
	// bne cr6,0x82b98c08
	if (!cr6.eq) goto loc_82B98C08;
	// addi r11,r11,-19056
	ctx.r11.s64 = ctx.r11.s64 + -19056;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x82b98c10
	goto loc_82B98C10;
loc_82B98C08:
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r11,-19056
	ctx.r4.s64 = ctx.r11.s64 + -19056;
loc_82B98C10:
	// bl 0x8259cc28
	ctx.lr = 0x82B98C14;
	sub_8259CC28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b98c28
	if (!cr6.lt) goto loc_82B98C28;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82B98C28:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B98C34;
	sub_82D20DA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B98C40;
	sub_82D199D0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b98c60
	if (cr6.lt) goto loc_82B98C60;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B98C60;
	sub_825952B8(ctx, base);
loc_82B98C60:
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

__attribute__((alias("__imp__sub_82B98C74"))) PPC_WEAK_FUNC(sub_82B98C74);
PPC_FUNC_IMPL(__imp__sub_82B98C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B98C78"))) PPC_WEAK_FUNC(sub_82B98C78);
PPC_FUNC_IMPL(__imp__sub_82B98C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B98C80;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r27,4456(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// cmpwi cr6,r27,10
	cr6.compare<int32_t>(ctx.r27.s32, 10, xer);
	// bne cr6,0x82b98cb0
	if (!cr6.eq) goto loc_82B98CB0;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82B98CB0:
	// mulli r11,r5,956
	ctx.r11.s64 = ctx.r5.s64 * 956;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b98d80
	if (cr6.lt) goto loc_82B98D80;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r28,r29,100
	ctx.r28.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82b98cd8
	if (!cr6.eq) goto loc_82B98CD8;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82B98CD8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-18880
	ctx.r31.s64 = ctx.r11.s64 + -18880;
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// bl 0x837b0c10
	ctx.lr = 0x82B98CEC;
	sub_837B0C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B98CFC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B98D0C;
	sub_82A69AD0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b98d18
	if (cr6.eq) goto loc_82B98D18;
	// addi r30,r29,100
	ctx.r30.s64 = ctx.r29.s64 + 100;
loc_82B98D18:
	// addi r4,r31,-774
	ctx.r4.s64 = ctx.r31.s64 + -774;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B98D24;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B98D34;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B98D44;
	sub_82A69AD0(ctx, base);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B98D5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B98D74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B98D80:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82cbe450
	ctx.lr = 0x82B98D88;
	sub_82CBE450(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82b98d9c
	if (!cr6.eq) goto loc_82B98D9C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82B98D9C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82B98DC0;
	sub_8259CB28(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,-18880
	ctx.r30.s64 = ctx.r11.s64 + -18880;
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// bl 0x837b0c10
	ctx.lr = 0x82B98DD4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82a69ad0
	ctx.lr = 0x82B98DE4;
	sub_82A69AD0(ctx, base);
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B98E00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// bl 0x82d39310
	ctx.lr = 0x82B98E08;
	sub_82D39310(ctx, base);
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
	// beq cr6,0x82b98e40
	if (cr6.eq) goto loc_82B98E40;
	// cmpwi cr6,r27,10
	cr6.compare<int32_t>(ctx.r27.s32, 10, xer);
	// bne cr6,0x82b98e40
	if (!cr6.eq) goto loc_82B98E40;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r30,-56
	ctx.r5.s64 = ctx.r30.s64 + -56;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831d0b08
	ctx.lr = 0x82B98E3C;
	sub_831D0B08(ctx, base);
	// b 0x82b98e50
	goto loc_82B98E50;
loc_82B98E40:
	// addi r5,r30,-60
	ctx.r5.s64 = ctx.r30.s64 + -60;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831d0b08
	ctx.lr = 0x82B98E50;
	sub_831D0B08(ctx, base);
loc_82B98E50:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B98E5C;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B98E6C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B98E7C;
	sub_82A69AD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B98E94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b98ebc
	if (cr6.eq) goto loc_82B98EBC;
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b98ebc
	if (cr6.eq) goto loc_82B98EBC;
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82b98ec0
	if (cr6.gt) goto loc_82B98EC0;
loc_82B98EBC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B98EC0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B98ED4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B98EE0"))) PPC_WEAK_FUNC(sub_82B98EE0);
PPC_FUNC_IMPL(__imp__sub_82B98EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B98EE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r5,18
	cr6.compare<uint32_t>(ctx.r5.u32, 18, xer);
	// addi r30,r11,-18500
	ctx.r30.s64 = ctx.r11.s64 + -18500;
	// bgt cr6,0x82b9939c
	if (cr6.gt) goto loc_82B9939C;
	// lis r12,-32070
	ctx.r12.s64 = -2101739520;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-28896
	ctx.r12.s64 = ctx.r12.s64 + -28896;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u32) {
	case 0:
		goto loc_82B98F6C;
	case 1:
		goto loc_82B98F9C;
	case 2:
		goto loc_82B98FCC;
	case 3:
		goto loc_82B98FFC;
	case 4:
		goto loc_82B9902C;
	case 5:
		goto loc_82B99074;
	case 6:
		goto loc_82B990BC;
	case 7:
		goto loc_82B990EC;
	case 8:
		goto loc_82B99134;
	case 9:
		goto loc_82B99164;
	case 10:
		goto loc_82B99194;
	case 11:
		goto loc_82B991C4;
	case 12:
		goto loc_82B991EC;
	case 13:
		goto loc_82B9921C;
	case 14:
		goto loc_82B99248;
	case 15:
		goto loc_82B99274;
	case 16:
		goto loc_82B992BC;
	case 17:
		goto loc_82B992EC;
	case 18:
		goto loc_82B9934C;
	default:
		return;
	}
	// lwz r21,-28820(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28820);
	// lwz r21,-28772(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28772);
	// lwz r21,-28724(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28724);
	// lwz r21,-28676(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28676);
	// lwz r21,-28628(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28628);
	// lwz r21,-28556(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28556);
	// lwz r21,-28484(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28484);
	// lwz r21,-28436(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28436);
	// lwz r21,-28364(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28364);
	// lwz r21,-28316(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28316);
	// lwz r21,-28268(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28268);
	// lwz r21,-28220(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28220);
	// lwz r21,-28180(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28180);
	// lwz r21,-28132(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28132);
	// lwz r21,-28088(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28088);
	// lwz r21,-28044(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28044);
	// lwz r21,-27972(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -27972);
	// lwz r21,-27924(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -27924);
	// lwz r21,-27828(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -27828);
loc_82B98F6C:
	// lis r29,10
	ctx.r29.s64 = 655360;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,129
	ctx.r29.u64 = ctx.r29.u64 | 129;
	// bl 0x8291a868
	ctx.lr = 0x82B98F84;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-120
	ctx.r5.s64 = ctx.r30.s64 + -120;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831d0b08
	ctx.lr = 0x82B98F98;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B98F9C:
	// lis r29,56
	ctx.r29.s64 = 3670016;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,199
	ctx.r29.u64 = ctx.r29.u64 | 199;
	// bl 0x8291a868
	ctx.lr = 0x82B98FB4;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-116
	ctx.r5.s64 = ctx.r30.s64 + -116;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831d0b08
	ctx.lr = 0x82B98FC8;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B98FCC:
	// lis r29,56
	ctx.r29.s64 = 3670016;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,200
	ctx.r29.u64 = ctx.r29.u64 | 200;
	// bl 0x8291a868
	ctx.lr = 0x82B98FE4;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-112
	ctx.r5.s64 = ctx.r30.s64 + -112;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831d0b08
	ctx.lr = 0x82B98FF8;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B98FFC:
	// lis r29,11
	ctx.r29.s64 = 720896;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,26
	ctx.r29.u64 = ctx.r29.u64 | 26;
	// bl 0x8291a868
	ctx.lr = 0x82B99014;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-108
	ctx.r5.s64 = ctx.r30.s64 + -108;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831d0b08
	ctx.lr = 0x82B99028;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B9902C:
	// lis r29,10
	ctx.r29.s64 = 655360;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,190
	ctx.r29.u64 = ctx.r29.u64 | 190;
	// bl 0x8291a868
	ctx.lr = 0x82B99044;
	sub_8291A868(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B99058;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-104
	ctx.r5.s64 = ctx.r30.s64 + -104;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x831d0b08
	ctx.lr = 0x82B99070;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B99074:
	// lis r29,10
	ctx.r29.s64 = 655360;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,204
	ctx.r29.u64 = ctx.r29.u64 | 204;
	// bl 0x8291a868
	ctx.lr = 0x82B9908C;
	sub_8291A868(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B990A0;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-96
	ctx.r5.s64 = ctx.r30.s64 + -96;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x831d0b08
	ctx.lr = 0x82B990B8;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B990BC:
	// lis r29,10
	ctx.r29.s64 = 655360;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,264
	ctx.r29.u64 = ctx.r29.u64 | 264;
	// bl 0x8291a868
	ctx.lr = 0x82B990D4;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-88
	ctx.r5.s64 = ctx.r30.s64 + -88;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831d0b08
	ctx.lr = 0x82B990E8;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B990EC:
	// lis r29,10
	ctx.r29.s64 = 655360;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,191
	ctx.r29.u64 = ctx.r29.u64 | 191;
	// bl 0x8291a868
	ctx.lr = 0x82B99104;
	sub_8291A868(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B99118;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-84
	ctx.r5.s64 = ctx.r30.s64 + -84;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x831d0b08
	ctx.lr = 0x82B99130;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B99134:
	// lis r29,10
	ctx.r29.s64 = 655360;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,187
	ctx.r29.u64 = ctx.r29.u64 | 187;
	// bl 0x8291a868
	ctx.lr = 0x82B9914C;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-76
	ctx.r5.s64 = ctx.r30.s64 + -76;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831d0b08
	ctx.lr = 0x82B99160;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B99164:
	// lis r29,10
	ctx.r29.s64 = 655360;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,144
	ctx.r29.u64 = ctx.r29.u64 | 144;
	// bl 0x8291a868
	ctx.lr = 0x82B9917C;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-72
	ctx.r5.s64 = ctx.r30.s64 + -72;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831d0b08
	ctx.lr = 0x82B99190;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B99194:
	// lis r29,10
	ctx.r29.s64 = 655360;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,186
	ctx.r29.u64 = ctx.r29.u64 | 186;
	// bl 0x8291a868
	ctx.lr = 0x82B991AC;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-68
	ctx.r5.s64 = ctx.r30.s64 + -68;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831d0b08
	ctx.lr = 0x82B991C0;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B991C4:
	// lbz r11,4077(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4077);
	// lis r29,10
	ctx.r29.s64 = 655360;
	// lbz r10,4076(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4076);
	// addi r5,r30,-64
	ctx.r5.s64 = ctx.r30.s64 + -64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r29,r29,205
	ctx.r29.u64 = ctx.r29.u64 | 205;
	// bl 0x831d0b08
	ctx.lr = 0x82B991E8;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B991EC:
	// lis r29,10
	ctx.r29.s64 = 655360;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,206
	ctx.r29.u64 = ctx.r29.u64 | 206;
	// bl 0x8291a868
	ctx.lr = 0x82B99204;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-60
	ctx.r5.s64 = ctx.r30.s64 + -60;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831d0b08
	ctx.lr = 0x82B99218;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B9921C:
	// lfs f0,4736(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4736);
	ctx.f0.f64 = double(temp.f32);
	// lis r29,10
	ctx.r29.s64 = 655360;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addi r5,r30,-56
	ctx.r5.s64 = ctx.r30.s64 + -56;
	// li r4,256
	ctx.r4.s64 = 256;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r29,r29,207
	ctx.r29.u64 = ctx.r29.u64 | 207;
	// bl 0x831d0b08
	ctx.lr = 0x82B99244;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B99248:
	// lfs f0,4716(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4716);
	ctx.f0.f64 = double(temp.f32);
	// lis r29,10
	ctx.r29.s64 = 655360;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// li r4,256
	ctx.r4.s64 = 256;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r29,r29,266
	ctx.r29.u64 = ctx.r29.u64 | 266;
	// bl 0x831d0b08
	ctx.lr = 0x82B99270;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B99274:
	// lis r29,10
	ctx.r29.s64 = 655360;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,268
	ctx.r29.u64 = ctx.r29.u64 | 268;
	// bl 0x8291a868
	ctx.lr = 0x82B9928C;
	sub_8291A868(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B992A0;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x831d0b08
	ctx.lr = 0x82B992B8;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B992BC:
	// lis r29,10
	ctx.r29.s64 = 655360;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,265
	ctx.r29.u64 = ctx.r29.u64 | 265;
	// bl 0x8291a868
	ctx.lr = 0x82B992D4;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-36
	ctx.r5.s64 = ctx.r30.s64 + -36;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831d0b08
	ctx.lr = 0x82B992E8;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B992EC:
	// lis r29,10
	ctx.r29.s64 = 655360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,208
	ctx.r29.u64 = ctx.r29.u64 | 208;
	// bl 0x8291aa48
	ctx.lr = 0x82B992FC;
	sub_8291AA48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b99344
	if (!cr6.eq) goto loc_82B99344;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,110
	ctx.r4.s64 = 110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B99314;
	sub_8291A868(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,109
	ctx.r4.s64 = 109;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B99328;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x831d0b08
	ctx.lr = 0x82B99340;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B99344:
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// b 0x82b99390
	goto loc_82B99390;
loc_82B9934C:
	// lis r29,10
	ctx.r29.s64 = 655360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,124
	ctx.r29.u64 = ctx.r29.u64 | 124;
	// bl 0x8291aa48
	ctx.lr = 0x82B9935C;
	sub_8291AA48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b9938c
	if (!cr6.eq) goto loc_82B9938C;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,111
	ctx.r4.s64 = 111;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B99374;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831d0b08
	ctx.lr = 0x82B99388;
	sub_831D0B08(ctx, base);
	// b 0x82b9939c
	goto loc_82B9939C;
loc_82B9938C:
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
loc_82B99390:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831d0b08
	ctx.lr = 0x82B9939C;
	sub_831D0B08(ctx, base);
loc_82B9939C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r27,r26,100
	ctx.r27.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b993b0
	if (!cr6.eq) goto loc_82B993B0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82B993B0:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B993D0;
	sub_8259CC28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B993E0;
	sub_82A69A28(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r29,r26,100
	ctx.r29.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b993f0
	if (!cr6.eq) goto loc_82B993F0;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82B993F0:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_82B99404:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b99404
	if (!cr6.eq) goto loc_82B99404;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B9942C;
	sub_8259CC28(ctx, base);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82B99448;
	sub_8259CC28(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B99458;
	sub_82A69AD0(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B99460"))) PPC_WEAK_FUNC(sub_82B99460);
PPC_FUNC_IMPL(__imp__sub_82B99460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B99468;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B99474;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-19044
	ctx.r4.s64 = ctx.r11.s64 + -19044;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B99490;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b994e8
	if (cr6.eq) goto loc_82B994E8;
	// bl 0x831156e8
	ctx.lr = 0x82B994A0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r29,r31,2008
	ctx.r29.s64 = ctx.r31.s64 + 2008;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a08
	ctx.lr = 0x82B994B8;
	sub_83123A08(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d30138
	ctx.lr = 0x82B994C8;
	sub_82D30138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2fe58
	ctx.lr = 0x82B994D0;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b994e8
	if (cr6.eq) goto loc_82B994E8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82B994E8;
	sub_82D3D968(ctx, base);
loc_82B994E8:
	// lwz r11,2008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2008);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mulli r11,r11,956
	ctx.r11.s64 = ctx.r11.s64 * 956;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,96(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// bl 0x82d20f50
	ctx.lr = 0x82B9950C;
	sub_82D20F50(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,16064
	ctx.r29.s64 = ctx.r11.s64 + 16064;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// blt cr6,0x82b99528
	if (cr6.lt) goto loc_82B99528;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82b99558
	goto loc_82B99558;
loc_82B99528:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B99530;
	sub_82D19A68(ctx, base);
	// bl 0x82d2ec40
	ctx.lr = 0x82B99534;
	sub_82D2EC40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B9953C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b9954c
	if (!cr6.eq) goto loc_82B9954C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82b99558
	goto loc_82B99558;
loc_82B9954C:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d2f098
	ctx.lr = 0x82B99554;
	sub_82D2F098(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B99558:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,2008(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2008);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b98c78
	ctx.lr = 0x82B99568;
	sub_82B98C78(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// blt cr6,0x82b99528
	if (cr6.lt) goto loc_82B99528;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B99580"))) PPC_WEAK_FUNC(sub_82B99580);
PPC_FUNC_IMPL(__imp__sub_82B99580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B99588;
	__savegprlr_23(ctx, base);
	// stwu r1,-2016(r1)
	ea = -2016 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2008);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,2012(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2012);
	// mulli r11,r11,956
	ctx.r11.s64 = ctx.r11.s64 * 956;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82cbe450
	ctx.lr = 0x82B995A8;
	sub_82CBE450(ctx, base);
	// lbz r10,2020(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2020);
	// addi r23,r29,2016
	ctx.r23.s64 = ctx.r29.s64 + 2016;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b995c4
	if (!cr6.eq) goto loc_82B995C4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825b4da8
	ctx.lr = 0x82B995C4;
	sub_825B4DA8(ctx, base);
loc_82B995C4:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b995e0
	if (!cr6.eq) goto loc_82B995E0;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r10.u32);
loc_82B995E0:
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,2008(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2008);
	// bl 0x82a225d0
	ctx.lr = 0x82B995F0;
	sub_82A225D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8291adc0
	ctx.lr = 0x82B995FC;
	sub_8291ADC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82b98638
	ctx.lr = 0x82B9960C;
	sub_82B98638(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B99614;
	sub_82D19A68(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,-18500
	ctx.r30.s64 = ctx.r11.s64 + -18500;
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// bl 0x82d2ec48
	ctx.lr = 0x82B99624;
	sub_82D2EC48(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r24,r11,16280
	ctx.r24.s64 = ctx.r11.s64 + 16280;
	// lwz r4,16280(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16280);
	// bl 0x82d2e228
	ctx.lr = 0x82B99638;
	sub_82D2E228(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B9964C;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-120
	ctx.r5.s64 = ctx.r30.s64 + -120;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x831d0b08
	ctx.lr = 0x82B99660;
	sub_831D0B08(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r25,r26,100
	ctx.r25.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b99674
	if (!cr6.eq) goto loc_82B99674;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82B99674:
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82B99694;
	sub_8259CC28(ctx, base);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ori r5,r5,129
	ctx.r5.u64 = ctx.r5.u64 | 129;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B996A8;
	sub_82A69A28(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r26,r26,100
	ctx.r26.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b996b8
	if (!cr6.eq) goto loc_82B996B8;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82B996B8:
	// addi r11,r1,912
	ctx.r11.s64 = ctx.r1.s64 + 912;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_82B996CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b996cc
	if (!cr6.eq) goto loc_82B996CC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,912
	ctx.r4.s64 = ctx.r1.s64 + 912;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B996F4;
	sub_8259CC28(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82B99710;
	sub_8259CC28(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B99720;
	sub_82A69AD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B99728;
	sub_82D19A68(ctx, base);
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// bl 0x82d2ec48
	ctx.lr = 0x82B99730;
	sub_82D2EC48(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x82d2e228
	ctx.lr = 0x82B9973C;
	sub_82D2E228(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B99750;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-116
	ctx.r5.s64 = ctx.r30.s64 + -116;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// bl 0x831d0b08
	ctx.lr = 0x82B99764;
	sub_831D0B08(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r25,r26,100
	ctx.r25.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b99774
	if (!cr6.eq) goto loc_82B99774;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82B99774:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82B99790;
	sub_8259CC28(ctx, base);
	// lis r5,56
	ctx.r5.s64 = 3670016;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,199
	ctx.r5.u64 = ctx.r5.u64 | 199;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B997A4;
	sub_82A69A28(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r26,r26,100
	ctx.r26.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b997b4
	if (!cr6.eq) goto loc_82B997B4;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82B997B4:
	// addi r11,r1,1424
	ctx.r11.s64 = ctx.r1.s64 + 1424;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
loc_82B997C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b997c8
	if (!cr6.eq) goto loc_82B997C8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,1424
	ctx.r4.s64 = ctx.r1.s64 + 1424;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B997F0;
	sub_8259CC28(ctx, base);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82B9980C;
	sub_8259CC28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B9981C;
	sub_82A69AD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B99824;
	sub_82D19A68(ctx, base);
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// bl 0x82d2ec48
	ctx.lr = 0x82B9982C;
	sub_82D2EC48(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// bl 0x82d2e228
	ctx.lr = 0x82B99838;
	sub_82D2E228(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B9984C;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-112
	ctx.r5.s64 = ctx.r30.s64 + -112;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831d0b08
	ctx.lr = 0x82B99860;
	sub_831D0B08(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r25,r26,100
	ctx.r25.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b99870
	if (!cr6.eq) goto loc_82B99870;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82B99870:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82B9988C;
	sub_8259CC28(ctx, base);
	// lis r5,56
	ctx.r5.s64 = 3670016;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,200
	ctx.r5.u64 = ctx.r5.u64 | 200;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B998A0;
	sub_82A69A28(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r26,r26,100
	ctx.r26.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b998b0
	if (!cr6.eq) goto loc_82B998B0;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82B998B0:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
loc_82B998C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b998c4
	if (!cr6.eq) goto loc_82B998C4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B998EC;
	sub_8259CC28(ctx, base);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82B99908;
	sub_8259CC28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B99918;
	sub_82A69AD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B99920;
	sub_82D19A68(ctx, base);
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// bl 0x82d2ec48
	ctx.lr = 0x82B99928;
	sub_82D2EC48(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,12(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// bl 0x82d2e228
	ctx.lr = 0x82B99934;
	sub_82D2E228(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B99948;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-108
	ctx.r5.s64 = ctx.r30.s64 + -108;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x831d0b08
	ctx.lr = 0x82B9995C;
	sub_831D0B08(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r25,r26,100
	ctx.r25.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b9996c
	if (!cr6.eq) goto loc_82B9996C;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82B9996C:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82B99988;
	sub_8259CC28(ctx, base);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,26
	ctx.r5.u64 = ctx.r5.u64 | 26;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B9999C;
	sub_82A69A28(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r26,r26,100
	ctx.r26.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b999ac
	if (!cr6.eq) goto loc_82B999AC;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82B999AC:
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
loc_82B999C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b999c0
	if (!cr6.eq) goto loc_82B999C0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B999E8;
	sub_8259CC28(ctx, base);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82B99A04;
	sub_8259CC28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B99A14;
	sub_82A69AD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B99A1C;
	sub_82D19A68(ctx, base);
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// bl 0x82d2ec48
	ctx.lr = 0x82B99A24;
	sub_82D2EC48(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// bl 0x82d2e228
	ctx.lr = 0x82B99A30;
	sub_82D2E228(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B99A44;
	sub_8291A868(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B99A58;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-104
	ctx.r5.s64 = ctx.r30.s64 + -104;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x831d0b08
	ctx.lr = 0x82B99A70;
	sub_831D0B08(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r25,r26,100
	ctx.r25.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b99a80
	if (!cr6.eq) goto loc_82B99A80;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82B99A80:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82B99A9C;
	sub_8259CC28(ctx, base);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,190
	ctx.r5.u64 = ctx.r5.u64 | 190;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B99AB0;
	sub_82A69A28(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r26,r26,100
	ctx.r26.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b99ac0
	if (!cr6.eq) goto loc_82B99AC0;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82B99AC0:
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
loc_82B99AD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b99ad4
	if (!cr6.eq) goto loc_82B99AD4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B99AFC;
	sub_8259CC28(ctx, base);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82B99B18;
	sub_8259CC28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B99B28;
	sub_82A69AD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B99B30;
	sub_82D19A68(ctx, base);
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// bl 0x82d2ec48
	ctx.lr = 0x82B99B38;
	sub_82D2EC48(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,20(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// bl 0x82d2e228
	ctx.lr = 0x82B99B44;
	sub_82D2E228(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B99B58;
	sub_8291A868(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B99B6C;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-96
	ctx.r5.s64 = ctx.r30.s64 + -96;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x831d0b08
	ctx.lr = 0x82B99B84;
	sub_831D0B08(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r25,r26,100
	ctx.r25.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b99b94
	if (!cr6.eq) goto loc_82B99B94;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82B99B94:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82B99BB0;
	sub_8259CC28(ctx, base);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,204
	ctx.r5.u64 = ctx.r5.u64 | 204;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B99BC4;
	sub_82A69A28(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r26,r26,100
	ctx.r26.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b99bd4
	if (!cr6.eq) goto loc_82B99BD4;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82B99BD4:
	// addi r11,r1,1168
	ctx.r11.s64 = ctx.r1.s64 + 1168;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
loc_82B99BE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b99be8
	if (!cr6.eq) goto loc_82B99BE8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,1168
	ctx.r4.s64 = ctx.r1.s64 + 1168;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B99C10;
	sub_8259CC28(ctx, base);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82B99C2C;
	sub_8259CC28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B99C3C;
	sub_82A69AD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B99C44;
	sub_82D19A68(ctx, base);
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// bl 0x82d2ec48
	ctx.lr = 0x82B99C4C;
	sub_82D2EC48(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,24(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// bl 0x82d2e228
	ctx.lr = 0x82B99C58;
	sub_82D2E228(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291a868
	ctx.lr = 0x82B99C6C;
	sub_8291A868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,-88
	ctx.r5.s64 = ctx.r30.s64 + -88;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// bl 0x831d0b08
	ctx.lr = 0x82B99C80;
	sub_831D0B08(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r25,r26,100
	ctx.r25.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b99c90
	if (!cr6.eq) goto loc_82B99C90;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82B99C90:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82B99CAC;
	sub_8259CC28(ctx, base);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,264
	ctx.r5.u64 = ctx.r5.u64 | 264;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B99CC0;
	sub_82A69A28(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r26,r26,100
	ctx.r26.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x82b99cd0
	if (!cr6.eq) goto loc_82B99CD0;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82B99CD0:
	// addi r11,r1,1680
	ctx.r11.s64 = ctx.r1.s64 + 1680;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
loc_82B99CE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b99ce4
	if (!cr6.eq) goto loc_82B99CE4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,1680
	ctx.r4.s64 = ctx.r1.s64 + 1680;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B99D0C;
	sub_8259CC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B99D18;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82a69ad0
	ctx.lr = 0x82B99D28;
	sub_82A69AD0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b98488
	ctx.lr = 0x82B99D34;
	sub_82B98488(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82b98ee0
	ctx.lr = 0x82B99D48;
	sub_82B98EE0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b98488
	ctx.lr = 0x82B99D54;
	sub_82B98488(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82b98ee0
	ctx.lr = 0x82B99D68;
	sub_82B98EE0(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b98488
	ctx.lr = 0x82B99D74;
	sub_82B98488(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82b98ee0
	ctx.lr = 0x82B99D88;
	sub_82B98EE0(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b98488
	ctx.lr = 0x82B99D94;
	sub_82B98488(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82b98ee0
	ctx.lr = 0x82B99DA8;
	sub_82B98EE0(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b98488
	ctx.lr = 0x82B99DB4;
	sub_82B98488(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82b98ee0
	ctx.lr = 0x82B99DC8;
	sub_82B98EE0(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b98488
	ctx.lr = 0x82B99DD4;
	sub_82B98488(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82b98ee0
	ctx.lr = 0x82B99DE8;
	sub_82B98EE0(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b98488
	ctx.lr = 0x82B99DF4;
	sub_82B98488(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82b98ee0
	ctx.lr = 0x82B99E08;
	sub_82B98EE0(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b98488
	ctx.lr = 0x82B99E14;
	sub_82B98488(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82b98ee0
	ctx.lr = 0x82B99E28;
	sub_82B98EE0(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b98488
	ctx.lr = 0x82B99E34;
	sub_82B98488(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82b98ee0
	ctx.lr = 0x82B99E48;
	sub_82B98EE0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b98488
	ctx.lr = 0x82B99E54;
	sub_82B98488(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82b98ee0
	ctx.lr = 0x82B99E68;
	sub_82B98EE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b984f8
	ctx.lr = 0x82B99E74;
	sub_82B984F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82b98ee0
	ctx.lr = 0x82B99E88;
	sub_82B98EE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b984f8
	ctx.lr = 0x82B99E94;
	sub_82B984F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82b98ee0
	ctx.lr = 0x82B99EA8;
	sub_82B98EE0(ctx, base);
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b99eb8
	if (cr6.eq) goto loc_82B99EB8;
	// stw r31,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r31.u32);
loc_82B99EB8:
	// addi r1,r1,2016
	ctx.r1.s64 = ctx.r1.s64 + 2016;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B99EC0"))) PPC_WEAK_FUNC(sub_82B99EC0);
PPC_FUNC_IMPL(__imp__sub_82B99EC0) {
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
	// bl 0x82b99460
	ctx.lr = 0x82B99ED8;
	sub_82B99460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b99580
	ctx.lr = 0x82B99EE0;
	sub_82B99580(ctx, base);
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

__attribute__((alias("__imp__sub_82B99EF4"))) PPC_WEAK_FUNC(sub_82B99EF4);
PPC_FUNC_IMPL(__imp__sub_82B99EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B99EF8"))) PPC_WEAK_FUNC(sub_82B99EF8);
PPC_FUNC_IMPL(__imp__sub_82B99EF8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2008);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// mulli r11,r11,956
	ctx.r11.s64 = ctx.r11.s64 * 956;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// bge cr6,0x82b99f30
	if (!cr6.lt) goto loc_82B99F30;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2012, ctx.r11.u32);
	// b 0x82b99f54
	goto loc_82B99F54;
loc_82B99F30:
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b99f50
	if (cr6.lt) goto loc_82B99F50;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r6,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r6.u32);
	// b 0x82b99f54
	goto loc_82B99F54;
loc_82B99F50:
	// stw r5,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r5.u32);
loc_82B99F54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,2012(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2012);
	// li r6,0
	ctx.r6.s64 = 0;
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
	ctx.lr = 0x82B99F74;
	sub_82D1EBF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b99460
	ctx.lr = 0x82B99F7C;
	sub_82B99460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b99580
	ctx.lr = 0x82B99F84;
	sub_82B99580(ctx, base);
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

__attribute__((alias("__imp__sub_82B99F98"))) PPC_WEAK_FUNC(sub_82B99F98);
PPC_FUNC_IMPL(__imp__sub_82B99F98) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,2008(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2008);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,2012(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2012);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mulli r10,r8,956
	ctx.r10.s64 = ctx.r8.s64 * 956;
	// stw r8,2008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2008, ctx.r8.u32);
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,96(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// bge cr6,0x82b9a020
	if (!cr6.lt) goto loc_82B9A020;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B99FD8:
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
loc_82B99FDC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,2012(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2012);
	// li r6,0
	ctx.r6.s64 = 0;
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
	ctx.lr = 0x82B99FFC;
	sub_82D1EBF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b99460
	ctx.lr = 0x82B9A004;
	sub_82B99460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b99580
	ctx.lr = 0x82B9A00C;
	sub_82B99580(ctx, base);
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
loc_82B9A020:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b99fd8
	if (cr6.lt) goto loc_82B99FD8;
	// subfic r11,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r10.s64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r6,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r6.u32);
	// b 0x82b99fdc
	goto loc_82B99FDC;
}

__attribute__((alias("__imp__sub_82B9A040"))) PPC_WEAK_FUNC(sub_82B9A040);
PPC_FUNC_IMPL(__imp__sub_82B9A040) {
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
	// bl 0x82d26640
	ctx.lr = 0x82B9A050;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82B9A054;
	sub_82D25AB8(ctx, base);
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

__attribute__((alias("__imp__sub_82B9A068"))) PPC_WEAK_FUNC(sub_82B9A068);
PPC_FUNC_IMPL(__imp__sub_82B9A068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B9A078"))) PPC_WEAK_FUNC(sub_82B9A078);
PPC_FUNC_IMPL(__imp__sub_82B9A078) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9A094;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-13404
	ctx.r31.s64 = ctx.r11.s64 + -13404;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B9A0B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9A0BC;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82B9A0C4;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9a0f0
	if (cr6.eq) goto loc_82B9A0F0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B9A0E0;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9A0F0;
	sub_82D2AEC8(ctx, base);
loc_82B9A0F0:
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

__attribute__((alias("__imp__sub_82B9A108"))) PPC_WEAK_FUNC(sub_82B9A108);
PPC_FUNC_IMPL(__imp__sub_82B9A108) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82b9a13c
	if (!cr6.eq) goto loc_82B9A13C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-13620
	ctx.r5.s64 = ctx.r11.s64 + -13620;
	// bl 0x82d20da8
	ctx.lr = 0x82B9A13C;
	sub_82D20DA8(ctx, base);
loc_82B9A13C:
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

__attribute__((alias("__imp__sub_82B9A150"))) PPC_WEAK_FUNC(sub_82B9A150);
PPC_FUNC_IMPL(__imp__sub_82B9A150) {
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
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9A178;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-13064
	ctx.r4.s64 = ctx.r11.s64 + -13064;
	// bl 0x82d2f098
	ctx.lr = 0x82B9A184;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9a1fc
	if (cr6.eq) goto loc_82B9A1FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9A194;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9a1fc
	if (cr6.eq) goto loc_82B9A1FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B9A1C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f11,f13,f0,f31
	ctx.f11.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fnmsubs f10,f12,f0,f30
	ctx.f10.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f30.f64)));
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,84(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B9A1FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9A1FC:
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

__attribute__((alias("__imp__sub_82B9A218"))) PPC_WEAK_FUNC(sub_82B9A218);
PPC_FUNC_IMPL(__imp__sub_82B9A218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B9A220;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9A234;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,-13604
	ctx.r29.s64 = ctx.r11.s64 + -13604;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x82d2f098
	ctx.lr = 0x82B9A244;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9a34c
	if (cr6.eq) goto loc_82B9A34C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B9A254:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9A260;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9a280
	if (cr6.eq) goto loc_82B9A280;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9A280;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9A280:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x82b9a254
	if (cr6.lt) goto loc_82B9A254;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x82b9a34c
	if (!cr6.eq) goto loc_82B9A34C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9A2A0;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9a34c
	if (cr6.eq) goto loc_82B9A34C;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// lwz r9,100(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lbz r10,112(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 112);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b9a2d4
	if (cr6.gt) goto loc_82B9A2D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9A2D4;
	sub_831CC188(ctx, base);
loc_82B9A2D4:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x830ff290
	ctx.lr = 0x82B9A2E4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B9A2E8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x82b9a318
	if (!cr6.eq) goto loc_82B9A318;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,17108(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17108);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B9A310;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B9A318:
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bge cr6,0x82b9a34c
	if (!cr6.lt) goto loc_82B9A34C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,17108
	ctx.r7.s64 = ctx.r9.s64 + 17108;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,72(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B9A34C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9A34C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9A354"))) PPC_WEAK_FUNC(sub_82B9A354);
PPC_FUNC_IMPL(__imp__sub_82B9A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9A358"))) PPC_WEAK_FUNC(sub_82B9A358);
PPC_FUNC_IMPL(__imp__sub_82B9A358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B9A360;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B9A36C;
	sub_831156E8(ctx, base);
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lbz r10,112(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 112);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b9a398
	if (cr6.gt) goto loc_82B9A398;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9A398;
	sub_831CC188(ctx, base);
loc_82B9A398:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r8,5
	ctx.r8.s64 = 327680;
	// ori r7,r8,35313
	ctx.r7.u64 = ctx.r8.u64 | 35313;
	// ldx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r5,r4,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// cmpwi cr6,r5,255
	cr6.compare<int32_t>(ctx.r5.s32, 255, xer);
	// bne cr6,0x82b9a430
	if (!cr6.eq) goto loc_82B9A430;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9A3C8;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B9A3D0;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9a47c
	if (cr6.eq) goto loc_82B9A47C;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d33c10
	ctx.lr = 0x82B9A3E4;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9a458
	if (cr6.eq) goto loc_82B9A458;
loc_82B9A3EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9A3F8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9a47c
	if (cr6.eq) goto loc_82B9A47C;
	// bl 0x82d2b038
	ctx.lr = 0x82B9A404;
	sub_82D2B038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9a428
	if (!cr6.eq) goto loc_82B9A428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82B9A41C;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82b9a3ec
	if (cr6.lt) goto loc_82B9A3EC;
	// b 0x82b9a458
	goto loc_82B9A458;
loc_82B9A428:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x82b9a43c
	goto loc_82B9A43C;
loc_82B9A430:
	// cmpwi cr6,r5,11
	cr6.compare<int32_t>(ctx.r5.s32, 11, xer);
	// blt cr6,0x82b9a43c
	if (cr6.lt) goto loc_82B9A43C;
	// addi r5,r5,-11
	ctx.r5.s64 = ctx.r5.s64 + -11;
loc_82B9A43C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82B9A458;
	sub_82D1EBF8(ctx, base);
loc_82B9A458:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82B9A460;
	sub_82D19BA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B9A46C;
	sub_82D19BB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b9a218
	ctx.lr = 0x82B9A47C;
	sub_82B9A218(ctx, base);
loc_82B9A47C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9A484"))) PPC_WEAK_FUNC(sub_82B9A484);
PPC_FUNC_IMPL(__imp__sub_82B9A484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9A488"))) PPC_WEAK_FUNC(sub_82B9A488);
PPC_FUNC_IMPL(__imp__sub_82B9A488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B9A490;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9A4A8;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-13080
	ctx.r28.s64 = ctx.r11.s64 + -13080;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// bl 0x82d2f098
	ctx.lr = 0x82B9A4B8;
	sub_82D2F098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9a598
	if (cr6.eq) goto loc_82B9A598;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82a688d0
	ctx.lr = 0x82B9A4E4;
	sub_82A688D0(ctx, base);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B9A504;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x839a64e0
	ctx.lr = 0x82B9A548;
	sub_839A64E0(ctx, base);
	// cntlzw r6,r31
	ctx.r6.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x839a6a30
	ctx.lr = 0x82B9A564;
	sub_839A6A30(ctx, base);
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,17100(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 17100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17104);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f2,f13,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82b9a150
	ctx.lr = 0x82B9A598;
	sub_82B9A150(ctx, base);
loc_82B9A598:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9A5A4"))) PPC_WEAK_FUNC(sub_82B9A5A4);
PPC_FUNC_IMPL(__imp__sub_82B9A5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9A5A8"))) PPC_WEAK_FUNC(sub_82B9A5A8);
PPC_FUNC_IMPL(__imp__sub_82B9A5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B9A5B0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lbz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b9a5e4
	if (cr6.gt) goto loc_82B9A5E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9A5E4;
	sub_831CC188(ctx, base);
loc_82B9A5E4:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x839a9548
	ctx.lr = 0x82B9A610;
	sub_839A9548(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r30,r10,-13044
	ctx.r30.s64 = ctx.r10.s64 + -13044;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x83815d38
	ctx.lr = 0x82B9A624;
	sub_83815D38(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82B9A638;
	sub_83815B68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83815b68
	ctx.lr = 0x82B9A648;
	sub_83815B68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82B9A658;
	sub_83815B68(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83815be8
	ctx.lr = 0x82B9A66C;
	sub_83815BE8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x82B9A67C;
	sub_83815BE8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x82B9A68C;
	sub_83815BE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B9A694;
	sub_82D19A68(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838153c8
	ctx.lr = 0x82B9A6A4;
	sub_838153C8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a9548
	ctx.lr = 0x82B9A6C0;
	sub_839A9548(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815d38
	ctx.lr = 0x82B9A6CC;
	sub_83815D38(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82B9A6D8;
	sub_83815B68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82B9A6E8;
	sub_83815B68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82B9A6F8;
	sub_83815B68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815be8
	ctx.lr = 0x82B9A70C;
	sub_83815BE8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x82B9A71C;
	sub_83815BE8(ctx, base);
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815be8
	ctx.lr = 0x82B9A72C;
	sub_83815BE8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838153c8
	ctx.lr = 0x82B9A738;
	sub_838153C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815cb8
	ctx.lr = 0x82B9A740;
	sub_83815CB8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83815cb8
	ctx.lr = 0x82B9A748;
	sub_83815CB8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9A754"))) PPC_WEAK_FUNC(sub_82B9A754);
PPC_FUNC_IMPL(__imp__sub_82B9A754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9A758"))) PPC_WEAK_FUNC(sub_82B9A758);
PPC_FUNC_IMPL(__imp__sub_82B9A758) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b9a218
	sub_82B9A218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9A75C"))) PPC_WEAK_FUNC(sub_82B9A75C);
PPC_FUNC_IMPL(__imp__sub_82B9A75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9A760"))) PPC_WEAK_FUNC(sub_82B9A760);
PPC_FUNC_IMPL(__imp__sub_82B9A760) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-12944
	ctx.r9.s64 = ctx.r11.s64 + -12944;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,96(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b9a7a8
	if (cr6.eq) goto loc_82B9A7A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B9A7A8;
	sub_825952B8(ctx, base);
loc_82B9A7A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82B9A7C0;
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

__attribute__((alias("__imp__sub_82B9A7D4"))) PPC_WEAK_FUNC(sub_82B9A7D4);
PPC_FUNC_IMPL(__imp__sub_82B9A7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9A7D8"))) PPC_WEAK_FUNC(sub_82B9A7D8);
PPC_FUNC_IMPL(__imp__sub_82B9A7D8) {
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
	ctx.lr = 0x82B9A7E0;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9A7F0;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r15,r11,-13108
	ctx.r15.s64 = ctx.r11.s64 + -13108;
	// addi r4,r15,-284
	ctx.r4.s64 = ctx.r15.s64 + -284;
	// bl 0x82d2f098
	ctx.lr = 0x82B9A800;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9a82c
	if (cr6.eq) goto loc_82B9A82C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B9A81C;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9A82C;
	sub_82D2AEC8(ctx, base);
loc_82B9A82C:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9A834;
	sub_82D19A78(ctx, base);
	// addi r4,r15,-276
	ctx.r4.s64 = ctx.r15.s64 + -276;
	// bl 0x82d2f098
	ctx.lr = 0x82B9A83C;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9a868
	if (cr6.eq) goto loc_82B9A868;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B9A858;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9A868;
	sub_82D2AEC8(ctx, base);
loc_82B9A868:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9A870;
	sub_82D19A78(ctx, base);
	// addi r4,r15,-268
	ctx.r4.s64 = ctx.r15.s64 + -268;
	// bl 0x82d2f098
	ctx.lr = 0x82B9A878;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9a88c
	if (cr6.eq) goto loc_82B9A88C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9A88C;
	sub_82D2AEC8(ctx, base);
loc_82B9A88C:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9A8A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9A8A8;
	sub_82D19A78(ctx, base);
	// addi r4,r15,-252
	ctx.r4.s64 = ctx.r15.s64 + -252;
	// bl 0x82d2f098
	ctx.lr = 0x82B9A8B0;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9a8dc
	if (cr6.eq) goto loc_82B9A8DC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B9A8CC;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9A8DC;
	sub_82D2AEC8(ctx, base);
loc_82B9A8DC:
	// bl 0x8399f8b8
	ctx.lr = 0x82B9A8E0;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b030
	if (cr6.eq) goto loc_82B9B030;
	// lwz r11,96(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 96);
	// addi r20,r14,96
	ctx.r20.s64 = ctx.r14.s64 + 96;
	// lwz r9,100(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 100);
	// lbz r10,112(r14)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r14.u32 + 112);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b9a914
	if (cr6.gt) goto loc_82B9A914;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9A914;
	sub_831CC188(ctx, base);
loc_82B9A914:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82d19a78
	ctx.lr = 0x82B9A928;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r15,-236
	ctx.r4.s64 = ctx.r15.s64 + -236;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B9A940;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,5
	ctx.r8.s64 = 327680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r17,r8,14904
	ctx.r17.u64 = ctx.r8.u64 | 14904;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9aa84
	if (cr6.eq) goto loc_82B9AA84;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r30,r11,47
	ctx.r30.u64 = ctx.r11.u64 | 47;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d303d0
	ctx.lr = 0x82B9A964;
	sub_82D303D0(ctx, base);
	// lbz r10,113(r14)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r14.u32 + 113);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b9a9f8
	if (cr6.eq) goto loc_82B9A9F8;
	// bl 0x831156e8
	ctx.lr = 0x82B9A974;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bl 0x83123a08
	ctx.lr = 0x82B9A984;
	sub_83123A08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82B9A994;
	sub_837B0C10(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82b9a9a8
	if (!cr6.lt) goto loc_82B9A9A8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82B9A9A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30138
	ctx.lr = 0x82B9A9B4;
	sub_82D30138(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B9A9B8;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B9A9BC;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9a9e4
	if (cr6.eq) goto loc_82B9A9E4;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,365
	ctx.r4.u64 = ctx.r4.u64 | 365;
	// bl 0x82d303d0
	ctx.lr = 0x82B9A9D8;
	sub_82D303D0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B9A9E0;
	sub_8387E8E0(ctx, base);
	// b 0x82b9aa84
	goto loc_82B9AA84;
loc_82B9A9E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d303d0
	ctx.lr = 0x82B9A9EC;
	sub_82D303D0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B9A9F4;
	sub_8387E8E0(ctx, base);
	// b 0x82b9aa84
	goto loc_82B9AA84;
loc_82B9A9F8:
	// bl 0x830ff290
	ctx.lr = 0x82B9A9FC;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B9AA00;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9aa34
	if (cr6.eq) goto loc_82B9AA34;
	// bl 0x831156e8
	ctx.lr = 0x82B9AA10;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r4,r10,r17
	ctx.r4.u64 = ctx.r10.u64 + ctx.r17.u64;
	// bl 0x831239e0
	ctx.lr = 0x82B9AA28;
	sub_831239E0(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,365
	ctx.r4.u64 = ctx.r4.u64 | 365;
	// b 0x82b9aa54
	goto loc_82B9AA54;
loc_82B9AA34:
	// bl 0x831156e8
	ctx.lr = 0x82B9AA38;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r4,r10,r17
	ctx.r4.u64 = ctx.r10.u64 + ctx.r17.u64;
	// bl 0x831239e0
	ctx.lr = 0x82B9AA50;
	sub_831239E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B9AA54:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d303d0
	ctx.lr = 0x82B9AA64;
	sub_82D303D0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B9AA68;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82B9AA74;
	sub_8311C148(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30138
	ctx.lr = 0x82B9AA84;
	sub_82D30138(ctx, base);
loc_82B9AA84:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8399f8b8
	ctx.lr = 0x82B9AA8C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8399edb0
	ctx.lr = 0x82B9AAA8;
	sub_8399EDB0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8399ee20
	ctx.lr = 0x82B9AAB4;
	sub_8399EE20(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9AABC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r15,-220
	ctx.r4.s64 = ctx.r15.s64 + -220;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B9AAD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9ab18
	if (cr6.eq) goto loc_82B9AB18;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83165ba8
	ctx.lr = 0x82B9AAF0;
	sub_83165BA8(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b9ab04
	if (!cr6.lt) goto loc_82B9AB04;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_82B9AB04:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30138
	ctx.lr = 0x82B9AB10;
	sub_82D30138(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82B9AB18;
	sub_8387E8E0(ctx, base);
loc_82B9AB18:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9AB20;
	sub_82D19A78(ctx, base);
	// addi r4,r15,-204
	ctx.r4.s64 = ctx.r15.s64 + -204;
	// bl 0x82d2f098
	ctx.lr = 0x82B9AB28;
	sub_82D2F098(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9ae68
	if (cr6.eq) goto loc_82B9AE68;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,5
	ctx.r9.s64 = 327680;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r18,15
	ctx.r18.s64 = 15;
	// ori r23,r9,35313
	ctx.r23.u64 = ctx.r9.u64 | 35313;
	// li r16,11
	ctx.r16.s64 = 11;
	// addi r21,r11,16984
	ctx.r21.s64 = ctx.r11.s64 + 16984;
loc_82B9AB60:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8399f8b8
	ctx.lr = 0x82B9AB68;
	sub_8399F8B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8399ea10
	ctx.lr = 0x82B9AB78;
	sub_8399EA10(ctx, base);
	// mulli r11,r30,528
	ctx.r11.s64 = ctx.r30.s64 * 528;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x839a0478
	ctx.lr = 0x82B9AB90;
	sub_839A0478(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9AB9C;
	sub_82D33DB0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9ae54
	if (cr6.eq) goto loc_82B9AE54;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B9ABBC;
	sub_82D2D510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9abe4
	if (cr6.eq) goto loc_82B9ABE4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82acc960
	ctx.lr = 0x82B9ABD8;
	sub_82ACC960(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d39310
	ctx.lr = 0x82B9ABE4;
	sub_82D39310(ctx, base);
loc_82B9ABE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r15,-188
	ctx.r4.s64 = ctx.r15.s64 + -188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9ABFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9ac9c
	if (cr6.eq) goto loc_82B9AC9C;
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// bl 0x831156e8
	ctx.lr = 0x82B9AC18;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r29,r10,r17
	ctx.r29.u64 = ctx.r10.u64 + ctx.r17.u64;
	// bl 0x8399ea10
	ctx.lr = 0x82B9AC30;
	sub_8399EA10(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123ba8
	ctx.lr = 0x82B9AC44;
	sub_83123BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82B9AC54;
	sub_831CE980(ctx, base);
	// ld r9,508(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 508);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// bl 0x825a2298
	ctx.lr = 0x82B9AC68;
	sub_825A2298(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b9ac80
	if (cr6.eq) goto loc_82B9AC80;
	// addi r4,r1,520
	ctx.r4.s64 = ctx.r1.s64 + 520;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259d6c0
	ctx.lr = 0x82B9AC80;
	sub_8259D6C0(ctx, base);
loc_82B9AC80:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B9AC94;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B9AC9C;
	sub_8387E8E0(ctx, base);
loc_82B9AC9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r15,-176
	ctx.r4.s64 = ctx.r15.s64 + -176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9ACB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9ad10
	if (cr6.eq) goto loc_82B9AD10;
	// bl 0x830ff290
	ctx.lr = 0x82B9ACC4;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B9ACC8;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9ad00
	if (cr6.eq) goto loc_82B9AD00;
	// addi r4,r15,-156
	ctx.r4.s64 = ctx.r15.s64 + -156;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82B9ACE0;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B9ACF4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82B9ACFC;
	sub_8387E8E0(ctx, base);
	// b 0x82b9ad10
	goto loc_82B9AD10;
loc_82B9AD00:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9AD10;
	sub_82D2AEC8(ctx, base);
loc_82B9AD10:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b9add8
	if (cr0.eq) goto loc_82B9ADD8;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82B9AD2C:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B9AD40;
	sub_82D2B608(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82b9af80
	if (!cr6.gt) goto loc_82B9AF80;
	// ldx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + ctx.r11.u32);
	// lbz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lbz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b9ada0
	if (cr6.eq) goto loc_82B9ADA0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bne cr6,0x82b9ada0
	if (!cr6.eq) goto loc_82B9ADA0;
	// bl 0x831156e8
	ctx.lr = 0x82B9AD84;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r30,11
	ctx.r10.s64 = ctx.r30.s64 * 11;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r8,r9,r23
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r23.u32);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r26,r7
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r7.u32, xer);
	// beq cr6,0x82b9adc4
	if (cr6.eq) goto loc_82B9ADC4;
loc_82B9ADA0:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x82b9ad2c
	if (cr6.lt) goto loc_82B9AD2C;
	// b 0x82b9add8
	goto loc_82B9ADD8;
loc_82B9ADC4:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B9ADD8;
	sub_82D2B608(ctx, base);
loc_82B9ADD8:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825832e0
	ctx.lr = 0x82B9ADE0;
	sub_825832E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b9ae54
	if (cr6.eq) goto loc_82B9AE54;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x82b9ae54
	if (cr6.eq) goto loc_82B9AE54;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B9AE04;
	sub_82D2B608(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82b9ae1c
	if (cr6.eq) goto loc_82B9AE1C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d28130
	ctx.lr = 0x82B9AE1C;
	sub_82D28130(ctx, base);
loc_82B9AE1C:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B9AE24;
	sub_82D1C1A8(ctx, base);
	// cmpw cr6,r3,r26
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, xer);
	// bne cr6,0x82b9ae54
	if (!cr6.eq) goto loc_82B9AE54;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// subfc r10,r16,r11
	xer.ca = ctx.r11.u32 >= ctx.r16.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r16.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// and r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 & ctx.r11.u64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82B9AE54;
	sub_82D1EBF8(ctx, base);
loc_82B9AE54:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// blt cr6,0x82b9ab60
	if (cr6.lt) goto loc_82B9AB60;
loc_82B9AE68:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9AE70;
	sub_82D19A78(ctx, base);
	// addi r4,r15,-152
	ctx.r4.s64 = ctx.r15.s64 + -152;
	// bl 0x82d2f098
	ctx.lr = 0x82B9AE78;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9aea4
	if (cr6.eq) goto loc_82B9AEA4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82B9AE84:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82b9a488
	ctx.lr = 0x82B9AE94;
	sub_82B9A488(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82b9ae84
	if (cr6.lt) goto loc_82B9AE84;
loc_82B9AEA4:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82b9a5a8
	ctx.lr = 0x82B9AEAC;
	sub_82B9A5A8(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9AEB4;
	sub_82D19A78(ctx, base);
	// addi r4,r15,-144
	ctx.r4.s64 = ctx.r15.s64 + -144;
	// bl 0x82d2f098
	ctx.lr = 0x82B9AEBC;
	sub_82D2F098(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b030
	if (cr6.eq) goto loc_82B9B030;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82B9AECC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9AED8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9aef8
	if (cr6.eq) goto loc_82B9AEF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r15,-40
	ctx.r4.s64 = ctx.r15.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9AEF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9AEF8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x82b9aecc
	if (cr6.lt) goto loc_82B9AECC;
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b9b030
	if (cr0.eq) goto loc_82B9B030;
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// addi r27,r9,17140
	ctx.r27.s64 = ctx.r9.s64 + 17140;
	// ble cr6,0x82b9b050
	if (!cr6.gt) goto loc_82B9B050;
loc_82B9AF2C:
	// ldx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lbz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9AF44;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b010
	if (cr6.eq) goto loc_82B9B010;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x82b9af8c
	if (cr6.eq) goto loc_82B9AF8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r15,-32
	ctx.r4.s64 = ctx.r15.s64 + -32;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9AF78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b9b000
	goto loc_82B9B000;
loc_82B9AF80:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9AF8C;
	sub_831CC188(ctx, base);
loc_82B9AF8C:
	// lbz r11,112(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82b9afd8
	if (!cr6.eq) goto loc_82B9AFD8;
	// addi r4,r15,-24
	ctx.r4.s64 = ctx.r15.s64 + -24;
	// bctrl 
	ctx.lr = 0x82B9AFB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// lwzx r4,r9,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B9AFD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b9b000
	goto loc_82B9B000;
loc_82B9AFD8:
	// addi r4,r15,-16
	ctx.r4.s64 = ctx.r15.s64 + -16;
	// bctrl 
	ctx.lr = 0x82B9AFE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B9AFFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B9B000:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B9B010;
	sub_82D2B608(ctx, base);
loc_82B9B010:
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b9af2c
	if (cr6.gt) goto loc_82B9AF2C;
loc_82B9B030:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9B044;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82B9B050:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9B05C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B9B05C"))) PPC_WEAK_FUNC(sub_82B9B05C);
PPC_FUNC_IMPL(__imp__sub_82B9B05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9B060"))) PPC_WEAK_FUNC(sub_82B9B060);
PPC_FUNC_IMPL(__imp__sub_82B9B060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82B9B068;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B9B088;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B9B0A0;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-12944
	ctx.r9.s64 = ctx.r11.s64 + -12944;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// addi r25,r30,96
	ctx.r25.s64 = ctx.r30.s64 + 96;
	// stw r23,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r23.u32);
	// stw r23,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r23.u32);
	// stw r23,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r23.u32);
	// stb r23,112(r30)
	PPC_STORE_U8(ctx.r30.u32 + 112, ctx.r23.u8);
	// stb r19,113(r30)
	PPC_STORE_U8(ctx.r30.u32 + 113, ctx.r19.u8);
	// stb r18,114(r30)
	PPC_STORE_U8(ctx.r30.u32 + 114, ctx.r18.u8);
	// stb r17,115(r30)
	PPC_STORE_U8(ctx.r30.u32 + 115, ctx.r17.u8);
	// bl 0x830ff290
	ctx.lr = 0x82B9B0E0;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B9B0E4;
	sub_830FF988(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b9b2f8
	if (!cr6.eq) goto loc_82B9B2F8;
	// bl 0x830ff290
	ctx.lr = 0x82B9B0F4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B9B0F8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82b9b2f0
	if (cr6.eq) goto loc_82B9B2F0;
	// bl 0x8311e3d0
	ctx.lr = 0x82B9B104;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x82B9B10C;
	sub_8311D680(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B9B118;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// addis r24,r11,6
	ctx.r24.s64 = ctx.r11.s64 + 393216;
	// li r21,255
	ctx.r21.s64 = 255;
	// addi r24,r24,-30316
	ctx.r24.s64 = ctx.r24.s64 + -30316;
loc_82B9B130:
	// add r26,r27,r24
	ctx.r26.u64 = ctx.r27.u64 + ctx.r24.u64;
	// lbz r11,45(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 45);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b9b148
	if (!cr6.eq) goto loc_82B9B148;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// b 0x82b9b154
	goto loc_82B9B154;
loc_82B9B148:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82b9b1f4
	if (!cr6.eq) goto loc_82B9B1F4;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82B9B154:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82b9b168
	if (cr6.lt) goto loc_82B9B168;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x82b9b170
	goto loc_82B9B170;
loc_82B9B168:
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbz r11,169(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 169);
loc_82B9B170:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82b9b1f4
	if (cr6.lt) goto loc_82B9B1F4;
	// lbz r31,69(r26)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r26.u32 + 69);
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x82b9b1f4
	if (!cr6.lt) goto loc_82B9B1F4;
	// bl 0x831156e8
	ctx.lr = 0x82B9B18C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r31,2800
	ctx.r10.s64 = ctx.r31.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,690
	ctx.r3.s64 = ctx.r11.s64 + 690;
	// bl 0x8312a600
	ctx.lr = 0x82B9B1A0;
	sub_8312A600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b9b1d8
	if (!cr6.eq) goto loc_82B9B1D8;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplw cr6,r22,r27
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r27.u32, xer);
	// stb r28,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r28.u8);
	// bne cr6,0x82b9b1cc
	if (!cr6.eq) goto loc_82B9B1CC;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r20,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r20.s64 = ctx.r9.s32 >> 3;
loc_82B9B1CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83546fd8
	ctx.lr = 0x82B9B1D8;
	sub_83546FD8(ctx, base);
loc_82B9B1D8:
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9b1f0
	if (cr6.eq) goto loc_82B9B1F0;
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9b1f4
	if (!cr6.eq) goto loc_82B9B1F4;
loc_82B9B1F0:
	// stb r21,93(r26)
	PPC_STORE_U8(ctx.r26.u32 + 93, ctx.r21.u8);
loc_82B9B1F4:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x82b9b130
	if (cr6.lt) goto loc_82B9B130;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b9b2d8
	if (cr0.eq) goto loc_82B9B2D8;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,16936
	ctx.r31.s64 = ctx.r11.s64 + 16936;
	// lwz r4,16936(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16936);
	// bl 0x82d20ae0
	ctx.lr = 0x82B9B230;
	sub_82D20AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82B9B23C;
	sub_82D20AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82B9B248;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d23390
	ctx.lr = 0x82B9B258;
	sub_82D23390(ctx, base);
	// lbz r10,114(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 114);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b9b270
	if (cr6.eq) goto loc_82B9B270;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stb r20,112(r30)
	PPC_STORE_U8(ctx.r30.u32 + 112, ctx.r20.u8);
	// b 0x82b9b2a8
	goto loc_82B9B2A8;
loc_82B9B270:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lbz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b9b298
	if (cr6.gt) goto loc_82B9B298;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9B298;
	sub_831CC188(ctx, base);
loc_82B9B298:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lbz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
loc_82B9B2A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B9B2B0;
	sub_82D195D8(ctx, base);
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9b2d8
	if (cr6.eq) goto loc_82B9B2D8;
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9b2d8
	if (!cr6.eq) goto loc_82B9B2D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9B2D8;
	sub_82D19788(ctx, base);
loc_82B9B2D8:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9b2f8
	if (!cr6.eq) goto loc_82B9B2F8;
	// lbz r11,113(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 113);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9b2f8
	if (!cr6.eq) goto loc_82B9B2F8;
loc_82B9B2F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d191f8
	ctx.lr = 0x82B9B2F8;
	sub_82D191F8(ctx, base);
loc_82B9B2F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9B304"))) PPC_WEAK_FUNC(sub_82B9B304);
PPC_FUNC_IMPL(__imp__sub_82B9B304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9B308"))) PPC_WEAK_FUNC(sub_82B9B308);
PPC_FUNC_IMPL(__imp__sub_82B9B308) {
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
	// bl 0x82b9a760
	ctx.lr = 0x82B9B328;
	sub_82B9A760(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9b340
	if (cr6.eq) goto loc_82B9B340;
	// bl 0x82416268
	ctx.lr = 0x82B9B33C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B9B340:
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

__attribute__((alias("__imp__sub_82B9B358"))) PPC_WEAK_FUNC(sub_82B9B358);
PPC_FUNC_IMPL(__imp__sub_82B9B358) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82b9b3f0
	if (!cr6.eq) goto loc_82B9B3F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B9B390;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9B3A0;
	sub_82D19788(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82B9B3A4;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B9B3B0;
	sub_82D195D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B9B3BC;
	sub_82D199D0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 8;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x83103068
	ctx.lr = 0x82B9B3EC;
	sub_83103068(ctx, base);
	// b 0x82b9b42c
	goto loc_82B9B42C;
loc_82B9B3F0:
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82d1ed60
	ctx.lr = 0x82B9B3F8;
	sub_82D1ED60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B9B400;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-13640
	ctx.r4.s64 = ctx.r11.s64 + -13640;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B9B41C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9a7d8
	ctx.lr = 0x82B9B424;
	sub_82B9A7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9a358
	ctx.lr = 0x82B9B42C;
	sub_82B9A358(ctx, base);
loc_82B9B42C:
	// li r3,1
	ctx.r3.s64 = 1;
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

