#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C9EBB0"))) PPC_WEAK_FUNC(sub_82C9EBB0);
PPC_FUNC_IMPL(__imp__sub_82C9EBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C9EBB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9ef74
	if (cr6.eq) goto loc_82C9EF74;
	// bl 0x82d86078
	ctx.lr = 0x82C9EBD4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9ef74
	if (cr6.eq) goto loc_82C9EF74;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C9EBE4;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d97688
	ctx.lr = 0x82C9EBE8;
	sub_82D97688(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,28
	ctx.r11.s64 = 28;
	// li r25,0
	ctx.r25.s64 = 0;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// divw r10,r8,r11
	ctx.r10.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c9ec50
	if (cr6.eq) goto loc_82C9EC50;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// ble cr6,0x82c9ec3c
	if (!cr6.gt) goto loc_82C9EC3C;
loc_82C9EC1C:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, xer);
	// beq cr6,0x82c9ec48
	if (cr6.eq) goto loc_82C9EC48;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82c9ec1c
	if (cr6.gt) goto loc_82C9EC1C;
	// b 0x82c9ec50
	goto loc_82C9EC50;
loc_82C9EC3C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9EC48;
	sub_831CC188(ctx, base);
loc_82C9EC48:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x82c9ecec
	if (!cr6.eq) goto loc_82C9ECEC;
loc_82C9EC50:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// addi r31,r11,800
	ctx.r31.s64 = ctx.r11.s64 + 800;
	// blt cr6,0x82c9eca4
	if (cr6.lt) goto loc_82C9ECA4;
	// beq cr6,0x82c9ec88
	if (cr6.eq) goto loc_82C9EC88;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// bge cr6,0x82c9ecc8
	if (!cr6.lt) goto loc_82C9ECC8;
	// addi r4,r31,-156
	ctx.r4.s64 = ctx.r31.s64 + -156;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82C9EC7C;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,581
	ctx.r5.u64 = ctx.r5.u64 | 581;
	// b 0x82c9ecbc
	goto loc_82C9ECBC;
loc_82C9EC88:
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82C9EC98;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,580
	ctx.r5.u64 = ctx.r5.u64 | 580;
	// b 0x82c9ecbc
	goto loc_82C9ECBC;
loc_82C9ECA4:
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82C9ECB4;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,579
	ctx.r5.u64 = ctx.r5.u64 | 579;
loc_82C9ECBC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C9ECC8;
	sub_82A69A28(ctx, base);
loc_82C9ECC8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9ECE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C9ECEC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,800
	ctx.r31.s64 = ctx.r11.s64 + 800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9ED10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 * 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r26,136
	ctx.r3.s64 = ctx.r26.s64 + 136;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82d9a9f0
	ctx.lr = 0x82C9ED4C;
	sub_82D9A9F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b56298
	ctx.lr = 0x82C9ED58;
	sub_82B56298(ctx, base);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c9ed74
	if (!cr6.eq) goto loc_82C9ED74;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8378e240
	ctx.lr = 0x82C9ED6C;
	sub_8378E240(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C9ED74:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82c9eda4
	if (!cr6.eq) goto loc_82C9EDA4;
	// addi r4,r31,-116
	ctx.r4.s64 = ctx.r31.s64 + -116;
	// bctrl 
	ctx.lr = 0x82C9ED98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,270(r26)
	PPC_STORE_U8(ctx.r26.u32 + 270, ctx.r9.u8);
	// b 0x82c9edac
	goto loc_82C9EDAC;
loc_82C9EDA4:
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// bctrl 
	ctx.lr = 0x82C9EDAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9EDAC:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82d8b758
	ctx.lr = 0x82C9EDB4;
	sub_82D8B758(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d8b938
	ctx.lr = 0x82C9EDC0;
	sub_82D8B938(ctx, base);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r28,r30,100
	ctx.r28.s64 = ctx.r30.s64 + 100;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9EDE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9ee28
	if (cr6.eq) goto loc_82C9EE28;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82c9ee00
	if (cr6.eq) goto loc_82C9EE00;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C9EDFC;
	sub_82D29598(ctx, base);
	// b 0x82c9ee28
	goto loc_82C9EE28;
loc_82C9EE00:
	// addi r4,r31,-1494
	ctx.r4.s64 = ctx.r31.s64 + -1494;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C9EE0C;
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
	ctx.lr = 0x82C9EE20;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C9EE28;
	sub_8387E8E0(ctx, base);
loc_82C9EE28:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9EE40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c98178
	ctx.lr = 0x82C9EE50;
	sub_82C98178(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82c9eee0
	if (!cr6.eq) goto loc_82C9EEE0;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bctrl 
	ctx.lr = 0x82C9EE78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C9EE90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9eee8
	if (cr6.eq) goto loc_82C9EEE8;
	// addi r4,r31,-1493
	ctx.r4.s64 = ctx.r31.s64 + -1493;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C9EEA8;
	sub_837B0C10(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x82d8ee48
	ctx.lr = 0x82C9EEC0;
	sub_82D8EE48(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c9eae0
	ctx.lr = 0x82C9EED4;
	sub_82C9EAE0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C9EEDC;
	sub_8387E8E0(ctx, base);
	// b 0x82c9eee8
	goto loc_82C9EEE8;
loc_82C9EEE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C9EEE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9EEE8:
	// lwz r10,112(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82c9ef08
	if (!cr6.gt) goto loc_82C9EF08;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82C9EEFC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c9eefc
	if (cr6.lt) goto loc_82C9EEFC;
loc_82C9EF08:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82C9EF18;
	sub_82D2D510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82c9bea8
	ctx.lr = 0x82C9EF28;
	sub_82C9BEA8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9ef48
	if (cr6.lt) goto loc_82C9EF48;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82C9EF48;
	sub_825952B8(ctx, base);
loc_82C9EF48:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
	// blt cr6,0x82c9ef74
	if (cr6.lt) goto loc_82C9EF74;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x82C9EF74;
	sub_825952B8(ctx, base);
loc_82C9EF74:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9EF7C"))) PPC_WEAK_FUNC(sub_82C9EF7C);
PPC_FUNC_IMPL(__imp__sub_82C9EF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9EF80"))) PPC_WEAK_FUNC(sub_82C9EF80);
PPC_FUNC_IMPL(__imp__sub_82C9EF80) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c9ebb0
	sub_82C9EBB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9EF84"))) PPC_WEAK_FUNC(sub_82C9EF84);
PPC_FUNC_IMPL(__imp__sub_82C9EF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9EF88"))) PPC_WEAK_FUNC(sub_82C9EF88);
PPC_FUNC_IMPL(__imp__sub_82C9EF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82C9EF90;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82C9EFA0;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9efc8
	if (!cr6.eq) goto loc_82C9EFC8;
	// li r4,218
	ctx.r4.s64 = 218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82C9EFB8;
	sub_82D1A998(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C9EFC8;
	sub_82D19788(ctx, base);
loc_82C9EFC8:
	// bl 0x82d86078
	ctx.lr = 0x82C9EFCC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f4c8
	if (cr6.eq) goto loc_82C9F4C8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C9EFDC;
	sub_82DAB6D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9EFE8;
	sub_82D19A78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9EFF0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r23,r11,136
	ctx.r23.s64 = ctx.r11.s64 + 136;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r23,-24
	ctx.r4.s64 = ctx.r23.s64 + -24;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9F010;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f028
	if (cr6.eq) goto loc_82C9F028;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,578
	ctx.r4.u64 = ctx.r4.u64 | 578;
	// bl 0x82d30340
	ctx.lr = 0x82C9F028;
	sub_82D30340(ctx, base);
loc_82C9F028:
	// li r30,-1
	ctx.r30.s64 = -1;
	// lis r29,-31776
	ctx.r29.s64 = -2082471936;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,732(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 732);
	// bl 0x82d19b10
	ctx.lr = 0x82C9F044;
	sub_82D19B10(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r24,-31776
	ctx.r24.s64 = -2082471936;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,736(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 736);
	// bl 0x82d19b10
	ctx.lr = 0x82C9F05C;
	sub_82D19B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9F064;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,732(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 732);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9F07C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f4c8
	if (cr6.eq) goto loc_82C9F4C8;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82C9F090:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82C9F098;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// bge cr6,0x82c9f110
	if (!cr6.lt) goto loc_82C9F110;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C9F0AC;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f4c8
	if (cr6.eq) goto loc_82C9F4C8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21408
	ctx.lr = 0x82C9F0CC;
	sub_82D21408(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9ebb0
	ctx.lr = 0x82C9F0DC;
	sub_82C9EBB0(ctx, base);
	// lwz r11,3496(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3496);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c9f104
	if (cr6.eq) goto loc_82C9F104;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82c9f104
	if (!cr6.eq) goto loc_82C9F104;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C9F104;
	sub_82D2B608(ctx, base);
loc_82C9F104:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82c9f090
	if (cr6.lt) goto loc_82C9F090;
loc_82C9F110:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97688
	ctx.lr = 0x82C9F118;
	sub_82D97688(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9e2c0
	ctx.lr = 0x82C9F124;
	sub_82C9E2C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97618
	ctx.lr = 0x82C9F12C;
	sub_82D97618(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82c9f14c
	if (cr6.eq) goto loc_82C9F14C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97618
	ctx.lr = 0x82C9F140;
	sub_82D97618(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82c9f174
	goto loc_82C9F174;
loc_82C9F14C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82C9F154;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9f17c
	if (cr6.eq) goto loc_82C9F17C;
	// lwz r11,3496(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3496);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c9f17c
	if (!cr6.eq) goto loc_82C9F17C;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82C9F174:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82C9F17C;
	sub_82D1EAC0(ctx, base);
loc_82C9F17C:
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82d8bb28
	ctx.lr = 0x82C9F18C;
	sub_82D8BB28(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r28,28
	ctx.r28.s64 = 28;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c9f318
	if (cr6.eq) goto loc_82C9F318;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C9F1AC;
	sub_82D19788(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r10,r9,r28
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c9f1fc
	if (cr6.eq) goto loc_82C9F1FC;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// ble cr6,0x82c9f238
	if (!cr6.gt) goto loc_82C9F238;
loc_82C9F1D8:
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r6,73
	cr6.compare<int32_t>(ctx.r6.s32, 73, xer);
	// bne cr6,0x82c9f1ec
	if (!cr6.eq) goto loc_82C9F1EC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82C9F1EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c9f1d8
	if (cr6.gt) goto loc_82C9F1D8;
loc_82C9F1FC:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c9f244
	if (!cr6.eq) goto loc_82C9F244;
	// addi r3,r23,-8
	ctx.r3.s64 = ctx.r23.s64 + -8;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82C9F218;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r4,r4,563
	ctx.r4.u64 = ctx.r4.u64 | 563;
	// bl 0x82d2ada8
	ctx.lr = 0x82C9F228;
	sub_82D2ADA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82C9F234;
	sub_83103100(ctx, base);
	// b 0x82c9f2b4
	goto loc_82C9F2B4;
loc_82C9F238:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9F244;
	sub_831CC188(ctx, base);
loc_82C9F244:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82c9f27c
	if (!cr6.eq) goto loc_82C9F27C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c9f27c
	if (!cr6.eq) goto loc_82C9F27C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82cefad8
	ctx.lr = 0x82C9F264;
	sub_82CEFAD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f2c0
	if (cr6.eq) goto loc_82C9F2C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82C9F278;
	sub_83103100(ctx, base);
	// b 0x82c9f2c0
	goto loc_82C9F2C0;
loc_82C9F27C:
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82c9f2c0
	if (!cr6.eq) goto loc_82C9F2C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82cefad8
	ctx.lr = 0x82C9F290;
	sub_82CEFAD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f2a4
	if (cr6.eq) goto loc_82C9F2A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82C9F2A4;
	sub_83103100(ctx, base);
loc_82C9F2A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82C9F2B4;
	sub_82D1EAC0(ctx, base);
loc_82C9F2B4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19720
	ctx.lr = 0x82C9F2C0;
	sub_82D19720(ctx, base);
loc_82C9F2C0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// beq cr6,0x82c9f318
	if (cr6.eq) goto loc_82C9F318;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9f318
	if (cr6.eq) goto loc_82C9F318;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C9F2F0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f4c8
	if (cr6.eq) goto loc_82C9F4C8;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82C9F308;
	sub_82D2B608(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82C9F318;
	sub_82D1EAC0(ctx, base);
loc_82C9F318:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C9F328;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82C9F330;
	sub_82D19BA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82c9f35c
	if (!cr6.eq) goto loc_82C9F35C;
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// ori r5,r5,70
	ctx.r5.u64 = ctx.r5.u64 | 70;
	// b 0x82c9f364
	goto loc_82C9F364;
loc_82C9F35C:
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,599
	ctx.r5.u64 = ctx.r5.u64 | 599;
loc_82C9F364:
	// bctrl 
	ctx.lr = 0x82C9F368;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82C9F370;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9f3ac
	if (!cr6.eq) goto loc_82C9F3AC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C9F38C;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,583
	ctx.r5.u64 = ctx.r5.u64 | 583;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9F3AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9F3AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,31
	ctx.r5.s64 = 2031616;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,81
	ctx.r5.u64 = ctx.r5.u64 | 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9F3CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9F3D4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,736(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 736);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C9F3EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f4c8
	if (cr6.eq) goto loc_82C9F4C8;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82C9F41C;
	sub_8259CC28(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,543
	ctx.r5.u64 = ctx.r5.u64 | 543;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C9F430;
	sub_82A69A28(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82c9f4b4
	if (cr0.eq) goto loc_82C9F4B4;
	// lbz r11,270(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 270);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9f4b4
	if (!cr6.eq) goto loc_82C9F4B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82C9F458;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82c9f498
	if (cr6.eq) goto loc_82C9F498;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// bne cr6,0x82c9f4c0
	if (!cr6.eq) goto loc_82C9F4C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82C9F490;
	sub_82D2B608(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82C9F498:
	// lbz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9f4c0
	if (cr6.eq) goto loc_82C9F4C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82C9F4AC;
	sub_82D2B608(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82C9F4B4:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82C9F4C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82C9F4C8;
	sub_82D2B608(ctx, base);
loc_82C9F4C8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9F4D0"))) PPC_WEAK_FUNC(sub_82C9F4D0);
PPC_FUNC_IMPL(__imp__sub_82C9F4D0) {
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
	ctx.lr = 0x82C9F4EC;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f590
	if (cr6.eq) goto loc_82C9F590;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x829259c8
	ctx.lr = 0x82C9F500;
	sub_829259C8(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x82c9f568
	if (!cr6.lt) goto loc_82C9F568;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d8bb28
	ctx.lr = 0x82C9F510;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c9f568
	if (!cr6.eq) goto loc_82C9F568;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C9F524;
	sub_831F8200(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8312dcc0
	ctx.lr = 0x82C9F534;
	sub_8312DCC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19948
	ctx.lr = 0x82C9F53C;
	sub_82D19948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C9F544;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82C9F550;
	sub_82D2AEC8(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,-48
	ctx.r5.s64 = ctx.r10.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C9F564;
	sub_82D20DA8(ctx, base);
	// b 0x82c9f590
	goto loc_82C9F590;
loc_82C9F568:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9ef88
	ctx.lr = 0x82C9F570;
	sub_82C9EF88(ctx, base);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x8307e040
	ctx.lr = 0x82C9F578;
	sub_8307E040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82583300
	ctx.lr = 0x82C9F580;
	sub_82583300(ctx, base);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C9F588;
	sub_82DAB6D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d97730
	ctx.lr = 0x82C9F590;
	sub_82D97730(ctx, base);
loc_82C9F590:
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

__attribute__((alias("__imp__sub_82C9F5AC"))) PPC_WEAK_FUNC(sub_82C9F5AC);
PPC_FUNC_IMPL(__imp__sub_82C9F5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9F5B0"))) PPC_WEAK_FUNC(sub_82C9F5B0);
PPC_FUNC_IMPL(__imp__sub_82C9F5B0) {
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
	// bl 0x82d86078
	ctx.lr = 0x82C9F5C8;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C9F5D0;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d97a20
	ctx.lr = 0x82C9F5D4;
	sub_82D97A20(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,1924
	ctx.r5.s64 = ctx.r11.s64 + 1924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C9F5E8;
	sub_82D20DA8(ctx, base);
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

__attribute__((alias("__imp__sub_82C9F5FC"))) PPC_WEAK_FUNC(sub_82C9F5FC);
PPC_FUNC_IMPL(__imp__sub_82C9F5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9F600"))) PPC_WEAK_FUNC(sub_82C9F600);
PPC_FUNC_IMPL(__imp__sub_82C9F600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C9F608;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9F618;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r27,r11,1980
	ctx.r27.s64 = ctx.r11.s64 + 1980;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9F638;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f6f8
	if (cr6.eq) goto loc_82C9F6F8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82c9f68c
	if (cr6.eq) goto loc_82C9F68C;
	// bl 0x82d2fe58
	ctx.lr = 0x82C9F650;
	sub_82D2FE58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f680
	if (cr6.eq) goto loc_82C9F680;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bge cr6,0x82c9f670
	if (!cr6.lt) goto loc_82C9F670;
	// bl 0x82d3d908
	ctx.lr = 0x82C9F66C;
	sub_82D3D908(ctx, base);
	// b 0x82c9f674
	goto loc_82C9F674;
loc_82C9F670:
	// bl 0x82d3d8a8
	ctx.lr = 0x82C9F674;
	sub_82D3D8A8(ctx, base);
loc_82C9F674:
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_82C9F680:
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C9F68C;
	sub_82D17DA0(ctx, base);
loc_82C9F68C:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9f6bc
	if (!cr6.eq) goto loc_82C9F6BC;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,351
	ctx.r4.u64 = ctx.r4.u64 | 351;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d30340
	ctx.lr = 0x82C9F6AC;
	sub_82D30340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9F6B4;
	sub_82D19A78(ctx, base);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// b 0x82c9f6e4
	goto loc_82C9F6E4;
loc_82C9F6BC:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c9f6f8
	if (!cr6.eq) goto loc_82C9F6F8;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,545
	ctx.r4.u64 = ctx.r4.u64 | 545;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d30340
	ctx.lr = 0x82C9F6D8;
	sub_82D30340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9F6E0;
	sub_82D19A78(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82C9F6E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9F6F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9F6F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9F700"))) PPC_WEAK_FUNC(sub_82C9F700);
PPC_FUNC_IMPL(__imp__sub_82C9F700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C9F708;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82C9F724;
	sub_82D2D510(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,2112
	ctx.r30.s64 = ctx.r11.s64 + 2112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9F748;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82c9f770
	if (!cr6.eq) goto loc_82C9F770;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82C9F770:
	// bctrl 
	ctx.lr = 0x82C9F774;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9F77C"))) PPC_WEAK_FUNC(sub_82C9F77C);
PPC_FUNC_IMPL(__imp__sub_82C9F77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9F780"))) PPC_WEAK_FUNC(sub_82C9F780);
PPC_FUNC_IMPL(__imp__sub_82C9F780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C9F788;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x82c9f7ac
	if (cr6.eq) goto loc_82C9F7AC;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x82c9f7f0
	if (!cr6.eq) goto loc_82C9F7F0;
	// lis r30,550
	ctx.r30.s64 = 36044800;
	// ori r30,r30,149
	ctx.r30.u64 = ctx.r30.u64 | 149;
	// b 0x82c9f7b4
	goto loc_82C9F7B4;
loc_82C9F7AC:
	// lis r30,550
	ctx.r30.s64 = 36044800;
	// ori r30,r30,548
	ctx.r30.u64 = ctx.r30.u64 | 548;
loc_82C9F7B4:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 976);
	// bl 0x82d2f6d8
	ctx.lr = 0x82C9F7D0;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f7f0
	if (cr6.eq) goto loc_82C9F7F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2ada8
	ctx.lr = 0x82C9F7E4;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82C9F7F0;
	sub_83103100(ctx, base);
loc_82C9F7F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9F7F8"))) PPC_WEAK_FUNC(sub_82C9F7F8);
PPC_FUNC_IMPL(__imp__sub_82C9F7F8) {
	PPC_FUNC_PROLOGUE();
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82c9f600
	sub_82C9F600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9F800"))) PPC_WEAK_FUNC(sub_82C9F800);
PPC_FUNC_IMPL(__imp__sub_82C9F800) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82c9f600
	sub_82C9F600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9F808"))) PPC_WEAK_FUNC(sub_82C9F808);
PPC_FUNC_IMPL(__imp__sub_82C9F808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C9F810;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r6,976(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 976);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82C9F82C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9f82c
	if (!cr6.eq) goto loc_82C9F82C;
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
	ctx.lr = 0x82C9F858;
	sub_827A8810(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r29,r11,1904
	ctx.r29.s64 = ctx.r11.s64 + 1904;
	// bne cr6,0x82c9f928
	if (!cr6.eq) goto loc_82C9F928;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82c9f98c
	if (!cr6.eq) goto loc_82C9F98C;
	// bl 0x82d86078
	ctx.lr = 0x82C9F874;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9f9a8
	if (cr6.eq) goto loc_82C9F9A8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82C9F884;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82C9F888;
	sub_83102DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d99fa0
	ctx.lr = 0x82C9F894;
	sub_82D99FA0(ctx, base);
	// cmplwi cr6,r3,250
	cr6.compare<uint32_t>(ctx.r3.u32, 250, xer);
	// blt cr6,0x82c9f8a0
	if (cr6.lt) goto loc_82C9F8A0;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82C9F8A0:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x82d2f420
	ctx.lr = 0x82C9F8C0;
	sub_82D2F420(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,340
	ctx.r4.u64 = ctx.r4.u64 | 340;
	// bl 0x82d2a1c8
	ctx.lr = 0x82C9F8D0;
	sub_82D2A1C8(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,188
	ctx.r5.u64 = ctx.r5.u64 | 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2a258
	ctx.lr = 0x82C9F8E4;
	sub_82D2A258(ctx, base);
	// lis r5,60
	ctx.r5.s64 = 3932160;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,74
	ctx.r5.u64 = ctx.r5.u64 | 74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2a258
	ctx.lr = 0x82C9F8F8;
	sub_82D2A258(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d99fa0
	ctx.lr = 0x82C9F900;
	sub_82D99FA0(ctx, base);
	// cmplwi cr6,r3,250
	cr6.compare<uint32_t>(ctx.r3.u32, 250, xer);
	// blt cr6,0x82c9f918
	if (cr6.lt) goto loc_82C9F918;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29d78
	ctx.lr = 0x82C9F918;
	sub_82D29D78(ctx, base);
loc_82C9F918:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82C9F924;
	sub_83103100(ctx, base);
	// b 0x82c9f98c
	goto loc_82C9F98C;
loc_82C9F928:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r6,980(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82C9F934:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9f934
	if (!cr6.eq) goto loc_82C9F934;
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
	ctx.lr = 0x82C9F960;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9f98c
	if (!cr6.eq) goto loc_82C9F98C;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82c9f97c
	if (cr6.lt) goto loc_82C9F97C;
	// bne cr6,0x82c9f98c
	if (!cr6.eq) goto loc_82C9F98C;
	// addi r5,r29,-12
	ctx.r5.s64 = ctx.r29.s64 + -12;
	// b 0x82c9f980
	goto loc_82C9F980;
loc_82C9F97C:
	// addi r5,r29,-24
	ctx.r5.s64 = ctx.r29.s64 + -24;
loc_82C9F980:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C9F98C;
	sub_82D20DA8(ctx, base);
loc_82C9F98C:
	// lbz r11,292(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9f9a8
	if (cr6.eq) goto loc_82C9F9A8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C9F9A8;
	sub_82D20DA8(ctx, base);
loc_82C9F9A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9F9B0"))) PPC_WEAK_FUNC(sub_82C9F9B0);
PPC_FUNC_IMPL(__imp__sub_82C9F9B0) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,2232
	ctx.r9.s64 = ctx.r11.s64 + 2232;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// bl 0x82d35198
	ctx.lr = 0x82C9F9E4;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82C9F9F0;
	sub_82D36760(ctx, base);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9fa00
	if (cr6.eq) goto loc_82C9FA00;
	// bl 0x82416268
	ctx.lr = 0x82C9FA00;
	sub_82416268(ctx, base);
loc_82C9FA00:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9fa20
	if (cr6.eq) goto loc_82C9FA20;
	// bl 0x82416268
	ctx.lr = 0x82C9FA20;
	sub_82416268(ctx, base);
loc_82C9FA20:
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// bl 0x82d9b958
	ctx.lr = 0x82C9FA34;
	sub_82D9B958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82C9FA3C;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_82C9FA54"))) PPC_WEAK_FUNC(sub_82C9FA54);
PPC_FUNC_IMPL(__imp__sub_82C9FA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9FA58"))) PPC_WEAK_FUNC(sub_82C9FA58);
PPC_FUNC_IMPL(__imp__sub_82C9FA58) {
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
	// bl 0x82c9f9b0
	ctx.lr = 0x82C9FA78;
	sub_82C9F9B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9fa90
	if (cr6.eq) goto loc_82C9FA90;
	// bl 0x82416268
	ctx.lr = 0x82C9FA8C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C9FA90:
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

__attribute__((alias("__imp__sub_82C9FAA8"))) PPC_WEAK_FUNC(sub_82C9FAA8);
PPC_FUNC_IMPL(__imp__sub_82C9FAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C9FAB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C9FABC;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82C9FAC4;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82C9FAC8;
	sub_83102DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x825832f0
	ctx.lr = 0x82C9FAD0;
	sub_825832F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99fa0
	ctx.lr = 0x82C9FADC;
	sub_82D99FA0(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// blt cr6,0x82c9fb04
	if (cr6.lt) goto loc_82C9FB04;
	// li r11,250
	ctx.r11.s64 = 250;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82c9f780
	ctx.lr = 0x82C9FAFC;
	sub_82C9F780(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C9FB04:
	// bl 0x82d86078
	ctx.lr = 0x82C9FB08;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C9FB14;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d97688
	ctx.lr = 0x82C9FB18;
	sub_82D97688(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ad6338
	ctx.lr = 0x82C9FB24;
	sub_82AD6338(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,28
	ctx.r11.s64 = 28;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// divw r8,r9,r11
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x82c9fb9c
	if (!cr6.eq) goto loc_82C9FB9C;
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82C9FB48;
	sub_825832D8(ctx, base);
	// bl 0x82da4368
	ctx.lr = 0x82C9FB4C;
	sub_82DA4368(ctx, base);
	// li r9,84
	ctx.r9.s64 = 84;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,300(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// lwz r5,296(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d9a9f0
	ctx.lr = 0x82C9FB68;
	sub_82D9A9F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9fb9c
	if (cr6.eq) goto loc_82C9FB9C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,1916
	ctx.r11.s64 = ctx.r11.s64 + 1916;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// bl 0x82d20da8
	ctx.lr = 0x82C9FB8C;
	sub_82D20DA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9af88
	ctx.lr = 0x82C9FB94;
	sub_82D9AF88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C9FB9C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,1916
	ctx.r5.s64 = ctx.r11.s64 + 1916;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C9FBB0;
	sub_82D20DA8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c9fbc0
	if (cr6.eq) goto loc_82C9FBC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82C9FBC0;
	sub_82416268(ctx, base);
loc_82C9FBC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9FBC8"))) PPC_WEAK_FUNC(sub_82C9FBC8);
PPC_FUNC_IMPL(__imp__sub_82C9FBC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C9FBE4;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C9FBEC;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d97688
	ctx.lr = 0x82C9FBF0;
	sub_82D97688(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ad6338
	ctx.lr = 0x82C9FBFC;
	sub_82AD6338(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,28
	ctx.r11.s64 = 28;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// divw r8,r9,r11
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x82c9fc38
	if (!cr6.eq) goto loc_82C9FC38;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,1932
	ctx.r5.s64 = ctx.r11.s64 + 1932;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C9FC2C;
	sub_82D20DA8(ctx, base);
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C9FC38;
	sub_82D17DA0(ctx, base);
loc_82C9FC38:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c9fc48
	if (cr6.eq) goto loc_82C9FC48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82C9FC48;
	sub_82416268(ctx, base);
loc_82C9FC48:
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

__attribute__((alias("__imp__sub_82C9FC60"))) PPC_WEAK_FUNC(sub_82C9FC60);
PPC_FUNC_IMPL(__imp__sub_82C9FC60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82C9FC68;
	__savegprlr_19(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C9FC74;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c9fc88
	if (!cr6.eq) goto loc_82C9FC88;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82C9FC88:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82C9FC90;
	sub_8332F198(ctx, base);
	// bl 0x82d9c118
	ctx.lr = 0x82C9FC94;
	sub_82D9C118(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x82C9FC9C;
	sub_83102DB0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825832d8
	ctx.lr = 0x82C9FCAC;
	sub_825832D8(ctx, base);
	// bl 0x82da4368
	ctx.lr = 0x82C9FCB0;
	sub_82DA4368(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x82C9FCB8;
	sub_83102DB0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r22,104
	ctx.r22.s64 = 104;
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r26,15
	ctx.r26.s64 = 15;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// divw. r11,r8,r22
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r22.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c9fdfc
	if (cr0.eq) goto loc_82C9FDFC;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c9fe9c
	if (!cr6.gt) goto loc_82C9FE9C;
loc_82C9FCF0:
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82b56298
	ctx.lr = 0x82C9FCFC;
	sub_82B56298(ctx, base);
	// lwz r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c9fd8c
	if (cr6.eq) goto loc_82C9FD8C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r6,300(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 300);
	// lwz r5,296(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 296);
	// bl 0x82d9c3b8
	ctx.lr = 0x82C9FD1C;
	sub_82D9C3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9fd8c
	if (!cr6.eq) goto loc_82C9FD8C;
	// lwz r11,296(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 296);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lwz r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// bne cr6,0x82c9fd4c
	if (!cr6.eq) goto loc_82C9FD4C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c9fd60
	if (cr6.eq) goto loc_82C9FD60;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8378e240
	ctx.lr = 0x82C9FD48;
	sub_8378E240(ctx, base);
	// b 0x82c9fddc
	goto loc_82C9FDDC;
loc_82C9FD4C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82c9fd60
	if (!cr6.eq) goto loc_82C9FD60;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8378e240
	ctx.lr = 0x82C9FD5C;
	sub_8378E240(ctx, base);
	// b 0x82c9fddc
	goto loc_82C9FDDC;
loc_82C9FD60:
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r25,96
	ctx.r3.s64 = ctx.r25.s64 + 96;
	// bl 0x82d9d2b8
	ctx.lr = 0x82C9FD6C;
	sub_82D9D2B8(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r25,256
	ctx.r3.s64 = ctx.r25.s64 + 256;
	// bl 0x82ab5f20
	ctx.lr = 0x82C9FD7C;
	sub_82AB5F20(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r25,272
	ctx.r3.s64 = ctx.r25.s64 + 272;
	// bl 0x82ab5f20
	ctx.lr = 0x82C9FD8C;
	sub_82AB5F20(ctx, base);
loc_82C9FD8C:
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9fda8
	if (cr6.lt) goto loc_82C9FDA8;
	// stw r23,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x825952b8
	ctx.lr = 0x82C9FDA8;
	sub_825952B8(ctx, base);
loc_82C9FDA8:
	// lwz r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// stw r26,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r26.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// blt cr6,0x82c9fdd0
	if (cr6.lt) goto loc_82C9FDD0;
	// stw r23,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r23.u32);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x825952b8
	ctx.lr = 0x82C9FDD0;
	sub_825952B8(ctx, base);
loc_82C9FDD0:
	// stw r26,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r26.u32);
	// stw r31,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r31.u32);
	// stb r31,388(r1)
	PPC_STORE_U8(ctx.r1.u32 + 388, ctx.r31.u8);
loc_82C9FDDC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,104
	ctx.r28.s64 = ctx.r28.s64 + 104;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r22
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82c9fcf0
	if (cr6.gt) goto loc_82C9FCF0;
loc_82C9FDFC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r23,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r23.u32);
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// addi r21,r1,256
	ctx.r21.s64 = ctx.r1.s64 + 256;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82C9FE14:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r11,r9,r22
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82ca016c
	if (cr0.eq) goto loc_82CA016C;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x82ca018c
	if (!cr6.gt) goto loc_82CA018C;
loc_82C9FE38:
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b56298
	ctx.lr = 0x82C9FE44;
	sub_82B56298(ctx, base);
	// lwz r11,296(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 296);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bne cr6,0x82c9fea8
	if (!cr6.eq) goto loc_82C9FEA8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c9fef0
	if (cr6.eq) goto loc_82C9FEF0;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9fe78
	if (cr6.lt) goto loc_82C9FE78;
	// stw r23,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r23.u32);
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82C9FE78;
	sub_825952B8(ctx, base);
loc_82C9FE78:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82ca0140
	if (cr6.lt) goto loc_82CA0140;
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// b 0x82ca0138
	goto loc_82CA0138;
loc_82C9FE9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9FEA8;
	sub_831CC188(ctx, base);
loc_82C9FEA8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82c9fef0
	if (!cr6.eq) goto loc_82C9FEF0;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9fecc
	if (cr6.lt) goto loc_82C9FECC;
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82C9FECC;
	sub_825952B8(ctx, base);
loc_82C9FECC:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82ca0140
	if (cr6.lt) goto loc_82CA0140;
	// stw r23,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r23.u32);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// b 0x82ca0138
	goto loc_82CA0138;
loc_82C9FEF0:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x82c9ff3c
	if (cr6.eq) goto loc_82C9FF3C;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9ff18
	if (cr6.lt) goto loc_82C9FF18;
	// stw r23,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r23.u32);
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82C9FF18;
	sub_825952B8(ctx, base);
loc_82C9FF18:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82ca0140
	if (cr6.lt) goto loc_82CA0140;
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// b 0x82ca0138
	goto loc_82CA0138;
loc_82C9FF3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82C9FF44;
	sub_82D8BB28(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c9ff9c
	if (cr6.eq) goto loc_82C9FF9C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c9ff9c
	if (!cr6.eq) goto loc_82C9FF9C;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9ff78
	if (cr6.lt) goto loc_82C9FF78;
	// stw r23,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r23.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82C9FF78;
	sub_825952B8(ctx, base);
loc_82C9FF78:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82ca0140
	if (cr6.lt) goto loc_82CA0140;
	// stw r23,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// b 0x82ca0138
	goto loc_82CA0138;
loc_82C9FF9C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82c9ffc8
	if (!cr6.eq) goto loc_82C9FFC8;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9ffc8
	if (cr6.eq) goto loc_82C9FFC8;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c9ffc8
	if (cr6.lt) goto loc_82C9FFC8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8378e240
	ctx.lr = 0x82C9FFC4;
	sub_8378E240(ctx, base);
	// b 0x82ca014c
	goto loc_82CA014C;
loc_82C9FFC8:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82b5a7e0
	ctx.lr = 0x82C9FFD0;
	sub_82B5A7E0(ctx, base);
	// li r9,84
	ctx.r9.s64 = 84;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,300(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 300);
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r5,296(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 296);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82d9a9f0
	ctx.lr = 0x82C9FFF0;
	sub_82D9A9F0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// stw r10,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82CA0018;
	sub_8259CB28(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8259cb28
	ctx.lr = 0x82CA002C;
	sub_8259CB28(ctx, base);
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r3,r25,256
	ctx.r3.s64 = ctx.r25.s64 + 256;
	// lwz r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r9,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r9.u32);
	// stw r8,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r8.u32);
	// stw r7,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r7.u32);
	// stw r6,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r6.u32);
	// stw r5,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ca007c
	if (!cr6.eq) goto loc_82CA007C;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// bl 0x82ab5f20
	ctx.lr = 0x82CA006C;
	sub_82AB5F20(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r25,272
	ctx.r3.s64 = ctx.r25.s64 + 272;
	// bl 0x82ab5f20
	ctx.lr = 0x82CA0078;
	sub_82AB5F20(ctx, base);
	// b 0x82ca0098
	goto loc_82CA0098;
loc_82CA007C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab5f20
	ctx.lr = 0x82CA0088;
	sub_82AB5F20(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r25,272
	ctx.r3.s64 = ctx.r25.s64 + 272;
	// bl 0x82ab5f20
	ctx.lr = 0x82CA0098;
	sub_82AB5F20(ctx, base);
loc_82CA0098:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r25,96
	ctx.r3.s64 = ctx.r25.s64 + 96;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// bl 0x82d9d2b8
	ctx.lr = 0x82CA00AC;
	sub_82D9D2B8(ctx, base);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ca00c8
	if (cr6.lt) goto loc_82CA00C8;
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x82CA00C8;
	sub_825952B8(ctx, base);
loc_82CA00C8:
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// stw r26,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r26.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// blt cr6,0x82ca00f0
	if (cr6.lt) goto loc_82CA00F0;
	// stw r23,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r23.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x825952b8
	ctx.lr = 0x82CA00F0;
	sub_825952B8(ctx, base);
loc_82CA00F0:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r26,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r26.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// blt cr6,0x82ca0118
	if (cr6.lt) goto loc_82CA0118;
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CA0118;
	sub_825952B8(ctx, base);
loc_82CA0118:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82ca0140
	if (cr6.lt) goto loc_82CA0140;
	// stw r23,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r23.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
loc_82CA0138:
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x82CA0140;
	sub_825952B8(ctx, base);
loc_82CA0140:
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
loc_82CA014C:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r28,r28,104
	ctx.r28.s64 = ctx.r28.s64 + 104;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r22
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82c9fe38
	if (cr6.gt) goto loc_82C9FE38;
loc_82CA016C:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplwi cr6,r20,2
	cr6.compare<uint32_t>(ctx.r20.u32, 2, xer);
	// blt cr6,0x82c9fe14
	if (cr6.lt) goto loc_82C9FE14;
	// addi r3,r25,96
	ctx.r3.s64 = ctx.r25.s64 + 96;
	// bl 0x829259c8
	ctx.lr = 0x82CA0184;
	sub_829259C8(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82CA018C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CA0198;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CA0198"))) PPC_WEAK_FUNC(sub_82CA0198);
PPC_FUNC_IMPL(__imp__sub_82CA0198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82CA01A0;
	__savegprlr_21(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r31,936(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// bl 0x82d19a78
	ctx.lr = 0x82CA01B0;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82CA01B8;
	sub_82D2F098(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca02f0
	if (cr6.eq) goto loc_82CA02F0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82d33c10
	ctx.lr = 0x82CA01F4;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca02f0
	if (cr6.eq) goto loc_82CA02F0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// li r24,15
	ctx.r24.s64 = 15;
	// lis r22,-31776
	ctx.r22.s64 = -2082471936;
	// lis r21,-31776
	ctx.r21.s64 = -2082471936;
	// addi r23,r11,1266
	ctx.r23.s64 = ctx.r11.s64 + 1266;
loc_82CA0214:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CA0220;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca02f0
	if (cr6.eq) goto loc_82CA02F0;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// lwz r4,972(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 972);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA0244;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0274
	if (cr6.eq) goto loc_82CA0274;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82d8bfc0
	ctx.lr = 0x82CA025C;
	sub_82D8BFC0(ctx, base);
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA0274;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CA0274:
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82CA0290;
	sub_8259CC28(ctx, base);
	// lwz r4,964(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 964);
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
loc_82CA02A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca02a4
	if (!cr6.eq) goto loc_82CA02A4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CA02C8;
	sub_8259CC28(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA02D8;
	sub_82A69AD0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bl 0x82d33c10
	ctx.lr = 0x82CA02E8;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ca0214
	if (cr6.lt) goto loc_82CA0214;
loc_82CA02F0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA02F8"))) PPC_WEAK_FUNC(sub_82CA02F8);
PPC_FUNC_IMPL(__imp__sub_82CA02F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CA0300;
	__savegprlr_24(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CA0318;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,104
	ctx.r10.s64 = 104;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r26
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, xer);
	// bgt cr6,0x82ca0340
	if (cr6.gt) goto loc_82CA0340;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CA0340;
	sub_831CC188(ctx, base);
loc_82CA0340:
	// mulli r10,r26,104
	ctx.r10.s64 = ctx.r26.s64 * 104;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b56298
	ctx.lr = 0x82CA0350;
	sub_82B56298(ctx, base);
	// bl 0x82dc9d40
	ctx.lr = 0x82CA0354;
	sub_82DC9D40(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r28,100
	ctx.r30.s64 = ctx.r28.s64 + 100;
	// bne cr6,0x82ca0378
	if (!cr6.eq) goto loc_82CA0378;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82ca0370
	if (!cr6.eq) goto loc_82CA0370;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82CA0370:
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// b 0x82ca0388
	goto loc_82CA0388;
loc_82CA0378:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82ca0384
	if (!cr6.eq) goto loc_82CA0384;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82CA0384:
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
loc_82CA0388:
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82CA03AC;
	sub_8259CB28(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,916(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// bl 0x837b0c10
	ctx.lr = 0x82CA03BC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA03CC;
	sub_82A69AD0(ctx, base);
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// li r24,2
	ctx.r24.s64 = 2;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// addi r30,r28,100
	ctx.r30.s64 = ctx.r28.s64 + 100;
	// beq cr6,0x82ca04b4
	if (cr6.eq) goto loc_82CA04B4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82ca03ec
	if (!cr6.eq) goto loc_82CA03EC;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82CA03EC:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,920(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 920);
	// bl 0x837b0c10
	ctx.lr = 0x82CA03FC;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,313
	ctx.r5.u64 = ctx.r5.u64 | 313;
	// bl 0x82a69a28
	ctx.lr = 0x82CA0410;
	sub_82A69A28(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r10,1298
	ctx.r11.s64 = ctx.r10.s64 + 1298;
	// addi r4,r11,-31
	ctx.r4.s64 = ctx.r11.s64 + -31;
	// bl 0x837b0c10
	ctx.lr = 0x82CA0424;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// lwz r6,348(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r5,344(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// bl 0x82d8e6a0
	ctx.lr = 0x82CA0438;
	sub_82D8E6A0(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// addi r30,r28,100
	ctx.r30.s64 = ctx.r28.s64 + 100;
	// bne cr6,0x82ca0448
	if (!cr6.eq) goto loc_82CA0448;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82CA0448:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82CA0468;
	sub_8259CB28(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// bl 0x837b0c10
	ctx.lr = 0x82CA0478;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA0488;
	sub_82A69AD0(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ca04a4
	if (cr6.lt) goto loc_82CA04A4;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82CA04A4;
	sub_825952B8(ctx, base);
loc_82CA04A4:
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// b 0x82ca05b8
	goto loc_82CA05B8;
loc_82CA04B4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82ca04c0
	if (!cr6.eq) goto loc_82CA04C0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82CA04C0:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,920(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 920);
	// bl 0x837b0c10
	ctx.lr = 0x82CA04D0;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,509
	ctx.r5.u64 = ctx.r5.u64 | 509;
	// bl 0x82a69a28
	ctx.lr = 0x82CA04E4;
	sub_82A69A28(ctx, base);
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca0528
	if (!cr6.eq) goto loc_82CA0528;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// addi r30,r28,100
	ctx.r30.s64 = ctx.r28.s64 + 100;
	// bne cr6,0x82ca0500
	if (!cr6.eq) goto loc_82CA0500;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82CA0500:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// bl 0x837b0c10
	ctx.lr = 0x82CA0510;
	sub_837B0C10(ctx, base);
	// lis r5,6
	ctx.r5.s64 = 393216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,43
	ctx.r5.u64 = ctx.r5.u64 | 43;
	// bl 0x82a69a28
	ctx.lr = 0x82CA0524;
	sub_82A69A28(ctx, base);
	// b 0x82ca05b8
	goto loc_82CA05B8;
loc_82CA0528:
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ca053c
	if (!cr6.gt) goto loc_82CA053C;
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82CA053C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,1298
	ctx.r4.s64 = ctx.r11.s64 + 1298;
	// bl 0x837b0c10
	ctx.lr = 0x82CA054C;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,153
	ctx.r4.u64 = ctx.r4.u64 | 153;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d042a8
	ctx.lr = 0x82CA0560;
	sub_82D042A8(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// addi r30,r28,100
	ctx.r30.s64 = ctx.r28.s64 + 100;
	// bne cr6,0x82ca0570
	if (!cr6.eq) goto loc_82CA0570;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82CA0570:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82CA0590;
	sub_8259CB28(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// bl 0x837b0c10
	ctx.lr = 0x82CA05A0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA05B0;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA05B8;
	sub_8387E8E0(ctx, base);
loc_82CA05B8:
	// lwz r11,256(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 256);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r9,260(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 260);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r26,r7
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r7.u32, xer);
	// bge cr6,0x82ca05ec
	if (!cr6.lt) goto loc_82CA05EC;
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_82CA05EC:
	// lwz r11,272(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 272);
	// lwz r9,276(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 276);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r26,r7
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r7.u32, xer);
	// bge cr6,0x82ca060c
	if (!cr6.lt) goto loc_82CA060C;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82CA060C:
	// lwz r5,324(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ca062c
	if (cr6.eq) goto loc_82CA062C;
	// ori r4,r4,153
	ctx.r4.u64 = ctx.r4.u64 | 153;
	// bl 0x82d042a8
	ctx.lr = 0x82CA0628;
	sub_82D042A8(ctx, base);
	// b 0x82ca0638
	goto loc_82CA0638;
loc_82CA062C:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// ori r4,r4,262
	ctx.r4.u64 = ctx.r4.u64 | 262;
	// bl 0x82d042a8
	ctx.lr = 0x82CA0638;
	sub_82D042A8(ctx, base);
loc_82CA0638:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// addi r30,r28,100
	ctx.r30.s64 = ctx.r28.s64 + 100;
	// bne cr6,0x82ca0648
	if (!cr6.eq) goto loc_82CA0648;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82CA0648:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82CA0668;
	sub_8259CB28(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwz r4,932(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CA0680:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca0680
	if (!cr6.eq) goto loc_82CA0680;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CA06A4;
	sub_8259CC28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA06B4;
	sub_82A69AD0(ctx, base);
	// lwz r10,328(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82c9f700
	ctx.lr = 0x82CA06D0;
	sub_82C9F700(ctx, base);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82ca06ec
	if (cr6.lt) goto loc_82CA06EC;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82CA06EC;
	sub_825952B8(ctx, base);
loc_82CA06EC:
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x8378e240
	ctx.lr = 0x82CA0700;
	sub_8378E240(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA0708"))) PPC_WEAK_FUNC(sub_82CA0708);
PPC_FUNC_IMPL(__imp__sub_82CA0708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CA0710;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,54
	ctx.r11.s64 = ctx.r4.s64 + 54;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwzx r10,r25,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r3.u32);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x82ca074c
	if (!cr6.eq) goto loc_82CA074C;
	// addi r11,r4,59
	ctx.r11.s64 = ctx.r4.s64 + 59;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// beq cr6,0x82ca0830
	if (cr6.eq) goto loc_82CA0830;
loc_82CA074C:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,936(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// bl 0x82d19a78
	ctx.lr = 0x82CA075C;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82CA0764;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0830
	if (cr6.eq) goto loc_82CA0830;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CA0774;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0830
	if (cr6.eq) goto loc_82CA0830;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,2136
	ctx.r30.s64 = ctx.r11.s64 + 2136;
	// addi r4,r30,-837
	ctx.r4.s64 = ctx.r30.s64 + -837;
	// bl 0x837b0c10
	ctx.lr = 0x82CA0794;
	sub_837B0C10(ctx, base);
	// clrldi r10,r26,32
	ctx.r10.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r4,700
	ctx.r4.s64 = 45875200;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,20048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// ori r4,r4,760
	ctx.r4.u64 = ctx.r4.u64 | 760;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82d042a8
	ctx.lr = 0x82CA07CC;
	sub_82D042A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// bl 0x8292a3f8
	ctx.lr = 0x82CA07DC;
	sub_8292A3F8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CA07EC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA07FC;
	sub_82A69AD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CA0808;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CA0818;
	sub_82A6A1B8(ctx, base);
	// addi r8,r28,59
	ctx.r8.s64 = ctx.r28.s64 + 59;
	// stwx r26,r25,r29
	PPC_STORE_U32(ctx.r25.u32 + ctx.r29.u32, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r7,r29
	PPC_STORE_U32(ctx.r7.u32 + ctx.r29.u32, ctx.r27.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82CA0830;
	sub_8387E8E0(ctx, base);
loc_82CA0830:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA0838"))) PPC_WEAK_FUNC(sub_82CA0838);
PPC_FUNC_IMPL(__imp__sub_82CA0838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CA0840;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r31,936(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// bl 0x82d19a78
	ctx.lr = 0x82CA0858;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82CA0860;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca09f0
	if (cr6.eq) goto loc_82CA09F0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CA0870;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca09f0
	if (cr6.eq) goto loc_82CA09F0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// ori r4,r4,500
	ctx.r4.u64 = ctx.r4.u64 | 500;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x82CA08A4;
	sub_82D042A8(ctx, base);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x82CA08CC;
	sub_8259CB28(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 964);
	// bl 0x837b0c10
	ctx.lr = 0x82CA08DC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA08EC;
	sub_82A69AD0(ctx, base);
	// subfic r11,r28,4
	xer.ca = ctx.r28.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r28.s64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bgt cr6,0x82ca09a0
	if (cr6.gt) goto loc_82CA09A0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ca0938
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA0938;
	// bdzf 4*cr6+eq,0x82ca0954
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA0954;
	// bdzf 4*cr6+eq,0x82ca0970
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA0970;
	// bne cr6,0x82ca098c
	if (!cr6.eq) goto loc_82CA098C;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// li r6,69
	ctx.r6.s64 = 69;
	// li r5,40
	ctx.r5.s64 = 40;
	// ori r4,r4,491
	ctx.r4.u64 = ctx.r4.u64 | 491;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82CA0934;
	sub_82D042A8(ctx, base);
	// b 0x82ca09a0
	goto loc_82CA09A0;
loc_82CA0938:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// li r6,74
	ctx.r6.s64 = 74;
	// li r5,70
	ctx.r5.s64 = 70;
	// ori r4,r4,491
	ctx.r4.u64 = ctx.r4.u64 | 491;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82CA0950;
	sub_82D042A8(ctx, base);
	// b 0x82ca09a0
	goto loc_82CA09A0;
loc_82CA0954:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r5,75
	ctx.r5.s64 = 75;
	// ori r4,r4,491
	ctx.r4.u64 = ctx.r4.u64 | 491;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82CA096C;
	sub_82D042A8(ctx, base);
	// b 0x82ca09a0
	goto loc_82CA09A0;
loc_82CA0970:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// li r6,84
	ctx.r6.s64 = 84;
	// li r5,80
	ctx.r5.s64 = 80;
	// ori r4,r4,491
	ctx.r4.u64 = ctx.r4.u64 | 491;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82CA0988;
	sub_82D042A8(ctx, base);
	// b 0x82ca09a0
	goto loc_82CA09A0;
loc_82CA098C:
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// li r5,85
	ctx.r5.s64 = 85;
	// ori r4,r4,215
	ctx.r4.u64 = ctx.r4.u64 | 215;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82CA09A0;
	sub_82D042A8(ctx, base);
loc_82CA09A0:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x82CA09C0;
	sub_8259CB28(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,968(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 968);
	// bl 0x837b0c10
	ctx.lr = 0x82CA09D0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA09E0;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA09E8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA09F0;
	sub_8387E8E0(ctx, base);
loc_82CA09F0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA09F8"))) PPC_WEAK_FUNC(sub_82CA09F8);
PPC_FUNC_IMPL(__imp__sub_82CA09F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CA0A00;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8308e078
	ctx.lr = 0x82CA0A18;
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
	ctx.lr = 0x82CA0A30;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,2232
	ctx.r9.s64 = ctx.r11.s64 + 2232;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x82d9b910
	ctx.lr = 0x82CA0A50;
	sub_82D9B910(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// clrlwi r7,r28,24
	ctx.r7.u64 = ctx.r28.u32 & 0xFF;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// addi r30,r31,256
	ctx.r30.s64 = ctx.r31.s64 + 256;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// addi r27,r31,272
	ctx.r27.s64 = ctx.r31.s64 + 272;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stb r11,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r11.u8);
	// stw r29,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r29.u32);
	// beq cr6,0x82ca0aa0
	if (cr6.eq) goto loc_82CA0AA0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// b 0x82ca0aa4
	goto loc_82CA0AA4;
loc_82CA0AA0:
	// stw r26,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r26.u32);
loc_82CA0AA4:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,896(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 896);
	// bl 0x82d20ae0
	ctx.lr = 0x82CA0AB4;
	sub_82D20AE0(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,904(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	// bl 0x82d20ae0
	ctx.lr = 0x82CA0AC4;
	sub_82D20AE0(ctx, base);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,908(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	// bl 0x82d20ae0
	ctx.lr = 0x82CA0AD4;
	sub_82D20AE0(ctx, base);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,900(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 900);
	// bl 0x82d23390
	ctx.lr = 0x82CA0AE8;
	sub_82D23390(ctx, base);
	// stw r29,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r29,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r29.u32);
	// addi r9,r31,216
	ctx.r9.s64 = ctx.r31.s64 + 216;
	// stw r29,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r29.u32);
	// addi r9,r31,236
	ctx.r9.s64 = ctx.r31.s64 + 236;
	// stw r29,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r29.u32);
	// stw r29,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r29.u32);
	// stw r29,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r29.u32);
	// stw r29,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r29.u32);
	// stw r29,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r29.u32);
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ca0b50
	if (cr6.eq) goto loc_82CA0B50;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x82CA0B48;
	sub_831CE420(ctx, base);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82CA0B50:
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ca0b80
	if (cr6.eq) goto loc_82CA0B80;
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
	ctx.lr = 0x82CA0B78;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_82CA0B80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9fc60
	ctx.lr = 0x82CA0B88;
	sub_82C9FC60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca0bb4
	if (!cr6.eq) goto loc_82CA0BB4;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,210
	ctx.r4.u64 = ctx.r4.u64 | 210;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21730
	ctx.lr = 0x82CA0BA4;
	sub_82D21730(ctx, base);
	// stb r26,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CA0BB4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,1868
	ctx.r3.s64 = ctx.r11.s64 + 1868;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bd6558
	ctx.lr = 0x82CA0BCC;
	sub_82BD6558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0be0
	if (cr6.eq) goto loc_82CA0BE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82CA0BE0;
	sub_83103100(ctx, base);
loc_82CA0BE0:
	// bl 0x82d86078
	ctx.lr = 0x82CA0BE4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0c14
	if (cr6.eq) goto loc_82CA0C14;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CA0BF4;
	sub_831F8200(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82ca0c18
	if (!cr6.eq) goto loc_82CA0C18;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,384
	ctx.r4.u64 = ctx.r4.u64 | 384;
	// bl 0x82d21730
	ctx.lr = 0x82CA0C14;
	sub_82D21730(ctx, base);
loc_82CA0C14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CA0C18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA0C20"))) PPC_WEAK_FUNC(sub_82CA0C20);
PPC_FUNC_IMPL(__imp__sub_82CA0C20) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca02f8
	sub_82CA02F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA0C24"))) PPC_WEAK_FUNC(sub_82CA0C24);
PPC_FUNC_IMPL(__imp__sub_82CA0C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA0C28"))) PPC_WEAK_FUNC(sub_82CA0C28);
PPC_FUNC_IMPL(__imp__sub_82CA0C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CA0C30;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CA0C3C;
	sub_82D19A78(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,936(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// bl 0x82d2f098
	ctx.lr = 0x82CA0C48;
	sub_82D2F098(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0c70
	if (cr6.eq) goto loc_82CA0C70;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82CA0C68;
	sub_82D2B608(ctx, base);
	// addi r27,r29,100
	ctx.r27.s64 = ctx.r29.s64 + 100;
	// b 0x82ca0c74
	goto loc_82CA0C74;
loc_82CA0C70:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82CA0C74:
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r28,r11,2068
	ctx.r28.s64 = ctx.r11.s64 + 2068;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r28,-68
	ctx.r4.s64 = ctx.r28.s64 + -68;
	// bl 0x8259cc28
	ctx.lr = 0x82CA0C9C;
	sub_8259CC28(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,686
	ctx.r5.u64 = ctx.r5.u64 | 686;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CA0CB0;
	sub_82A69A28(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r27,r29,100
	ctx.r27.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82ca0cc0
	if (!cr6.eq) goto loc_82CA0CC0;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82CA0CC0:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r4,r28,-52
	ctx.r4.s64 = ctx.r28.s64 + -52;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82CA0CDC;
	sub_8259CC28(ctx, base);
	// lis r5,37
	ctx.r5.s64 = 2424832;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,93
	ctx.r5.u64 = ctx.r5.u64 | 93;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CA0CF0;
	sub_82A69A28(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82ca0d00
	if (!cr6.eq) goto loc_82CA0D00;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82CA0D00:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82CA0D1C;
	sub_8259CC28(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,685
	ctx.r5.u64 = ctx.r5.u64 | 685;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CA0D30;
	sub_82A69A28(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,912(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	// bl 0x82d19b10
	ctx.lr = 0x82CA0D4C;
	sub_82D19B10(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x82CA0D54;
	sub_83102DB0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,104
	ctx.r8.s64 = 104;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// divw r5,r10,r8
	ctx.r5.s32 = PPCDivide(ctx.r10.s32, ctx.r8.s32);
	// bl 0x82d20f50
	ctx.lr = 0x82CA0D80;
	sub_82D20F50(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CA0D90;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CA0DA0;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CA0DA8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CA0DC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0e08
	if (cr6.eq) goto loc_82CA0E08;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,351
	ctx.r4.u64 = ctx.r4.u64 | 351;
	// bl 0x82d30340
	ctx.lr = 0x82CA0DDC;
	sub_82D30340(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2fe58
	ctx.lr = 0x82CA0DE4;
	sub_82D2FE58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca0e08
	if (cr6.eq) goto loc_82CA0E08;
	// bl 0x83572958
	ctx.lr = 0x82CA0DF4;
	sub_83572958(ctx, base);
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82CA0E08;
	sub_82D3D968(ctx, base);
loc_82CA0E08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca0198
	ctx.lr = 0x82CA0E10;
	sub_82CA0198(ctx, base);
loc_82CA0E10:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca0708
	ctx.lr = 0x82CA0E24;
	sub_82CA0708(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca0838
	ctx.lr = 0x82CA0E34;
	sub_82CA0838(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x82ca0e10
	if (cr6.lt) goto loc_82CA0E10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CA0E48;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA0E60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x82ca0e7c
	if (!cr6.eq) goto loc_82CA0E7C;
	// ori r4,r4,508
	ctx.r4.u64 = ctx.r4.u64 | 508;
	// b 0x82ca0e80
	goto loc_82CA0E80;
loc_82CA0E7C:
	// ori r4,r4,170
	ctx.r4.u64 = ctx.r4.u64 | 170;
loc_82CA0E80:
	// bl 0x82d30340
	ctx.lr = 0x82CA0E84;
	sub_82D30340(ctx, base);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r4,220
	ctx.r4.s64 = 220;
	// beq cr6,0x82ca0e9c
	if (cr6.eq) goto loc_82CA0E9C;
	// li r4,219
	ctx.r4.s64 = 219;
loc_82CA0E9C:
	// bl 0x82d1a998
	ctx.lr = 0x82CA0EA0;
	sub_82D1A998(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CA0EB0;
	sub_82D19788(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA0EB8"))) PPC_WEAK_FUNC(sub_82CA0EB8);
PPC_FUNC_IMPL(__imp__sub_82CA0EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CA0EC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA0ED0;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8307e040
	ctx.lr = 0x82CA0EDC;
	sub_8307E040(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82CA0EEC;
	sub_82DAB6D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x82CA0EF8;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,104
	ctx.r10.s64 = 104;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw. r10,r8,r10
	ctx.r10.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ca10e0
	if (cr0.eq) goto loc_82CA10E0;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82ca0f24
	if (cr6.gt) goto loc_82CA0F24;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CA0F24;
	sub_831CC188(ctx, base);
loc_82CA0F24:
	// mulli r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 * 104;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b56298
	ctx.lr = 0x82CA0F34;
	sub_82B56298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d97a20
	ctx.lr = 0x82CA0F3C;
	sub_82D97A20(ctx, base);
	// li r6,84
	ctx.r6.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,248(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r8,300(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// lwz r7,296(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82d97ce8
	ctx.lr = 0x82CA0F60;
	sub_82D97CE8(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82CA0F6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82da52a0
	ctx.lr = 0x82CA0F78;
	sub_82DA52A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca0fb8
	if (cr6.eq) goto loc_82CA0FB8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da51b0
	ctx.lr = 0x82CA0F94;
	sub_82DA51B0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da5228
	ctx.lr = 0x82CA0FAC;
	sub_82DA5228(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// b 0x82ca0fc8
	goto loc_82CA0FC8;
loc_82CA0FB8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stwx r25,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r25.u32);
	// stwx r25,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r25.u32);
loc_82CA0FC8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r31,20
	cr6.compare<uint32_t>(ctx.r31.u32, 20, xer);
	// blt cr6,0x82ca0f6c
	if (cr6.lt) goto loc_82CA0F6C;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r26,100
	ctx.r26.s64 = 100;
loc_82CA0FF4:
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r6,r30,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bge cr6,0x82ca1010
	if (!cr6.lt) goto loc_82CA1010;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca1010
	if (cr6.eq) goto loc_82CA1010;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82CA1010:
	// divwu. r5,r11,r26
	ctx.r5.u32 = PPCDivide(ctx.r11.u32, ctx.r26.u32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// add r28,r5,r28
	ctx.r28.u64 = ctx.r5.u64 + ctx.r28.u64;
	// beq 0x82ca1020
	if (cr0.eq) goto loc_82CA1020;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82CA1020:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca0708
	ctx.lr = 0x82CA102C;
	sub_82CA0708(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82ca0838
	ctx.lr = 0x82CA103C;
	sub_82CA0838(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// blt cr6,0x82ca0ff4
	if (cr6.lt) goto loc_82CA0FF4;
	// cmplwi cr6,r28,1000
	cr6.compare<uint32_t>(ctx.r28.u32, 1000, xer);
	// beq cr6,0x82ca1094
	if (cr6.eq) goto loc_82CA1094;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82ca1094
	if (cr6.eq) goto loc_82CA1094;
	// subfic r11,r27,4
	xer.ca = ctx.r27.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r27.s64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// divwu r5,r7,r26
	ctx.r5.u32 = PPCDivide(ctx.r7.u32, ctx.r26.u32);
	// subf r11,r28,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r28.s64;
	// addi r5,r11,1000
	ctx.r5.s64 = ctx.r11.s64 + 1000;
	// bl 0x82ca0708
	ctx.lr = 0x82CA1094;
	sub_82CA0708(ctx, base);
loc_82CA1094:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ca10b4
	if (cr6.lt) goto loc_82CA10B4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82CA10B4;
	sub_825952B8(ctx, base);
loc_82CA10B4:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r25.u8);
	// blt cr6,0x82ca10e0
	if (cr6.lt) goto loc_82CA10E0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x825952b8
	ctx.lr = 0x82CA10E0;
	sub_825952B8(ctx, base);
loc_82CA10E0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA10E8"))) PPC_WEAK_FUNC(sub_82CA10E8);
PPC_FUNC_IMPL(__imp__sub_82CA10E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82CA10F0;
	__savegprlr_22(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82ca0c28
	ctx.lr = 0x82CA10FC;
	sub_82CA0C28(ctx, base);
	// addi r3,r27,96
	ctx.r3.s64 = ctx.r27.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x82CA1104;
	sub_83102DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA110C;
	sub_82D86078(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CA1118;
	sub_82DAB6D0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82d97688
	ctx.lr = 0x82CA1120;
	sub_82D97688(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ad6338
	ctx.lr = 0x82CA112C;
	sub_82AD6338(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r11,28
	ctx.r11.s64 = 28;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r24,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r24.s64;
	// divw. r8,r9,r11
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ca11cc
	if (cr0.eq) goto loc_82CA11CC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r28,104
	ctx.r28.s64 = 104;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r26,4(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r11,r9,r28
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82ca11cc
	if (cr0.eq) goto loc_82CA11CC;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x82ca11b8
	if (!cr6.gt) goto loc_82CA11B8;
loc_82CA1174:
	// add r4,r29,r10
	ctx.r4.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b56298
	ctx.lr = 0x82CA1180;
	sub_82B56298(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// beq cr6,0x82ca11c4
	if (cr6.eq) goto loc_82CA11C4;
	// bl 0x8378e240
	ctx.lr = 0x82CA1194;
	sub_8378E240(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,104
	ctx.r29.s64 = ctx.r29.s64 + 104;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r28
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82ca1174
	if (cr6.gt) goto loc_82CA1174;
	// b 0x82ca11cc
	goto loc_82CA11CC;
loc_82CA11B8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CA11C4;
	sub_831CC188(ctx, base);
loc_82CA11C4:
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// bl 0x8378e240
	ctx.lr = 0x82CA11CC;
	sub_8378E240(ctx, base);
loc_82CA11CC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,912(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	// bl 0x82d19b10
	ctx.lr = 0x82CA11E8;
	sub_82D19B10(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82ca1200
	if (cr6.eq) goto loc_82CA1200;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82CA1200;
	sub_82D1EAC0(ctx, base);
loc_82CA1200:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82CA1208;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca121c
	if (!cr6.eq) goto loc_82CA121C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d97a20
	ctx.lr = 0x82CA121C;
	sub_82D97A20(ctx, base);
loc_82CA121C:
	// lwz r3,116(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 116);
	// bl 0x8307e040
	ctx.lr = 0x82CA1224;
	sub_8307E040(ctx, base);
	// lwz r11,296(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 296);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82ca1240
	if (!cr6.eq) goto loc_82CA1240;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82583300
	ctx.lr = 0x82CA1238;
	sub_82583300(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82ca124c
	goto loc_82CA124C;
loc_82CA1240:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82583300
	ctx.lr = 0x82CA1248;
	sub_82583300(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_82CA124C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d97730
	ctx.lr = 0x82CA1254;
	sub_82D97730(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CA1264;
	sub_82D19788(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r5,31
	ctx.r5.s64 = 2031616;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,81
	ctx.r5.u64 = ctx.r5.u64 | 81;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA1284;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA128C;
	sub_82D1C1A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca0eb8
	ctx.lr = 0x82CA1298;
	sub_82CA0EB8(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82ca12a8
	if (cr6.eq) goto loc_82CA12A8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82416268
	ctx.lr = 0x82CA12A8;
	sub_82416268(ctx, base);
loc_82CA12A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA12B4"))) PPC_WEAK_FUNC(sub_82CA12B4);
PPC_FUNC_IMPL(__imp__sub_82CA12B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA12B8"))) PPC_WEAK_FUNC(sub_82CA12B8);
PPC_FUNC_IMPL(__imp__sub_82CA12B8) {
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
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA12D0;
	sub_82D1C1A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca0eb8
	ctx.lr = 0x82CA12DC;
	sub_82CA0EB8(ctx, base);
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

__attribute__((alias("__imp__sub_82CA12F0"))) PPC_WEAK_FUNC(sub_82CA12F0);
PPC_FUNC_IMPL(__imp__sub_82CA12F0) {
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
	// blt cr6,0x82ca1318
	if (cr6.lt) goto loc_82CA1318;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca131c
	goto loc_82CA131C;
loc_82CA1318:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA131C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,304
	ctx.r4.s64 = 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CA1338;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca1354
	if (cr6.eq) goto loc_82CA1354;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca09f8
	ctx.lr = 0x82CA1350;
	sub_82CA09F8(ctx, base);
	// b 0x82ca1358
	goto loc_82CA1358;
loc_82CA1354:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA1358:
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

__attribute__((alias("__imp__sub_82CA1370"))) PPC_WEAK_FUNC(sub_82CA1370);
PPC_FUNC_IMPL(__imp__sub_82CA1370) {
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
	// blt cr6,0x82ca1398
	if (cr6.lt) goto loc_82CA1398;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca139c
	goto loc_82CA139C;
loc_82CA1398:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA139C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,304
	ctx.r4.s64 = 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CA13B8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca13d4
	if (cr6.eq) goto loc_82CA13D4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca09f8
	ctx.lr = 0x82CA13D0;
	sub_82CA09F8(ctx, base);
	// b 0x82ca13d8
	goto loc_82CA13D8;
loc_82CA13D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA13D8:
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

__attribute__((alias("__imp__sub_82CA13F0"))) PPC_WEAK_FUNC(sub_82CA13F0);
PPC_FUNC_IMPL(__imp__sub_82CA13F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CA13F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1420);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82ca1418
	if (cr6.lt) goto loc_82CA1418;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82ca141c
	if (cr6.lt) goto loc_82CA141C;
loc_82CA1418:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CA141C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca1434
	if (!cr6.eq) goto loc_82CA1434;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CA1434:
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,3088
	ctx.r10.s64 = ctx.r10.s64 + 3088;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x82ca14a0
	if (!cr6.gt) goto loc_82CA14A0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CA1458:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d19788
	ctx.lr = 0x82CA1470;
	sub_82D19788(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA148C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// blt cr6,0x82ca1458
	if (cr6.lt) goto loc_82CA1458;
loc_82CA14A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA14AC"))) PPC_WEAK_FUNC(sub_82CA14AC);
PPC_FUNC_IMPL(__imp__sub_82CA14AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA14B0"))) PPC_WEAK_FUNC(sub_82CA14B0);
PPC_FUNC_IMPL(__imp__sub_82CA14B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,2872
	ctx.r5.s64 = ctx.r11.s64 + 2872;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA14C0"))) PPC_WEAK_FUNC(sub_82CA14C0);
PPC_FUNC_IMPL(__imp__sub_82CA14C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA14C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,217
	ctx.r31.s64 = 217;
	// bl 0x8308e078
	ctx.lr = 0x82CA14D8;
	sub_8308E078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA14E0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca1534
	if (cr6.eq) goto loc_82CA1534;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CA14F0;
	sub_831F8200(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82ca1500
	if (!cr6.eq) goto loc_82CA1500;
	// li r31,216
	ctx.r31.s64 = 216;
loc_82CA1500:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d444b0
	ctx.lr = 0x82CA1510;
	sub_82D444B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca1534
	if (cr6.eq) goto loc_82CA1534;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CA1528;
	sub_82D17DA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82CA1534;
	sub_83103100(ctx, base);
loc_82CA1534:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA153C"))) PPC_WEAK_FUNC(sub_82CA153C);
PPC_FUNC_IMPL(__imp__sub_82CA153C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1540"))) PPC_WEAK_FUNC(sub_82CA1540);
PPC_FUNC_IMPL(__imp__sub_82CA1540) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA1564;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CA1570;
	sub_82D17DA0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82CA158C"))) PPC_WEAK_FUNC(sub_82CA158C);
PPC_FUNC_IMPL(__imp__sub_82CA158C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1590"))) PPC_WEAK_FUNC(sub_82CA1590);
PPC_FUNC_IMPL(__imp__sub_82CA1590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA1598;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CA15A8;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x82CA15C8;
	sub_8311C260(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x82CA15E4;
	sub_8311C260(ctx, base);
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
loc_82CA15EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82ca1610
	if (cr6.eq) goto loc_82CA1610;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ca15ec
	if (cr6.eq) goto loc_82CA15EC;
loc_82CA1610:
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA161C"))) PPC_WEAK_FUNC(sub_82CA161C);
PPC_FUNC_IMPL(__imp__sub_82CA161C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1620"))) PPC_WEAK_FUNC(sub_82CA1620);
PPC_FUNC_IMPL(__imp__sub_82CA1620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA1628;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CA1638;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x82CA1658;
	sub_8311C260(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x82CA1674;
	sub_8311C260(ctx, base);
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
loc_82CA167C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82ca16a0
	if (cr6.eq) goto loc_82CA16A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ca167c
	if (cr6.eq) goto loc_82CA167C;
loc_82CA16A0:
	// neg r11,r9
	ctx.r11.s64 = -ctx.r9.s64;
	// andc r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA16B4"))) PPC_WEAK_FUNC(sub_82CA16B4);
PPC_FUNC_IMPL(__imp__sub_82CA16B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA16B8"))) PPC_WEAK_FUNC(sub_82CA16B8);
PPC_FUNC_IMPL(__imp__sub_82CA16B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA16C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA16D0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca16e4
	if (!cr6.eq) goto loc_82CA16E4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA16E4:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82CA16EC;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x82CA16F0;
	sub_8382E338(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA16FC;
	sub_82D9C418(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA170C;
	sub_82D9C418(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca1738
	if (!cr6.eq) goto loc_82CA1738;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1738:
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA174C"))) PPC_WEAK_FUNC(sub_82CA174C);
PPC_FUNC_IMPL(__imp__sub_82CA174C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1750"))) PPC_WEAK_FUNC(sub_82CA1750);
PPC_FUNC_IMPL(__imp__sub_82CA1750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA1758;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA1768;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca177c
	if (!cr6.eq) goto loc_82CA177C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA177C:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82CA1784;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x82CA1788;
	sub_8382E338(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA1794;
	sub_82D9C418(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA17A4;
	sub_82D9C418(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca17d0
	if (!cr6.eq) goto loc_82CA17D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA17D0:
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA17E4"))) PPC_WEAK_FUNC(sub_82CA17E4);
PPC_FUNC_IMPL(__imp__sub_82CA17E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA17E8"))) PPC_WEAK_FUNC(sub_82CA17E8);
PPC_FUNC_IMPL(__imp__sub_82CA17E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA17F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA1800;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca1814
	if (!cr6.eq) goto loc_82CA1814;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1814:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA181C;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CA1820;
	sub_82D99C08(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA182C;
	sub_82D9A978(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA183C;
	sub_82D9A978(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca1868
	if (!cr6.eq) goto loc_82CA1868;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1868:
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA187C"))) PPC_WEAK_FUNC(sub_82CA187C);
PPC_FUNC_IMPL(__imp__sub_82CA187C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1880"))) PPC_WEAK_FUNC(sub_82CA1880);
PPC_FUNC_IMPL(__imp__sub_82CA1880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA1888;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA1898;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca18ac
	if (!cr6.eq) goto loc_82CA18AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA18AC:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA18B4;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CA18B8;
	sub_82D99C08(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA18C4;
	sub_82D9A978(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA18D4;
	sub_82D9A978(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca1900
	if (!cr6.eq) goto loc_82CA1900;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1900:
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1914"))) PPC_WEAK_FUNC(sub_82CA1914);
PPC_FUNC_IMPL(__imp__sub_82CA1914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1918"))) PPC_WEAK_FUNC(sub_82CA1918);
PPC_FUNC_IMPL(__imp__sub_82CA1918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA1920;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA1930;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca1944
	if (!cr6.eq) goto loc_82CA1944;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1944:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82CA194C;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x82CA1950;
	sub_8382E338(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA195C;
	sub_82D9C418(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA196C;
	sub_82D9C418(ctx, base);
	// addi r28,r3,28
	ctx.r28.s64 = ctx.r3.s64 + 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8316f008
	ctx.lr = 0x82CA197C;
	sub_8316F008(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8316f008
	ctx.lr = 0x82CA198C;
	sub_8316F008(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bne cr6,0x82ca19b0
	if (!cr6.eq) goto loc_82CA19B0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA19B0:
	// subfc r11,r3,r31
	xer.ca = ctx.r31.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// eqv r10,r3,r31
	ctx.r10.u64 = ~(ctx.r3.u64 ^ ctx.r31.u64);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA19CC"))) PPC_WEAK_FUNC(sub_82CA19CC);
PPC_FUNC_IMPL(__imp__sub_82CA19CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA19D0"))) PPC_WEAK_FUNC(sub_82CA19D0);
PPC_FUNC_IMPL(__imp__sub_82CA19D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA19D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA19E8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca19fc
	if (!cr6.eq) goto loc_82CA19FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA19FC:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82CA1A04;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x82CA1A08;
	sub_8382E338(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA1A14;
	sub_82D9C418(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA1A24;
	sub_82D9C418(ctx, base);
	// addi r28,r3,28
	ctx.r28.s64 = ctx.r3.s64 + 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8316f008
	ctx.lr = 0x82CA1A34;
	sub_8316F008(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8316f008
	ctx.lr = 0x82CA1A44;
	sub_8316F008(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bne cr6,0x82ca1a68
	if (!cr6.eq) goto loc_82CA1A68;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1A68:
	// subfc r11,r31,r3
	xer.ca = ctx.r3.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// eqv r10,r31,r3
	ctx.r10.u64 = ~(ctx.r31.u64 ^ ctx.r3.u64);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1A84"))) PPC_WEAK_FUNC(sub_82CA1A84);
PPC_FUNC_IMPL(__imp__sub_82CA1A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1A88"))) PPC_WEAK_FUNC(sub_82CA1A88);
PPC_FUNC_IMPL(__imp__sub_82CA1A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA1A90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA1AA0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca1ab4
	if (!cr6.eq) goto loc_82CA1AB4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1AB4:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA1ABC;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CA1AC0;
	sub_82D99C08(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA1ACC;
	sub_82D9A978(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA1ADC;
	sub_82D9A978(ctx, base);
	// addi r28,r3,64
	ctx.r28.s64 = ctx.r3.s64 + 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x8316f008
	ctx.lr = 0x82CA1AEC;
	sub_8316F008(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8316f008
	ctx.lr = 0x82CA1AFC;
	sub_8316F008(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bne cr6,0x82ca1b20
	if (!cr6.eq) goto loc_82CA1B20;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1B20:
	// subfc r11,r3,r31
	xer.ca = ctx.r31.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// eqv r10,r3,r31
	ctx.r10.u64 = ~(ctx.r3.u64 ^ ctx.r31.u64);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1B3C"))) PPC_WEAK_FUNC(sub_82CA1B3C);
PPC_FUNC_IMPL(__imp__sub_82CA1B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1B40"))) PPC_WEAK_FUNC(sub_82CA1B40);
PPC_FUNC_IMPL(__imp__sub_82CA1B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA1B48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA1B58;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca1b6c
	if (!cr6.eq) goto loc_82CA1B6C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1B6C:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA1B74;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CA1B78;
	sub_82D99C08(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA1B84;
	sub_82D9A978(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA1B94;
	sub_82D9A978(ctx, base);
	// addi r28,r3,64
	ctx.r28.s64 = ctx.r3.s64 + 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x8316f008
	ctx.lr = 0x82CA1BA4;
	sub_8316F008(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8316f008
	ctx.lr = 0x82CA1BB4;
	sub_8316F008(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bne cr6,0x82ca1bd8
	if (!cr6.eq) goto loc_82CA1BD8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1BD8:
	// subfc r11,r31,r3
	xer.ca = ctx.r3.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// eqv r10,r31,r3
	ctx.r10.u64 = ~(ctx.r31.u64 ^ ctx.r3.u64);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1BF4"))) PPC_WEAK_FUNC(sub_82CA1BF4);
PPC_FUNC_IMPL(__imp__sub_82CA1BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1BF8"))) PPC_WEAK_FUNC(sub_82CA1BF8);
PPC_FUNC_IMPL(__imp__sub_82CA1BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA1C00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA1C10;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca1c24
	if (!cr6.eq) goto loc_82CA1C24;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1C24:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82CA1C2C;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x82CA1C30;
	sub_8382E338(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA1C3C;
	sub_82D9C418(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA1C4C;
	sub_82D9C418(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca1c78
	if (!cr6.eq) goto loc_82CA1C78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1C78:
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1C8C"))) PPC_WEAK_FUNC(sub_82CA1C8C);
PPC_FUNC_IMPL(__imp__sub_82CA1C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1C90"))) PPC_WEAK_FUNC(sub_82CA1C90);
PPC_FUNC_IMPL(__imp__sub_82CA1C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA1C98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA1CA8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca1cbc
	if (!cr6.eq) goto loc_82CA1CBC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1CBC:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82CA1CC4;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x82CA1CC8;
	sub_8382E338(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA1CD4;
	sub_82D9C418(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA1CE4;
	sub_82D9C418(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca1d10
	if (!cr6.eq) goto loc_82CA1D10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1D10:
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1D24"))) PPC_WEAK_FUNC(sub_82CA1D24);
PPC_FUNC_IMPL(__imp__sub_82CA1D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1D28"))) PPC_WEAK_FUNC(sub_82CA1D28);
PPC_FUNC_IMPL(__imp__sub_82CA1D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA1D30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA1D40;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca1d54
	if (!cr6.eq) goto loc_82CA1D54;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1D54:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA1D5C;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CA1D60;
	sub_82D99C08(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA1D6C;
	sub_82D9A978(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA1D7C;
	sub_82D9A978(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca1da8
	if (!cr6.eq) goto loc_82CA1DA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1DA8:
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1DBC"))) PPC_WEAK_FUNC(sub_82CA1DBC);
PPC_FUNC_IMPL(__imp__sub_82CA1DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1DC0"))) PPC_WEAK_FUNC(sub_82CA1DC0);
PPC_FUNC_IMPL(__imp__sub_82CA1DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA1DC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA1DD8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca1dec
	if (!cr6.eq) goto loc_82CA1DEC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1DEC:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA1DF4;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CA1DF8;
	sub_82D99C08(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA1E04;
	sub_82D9A978(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA1E14;
	sub_82D9A978(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca1e40
	if (!cr6.eq) goto loc_82CA1E40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1E40:
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1E54"))) PPC_WEAK_FUNC(sub_82CA1E54);
PPC_FUNC_IMPL(__imp__sub_82CA1E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1E58"))) PPC_WEAK_FUNC(sub_82CA1E58);
PPC_FUNC_IMPL(__imp__sub_82CA1E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA1E60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA1E70;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca1e84
	if (!cr6.eq) goto loc_82CA1E84;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1E84:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82CA1E8C;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x82CA1E90;
	sub_8382E338(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA1E9C;
	sub_82D9C418(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA1EAC;
	sub_82D9C418(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca1ed8
	if (!cr6.eq) goto loc_82CA1ED8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1ED8:
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1EEC"))) PPC_WEAK_FUNC(sub_82CA1EEC);
PPC_FUNC_IMPL(__imp__sub_82CA1EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1EF0"))) PPC_WEAK_FUNC(sub_82CA1EF0);
PPC_FUNC_IMPL(__imp__sub_82CA1EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA1EF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA1F08;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca1f1c
	if (!cr6.eq) goto loc_82CA1F1C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1F1C:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82CA1F24;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x82CA1F28;
	sub_8382E338(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA1F34;
	sub_82D9C418(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA1F44;
	sub_82D9C418(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca1f70
	if (!cr6.eq) goto loc_82CA1F70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1F70:
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA1F84"))) PPC_WEAK_FUNC(sub_82CA1F84);
PPC_FUNC_IMPL(__imp__sub_82CA1F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA1F88"))) PPC_WEAK_FUNC(sub_82CA1F88);
PPC_FUNC_IMPL(__imp__sub_82CA1F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA1F90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA1FA0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca1fb4
	if (!cr6.eq) goto loc_82CA1FB4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA1FB4:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA1FBC;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CA1FC0;
	sub_82D99C08(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA1FCC;
	sub_82D9A978(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA1FDC;
	sub_82D9A978(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca2008
	if (!cr6.eq) goto loc_82CA2008;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA2008:
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA201C"))) PPC_WEAK_FUNC(sub_82CA201C);
PPC_FUNC_IMPL(__imp__sub_82CA201C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2020"))) PPC_WEAK_FUNC(sub_82CA2020);
PPC_FUNC_IMPL(__imp__sub_82CA2020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA2028;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA2038;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca204c
	if (!cr6.eq) goto loc_82CA204C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA204C:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA2054;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CA2058;
	sub_82D99C08(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA2064;
	sub_82D9A978(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA2074;
	sub_82D9A978(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca20a0
	if (!cr6.eq) goto loc_82CA20A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA20A0:
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA20B4"))) PPC_WEAK_FUNC(sub_82CA20B4);
PPC_FUNC_IMPL(__imp__sub_82CA20B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA20B8"))) PPC_WEAK_FUNC(sub_82CA20B8);
PPC_FUNC_IMPL(__imp__sub_82CA20B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA20C0;
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
	// bl 0x82d86078
	ctx.lr = 0x82CA20D4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca210c
	if (cr6.eq) goto loc_82CA210C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82CA20E4;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x82CA20E8;
	sub_8382E338(ctx, base);
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwz r10,1440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,380(r9)
	PPC_STORE_U32(ctx.r9.u32 + 380, ctx.r10.u32);
	// stw r11,384(r9)
	PPC_STORE_U32(ctx.r9.u32 + 384, ctx.r11.u32);
	// bl 0x82d1d478
	ctx.lr = 0x82CA210C;
	sub_82D1D478(ctx, base);
loc_82CA210C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA2114"))) PPC_WEAK_FUNC(sub_82CA2114);
PPC_FUNC_IMPL(__imp__sub_82CA2114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2118"))) PPC_WEAK_FUNC(sub_82CA2118);
PPC_FUNC_IMPL(__imp__sub_82CA2118) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca2144
	if (!cr6.eq) goto loc_82CA2144;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CA2144:
	// lwz r11,1420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ca216c
	if (cr6.eq) goto loc_82CA216C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82ca216c
	if (cr6.eq) goto loc_82CA216C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82ca216c
	if (cr6.eq) goto loc_82CA216C;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,399
	ctx.r4.u64 = ctx.r4.u64 | 399;
	// b 0x82ca2174
	goto loc_82CA2174;
loc_82CA216C:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,311
	ctx.r4.u64 = ctx.r4.u64 | 311;
loc_82CA2174:
	// bl 0x82d303d0
	ctx.lr = 0x82CA2178;
	sub_82D303D0(ctx, base);
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

__attribute__((alias("__imp__sub_82CA218C"))) PPC_WEAK_FUNC(sub_82CA218C);
PPC_FUNC_IMPL(__imp__sub_82CA218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2190"))) PPC_WEAK_FUNC(sub_82CA2190);
PPC_FUNC_IMPL(__imp__sub_82CA2190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA2198;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,3180
	ctx.r11.s64 = ctx.r11.s64 + 3180;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82CA21B0:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca21e0
	if (cr6.eq) goto loc_82CA21E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA21E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CA21E0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82ca21b0
	if (!cr0.eq) goto loc_82CA21B0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA21F4"))) PPC_WEAK_FUNC(sub_82CA21F4);
PPC_FUNC_IMPL(__imp__sub_82CA21F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA21F8"))) PPC_WEAK_FUNC(sub_82CA21F8);
PPC_FUNC_IMPL(__imp__sub_82CA21F8) {
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
	// bl 0x82d86078
	ctx.lr = 0x82CA2210;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca2230
	if (!cr6.eq) goto loc_82CA2230;
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
loc_82CA2230:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA2238;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CA223C;
	sub_82D99C08(ctx, base);
	// bl 0x82d99ff0
	ctx.lr = 0x82CA2240;
	sub_82D99FF0(ctx, base);
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// blt cr6,0x82ca224c
	if (cr6.lt) goto loc_82CA224C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82CA224C:
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

__attribute__((alias("__imp__sub_82CA2264"))) PPC_WEAK_FUNC(sub_82CA2264);
PPC_FUNC_IMPL(__imp__sub_82CA2264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2268"))) PPC_WEAK_FUNC(sub_82CA2268);
PPC_FUNC_IMPL(__imp__sub_82CA2268) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1428);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1424);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r5,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82ca22a8
	if (!cr0.eq) goto loc_82CA22A8;
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
loc_82CA22A8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82CA22BC;
	sub_82D20F50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
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
	ctx.lr = 0x82CA22DC;
	sub_82D1EBF8(ctx, base);
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

__attribute__((alias("__imp__sub_82CA22F4"))) PPC_WEAK_FUNC(sub_82CA22F4);
PPC_FUNC_IMPL(__imp__sub_82CA22F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA22F8"))) PPC_WEAK_FUNC(sub_82CA22F8);
PPC_FUNC_IMPL(__imp__sub_82CA22F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA2300;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA230C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca2320
	if (!cr6.eq) goto loc_82CA2320;
loc_82CA2314:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CA2320:
	// lwz r10,1428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// lwz r30,1424(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82ca2314
	if (!cr6.gt) goto loc_82CA2314;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82dab6d0
	ctx.lr = 0x82CA2348;
	sub_82DAB6D0(ctx, base);
	// lwzx r4,r29,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x82d97540
	ctx.lr = 0x82CA2350;
	sub_82D97540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82CA2358;
	sub_82D19BB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82CA2364;
	sub_82D19BA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82CA2374;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca2314
	if (cr6.eq) goto loc_82CA2314;
	// bl 0x82d2b038
	ctx.lr = 0x82CA2380;
	sub_82D2B038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA2394"))) PPC_WEAK_FUNC(sub_82CA2394);
PPC_FUNC_IMPL(__imp__sub_82CA2394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2398"))) PPC_WEAK_FUNC(sub_82CA2398);
PPC_FUNC_IMPL(__imp__sub_82CA2398) {
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
	// bl 0x82ca22f8
	ctx.lr = 0x82CA23B0;
	sub_82CA22F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca23d0
	if (cr6.eq) goto loc_82CA23D0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2788
	ctx.r5.s64 = ctx.r11.s64 + 2788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CA23D0;
	sub_82D20DA8(ctx, base);
loc_82CA23D0:
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

__attribute__((alias("__imp__sub_82CA23E4"))) PPC_WEAK_FUNC(sub_82CA23E4);
PPC_FUNC_IMPL(__imp__sub_82CA23E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA23E8"))) PPC_WEAK_FUNC(sub_82CA23E8);
PPC_FUNC_IMPL(__imp__sub_82CA23E8) {
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
	// bl 0x82ca22f8
	ctx.lr = 0x82CA2400;
	sub_82CA22F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca242c
	if (cr6.eq) goto loc_82CA242C;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CA2418;
	sub_82D17DA0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2880
	ctx.r5.s64 = ctx.r11.s64 + 2880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CA242C;
	sub_82D20DA8(ctx, base);
loc_82CA242C:
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

__attribute__((alias("__imp__sub_82CA2440"))) PPC_WEAK_FUNC(sub_82CA2440);
PPC_FUNC_IMPL(__imp__sub_82CA2440) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,3200
	ctx.r9.s64 = ctx.r11.s64 + 3200;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,1424(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1424);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ca2488
	if (cr6.eq) goto loc_82CA2488;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CA2488;
	sub_825952B8(ctx, base);
loc_82CA2488:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// bl 0x82cf6930
	ctx.lr = 0x82CA24A0;
	sub_82CF6930(ctx, base);
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

__attribute__((alias("__imp__sub_82CA24B4"))) PPC_WEAK_FUNC(sub_82CA24B4);
PPC_FUNC_IMPL(__imp__sub_82CA24B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA24B8"))) PPC_WEAK_FUNC(sub_82CA24B8);
PPC_FUNC_IMPL(__imp__sub_82CA24B8) {
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
	// bl 0x82ca2440
	ctx.lr = 0x82CA24D8;
	sub_82CA2440(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca24f0
	if (cr6.eq) goto loc_82CA24F0;
	// bl 0x82416268
	ctx.lr = 0x82CA24EC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CA24F0:
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

__attribute__((alias("__imp__sub_82CA2508"))) PPC_WEAK_FUNC(sub_82CA2508);
PPC_FUNC_IMPL(__imp__sub_82CA2508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA2510;
	__savegprlr_28(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1424(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1424);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r9,1428(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1428);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r8,1404(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1404);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r31,r4,1424
	ctx.r31.s64 = ctx.r4.s64 + 1424;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// blt cr6,0x82ca2598
	if (cr6.lt) goto loc_82CA2598;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CA256C;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ca2624
	if (cr6.lt) goto loc_82CA2624;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CA258C;
	sub_825952B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA2598:
	// bl 0x831156e8
	ctx.lr = 0x82CA259C;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,1404(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1404);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ca25c8
	if (cr6.gt) goto loc_82CA25C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CA25C8;
	sub_831CC188(ctx, base);
loc_82CA25C8:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r29,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r29.u16);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x8311c260
	ctx.lr = 0x82CA25E0;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82CA25F0;
	sub_831CE980(ctx, base);
	// lbz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 196);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ca2610
	if (cr6.eq) goto loc_82CA2610;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// ori r4,r4,156
	ctx.r4.u64 = ctx.r4.u64 | 156;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CA2610;
	sub_82D042A8(ctx, base);
loc_82CA2610:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8292a3f8
	ctx.lr = 0x82CA261C;
	sub_8292A3F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA2624;
	sub_8387E8E0(ctx, base);
loc_82CA2624:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA2630"))) PPC_WEAK_FUNC(sub_82CA2630);
PPC_FUNC_IMPL(__imp__sub_82CA2630) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// ori r4,r4,152
	ctx.r4.u64 = ctx.r4.u64 | 152;
	// bl 0x82d04220
	ctx.lr = 0x82CA2664;
	sub_82D04220(ctx, base);
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

__attribute__((alias("__imp__sub_82CA267C"))) PPC_WEAK_FUNC(sub_82CA267C);
PPC_FUNC_IMPL(__imp__sub_82CA267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2680"))) PPC_WEAK_FUNC(sub_82CA2680);
PPC_FUNC_IMPL(__imp__sub_82CA2680) {
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
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// blt cr6,0x82ca26a8
	if (cr6.lt) goto loc_82CA26A8;
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
loc_82CA26A8:
	// lbz r11,1448(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1448);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,1428(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1428);
	// lwz r3,1424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1424);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r6,r3,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r3.s64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// beq cr6,0x82ca26dc
	if (cr6.eq) goto loc_82CA26DC;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r8,r10,3592
	ctx.r8.s64 = ctx.r10.s64 + 3592;
	// b 0x82ca26e4
	goto loc_82CA26E4;
loc_82CA26DC:
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r8,r10,3552
	ctx.r8.s64 = ctx.r10.s64 + 3552;
loc_82CA26E4:
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x82b02be8
	ctx.lr = 0x82CA26EC;
	sub_82B02BE8(ctx, base);
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

__attribute__((alias("__imp__sub_82CA2700"))) PPC_WEAK_FUNC(sub_82CA2700);
PPC_FUNC_IMPL(__imp__sub_82CA2700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA2708;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,20
	ctx.r9.u64 = ctx.r11.u64 | 20;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ca27e0
	if (!cr6.eq) goto loc_82CA27E0;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ca27e0
	if (!cr6.eq) goto loc_82CA27E0;
	// lwz r10,1408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca27e0
	if (cr6.eq) goto loc_82CA27E0;
	// lwz r29,120(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82ca2754
	if (cr6.lt) goto loc_82CA2754;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(ctx.r29.s32, 5, xer);
	// blt cr6,0x82ca2758
	if (cr6.lt) goto loc_82CA2758;
loc_82CA2754:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CA2758:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca27e0
	if (cr6.eq) goto loc_82CA27E0;
	// lwz r30,124(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82ca277c
	if (cr6.lt) goto loc_82CA277C;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ca2780
	if (cr6.lt) goto loc_82CA2780;
loc_82CA277C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CA2780:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca27e0
	if (cr6.eq) goto loc_82CA27E0;
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82ca27a4
	if (!cr6.eq) goto loc_82CA27A4;
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x82ca27dc
	if (cr6.eq) goto loc_82CA27DC;
loc_82CA27A4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca2680
	ctx.lr = 0x82CA27B4;
	sub_82CA2680(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca27e0
	if (cr6.eq) goto loc_82CA27E0;
	// stw r29,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA27DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CA27DC:
	// stw r28,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r28.u32);
loc_82CA27E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA27EC"))) PPC_WEAK_FUNC(sub_82CA27EC);
PPC_FUNC_IMPL(__imp__sub_82CA27EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA27F0"))) PPC_WEAK_FUNC(sub_82CA27F0);
PPC_FUNC_IMPL(__imp__sub_82CA27F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CA27F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA280C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca2904
	if (cr6.eq) goto loc_82CA2904;
	// lwz r28,116(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8332f198
	ctx.lr = 0x82CA2820;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x82CA2824;
	sub_8382E338(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r31,380
	ctx.r11.s64 = ctx.r31.s64 + 380;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,1440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1440, ctx.r11.u32);
	// lwz r5,384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// stw r5,1444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1444, ctx.r5.u32);
	// bl 0x82ca2680
	ctx.lr = 0x82CA2848;
	sub_82CA2680(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,304(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CA285C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r29.u32);
	// stw r29,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r29.u32);
	// bl 0x82dab6d0
	ctx.lr = 0x82CA2870;
	sub_82DAB6D0(ctx, base);
	// lwz r31,1424(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// lwz r8,1428(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// addi r28,r30,1424
	ctx.r28.s64 = ctx.r30.s64 + 1424;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r31.s64;
	// srawi. r11,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82ca28e8
	if (cr0.eq) goto loc_82CA28E8;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x82ca28d0
	if (!cr6.gt) goto loc_82CA28D0;
loc_82CA2898:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82df16a0
	ctx.lr = 0x82CA28A0;
	sub_82DF16A0(ctx, base);
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x82ca28dc
	if (cr6.eq) goto loc_82CA28DC;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82ca2898
	if (cr6.gt) goto loc_82CA2898;
	// b 0x82ca28e8
	goto loc_82CA28E8;
loc_82CA28D0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CA28DC;
	sub_831CC188(ctx, base);
loc_82CA28DC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x82ca28ec
	if (!cr6.eq) goto loc_82CA28EC;
loc_82CA28E8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82CA28EC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1fca8
	ctx.lr = 0x82CA28F8;
	sub_82D1FCA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA2900;
	sub_82D1C1A8(ctx, base);
	// stw r3,1404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1404, ctx.r3.u32);
loc_82CA2904:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA290C"))) PPC_WEAK_FUNC(sub_82CA290C);
PPC_FUNC_IMPL(__imp__sub_82CA290C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2910"))) PPC_WEAK_FUNC(sub_82CA2910);
PPC_FUNC_IMPL(__imp__sub_82CA2910) {
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
	ctx.lr = 0x82CA2918;
	__savegprlr_15(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r16,r10,r3
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x82ca2d24
	if (cr6.eq) goto loc_82CA2D24;
	// clrlwi r31,r6,24
	ctx.r31.u64 = ctx.r6.u32 & 0xFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82CA2960;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CA2970;
	sub_82D2AEC8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82ca2d24
	if (!cr6.eq) goto loc_82CA2D24;
	// lwz r11,1428(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1428);
	// lwz r10,1424(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1424);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x82ca2d24
	if (!cr6.gt) goto loc_82CA2D24;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,2972
	ctx.r26.s64 = ctx.r11.s64 + 2972;
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r26,-402
	ctx.r4.s64 = ctx.r26.s64 + -402;
	// lwzx r28,r9,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82CA29BC;
	sub_837B0C10(ctx, base);
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA29C8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca2d1c
	if (cr6.eq) goto loc_82CA2D1C;
	// lbz r11,1448(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1448);
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82ca2a3c
	if (cr6.eq) goto loc_82CA2A3C;
	// bl 0x825832d8
	ctx.lr = 0x82CA29E8;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CA29EC;
	sub_82D99C08(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CA29F4;
	sub_82D9A978(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83165ba8
	ctx.lr = 0x82CA2A08;
	sub_83165BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CA2A1C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA2A24;
	sub_8387E8E0(ctx, base);
	// lwz r24,4(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r23,8(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r22,12(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r18,20(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r21,397(r31)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r31.u32 + 397);
	// b 0x82ca2a94
	goto loc_82CA2A94;
loc_82CA2A3C:
	// bl 0x8332f198
	ctx.lr = 0x82CA2A40;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x82CA2A44;
	sub_8382E338(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d9c418
	ctx.lr = 0x82CA2A4C;
	sub_82D9C418(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lbz r25,348(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 348);
	// lwz r20,4(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r19,8(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83165ba8
	ctx.lr = 0x82CA2A6C;
	sub_83165BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CA2A80;
	sub_8259CB28(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA2A88;
	sub_8387E8E0(ctx, base);
	// lwz r24,12(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r23,16(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r22,20(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82CA2A94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82CA2A9C;
	sub_82DAB6D0(ctx, base);
	// lwz r11,1420(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1420);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82ca2af0
	if (!cr6.eq) goto loc_82CA2AF0;
	// bl 0x82d97538
	ctx.lr = 0x82CA2AAC;
	sub_82D97538(ctx, base);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, xer);
	// bne cr6,0x82ca2af0
	if (!cr6.eq) goto loc_82CA2AF0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82CA2AC8;
	sub_82D2B608(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82ca2af0
	if (!cr6.eq) goto loc_82CA2AF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82CA2AF0;
	sub_82D1EBF8(ctx, base);
loc_82CA2AF0:
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_82CA2AF4:
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r31,r10,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ca2d10
	if (cr6.eq) goto loc_82CA2D10;
	// cmplwi cr6,r29,9
	cr6.compare<uint32_t>(ctx.r29.u32, 9, xer);
	// bgt cr6,0x82ca2d10
	if (cr6.gt) goto loc_82CA2D10;
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11056
	ctx.r12.s64 = ctx.r12.s64 + 11056;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u32) {
	case 0:
		goto loc_82CA2B58;
	case 1:
		goto loc_82CA2BC4;
	case 2:
		goto loc_82CA2C2C;
	case 3:
		goto loc_82CA2C44;
	case 4:
		goto loc_82CA2C8C;
	case 5:
		goto loc_82CA2CD4;
	case 6:
		goto loc_82CA2CEC;
	case 7:
		goto loc_82CA2CF4;
	case 8:
		goto loc_82CA2CFC;
	case 9:
		goto loc_82CA2D04;
	default:
		return;
	}
	// lwz r22,11096(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11096);
	// lwz r22,11204(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11204);
	// lwz r22,11308(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11308);
	// lwz r22,11332(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11332);
	// lwz r22,11404(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11404);
	// lwz r22,11476(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11476);
	// lwz r22,11500(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11500);
	// lwz r22,11508(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11508);
	// lwz r22,11516(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11516);
	// lwz r22,11524(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11524);
loc_82CA2B58:
	// lwz r11,1420(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1420);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ca2b6c
	if (cr6.eq) goto loc_82CA2B6C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82ca2b70
	if (!cr6.eq) goto loc_82CA2B70;
loc_82CA2B6C:
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
loc_82CA2B70:
	// clrlwi r30,r25,24
	ctx.r30.u64 = ctx.r25.u32 & 0xFF;
	// addi r4,r26,-44
	ctx.r4.s64 = ctx.r26.s64 + -44;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82ca2b84
	if (!cr6.eq) goto loc_82CA2B84;
	// addi r4,r26,-32
	ctx.r4.s64 = ctx.r26.s64 + -32;
loc_82CA2B84:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA2B9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ca2d10
	if (cr6.eq) goto loc_82CA2D10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA2BC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ca2d10
	goto loc_82CA2D10;
loc_82CA2BC4:
	// lwz r11,1420(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1420);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ca2bd8
	if (cr6.eq) goto loc_82CA2BD8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82ca2bdc
	if (!cr6.eq) goto loc_82CA2BDC;
loc_82CA2BD8:
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
loc_82CA2BDC:
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca2d10
	if (!cr6.eq) goto loc_82CA2D10;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ca2c00
	if (cr6.eq) goto loc_82CA2C00;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82ca2c00
	if (cr6.eq) goto loc_82CA2C00;
	// clrldi r4,r20,32
	ctx.r4.u64 = ctx.r20.u64 & 0xFFFFFFFF;
	// b 0x82ca2d08
	goto loc_82CA2D08;
loc_82CA2C00:
	// addi r4,r26,-4
	ctx.r4.s64 = ctx.r26.s64 + -4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CA2C0C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CA2C20;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA2C28;
	sub_8387E8E0(ctx, base);
	// b 0x82ca2d10
	goto loc_82CA2D10;
loc_82CA2C2C:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d45220
	ctx.lr = 0x82CA2C40;
	sub_82D45220(ctx, base);
	// b 0x82ca2d10
	goto loc_82CA2D10;
loc_82CA2C44:
	// bl 0x831156e8
	ctx.lr = 0x82CA2C48;
	sub_831156E8(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// sth r17,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r17.u16);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x82CA2C5C;
	sub_8311C260(ctx, base);
	// addic. r4,r3,52
	xer.ca = ctx.r3.u32 > 4294967243;
	ctx.r4.s64 = ctx.r3.s64 + 52;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82ca2d10
	if (cr0.eq) goto loc_82CA2D10;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CA2C6C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CA2C80;
	sub_82D291E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA2C88;
	sub_8387E8E0(ctx, base);
	// b 0x82ca2d10
	goto loc_82CA2D10;
loc_82CA2C8C:
	// lwz r11,1420(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1420);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ca2ca8
	if (cr6.eq) goto loc_82CA2CA8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82ca2ca8
	if (cr6.eq) goto loc_82CA2CA8;
	// clrldi r4,r19,32
	ctx.r4.u64 = ctx.r19.u64 & 0xFFFFFFFF;
	// b 0x82ca2d08
	goto loc_82CA2D08;
loc_82CA2CA8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82CA2CB4;
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
	ctx.lr = 0x82CA2CC8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA2CD0;
	sub_8387E8E0(ctx, base);
	// b 0x82ca2d10
	goto loc_82CA2D10;
loc_82CA2CD4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CA2CE8;
	sub_82D291E0(ctx, base);
	// b 0x82ca2d10
	goto loc_82CA2D10;
loc_82CA2CEC:
	// clrldi r4,r24,32
	ctx.r4.u64 = ctx.r24.u64 & 0xFFFFFFFF;
	// b 0x82ca2d08
	goto loc_82CA2D08;
loc_82CA2CF4:
	// clrldi r4,r23,32
	ctx.r4.u64 = ctx.r23.u64 & 0xFFFFFFFF;
	// b 0x82ca2d08
	goto loc_82CA2D08;
loc_82CA2CFC:
	// clrldi r4,r22,32
	ctx.r4.u64 = ctx.r22.u64 & 0xFFFFFFFF;
	// b 0x82ca2d08
	goto loc_82CA2D08;
loc_82CA2D04:
	// clrldi r4,r18,32
	ctx.r4.u64 = ctx.r18.u64 & 0xFFFFFFFF;
loc_82CA2D08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CA2D10;
	sub_82D294D0(ctx, base);
loc_82CA2D10:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,10
	cr6.compare<uint32_t>(ctx.r29.u32, 10, xer);
	// blt cr6,0x82ca2af4
	if (cr6.lt) goto loc_82CA2AF4;
loc_82CA2D1C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA2D24;
	sub_8387E8E0(ctx, base);
loc_82CA2D24:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA2D2C"))) PPC_WEAK_FUNC(sub_82CA2D2C);
PPC_FUNC_IMPL(__imp__sub_82CA2D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2D30"))) PPC_WEAK_FUNC(sub_82CA2D30);
PPC_FUNC_IMPL(__imp__sub_82CA2D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA2D38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82cf69b0
	ctx.lr = 0x82CA2D50;
	sub_82CF69B0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r31,1420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1420, ctx.r31.u32);
	// addi r9,r11,3200
	ctx.r9.s64 = ctx.r11.s64 + 3200;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// addi r28,r30,1424
	ctx.r28.s64 = ctx.r30.s64 + 1424;
	// stw r11,1424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1424, ctx.r11.u32);
	// stw r11,1428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1428, ctx.r11.u32);
	// stw r11,1432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1432, ctx.r11.u32);
	// stw r11,1440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1440, ctx.r11.u32);
	// stw r11,1444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1444, ctx.r11.u32);
	// stb r11,1448(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1448, ctx.r11.u8);
	// bl 0x82d86078
	ctx.lr = 0x82CA2D90;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca2ec0
	if (cr6.eq) goto loc_82CA2EC0;
	// lwz r11,1420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82ca2dc0
	if (cr6.eq) goto loc_82CA2DC0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82ca2dc0
	if (cr6.eq) goto loc_82CA2DC0;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82ca2dc0
	if (cr6.eq) goto loc_82CA2DC0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82ca2de4
	if (!cr6.eq) goto loc_82CA2DE4;
loc_82CA2DC0:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// stb r10,1448(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1448, ctx.r10.u8);
	// bne cr6,0x82ca2de4
	if (!cr6.eq) goto loc_82CA2DE4;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,296
	ctx.r4.u64 = ctx.r4.u64 | 296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d21730
	ctx.lr = 0x82CA2DE4;
	sub_82D21730(ctx, base);
loc_82CA2DE4:
	// lwz r11,1420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82ca2e04
	if (!cr6.eq) goto loc_82CA2E04;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,295
	ctx.r4.u64 = ctx.r4.u64 | 295;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d21730
	ctx.lr = 0x82CA2E04;
	sub_82D21730(ctx, base);
loc_82CA2E04:
	// lbz r11,1448(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1448);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca2e54
	if (cr6.eq) goto loc_82CA2E54;
	// bl 0x825832d8
	ctx.lr = 0x82CA2E18;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CA2E1C;
	sub_82D99C08(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CA2E20;
	sub_83102DB0(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82ca2ec0
	if (cr6.eq) goto loc_82CA2EC0;
loc_82CA2E34:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835977d8
	ctx.lr = 0x82CA2E40;
	sub_835977D8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,400
	ctx.r31.s64 = ctx.r31.s64 + 400;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ca2e34
	if (!cr6.eq) goto loc_82CA2E34;
	// b 0x82ca2e90
	goto loc_82CA2E90;
loc_82CA2E54:
	// bl 0x8332f198
	ctx.lr = 0x82CA2E58;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x82CA2E5C;
	sub_8382E338(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CA2E60;
	sub_83102DB0(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82ca2ec0
	if (cr6.eq) goto loc_82CA2EC0;
loc_82CA2E74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835977d8
	ctx.lr = 0x82CA2E80;
	sub_835977D8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,352
	ctx.r31.s64 = ctx.r31.s64 + 352;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ca2e74
	if (!cr6.eq) goto loc_82CA2E74;
loc_82CA2E90:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2680
	ctx.lr = 0x82CA2EA0;
	sub_82CA2680(ctx, base);
	// lwz r11,1420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82ca2ec4
	if (!cr6.eq) goto loc_82CA2EC4;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,206
	ctx.r5.u64 = ctx.r5.u64 | 206;
	// bl 0x82d20eb8
	ctx.lr = 0x82CA2EC0;
	sub_82D20EB8(ctx, base);
loc_82CA2EC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CA2EC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA2ECC"))) PPC_WEAK_FUNC(sub_82CA2ECC);
PPC_FUNC_IMPL(__imp__sub_82CA2ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2ED0"))) PPC_WEAK_FUNC(sub_82CA2ED0);
PPC_FUNC_IMPL(__imp__sub_82CA2ED0) {
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
	// blt cr6,0x82ca2ef8
	if (cr6.lt) goto loc_82CA2EF8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca2efc
	goto loc_82CA2EFC;
loc_82CA2EF8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA2EFC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1452
	ctx.r4.s64 = 1452;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CA2F18;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca2f38
	if (cr6.eq) goto loc_82CA2F38;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca2d30
	ctx.lr = 0x82CA2F30;
	sub_82CA2D30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca2f3c
	if (!cr6.eq) goto loc_82CA2F3C;
loc_82CA2F38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA2F3C:
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

__attribute__((alias("__imp__sub_82CA2F54"))) PPC_WEAK_FUNC(sub_82CA2F54);
PPC_FUNC_IMPL(__imp__sub_82CA2F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA2F58"))) PPC_WEAK_FUNC(sub_82CA2F58);
PPC_FUNC_IMPL(__imp__sub_82CA2F58) {
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
	// blt cr6,0x82ca2f80
	if (cr6.lt) goto loc_82CA2F80;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca2f84
	goto loc_82CA2F84;
loc_82CA2F80:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA2F84:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1452
	ctx.r4.s64 = 1452;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CA2FA0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca2fbc
	if (cr6.eq) goto loc_82CA2FBC;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca2d30
	ctx.lr = 0x82CA2FB8;
	sub_82CA2D30(ctx, base);
	// b 0x82ca2fc0
	goto loc_82CA2FC0;
loc_82CA2FBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA2FC0:
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

__attribute__((alias("__imp__sub_82CA2FD8"))) PPC_WEAK_FUNC(sub_82CA2FD8);
PPC_FUNC_IMPL(__imp__sub_82CA2FD8) {
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
	// blt cr6,0x82ca3000
	if (cr6.lt) goto loc_82CA3000;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca3004
	goto loc_82CA3004;
loc_82CA3000:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA3004:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1452
	ctx.r4.s64 = 1452;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CA3020;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca303c
	if (cr6.eq) goto loc_82CA303C;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca2d30
	ctx.lr = 0x82CA3038;
	sub_82CA2D30(ctx, base);
	// b 0x82ca3040
	goto loc_82CA3040;
loc_82CA303C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA3040:
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

__attribute__((alias("__imp__sub_82CA3058"))) PPC_WEAK_FUNC(sub_82CA3058);
PPC_FUNC_IMPL(__imp__sub_82CA3058) {
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
	// blt cr6,0x82ca3080
	if (cr6.lt) goto loc_82CA3080;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca3084
	goto loc_82CA3084;
loc_82CA3080:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA3084:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1452
	ctx.r4.s64 = 1452;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CA30A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca30bc
	if (cr6.eq) goto loc_82CA30BC;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca2d30
	ctx.lr = 0x82CA30B8;
	sub_82CA2D30(ctx, base);
	// b 0x82ca30c0
	goto loc_82CA30C0;
loc_82CA30BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA30C0:
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

__attribute__((alias("__imp__sub_82CA30D8"))) PPC_WEAK_FUNC(sub_82CA30D8);
PPC_FUNC_IMPL(__imp__sub_82CA30D8) {
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
	// blt cr6,0x82ca3100
	if (cr6.lt) goto loc_82CA3100;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca3104
	goto loc_82CA3104;
loc_82CA3100:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA3104:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1452
	ctx.r4.s64 = 1452;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CA3120;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca313c
	if (cr6.eq) goto loc_82CA313C;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca2d30
	ctx.lr = 0x82CA3138;
	sub_82CA2D30(ctx, base);
	// b 0x82ca3140
	goto loc_82CA3140;
loc_82CA313C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA3140:
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

__attribute__((alias("__imp__sub_82CA3158"))) PPC_WEAK_FUNC(sub_82CA3158);
PPC_FUNC_IMPL(__imp__sub_82CA3158) {
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
	// blt cr6,0x82ca3180
	if (cr6.lt) goto loc_82CA3180;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca3184
	goto loc_82CA3184;
loc_82CA3180:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA3184:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1452
	ctx.r4.s64 = 1452;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CA31A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca31c0
	if (cr6.eq) goto loc_82CA31C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca2d30
	ctx.lr = 0x82CA31B8;
	sub_82CA2D30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca31c4
	if (!cr6.eq) goto loc_82CA31C4;
loc_82CA31C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA31C4:
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

__attribute__((alias("__imp__sub_82CA31DC"))) PPC_WEAK_FUNC(sub_82CA31DC);
PPC_FUNC_IMPL(__imp__sub_82CA31DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA31E0"))) PPC_WEAK_FUNC(sub_82CA31E0);
PPC_FUNC_IMPL(__imp__sub_82CA31E0) {
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
	// blt cr6,0x82ca3208
	if (cr6.lt) goto loc_82CA3208;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca320c
	goto loc_82CA320C;
loc_82CA3208:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA320C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1452
	ctx.r4.s64 = 1452;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CA3228;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca3248
	if (cr6.eq) goto loc_82CA3248;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca2d30
	ctx.lr = 0x82CA3240;
	sub_82CA2D30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca324c
	if (!cr6.eq) goto loc_82CA324C;
loc_82CA3248:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA324C:
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

__attribute__((alias("__imp__sub_82CA3264"))) PPC_WEAK_FUNC(sub_82CA3264);
PPC_FUNC_IMPL(__imp__sub_82CA3264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3268"))) PPC_WEAK_FUNC(sub_82CA3268);
PPC_FUNC_IMPL(__imp__sub_82CA3268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,2808
	ctx.r8.s64 = ctx.r11.s64 + 2808;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82CA3288:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r6,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca32a8
	if (cr6.eq) goto loc_82CA32A8;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// beq cr6,0x82ca32bc
	if (cr6.eq) goto loc_82CA32BC;
loc_82CA32A8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// blt cr6,0x82ca3288
	if (cr6.lt) goto loc_82CA3288;
	// blr 
	return;
loc_82CA32BC:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82ca2910
	sub_82CA2910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA32CC"))) PPC_WEAK_FUNC(sub_82CA32CC);
PPC_FUNC_IMPL(__imp__sub_82CA32CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA32D0"))) PPC_WEAK_FUNC(sub_82CA32D0);
PPC_FUNC_IMPL(__imp__sub_82CA32D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CA32D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r28,r3,1424
	ctx.r28.s64 = ctx.r3.s64 + 1424;
	// addi r29,r11,2808
	ctx.r29.s64 = ctx.r11.s64 + 2808;
	// li r30,8
	ctx.r30.s64 = 8;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_82CA32F8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// subfc r11,r8,r31
	xer.ca = ctx.r31.u32 >= ctx.r8.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r8.s64;
	// subfze r6,r26
	temp.u8 = ~ctx.r26.u32 + xer.ca < xer.ca;
	ctx.r6.u64 = ~ctx.r26.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82ca2910
	ctx.lr = 0x82CA3320;
	sub_82CA2910(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82ca32f8
	if (!cr0.eq) goto loc_82CA32F8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA3338"))) PPC_WEAK_FUNC(sub_82CA3338);
PPC_FUNC_IMPL(__imp__sub_82CA3338) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d21e48
	ctx.lr = 0x82CA3358;
	sub_82D21E48(ctx, base);
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r11.u32);
	// beq cr6,0x82ca33b0
	if (cr6.eq) goto loc_82CA33B0;
	// lbz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1448);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca3398
	if (cr6.eq) goto loc_82CA3398;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r11,r9,2888
	ctx.r11.s64 = ctx.r9.s64 + 2888;
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x82ca33ac
	goto loc_82CA33AC;
loc_82CA3398:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r4,r10,2888
	ctx.r4.s64 = ctx.r10.s64 + 2888;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82CA33AC:
	// bctrl 
	ctx.lr = 0x82CA33B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CA33B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca2268
	ctx.lr = 0x82CA33B8;
	sub_82CA2268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca2190
	ctx.lr = 0x82CA33C0;
	sub_82CA2190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// bl 0x82ca32d0
	ctx.lr = 0x82CA33CC;
	sub_82CA32D0(ctx, base);
	// lwz r9,1424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ca343c
	if (cr0.eq) goto loc_82CA343C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// ble cr6,0x82ca3410
	if (!cr6.gt) goto loc_82CA3410;
loc_82CA33F0:
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x82ca341c
	if (cr6.eq) goto loc_82CA341C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bgt cr6,0x82ca33f0
	if (cr6.gt) goto loc_82CA33F0;
	// b 0x82ca343c
	goto loc_82CA343C;
loc_82CA3410:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CA341C;
	sub_831CC188(ctx, base);
loc_82CA341C:
	// stw r5,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r5.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
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
	ctx.lr = 0x82CA343C;
	sub_82D1EBF8(ctx, base);
loc_82CA343C:
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

__attribute__((alias("__imp__sub_82CA3454"))) PPC_WEAK_FUNC(sub_82CA3454);
PPC_FUNC_IMPL(__imp__sub_82CA3454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3458"))) PPC_WEAK_FUNC(sub_82CA3458);
PPC_FUNC_IMPL(__imp__sub_82CA3458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CA3460;
	__savegprlr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,40
	ctx.r10.s64 = 2621440;
	// lis r9,51
	ctx.r9.s64 = 3342336;
	// lis r8,51
	ctx.r8.s64 = 3342336;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// ori r7,r10,102
	ctx.r7.u64 = ctx.r10.u64 | 102;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// ori r5,r9,109
	ctx.r5.u64 = ctx.r9.u64 | 109;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// ori r4,r8,110
	ctx.r4.u64 = ctx.r8.u64 | 110;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r6,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r6.u8);
	// addi r30,r11,2976
	ctx.r30.s64 = ctx.r11.s64 + 2976;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r29,5
	ctx.r29.s64 = 5;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
loc_82CA34D0:
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d04220
	ctx.lr = 0x82CA34E8;
	sub_82D04220(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x8291fdc8
	ctx.lr = 0x82CA34F4;
	sub_8291FDC8(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ca3510
	if (cr6.lt) goto loc_82CA3510;
	// stw r26,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r26.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82CA3510;
	sub_825952B8(ctx, base);
loc_82CA3510:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bne 0x82ca34d0
	if (!cr0.eq) goto loc_82CA34D0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r30,r11,2996
	ctx.r30.s64 = ctx.r11.s64 + 2996;
loc_82CA3534:
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d04220
	ctx.lr = 0x82CA354C;
	sub_82D04220(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8291fdc8
	ctx.lr = 0x82CA3558;
	sub_8291FDC8(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ca3574
	if (cr6.lt) goto loc_82CA3574;
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82CA3574;
	sub_825952B8(ctx, base);
loc_82CA3574:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bne 0x82ca3534
	if (!cr0.eq) goto loc_82CA3534;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82afe488
	ctx.lr = 0x82CA3598;
	sub_82AFE488(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82afe488
	ctx.lr = 0x82CA35A4;
	sub_82AFE488(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c263d0
	ctx.lr = 0x82CA35AC;
	sub_82C263D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,1408(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1408, ctx.r3.u32);
	// bne cr6,0x82ca364c
	if (!cr6.eq) goto loc_82CA364C;
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ca35e8
	if (cr6.eq) goto loc_82CA35E8;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x838adab0
	ctx.lr = 0x82CA35D8;
	sub_838ADAB0(ctx, base);
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825952b8
	ctx.lr = 0x82CA35E8;
	sub_825952B8(ctx, base);
loc_82CA35E8:
	// lwz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ca3618
	if (cr6.eq) goto loc_82CA3618;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x838adab0
	ctx.lr = 0x82CA3608;
	sub_838ADAB0(ctx, base);
	// stw r26,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x825952b8
	ctx.lr = 0x82CA3618;
	sub_825952B8(ctx, base);
loc_82CA3618:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca3700
	if (cr6.eq) goto loc_82CA3700;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82afdf98
	ctx.lr = 0x82CA3634;
	sub_82AFDF98(ctx, base);
	// stw r26,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r26.u32);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825952b8
	ctx.lr = 0x82CA3644;
	sub_825952B8(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CA364C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1440(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1440);
	// bl 0x82c25c80
	ctx.lr = 0x82CA3658;
	sub_82C25C80(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,1444(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1444);
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1408);
	// bl 0x82c25c80
	ctx.lr = 0x82CA3668;
	sub_82C25C80(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,1408(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1408);
	// bl 0x83103100
	ctx.lr = 0x82CA3674;
	sub_83103100(ctx, base);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ca36a4
	if (cr6.eq) goto loc_82CA36A4;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x838adab0
	ctx.lr = 0x82CA3694;
	sub_838ADAB0(ctx, base);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x825952b8
	ctx.lr = 0x82CA36A4;
	sub_825952B8(ctx, base);
loc_82CA36A4:
	// lwz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ca36d4
	if (cr6.eq) goto loc_82CA36D4;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x838adab0
	ctx.lr = 0x82CA36C4;
	sub_838ADAB0(ctx, base);
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x825952b8
	ctx.lr = 0x82CA36D4;
	sub_825952B8(ctx, base);
loc_82CA36D4:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca3700
	if (cr6.eq) goto loc_82CA3700;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82afdf98
	ctx.lr = 0x82CA36F0;
	sub_82AFDF98(ctx, base);
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825952b8
	ctx.lr = 0x82CA3700;
	sub_825952B8(ctx, base);
loc_82CA3700:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA3708"))) PPC_WEAK_FUNC(sub_82CA3708);
PPC_FUNC_IMPL(__imp__sub_82CA3708) {
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
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA3720;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x82ca3738
	if (cr6.eq) goto loc_82CA3738;
	// li r5,2
	ctx.r5.s64 = 2;
loc_82CA3738:
	// bl 0x82d19788
	ctx.lr = 0x82CA373C;
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

__attribute__((alias("__imp__sub_82CA3750"))) PPC_WEAK_FUNC(sub_82CA3750);
PPC_FUNC_IMPL(__imp__sub_82CA3750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA3758;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4176
	ctx.r3.s64 = ctx.r11.s64 + 4176;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f420
	ctx.lr = 0x82CA3780;
	sub_82D2F420(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca383c
	if (cr6.eq) goto loc_82CA383C;
	// lis r4,35
	ctx.r4.s64 = 2293760;
	// ori r4,r4,140
	ctx.r4.u64 = ctx.r4.u64 | 140;
	// bl 0x82d2a1c8
	ctx.lr = 0x82CA3798;
	sub_82D2A1C8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,4308
	ctx.r11.s64 = ctx.r11.s64 + 4308;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82CA37A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2a258
	ctx.lr = 0x82CA37B8;
	sub_82D2A258(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82ca37a8
	if (cr6.lt) goto loc_82CA37A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA37CC;
	sub_82D1C1A8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ca3818
	if (!cr6.eq) goto loc_82CA3818;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA37F4;
	sub_82D1C1A8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ca3828
	if (!cr6.eq) goto loc_82CA3828;
loc_82CA3818:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d29d78
	ctx.lr = 0x82CA3828;
	sub_82D29D78(ctx, base);
loc_82CA3828:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82CA3834;
	sub_83103100(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 200, ctx.r11.u32);
loc_82CA383C:
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CA3848;
	sub_82D17DA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA3850"))) PPC_WEAK_FUNC(sub_82CA3850);
PPC_FUNC_IMPL(__imp__sub_82CA3850) {
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
	// bl 0x82d86078
	ctx.lr = 0x82CA3868;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca38f8
	if (cr6.eq) goto loc_82CA38F8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CA3878;
	sub_82DAB6D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca38f8
	if (cr6.eq) goto loc_82CA38F8;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca38f0
	if (!cr6.eq) goto loc_82CA38F0;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r6,48
	ctx.r6.s64 = 48;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r8,r31,180
	ctx.r8.s64 = ctx.r31.s64 + 180;
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r11,r7,r6
	ctx.r11.s32 = PPCDivide(ctx.r7.s32, ctx.r6.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82ca38f0
	if (cr0.eq) goto loc_82CA38F0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82ca3910
	if (!cr6.gt) goto loc_82CA3910;
loc_82CA38B8:
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca38d0
	if (cr6.eq) goto loc_82CA38D0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
loc_82CA38D0:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r5,r6
	ctx.r11.s32 = PPCDivide(ctx.r5.s32, ctx.r6.s32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ca38b8
	if (cr6.gt) goto loc_82CA38B8;
loc_82CA38F0:
	// lwz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x8307e038
	ctx.lr = 0x82CA38F8;
	sub_8307E038(ctx, base);
loc_82CA38F8:
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
loc_82CA3910:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CA391C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CA391C"))) PPC_WEAK_FUNC(sub_82CA391C);
PPC_FUNC_IMPL(__imp__sub_82CA391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3920"))) PPC_WEAK_FUNC(sub_82CA3920);
PPC_FUNC_IMPL(__imp__sub_82CA3920) {
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
	ctx.lr = 0x82CA395C;
	sub_8259CB28(ctx, base);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// lbz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// stb r5,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r5.u8);
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

__attribute__((alias("__imp__sub_82CA39A0"))) PPC_WEAK_FUNC(sub_82CA39A0);
PPC_FUNC_IMPL(__imp__sub_82CA39A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CA39A8;
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
	// beq cr6,0x82ca39fc
	if (cr6.eq) goto loc_82CA39FC;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CA39C8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ca39e4
	if (cr6.lt) goto loc_82CA39E4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CA39E4;
	sub_825952B8(ctx, base);
loc_82CA39E4:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82ca39c8
	if (!cr6.eq) goto loc_82CA39C8;
loc_82CA39FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA3A04"))) PPC_WEAK_FUNC(sub_82CA3A04);
PPC_FUNC_IMPL(__imp__sub_82CA3A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3A08"))) PPC_WEAK_FUNC(sub_82CA3A08);
PPC_FUNC_IMPL(__imp__sub_82CA3A08) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-22544
	ctx.r4.s64 = ctx.r10.s64 + -22544;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82CA3A44;
	sub_8259CC28(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// stb r31,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r31.u8);
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

__attribute__((alias("__imp__sub_82CA3A78"))) PPC_WEAK_FUNC(sub_82CA3A78);
PPC_FUNC_IMPL(__imp__sub_82CA3A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CA3A80;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r29,r11,4132
	ctx.r29.s64 = ctx.r11.s64 + 4132;
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r29,-450
	ctx.r4.s64 = ctx.r29.s64 + -450;
	// bl 0x8259cc28
	ctx.lr = 0x82CA3ABC;
	sub_8259CC28(ctx, base);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r4,r29,-449
	ctx.r4.s64 = ctx.r29.s64 + -449;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x82CA3AD8;
	sub_8259CC28(ctx, base);
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// addi r10,r1,188
	ctx.r10.s64 = ctx.r1.s64 + 188;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// ori r9,r11,153
	ctx.r9.u64 = ctx.r11.u64 | 153;
	// li r8,23
	ctx.r8.s64 = 23;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// stw r8,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// bl 0x82d86078
	ctx.lr = 0x82CA3B04;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca3d0c
	if (cr6.eq) goto loc_82CA3D0C;
	// lwz r26,116(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82CA3B18;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825832d8
	ctx.lr = 0x82CA3B24;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82CA3B28;
	sub_82D99C10(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82ca3cb8
	if (!cr6.eq) goto loc_82CA3CB8;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// blt cr6,0x82ca3c48
	if (cr6.lt) goto loc_82CA3C48;
	// beq cr6,0x82ca3ba0
	if (cr6.eq) goto loc_82CA3BA0;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// bge cr6,0x82ca3d0c
	if (!cr6.lt) goto loc_82CA3D0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA3B50;
	sub_82D1C1A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r4,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r4.u32);
	// bl 0x8307e038
	ctx.lr = 0x82CA3B78;
	sub_8307E038(ctx, base);
	// addi r5,r29,-12
	ctx.r5.s64 = ctx.r29.s64 + -12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CA3B88;
	sub_82D20DA8(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// bl 0x8378e240
	ctx.lr = 0x82CA3B98;
	sub_8378E240(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CA3BA0:
	// addi r3,r29,-28
	ctx.r3.s64 = ctx.r29.s64 + -28;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82CA3BB8;
	sub_82D2F6D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca3d0c
	if (cr6.eq) goto loc_82CA3D0C;
	// addi r4,r29,-418
	ctx.r4.s64 = ctx.r29.s64 + -418;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CA3BD0;
	sub_837B0C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA3BD8;
	sub_82D1C1A8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ca3bfc
	if (cr6.lt) goto loc_82CA3BFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CA3BFC:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ori r4,r4,141
	ctx.r4.u64 = ctx.r4.u64 | 141;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82CA3C10;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82CA3C1C;
	sub_82D2AAB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82CA3C28;
	sub_83103100(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82CA3C38;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8378e240
	ctx.lr = 0x82CA3C40;
	sub_8378E240(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CA3C48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA3C50;
	sub_82D1C1A8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r6,-1
	ctx.r6.s64 = -1;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CA3C74;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x82CA3C7C;
	sub_82D19638(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82d3aef0
	ctx.lr = 0x82CA3C84;
	sub_82D3AEF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// beq cr6,0x82ca3d0c
	if (cr6.eq) goto loc_82CA3D0C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82d3ab00
	ctx.lr = 0x82CA3C98;
	sub_82D3AB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x83103100
	ctx.lr = 0x82CA3CA4;
	sub_83103100(ctx, base);
	// stw r28,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8378e240
	ctx.lr = 0x82CA3CB0;
	sub_8378E240(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CA3CB8:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82ca3d0c
	if (!cr6.eq) goto loc_82CA3D0C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x82ca3d04
	if (!cr6.eq) goto loc_82CA3D04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA3CD0;
	sub_82D1C1A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bl 0x82583338
	ctx.lr = 0x82CA3CF4;
	sub_82583338(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CA3D04;
	sub_82D20DA8(ctx, base);
loc_82CA3D04:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
loc_82CA3D0C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8378e240
	ctx.lr = 0x82CA3D14;
	sub_8378E240(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA3D1C"))) PPC_WEAK_FUNC(sub_82CA3D1C);
PPC_FUNC_IMPL(__imp__sub_82CA3D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3D20"))) PPC_WEAK_FUNC(sub_82CA3D20);
PPC_FUNC_IMPL(__imp__sub_82CA3D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA3D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA3D38;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca3e90
	if (cr6.eq) goto loc_82CA3E90;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CA3D48;
	sub_82DAB6D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-17
	xer.ca = ctx.r11.u32 > 16;
	ctx.r11.s64 = ctx.r11.s64 + -17;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82ca3d80
	if (cr0.eq) goto loc_82CA3D80;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82ca3e88
	if (cr6.eq) goto loc_82CA3E88;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82ca3e90
	if (!cr6.eq) goto loc_82CA3E90;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CA3D80:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca3e90
	if (cr6.eq) goto loc_82CA3E90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA3D94;
	sub_82D1C1A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82d3aa80
	ctx.lr = 0x82CA3DB8;
	sub_82D3AA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CA3DCC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA3DD4;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA3DDC;
	sub_82D1C1A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82d97a10
	ctx.lr = 0x82CA3DFC;
	sub_82D97A10(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca3e40
	if (!cr6.eq) goto loc_82CA3E40;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,4148
	ctx.r11.s64 = ctx.r11.s64 + 4148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x82d20da8
	ctx.lr = 0x82CA3E20;
	sub_82D20DA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d976f0
	ctx.lr = 0x82CA3E2C;
	sub_82D976F0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CA3E40:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ca3e88
	if (!cr6.eq) goto loc_82CA3E88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA3E50;
	sub_82D1C1A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bl 0x82583338
	ctx.lr = 0x82CA3E74;
	sub_82583338(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r9,4148
	ctx.r5.s64 = ctx.r9.s64 + 4148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CA3E88;
	sub_82D20DA8(ctx, base);
loc_82CA3E88:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
loc_82CA3E90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA3E9C"))) PPC_WEAK_FUNC(sub_82CA3E9C);
PPC_FUNC_IMPL(__imp__sub_82CA3E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA3EA0"))) PPC_WEAK_FUNC(sub_82CA3EA0);
PPC_FUNC_IMPL(__imp__sub_82CA3EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CA3EA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA3EB4;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ca4054
	if (!cr6.eq) goto loc_82CA4054;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca4054
	if (cr6.eq) goto loc_82CA4054;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r27,48
	ctx.r27.s64 = 48;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r28,r31,180
	ctx.r28.s64 = ctx.r31.s64 + 180;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r9,r27
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// cmplwi cr6,r8,10
	cr6.compare<uint32_t>(ctx.r8.u32, 10, xer);
	// blt cr6,0x82ca3f34
	if (cr6.lt) goto loc_82CA3F34;
	// addi r11,r11,4168
	ctx.r11.s64 = ctx.r11.s64 + 4168;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ad40
	ctx.lr = 0x82CA3F08;
	sub_82D2AD40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca40bc
	if (cr6.eq) goto loc_82CA40BC;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,238
	ctx.r4.u64 = ctx.r4.u64 | 238;
	// bl 0x82d2ada8
	ctx.lr = 0x82CA3F20;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82CA3F2C;
	sub_83103100(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CA3F34:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,4168
	ctx.r30.s64 = ctx.r11.s64 + 4168;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r4,r30,-453
	ctx.r4.s64 = ctx.r30.s64 + -453;
	// bl 0x837b0c10
	ctx.lr = 0x82CA3F4C;
	sub_837B0C10(ctx, base);
	// addi r4,r30,-423
	ctx.r4.s64 = ctx.r30.s64 + -423;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CA3F58;
	sub_837B0C10(ctx, base);
	// lis r10,40
	ctx.r10.s64 = 2621440;
	// addi r9,r1,204
	ctx.r9.s64 = ctx.r1.s64 + 204;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,23
	ctx.r6.s64 = 23;
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// stw r7,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// addi r4,r30,-422
	ctx.r4.s64 = ctx.r30.s64 + -422;
	// stw r6,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CA3F8C;
	sub_837B0C10(ctx, base);
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,125
	ctx.r4.u64 = ctx.r4.u64 | 125;
	// bl 0x82d042a8
	ctx.lr = 0x82CA3F9C;
	sub_82D042A8(ctx, base);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// divw r9,r10,r27
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x8292a3f8
	ctx.lr = 0x82CA3FC0;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82CA3FD4;
	sub_83165D78(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CA3FEC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA3FF4;
	sub_8387E8E0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8259cb28
	ctx.lr = 0x82CA4008;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x82CA4010;
	sub_82D19638(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82d3aef0
	ctx.lr = 0x82CA4018;
	sub_82D3AEF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// beq cr6,0x82ca4038
	if (cr6.eq) goto loc_82CA4038;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82d3ab00
	ctx.lr = 0x82CA402C;
	sub_82D3AB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x83103100
	ctx.lr = 0x82CA4038;
	sub_83103100(ctx, base);
loc_82CA4038:
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA4044;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8378e240
	ctx.lr = 0x82CA404C;
	sub_8378E240(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CA4054:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA405C;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca40bc
	if (cr6.eq) goto loc_82CA40BC;
	// bl 0x82d86078
	ctx.lr = 0x82CA4068;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca40bc
	if (cr6.eq) goto loc_82CA40BC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CA4078;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA4084;
	sub_82D1C1A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,28(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// bl 0x82583338
	ctx.lr = 0x82CA40A8;
	sub_82583338(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r8,4168
	ctx.r5.s64 = ctx.r8.s64 + 4168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CA40BC;
	sub_82D20DA8(ctx, base);
loc_82CA40BC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA40C4"))) PPC_WEAK_FUNC(sub_82CA40C4);
PPC_FUNC_IMPL(__imp__sub_82CA40C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA40C8"))) PPC_WEAK_FUNC(sub_82CA40C8);
PPC_FUNC_IMPL(__imp__sub_82CA40C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CA40D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ca4398
	if (cr6.eq) goto loc_82CA4398;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r10,48
	ctx.r10.s64 = 48;
	// lwz r9,180(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// bge cr6,0x82ca4388
	if (!cr6.lt) goto loc_82CA4388;
	// bl 0x831156e8
	ctx.lr = 0x82CA4108;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,48(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d2aec8
	ctx.lr = 0x82CA4120;
	sub_82D2AEC8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r30,r11,3960
	ctx.r30.s64 = ctx.r11.s64 + 3960;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bne cr6,0x82ca414c
	if (!cr6.eq) goto loc_82CA414C;
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
loc_82CA414C:
	// bctrl 
	ctx.lr = 0x82CA4150;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d86078
	ctx.lr = 0x82CA4154;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca4398
	if (cr6.eq) goto loc_82CA4398;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA4164;
	sub_825832D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d99c10
	ctx.lr = 0x82CA416C;
	sub_82D99C10(ctx, base);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r29,r11,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r30,232
	ctx.r4.s64 = ctx.r30.s64 + 232;
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82ca41ac
	if (cr6.eq) goto loc_82CA41AC;
	// addi r4,r30,248
	ctx.r4.s64 = ctx.r30.s64 + 248;
loc_82CA41AC:
	// bctrl 
	ctx.lr = 0x82CA41B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// bl 0x8292a3f8
	ctx.lr = 0x82CA41C4;
	sub_8292A3F8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CA41D4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA41E4;
	sub_82A69AD0(ctx, base);
	// addi r4,r30,-213
	ctx.r4.s64 = ctx.r30.s64 + -213;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CA41F0;
	sub_837B0C10(ctx, base);
	// addi r4,r30,-195
	ctx.r4.s64 = ctx.r30.s64 + -195;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82CA41FC;
	sub_837B0C10(ctx, base);
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82d8aed8
	ctx.lr = 0x82CA420C;
	sub_82D8AED8(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,500
	ctx.r4.u64 = ctx.r4.u64 | 500;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CA4220;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ca4234
	if (!cr6.lt) goto loc_82CA4234;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82CA4234:
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// lis r4,562
	ctx.r4.s64 = 36831232;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// ori r4,r4,40
	ctx.r4.u64 = ctx.r4.u64 | 40;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82d042a8
	ctx.lr = 0x82CA4250;
	sub_82D042A8(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292a3f8
	ctx.lr = 0x82CA425C;
	sub_8292A3F8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CA426C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA427C;
	sub_82A69AD0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d99c08
	ctx.lr = 0x82CA4284;
	sub_82D99C08(ctx, base);
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82d9a978
	ctx.lr = 0x82CA4294;
	sub_82D9A978(ctx, base);
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83165ba8
	ctx.lr = 0x82CA42A4;
	sub_83165BA8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292a3f8
	ctx.lr = 0x82CA42B0;
	sub_8292A3F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CA42C0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA42D0;
	sub_82A69AD0(ctx, base);
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r27,40(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x837b0c10
	ctx.lr = 0x82CA42E8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CA42F8;
	sub_82A6A1B8(ctx, base);
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82ca433c
	if (cr6.eq) goto loc_82CA433C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x82CA4324;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82CA4334;
	sub_831CE980(ctx, base);
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// b 0x82ca4340
	goto loc_82CA4340;
loc_82CA433C:
	// addi r4,r30,-194
	ctx.r4.s64 = ctx.r30.s64 + -194;
loc_82CA4340:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CA4348;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CA4358;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA4368;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA4370;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA4378;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA4380;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82CA4388:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CA4398;
	sub_82D2AEC8(ctx, base);
loc_82CA4398:
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA43A0"))) PPC_WEAK_FUNC(sub_82CA43A0);
PPC_FUNC_IMPL(__imp__sub_82CA43A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CA43A8;
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
	// beq cr6,0x82ca4430
	if (cr6.eq) goto loc_82CA4430;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82CA43CC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ca441c
	if (cr6.eq) goto loc_82CA441C;
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
	ctx.lr = 0x82CA43F4;
	sub_8259CB28(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lbz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// stb r7,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r7.u8);
loc_82CA441C:
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82ca43cc
	if (!cr6.eq) goto loc_82CA43CC;
loc_82CA4430:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA443C"))) PPC_WEAK_FUNC(sub_82CA443C);
PPC_FUNC_IMPL(__imp__sub_82CA443C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4440"))) PPC_WEAK_FUNC(sub_82CA4440);
PPC_FUNC_IMPL(__imp__sub_82CA4440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CA4448;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1365
	ctx.r11.s64 = 89456640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ca446c
	if (!cr6.gt) goto loc_82CA446C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82CA446C;
	sub_831CC150(ctx, base);
loc_82CA446C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,48
	ctx.r27.s64 = 48;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82ca4524
	if (!cr6.lt) goto loc_82CA4524;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r28,r11,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82595718
	ctx.lr = 0x82CA44AC;
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
	// bl 0x82ca43a0
	ctx.lr = 0x82CA44D0;
	sub_82CA43A0(ctx, base);
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
	// beq cr6,0x82ca4504
	if (cr6.eq) goto loc_82CA4504;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca39a0
	ctx.lr = 0x82CA44F4;
	sub_82CA39A0(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CA4504;
	sub_825952B8(ctx, base);
loc_82CA4504:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82CA4524:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA452C"))) PPC_WEAK_FUNC(sub_82CA452C);
PPC_FUNC_IMPL(__imp__sub_82CA452C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4530"))) PPC_WEAK_FUNC(sub_82CA4530);
PPC_FUNC_IMPL(__imp__sub_82CA4530) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,4320
	ctx.r9.s64 = ctx.r11.s64 + 4320;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,180
	ctx.r31.s64 = ctx.r3.s64 + 180;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca4594
	if (cr6.eq) goto loc_82CA4594;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ca39a0
	ctx.lr = 0x82CA4580;
	sub_82CA39A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CA4594;
	sub_825952B8(ctx, base);
loc_82CA4594:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8378e240
	ctx.lr = 0x82CA45AC;
	sub_8378E240(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d25548
	ctx.lr = 0x82CA45B4;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_82CA45CC"))) PPC_WEAK_FUNC(sub_82CA45CC);
PPC_FUNC_IMPL(__imp__sub_82CA45CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA45D0"))) PPC_WEAK_FUNC(sub_82CA45D0);
PPC_FUNC_IMPL(__imp__sub_82CA45D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1365
	ctx.r10.s64 = 89456640;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,48
	ctx.r9.s64 = 48;
	// ori r8,r10,21845
	ctx.r8.u64 = ctx.r10.u64 | 21845;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ca4604
	if (!cr6.lt) goto loc_82CA4604;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82CA4604:
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
	// blt cr6,0x82ca4634
	if (cr6.lt) goto loc_82CA4634;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82CA4634:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ca4640
	if (!cr6.lt) goto loc_82CA4640;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82CA4640:
	// b 0x82ca4440
	sub_82CA4440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA4644"))) PPC_WEAK_FUNC(sub_82CA4644);
PPC_FUNC_IMPL(__imp__sub_82CA4644) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4648"))) PPC_WEAK_FUNC(sub_82CA4648);
PPC_FUNC_IMPL(__imp__sub_82CA4648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA4650;
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
	ctx.lr = 0x82CA4664;
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
	ctx.lr = 0x82CA467C;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,4320
	ctx.r9.s64 = ctx.r11.s64 + 4320;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// addi r30,r6,1240
	ctx.r30.s64 = ctx.r6.s64 + 1240;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// lwz r4,1240(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1240);
	// bl 0x82d20ae0
	ctx.lr = 0x82CA46E8;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82CA46F8;
	sub_82D23390(ctx, base);
	// lis r5,35
	ctx.r5.s64 = 2293760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,140
	ctx.r5.u64 = ctx.r5.u64 | 140;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d20eb8
	ctx.lr = 0x82CA470C;
	sub_82D20EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82d19788
	ctx.lr = 0x82CA471C;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,223
	ctx.r4.s64 = 223;
	// bl 0x82d1a998
	ctx.lr = 0x82CA4728;
	sub_82D1A998(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA4734"))) PPC_WEAK_FUNC(sub_82CA4734);
PPC_FUNC_IMPL(__imp__sub_82CA4734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4738"))) PPC_WEAK_FUNC(sub_82CA4738);
PPC_FUNC_IMPL(__imp__sub_82CA4738) {
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
	// bl 0x82ca4530
	ctx.lr = 0x82CA4758;
	sub_82CA4530(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca4770
	if (cr6.eq) goto loc_82CA4770;
	// bl 0x82416268
	ctx.lr = 0x82CA476C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CA4770:
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

__attribute__((alias("__imp__sub_82CA4788"))) PPC_WEAK_FUNC(sub_82CA4788);
PPC_FUNC_IMPL(__imp__sub_82CA4788) {
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
	// bge cr6,0x82ca47c0
	if (!cr6.lt) goto loc_82CA47C0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82ca47c4
	if (!cr6.gt) goto loc_82CA47C4;
loc_82CA47C0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CA47C4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca481c
	if (cr6.eq) goto loc_82CA481C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,48
	ctx.r9.s64 = 48;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82ca47f8
	if (!cr6.eq) goto loc_82CA47F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca45d0
	ctx.lr = 0x82CA47F8;
	sub_82CA45D0(ctx, base);
loc_82CA47F8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca4848
	if (cr6.eq) goto loc_82CA4848;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ca4844
	goto loc_82CA4844;
loc_82CA481C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca4834
	if (!cr6.eq) goto loc_82CA4834;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca45d0
	ctx.lr = 0x82CA4834;
	sub_82CA45D0(ctx, base);
loc_82CA4834:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca4848
	if (cr6.eq) goto loc_82CA4848;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82CA4844:
	// bl 0x82ca3920
	ctx.lr = 0x82CA4848;
	sub_82CA3920(ctx, base);
loc_82CA4848:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
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

__attribute__((alias("__imp__sub_82CA486C"))) PPC_WEAK_FUNC(sub_82CA486C);
PPC_FUNC_IMPL(__imp__sub_82CA486C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4870"))) PPC_WEAK_FUNC(sub_82CA4870);
PPC_FUNC_IMPL(__imp__sub_82CA4870) {
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
	// blt cr6,0x82ca4898
	if (cr6.lt) goto loc_82CA4898;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca489c
	goto loc_82CA489C;
loc_82CA4898:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA489C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CA48B8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca48d0
	if (cr6.eq) goto loc_82CA48D0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca4648
	ctx.lr = 0x82CA48CC;
	sub_82CA4648(ctx, base);
	// b 0x82ca48d4
	goto loc_82CA48D4;
loc_82CA48D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA48D4:
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

__attribute__((alias("__imp__sub_82CA48EC"))) PPC_WEAK_FUNC(sub_82CA48EC);
PPC_FUNC_IMPL(__imp__sub_82CA48EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA48F0"))) PPC_WEAK_FUNC(sub_82CA48F0);
PPC_FUNC_IMPL(__imp__sub_82CA48F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CA48F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA4904;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca4a60
	if (cr6.eq) goto loc_82CA4A60;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA4914;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82CA4918;
	sub_82D99C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825832f0
	ctx.lr = 0x82CA4920;
	sub_825832F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CA492C;
	sub_83102DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ca3a08
	ctx.lr = 0x82CA4940;
	sub_82CA3A08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8332f198
	ctx.lr = 0x82CA4948;
	sub_8332F198(ctx, base);
	// stw r3,176(r24)
	PPC_STORE_U32(ctx.r24.u32 + 176, ctx.r3.u32);
	// addi r28,r24,180
	ctx.r28.s64 = ctx.r24.s64 + 180;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca4788
	ctx.lr = 0x82CA495C;
	sub_82CA4788(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ca4a18
	if (cr6.eq) goto loc_82CA4A18;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_82CA496C:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d98848
	ctx.lr = 0x82CA497C;
	sub_82D98848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e0
	ctx.lr = 0x82CA4988;
	sub_825832E0(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82ca499c
	if (cr6.eq) goto loc_82CA499C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_82CA499C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d999a0
	ctx.lr = 0x82CA49A4;
	sub_82D999A0(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d98938
	ctx.lr = 0x82CA49B4;
	sub_82D98938(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825832e0
	ctx.lr = 0x82CA49CC;
	sub_825832E0(ctx, base);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r7.u8);
	// bl 0x83767d18
	ctx.lr = 0x82CA49E8;
	sub_83767D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CA49FC;
	sub_8259CB28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca4788
	ctx.lr = 0x82CA4A08;
	sub_82CA4788(ctx, base);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, xer);
	// bne cr6,0x82ca496c
	if (!cr6.eq) goto loc_82CA496C;
loc_82CA4A18:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r10,48
	ctx.r10.s64 = 48;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
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
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82CA4A40;
	sub_82D20F50(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82ca4a60
	if (cr6.lt) goto loc_82CA4A60;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CA4A60;
	sub_825952B8(ctx, base);
loc_82CA4A60:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA4A68"))) PPC_WEAK_FUNC(sub_82CA4A68);
PPC_FUNC_IMPL(__imp__sub_82CA4A68) {
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
	// bl 0x82ca48f0
	ctx.lr = 0x82CA4A80;
	sub_82CA48F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CA4A88;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r4,r11,4092
	ctx.r4.s64 = ctx.r11.s64 + 4092;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CA4AA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca4abc
	if (cr6.eq) goto loc_82CA4ABC;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,152
	ctx.r4.u64 = ctx.r4.u64 | 152;
	// bl 0x82d30340
	ctx.lr = 0x82CA4ABC;
	sub_82D30340(ctx, base);
loc_82CA4ABC:
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

__attribute__((alias("__imp__sub_82CA4AD4"))) PPC_WEAK_FUNC(sub_82CA4AD4);
PPC_FUNC_IMPL(__imp__sub_82CA4AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4AD8"))) PPC_WEAK_FUNC(sub_82CA4AD8);
PPC_FUNC_IMPL(__imp__sub_82CA4AD8) {
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
	ctx.lr = 0x82CA4AF0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca4b04
	if (cr6.eq) goto loc_82CA4B04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA4B00;
	sub_82D1C1A8(ctx, base);
	// stw r3,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r3.u32);
loc_82CA4B04:
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

__attribute__((alias("__imp__sub_82CA4B18"))) PPC_WEAK_FUNC(sub_82CA4B18);
PPC_FUNC_IMPL(__imp__sub_82CA4B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CA4B20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r27,-32239
	ctx.r27.s64 = -2112815104;
loc_82CA4B30:
	// lwz r30,5192(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5192);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r28,r31,r30
	ctx.r28.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82d19788
	ctx.lr = 0x82CA4B48;
	sub_82D19788(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA4B64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x82ca4b30
	if (cr6.lt) goto loc_82CA4B30;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA4B7C"))) PPC_WEAK_FUNC(sub_82CA4B7C);
PPC_FUNC_IMPL(__imp__sub_82CA4B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4B80"))) PPC_WEAK_FUNC(sub_82CA4B80);
PPC_FUNC_IMPL(__imp__sub_82CA4B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,4916
	ctx.r5.s64 = ctx.r11.s64 + 4916;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA4B90"))) PPC_WEAK_FUNC(sub_82CA4B90);
PPC_FUNC_IMPL(__imp__sub_82CA4B90) {
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
	// bl 0x8308e078
	ctx.lr = 0x82CA4BAC;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r3,215
	ctx.r3.s64 = 215;
	// bl 0x82d444b0
	ctx.lr = 0x82CA4BBC;
	sub_82D444B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca4be0
	if (cr6.eq) goto loc_82CA4BE0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CA4BD4;
	sub_82D17DA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82CA4BE0;
	sub_83103100(ctx, base);
loc_82CA4BE0:
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

__attribute__((alias("__imp__sub_82CA4BF8"))) PPC_WEAK_FUNC(sub_82CA4BF8);
PPC_FUNC_IMPL(__imp__sub_82CA4BF8) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x82a67c00
	ctx.lr = 0x82CA4C2C;
	sub_82A67C00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4C3C"))) PPC_WEAK_FUNC(sub_82CA4C3C);
PPC_FUNC_IMPL(__imp__sub_82CA4C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4C40"))) PPC_WEAK_FUNC(sub_82CA4C40);
PPC_FUNC_IMPL(__imp__sub_82CA4C40) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x82a67c78
	ctx.lr = 0x82CA4C74;
	sub_82A67C78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4C84"))) PPC_WEAK_FUNC(sub_82CA4C84);
PPC_FUNC_IMPL(__imp__sub_82CA4C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4C88"))) PPC_WEAK_FUNC(sub_82CA4C88);
PPC_FUNC_IMPL(__imp__sub_82CA4C88) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x82a690b0
	ctx.lr = 0x82CA4CBC;
	sub_82A690B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4CCC"))) PPC_WEAK_FUNC(sub_82CA4CCC);
PPC_FUNC_IMPL(__imp__sub_82CA4CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4CD0"))) PPC_WEAK_FUNC(sub_82CA4CD0);
PPC_FUNC_IMPL(__imp__sub_82CA4CD0) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x82a69160
	ctx.lr = 0x82CA4D04;
	sub_82A69160(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4D14"))) PPC_WEAK_FUNC(sub_82CA4D14);
PPC_FUNC_IMPL(__imp__sub_82CA4D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4D18"))) PPC_WEAK_FUNC(sub_82CA4D18);
PPC_FUNC_IMPL(__imp__sub_82CA4D18) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x82d9e020
	ctx.lr = 0x82CA4D4C;
	sub_82D9E020(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4D5C"))) PPC_WEAK_FUNC(sub_82CA4D5C);
PPC_FUNC_IMPL(__imp__sub_82CA4D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4D60"))) PPC_WEAK_FUNC(sub_82CA4D60);
PPC_FUNC_IMPL(__imp__sub_82CA4D60) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x82d9e0c0
	ctx.lr = 0x82CA4D94;
	sub_82D9E0C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4DA4"))) PPC_WEAK_FUNC(sub_82CA4DA4);
PPC_FUNC_IMPL(__imp__sub_82CA4DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4DA8"))) PPC_WEAK_FUNC(sub_82CA4DA8);
PPC_FUNC_IMPL(__imp__sub_82CA4DA8) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x82d9e160
	ctx.lr = 0x82CA4DDC;
	sub_82D9E160(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4DEC"))) PPC_WEAK_FUNC(sub_82CA4DEC);
PPC_FUNC_IMPL(__imp__sub_82CA4DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4DF0"))) PPC_WEAK_FUNC(sub_82CA4DF0);
PPC_FUNC_IMPL(__imp__sub_82CA4DF0) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x82d9e1c0
	ctx.lr = 0x82CA4E24;
	sub_82D9E1C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA4E34"))) PPC_WEAK_FUNC(sub_82CA4E34);
PPC_FUNC_IMPL(__imp__sub_82CA4E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4E38"))) PPC_WEAK_FUNC(sub_82CA4E38);
PPC_FUNC_IMPL(__imp__sub_82CA4E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA4E40;
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
	// bl 0x82d86078
	ctx.lr = 0x82CA4E54;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca4e8c
	if (cr6.eq) goto loc_82CA4E8C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82CA4E64;
	sub_8332F198(ctx, base);
	// bl 0x82d9c120
	ctx.lr = 0x82CA4E68;
	sub_82D9C120(ctx, base);
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwz r10,1440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 180, ctx.r10.u32);
	// stw r11,184(r9)
	PPC_STORE_U32(ctx.r9.u32 + 184, ctx.r11.u32);
	// bl 0x82d1d478
	ctx.lr = 0x82CA4E8C;
	sub_82D1D478(ctx, base);
loc_82CA4E8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA4E94"))) PPC_WEAK_FUNC(sub_82CA4E94);
PPC_FUNC_IMPL(__imp__sub_82CA4E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4E98"))) PPC_WEAK_FUNC(sub_82CA4E98);
PPC_FUNC_IMPL(__imp__sub_82CA4E98) {
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
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca4ec0
	if (!cr6.eq) goto loc_82CA4EC0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CA4EC0:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,177
	ctx.r4.u64 = ctx.r4.u64 | 177;
	// bl 0x82d303d0
	ctx.lr = 0x82CA4ECC;
	sub_82D303D0(ctx, base);
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

__attribute__((alias("__imp__sub_82CA4EE0"))) PPC_WEAK_FUNC(sub_82CA4EE0);
PPC_FUNC_IMPL(__imp__sub_82CA4EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA4EE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,5224
	ctx.r11.s64 = ctx.r11.s64 + 5224;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82CA4F00:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca4f30
	if (cr6.eq) goto loc_82CA4F30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA4F30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CA4F30:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82ca4f00
	if (!cr0.eq) goto loc_82CA4F00;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA4F44"))) PPC_WEAK_FUNC(sub_82CA4F44);
PPC_FUNC_IMPL(__imp__sub_82CA4F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA4F48"))) PPC_WEAK_FUNC(sub_82CA4F48);
PPC_FUNC_IMPL(__imp__sub_82CA4F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA4F50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x82CA4F5C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca4f70
	if (!cr6.eq) goto loc_82CA4F70;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CA4F70:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA4F78;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CA4F7C;
	sub_83102DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d99fa0
	ctx.lr = 0x82CA4F84;
	sub_82D99FA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832f0
	ctx.lr = 0x82CA4F90;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r31,250
	cr6.compare<uint32_t>(ctx.r31.u32, 250, xer);
	// bge cr6,0x82ca4fa0
	if (!cr6.lt) goto loc_82CA4FA0;
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ca4fa4
	if (cr6.lt) goto loc_82CA4FA4;
loc_82CA4FA0:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CA4FA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA4FB0"))) PPC_WEAK_FUNC(sub_82CA4FB0);
PPC_FUNC_IMPL(__imp__sub_82CA4FB0) {
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
	// bl 0x82d86078
	ctx.lr = 0x82CA4FC8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca4fe4
	if (!cr6.eq) goto loc_82CA4FE4;
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
loc_82CA4FE4:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA4FEC;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CA4FF0;
	sub_83102DB0(ctx, base);
	// bl 0x82d99fa0
	ctx.lr = 0x82CA4FF4;
	sub_82D99FA0(ctx, base);
	// cmplwi cr6,r3,250
	cr6.compare<uint32_t>(ctx.r3.u32, 250, xer);
	// bge cr6,0x82ca5000
	if (!cr6.lt) goto loc_82CA5000;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82CA5000:
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

__attribute__((alias("__imp__sub_82CA5018"))) PPC_WEAK_FUNC(sub_82CA5018);
PPC_FUNC_IMPL(__imp__sub_82CA5018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
loc_82CA5048:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ca5048
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA5048;
	// lwz r8,36(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,92
	ctx.r11.s64 = ctx.r4.s64 + 92;
	// addi r10,r3,92
	ctx.r10.s64 = ctx.r3.s64 + 92;
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lwz r6,44(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// lwz r5,48(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// lbz r9,52(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 52);
	// stb r9,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r9.u8);
	// lbz r8,53(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 53);
	// stb r8,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r8.u8);
	// lbz r7,54(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 54);
	// stb r7,54(r3)
	PPC_STORE_U8(ctx.r3.u32 + 54, ctx.r7.u8);
	// lbz r6,55(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 55);
	// stb r6,55(r3)
	PPC_STORE_U8(ctx.r3.u32 + 55, ctx.r6.u8);
	// lbz r5,56(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 56);
	// stb r5,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r5.u8);
	// lbz r9,57(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 57);
	// stb r9,57(r3)
	PPC_STORE_U8(ctx.r3.u32 + 57, ctx.r9.u8);
	// lbz r8,58(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 58);
	// stb r8,58(r3)
	PPC_STORE_U8(ctx.r3.u32 + 58, ctx.r8.u8);
	// lbz r7,59(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 59);
	// stb r7,59(r3)
	PPC_STORE_U8(ctx.r3.u32 + 59, ctx.r7.u8);
	// lbz r6,60(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 60);
	// stb r6,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r6.u8);
	// lbz r5,61(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 61);
	// stb r5,61(r3)
	PPC_STORE_U8(ctx.r3.u32 + 61, ctx.r5.u8);
	// lbz r9,62(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 62);
	// stb r9,62(r3)
	PPC_STORE_U8(ctx.r3.u32 + 62, ctx.r9.u8);
	// lbz r8,63(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 63);
	// stb r8,63(r3)
	PPC_STORE_U8(ctx.r3.u32 + 63, ctx.r8.u8);
	// lbz r7,64(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 64);
	// stb r7,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r7.u8);
	// lbz r6,65(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 65);
	// stb r6,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r6.u8);
	// lbz r5,66(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 66);
	// stb r5,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r5.u8);
	// lwz r9,68(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// lwz r8,72(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r7,76(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// lwz r6,80(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r6,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
	// lwz r5,84(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r5,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// lwz r9,88(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// lwz r8,92(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
loc_82CA5134:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ca5134
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA5134;
	// lbz r11,116(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 116);
	// stb r11,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r11.u8);
	// lwz r10,120(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// lwz r9,124(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// lwz r8,128(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r8,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r8.u32);
	// lwz r7,132(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// stw r7,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r7.u32);
	// lwz r6,136(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// stw r6,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r6.u32);
	// lwz r5,140(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// stw r5,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA517C"))) PPC_WEAK_FUNC(sub_82CA517C);
PPC_FUNC_IMPL(__imp__sub_82CA517C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA5180"))) PPC_WEAK_FUNC(sub_82CA5180);
PPC_FUNC_IMPL(__imp__sub_82CA5180) {
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
	ctx.lr = 0x82CA519C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca51ac
	if (!cr6.eq) goto loc_82CA51AC;
loc_82CA51A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca5200
	goto loc_82CA5200;
loc_82CA51AC:
	// lwz r10,1424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// li r9,160
	ctx.r9.s64 = 160;
	// lwz r8,1428(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// divw r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82ca51a4
	if (!cr6.lt) goto loc_82CA51A4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82CA51E4;
	sub_82DAB6D0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825832f8
	ctx.lr = 0x82CA51F0;
	sub_825832F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83131d70
	ctx.lr = 0x82CA51FC;
	sub_83131D70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CA5200:
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

__attribute__((alias("__imp__sub_82CA5218"))) PPC_WEAK_FUNC(sub_82CA5218);
PPC_FUNC_IMPL(__imp__sub_82CA5218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA5220;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ca5180
	ctx.lr = 0x82CA522C;
	sub_82CA5180(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca5308
	if (cr6.eq) goto loc_82CA5308;
	// bl 0x82d86078
	ctx.lr = 0x82CA523C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca5308
	if (cr6.eq) goto loc_82CA5308;
	// lwz r29,116(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82CA5250;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832d8
	ctx.lr = 0x82CA525C;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CA5260;
	sub_83102DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x82CA526C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9a8a8
	ctx.lr = 0x82CA5278;
	sub_82D9A8A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA5290;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ca52c0
	if (cr6.eq) goto loc_82CA52C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA52B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CA52C0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82ca52fc
	if (cr6.eq) goto loc_82CA52FC;
	// bctrl 
	ctx.lr = 0x82CA52E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97730
	ctx.lr = 0x82CA52EC;
	sub_82D97730(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CA52FC:
	// bctrl 
	ctx.lr = 0x82CA5300;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r9.u32);
loc_82CA5308:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA5310"))) PPC_WEAK_FUNC(sub_82CA5310);
PPC_FUNC_IMPL(__imp__sub_82CA5310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA5318;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ca5180
	ctx.lr = 0x82CA5324;
	sub_82CA5180(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca538c
	if (cr6.eq) goto loc_82CA538C;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CA533C;
	sub_82D17DA0(ctx, base);
	// lwz r7,1440(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// lwz r6,1444(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// addi r9,r11,5240
	ctx.r9.s64 = ctx.r11.s64 + 5240;
	// addi r8,r10,-29764
	ctx.r8.s64 = ctx.r10.s64 + -29764;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r5,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r29,r4,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// bl 0x82f00728
	ctx.lr = 0x82CA5368;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca5378
	if (cr6.eq) goto loc_82CA5378;
	// stw r30,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r30.u32);
	// stw r29,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r29.u32);
loc_82CA5378:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,4924
	ctx.r5.s64 = ctx.r11.s64 + 4924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CA538C;
	sub_82D20DA8(ctx, base);
loc_82CA538C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA5394"))) PPC_WEAK_FUNC(sub_82CA5394);
PPC_FUNC_IMPL(__imp__sub_82CA5394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA5398"))) PPC_WEAK_FUNC(sub_82CA5398);
PPC_FUNC_IMPL(__imp__sub_82CA5398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA53A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82ca551c
	if (cr6.gt) goto loc_82CA551C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ca5514
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA5514;
	// bdzf 4*cr6+eq,0x82ca5514
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA5514;
	// bdzf 4*cr6+eq,0x82ca551c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA551C;
	// bdzf 4*cr6+eq,0x82ca551c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA551C;
	// bne cr6,0x82ca54cc
	if (!cr6.eq) goto loc_82CA54CC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ca5514
	if (!cr6.eq) goto loc_82CA5514;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA53F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ca54a8
	if (cr6.eq) goto loc_82CA54A8;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82ca4fb0
	ctx.lr = 0x82CA5408;
	sub_82CA4FB0(ctx, base);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82ca5418
	if (!cr6.eq) goto loc_82CA5418;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82CA5418:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// addi r11,r11,4976
	ctx.r11.s64 = ctx.r11.s64 + 4976;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,-44
	ctx.r3.s64 = ctx.r11.s64 + -44;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f420
	ctx.lr = 0x82CA543C;
	sub_82D2F420(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,340
	ctx.r4.u64 = ctx.r4.u64 | 340;
	// bl 0x82d2a1c8
	ctx.lr = 0x82CA544C;
	sub_82D2A1C8(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,188
	ctx.r5.u64 = ctx.r5.u64 | 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2a258
	ctx.lr = 0x82CA5460;
	sub_82D2A258(ctx, base);
	// lis r5,60
	ctx.r5.s64 = 3932160;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,74
	ctx.r5.u64 = ctx.r5.u64 | 74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2a258
	ctx.lr = 0x82CA5474;
	sub_82D2A258(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82ca548c
	if (!cr6.eq) goto loc_82CA548C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29d78
	ctx.lr = 0x82CA548C;
	sub_82D29D78(ctx, base);
loc_82CA548C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82CA5498;
	sub_83103100(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,1396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1396, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CA54A8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,4976
	ctx.r11.s64 = ctx.r11.s64 + 4976;
	// addi r5,r11,-20
	ctx.r5.s64 = ctx.r11.s64 + -20;
	// bl 0x82d20da8
	ctx.lr = 0x82CA54BC;
	sub_82D20DA8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1396, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CA54CC:
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x82ca54f4
	if (cr6.lt) goto loc_82CA54F4;
	// bne cr6,0x82ca551c
	if (!cr6.eq) goto loc_82CA551C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,4976
	ctx.r5.s64 = ctx.r11.s64 + 4976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CA54EC;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CA54F4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,4976
	ctx.r11.s64 = ctx.r11.s64 + 4976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// bl 0x82d20da8
	ctx.lr = 0x82CA550C;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CA5514:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1396, ctx.r11.u32);
loc_82CA551C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA5524"))) PPC_WEAK_FUNC(sub_82CA5524);
PPC_FUNC_IMPL(__imp__sub_82CA5524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA5528"))) PPC_WEAK_FUNC(sub_82CA5528);
PPC_FUNC_IMPL(__imp__sub_82CA5528) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1428);
	// li r10,160
	ctx.r10.s64 = 160;
	// lwz r9,1424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1424);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r5,r8,r10
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82ca556c
	if (!cr0.eq) goto loc_82CA556C;
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
loc_82CA556C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82CA5580;
	sub_82D20F50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,1404(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
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
	ctx.lr = 0x82CA55A0;
	sub_82D1EBF8(ctx, base);
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

__attribute__((alias("__imp__sub_82CA55B8"))) PPC_WEAK_FUNC(sub_82CA55B8);
PPC_FUNC_IMPL(__imp__sub_82CA55B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,160
	ctx.r10.s64 = 160;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,409
	ctx.r8.s64 = 26804224;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// ori r6,r8,39321
	ctx.r6.u64 = ctx.r8.u64 | 39321;
	// divw r11,r7,r10
	ctx.r11.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bge cr6,0x82ca55ec
	if (!cr6.lt) goto loc_82CA55EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ca55f0
	goto loc_82CA55F0;
loc_82CA55EC:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CA55F0:
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

__attribute__((alias("__imp__sub_82CA5604"))) PPC_WEAK_FUNC(sub_82CA5604);
PPC_FUNC_IMPL(__imp__sub_82CA5604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA5608"))) PPC_WEAK_FUNC(sub_82CA5608);
PPC_FUNC_IMPL(__imp__sub_82CA5608) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ca5664
	if (cr6.eq) goto loc_82CA5664;
	// lis r11,409
	ctx.r11.s64 = 26804224;
	// ori r10,r11,39321
	ctx.r10.u64 = ctx.r11.u64 | 39321;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ca5648
	if (cr6.gt) goto loc_82CA5648;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82416260
	ctx.lr = 0x82CA5640;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca5664
	if (!cr6.eq) goto loc_82CA5664;
loc_82CA5648:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,15364
	ctx.r9.s64 = ctx.r11.s64 + 15364;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8246b850
	ctx.lr = 0x82CA5664;
	sub_8246B850(ctx, base);
loc_82CA5664:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA5674"))) PPC_WEAK_FUNC(sub_82CA5674);
PPC_FUNC_IMPL(__imp__sub_82CA5674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA5678"))) PPC_WEAK_FUNC(sub_82CA5678);
PPC_FUNC_IMPL(__imp__sub_82CA5678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CA5680;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r29,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r29.s64 = temp.s64;
	// bge cr6,0x82ca572c
	if (!cr6.lt) goto loc_82CA572C;
loc_82CA56AC:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82CA56CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca572c
	if (cr6.eq) goto loc_82CA572C;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca5018
	ctx.lr = 0x82CA56F4;
	sub_82CA5018(ctx, base);
	// lwz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// cmpw cr6,r25,r29
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r29.s32, xer);
	// stw r8,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r8.u32);
	// addze r29,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r29.s64 = temp.s64;
	// lwz r7,148(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r7,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r7.u32);
	// lwz r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stw r6,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r6.u32);
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r5,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r5.u32);
	// blt cr6,0x82ca56ac
	if (cr6.lt) goto loc_82CA56AC;
loc_82CA572C:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca5018
	ctx.lr = 0x82CA5748;
	sub_82CA5018(ctx, base);
	// lwz r10,144(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 144);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// lwz r9,148(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lwz r8,152(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// stw r8,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// lwz r7,156(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 156);
	// stw r7,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA5770"))) PPC_WEAK_FUNC(sub_82CA5770);
PPC_FUNC_IMPL(__imp__sub_82CA5770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA5778;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ca57d0
	if (cr6.eq) goto loc_82CA57D0;
	// addi r31,r4,148
	ctx.r31.s64 = ctx.r4.s64 + 148;
loc_82CA5790:
	// addi r31,r31,-160
	ctx.r31.s64 = ctx.r31.s64 + -160;
	// addi r30,r30,-160
	ctx.r30.s64 = ctx.r30.s64 + -160;
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca5018
	ctx.lr = 0x82CA57A4;
	sub_82CA5018(ctx, base);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r11,r31,-148
	ctx.r11.s64 = ctx.r31.s64 + -148;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// stw r10,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r7.u32);
	// bne cr6,0x82ca5790
	if (!cr6.eq) goto loc_82CA5790;
loc_82CA57D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA57DC"))) PPC_WEAK_FUNC(sub_82CA57DC);
PPC_FUNC_IMPL(__imp__sub_82CA57DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA57E0"))) PPC_WEAK_FUNC(sub_82CA57E0);
PPC_FUNC_IMPL(__imp__sub_82CA57E0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ad4478
	ctx.lr = 0x82CA5808;
	sub_82AD4478(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// bl 0x82ca5018
	ctx.lr = 0x82CA5834;
	sub_82CA5018(ctx, base);
	// lwz r7,144(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r7.u32);
	// lwz r6,148(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r6,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r6.u32);
	// lwz r5,152(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r5,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r5.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x82ca5018
	ctx.lr = 0x82CA5860;
	sub_82CA5018(ctx, base);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r8,232(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r7,236(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stw r10,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r10.u32);
	// stw r9,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r9.u32);
	// stw r8,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r8.u32);
	// stw r7,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r7.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

__attribute__((alias("__imp__sub_82CA5898"))) PPC_WEAK_FUNC(sub_82CA5898);
PPC_FUNC_IMPL(__imp__sub_82CA5898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CA58A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x82ca595c
	if (!cr6.lt) goto loc_82CA595C;
loc_82CA58CC:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r3,-160
	ctx.r4.s64 = ctx.r3.s64 + -160;
	// bctrl 
	ctx.lr = 0x82CA58E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca58f8
	if (cr6.eq) goto loc_82CA58F8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82CA58F8:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r30,r10,r27
	ctx.r30.u64 = ctx.r10.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca5018
	ctx.lr = 0x82CA5924;
	sub_82CA5018(ctx, base);
	// lwz r7,144(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r7.u32);
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
	// lwz r6,148(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r6,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r6.u32);
	// lwz r5,152(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r5,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r5.u32);
	// lwz r4,156(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r4,156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 156, ctx.r4.u32);
	// blt cr6,0x82ca58cc
	if (cr6.lt) goto loc_82CA58CC;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
loc_82CA595C:
	// bne cr6,0x82ca59b0
	if (!cr6.eq) goto loc_82CA59B0;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r31,r10,r27
	ctx.r31.u64 = ctx.r10.u64 + ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// bl 0x82ca5018
	ctx.lr = 0x82CA598C;
	sub_82CA5018(ctx, base);
	// lwz r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r28,r26,-1
	ctx.r28.s64 = ctx.r26.s64 + -1;
	// stw r8,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r8.u32);
	// lwz r7,-12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// stw r7,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r7.u32);
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// stw r6,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r6.u32);
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r5,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r5.u32);
loc_82CA59B0:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca5678
	ctx.lr = 0x82CA59C8;
	sub_82CA5678(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA59D0"))) PPC_WEAK_FUNC(sub_82CA59D0);
PPC_FUNC_IMPL(__imp__sub_82CA59D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CA59D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,160
	ctx.r10.s64 = 160;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r28,r11,r10
	ctx.r28.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// srawi r9,r28,1
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 1;
	// addze. r30,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r30.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble 0x82ca5a64
	if (!cr0.gt) goto loc_82CA5A64;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,148
	ctx.r31.s64 = ctx.r11.s64 + 148;
loc_82CA5A10:
	// addi r31,r31,-160
	ctx.r31.s64 = ctx.r31.s64 + -160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x82ad4478
	ctx.lr = 0x82CA5A24;
	sub_82AD4478(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// bl 0x82ca5898
	ctx.lr = 0x82CA5A5C;
	sub_82CA5898(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x82ca5a10
	if (cr6.gt) goto loc_82CA5A10;
loc_82CA5A64:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA5A6C"))) PPC_WEAK_FUNC(sub_82CA5A6C);
PPC_FUNC_IMPL(__imp__sub_82CA5A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA5A70"))) PPC_WEAK_FUNC(sub_82CA5A70);
PPC_FUNC_IMPL(__imp__sub_82CA5A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CA5A78;
	__savegprlr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ca5bd8
	if (cr6.eq) goto loc_82CA5BD8;
	// addi r29,r3,160
	ctx.r29.s64 = ctx.r3.s64 + 160;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ca5bd8
	if (cr6.eq) goto loc_82CA5BD8;
	// lbz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82CA5AA0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x82ad4478
	ctx.lr = 0x82CA5AB0;
	sub_82AD4478(ctx, base);
	// lwz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// lwz r10,148(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,152(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,156(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// stw r9,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// stw r8,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82CA5AE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ca5b30
	if (cr6.eq) goto loc_82CA5B30;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r29,160
	ctx.r5.s64 = ctx.r29.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca5770
	ctx.lr = 0x82CA5B00;
	sub_82CA5770(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca5018
	ctx.lr = 0x82CA5B0C;
	sub_82CA5018(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,248(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r8,252(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stw r11,144(r28)
	PPC_STORE_U32(ctx.r28.u32 + 144, ctx.r11.u32);
	// stw r10,148(r28)
	PPC_STORE_U32(ctx.r28.u32 + 148, ctx.r10.u32);
	// stw r9,152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 152, ctx.r9.u32);
	// stw r8,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r8.u32);
	// b 0x82ca5bcc
	goto loc_82CA5BCC;
loc_82CA5B30:
	// addi r4,r29,-160
	ctx.r4.s64 = ctx.r29.s64 + -160;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82CA5B44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca5ba0
	if (cr6.eq) goto loc_82CA5BA0;
loc_82CA5B50:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca5018
	ctx.lr = 0x82CA5B5C;
	sub_82CA5018(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// stw r11,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r11.u32);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r10,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r10.u32);
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stw r9,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r9.u32);
	// lwz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r8,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r8.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r31,r31,-160
	ctx.r31.s64 = ctx.r31.s64 + -160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82CA5B94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82ca5b50
	if (!cr6.eq) goto loc_82CA5B50;
loc_82CA5BA0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca5018
	ctx.lr = 0x82CA5BAC;
	sub_82CA5018(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,248(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r8,252(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stw r11,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r11.u32);
	// stw r10,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r10.u32);
	// stw r9,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r9.u32);
	// stw r8,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r8.u32);
loc_82CA5BCC:
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// bne cr6,0x82ca5aa0
	if (!cr6.eq) goto loc_82CA5AA0;
loc_82CA5BD8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA5BE0"))) PPC_WEAK_FUNC(sub_82CA5BE0);
PPC_FUNC_IMPL(__imp__sub_82CA5BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CA5BE8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,160
	ctx.r24.s64 = 160;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// divw. r30,r11,r24
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// divw r9,r10,r24
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r24.s32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// beq 0x82ca5c40
	if (cr0.eq) goto loc_82CA5C40;
loc_82CA5C14:
	// divw r8,r28,r11
	ctx.r8.s32 = PPCDivide(ctx.r28.s32, ctx.r11.s32);
	// rotlwi r10,r28,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf. r10,r7,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andc r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// twllei r11,0
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// twlgei r5,-1
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82ca5c14
	if (!cr0.eq) goto loc_82CA5C14;
loc_82CA5C40:
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, xer);
	// bge cr6,0x82ca5ccc
	if (!cr6.lt) goto loc_82CA5CCC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x82ca5ccc
	if (!cr6.gt) goto loc_82CA5CCC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r25,r9,5,0,26
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82CA5C6C:
	// add r31,r27,r25
	ctx.r31.u64 = ctx.r27.u64 + ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// bne cr6,0x82ca5c80
	if (!cr6.eq) goto loc_82CA5C80;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82CA5C80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ca57e0
	ctx.lr = 0x82CA5C88;
	sub_82CA57E0(ctx, base);
	// subf r11,r31,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r31.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r11,r11,r24
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bge cr6,0x82ca5ca4
	if (!cr6.lt) goto loc_82CA5CA4;
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// b 0x82ca5cb8
	goto loc_82CA5CB8;
loc_82CA5CA4:
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82CA5CB8:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bne cr6,0x82ca5c80
	if (!cr6.eq) goto loc_82CA5C80;
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r27,r27,-160
	ctx.r27.s64 = ctx.r27.s64 + -160;
	// bgt 0x82ca5c6c
	if (cr0.gt) goto loc_82CA5C6C;
loc_82CA5CCC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA5CD4"))) PPC_WEAK_FUNC(sub_82CA5CD4);
PPC_FUNC_IMPL(__imp__sub_82CA5CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA5CD8"))) PPC_WEAK_FUNC(sub_82CA5CD8);
PPC_FUNC_IMPL(__imp__sub_82CA5CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA5CE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CA5D04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca5d1c
	if (cr6.eq) goto loc_82CA5D1C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca57e0
	ctx.lr = 0x82CA5D1C;
	sub_82CA57E0(ctx, base);
loc_82CA5D1C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82CA5D2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca5d44
	if (cr6.eq) goto loc_82CA5D44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca57e0
	ctx.lr = 0x82CA5D44;
	sub_82CA57E0(ctx, base);
loc_82CA5D44:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82CA5D54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca5d6c
	if (cr6.eq) goto loc_82CA5D6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca57e0
	ctx.lr = 0x82CA5D6C;
	sub_82CA57E0(ctx, base);
loc_82CA5D6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA5D74"))) PPC_WEAK_FUNC(sub_82CA5D74);
PPC_FUNC_IMPL(__imp__sub_82CA5D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA5D78"))) PPC_WEAK_FUNC(sub_82CA5D78);
PPC_FUNC_IMPL(__imp__sub_82CA5D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA5D80;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r4,-160
	ctx.r30.s64 = ctx.r4.s64 + -160;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82ad4478
	ctx.lr = 0x82CA5DA0;
	sub_82AD4478(ctx, base);
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r10,-12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// bl 0x82ca5018
	ctx.lr = 0x82CA5DCC;
	sub_82CA5018(ctx, base);
	// lwz r3,144(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// subf r11,r29,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r29.s64;
	// li r5,160
	ctx.r5.s64 = 160;
	// addi r4,r11,-160
	ctx.r4.s64 = ctx.r11.s64 + -160;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r3,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r3.u32);
	// divw r5,r4,r5
	ctx.r5.s32 = PPCDivide(ctx.r4.s32, ctx.r5.s32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,148(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// lwz r10,152(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// stw r10,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r10.u32);
	// lwz r9,156(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// stw r9,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r9.u32);
	// bl 0x82ca5898
	ctx.lr = 0x82CA5E10;
	sub_82CA5898(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA5E18"))) PPC_WEAK_FUNC(sub_82CA5E18);
PPC_FUNC_IMPL(__imp__sub_82CA5E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CA5E20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,160
	ctx.r10.s64 = 160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x82ca5ec0
	if (!cr6.gt) goto loc_82CA5EC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r31,r8,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r26,r7,6,0,25
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82ca5cd8
	ctx.lr = 0x82CA5E78;
	sub_82CA5CD8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x82ca5cd8
	ctx.lr = 0x82CA5E8C;
	sub_82CA5CD8(ctx, base);
	// subf r31,r31,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r31.s64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x82ca5cd8
	ctx.lr = 0x82CA5EA4;
	sub_82CA5CD8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca5cd8
	ctx.lr = 0x82CA5EB8;
	sub_82CA5CD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CA5EC0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca5cd8
	ctx.lr = 0x82CA5ECC;
	sub_82CA5CD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA5ED4"))) PPC_WEAK_FUNC(sub_82CA5ED4);
PPC_FUNC_IMPL(__imp__sub_82CA5ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA5ED8"))) PPC_WEAK_FUNC(sub_82CA5ED8);
PPC_FUNC_IMPL(__imp__sub_82CA5ED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA5EE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ca5f40
	if (cr6.eq) goto loc_82CA5F40;
	// addi r31,r3,148
	ctx.r31.s64 = ctx.r3.s64 + 148;
loc_82CA5EF8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ca5f2c
	if (cr6.eq) goto loc_82CA5F2C;
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ad4478
	ctx.lr = 0x82CA5F0C;
	sub_82AD4478(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r8.u32);
loc_82CA5F2C:
	// addi r31,r31,160
	ctx.r31.s64 = ctx.r31.s64 + 160;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// addi r11,r31,-148
	ctx.r11.s64 = ctx.r31.s64 + -148;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82ca5ef8
	if (!cr6.eq) goto loc_82CA5EF8;
loc_82CA5F40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA5F4C"))) PPC_WEAK_FUNC(sub_82CA5F4C);
PPC_FUNC_IMPL(__imp__sub_82CA5F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA5F50"))) PPC_WEAK_FUNC(sub_82CA5F50);
PPC_FUNC_IMPL(__imp__sub_82CA5F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA5F58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ca5fa0
	if (cr6.eq) goto loc_82CA5FA0;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82ca5fa0
	if (cr6.eq) goto loc_82CA5FA0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82ca5be0
	ctx.lr = 0x82CA5F84;
	sub_82CA5BE0(ctx, base);
	// li r10,160
	ctx.r10.s64 = 160;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// divw r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82CA5FA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA5FA8"))) PPC_WEAK_FUNC(sub_82CA5FA8);
PPC_FUNC_IMPL(__imp__sub_82CA5FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CA5FB0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,160
	ctx.r10.s64 = 160;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,-160
	ctx.r5.s64 = ctx.r5.s64 + -160;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ca5e18
	ctx.lr = 0x82CA5FF8;
	sub_82CA5E18(ctx, base);
	// addi r26,r31,160
	ctx.r26.s64 = ctx.r31.s64 + 160;
	// cmplw cr6,r25,r31
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, xer);
	// bge cr6,0x82ca604c
	if (!cr6.lt) goto loc_82CA604C;
loc_82CA6004:
	// addi r30,r31,-160
	ctx.r30.s64 = ctx.r31.s64 + -160;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82CA6018;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca604c
	if (!cr6.eq) goto loc_82CA604C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82CA6034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca604c
	if (!cr6.eq) goto loc_82CA604C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, xer);
	// blt cr6,0x82ca6004
	if (cr6.lt) goto loc_82CA6004;
loc_82CA604C:
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// bge cr6,0x82ca6098
	if (!cr6.lt) goto loc_82CA6098;
loc_82CA6054:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82CA6064;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca6098
	if (!cr6.eq) goto loc_82CA6098;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82CA6080;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca6098
	if (!cr6.eq) goto loc_82CA6098;
	// addi r26,r26,160
	ctx.r26.s64 = ctx.r26.s64 + 160;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// blt cr6,0x82ca6054
	if (cr6.lt) goto loc_82CA6054;
loc_82CA6098:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82CA60A0:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bge cr6,0x82ca60fc
	if (!cr6.lt) goto loc_82CA60FC;
loc_82CA60A8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82CA60B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca60f0
	if (!cr6.eq) goto loc_82CA60F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82CA60D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca60fc
	if (!cr6.eq) goto loc_82CA60FC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r26,r26,160
	ctx.r26.s64 = ctx.r26.s64 + 160;
	// bl 0x82ca57e0
	ctx.lr = 0x82CA60F0;
	sub_82CA57E0(ctx, base);
loc_82CA60F0:
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// blt cr6,0x82ca60a8
	if (cr6.lt) goto loc_82CA60A8;
loc_82CA60FC:
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// ble cr6,0x82ca6164
	if (!cr6.gt) goto loc_82CA6164;
	// addi r30,r27,-160
	ctx.r30.s64 = ctx.r27.s64 + -160;
loc_82CA6108:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82CA6118;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca6150
	if (!cr6.eq) goto loc_82CA6150;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82CA6134;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca6160
	if (!cr6.eq) goto loc_82CA6160;
	// addi r31,r31,-160
	ctx.r31.s64 = ctx.r31.s64 + -160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca57e0
	ctx.lr = 0x82CA6150;
	sub_82CA57E0(ctx, base);
loc_82CA6150:
	// addi r27,r27,-160
	ctx.r27.s64 = ctx.r27.s64 + -160;
	// addi r30,r30,-160
	ctx.r30.s64 = ctx.r30.s64 + -160;
	// cmplw cr6,r25,r27
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, xer);
	// blt cr6,0x82ca6108
	if (cr6.lt) goto loc_82CA6108;
loc_82CA6160:
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
loc_82CA6164:
	// bne cr6,0x82ca61a0
	if (!cr6.eq) goto loc_82CA61A0;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// beq cr6,0x82ca61ec
	if (cr6.eq) goto loc_82CA61EC;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, xer);
	// beq cr6,0x82ca6184
	if (cr6.eq) goto loc_82CA6184;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca57e0
	ctx.lr = 0x82CA6184;
	sub_82CA57E0(ctx, base);
loc_82CA6184:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r26,160
	ctx.r26.s64 = ctx.r26.s64 + 160;
	// addi r31,r31,160
	ctx.r31.s64 = ctx.r31.s64 + 160;
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// bl 0x82ca57e0
	ctx.lr = 0x82CA619C;
	sub_82CA57E0(ctx, base);
	// b 0x82ca60a0
	goto loc_82CA60A0;
loc_82CA61A0:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// addi r27,r27,-160
	ctx.r27.s64 = ctx.r27.s64 + -160;
	// bne cr6,0x82ca61d8
	if (!cr6.eq) goto loc_82CA61D8;
	// addi r31,r31,-160
	ctx.r31.s64 = ctx.r31.s64 + -160;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, xer);
	// beq cr6,0x82ca61c4
	if (cr6.eq) goto loc_82CA61C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca57e0
	ctx.lr = 0x82CA61C4;
	sub_82CA57E0(ctx, base);
loc_82CA61C4:
	// addi r26,r26,-160
	ctx.r26.s64 = ctx.r26.s64 + -160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82ca57e0
	ctx.lr = 0x82CA61D4;
	sub_82CA57E0(ctx, base);
	// b 0x82ca60a0
	goto loc_82CA60A0;
loc_82CA61D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82ca57e0
	ctx.lr = 0x82CA61E4;
	sub_82CA57E0(ctx, base);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// b 0x82ca60a0
	goto loc_82CA60A0;
loc_82CA61EC:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r26,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA6200"))) PPC_WEAK_FUNC(sub_82CA6200);
PPC_FUNC_IMPL(__imp__sub_82CA6200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CA6208;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,160
	ctx.r27.s64 = 160;
	// subf r30,r3,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r11,r30,r27
	ctx.r11.s32 = PPCDivide(ctx.r30.s32, ctx.r27.s32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82ca6254
	if (!cr6.gt) goto loc_82CA6254;
loc_82CA622C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca5d78
	ctx.lr = 0x82CA6240;
	sub_82CA5D78(ctx, base);
	// addi r30,r30,-160
	ctx.r30.s64 = ctx.r30.s64 + -160;
	// addi r31,r31,-160
	ctx.r31.s64 = ctx.r31.s64 + -160;
	// divw r11,r30,r27
	ctx.r11.s32 = PPCDivide(ctx.r30.s32, ctx.r27.s32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bgt cr6,0x82ca622c
	if (cr6.gt) goto loc_82CA622C;
loc_82CA6254:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA625C"))) PPC_WEAK_FUNC(sub_82CA625C);
PPC_FUNC_IMPL(__imp__sub_82CA625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6260"))) PPC_WEAK_FUNC(sub_82CA6260);
PPC_FUNC_IMPL(__imp__sub_82CA6260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CA6268;
	__savegprlr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA629C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ca62e0
	if (cr6.eq) goto loc_82CA62E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca4fb0
	ctx.lr = 0x82CA62B0;
	sub_82CA4FB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca62d0
	if (cr6.eq) goto loc_82CA62D0;
	// ori r4,r4,548
	ctx.r4.u64 = ctx.r4.u64 | 548;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04220
	ctx.lr = 0x82CA62CC;
	sub_82D04220(ctx, base);
	// b 0x82ca63ac
	goto loc_82CA63AC;
loc_82CA62D0:
	// ori r4,r4,149
	ctx.r4.u64 = ctx.r4.u64 | 149;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04220
	ctx.lr = 0x82CA62DC;
	sub_82D04220(ctx, base);
	// b 0x82ca63ac
	goto loc_82CA63AC;
loc_82CA62E0:
	// lwz r28,1424(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// li r10,160
	ctx.r10.s64 = 160;
	// lwz r9,1428(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// lwz r11,1404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1404);
	// subf r8,r28,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r28.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x82ca6334
	if (cr6.lt) goto loc_82CA6334;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CA6320;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA6328;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CA6334:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r30,r11,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x831156e8
	ctx.lr = 0x82CA6344;
	sub_831156E8(ctx, base);
	// lwzx r10,r30,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// sth r29,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r29.u16);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x8311bf98
	ctx.lr = 0x82CA635C;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82CA636C;
	sub_831CE980(ctx, base);
	// lbz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 200);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ca6398
	if (!cr6.eq) goto loc_82CA6398;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292a3f8
	ctx.lr = 0x82CA6384;
	sub_8292A3F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA638C;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CA6398:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// ori r4,r4,156
	ctx.r4.u64 = ctx.r4.u64 | 156;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CA63AC;
	sub_82D042A8(ctx, base);
loc_82CA63AC:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CA63CC;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ca63ec
	if (cr6.lt) goto loc_82CA63EC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CA63EC;
	sub_825952B8(ctx, base);
loc_82CA63EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA63F8"))) PPC_WEAK_FUNC(sub_82CA63F8);
PPC_FUNC_IMPL(__imp__sub_82CA63F8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// bl 0x82d86078
	ctx.lr = 0x82CA6428;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca644c
	if (cr6.eq) goto loc_82CA644C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA6438;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CA643C;
	sub_83102DB0(ctx, base);
	// bl 0x82d99fa0
	ctx.lr = 0x82CA6440;
	sub_82D99FA0(ctx, base);
	// cmplwi cr6,r3,250
	cr6.compare<uint32_t>(ctx.r3.u32, 250, xer);
	// bge cr6,0x82ca644c
	if (!cr6.lt) goto loc_82CA644C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CA644C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca6464
	if (cr6.eq) goto loc_82CA6464;
	// ori r4,r4,548
	ctx.r4.u64 = ctx.r4.u64 | 548;
	// b 0x82ca6468
	goto loc_82CA6468;
loc_82CA6464:
	// ori r4,r4,149
	ctx.r4.u64 = ctx.r4.u64 | 149;
loc_82CA6468:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d04220
	ctx.lr = 0x82CA6470;
	sub_82D04220(ctx, base);
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

__attribute__((alias("__imp__sub_82CA648C"))) PPC_WEAK_FUNC(sub_82CA648C);
PPC_FUNC_IMPL(__imp__sub_82CA648C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6490"))) PPC_WEAK_FUNC(sub_82CA6490);
PPC_FUNC_IMPL(__imp__sub_82CA6490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CA6498;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,160
	ctx.r25.s64 = 160;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82ca654c
	if (!cr6.gt) goto loc_82CA654C;
loc_82CA64C0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82ca6570
	if (!cr6.gt) goto loc_82CA6570;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca5fa8
	ctx.lr = 0x82CA64DC;
	sub_82CA5FA8(ctx, base);
	// srawi r11,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// divw r7,r9,r25
	ctx.r7.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// divw r6,r8,r25
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r25.s32);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x82ca652c
	if (!cr6.lt) goto loc_82CA652C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca6490
	ctx.lr = 0x82CA6524;
	sub_82CA6490(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82ca653c
	goto loc_82CA653C;
loc_82CA652C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca6490
	ctx.lr = 0x82CA6538;
	sub_82CA6490(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82CA653C:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82ca64c0
	if (cr6.gt) goto loc_82CA64C0;
loc_82CA654C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82ca6568
	if (!cr6.gt) goto loc_82CA6568;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca5a70
	ctx.lr = 0x82CA6568;
	sub_82CA5A70(ctx, base);
loc_82CA6568:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82CA6570:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82ca654c
	if (!cr6.gt) goto loc_82CA654C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82ca6598
	if (!cr6.gt) goto loc_82CA6598;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca59d0
	ctx.lr = 0x82CA6598;
	sub_82CA59D0(ctx, base);
loc_82CA6598:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca6200
	ctx.lr = 0x82CA65A8;
	sub_82CA6200(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA65B0"))) PPC_WEAK_FUNC(sub_82CA65B0);
PPC_FUNC_IMPL(__imp__sub_82CA65B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82CA65B8;
	__savegprlr_19(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r30,r10,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ca6618
	if (cr6.eq) goto loc_82CA6618;
	// clrlwi r29,r6,24
	ctx.r29.u64 = ctx.r6.u32 & 0xFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82CA6600;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CA6610;
	sub_82D2AEC8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82ca6910
	if (!cr6.eq) goto loc_82CA6910;
loc_82CA6618:
	// lwz r11,1428(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1428);
	// li r10,160
	ctx.r10.s64 = 160;
	// lwz r9,1424(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1424);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, xer);
	// bge cr6,0x82ca6910
	if (!cr6.lt) goto loc_82CA6910;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CA664C;
	sub_831156E8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// sth r27,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r27.u16);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8311bf98
	ctx.lr = 0x82CA6668;
	sub_8311BF98(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// li r22,12
	ctx.r22.s64 = 12;
	// li r23,13
	ctx.r23.s64 = 13;
	// li r19,90
	ctx.r19.s64 = 90;
	// addi r24,r11,4659
	ctx.r24.s64 = ctx.r11.s64 + 4659;
loc_82CA6684:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r31,r10,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ca6904
	if (cr6.eq) goto loc_82CA6904;
	// cmplwi cr6,r26,8
	cr6.compare<uint32_t>(ctx.r26.u32, 8, xer);
	// bgt cr6,0x82ca6904
	if (cr6.gt) goto loc_82CA6904;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ca66f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA66F4;
	// bdzf 4*cr6+eq,0x82ca671c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA671C;
	// bdzf 4*cr6+eq,0x82ca676c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA676C;
	// bdzf 4*cr6+eq,0x82ca6830
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA6830;
	// bdzf 4*cr6+eq,0x82ca687c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA687C;
	// bdzf 4*cr6+eq,0x82ca6884
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA6884;
	// bdzf 4*cr6+eq,0x82ca688c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA688C;
	// bne cr6,0x82ca68f0
	if (!cr6.eq) goto loc_82CA68F0;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83120738
	ctx.lr = 0x82CA66E4;
	sub_83120738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d39310
	ctx.lr = 0x82CA66F0;
	sub_82D39310(ctx, base);
	// b 0x82ca6904
	goto loc_82CA6904;
loc_82CA66F4:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d8c868
	ctx.lr = 0x82CA6700;
	sub_82D8C868(ctx, base);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA6718;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ca6904
	goto loc_82CA6904;
loc_82CA671C:
	// bl 0x82d86078
	ctx.lr = 0x82CA6720;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA6728;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CA672C;
	sub_83102DB0(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d9a868
	ctx.lr = 0x82CA6734;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82ca6760
	if (cr6.eq) goto loc_82CA6760;
	// addi r4,r24,385
	ctx.r4.s64 = ctx.r24.s64 + 385;
	// bctrl 
	ctx.lr = 0x82CA675C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ca6904
	goto loc_82CA6904;
loc_82CA6760:
	// addi r4,r24,405
	ctx.r4.s64 = ctx.r24.s64 + 405;
	// bctrl 
	ctx.lr = 0x82CA6768;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ca6904
	goto loc_82CA6904;
loc_82CA676C:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d459d0
	ctx.lr = 0x82CA6780;
	sub_82D459D0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r27,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r27.u16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82CA6790;
	sub_831156E8(ctx, base);
	// ld r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82CA67A0;
	sub_8311BF98(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831235b8
	ctx.lr = 0x82CA67B8;
	sub_831235B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CA67C4;
	sub_83102DB0(ctx, base);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83179518
	ctx.lr = 0x82CA67DC;
	sub_83179518(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca67f0
	if (cr6.eq) goto loc_82CA67F0;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
loc_82CA67F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d45c08
	ctx.lr = 0x82CA67F8;
	sub_82D45C08(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d8bf78
	ctx.lr = 0x82CA6800;
	sub_82D8BF78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d45370
	ctx.lr = 0x82CA680C;
	sub_82D45370(ctx, base);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x82CA6820;
	sub_83120738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d45a28
	ctx.lr = 0x82CA682C;
	sub_82D45A28(ctx, base);
	// b 0x82ca6904
	goto loc_82CA6904;
loc_82CA6830:
	// bl 0x831156e8
	ctx.lr = 0x82CA6834;
	sub_831156E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r27,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r27.u16);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x8311bf98
	ctx.lr = 0x82CA684C;
	sub_8311BF98(ctx, base);
	// addic. r4,r3,56
	xer.ca = ctx.r3.u32 > 4294967239;
	ctx.r4.s64 = ctx.r3.s64 + 56;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82ca6904
	if (cr0.eq) goto loc_82CA6904;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CA685C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CA6870;
	sub_82D291E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA6878;
	sub_8387E8E0(ctx, base);
	// b 0x82ca6904
	goto loc_82CA6904;
loc_82CA687C:
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// b 0x82ca68fc
	goto loc_82CA68FC;
loc_82CA6884:
	// lwz r4,148(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// b 0x82ca68fc
	goto loc_82CA68FC;
loc_82CA688C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CA6898;
	sub_837B0C10(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// ori r4,r4,500
	ctx.r4.u64 = ctx.r4.u64 | 500;
	// bl 0x82d042a8
	ctx.lr = 0x82CA68AC;
	sub_82D042A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ca68c0
	if (!cr6.lt) goto loc_82CA68C0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CA68C0:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82CA68C8;
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
	ctx.lr = 0x82CA68DC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA68E4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA68EC;
	sub_8387E8E0(ctx, base);
	// b 0x82ca6904
	goto loc_82CA6904;
loc_82CA68F0:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// divwu r10,r11,r19
	ctx.r10.u32 = PPCDivide(ctx.r11.u32, ctx.r19.u32);
	// clrldi r4,r10,32
	ctx.r4.u64 = ctx.r10.u64 & 0xFFFFFFFF;
loc_82CA68FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CA6904;
	sub_82D294D0(ctx, base);
loc_82CA6904:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,9
	cr6.compare<uint32_t>(ctx.r26.u32, 9, xer);
	// blt cr6,0x82ca6684
	if (cr6.lt) goto loc_82CA6684;
loc_82CA6910:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA6918"))) PPC_WEAK_FUNC(sub_82CA6918);
PPC_FUNC_IMPL(__imp__sub_82CA6918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CA6920;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,160
	ctx.r25.s64 = 160;
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// divw. r29,r11,r25
	ctx.r29.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x82ca6a90
	if (cr0.eq) goto loc_82CA6A90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,409
	ctx.r10.s64 = 26804224;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,39321
	ctx.r9.u64 = ctx.r10.u64 | 39321;
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	// divw r10,r8,r25
	ctx.r10.s32 = PPCDivide(ctx.r8.s32, ctx.r25.s32);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// bge cr6,0x82ca6974
	if (!cr6.lt) goto loc_82CA6974;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82CA6974;
	sub_831CC150(ctx, base);
loc_82CA6974:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r25
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r25.s32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bge cr6,0x82ca6a54
	if (!cr6.lt) goto loc_82CA6A54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca55b8
	ctx.lr = 0x82CA6994;
	sub_82CA55B8(ctx, base);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca5608
	ctx.lr = 0x82CA69A8;
	sub_82CA5608(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ca5ed8
	ctx.lr = 0x82CA69CC;
	sub_82CA5ED8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ca5ed8
	ctx.lr = 0x82CA69E4;
	sub_82CA5ED8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ca5ed8
	ctx.lr = 0x82CA6A00;
	sub_82CA5ED8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// divw r11,r9,r25
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x82ca6a20
	if (cr6.eq) goto loc_82CA6A20;
	// bl 0x82416268
	ctx.lr = 0x82CA6A20;
	sub_82416268(ctx, base);
loc_82CA6A20:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82CA6A54:
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ca5ed8
	ctx.lr = 0x82CA6A68;
	sub_82CA5ED8(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r30,r11,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r30,r4
	ctx.r5.u64 = ctx.r30.u64 + ctx.r4.u64;
	// bl 0x82ca5f50
	ctx.lr = 0x82CA6A84;
	sub_82CA5F50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82CA6A90:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA6A98"))) PPC_WEAK_FUNC(sub_82CA6A98);
PPC_FUNC_IMPL(__imp__sub_82CA6A98) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,5256
	ctx.r9.s64 = ctx.r11.s64 + 5256;
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
	// lwz r3,1424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1424);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca6adc
	if (cr6.eq) goto loc_82CA6ADC;
	// bl 0x82416268
	ctx.lr = 0x82CA6ADC;
	sub_82416268(ctx, base);
loc_82CA6ADC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// bl 0x82cf6930
	ctx.lr = 0x82CA6AF4;
	sub_82CF6930(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca6b0c
	if (cr6.eq) goto loc_82CA6B0C;
	// bl 0x82416268
	ctx.lr = 0x82CA6B08;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CA6B0C:
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

__attribute__((alias("__imp__sub_82CA6B24"))) PPC_WEAK_FUNC(sub_82CA6B24);
PPC_FUNC_IMPL(__imp__sub_82CA6B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6B28"))) PPC_WEAK_FUNC(sub_82CA6B28);
PPC_FUNC_IMPL(__imp__sub_82CA6B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,4876
	ctx.r8.s64 = ctx.r11.s64 + 4876;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82CA6B48:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r6,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca6b68
	if (cr6.eq) goto loc_82CA6B68;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// beq cr6,0x82ca6b7c
	if (cr6.eq) goto loc_82CA6B7C;
loc_82CA6B68:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// blt cr6,0x82ca6b48
	if (cr6.lt) goto loc_82CA6B48;
	// blr 
	return;
loc_82CA6B7C:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82ca65b0
	sub_82CA65B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA6B8C"))) PPC_WEAK_FUNC(sub_82CA6B8C);
PPC_FUNC_IMPL(__imp__sub_82CA6B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6B90"))) PPC_WEAK_FUNC(sub_82CA6B90);
PPC_FUNC_IMPL(__imp__sub_82CA6B90) {
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
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x82ca6bb8
	if (cr6.lt) goto loc_82CA6BB8;
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
loc_82CA6BB8:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,1428(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1428);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r3,1424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1424);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r8,r10,5608
	ctx.r8.s64 = ctx.r10.s64 + 5608;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r3,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r5,160
	ctx.r5.s64 = 160;
	// divw r5,r6,r5
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r5.s32);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x82ca6490
	ctx.lr = 0x82CA6BE8;
	sub_82CA6490(ctx, base);
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

__attribute__((alias("__imp__sub_82CA6BFC"))) PPC_WEAK_FUNC(sub_82CA6BFC);
PPC_FUNC_IMPL(__imp__sub_82CA6BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6C00"))) PPC_WEAK_FUNC(sub_82CA6C00);
PPC_FUNC_IMPL(__imp__sub_82CA6C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA6C08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,20
	ctx.r9.u64 = ctx.r11.u64 | 20;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ca6ce0
	if (!cr6.eq) goto loc_82CA6CE0;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ca6ce0
	if (!cr6.eq) goto loc_82CA6CE0;
	// lwz r10,1408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca6ce0
	if (cr6.eq) goto loc_82CA6CE0;
	// lwz r29,120(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82ca6c54
	if (cr6.lt) goto loc_82CA6C54;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// blt cr6,0x82ca6c58
	if (cr6.lt) goto loc_82CA6C58;
loc_82CA6C54:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CA6C58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca6ce0
	if (cr6.eq) goto loc_82CA6CE0;
	// lwz r30,124(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82ca6c7c
	if (cr6.lt) goto loc_82CA6C7C;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82ca6c80
	if (cr6.lt) goto loc_82CA6C80;
loc_82CA6C7C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CA6C80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca6ce0
	if (cr6.eq) goto loc_82CA6CE0;
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82ca6ca4
	if (!cr6.eq) goto loc_82CA6CA4;
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x82ca6cdc
	if (cr6.eq) goto loc_82CA6CDC;
loc_82CA6CA4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca6b90
	ctx.lr = 0x82CA6CB4;
	sub_82CA6B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca6ce0
	if (cr6.eq) goto loc_82CA6CE0;
	// stw r29,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA6CDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CA6CDC:
	// stw r28,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r28.u32);
loc_82CA6CE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA6CEC"))) PPC_WEAK_FUNC(sub_82CA6CEC);
PPC_FUNC_IMPL(__imp__sub_82CA6CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA6CF0"))) PPC_WEAK_FUNC(sub_82CA6CF0);
PPC_FUNC_IMPL(__imp__sub_82CA6CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CA6CF8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA6D0C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca6e10
	if (cr6.eq) goto loc_82CA6E10;
	// lwz r28,116(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8332f198
	ctx.lr = 0x82CA6D20;
	sub_8332F198(ctx, base);
	// bl 0x82d9c120
	ctx.lr = 0x82CA6D24;
	sub_82D9C120(ctx, base);
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// blt cr6,0x82ca6d40
	if (cr6.lt) goto loc_82CA6D40;
	// stw r29,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r29.u32);
loc_82CA6D40:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// stw r11,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r11.u32);
	// blt cr6,0x82ca6d54
	if (cr6.lt) goto loc_82CA6D54;
	// stw r29,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r29.u32);
loc_82CA6D54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1444(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwz r4,1440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// bl 0x82ca6b90
	ctx.lr = 0x82CA6D64;
	sub_82CA6B90(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA6D78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r29.u32);
	// bl 0x82dab6d0
	ctx.lr = 0x82CA6D88;
	sub_82DAB6D0(ctx, base);
	// lwz r9,1424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// lwz r8,1428(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// li r25,160
	ctx.r25.s64 = 160;
	// addi r30,r31,1424
	ctx.r30.s64 = ctx.r31.s64 + 1424;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// divw. r6,r7,r25
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r25.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82ca6df4
	if (cr0.eq) goto loc_82CA6DF4;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82CA6DAC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825832e0
	ctx.lr = 0x82CA6DB8;
	sub_825832E0(ctx, base);
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x82ca6de8
	if (cr6.eq) goto loc_82CA6DE8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,160
	ctx.r28.s64 = ctx.r28.s64 + 160;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r25
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ca6dac
	if (cr6.lt) goto loc_82CA6DAC;
	// b 0x82ca6df4
	goto loc_82CA6DF4;
loc_82CA6DE8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x82ca6df8
	if (!cr6.eq) goto loc_82CA6DF8;
loc_82CA6DF4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_82CA6DF8:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1fca8
	ctx.lr = 0x82CA6E04;
	sub_82D1FCA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CA6E0C;
	sub_82D1C1A8(ctx, base);
	// stw r3,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r3.u32);
loc_82CA6E10:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA6E18"))) PPC_WEAK_FUNC(sub_82CA6E18);
PPC_FUNC_IMPL(__imp__sub_82CA6E18) {
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
	ctx.lr = 0x82CA6E20;
	__savegprlr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r24,r3,1424
	ctx.r24.s64 = ctx.r3.s64 + 1424;
	// addi r25,r11,4876
	ctx.r25.s64 = ctx.r11.s64 + 4876;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// rlwinm r17,r10,5,0,26
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// li r14,5
	ctx.r14.s64 = 5;
	// li r16,160
	ctx.r16.s64 = 160;
	// li r15,-1
	ctx.r15.s64 = -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r18,12
	ctx.r18.s64 = 12;
	// li r19,13
	ctx.r19.s64 = 13;
	// addi r20,r11,4659
	ctx.r20.s64 = ctx.r11.s64 + 4659;
loc_82CA6E64:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r8,r11,23
	ctx.r8.s64 = ctx.r11.s64 + 23;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// divw r5,r7,r16
	ctx.r5.s32 = PPCDivide(ctx.r7.s32, ctx.r16.s32);
	// subfc r11,r5,r21
	xer.ca = ctx.r21.u32 >= ctx.r5.u32;
	ctx.r11.s64 = ctx.r21.s64 - ctx.r5.s64;
	// lwzx r31,r6,r23
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// subfze r11,r15
	temp.u8 = ~ctx.r15.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r15.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ca6ecc
	if (cr6.eq) goto loc_82CA6ECC;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82CA6EB4;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CA6EC4;
	sub_82D2AEC8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82ca71a0
	if (!cr6.eq) goto loc_82CA71A0;
loc_82CA6ECC:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r16
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r16.s32);
	// cmplw cr6,r21,r8
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r8.u32, xer);
	// bge cr6,0x82ca71a0
	if (!cr6.lt) goto loc_82CA71A0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r30,r17,r11
	ctx.r30.u64 = ctx.r17.u64 + ctx.r11.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CA6EF0;
	sub_831156E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r26,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r26.u16);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8311bf98
	ctx.lr = 0x82CA6F08;
	sub_8311BF98(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82CA6F10:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r31,r10,r23
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ca7194
	if (cr6.eq) goto loc_82CA7194;
	// cmplwi cr6,r27,8
	cr6.compare<uint32_t>(ctx.r27.u32, 8, xer);
	// bgt cr6,0x82ca7194
	if (cr6.gt) goto loc_82CA7194;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ca6f80
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA6F80;
	// bdzf 4*cr6+eq,0x82ca6fa8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA6FA8;
	// bdzf 4*cr6+eq,0x82ca6ff8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA6FF8;
	// bdzf 4*cr6+eq,0x82ca70bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA70BC;
	// bdzf 4*cr6+eq,0x82ca7108
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA7108;
	// bdzf 4*cr6+eq,0x82ca7110
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA7110;
	// bdzf 4*cr6+eq,0x82ca7118
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA7118;
	// bne cr6,0x82ca717c
	if (!cr6.eq) goto loc_82CA717C;
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83120738
	ctx.lr = 0x82CA6F70;
	sub_83120738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d39310
	ctx.lr = 0x82CA6F7C;
	sub_82D39310(ctx, base);
	// b 0x82ca7194
	goto loc_82CA7194;
loc_82CA6F80:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d8c868
	ctx.lr = 0x82CA6F8C;
	sub_82D8C868(ctx, base);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CA6FA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ca7194
	goto loc_82CA7194;
loc_82CA6FA8:
	// bl 0x82d86078
	ctx.lr = 0x82CA6FAC;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA6FB4;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CA6FB8;
	sub_83102DB0(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d9a868
	ctx.lr = 0x82CA6FC0;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82ca6fec
	if (cr6.eq) goto loc_82CA6FEC;
	// addi r4,r20,385
	ctx.r4.s64 = ctx.r20.s64 + 385;
	// bctrl 
	ctx.lr = 0x82CA6FE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ca7194
	goto loc_82CA7194;
loc_82CA6FEC:
	// addi r4,r20,405
	ctx.r4.s64 = ctx.r20.s64 + 405;
	// bctrl 
	ctx.lr = 0x82CA6FF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ca7194
	goto loc_82CA7194;
loc_82CA6FF8:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d459d0
	ctx.lr = 0x82CA700C;
	sub_82D459D0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r26,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r26.u16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82CA701C;
	sub_831156E8(ctx, base);
	// ld r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82CA702C;
	sub_8311BF98(ctx, base);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x831235b8
	ctx.lr = 0x82CA7044;
	sub_831235B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CA7050;
	sub_83102DB0(ctx, base);
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83179518
	ctx.lr = 0x82CA7068;
	sub_83179518(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca707c
	if (cr6.eq) goto loc_82CA707C;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
loc_82CA707C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d45c08
	ctx.lr = 0x82CA7084;
	sub_82D45C08(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d8bf78
	ctx.lr = 0x82CA708C;
	sub_82D8BF78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d45370
	ctx.lr = 0x82CA7098;
	sub_82D45370(ctx, base);
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x82CA70AC;
	sub_83120738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d45a28
	ctx.lr = 0x82CA70B8;
	sub_82D45A28(ctx, base);
	// b 0x82ca7194
	goto loc_82CA7194;
loc_82CA70BC:
	// bl 0x831156e8
	ctx.lr = 0x82CA70C0;
	sub_831156E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r26,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r26.u16);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x8311bf98
	ctx.lr = 0x82CA70D8;
	sub_8311BF98(ctx, base);
	// addic. r4,r3,56
	xer.ca = ctx.r3.u32 > 4294967239;
	ctx.r4.s64 = ctx.r3.s64 + 56;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82ca7194
	if (cr0.eq) goto loc_82CA7194;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CA70E8;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CA70FC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA7104;
	sub_8387E8E0(ctx, base);
	// b 0x82ca7194
	goto loc_82CA7194;
loc_82CA7108:
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// b 0x82ca718c
	goto loc_82CA718C;
loc_82CA7110:
	// lwz r4,148(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// b 0x82ca718c
	goto loc_82CA718C;
loc_82CA7118:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CA7124;
	sub_837B0C10(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// ori r4,r4,500
	ctx.r4.u64 = ctx.r4.u64 | 500;
	// bl 0x82d042a8
	ctx.lr = 0x82CA7138;
	sub_82D042A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ca714c
	if (!cr6.lt) goto loc_82CA714C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CA714C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82CA7154;
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
	ctx.lr = 0x82CA7168;
	sub_82D291E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA7170;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA7178;
	sub_8387E8E0(ctx, base);
	// b 0x82ca7194
	goto loc_82CA7194;
loc_82CA717C:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r10,90
	ctx.r10.s64 = 90;
	// divwu r9,r11,r10
	ctx.r9.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// clrldi r4,r9,32
	ctx.r4.u64 = ctx.r9.u64 & 0xFFFFFFFF;
loc_82CA718C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CA7194;
	sub_82D294D0(ctx, base);
loc_82CA7194:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,9
	cr6.compare<uint32_t>(ctx.r27.u32, 9, xer);
	// blt cr6,0x82ca6f10
	if (cr6.lt) goto loc_82CA6F10;
loc_82CA71A0:
	// addic. r14,r14,-1
	xer.ca = ctx.r14.u32 > 0;
	ctx.r14.s64 = ctx.r14.s64 + -1;
	cr0.compare<int32_t>(ctx.r14.s32, 0, xer);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r17,r17,160
	ctx.r17.s64 = ctx.r17.s64 + 160;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// bne 0x82ca6e64
	if (!cr0.eq) goto loc_82CA6E64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA71BC"))) PPC_WEAK_FUNC(sub_82CA71BC);
PPC_FUNC_IMPL(__imp__sub_82CA71BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA71C0"))) PPC_WEAK_FUNC(sub_82CA71C0);
PPC_FUNC_IMPL(__imp__sub_82CA71C0) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cf69b0
	ctx.lr = 0x82CA71E8;
	sub_82CF69B0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r30,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
	// addi r9,r11,5256
	ctx.r9.s64 = ctx.r11.s64 + 5256;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r30,r31,1424
	ctx.r30.s64 = ctx.r31.s64 + 1424;
	// stw r11,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// lwz r7,1420(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// stw r11,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r11.u32);
	// bne cr6,0x82ca7240
	if (!cr6.eq) goto loc_82CA7240;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,386
	ctx.r4.u64 = ctx.r4.u64 | 386;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21730
	ctx.lr = 0x82CA7240;
	sub_82D21730(ctx, base);
loc_82CA7240:
	// bl 0x82d86078
	ctx.lr = 0x82CA7244;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca72b0
	if (cr6.eq) goto loc_82CA72B0;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82CA7254;
	sub_8332F198(ctx, base);
	// bl 0x82d9c120
	ctx.lr = 0x82CA7258;
	sub_82D9C120(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CA725C;
	sub_83102DB0(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x82ca72b0
	if (cr6.eq) goto loc_82CA72B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ca6918
	ctx.lr = 0x82CA727C;
	sub_82CA6918(ctx, base);
	// lwz r4,1428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r10,160
	ctx.r10.s64 = 160;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r5,r9,r10
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	// lwz r6,5608(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5608);
	// bl 0x82ca6490
	ctx.lr = 0x82CA729C;
	sub_82CA6490(ctx, base);
	// lis r5,29
	ctx.r5.s64 = 1900544;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,252
	ctx.r5.u64 = ctx.r5.u64 | 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82CA72B0;
	sub_82D20EB8(ctx, base);
loc_82CA72B0:
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

__attribute__((alias("__imp__sub_82CA72CC"))) PPC_WEAK_FUNC(sub_82CA72CC);
PPC_FUNC_IMPL(__imp__sub_82CA72CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA72D0"))) PPC_WEAK_FUNC(sub_82CA72D0);
PPC_FUNC_IMPL(__imp__sub_82CA72D0) {
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
	// blt cr6,0x82ca72f8
	if (cr6.lt) goto loc_82CA72F8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca72fc
	goto loc_82CA72FC;
loc_82CA72F8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA72FC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1448
	ctx.r4.s64 = 1448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CA7318;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca7338
	if (cr6.eq) goto loc_82CA7338;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca71c0
	ctx.lr = 0x82CA7330;
	sub_82CA71C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca733c
	if (!cr6.eq) goto loc_82CA733C;
loc_82CA7338:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA733C:
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

__attribute__((alias("__imp__sub_82CA7354"))) PPC_WEAK_FUNC(sub_82CA7354);
PPC_FUNC_IMPL(__imp__sub_82CA7354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA7358"))) PPC_WEAK_FUNC(sub_82CA7358);
PPC_FUNC_IMPL(__imp__sub_82CA7358) {
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
	// blt cr6,0x82ca7380
	if (cr6.lt) goto loc_82CA7380;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca7384
	goto loc_82CA7384;
loc_82CA7380:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA7384:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1448
	ctx.r4.s64 = 1448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CA73A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca73c0
	if (cr6.eq) goto loc_82CA73C0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca71c0
	ctx.lr = 0x82CA73B8;
	sub_82CA71C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca73c4
	if (!cr6.eq) goto loc_82CA73C4;
loc_82CA73C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA73C4:
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

__attribute__((alias("__imp__sub_82CA73DC"))) PPC_WEAK_FUNC(sub_82CA73DC);
PPC_FUNC_IMPL(__imp__sub_82CA73DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA73E0"))) PPC_WEAK_FUNC(sub_82CA73E0);
PPC_FUNC_IMPL(__imp__sub_82CA73E0) {
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
	// lwz r3,200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca7444
	if (cr6.eq) goto loc_82CA7444;
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ca742c
	if (cr6.eq) goto loc_82CA742C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r11,r9,5004
	ctx.r11.s64 = ctx.r9.s64 + 5004;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x82ca7440
	goto loc_82CA7440;
loc_82CA742C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r4,r10,5004
	ctx.r4.s64 = ctx.r10.s64 + 5004;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82CA7440:
	// bctrl 
	ctx.lr = 0x82CA7444;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CA7444:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r11.u32);
	// bl 0x82ca5528
	ctx.lr = 0x82CA7454;
	sub_82CA5528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca4ee0
	ctx.lr = 0x82CA745C;
	sub_82CA4EE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// bl 0x82ca6e18
	ctx.lr = 0x82CA7468;
	sub_82CA6E18(ctx, base);
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

__attribute__((alias("__imp__sub_82CA7480"))) PPC_WEAK_FUNC(sub_82CA7480);
PPC_FUNC_IMPL(__imp__sub_82CA7480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CA7488;
	__savegprlr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,40
	ctx.r10.s64 = 2621440;
	// lis r9,51
	ctx.r9.s64 = 3342336;
	// lis r8,51
	ctx.r8.s64 = 3342336;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// ori r7,r10,102
	ctx.r7.u64 = ctx.r10.u64 | 102;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// ori r5,r9,109
	ctx.r5.u64 = ctx.r9.u64 | 109;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// ori r4,r8,110
	ctx.r4.u64 = ctx.r8.u64 | 110;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r6,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r6.u8);
	// addi r30,r11,5084
	ctx.r30.s64 = ctx.r11.s64 + 5084;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r29,4
	ctx.r29.s64 = 4;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
loc_82CA74F8:
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d04220
	ctx.lr = 0x82CA7510;
	sub_82D04220(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x8291fdc8
	ctx.lr = 0x82CA751C;
	sub_8291FDC8(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ca7538
	if (cr6.lt) goto loc_82CA7538;
	// stw r26,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r26.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82CA7538;
	sub_825952B8(ctx, base);
loc_82CA7538:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bne 0x82ca74f8
	if (!cr0.eq) goto loc_82CA74F8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r30,r11,5100
	ctx.r30.s64 = ctx.r11.s64 + 5100;
loc_82CA755C:
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d04220
	ctx.lr = 0x82CA7574;
	sub_82D04220(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8291fdc8
	ctx.lr = 0x82CA7580;
	sub_8291FDC8(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ca759c
	if (cr6.lt) goto loc_82CA759C;
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82CA759C;
	sub_825952B8(ctx, base);
loc_82CA759C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bne 0x82ca755c
	if (!cr0.eq) goto loc_82CA755C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82afe488
	ctx.lr = 0x82CA75C0;
	sub_82AFE488(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82afe488
	ctx.lr = 0x82CA75CC;
	sub_82AFE488(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c263d0
	ctx.lr = 0x82CA75D4;
	sub_82C263D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,1408(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1408, ctx.r3.u32);
	// bne cr6,0x82ca7674
	if (!cr6.eq) goto loc_82CA7674;
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ca7610
	if (cr6.eq) goto loc_82CA7610;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x838adab0
	ctx.lr = 0x82CA7600;
	sub_838ADAB0(ctx, base);
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825952b8
	ctx.lr = 0x82CA7610;
	sub_825952B8(ctx, base);
loc_82CA7610:
	// lwz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ca7640
	if (cr6.eq) goto loc_82CA7640;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x838adab0
	ctx.lr = 0x82CA7630;
	sub_838ADAB0(ctx, base);
	// stw r26,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x825952b8
	ctx.lr = 0x82CA7640;
	sub_825952B8(ctx, base);
loc_82CA7640:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca7728
	if (cr6.eq) goto loc_82CA7728;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82afdf98
	ctx.lr = 0x82CA765C;
	sub_82AFDF98(ctx, base);
	// stw r26,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r26.u32);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825952b8
	ctx.lr = 0x82CA766C;
	sub_825952B8(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CA7674:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1440(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1440);
	// bl 0x82c25c80
	ctx.lr = 0x82CA7680;
	sub_82C25C80(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,1444(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1444);
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1408);
	// bl 0x82c25c80
	ctx.lr = 0x82CA7690;
	sub_82C25C80(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,1408(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1408);
	// bl 0x83103100
	ctx.lr = 0x82CA769C;
	sub_83103100(ctx, base);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ca76cc
	if (cr6.eq) goto loc_82CA76CC;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x838adab0
	ctx.lr = 0x82CA76BC;
	sub_838ADAB0(ctx, base);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x825952b8
	ctx.lr = 0x82CA76CC;
	sub_825952B8(ctx, base);
loc_82CA76CC:
	// lwz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ca76fc
	if (cr6.eq) goto loc_82CA76FC;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x838adab0
	ctx.lr = 0x82CA76EC;
	sub_838ADAB0(ctx, base);
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x825952b8
	ctx.lr = 0x82CA76FC;
	sub_825952B8(ctx, base);
loc_82CA76FC:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca7728
	if (cr6.eq) goto loc_82CA7728;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82afdf98
	ctx.lr = 0x82CA7718;
	sub_82AFDF98(ctx, base);
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825952b8
	ctx.lr = 0x82CA7728;
	sub_825952B8(ctx, base);
loc_82CA7728:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA7730"))) PPC_WEAK_FUNC(sub_82CA7730);
PPC_FUNC_IMPL(__imp__sub_82CA7730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA7738;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x82CA7750;
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
	ctx.lr = 0x82CA7768;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// addi r9,r11,6784
	ctx.r9.s64 = ctx.r11.s64 + 6784;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r30,-31776
	ctx.r30.s64 = -2082471936;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r30,1520
	ctx.r6.s64 = ctx.r30.s64 + 1520;
	// lwz r4,-4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// bl 0x82d20ae0
	ctx.lr = 0x82CA77A0;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1520(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1520);
	// bl 0x82d23390
	ctx.lr = 0x82CA77B0;
	sub_82D23390(ctx, base);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82ca77cc
	if (cr6.eq) goto loc_82CA77CC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82CA77CC:
	// bl 0x82d19788
	ctx.lr = 0x82CA77D0;
	sub_82D19788(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82ca77f4
	if (!cr6.eq) goto loc_82CA77F4;
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,166
	ctx.r5.u64 = ctx.r5.u64 | 166;
	// bl 0x82d20eb8
	ctx.lr = 0x82CA77F0;
	sub_82D20EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CA77F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA77FC"))) PPC_WEAK_FUNC(sub_82CA77FC);
PPC_FUNC_IMPL(__imp__sub_82CA77FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA7800"))) PPC_WEAK_FUNC(sub_82CA7800);
PPC_FUNC_IMPL(__imp__sub_82CA7800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CA7808;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CA7814;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca793c
	if (cr6.eq) goto loc_82CA793C;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lwz r27,116(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ca78b8
	if (!cr6.eq) goto loc_82CA78B8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831f8200
	ctx.lr = 0x82CA7838;
	sub_831F8200(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825832d8
	ctx.lr = 0x82CA7848;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CA784C;
	sub_82D99C08(ctx, base);
	// lwz r4,96(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x82d9a978
	ctx.lr = 0x82CA7854;
	sub_82D9A978(ctx, base);
	// lbz r10,724(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 724);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca788c
	if (cr6.eq) goto loc_82CA788C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x82ca788c
	if (cr6.gt) goto loc_82CA788C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,6672
	ctx.r11.s64 = ctx.r11.s64 + 6672;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x82d20da8
	ctx.lr = 0x82CA7884;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CA788C:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CA7894;
	sub_82DAB6D0(ctx, base);
	// lwz r4,96(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x82d97530
	ctx.lr = 0x82CA789C;
	sub_82D97530(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6672
	ctx.r5.s64 = ctx.r11.s64 + 6672;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CA78B0;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CA78B8:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82ca793c
	if (!cr6.eq) goto loc_82CA793C;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r11,1504
	ctx.r29.s64 = ctx.r11.s64 + 1504;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82d2f420
	ctx.lr = 0x82CA78E4;
	sub_82D2F420(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca792c
	if (cr6.eq) goto loc_82CA792C;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,207
	ctx.r4.u64 = ctx.r4.u64 | 207;
	// bl 0x82d2a1c8
	ctx.lr = 0x82CA78FC;
	sub_82D2A1C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82CA7904:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzu r5,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2a258
	ctx.lr = 0x82CA7914;
	sub_82D2A258(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82ca7904
	if (cr6.lt) goto loc_82CA7904;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82CA792C;
	sub_83103100(ctx, base);
loc_82CA792C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82CA7934;
	sub_82DAB6D0(ctx, base);
	// lwz r4,96(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x82d97540
	ctx.lr = 0x82CA793C;
	sub_82D97540(ctx, base);
loc_82CA793C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA7944"))) PPC_WEAK_FUNC(sub_82CA7944);
PPC_FUNC_IMPL(__imp__sub_82CA7944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA7948"))) PPC_WEAK_FUNC(sub_82CA7948);
PPC_FUNC_IMPL(__imp__sub_82CA7948) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,6784
	ctx.r9.s64 = ctx.r11.s64 + 6784;
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
	ctx.lr = 0x82CA7980;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ca7998
	if (cr6.eq) goto loc_82CA7998;
	// bl 0x82416268
	ctx.lr = 0x82CA7994;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CA7998:
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

__attribute__((alias("__imp__sub_82CA79B0"))) PPC_WEAK_FUNC(sub_82CA79B0);
PPC_FUNC_IMPL(__imp__sub_82CA79B0) {
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
	// blt cr6,0x82ca79d8
	if (cr6.lt) goto loc_82CA79D8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca79dc
	goto loc_82CA79DC;
loc_82CA79D8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA79DC:
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
	ctx.lr = 0x82CA79F8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca7a14
	if (cr6.eq) goto loc_82CA7A14;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca7730
	ctx.lr = 0x82CA7A10;
	sub_82CA7730(ctx, base);
	// b 0x82ca7a18
	goto loc_82CA7A18;
loc_82CA7A14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA7A18:
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

__attribute__((alias("__imp__sub_82CA7A30"))) PPC_WEAK_FUNC(sub_82CA7A30);
PPC_FUNC_IMPL(__imp__sub_82CA7A30) {
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
	// blt cr6,0x82ca7a58
	if (cr6.lt) goto loc_82CA7A58;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca7a5c
	goto loc_82CA7A5C;
loc_82CA7A58:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA7A5C:
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
	ctx.lr = 0x82CA7A78;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca7a94
	if (cr6.eq) goto loc_82CA7A94;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca7730
	ctx.lr = 0x82CA7A90;
	sub_82CA7730(ctx, base);
	// b 0x82ca7a98
	goto loc_82CA7A98;
loc_82CA7A94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA7A98:
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

__attribute__((alias("__imp__sub_82CA7AB0"))) PPC_WEAK_FUNC(sub_82CA7AB0);
PPC_FUNC_IMPL(__imp__sub_82CA7AB0) {
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
	// blt cr6,0x82ca7ad8
	if (cr6.lt) goto loc_82CA7AD8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca7adc
	goto loc_82CA7ADC;
loc_82CA7AD8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA7ADC:
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
	ctx.lr = 0x82CA7AF8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca7b14
	if (cr6.eq) goto loc_82CA7B14;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca7730
	ctx.lr = 0x82CA7B10;
	sub_82CA7730(ctx, base);
	// b 0x82ca7b18
	goto loc_82CA7B18;
loc_82CA7B14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA7B18:
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

__attribute__((alias("__imp__sub_82CA7B30"))) PPC_WEAK_FUNC(sub_82CA7B30);
PPC_FUNC_IMPL(__imp__sub_82CA7B30) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r6,1512(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1512);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82CA7B5C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca7b5c
	if (!cr6.eq) goto loc_82CA7B5C;
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
	ctx.lr = 0x82CA7B84;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ca7bbc
	if (!cr6.eq) goto loc_82CA7BBC;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x82ca7ba4
	if (cr6.lt) goto loc_82CA7BA4;
	// bne cr6,0x82ca7bbc
	if (!cr6.eq) goto loc_82CA7BBC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r5,r11,6692
	ctx.r5.s64 = ctx.r11.s64 + 6692;
	// b 0x82ca7bb0
	goto loc_82CA7BB0;
loc_82CA7BA4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r11,r11,6692
	ctx.r11.s64 = ctx.r11.s64 + 6692;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
loc_82CA7BB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CA7BBC;
	sub_82D20DA8(ctx, base);
loc_82CA7BBC:
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

__attribute__((alias("__imp__sub_82CA7BD4"))) PPC_WEAK_FUNC(sub_82CA7BD4);
PPC_FUNC_IMPL(__imp__sub_82CA7BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA7BD8"))) PPC_WEAK_FUNC(sub_82CA7BD8);
PPC_FUNC_IMPL(__imp__sub_82CA7BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CA7BE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CA7BEC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r30,r11,6216
	ctx.r30.s64 = ctx.r11.s64 + 6216;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-208
	ctx.r4.s64 = ctx.r30.s64 + -208;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA7C0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca7ef8
	if (cr6.eq) goto loc_82CA7EF8;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r24,0
	ctx.r24.s64 = 0;
	// sth r24,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r24.u16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82CA7C2C;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8311c260
	ctx.lr = 0x82CA7C40;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82CA7C50;
	sub_831CE980(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82CA7C54;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca7ef8
	if (cr6.eq) goto loc_82CA7EF8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CA7C64;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CA7C68;
	sub_82D99C08(ctx, base);
	// lwz r4,96(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82d9a978
	ctx.lr = 0x82CA7C70;
	sub_82D9A978(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r31,r28,100
	ctx.r31.s64 = ctx.r28.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82CA7C84;
	sub_837B0C10(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r30,-192
	ctx.r4.s64 = ctx.r30.s64 + -192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CA7C94;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA7CA4;
	sub_82A69AD0(ctx, base);
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r4,r30,-180
	ctx.r4.s64 = ctx.r30.s64 + -180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA7CBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca7cd4
	if (cr6.eq) goto loc_82CA7CD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r6,397(r25)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r25.u32 + 397);
	// lwz r4,96(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82d45220
	ctx.lr = 0x82CA7CD4;
	sub_82D45220(ctx, base);
loc_82CA7CD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-172
	ctx.r4.s64 = ctx.r30.s64 + -172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA7CEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca7d1c
	if (cr6.eq) goto loc_82CA7D1C;
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lhz r11,290(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 290);
	// stw r24,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r24.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ca7d10
	if (cr6.eq) goto loc_82CA7D10;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CA7D10:
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82d32b60
	ctx.lr = 0x82CA7D1C;
	sub_82D32B60(ctx, base);
loc_82CA7D1C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r4,290(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 290);
	// bl 0x8311c628
	ctx.lr = 0x82CA7D28;
	sub_8311C628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CA7D34;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-152
	ctx.r4.s64 = ctx.r30.s64 + -152;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CA7D44;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA7D54;
	sub_82A69AD0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83151610
	ctx.lr = 0x82CA7D60;
	sub_83151610(ctx, base);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,1604(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1604);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82ca7d90
	if (!cr6.eq) goto loc_82CA7D90;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca7d94
	if (cr6.eq) goto loc_82CA7D94;
loc_82CA7D90:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82CA7D94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82ca7dc0
	if (cr6.eq) goto loc_82CA7DC0;
	// addi r4,r30,-132
	ctx.r4.s64 = ctx.r30.s64 + -132;
	// bctrl 
	ctx.lr = 0x82CA7DBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ca7e50
	goto loc_82CA7E50;
loc_82CA7DC0:
	// addi r4,r30,-112
	ctx.r4.s64 = ctx.r30.s64 + -112;
	// bctrl 
	ctx.lr = 0x82CA7DC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82CA7DCC;
	sub_831156E8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82CA7DD8;
	sub_8311C148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82CA7DE8;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CA7DF8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA7E08;
	sub_82A69AD0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CA7E20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca7ef8
	if (cr6.eq) goto loc_82CA7EF8;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r24,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r24.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ca7e40
	if (cr6.eq) goto loc_82CA7E40;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CA7E40:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d329f8
	ctx.lr = 0x82CA7E50;
	sub_82D329F8(ctx, base);
loc_82CA7E50:
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// lwz r29,8(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CA7E60;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CA7E70;
	sub_82A6A1B8(ctx, base);
	// addi r4,r30,-526
	ctx.r4.s64 = ctx.r30.s64 + -526;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CA7E7C;
	sub_837B0C10(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,12(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// ori r4,r4,137
	ctx.r4.u64 = ctx.r4.u64 | 137;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82d042a8
	ctx.lr = 0x82CA7E94;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ca7ea8
	if (!cr6.lt) goto loc_82CA7EA8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CA7EA8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CA7EB0;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CA7EC0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CA7ED0;
	sub_82A69AD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r30,20(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// bl 0x837b0c10
	ctx.lr = 0x82CA7EE0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CA7EF0;
	sub_82A6A1B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA7EF8;
	sub_8387E8E0(ctx, base);
loc_82CA7EF8:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

