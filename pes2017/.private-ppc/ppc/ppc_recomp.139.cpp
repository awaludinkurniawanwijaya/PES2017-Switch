#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B9B444"))) PPC_WEAK_FUNC(sub_82B9B444);
PPC_FUNC_IMPL(__imp__sub_82B9B444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9B448"))) PPC_WEAK_FUNC(sub_82B9B448);
PPC_FUNC_IMPL(__imp__sub_82B9B448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82b9a7d8
	sub_82B9A7D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9B464"))) PPC_WEAK_FUNC(sub_82B9B464);
PPC_FUNC_IMPL(__imp__sub_82B9B464) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9B468"))) PPC_WEAK_FUNC(sub_82B9B468);
PPC_FUNC_IMPL(__imp__sub_82B9B468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B9B470;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x82B9B47C;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b54c
	if (cr6.eq) goto loc_82B9B54C;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b9b4ac
	if (cr6.gt) goto loc_82B9B4AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9B4AC;
	sub_831CC188(ctx, base);
loc_82B9B4AC:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x831156e8
	ctx.lr = 0x82B9B4BC;
	sub_831156E8(ctx, base);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r10,113(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 113);
	// addis r29,r9,6
	ctx.r29.s64 = ctx.r9.s64 + 393216;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r29,r29,-30316
	ctx.r29.s64 = ctx.r29.s64 + -30316;
	// beq cr6,0x82b9b52c
	if (cr6.eq) goto loc_82B9B52C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82B9B4E8;
	sub_82A0C738(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x82B9B4F0;
	sub_8399F8B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B9B4FC;
	sub_82D19BB0(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x82B9B510;
	sub_8399EA10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16440
	ctx.lr = 0x82B9B51C;
	sub_82A16440(ctx, base);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r3,93(r8)
	PPC_STORE_U8(ctx.r8.u32 + 93, ctx.r3.u8);
	// b 0x82b9b54c
	goto loc_82B9B54C;
loc_82B9B52C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B9B534;
	sub_82D19BB0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// mulli r9,r11,11
	ctx.r9.s64 = ctx.r11.s64 * 11;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stb r8,93(r7)
	PPC_STORE_U8(ctx.r7.u32 + 93, ctx.r8.u8);
loc_82B9B54C:
	// lbz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9b5f0
	if (!cr6.eq) goto loc_82B9B5F0;
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b9b5f0
	if (!cr6.lt) goto loc_82B9B5F0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b9b598
	if (cr6.gt) goto loc_82B9B598;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9B598;
	sub_831CC188(ctx, base);
loc_82B9B598:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ldx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lbz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82d195d8
	ctx.lr = 0x82B9B5B0;
	sub_82D195D8(ctx, base);
	// lbz r9,113(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 113);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b9b5d8
	if (cr6.eq) goto loc_82B9B5D8;
	// lbz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9b5d8
	if (!cr6.eq) goto loc_82B9B5D8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9B5D8;
	sub_82D19788(ctx, base);
loc_82B9B5D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9a7d8
	ctx.lr = 0x82B9B5E0;
	sub_82B9A7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9a358
	ctx.lr = 0x82B9B5E8;
	sub_82B9A358(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B9B5F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B9B5FC;
	sub_82D199D0(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82B9B600;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B9B60C;
	sub_82D195D8(ctx, base);
	// lbz r11,113(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 113);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9b638
	if (cr6.eq) goto loc_82B9B638;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-13448
	ctx.r11.s64 = ctx.r11.s64 + -13448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x82d20da8
	ctx.lr = 0x82B9B630;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B9B638:
	// lbz r11,115(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 115);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9b660
	if (cr6.eq) goto loc_82B9B660;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-13448
	ctx.r5.s64 = ctx.r11.s64 + -13448;
	// bl 0x82d20da8
	ctx.lr = 0x82B9B658;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B9B660:
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
	ctx.lr = 0x82B9B68C;
	sub_83103068(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9B694"))) PPC_WEAK_FUNC(sub_82B9B694);
PPC_FUNC_IMPL(__imp__sub_82B9B694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9B698"))) PPC_WEAK_FUNC(sub_82B9B698);
PPC_FUNC_IMPL(__imp__sub_82B9B698) {
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
	// bl 0x8399f8b8
	ctx.lr = 0x82B9B6B0;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b718
	if (cr6.eq) goto loc_82B9B718;
	// lbz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9b718
	if (!cr6.eq) goto loc_82B9B718;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b9b6ec
	if (cr6.gt) goto loc_82B9B6EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9B6EC;
	sub_831CC188(ctx, base);
loc_82B9B6EC:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x831156e8
	ctx.lr = 0x82B9B6FC;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r8,5
	ctx.r8.s64 = 327680;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// li r7,255
	ctx.r7.s64 = 255;
	// ori r6,r8,35313
	ctx.r6.u64 = ctx.r8.u64 | 35313;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stbx r7,r5,r6
	PPC_STORE_U8(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u8);
loc_82B9B718:
	// lbz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9b7d0
	if (!cr6.eq) goto loc_82B9B7D0;
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9b7d0
	if (cr6.eq) goto loc_82B9B7D0;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b9b760
	if (cr6.gt) goto loc_82B9B760;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9B760;
	sub_831CC188(ctx, base);
loc_82B9B760:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ldx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lbz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82d195d8
	ctx.lr = 0x82B9B778;
	sub_82D195D8(ctx, base);
	// lbz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b9b7ac
	if (!cr6.eq) goto loc_82B9B7AC;
	// lbz r11,113(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 113);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9b7ac
	if (cr6.eq) goto loc_82B9B7AC;
	// lbz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9b7ac
	if (!cr6.eq) goto loc_82B9B7AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9B7AC;
	sub_82D19788(ctx, base);
loc_82B9B7AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9a7d8
	ctx.lr = 0x82B9B7B4;
	sub_82B9A7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9a358
	ctx.lr = 0x82B9B7BC;
	sub_82B9A358(ctx, base);
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
loc_82B9B7D0:
	// bl 0x8308e078
	ctx.lr = 0x82B9B7D4;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B9B7E0;
	sub_82D195D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-13440
	ctx.r5.s64 = ctx.r11.s64 + -13440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B9B7F4;
	sub_82D20DA8(ctx, base);
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

__attribute__((alias("__imp__sub_82B9B808"))) PPC_WEAK_FUNC(sub_82B9B808);
PPC_FUNC_IMPL(__imp__sub_82B9B808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B9B810;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x82B9B840;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b868
	if (cr6.eq) goto loc_82B9B868;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b9b060
	ctx.lr = 0x82B9B860;
	sub_82B9B060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B9B868:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9B874"))) PPC_WEAK_FUNC(sub_82B9B874);
PPC_FUNC_IMPL(__imp__sub_82B9B874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9B878"))) PPC_WEAK_FUNC(sub_82B9B878);
PPC_FUNC_IMPL(__imp__sub_82B9B878) {
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
	// blt cr6,0x82b9b8a0
	if (cr6.lt) goto loc_82B9B8A0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b9b8a4
	goto loc_82B9B8A4;
loc_82B9B8A0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B9B8A4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B9B8C0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9b8e8
	if (cr6.eq) goto loc_82B9B8E8;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b9b060
	ctx.lr = 0x82B9B8E0;
	sub_82B9B060(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b9b8ec
	if (!cr6.eq) goto loc_82B9B8EC;
loc_82B9B8E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B9B8EC:
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

__attribute__((alias("__imp__sub_82B9B904"))) PPC_WEAK_FUNC(sub_82B9B904);
PPC_FUNC_IMPL(__imp__sub_82B9B904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9B908"))) PPC_WEAK_FUNC(sub_82B9B908);
PPC_FUNC_IMPL(__imp__sub_82B9B908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// addi r8,r3,147
	ctx.r8.s64 = ctx.r3.s64 + 147;
	// addi r9,r3,141
	ctx.r9.s64 = ctx.r3.s64 + 141;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r6,24
	ctx.r6.s64 = 24;
loc_82B9B91C:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B9B928:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b9b938
	if (!cr6.eq) goto loc_82B9B938;
	// stbx r6,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u8);
loc_82B9B938:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82b9b928
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B9B928;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B9B94C:
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b9b95c
	if (!cr6.eq) goto loc_82B9B95C;
	// stbx r6,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u8);
loc_82B9B95C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82b9b94c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B9B94C;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// addi r8,r8,11
	ctx.r8.s64 = ctx.r8.s64 + 11;
	// bne 0x82b9b91c
	if (!cr0.eq) goto loc_82B9B91C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9B978"))) PPC_WEAK_FUNC(sub_82B9B978);
PPC_FUNC_IMPL(__imp__sub_82B9B978) {
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
	ctx.lr = 0x82B9B9A0;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-11904
	ctx.r4.s64 = ctx.r11.s64 + -11904;
	// bl 0x82d2f098
	ctx.lr = 0x82B9B9AC;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9ba24
	if (cr6.eq) goto loc_82B9BA24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9B9BC;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9ba24
	if (cr6.eq) goto loc_82B9BA24;
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
	ctx.lr = 0x82B9B9EC;
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
	ctx.lr = 0x82B9BA24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9BA24:
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

__attribute__((alias("__imp__sub_82B9BA40"))) PPC_WEAK_FUNC(sub_82B9BA40);
PPC_FUNC_IMPL(__imp__sub_82B9BA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B9BA48;
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
	ctx.lr = 0x82B9BA60;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-11920
	ctx.r28.s64 = ctx.r11.s64 + -11920;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// bl 0x82d2f098
	ctx.lr = 0x82B9BA70;
	sub_82D2F098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9bb50
	if (cr6.eq) goto loc_82B9BB50;
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
	ctx.lr = 0x82B9BA9C;
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
	ctx.lr = 0x82B9BABC;
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
	ctx.lr = 0x82B9BB00;
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
	ctx.lr = 0x82B9BB1C;
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
	// lfs f0,17336(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 17336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17340);
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
	// bl 0x82b9b978
	ctx.lr = 0x82B9BB50;
	sub_82B9B978(ctx, base);
loc_82B9BB50:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9BB5C"))) PPC_WEAK_FUNC(sub_82B9BB5C);
PPC_FUNC_IMPL(__imp__sub_82B9BB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9BB60"))) PPC_WEAK_FUNC(sub_82B9BB60);
PPC_FUNC_IMPL(__imp__sub_82B9BB60) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
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
	// bgt cr6,0x82b9bb94
	if (cr6.gt) goto loc_82B9BB94;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9BB94;
	sub_831CC188(ctx, base);
loc_82B9BB94:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// beq cr6,0x82b9bbcc
	if (cr6.eq) goto loc_82B9BBCC;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B9BBCC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,3
	ctx.r10.s64 = 3;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r8,380(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 380);
	// subfc r7,r10,r8
	xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9BBFC"))) PPC_WEAK_FUNC(sub_82B9BBFC);
PPC_FUNC_IMPL(__imp__sub_82B9BBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9BC00"))) PPC_WEAK_FUNC(sub_82B9BC00);
PPC_FUNC_IMPL(__imp__sub_82B9BC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B9BC08;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B9BC1C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,24
	ctx.r27.s64 = 24;
	// addis r30,r11,6
	ctx.r30.s64 = ctx.r11.s64 + 393216;
	// li r29,255
	ctx.r29.s64 = 255;
	// addi r30,r30,-30316
	ctx.r30.s64 = ctx.r30.s64 + -30316;
loc_82B9BC34:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b9bb60
	ctx.lr = 0x82B9BC40;
	sub_82B9BB60(ctx, base);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82b9bc50
	if (cr6.lt) goto loc_82B9BC50;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82b9bc78
	goto loc_82B9BC78;
loc_82B9BC50:
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// blt cr6,0x82b9bc64
	if (cr6.lt) goto loc_82B9BC64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82b9bc78
	goto loc_82B9BC78;
loc_82B9BC64:
	// addi r11,r31,47
	ctx.r11.s64 = ctx.r31.s64 + 47;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
loc_82B9BC78:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,24
	cr6.compare<uint32_t>(ctx.r7.u32, 24, xer);
	// beq cr6,0x82b9bd44
	if (cr6.eq) goto loc_82B9BD44;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b9bcdc
	if (cr6.eq) goto loc_82B9BCDC;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b9bd60
	if (!cr6.gt) goto loc_82B9BD60;
loc_82B9BCB0:
	// ldx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r8.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lbz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// beq cr6,0x82b9bcd8
	if (cr6.eq) goto loc_82B9BCD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b9bcb0
	if (cr6.gt) goto loc_82B9BCB0;
	// b 0x82b9bcdc
	goto loc_82B9BCDC;
loc_82B9BCD8:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82B9BCDC:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9bd44
	if (!cr6.eq) goto loc_82B9BD44;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x82b9bd10
	if (!cr6.lt) goto loc_82B9BD10;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bge cr6,0x82b9bd10
	if (!cr6.lt) goto loc_82B9BD10;
	// addi r11,r31,47
	ctx.r11.s64 = ctx.r31.s64 + 47;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stbx r27,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r27.u8);
loc_82B9BD10:
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82B9BD1C:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x82b9bd3c
	if (!cr6.lt) goto loc_82B9BD3C;
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bge cr6,0x82b9bd3c
	if (!cr6.lt) goto loc_82B9BD3C;
	// mulli r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 * 11;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r29,147(r11)
	PPC_STORE_U8(ctx.r11.u32 + 147, ctx.r29.u8);
loc_82B9BD3C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82b9bd1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B9BD1C;
loc_82B9BD44:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82b9bc34
	if (cr6.lt) goto loc_82B9BC34;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B9BD60:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9BD6C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B9BD6C"))) PPC_WEAK_FUNC(sub_82B9BD6C);
PPC_FUNC_IMPL(__imp__sub_82B9BD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9BD70"))) PPC_WEAK_FUNC(sub_82B9BD70);
PPC_FUNC_IMPL(__imp__sub_82B9BD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B9BD78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b9bdac
	if (cr6.gt) goto loc_82B9BDAC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9BDAC;
	sub_831CC188(ctx, base);
loc_82B9BDAC:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82d19a78
	ctx.lr = 0x82B9BDC0;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,-11856
	ctx.r30.s64 = ctx.r11.s64 + -11856;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// bl 0x82d2f098
	ctx.lr = 0x82B9BDD0;
	sub_82D2F098(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9bf80
	if (cr6.eq) goto loc_82B9BF80;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B9BDE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9BDEC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9be0c
	if (cr6.eq) goto loc_82B9BE0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9BE0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9BE0C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82b9bde0
	if (cr6.lt) goto loc_82B9BDE0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// beq cr6,0x82b9bef4
	if (cr6.eq) goto loc_82B9BEF4;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82b9be94
	if (cr6.eq) goto loc_82B9BE94;
	// addi r30,r11,29
	ctx.r30.s64 = ctx.r11.s64 + 29;
	// lis r29,-31777
	ctx.r29.s64 = -2082537472;
loc_82B9BE40:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// beq cr6,0x82b9be80
	if (cr6.eq) goto loc_82B9BE80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9BE60;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9be80
	if (cr6.eq) goto loc_82B9BE80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,17344(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17344);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9BE80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9BE80:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82b9be40
	if (cr6.lt) goto loc_82B9BE40;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B9BE94:
	// addi r30,r11,51
	ctx.r30.s64 = ctx.r11.s64 + 51;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r29,r11,17344
	ctx.r29.s64 = ctx.r11.s64 + 17344;
loc_82B9BEA0:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// beq cr6,0x82b9bee0
	if (cr6.eq) goto loc_82B9BEE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9BEC0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9bee0
	if (cr6.eq) goto loc_82B9BEE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9BEE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9BEE0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82b9bea0
	if (cr6.lt) goto loc_82B9BEA0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B9BEF4:
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r8,380(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 380);
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bge cr6,0x82b9bf0c
	if (!cr6.lt) goto loc_82B9BF0C;
	// li r9,2
	ctx.r9.s64 = 2;
loc_82B9BF0C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// clrlwi r30,r9,24
	ctx.r30.u64 = ctx.r9.u32 & 0xFF;
	// addi r28,r11,17344
	ctx.r28.s64 = ctx.r11.s64 + 17344;
loc_82B9BF24:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,29
	ctx.r10.s64 = ctx.r11.s64 + 29;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// cmplwi cr6,r8,24
	cr6.compare<uint32_t>(ctx.r8.u32, 24, xer);
	// beq cr6,0x82b9bf74
	if (cr6.eq) goto loc_82B9BF74;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9BF50;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9bf74
	if (cr6.eq) goto loc_82B9BF74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B9BF74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9BF74:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82b9bf24
	if (cr6.lt) goto loc_82B9BF24;
loc_82B9BF80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9BF88"))) PPC_WEAK_FUNC(sub_82B9BF88);
PPC_FUNC_IMPL(__imp__sub_82B9BF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82B9BF90;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b9bfc0
	if (cr6.gt) goto loc_82B9BFC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9BFC0;
	sub_831CC188(ctx, base);
loc_82B9BFC0:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x831156e8
	ctx.lr = 0x82B9BFD0;
	sub_831156E8(ctx, base);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r22,r27,r28
	ctx.r22.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addis r26,r10,6
	ctx.r26.s64 = ctx.r10.s64 + 393216;
	// addi r26,r26,-30316
	ctx.r26.s64 = ctx.r26.s64 + -30316;
	// lbz r9,380(r22)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + 380);
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bge cr6,0x82b9c008
	if (!cr6.lt) goto loc_82B9C008;
	// bl 0x82d19a78
	ctx.lr = 0x82B9BFF8;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-11740
	ctx.r31.s64 = ctx.r11.s64 + -11740;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// b 0x82b9c018
	goto loc_82B9C018;
loc_82B9C008:
	// bl 0x82d19a78
	ctx.lr = 0x82B9C00C;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-11740
	ctx.r31.s64 = ctx.r11.s64 + -11740;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
loc_82B9C018:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9C02C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x82d19a78
	ctx.lr = 0x82B9C038;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82B9C040;
	sub_82D2F098(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c194
	if (cr6.eq) goto loc_82B9C194;
	// bl 0x8399f8b8
	ctx.lr = 0x82B9C050;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c194
	if (cr6.eq) goto loc_82B9C194;
	// lbz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B9C060:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b9bb60
	ctx.lr = 0x82B9C06C;
	sub_82B9BB60(ctx, base);
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// blt cr6,0x82b9c07c
	if (cr6.lt) goto loc_82B9C07C;
	// li r31,24
	ctx.r31.s64 = 24;
	// b 0x82b9c0a4
	goto loc_82B9C0A4;
loc_82B9C07C:
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// blt cr6,0x82b9c090
	if (cr6.lt) goto loc_82B9C090;
	// li r31,24
	ctx.r31.s64 = 24;
	// b 0x82b9c0a4
	goto loc_82B9C0A4;
loc_82B9C090:
	// addi r11,r27,47
	ctx.r11.s64 = ctx.r27.s64 + 47;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r31,r11,r26
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
loc_82B9C0A4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9C0B0;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c124
	if (cr6.eq) goto loc_82B9C124;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82B9C0CC;
	sub_82D2B608(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// beq cr6,0x82b9c124
	if (cr6.eq) goto loc_82B9C124;
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b9c0fc
	if (cr6.eq) goto loc_82B9C0FC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B9C0F8;
	sub_82D2B608(ctx, base);
	// b 0x82b9c124
	goto loc_82B9C124;
loc_82B9C0FC:
	// lbz r11,380(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 380);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82b9c110
	if (!cr6.lt) goto loc_82B9C110;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// beq cr6,0x82b9c138
	if (cr6.eq) goto loc_82B9C138;
loc_82B9C110:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82B9C120;
	sub_82D1EAC0(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
loc_82B9C124:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82b9c060
	if (cr6.lt) goto loc_82B9C060;
loc_82B9C138:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9c194
	if (!cr6.eq) goto loc_82B9C194;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B9C148:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9C154;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c16c
	if (cr6.eq) goto loc_82B9C16C;
	// bl 0x82d2b038
	ctx.lr = 0x82B9C160;
	sub_82D2B038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9c184
	if (!cr6.eq) goto loc_82B9C184;
loc_82B9C16C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82b9c148
	if (cr6.lt) goto loc_82B9C148;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82B9C184:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82B9C194;
	sub_82D1EAC0(ctx, base);
loc_82B9C194:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9C19C"))) PPC_WEAK_FUNC(sub_82B9C19C);
PPC_FUNC_IMPL(__imp__sub_82B9C19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9C1A0"))) PPC_WEAK_FUNC(sub_82B9C1A0);
PPC_FUNC_IMPL(__imp__sub_82B9C1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B9C1A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// bgt cr6,0x82b9c1d8
	if (cr6.gt) goto loc_82B9C1D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9C1D8;
	sub_831CC188(ctx, base);
loc_82B9C1D8:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82d19a78
	ctx.lr = 0x82B9C1EC;
	sub_82D19A78(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,-11652
	ctx.r4.s64 = ctx.r10.s64 + -11652;
	// bl 0x82d2f098
	ctx.lr = 0x82B9C1F8;
	sub_82D2F098(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c364
	if (cr6.eq) goto loc_82B9C364;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 380);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bge cr6,0x82b9c2d4
	if (!cr6.lt) goto loc_82B9C2D4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d1ed60
	ctx.lr = 0x82B9C228;
	sub_82D1ED60(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r26,r10,-11528
	ctx.r26.s64 = ctx.r10.s64 + -11528;
	// addi r27,r11,17356
	ctx.r27.s64 = ctx.r11.s64 + 17356;
loc_82B9C240:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// beq cr6,0x82b9c2b8
	if (cr6.eq) goto loc_82B9C2B8;
	// clrlwi r29,r9,24
	ctx.r29.u64 = ctx.r9.u32 & 0xFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9C258;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c2b0
	if (cr6.eq) goto loc_82B9C2B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r30,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9C280;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9C290;
	sub_82D2AEC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B9C2A0;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c2b0
	if (cr6.eq) goto loc_82B9C2B0;
	// lwzx r4,r30,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// bl 0x82d29598
	ctx.lr = 0x82B9C2B0;
	sub_82D29598(ctx, base);
loc_82B9C2B0:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
loc_82B9C2B8:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82b9c240
	if (cr6.lt) goto loc_82B9C240;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B9C2D4:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d1ed60
	ctx.lr = 0x82B9C2DC;
	sub_82D1ED60(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r10,-11528
	ctx.r27.s64 = ctx.r10.s64 + -11528;
	// addi r28,r11,17356
	ctx.r28.s64 = ctx.r11.s64 + 17356;
loc_82B9C2F0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9C2FC;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c354
	if (cr6.eq) goto loc_82B9C354;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r30,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9C324;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9C334;
	sub_82D2AEC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B9C344;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c354
	if (cr6.eq) goto loc_82B9C354;
	// lwzx r4,r30,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// bl 0x82d29598
	ctx.lr = 0x82B9C354;
	sub_82D29598(ctx, base);
loc_82B9C354:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82b9c2f0
	if (cr6.lt) goto loc_82B9C2F0;
loc_82B9C364:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9C36C"))) PPC_WEAK_FUNC(sub_82B9C36C);
PPC_FUNC_IMPL(__imp__sub_82B9C36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9C370"))) PPC_WEAK_FUNC(sub_82B9C370);
PPC_FUNC_IMPL(__imp__sub_82B9C370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B9C378;
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
	// bgt cr6,0x82b9c3ac
	if (cr6.gt) goto loc_82B9C3AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9C3AC;
	sub_831CC188(ctx, base);
loc_82B9C3AC:
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
	ctx.lr = 0x82B9C3D8;
	sub_839A9548(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r30,r10,-11624
	ctx.r30.s64 = ctx.r10.s64 + -11624;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x83815d38
	ctx.lr = 0x82B9C3EC;
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
	ctx.lr = 0x82B9C400;
	sub_83815B68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83815b68
	ctx.lr = 0x82B9C410;
	sub_83815B68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82B9C420;
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
	ctx.lr = 0x82B9C434;
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
	ctx.lr = 0x82B9C444;
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
	ctx.lr = 0x82B9C454;
	sub_83815BE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B9C45C;
	sub_82D19A68(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838153c8
	ctx.lr = 0x82B9C46C;
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
	ctx.lr = 0x82B9C488;
	sub_839A9548(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815d38
	ctx.lr = 0x82B9C494;
	sub_83815D38(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82B9C4A0;
	sub_83815B68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82B9C4B0;
	sub_83815B68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82B9C4C0;
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
	ctx.lr = 0x82B9C4D4;
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
	ctx.lr = 0x82B9C4E4;
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
	ctx.lr = 0x82B9C4F4;
	sub_83815BE8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838153c8
	ctx.lr = 0x82B9C500;
	sub_838153C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815cb8
	ctx.lr = 0x82B9C508;
	sub_83815CB8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83815cb8
	ctx.lr = 0x82B9C510;
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

__attribute__((alias("__imp__sub_82B9C51C"))) PPC_WEAK_FUNC(sub_82B9C51C);
PPC_FUNC_IMPL(__imp__sub_82B9C51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9C520"))) PPC_WEAK_FUNC(sub_82B9C520);
PPC_FUNC_IMPL(__imp__sub_82B9C520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B9C528;
	__savegprlr_24(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r24,r3,96
	ctx.r24.s64 = ctx.r3.s64 + 96;
	// lbz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b9c55c
	if (cr6.gt) goto loc_82B9C55C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9C55C;
	sub_831CC188(ctx, base);
loc_82B9C55C:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82d19a78
	ctx.lr = 0x82B9C570;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r25,r11,-11948
	ctx.r25.s64 = ctx.r11.s64 + -11948;
	// addi r4,r25,-244
	ctx.r4.s64 = ctx.r25.s64 + -244;
	// bl 0x82d2f098
	ctx.lr = 0x82B9C580;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c5ac
	if (cr6.eq) goto loc_82B9C5AC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B9C59C;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9C5AC;
	sub_82D2AEC8(ctx, base);
loc_82B9C5AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9C5B4;
	sub_82D19A78(ctx, base);
	// addi r4,r25,-236
	ctx.r4.s64 = ctx.r25.s64 + -236;
	// bl 0x82d2f098
	ctx.lr = 0x82B9C5BC;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c5e8
	if (cr6.eq) goto loc_82B9C5E8;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B9C5D8;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9C5E8;
	sub_82D2AEC8(ctx, base);
loc_82B9C5E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9C5F0;
	sub_82D19A78(ctx, base);
	// addi r4,r25,-228
	ctx.r4.s64 = ctx.r25.s64 + -228;
	// bl 0x82d2f098
	ctx.lr = 0x82B9C5F8;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c624
	if (cr6.eq) goto loc_82B9C624;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B9C614;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9C624;
	sub_82D2AEC8(ctx, base);
loc_82B9C624:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9C62C;
	sub_82D19A78(ctx, base);
	// addi r4,r25,-212
	ctx.r4.s64 = ctx.r25.s64 + -212;
	// bl 0x82d2f098
	ctx.lr = 0x82B9C634;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c660
	if (cr6.eq) goto loc_82B9C660;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B9C650;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9C660;
	sub_82D2AEC8(ctx, base);
loc_82B9C660:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9C668;
	sub_82D19A78(ctx, base);
	// addi r4,r25,-200
	ctx.r4.s64 = ctx.r25.s64 + -200;
	// bl 0x82d2f098
	ctx.lr = 0x82B9C670;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c684
	if (cr6.eq) goto loc_82B9C684;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9C684;
	sub_82D2AEC8(ctx, base);
loc_82B9C684:
	// bl 0x8399f8b8
	ctx.lr = 0x82B9C688;
	sub_8399F8B8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c830
	if (cr6.eq) goto loc_82B9C830;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8399f8b8
	ctx.lr = 0x82B9C69C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8399edb0
	ctx.lr = 0x82B9C6B4;
	sub_8399EDB0(ctx, base);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82B9C6BC:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82B9C6C0:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r7,r11,116
	ctx.r7.s64 = ctx.r11.s64 + 116;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8315a628
	ctx.lr = 0x82B9C6E4;
	sub_8315A628(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82b9c6c0
	if (cr6.lt) goto loc_82B9C6C0;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(ctx.r30.s32, 6, xer);
	// blt cr6,0x82b9c6bc
	if (cr6.lt) goto loc_82B9C6BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9C708;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,-184
	ctx.r4.s64 = ctx.r25.s64 + -184;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9C720;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c760
	if (cr6.eq) goto loc_82B9C760;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,122
	ctx.r4.u64 = ctx.r4.u64 | 122;
	// bl 0x82d303d0
	ctx.lr = 0x82B9C738;
	sub_82D303D0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B9C73C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a08
	ctx.lr = 0x82B9C750;
	sub_83123A08(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30138
	ctx.lr = 0x82B9C760;
	sub_82D30138(ctx, base);
loc_82B9C760:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9C768;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,-168
	ctx.r4.s64 = ctx.r25.s64 + -168;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9C780;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c7ec
	if (cr6.eq) goto loc_82B9C7EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83165ba8
	ctx.lr = 0x82B9C79C;
	sub_83165BA8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b9c7b0
	if (!cr6.lt) goto loc_82B9C7B0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82B9C7B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30138
	ctx.lr = 0x82B9C7BC;
	sub_82D30138(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b9c7dc
	if (cr6.lt) goto loc_82B9C7DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B9C7DC;
	sub_825952B8(ctx, base);
loc_82B9C7DC:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
loc_82B9C7EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b9c1a0
	ctx.lr = 0x82B9C7F4;
	sub_82B9C1A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9C7FC;
	sub_82D19A78(ctx, base);
	// addi r4,r25,-152
	ctx.r4.s64 = ctx.r25.s64 + -152;
	// bl 0x82d2f098
	ctx.lr = 0x82B9C804;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c830
	if (cr6.eq) goto loc_82B9C830;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82B9C810:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b9ba40
	ctx.lr = 0x82B9C820;
	sub_82B9BA40(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82b9c810
	if (cr6.lt) goto loc_82B9C810;
loc_82B9C830:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b9c370
	ctx.lr = 0x82B9C838;
	sub_82B9C370(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9C840;
	sub_82D19A78(ctx, base);
	// addi r4,r25,-144
	ctx.r4.s64 = ctx.r25.s64 + -144;
	// bl 0x82d2f098
	ctx.lr = 0x82B9C848;
	sub_82D2F098(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c9b4
	if (cr6.eq) goto loc_82B9C9B4;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82B9C858:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B9C864;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c884
	if (cr6.eq) goto loc_82B9C884;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-40
	ctx.r4.s64 = ctx.r25.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9C884;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9C884:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x82b9c858
	if (cr6.lt) goto loc_82B9C858;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b9c9b4
	if (cr0.eq) goto loc_82B9C9B4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// addi r26,r9,17368
	ctx.r26.s64 = ctx.r9.s64 + 17368;
	// ble cr6,0x82b9c9c4
	if (!cr6.gt) goto loc_82B9C9C4;
loc_82B9C8BC:
	// ldx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x82d33db0
	ctx.lr = 0x82B9C8D0;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9c994
	if (cr6.eq) goto loc_82B9C994;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x82b9c90c
	if (cr6.eq) goto loc_82B9C90C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-32
	ctx.r4.s64 = ctx.r25.s64 + -32;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9C904;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b9c984
	goto loc_82B9C984;
loc_82B9C90C:
	// lbz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82b9c95c
	if (!cr6.eq) goto loc_82B9C95C;
	// addi r4,r25,-24
	ctx.r4.s64 = ctx.r25.s64 + -24;
	// bctrl 
	ctx.lr = 0x82B9C930;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// lwzx r4,r8,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B9C954;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b9c984
	goto loc_82B9C984;
loc_82B9C95C:
	// addi r4,r25,-16
	ctx.r4.s64 = ctx.r25.s64 + -16;
	// bctrl 
	ctx.lr = 0x82B9C964;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B9C980;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B9C984:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B9C994;
	sub_82D2B608(ctx, base);
loc_82B9C994:
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b9c8bc
	if (cr6.gt) goto loc_82B9C8BC;
loc_82B9C9B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b9bf88
	ctx.lr = 0x82B9C9BC;
	sub_82B9BF88(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B9C9C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9C9D0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B9C9D0"))) PPC_WEAK_FUNC(sub_82B9C9D0);
PPC_FUNC_IMPL(__imp__sub_82B9C9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B9C9D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x82B9C9E4;
	sub_8399F8B8(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9cb84
	if (cr6.eq) goto loc_82B9CB84;
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lbz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 112);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b9ca18
	if (cr6.gt) goto loc_82B9CA18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9CA18;
	sub_831CC188(ctx, base);
loc_82B9CA18:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8399f8b8
	ctx.lr = 0x82B9CA28;
	sub_8399F8B8(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8399edb0
	ctx.lr = 0x82B9CA44;
	sub_8399EDB0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B9CA48;
	sub_831156E8(ctx, base);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// addis r30,r9,6
	ctx.r30.s64 = ctx.r9.s64 + 393216;
	// li r28,24
	ctx.r28.s64 = 24;
	// addi r30,r30,-30316
	ctx.r30.s64 = ctx.r30.s64 + -30316;
	// li r27,255
	ctx.r27.s64 = 255;
loc_82B9CA64:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b9bb60
	ctx.lr = 0x82B9CA70;
	sub_82B9BB60(ctx, base);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82b9ca80
	if (cr6.lt) goto loc_82B9CA80;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82b9caa8
	goto loc_82B9CAA8;
loc_82B9CA80:
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// blt cr6,0x82b9ca94
	if (cr6.lt) goto loc_82B9CA94;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82b9caa8
	goto loc_82B9CAA8;
loc_82B9CA94:
	// addi r11,r31,47
	ctx.r11.s64 = ctx.r31.s64 + 47;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
loc_82B9CAA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b9cb4c
	if (!cr6.eq) goto loc_82B9CB4C;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x82b9cadc
	if (!cr6.lt) goto loc_82B9CADC;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bge cr6,0x82b9cadc
	if (!cr6.lt) goto loc_82B9CADC;
	// addi r11,r31,47
	ctx.r11.s64 = ctx.r31.s64 + 47;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stbx r28,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u8);
loc_82B9CADC:
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82B9CAE8:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82b9caf8
	if (cr6.lt) goto loc_82B9CAF8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82b9cb18
	goto loc_82B9CB18;
loc_82B9CAF8:
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// blt cr6,0x82b9cb08
	if (cr6.lt) goto loc_82B9CB08;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82b9cb18
	goto loc_82B9CB18;
loc_82B9CB08:
	// mulli r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 * 11;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r11,147(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 147);
loc_82B9CB18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82b9cb44
	if (!cr6.eq) goto loc_82B9CB44;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x82b9cb44
	if (!cr6.lt) goto loc_82B9CB44;
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bge cr6,0x82b9cb44
	if (!cr6.lt) goto loc_82B9CB44;
	// mulli r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 * 11;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r27,147(r11)
	PPC_STORE_U8(ctx.r11.u32 + 147, ctx.r27.u8);
loc_82B9CB44:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82b9cae8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B9CAE8;
loc_82B9CB4C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r25,3
	cr6.compare<uint32_t>(ctx.r25.u32, 3, xer);
	// blt cr6,0x82b9ca64
	if (cr6.lt) goto loc_82B9CA64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B9CB60;
	sub_82D1C1A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b9bb60
	ctx.lr = 0x82B9CB6C;
	sub_82B9BB60(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8315a628
	ctx.lr = 0x82B9CB84;
	sub_8315A628(ctx, base);
loc_82B9CB84:
	// lbz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 112);
	// lbz r10,114(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 114);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stb r11,112(r29)
	PPC_STORE_U8(ctx.r29.u32 + 112, ctx.r11.u8);
	// bne cr6,0x82b9cc40
	if (!cr6.eq) goto loc_82B9CC40;
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lwz r8,100(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r31,r29,96
	ctx.r31.s64 = ctx.r29.s64 + 96;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r6,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bge cr6,0x82b9cc40
	if (!cr6.lt) goto loc_82B9CC40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b9c1a0
	ctx.lr = 0x82B9CBC8;
	sub_82B9C1A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,112(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 112);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b9cbf0
	if (cr6.gt) goto loc_82B9CBF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9CBF0;
	sub_831CC188(ctx, base);
loc_82B9CBF0:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lbz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82d195d8
	ctx.lr = 0x82B9CC08;
	sub_82D195D8(ctx, base);
	// lbz r9,113(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 113);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b9cc30
	if (cr6.eq) goto loc_82B9CC30;
	// lbz r11,114(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 114);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9cc30
	if (!cr6.eq) goto loc_82B9CC30;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9CC30;
	sub_82D19788(ctx, base);
loc_82B9CC30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b9c520
	ctx.lr = 0x82B9CC38;
	sub_82B9C520(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B9CC40:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B9CC4C;
	sub_82D199D0(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82B9CC50;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B9CC5C;
	sub_82D195D8(ctx, base);
	// lbz r11,113(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 113);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9cca4
	if (cr6.eq) goto loc_82B9CCA4;
	// lbz r11,114(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 114);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// beq cr6,0x82b9cc94
	if (cr6.eq) goto loc_82B9CC94;
	// addi r11,r11,-11888
	ctx.r11.s64 = ctx.r11.s64 + -11888;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x82d20da8
	ctx.lr = 0x82B9CC8C;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B9CC94:
	// addi r5,r11,-11888
	ctx.r5.s64 = ctx.r11.s64 + -11888;
	// bl 0x82d20da8
	ctx.lr = 0x82B9CC9C;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B9CCA4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r24,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r24.u8);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103068
	ctx.lr = 0x82B9CCD0;
	sub_83103068(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9CCD8"))) PPC_WEAK_FUNC(sub_82B9CCD8);
PPC_FUNC_IMPL(__imp__sub_82B9CCD8) {
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
	// lbz r11,114(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 114);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9cde8
	if (!cr6.eq) goto loc_82B9CDE8;
	// lbz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b9cde8
	if (cr6.eq) goto loc_82B9CDE8;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r30,r3,96
	ctx.r30.s64 = ctx.r3.s64 + 96;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b9cd30
	if (cr6.gt) goto loc_82B9CD30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9CD30;
	sub_831CC188(ctx, base);
loc_82B9CD30:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x831156e8
	ctx.lr = 0x82B9CD40;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addis r3,r10,6
	ctx.r3.s64 = ctx.r10.s64 + 393216;
	// addi r3,r3,-30316
	ctx.r3.s64 = ctx.r3.s64 + -30316;
	// bl 0x82b9b908
	ctx.lr = 0x82B9CD54;
	sub_82B9B908(ctx, base);
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// stb r9,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r9.u8);
	// bl 0x82b9c1a0
	ctx.lr = 0x82B9CD68;
	sub_82B9C1A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r5,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b9cd90
	if (cr6.gt) goto loc_82B9CD90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9CD90;
	sub_831CC188(ctx, base);
loc_82B9CD90:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lbz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82d195d8
	ctx.lr = 0x82B9CDA8;
	sub_82D195D8(ctx, base);
	// lbz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b9cddc
	if (!cr6.eq) goto loc_82B9CDDC;
	// lbz r11,113(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 113);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9cddc
	if (cr6.eq) goto loc_82B9CDDC;
	// lbz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9cddc
	if (!cr6.eq) goto loc_82B9CDDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9CDDC;
	sub_82D19788(ctx, base);
loc_82B9CDDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9c520
	ctx.lr = 0x82B9CDE4;
	sub_82B9C520(ctx, base);
	// b 0x82b9ce24
	goto loc_82B9CE24;
loc_82B9CDE8:
	// bl 0x8308e078
	ctx.lr = 0x82B9CDEC;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B9CDF8;
	sub_82D195D8(ctx, base);
	// lbz r11,113(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 113);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82b9ce1c
	if (cr6.eq) goto loc_82B9CE1C;
	// addi r11,r11,-11872
	ctx.r11.s64 = ctx.r11.s64 + -11872;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// b 0x82b9ce20
	goto loc_82B9CE20;
loc_82B9CE1C:
	// addi r5,r11,-11872
	ctx.r5.s64 = ctx.r11.s64 + -11872;
loc_82B9CE20:
	// bl 0x82d20da8
	ctx.lr = 0x82B9CE24;
	sub_82D20DA8(ctx, base);
loc_82B9CE24:
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

__attribute__((alias("__imp__sub_82B9CE3C"))) PPC_WEAK_FUNC(sub_82B9CE3C);
PPC_FUNC_IMPL(__imp__sub_82B9CE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9CE40"))) PPC_WEAK_FUNC(sub_82B9CE40);
PPC_FUNC_IMPL(__imp__sub_82B9CE40) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82b9cf10
	if (!cr6.eq) goto loc_82B9CF10;
	// bl 0x8308e078
	ctx.lr = 0x82B9CE70;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B9CE7C;
	sub_82D195D8(ctx, base);
	// lbz r11,113(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 113);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9cebc
	if (cr6.eq) goto loc_82B9CEBC;
	// lbz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// beq cr6,0x82b9ceb0
	if (cr6.eq) goto loc_82B9CEB0;
	// addi r11,r11,-12200
	ctx.r11.s64 = ctx.r11.s64 + -12200;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x82d20da8
	ctx.lr = 0x82B9CEAC;
	sub_82D20DA8(ctx, base);
	// b 0x82b9cf18
	goto loc_82B9CF18;
loc_82B9CEB0:
	// addi r5,r11,-12200
	ctx.r5.s64 = ctx.r11.s64 + -12200;
	// bl 0x82d20da8
	ctx.lr = 0x82B9CEB8;
	sub_82D20DA8(ctx, base);
	// b 0x82b9cf18
	goto loc_82B9CF18;
loc_82B9CEBC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9CECC;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9CEDC;
	sub_82D19788(ctx, base);
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
	ctx.lr = 0x82B9CF0C;
	sub_83103068(ctx, base);
	// b 0x82b9cf18
	goto loc_82B9CF18;
loc_82B9CF10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9c520
	ctx.lr = 0x82B9CF18;
	sub_82B9C520(ctx, base);
loc_82B9CF18:
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

__attribute__((alias("__imp__sub_82B9CF30"))) PPC_WEAK_FUNC(sub_82B9CF30);
PPC_FUNC_IMPL(__imp__sub_82B9CF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82B9CF38;
	__savegprlr_19(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B9CF54;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B9CF6C;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11512
	ctx.r9.s64 = ctx.r11.s64 + -11512;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// stw r8,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r8.u32);
	// addi r25,r26,96
	ctx.r25.s64 = ctx.r26.s64 + 96;
	// stw r27,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r27.u32);
	// stw r27,100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 100, ctx.r27.u32);
	// stw r27,104(r26)
	PPC_STORE_U32(ctx.r26.u32 + 104, ctx.r27.u32);
	// stb r27,112(r26)
	PPC_STORE_U8(ctx.r26.u32 + 112, ctx.r27.u8);
	// stb r31,113(r26)
	PPC_STORE_U8(ctx.r26.u32 + 113, ctx.r31.u8);
	// stb r20,114(r26)
	PPC_STORE_U8(ctx.r26.u32 + 114, ctx.r20.u8);
	// bl 0x830ff290
	ctx.lr = 0x82B9CFA8;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B9CFAC;
	sub_830FF988(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b9d474
	if (!cr6.eq) goto loc_82B9D474;
	// bl 0x830ff290
	ctx.lr = 0x82B9CFBC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B9CFC0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82b9cfdc
	if (!cr6.eq) goto loc_82B9CFDC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d191f8
	ctx.lr = 0x82B9CFD0;
	sub_82D191F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82B9CFDC:
	// bl 0x830ff290
	ctx.lr = 0x82B9CFE0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B9CFE4;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgt cr6,0x82b9d474
	if (cr6.gt) goto loc_82B9D474;
	// lis r12,-32070
	ctx.r12.s64 = -2101739520;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-12280
	ctx.r12.s64 = ctx.r12.s64 + -12280;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B9D048;
	case 1:
		goto loc_82B9D474;
	case 2:
		goto loc_82B9D048;
	case 3:
		goto loc_82B9D048;
	case 4:
		goto loc_82B9D474;
	case 5:
		goto loc_82B9D048;
	case 6:
		goto loc_82B9D048;
	case 7:
		goto loc_82B9D474;
	case 8:
		goto loc_82B9D048;
	case 9:
		goto loc_82B9D474;
	case 10:
		goto loc_82B9D474;
	case 11:
		goto loc_82B9D474;
	case 12:
		goto loc_82B9D474;
	case 13:
		goto loc_82B9D474;
	case 14:
		goto loc_82B9D474;
	case 15:
		goto loc_82B9D048;
	default:
		return;
	}
	// lwz r21,-12216(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12216);
	// lwz r21,-11148(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11148);
	// lwz r21,-12216(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12216);
	// lwz r21,-12216(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12216);
	// lwz r21,-11148(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11148);
	// lwz r21,-12216(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12216);
	// lwz r21,-12216(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12216);
	// lwz r21,-11148(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11148);
	// lwz r21,-12216(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12216);
	// lwz r21,-11148(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11148);
	// lwz r21,-11148(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11148);
	// lwz r21,-11148(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11148);
	// lwz r21,-11148(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11148);
	// lwz r21,-11148(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11148);
	// lwz r21,-11148(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11148);
	// lwz r21,-12216(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12216);
loc_82B9D048:
	// li r19,2
	ctx.r19.s64 = 2;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// bl 0x8311e3d0
	ctx.lr = 0x82B9D06C;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x82B9D074;
	sub_8311D680(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B9D07C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r21,r31,24
	ctx.r21.u64 = ctx.r31.u32 & 0xFF;
	// addis r29,r11,6
	ctx.r29.s64 = ctx.r11.s64 + 393216;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// addi r29,r29,-30316
	ctx.r29.s64 = ctx.r29.s64 + -30316;
	// beq cr6,0x82b9d0a0
	if (cr6.eq) goto loc_82B9D0A0;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9d0a8
	if (!cr6.eq) goto loc_82B9D0A8;
loc_82B9D0A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a63b38
	ctx.lr = 0x82B9D0A8;
	sub_82A63B38(ctx, base);
loc_82B9D0A8:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82B9D0B0:
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbz r11,45(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b9d0c8
	if (!cr6.eq) goto loc_82B9D0C8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82b9d0d4
	goto loc_82B9D0D4;
loc_82B9D0C8:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82b9d10c
	if (!cr6.eq) goto loc_82B9D10C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82B9D0D4:
	// lbz r11,69(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 69);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82b9d10c
	if (!cr6.lt) goto loc_82B9D10C;
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bne cr6,0x82b9d0f8
	if (!cr6.eq) goto loc_82B9D0F8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x82b9d104
	goto loc_82B9D104;
loc_82B9D0F8:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x82b9d10c
	if (!cr6.eq) goto loc_82B9D10C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_82B9D104:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83546fd8
	ctx.lr = 0x82B9D10C;
	sub_83546FD8(ctx, base);
loc_82B9D10C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x82b9d0b0
	if (cr6.lt) goto loc_82B9D0B0;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x82b9d144
	if (!cr6.eq) goto loc_82B9D144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f73d60
	ctx.lr = 0x82B9D130;
	sub_82F73D60(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82B9D138;
	sub_82F73D60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82B9D144:
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r11,r23,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r23.s64;
	// srawi r31,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 3;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bgt cr6,0x82b9d1c0
	if (cr6.gt) goto loc_82B9D1C0;
	// bl 0x8399f8b8
	ctx.lr = 0x82B9D160;
	sub_8399F8B8(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8399edb0
	ctx.lr = 0x82B9D170;
	sub_8399EDB0(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x82b9d188
	if (!cr6.eq) goto loc_82B9D188;
	// ld r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lbz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
loc_82B9D188:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82B9D18C:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8315a628
	ctx.lr = 0x82B9D1A4;
	sub_8315A628(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82b9d18c
	if (cr6.lt) goto loc_82B9D18C;
	// cmplw cr6,r23,r28
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r28.u32, xer);
	// beq cr6,0x82b9d1c0
	if (cr6.eq) goto loc_82B9D1C0;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
loc_82B9D1C0:
	// lwz r24,112(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r11,r24,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r24.s64;
	// srawi r31,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 3;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bgt cr6,0x82b9d23c
	if (cr6.gt) goto loc_82B9D23C;
	// bl 0x8399f8b8
	ctx.lr = 0x82B9D1DC;
	sub_8399F8B8(ctx, base);
	// addi r4,r3,540
	ctx.r4.s64 = ctx.r3.s64 + 540;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8399edb0
	ctx.lr = 0x82B9D1EC;
	sub_8399EDB0(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x82b9d204
	if (!cr6.eq) goto loc_82B9D204;
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lbz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
loc_82B9D204:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82B9D208:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8315a628
	ctx.lr = 0x82B9D220;
	sub_8315A628(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82b9d208
	if (cr6.lt) goto loc_82B9D208;
	// cmplw cr6,r24,r29
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b9d23c
	if (cr6.eq) goto loc_82B9D23C;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
loc_82B9D23C:
	// subf r11,r23,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r23.s64;
	// subf r10,r24,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r24.s64;
	// srawi r31,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 3;
	// srawi r28,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 3;
	// stb r31,380(r26)
	PPC_STORE_U8(ctx.r26.u32 + 380, ctx.r31.u8);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stb r28,381(r26)
	PPC_STORE_U8(ctx.r26.u32 + 381, ctx.r28.u8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b9d288
	if (cr6.eq) goto loc_82B9D288;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// ble cr6,0x82b9d3a8
	if (!cr6.gt) goto loc_82B9D3A8;
loc_82B9D26C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83546fd8
	ctx.lr = 0x82B9D278;
	sub_83546FD8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b9d26c
	if (cr6.gt) goto loc_82B9D26C;
loc_82B9D288:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b9d2bc
	if (cr6.eq) goto loc_82B9D2BC;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// ble cr6,0x82b9d3b4
	if (!cr6.gt) goto loc_82B9D3B4;
loc_82B9D2A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83546fd8
	ctx.lr = 0x82B9D2AC;
	sub_83546FD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82b9d2a0
	if (cr6.gt) goto loc_82B9D2A0;
loc_82B9D2BC:
	// lbz r11,114(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 114);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9d324
	if (cr6.eq) goto loc_82B9D324;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r10,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b9d324
	if (cr0.eq) goto loc_82B9D324;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// ble cr6,0x82b9d3c0
	if (!cr6.gt) goto loc_82B9D3C0;
loc_82B9D2EC:
	// ldx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r9.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lbz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplw cr6,r22,r7
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b9d304
	if (!cr6.eq) goto loc_82B9D304;
	// stb r11,112(r26)
	PPC_STORE_U8(ctx.r26.u32 + 112, ctx.r11.u8);
loc_82B9D304:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b9d2ec
	if (cr6.gt) goto loc_82B9D2EC;
loc_82B9D324:
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
	// beq 0x82b9d430
	if (cr0.eq) goto loc_82B9D430;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r31,r11,17172
	ctx.r31.s64 = ctx.r11.s64 + 17172;
	// lwz r4,17172(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17172);
	// bl 0x82d20ae0
	ctx.lr = 0x82B9D34C;
	sub_82D20AE0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82B9D358;
	sub_82D20AE0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82B9D364;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d23390
	ctx.lr = 0x82B9D374;
	sub_82D23390(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b9bc00
	ctx.lr = 0x82B9D384;
	sub_82B9BC00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b9bc00
	ctx.lr = 0x82B9D394;
	sub_82B9BC00(ctx, base);
	// lbz r10,114(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 114);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b9d3cc
	if (cr6.eq) goto loc_82B9D3CC;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x82b9d404
	goto loc_82B9D404;
loc_82B9D3A8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9D3B4;
	sub_831CC188(ctx, base);
loc_82B9D3B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9D3C0;
	sub_831CC188(ctx, base);
loc_82B9D3C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9D3CC;
	sub_831CC188(ctx, base);
loc_82B9D3CC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lbz r10,112(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 112);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b9d3f4
	if (cr6.gt) goto loc_82B9D3F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9D3F4;
	sub_831CC188(ctx, base);
loc_82B9D3F4:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lbz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
loc_82B9D404:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B9D40C;
	sub_82D195D8(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82b9d430
	if (cr6.eq) goto loc_82B9D430;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9d430
	if (!cr6.eq) goto loc_82B9D430;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9D430;
	sub_82D19788(ctx, base);
loc_82B9D430:
	// lbz r11,113(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 113);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9d444
	if (!cr6.eq) goto loc_82B9D444;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d191f8
	ctx.lr = 0x82B9D444;
	sub_82D191F8(ctx, base);
loc_82B9D444:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82b9d45c
	if (cr6.eq) goto loc_82B9D45C;
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x825952b8
	ctx.lr = 0x82B9D45C;
	sub_825952B8(ctx, base);
loc_82B9D45C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82b9d474
	if (cr6.eq) goto loc_82B9D474;
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825952b8
	ctx.lr = 0x82B9D474;
	sub_825952B8(ctx, base);
loc_82B9D474:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9D480"))) PPC_WEAK_FUNC(sub_82B9D480);
PPC_FUNC_IMPL(__imp__sub_82B9D480) {
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
	// addi r9,r11,-11512
	ctx.r9.s64 = ctx.r11.s64 + -11512;
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
	// beq cr6,0x82b9d4c8
	if (cr6.eq) goto loc_82B9D4C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B9D4C8;
	sub_825952B8(ctx, base);
loc_82B9D4C8:
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
	ctx.lr = 0x82B9D4E0;
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

__attribute__((alias("__imp__sub_82B9D4F4"))) PPC_WEAK_FUNC(sub_82B9D4F4);
PPC_FUNC_IMPL(__imp__sub_82B9D4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9D4F8"))) PPC_WEAK_FUNC(sub_82B9D4F8);
PPC_FUNC_IMPL(__imp__sub_82B9D4F8) {
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
	// bl 0x82b9d480
	ctx.lr = 0x82B9D518;
	sub_82B9D480(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9d530
	if (cr6.eq) goto loc_82B9D530;
	// bl 0x82416268
	ctx.lr = 0x82B9D52C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B9D530:
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

__attribute__((alias("__imp__sub_82B9D548"))) PPC_WEAK_FUNC(sub_82B9D548);
PPC_FUNC_IMPL(__imp__sub_82B9D548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B9D550;
	__savegprlr_28(ctx, base);
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
	// li r4,384
	ctx.r4.s64 = 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x82B9D57C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9d5a0
	if (cr6.eq) goto loc_82B9D5A0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b9cf30
	ctx.lr = 0x82B9D598;
	sub_82B9CF30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B9D5A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9D5AC"))) PPC_WEAK_FUNC(sub_82B9D5AC);
PPC_FUNC_IMPL(__imp__sub_82B9D5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9D5B0"))) PPC_WEAK_FUNC(sub_82B9D5B0);
PPC_FUNC_IMPL(__imp__sub_82B9D5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B9D5B8;
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
	ctx.lr = 0x82B9D5CC;
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
	ctx.lr = 0x82B9D5E4;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-10776
	ctx.r9.s64 = ctx.r11.s64 + -10776;
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
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,17400(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17400);
	// bl 0x82d23390
	ctx.lr = 0x82B9D610;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9D61C"))) PPC_WEAK_FUNC(sub_82B9D61C);
PPC_FUNC_IMPL(__imp__sub_82B9D61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9D620"))) PPC_WEAK_FUNC(sub_82B9D620);
PPC_FUNC_IMPL(__imp__sub_82B9D620) {
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
	// addi r9,r11,-10776
	ctx.r9.s64 = ctx.r11.s64 + -10776;
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
	ctx.lr = 0x82B9D658;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b9d670
	if (cr6.eq) goto loc_82B9D670;
	// bl 0x82416268
	ctx.lr = 0x82B9D66C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B9D670:
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

__attribute__((alias("__imp__sub_82B9D688"))) PPC_WEAK_FUNC(sub_82B9D688);
PPC_FUNC_IMPL(__imp__sub_82B9D688) {
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
	ctx.lr = 0x82B9D6BC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9d6d4
	if (cr6.eq) goto loc_82B9D6D4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b9d5b0
	ctx.lr = 0x82B9D6D0;
	sub_82B9D5B0(ctx, base);
	// b 0x82b9d6d8
	goto loc_82B9D6D8;
loc_82B9D6D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B9D6D8:
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

__attribute__((alias("__imp__sub_82B9D6F0"))) PPC_WEAK_FUNC(sub_82B9D6F0);
PPC_FUNC_IMPL(__imp__sub_82B9D6F0) {
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
	// bl 0x82d1c1a8
	ctx.lr = 0x82B9D70C;
	sub_82D1C1A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b9d73c
	if (cr6.eq) goto loc_82B9D73C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82b9d77c
	if (!cr6.eq) goto loc_82B9D77C;
	// bl 0x831021a0
	ctx.lr = 0x82B9D724;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,23
	ctx.r4.u64 = ctx.r4.u64 | 23;
	// bl 0x83102a08
	ctx.lr = 0x82B9D734;
	sub_83102A08(ctx, base);
	// bl 0x839a04b8
	ctx.lr = 0x82B9D738;
	sub_839A04B8(ctx, base);
	// b 0x82b9d78c
	goto loc_82B9D78C;
loc_82B9D73C:
	// bl 0x831021a0
	ctx.lr = 0x82B9D740;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,25
	ctx.r4.u64 = ctx.r4.u64 | 25;
	// bl 0x83102a08
	ctx.lr = 0x82B9D750;
	sub_83102A08(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82B9D754;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,23
	ctx.r4.u64 = ctx.r4.u64 | 23;
	// bl 0x83102a08
	ctx.lr = 0x82B9D764;
	sub_83102A08(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82B9D768;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x83102a08
	ctx.lr = 0x82B9D778;
	sub_83102A08(ctx, base);
	// b 0x82b9d78c
	goto loc_82B9D78C;
loc_82B9D77C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82b9d7a8
	if (cr6.lt) goto loc_82B9D7A8;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bge cr6,0x82b9d7a8
	if (!cr6.lt) goto loc_82B9D7A8;
loc_82B9D78C:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,17404
	ctx.r9.s64 = ctx.r11.s64 + 17404;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d20da8
	ctx.lr = 0x82B9D7A8;
	sub_82D20DA8(ctx, base);
loc_82B9D7A8:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bne cr6,0x82b9d7c4
	if (!cr6.eq) goto loc_82B9D7C4;
	// bl 0x82d16ed0
	ctx.lr = 0x82B9D7B4;
	sub_82D16ED0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d16d90
	ctx.lr = 0x82B9D7C4;
	sub_82D16D90(ctx, base);
loc_82B9D7C4:
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

__attribute__((alias("__imp__sub_82B9D7DC"))) PPC_WEAK_FUNC(sub_82B9D7DC);
PPC_FUNC_IMPL(__imp__sub_82B9D7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9D7E0"))) PPC_WEAK_FUNC(sub_82B9D7E0);
PPC_FUNC_IMPL(__imp__sub_82B9D7E0) {
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
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9D800;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9D810;
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

__attribute__((alias("__imp__sub_82B9D824"))) PPC_WEAK_FUNC(sub_82B9D824);
PPC_FUNC_IMPL(__imp__sub_82B9D824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9D828"))) PPC_WEAK_FUNC(sub_82B9D828);
PPC_FUNC_IMPL(__imp__sub_82B9D828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82B9D830;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x82B9D83C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a47d40
	ctx.lr = 0x82B9D84C;
	sub_82A47D40(ctx, base);
	// clrlwi r26,r3,24
	ctx.r26.u64 = ctx.r3.u32 & 0xFF;
	// li r11,10
	ctx.r11.s64 = 10;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r22,r10,r11
	ctx.r22.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82B9D860;
	sub_831156E8(ctx, base);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r11,r11,24160
	ctx.r11.s64 = ctx.r11.s64 + 24160;
	// bne cr6,0x82b9d880
	if (!cr6.eq) goto loc_82B9D880;
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// b 0x82b9d884
	goto loc_82B9D884;
loc_82B9D880:
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
loc_82B9D884:
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// bne cr6,0x82b9d890
	if (!cr6.eq) goto loc_82B9D890;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82B9D890:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,15392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15392);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b9d8bc
	if (cr6.eq) goto loc_82B9D8BC;
	// bl 0x831156e8
	ctx.lr = 0x82B9D8AC;
	sub_831156E8(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9d8bc
	if (cr6.eq) goto loc_82B9D8BC;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82B9D8BC:
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// bl 0x8399f8b8
	ctx.lr = 0x82B9D8C8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 * 528;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,1072
	ctx.r27.s64 = ctx.r11.s64 + 1072;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82b9d9c4
	if (cr6.eq) goto loc_82B9D9C4;
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
loc_82B9D8E4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x839a0478
	ctx.lr = 0x82B9D8F4;
	sub_839A0478(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8399f478
	ctx.lr = 0x82B9D900;
	sub_8399F478(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8399f4f0
	ctx.lr = 0x82B9D90C;
	sub_8399F4F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825832f8
	ctx.lr = 0x82B9D918;
	sub_825832F8(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b9d99c
	if (cr6.eq) goto loc_82B9D99C;
	// li r4,25
	ctx.r4.s64 = 25;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8399f270
	ctx.lr = 0x82B9D92C;
	sub_8399F270(ctx, base);
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// li r4,5
	ctx.r4.s64 = 5;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9d958
	if (cr6.eq) goto loc_82B9D958;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f3d0
	ctx.lr = 0x82B9D94C;
	sub_8399F3D0(ctx, base);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831513a8
	ctx.lr = 0x82B9D954;
	sub_831513A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B9D958:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831518e0
	ctx.lr = 0x82B9D964;
	sub_831518E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bne cr6,0x82b9d984
	if (!cr6.eq) goto loc_82B9D984;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r23,r22
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, xer);
	// ble cr6,0x82b9d99c
	if (!cr6.gt) goto loc_82B9D99C;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82b9d99c
	goto loc_82B9D99C;
loc_82B9D984:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82b9d99c
	if (!cr6.eq) goto loc_82B9D99C;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r22
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r22.u32, xer);
	// ble cr6,0x82b9d99c
	if (!cr6.gt) goto loc_82B9D99C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82B9D99C:
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8399f400
	ctx.lr = 0x82B9D9A8;
	sub_8399F400(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x839a0440
	ctx.lr = 0x82B9D9B8;
	sub_839A0440(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// blt cr6,0x82b9d8e4
	if (cr6.lt) goto loc_82B9D8E4;
loc_82B9D9C4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9D9CC"))) PPC_WEAK_FUNC(sub_82B9D9CC);
PPC_FUNC_IMPL(__imp__sub_82B9D9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9D9D0"))) PPC_WEAK_FUNC(sub_82B9D9D0);
PPC_FUNC_IMPL(__imp__sub_82B9D9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B9D9D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9D9F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82B9D9FC;
	sub_82D19A88(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9dbe8
	if (cr6.eq) goto loc_82B9DBE8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-10868
	ctx.r31.s64 = ctx.r11.s64 + -10868;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// bl 0x82d2f098
	ctx.lr = 0x82B9DA18;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82b9da28
	if (!cr6.eq) goto loc_82B9DA28;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B9DA28:
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B9DA34;
	sub_837B0C10(ctx, base);
	// lis r5,12
	ctx.r5.s64 = 786432;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// bl 0x82a69a28
	ctx.lr = 0x82B9DA48;
	sub_82A69A28(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82B9DA54;
	sub_82D2F098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82b9da68
	if (!cr6.eq) goto loc_82B9DA68;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B9DA68:
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B9DA74;
	sub_837B0C10(ctx, base);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,37
	ctx.r5.u64 = ctx.r5.u64 | 37;
	// bl 0x82a69a28
	ctx.lr = 0x82B9DA88;
	sub_82A69A28(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B9DA8C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B9DA90;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// bne cr6,0x82b9daac
	if (!cr6.eq) goto loc_82B9DAAC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B9DAAC;
	sub_82D2B608(ctx, base);
loc_82B9DAAC:
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82B9DAB8;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82b9dac8
	if (!cr6.eq) goto loc_82B9DAC8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B9DAC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B9DAD4;
	sub_837B0C10(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,91
	ctx.r5.u64 = ctx.r5.u64 | 91;
	// bl 0x82a69a28
	ctx.lr = 0x82B9DAE8;
	sub_82A69A28(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9DAF0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d510
	ctx.lr = 0x82B9DB00;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9db18
	if (cr6.eq) goto loc_82B9DB18;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,139
	ctx.r4.u64 = ctx.r4.u64 | 139;
	// bl 0x82d30340
	ctx.lr = 0x82B9DB18;
	sub_82D30340(ctx, base);
loc_82B9DB18:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82B9DB20;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9dbd0
	if (!cr6.eq) goto loc_82B9DBD0;
	// bl 0x8399f8b8
	ctx.lr = 0x82B9DB30;
	sub_8399F8B8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r30,r3,1072
	ctx.r30.s64 = ctx.r3.s64 + 1072;
loc_82B9DB44:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839a0138
	ctx.lr = 0x82B9DB50;
	sub_839A0138(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B9DB54:
	// clrlwi r26,r31,24
	ctx.r26.u64 = ctx.r31.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0368
	ctx.lr = 0x82B9DB68;
	sub_839A0368(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399eea0
	ctx.lr = 0x82B9DB80;
	sub_8399EEA0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x839a0328
	ctx.lr = 0x82B9DB98;
	sub_839A0328(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// blt cr6,0x82b9db54
	if (cr6.lt) goto loc_82B9DB54;
	// li r5,528
	ctx.r5.s64 = 528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B9DBB4;
	sub_831CE980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b9d828
	ctx.lr = 0x82B9DBC0;
	sub_82B9D828(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,528
	ctx.r30.s64 = ctx.r30.s64 + 528;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x82b9db44
	if (cr6.lt) goto loc_82B9DB44;
loc_82B9DBD0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82B9DBE8;
	sub_82D20F50(ctx, base);
loc_82B9DBE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9DBF4"))) PPC_WEAK_FUNC(sub_82B9DBF4);
PPC_FUNC_IMPL(__imp__sub_82B9DBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9DBF8"))) PPC_WEAK_FUNC(sub_82B9DBF8);
PPC_FUNC_IMPL(__imp__sub_82B9DBF8) {
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
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2f500
	ctx.lr = 0x82B9DC24;
	sub_82D2F500(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// addi r9,r11,-9760
	ctx.r9.s64 = ctx.r11.s64 + -9760;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x8311e3d0
	ctx.lr = 0x82B9DC44;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x82B9DC4C;
	sub_8311D680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B9DC58;
	sub_82D195D8(ctx, base);
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

__attribute__((alias("__imp__sub_82B9DC74"))) PPC_WEAK_FUNC(sub_82B9DC74);
PPC_FUNC_IMPL(__imp__sub_82B9DC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9DC78"))) PPC_WEAK_FUNC(sub_82B9DC78);
PPC_FUNC_IMPL(__imp__sub_82B9DC78) {
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
	// addi r9,r11,-9760
	ctx.r9.s64 = ctx.r11.s64 + -9760;
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
	// bl 0x82d2f5b0
	ctx.lr = 0x82B9DCB0;
	sub_82D2F5B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b9dcc8
	if (cr6.eq) goto loc_82B9DCC8;
	// bl 0x82416268
	ctx.lr = 0x82B9DCC4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B9DCC8:
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

__attribute__((alias("__imp__sub_82B9DCE0"))) PPC_WEAK_FUNC(sub_82B9DCE0);
PPC_FUNC_IMPL(__imp__sub_82B9DCE0) {
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
	// lwz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b9dd0c
	if (!cr6.eq) goto loc_82B9DD0C;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// ori r4,r4,133
	ctx.r4.u64 = ctx.r4.u64 | 133;
	// b 0x82b9dd9c
	goto loc_82B9DD9C;
loc_82B9DD0C:
	// bl 0x830ff290
	ctx.lr = 0x82B9DD10;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B9DD14;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x82b9dd94
	if (cr6.gt) goto loc_82B9DD94;
	// lis r12,-32070
	ctx.r12.s64 = -2101739520;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8904
	ctx.r12.s64 = ctx.r12.s64 + -8904;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B9DD70;
	case 1:
		goto loc_82B9DD70;
	case 2:
		goto loc_82B9DD70;
	case 3:
		goto loc_82B9DD70;
	case 4:
		goto loc_82B9DD70;
	case 5:
		goto loc_82B9DD70;
	case 6:
		goto loc_82B9DD94;
	case 7:
		goto loc_82B9DD94;
	case 8:
		goto loc_82B9DD7C;
	case 9:
		goto loc_82B9DD7C;
	case 10:
		goto loc_82B9DD7C;
	case 11:
		goto loc_82B9DD88;
	case 12:
		goto loc_82B9DD7C;
	case 13:
		goto loc_82B9DD7C;
	default:
		return;
	}
	// lwz r21,-8848(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8848);
	// lwz r21,-8848(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8848);
	// lwz r21,-8848(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8848);
	// lwz r21,-8848(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8848);
	// lwz r21,-8848(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8848);
	// lwz r21,-8848(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8848);
	// lwz r21,-8812(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8812);
	// lwz r21,-8812(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8812);
	// lwz r21,-8836(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8836);
	// lwz r21,-8836(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8836);
	// lwz r21,-8836(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8836);
	// lwz r21,-8824(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8824);
	// lwz r21,-8836(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8836);
	// lwz r21,-8836(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8836);
loc_82B9DD70:
	// lis r4,299
	ctx.r4.s64 = 19595264;
	// ori r4,r4,130
	ctx.r4.u64 = ctx.r4.u64 | 130;
	// b 0x82b9dd9c
	goto loc_82B9DD9C;
loc_82B9DD7C:
	// lis r4,515
	ctx.r4.s64 = 33751040;
	// ori r4,r4,63
	ctx.r4.u64 = ctx.r4.u64 | 63;
	// b 0x82b9dd9c
	goto loc_82B9DD9C;
loc_82B9DD88:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// b 0x82b9dd9c
	goto loc_82B9DD9C;
loc_82B9DD94:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,153
	ctx.r4.u64 = ctx.r4.u64 | 153;
loc_82B9DD9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2ada8
	ctx.lr = 0x82B9DDA4;
	sub_82D2ADA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2f5d0
	ctx.lr = 0x82B9DDAC;
	sub_82D2F5D0(ctx, base);
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

__attribute__((alias("__imp__sub_82B9DDC4"))) PPC_WEAK_FUNC(sub_82B9DDC4);
PPC_FUNC_IMPL(__imp__sub_82B9DDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9DDC8"))) PPC_WEAK_FUNC(sub_82B9DDC8);
PPC_FUNC_IMPL(__imp__sub_82B9DDC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B9DDD0;
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
	// li r4,600
	ctx.r4.s64 = 600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B9DDF8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9de3c
	if (cr6.eq) goto loc_82B9DE3C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b9de24
	if (cr6.lt) goto loc_82B9DE24;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82b9dbf8
	ctx.lr = 0x82B9DE1C;
	sub_82B9DBF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B9DE24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82b9dbf8
	ctx.lr = 0x82B9DE34;
	sub_82B9DBF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B9DE3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9DE48"))) PPC_WEAK_FUNC(sub_82B9DE48);
PPC_FUNC_IMPL(__imp__sub_82B9DE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B9DE50;
	__savegprlr_29(ctx, base);
	// stwu r1,-2624(r1)
	ea = -2624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82B9DE58;
	sub_82D86078(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r10,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bl 0x82e7e2f8
	ctx.lr = 0x82B9DE70;
	sub_82E7E2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9deb4
	if (cr6.eq) goto loc_82B9DEB4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,-10429
	ctx.r31.s64 = ctx.r11.s64 + -10429;
	// addi r4,r31,485
	ctx.r4.s64 = ctx.r31.s64 + 485;
	// bl 0x837b0c10
	ctx.lr = 0x82B9DE90;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B9DEA0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,269
	ctx.r6.s64 = 269;
	// bl 0x82e7eb70
	ctx.lr = 0x82B9DEB4;
	sub_82E7EB70(ctx, base);
loc_82B9DEB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// bl 0x82e765e8
	ctx.lr = 0x82B9DEC8;
	sub_82E765E8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82e76b28
	ctx.lr = 0x82B9DED0;
	sub_82E76B28(ctx, base);
	// addi r1,r1,2624
	ctx.r1.s64 = ctx.r1.s64 + 2624;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9DED8"))) PPC_WEAK_FUNC(sub_82B9DED8);
PPC_FUNC_IMPL(__imp__sub_82B9DED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B9DEE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-2656(r1)
	ea = -2656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82b9e118
	if (cr6.gt) goto loc_82B9E118;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b9dfac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B9DFAC;
	// bdzf 4*cr6+eq,0x82b9e0e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B9E0E8;
	// bne cr6,0x82b9df10
	if (!cr6.eq) goto loc_82B9DF10;
loc_82B9DF10:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9df30
	if (cr6.eq) goto loc_82B9DF30;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-9952
	ctx.r11.s64 = ctx.r11.s64 + -9952;
	// addi r5,r11,-200
	ctx.r5.s64 = ctx.r11.s64 + -200;
	// b 0x82b9e128
	goto loc_82B9E128;
loc_82B9DF30:
	// bl 0x830ff290
	ctx.lr = 0x82B9DF34;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B9DF38;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x82b9df94
	if (!cr6.eq) goto loc_82B9DF94;
	// bl 0x831156e8
	ctx.lr = 0x82B9DF44;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9df7c
	if (cr6.eq) goto loc_82B9DF7C;
	// bl 0x831156e8
	ctx.lr = 0x82B9DF54;
	sub_831156E8(ctx, base);
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82dad2e0
	ctx.lr = 0x82B9DF5C;
	sub_82DAD2E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8312d788
	ctx.lr = 0x82B9DF70;
	sub_8312D788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b9c8
	ctx.lr = 0x82B9DF7C;
	sub_8312B9C8(ctx, base);
loc_82B9DF7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b9de48
	ctx.lr = 0x82B9DF84;
	sub_82B9DE48(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-9952
	ctx.r11.s64 = ctx.r11.s64 + -9952;
	// addi r5,r11,-188
	ctx.r5.s64 = ctx.r11.s64 + -188;
	// b 0x82b9e124
	goto loc_82B9E124;
loc_82B9DF94:
	// bl 0x82d14ce8
	ctx.lr = 0x82B9DF98;
	sub_82D14CE8(ctx, base);
	// bl 0x82d130b8
	ctx.lr = 0x82B9DF9C;
	sub_82D130B8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-9952
	ctx.r11.s64 = ctx.r11.s64 + -9952;
	// addi r5,r11,-160
	ctx.r5.s64 = ctx.r11.s64 + -160;
	// b 0x82b9e124
	goto loc_82B9E124;
loc_82B9DFAC:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9dfcc
	if (cr6.eq) goto loc_82B9DFCC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-9952
	ctx.r11.s64 = ctx.r11.s64 + -9952;
	// addi r5,r11,-152
	ctx.r5.s64 = ctx.r11.s64 + -152;
	// b 0x82b9e128
	goto loc_82B9E128;
loc_82B9DFCC:
	// bl 0x830ff290
	ctx.lr = 0x82B9DFD0;
	sub_830FF290(ctx, base);
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r31,44
	cr6.compare<uint32_t>(ctx.r31.u32, 44, xer);
	// addi r28,r11,-9952
	ctx.r28.s64 = ctx.r11.s64 + -9952;
	// beq cr6,0x82b9e054
	if (cr6.eq) goto loc_82B9E054;
	// cmplwi cr6,r31,45
	cr6.compare<uint32_t>(ctx.r31.u32, 45, xer);
	// beq cr6,0x82b9e054
	if (cr6.eq) goto loc_82B9E054;
	// cmplwi cr6,r31,51
	cr6.compare<uint32_t>(ctx.r31.u32, 51, xer);
	// beq cr6,0x82b9e054
	if (cr6.eq) goto loc_82B9E054;
	// cmplwi cr6,r31,53
	cr6.compare<uint32_t>(ctx.r31.u32, 53, xer);
	// beq cr6,0x82b9e054
	if (cr6.eq) goto loc_82B9E054;
	// cmplwi cr6,r31,57
	cr6.compare<uint32_t>(ctx.r31.u32, 57, xer);
	// beq cr6,0x82b9e02c
	if (cr6.eq) goto loc_82B9E02C;
	// cmplwi cr6,r31,58
	cr6.compare<uint32_t>(ctx.r31.u32, 58, xer);
	// beq cr6,0x82b9e02c
	if (cr6.eq) goto loc_82B9E02C;
	// cmplwi cr6,r31,59
	cr6.compare<uint32_t>(ctx.r31.u32, 59, xer);
	// beq cr6,0x82b9e02c
	if (cr6.eq) goto loc_82B9E02C;
	// cmplwi cr6,r31,47
	cr6.compare<uint32_t>(ctx.r31.u32, 47, xer);
	// bne cr6,0x82b9e038
	if (!cr6.eq) goto loc_82B9E038;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b9de48
	ctx.lr = 0x82B9E024;
	sub_82B9DE48(ctx, base);
	// addi r5,r28,-20
	ctx.r5.s64 = ctx.r28.s64 + -20;
	// b 0x82b9e124
	goto loc_82B9E124;
loc_82B9E02C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82dd2568
	ctx.lr = 0x82B9E038;
	sub_82DD2568(ctx, base);
loc_82B9E038:
	// bl 0x831021a0
	ctx.lr = 0x82B9E03C;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,31
	ctx.r4.u64 = ctx.r4.u64 | 31;
	// bl 0x83102a08
	ctx.lr = 0x82B9E04C;
	sub_83102A08(ctx, base);
	// addi r5,r28,-20
	ctx.r5.s64 = ctx.r28.s64 + -20;
	// b 0x82b9e124
	goto loc_82B9E124;
loc_82B9E054:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x82e7e2f8
	ctx.lr = 0x82B9E060;
	sub_82E7E2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e09c
	if (cr6.eq) goto loc_82B9E09C;
	// addi r4,r28,-120
	ctx.r4.s64 = ctx.r28.s64 + -120;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B9E078;
	sub_837B0C10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r28,-478
	ctx.r4.s64 = ctx.r28.s64 + -478;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B9E088;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,203
	ctx.r6.s64 = 203;
	// bl 0x82e7eb70
	ctx.lr = 0x82B9E09C;
	sub_82E7EB70(ctx, base);
loc_82B9E09C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x82e765e8
	ctx.lr = 0x82B9E0AC;
	sub_82E765E8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82e76b28
	ctx.lr = 0x82B9E0B4;
	sub_82E76B28(ctx, base);
	// cmplwi cr6,r31,53
	cr6.compare<uint32_t>(ctx.r31.u32, 53, xer);
	// bne cr6,0x82b9e0e0
	if (!cr6.eq) goto loc_82B9E0E0;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e0e0
	if (cr6.eq) goto loc_82B9E0E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9E0E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9E0E0:
	// addi r5,r28,-20
	ctx.r5.s64 = ctx.r28.s64 + -20;
	// b 0x82b9e124
	goto loc_82B9E124;
loc_82B9E0E8:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// beq cr6,0x82b9e10c
	if (cr6.eq) goto loc_82B9E10C;
	// addi r11,r11,-9952
	ctx.r11.s64 = ctx.r11.s64 + -9952;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// b 0x82b9e12c
	goto loc_82B9E12C;
loc_82B9E10C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-9952
	ctx.r5.s64 = ctx.r11.s64 + -9952;
	// b 0x82b9e12c
	goto loc_82B9E12C;
loc_82B9E118:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-9952
	ctx.r11.s64 = ctx.r11.s64 + -9952;
	// addi r5,r11,-208
	ctx.r5.s64 = ctx.r11.s64 + -208;
loc_82B9E124:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B9E128:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82B9E12C:
	// bl 0x82d20da8
	ctx.lr = 0x82B9E130;
	sub_82D20DA8(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9e150
	if (!cr6.eq) goto loc_82B9E150;
	// bl 0x831156e8
	ctx.lr = 0x82B9E140;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,30360
	ctx.r9.u64 = ctx.r11.u64 | 30360;
	// stbx r26,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r26.u8);
loc_82B9E150:
	// addi r1,r1,2656
	ctx.r1.s64 = ctx.r1.s64 + 2656;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9E158"))) PPC_WEAK_FUNC(sub_82B9E158);
PPC_FUNC_IMPL(__imp__sub_82B9E158) {
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
	// bl 0x82d19bb0
	ctx.lr = 0x82B9E170;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b9e190
	if (cr6.lt) goto loc_82B9E190;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82b9e188
	if (!cr6.eq) goto loc_82B9E188;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82B9E188:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9ded8
	ctx.lr = 0x82B9E190;
	sub_82B9DED8(ctx, base);
loc_82B9E190:
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

__attribute__((alias("__imp__sub_82B9E1A4"))) PPC_WEAK_FUNC(sub_82B9E1A4);
PPC_FUNC_IMPL(__imp__sub_82B9E1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9E1A8"))) PPC_WEAK_FUNC(sub_82B9E1A8);
PPC_FUNC_IMPL(__imp__sub_82B9E1A8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b9ded8
	sub_82B9DED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9E1B0"))) PPC_WEAK_FUNC(sub_82B9E1B0);
PPC_FUNC_IMPL(__imp__sub_82B9E1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B9E1B8;
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
	ctx.lr = 0x82B9E1CC;
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
	ctx.lr = 0x82B9E1E4;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-8976
	ctx.r9.s64 = ctx.r11.s64 + -8976;
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
	// lwz r4,17672(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17672);
	// bl 0x82d20ae0
	ctx.lr = 0x82B9E20C;
	sub_82D20AE0(ctx, base);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,17676(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 17676);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82B9E220;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9E22C"))) PPC_WEAK_FUNC(sub_82B9E22C);
PPC_FUNC_IMPL(__imp__sub_82B9E22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9E230"))) PPC_WEAK_FUNC(sub_82B9E230);
PPC_FUNC_IMPL(__imp__sub_82B9E230) {
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
	// addi r9,r11,-8976
	ctx.r9.s64 = ctx.r11.s64 + -8976;
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
	ctx.lr = 0x82B9E268;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b9e280
	if (cr6.eq) goto loc_82B9E280;
	// bl 0x82416268
	ctx.lr = 0x82B9E27C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B9E280:
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

__attribute__((alias("__imp__sub_82B9E298"))) PPC_WEAK_FUNC(sub_82B9E298);
PPC_FUNC_IMPL(__imp__sub_82B9E298) {
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
	// blt cr6,0x82b9e2c0
	if (cr6.lt) goto loc_82B9E2C0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b9e2c4
	goto loc_82B9E2C4;
loc_82B9E2C0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B9E2C4:
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
	ctx.lr = 0x82B9E2E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e2f8
	if (cr6.eq) goto loc_82B9E2F8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b9e1b0
	ctx.lr = 0x82B9E2F4;
	sub_82B9E1B0(ctx, base);
	// b 0x82b9e2fc
	goto loc_82B9E2FC;
loc_82B9E2F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B9E2FC:
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

__attribute__((alias("__imp__sub_82B9E314"))) PPC_WEAK_FUNC(sub_82B9E314);
PPC_FUNC_IMPL(__imp__sub_82B9E314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9E318"))) PPC_WEAK_FUNC(sub_82B9E318);
PPC_FUNC_IMPL(__imp__sub_82B9E318) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83108b68
	ctx.lr = 0x82B9E338;
	sub_83108B68(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_82B9E354:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b9e354
	if (!cr6.eq) goto loc_82B9E354;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B9E378;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_82B9E390"))) PPC_WEAK_FUNC(sub_82B9E390);
PPC_FUNC_IMPL(__imp__sub_82B9E390) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82aa87f0
	ctx.lr = 0x82B9E3B4;
	sub_82AA87F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83108b68
	ctx.lr = 0x82B9E3C0;
	sub_83108B68(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_82B9E3DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b9e3dc
	if (!cr6.eq) goto loc_82B9E3DC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B9E400;
	sub_8259CC28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa87f0
	ctx.lr = 0x82B9E408;
	sub_82AA87F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83108b28
	ctx.lr = 0x82B9E414;
	sub_83108B28(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b9e434
	if (!cr6.eq) goto loc_82B9E434;
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// ori r4,r4,268
	ctx.r4.u64 = ctx.r4.u64 | 268;
	// bl 0x82d042a8
	ctx.lr = 0x82B9E430;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B9E434:
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

__attribute__((alias("__imp__sub_82B9E44C"))) PPC_WEAK_FUNC(sub_82B9E44C);
PPC_FUNC_IMPL(__imp__sub_82B9E44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9E450"))) PPC_WEAK_FUNC(sub_82B9E450);
PPC_FUNC_IMPL(__imp__sub_82B9E450) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x82B9E470;
	sub_83102DB0(ctx, base);
	// bl 0x83108968
	ctx.lr = 0x82B9E474;
	sub_83108968(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e644
	if (cr6.eq) goto loc_82B9E644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9E488;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,17680(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17680);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B9E4A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e4b8
	if (cr6.eq) goto loc_82B9E4B8;
	// lis r4,300
	ctx.r4.s64 = 19660800;
	// ori r4,r4,584
	ctx.r4.u64 = ctx.r4.u64 | 584;
	// bl 0x82d29598
	ctx.lr = 0x82B9E4B8;
	sub_82D29598(ctx, base);
loc_82B9E4B8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b9e318
	ctx.lr = 0x82B9E4C8;
	sub_82B9E318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9E4D0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,17688(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17688);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B9E4EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e504
	if (cr6.eq) goto loc_82B9E504;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82d291e0
	ctx.lr = 0x82B9E504;
	sub_82D291E0(ctx, base);
loc_82B9E504:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b9e390
	ctx.lr = 0x82B9E514;
	sub_82B9E390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9E51C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,17696(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17696);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B9E538;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e550
	if (cr6.eq) goto loc_82B9E550;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82B9E550;
	sub_82D291E0(ctx, base);
loc_82B9E550:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B9E558;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B9E560;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e574
	if (cr6.eq) goto loc_82B9E574;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9E574;
	sub_82D2AEC8(ctx, base);
loc_82B9E574:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B9E584;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e59c
	if (cr6.eq) goto loc_82B9E59C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B9E59C;
	sub_82D2B608(ctx, base);
loc_82B9E59C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B9E5AC;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e5c4
	if (cr6.eq) goto loc_82B9E5C4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B9E5C4;
	sub_82D2B608(ctx, base);
loc_82B9E5C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B9E5CC;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e5e4
	if (cr6.eq) goto loc_82B9E5E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B9E5DC;
	sub_82D19A68(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82B9E5E0;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d390c0
	ctx.lr = 0x82B9E5E4;
	sub_82D390C0(ctx, base);
loc_82B9E5E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B9E5F4;
	sub_82D19788(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b9e614
	if (cr6.lt) goto loc_82B9E614;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B9E614;
	sub_825952B8(ctx, base);
loc_82B9E614:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// blt cr6,0x82b9e644
	if (cr6.lt) goto loc_82B9E644;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B9E644;
	sub_825952B8(ctx, base);
loc_82B9E644:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82B9E660"))) PPC_WEAK_FUNC(sub_82B9E660);
PPC_FUNC_IMPL(__imp__sub_82B9E660) {
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
	// bl 0x82d26ed8
	ctx.lr = 0x82B9E670;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x82B9E678;
	sub_82D26900(ctx, base);
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

__attribute__((alias("__imp__sub_82B9E68C"))) PPC_WEAK_FUNC(sub_82B9E68C);
PPC_FUNC_IMPL(__imp__sub_82B9E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9E690"))) PPC_WEAK_FUNC(sub_82B9E690);
PPC_FUNC_IMPL(__imp__sub_82B9E690) {
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
	// bl 0x8308e078
	ctx.lr = 0x82B9E6AC;
	sub_8308E078(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x82B9E6B8;
	sub_8353B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e748
	if (cr6.eq) goto loc_82B9E748;
	// lbz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9e748
	if (!cr6.eq) goto loc_82B9E748;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9E6E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b9e6fc
	if (cr6.eq) goto loc_82B9E6FC;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// b 0x82b9e748
	goto loc_82B9E748;
loc_82B9E6FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9E714;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b9e748
	if (cr6.eq) goto loc_82B9E748;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,117
	ctx.r4.s64 = 117;
	// stb r11,132(r30)
	PPC_STORE_U8(ctx.r30.u32 + 132, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82B9E734;
	sub_82D17DA0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,-7376
	ctx.r5.s64 = ctx.r10.s64 + -7376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B9E748;
	sub_82D20DA8(ctx, base);
loc_82B9E748:
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

__attribute__((alias("__imp__sub_82B9E764"))) PPC_WEAK_FUNC(sub_82B9E764);
PPC_FUNC_IMPL(__imp__sub_82B9E764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9E768"))) PPC_WEAK_FUNC(sub_82B9E768);
PPC_FUNC_IMPL(__imp__sub_82B9E768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B9E770;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82b9e7f0
	if (!cr6.eq) goto loc_82B9E7F0;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,18004
	ctx.r29.s64 = ctx.r11.s64 + 18004;
loc_82B9E790:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B9E798;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r11,r29,-20
	ctx.r11.s64 = ctx.r29.s64 + -20;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B9E7B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2aff8
	ctx.lr = 0x82B9E7C0;
	sub_82D2AFF8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b9e7d0
	if (!cr6.eq) goto loc_82B9E7D0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82B9E7D0:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x82b9e790
	if (cr6.lt) goto loc_82B9E790;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B9E7F0:
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// bne cr6,0x82b9e854
	if (!cr6.eq) goto loc_82B9E854;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,18004
	ctx.r29.s64 = ctx.r11.s64 + 18004;
loc_82B9E804:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B9E80C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B9E828;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2aff8
	ctx.lr = 0x82B9E830;
	sub_82D2AFF8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b9e840
	if (!cr6.eq) goto loc_82B9E840;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82B9E840:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x82b9e804
	if (cr6.lt) goto loc_82B9E804;
loc_82B9E854:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9E860"))) PPC_WEAK_FUNC(sub_82B9E860);
PPC_FUNC_IMPL(__imp__sub_82B9E860) {
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
	// lwz r3,24(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9e8b0
	if (cr6.eq) goto loc_82B9E8B0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9E890;
	sub_82D2AEC8(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stb r30,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r30.u8);
	// beq cr6,0x82b9e8b0
	if (cr6.eq) goto loc_82B9E8B0;
	// bl 0x833bbd78
	ctx.lr = 0x82B9E8AC;
	sub_833BBD78(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_82B9E8B0:
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

__attribute__((alias("__imp__sub_82B9E8C8"))) PPC_WEAK_FUNC(sub_82B9E8C8);
PPC_FUNC_IMPL(__imp__sub_82B9E8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B9E8D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b9e9ac
	if (cr6.eq) goto loc_82B9E9AC;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9e9ac
	if (!cr6.eq) goto loc_82B9E9AC;
	// lwz r11,76(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9e9ac
	if (cr6.eq) goto loc_82B9E9AC;
	// lbz r11,100(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9e9ac
	if (!cr6.eq) goto loc_82B9E9AC;
	// addi r29,r5,60
	ctx.r29.s64 = ctx.r5.s64 + 60;
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B9E920;
	sub_82D291E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B9E934;
	sub_82D291E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,100(r30)
	PPC_STORE_U8(ctx.r30.u32 + 100, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9E94C;
	sub_82D2AEC8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B9E974;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B9E9A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
loc_82B9E9AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9E9B4"))) PPC_WEAK_FUNC(sub_82B9E9B4);
PPC_FUNC_IMPL(__imp__sub_82B9E9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9E9B8"))) PPC_WEAK_FUNC(sub_82B9E9B8);
PPC_FUNC_IMPL(__imp__sub_82B9E9B8) {
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
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r31,104
	ctx.r31.s64 = 104;
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// addi r5,r3,136
	ctx.r5.s64 = ctx.r3.s64 + 136;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b9e9f4
	if (!cr0.eq) goto loc_82B9E9F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9E9F4;
	sub_831CC188(ctx, base);
loc_82B9E9F4:
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subf r4,r11,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r8,r4,r31
	ctx.r8.s32 = PPCDivide(ctx.r4.s32, ctx.r31.s32);
	// addic. r9,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r9.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b9ea7c
	if (cr0.eq) goto loc_82B9EA7C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82B9EA20:
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b9ea90
	if (!cr6.gt) goto loc_82B9EA90;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// lwz r4,16(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// ble cr6,0x82b9ea9c
	if (!cr6.gt) goto loc_82B9EA9C;
	// lwz r8,112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,104
	ctx.r9.s64 = ctx.r9.s64 + 104;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r4,108(r7)
	PPC_STORE_U32(ctx.r7.u32 + 108, ctx.r4.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r8,r7,r31
	ctx.r8.s32 = PPCDivide(ctx.r7.s32, ctx.r31.s32);
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// blt cr6,0x82b9ea20
	if (cr6.lt) goto loc_82B9EA20;
loc_82B9EA7C:
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
loc_82B9EA90:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9EA9C;
	sub_831CC188(ctx, base);
loc_82B9EA9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9EAA8;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B9EAA8"))) PPC_WEAK_FUNC(sub_82B9EAA8);
PPC_FUNC_IMPL(__imp__sub_82B9EAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// subf. r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x82b9eacc
	if (!cr0.gt) goto loc_82B9EACC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82B9EACC:
	// lwz r7,140(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// li r8,104
	ctx.r8.s64 = 104;
	// lwz r6,136(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// divw r7,r5,r8
	ctx.r7.s32 = PPCDivide(ctx.r5.s32, ctx.r8.s32);
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82b9eaf8
	if (cr6.gt) goto loc_82B9EAF8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_82B9EAF8:
	// mulli r7,r8,104
	ctx.r7.s64 = ctx.r8.s64 * 104;
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// bge cr6,0x82b9eb24
	if (!cr6.lt) goto loc_82B9EB24;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82B9EB24:
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B9EB30"))) PPC_WEAK_FUNC(sub_82B9EB30);
PPC_FUNC_IMPL(__imp__sub_82B9EB30) {
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
	ctx.lr = 0x82B9EB38;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r28,104
	ctx.r28.s64 = 104;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r3,136
	ctx.r31.s64 = ctx.r3.s64 + 136;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r30,0
	ctx.r30.s64 = 0;
	// divw. r10,r9,r28
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b9ecb4
	if (cr0.eq) goto loc_82B9ECB4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x82b9ecc0
	if (!cr6.gt) goto loc_82B9ECC0;
loc_82B9EB78:
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,104(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// ble cr6,0x82b9eccc
	if (!cr6.gt) goto loc_82B9ECCC;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b9ec18
	if (cr6.eq) goto loc_82B9EC18;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9EBD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// ble cr6,0x82b9ecd8
	if (!cr6.gt) goto loc_82B9ECD8;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82b9ec84
	goto loc_82B9EC84;
loc_82B9EC18:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b9ec94
	if (cr6.eq) goto loc_82B9EC94;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9EC44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// ble cr6,0x82b9ece4
	if (!cr6.gt) goto loc_82B9ECE4;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_82B9EC84:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,84(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B9EC94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B9EC94:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,104
	ctx.r29.s64 = ctx.r29.s64 + 104;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r28
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b9eb78
	if (cr6.gt) goto loc_82B9EB78;
loc_82B9ECB4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B9ECC0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9ECCC;
	sub_831CC188(ctx, base);
loc_82B9ECCC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9ECD8;
	sub_831CC188(ctx, base);
loc_82B9ECD8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9ECE4;
	sub_831CC188(ctx, base);
loc_82B9ECE4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9ECF0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B9ECF0"))) PPC_WEAK_FUNC(sub_82B9ECF0);
PPC_FUNC_IMPL(__imp__sub_82B9ECF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B9ECF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r28,r11,17856
	ctx.r28.s64 = ctx.r11.s64 + 17856;
loc_82B9ED14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B9ED1C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B9ED38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2aff8
	ctx.lr = 0x82B9ED40;
	sub_82D2AFF8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b9ed50
	if (!cr6.eq) goto loc_82B9ED50;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82B9ED50:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// blt cr6,0x82b9ed14
	if (cr6.lt) goto loc_82B9ED14;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x82b9ee00
	if (!cr6.eq) goto loc_82B9EE00;
	// lwz r9,136(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// li r11,104
	ctx.r11.s64 = 104;
	// lwz r10,140(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r8,r8,r11
	ctx.r8.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b9ee00
	if (cr0.eq) goto loc_82B9EE00;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82B9ED84:
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b9edbc
	if (!cr6.gt) goto loc_82B9EDBC;
	// mulli r10,r11,104
	ctx.r10.s64 = ctx.r11.s64 * 104;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b9edc8
	if (!cr6.eq) goto loc_82B9EDC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82b9ed84
	if (cr6.lt) goto loc_82B9ED84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B9EDBC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9EDC8;
	sub_831CC188(ctx, base);
loc_82B9EDC8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9ee00
	if (cr6.eq) goto loc_82B9EE00;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9EDE4;
	sub_82D2AEC8(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stb r26,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r26.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9ee00
	if (cr6.eq) goto loc_82B9EE00;
	// bl 0x833bbd78
	ctx.lr = 0x82B9EDFC;
	sub_833BBD78(ctx, base);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
loc_82B9EE00:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9EE0C"))) PPC_WEAK_FUNC(sub_82B9EE0C);
PPC_FUNC_IMPL(__imp__sub_82B9EE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9EE10"))) PPC_WEAK_FUNC(sub_82B9EE10);
PPC_FUNC_IMPL(__imp__sub_82B9EE10) {
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
	// lwz r31,136(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b9ee64
	if (cr6.eq) goto loc_82B9EE64;
loc_82B9EE38:
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9ee54
	if (!cr6.eq) goto loc_82B9EE54;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9ee54
	if (cr6.eq) goto loc_82B9EE54;
	// bl 0x833bbd78
	ctx.lr = 0x82B9EE54;
	sub_833BBD78(ctx, base);
loc_82B9EE54:
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b9ee38
	if (!cr6.eq) goto loc_82B9EE38;
loc_82B9EE64:
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

__attribute__((alias("__imp__sub_82B9EE80"))) PPC_WEAK_FUNC(sub_82B9EE80);
PPC_FUNC_IMPL(__imp__sub_82B9EE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B9EE88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b9efa0
	if (cr6.eq) goto loc_82B9EFA0;
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b9efa0
	if (!cr6.eq) goto loc_82B9EFA0;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r31,r5,32
	ctx.r31.s64 = ctx.r5.s64 + 32;
	// addi r11,r11,18152
	ctx.r11.s64 = ctx.r11.s64 + 18152;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b9eec8
	if (cr6.lt) goto loc_82B9EEC8;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82b9eecc
	goto loc_82B9EECC;
loc_82B9EEC8:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82B9EECC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x82B9EEE0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b9ef00
	if (!cr6.eq) goto loc_82B9EF00;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9EEF8;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B9EF00:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b9ef14
	if (cr6.lt) goto loc_82B9EF14;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82b9ef18
	goto loc_82B9EF18;
loc_82B9EF14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82B9EF18:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9EF30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9EF40;
	sub_82D2AEC8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r7,80(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B9EF68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B9EF9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
loc_82B9EFA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9EFA8"))) PPC_WEAK_FUNC(sub_82B9EFA8);
PPC_FUNC_IMPL(__imp__sub_82B9EFA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B9EFB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r26,104
	ctx.r26.s64 = 104;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r3,136
	ctx.r30.s64 = ctx.r3.s64 + 136;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// divw. r10,r9,r26
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b9f134
	if (cr0.eq) goto loc_82B9F134;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// ble cr6,0x82b9f13c
	if (!cr6.gt) goto loc_82B9F13C;
loc_82B9EFE8:
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r9,104(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r10,112(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// neg r6,r10
	ctx.r6.s64 = -ctx.r10.s64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// bge cr6,0x82b9f01c
	if (!cr6.lt) goto loc_82B9F01C;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// b 0x82b9f02c
	goto loc_82B9F02C;
loc_82B9F01C:
	// srawi r8,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfc r6,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// adde r10,r7,r8
	temp.u8 = (ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82B9F02C:
	// lbz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b9f114
	if (cr6.eq) goto loc_82B9F114;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r7,r8,r26
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r26.s32);
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, xer);
	// ble cr6,0x82b9f148
	if (!cr6.gt) goto loc_82B9F148;
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82b9f0b8
	if (cr6.eq) goto loc_82B9F0B8;
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(ctx.r11.s32, -2, xer);
	// beq cr6,0x82b9f0b8
	if (cr6.eq) goto loc_82B9F0B8;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82b9f0ac
	if (!cr6.eq) goto loc_82B9F0AC;
	// bl 0x82b9ecf0
	ctx.lr = 0x82B9F080;
	sub_82B9ECF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// ble cr6,0x82b9f154
	if (!cr6.gt) goto loc_82B9F154;
	// add r5,r27,r11
	ctx.r5.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b9e8c8
	ctx.lr = 0x82B9F0A8;
	sub_82B9E8C8(ctx, base);
	// b 0x82b9f114
	goto loc_82B9F114;
loc_82B9F0AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b9e860
	ctx.lr = 0x82B9F0B4;
	sub_82B9E860(ctx, base);
	// b 0x82b9f114
	goto loc_82B9F114;
loc_82B9F0B8:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82b9f0f8
	if (!cr6.eq) goto loc_82B9F0F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b9e768
	ctx.lr = 0x82B9F0CC;
	sub_82B9E768(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// ble cr6,0x82b9f160
	if (!cr6.gt) goto loc_82B9F160;
	// add r5,r27,r11
	ctx.r5.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b9ee80
	ctx.lr = 0x82B9F0F4;
	sub_82B9EE80(ctx, base);
	// b 0x82b9f114
	goto loc_82B9F114;
loc_82B9F0F8:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b9f114
	if (cr6.eq) goto loc_82B9F114;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B9F110;
	sub_82D2AEC8(ctx, base);
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
loc_82B9F114:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r27,104
	ctx.r27.s64 = ctx.r27.s64 + 104;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r26
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bgt cr6,0x82b9efe8
	if (cr6.gt) goto loc_82B9EFE8;
loc_82B9F134:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B9F13C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9F148;
	sub_831CC188(ctx, base);
loc_82B9F148:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9F154;
	sub_831CC188(ctx, base);
loc_82B9F154:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9F160;
	sub_831CC188(ctx, base);
loc_82B9F160:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B9F16C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B9F16C"))) PPC_WEAK_FUNC(sub_82B9F16C);
PPC_FUNC_IMPL(__imp__sub_82B9F16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9F170"))) PPC_WEAK_FUNC(sub_82B9F170);
PPC_FUNC_IMPL(__imp__sub_82B9F170) {
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
	// bl 0x82b9eaa8
	ctx.lr = 0x82B9F18C;
	sub_82B9EAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9f1c0
	if (cr6.eq) goto loc_82B9F1C0;
	// ld r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bgt cr6,0x82b9f1b4
	if (cr6.gt) goto loc_82B9F1B4;
	// bl 0x83a7d958
	ctx.lr = 0x82B9F1A8;
	sub_83A7D958(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// bl 0x83524138
	ctx.lr = 0x82B9F1B0;
	sub_83524138(ctx, base);
	// std r3,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r3.u64);
loc_82B9F1B4:
	// bl 0x82d26ed8
	ctx.lr = 0x82B9F1B8;
	sub_82D26ED8(ctx, base);
	// li r4,2500
	ctx.r4.s64 = 2500;
	// bl 0x82d26960
	ctx.lr = 0x82B9F1C0;
	sub_82D26960(ctx, base);
loc_82B9F1C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9eb30
	ctx.lr = 0x82B9F1C8;
	sub_82B9EB30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9efa8
	ctx.lr = 0x82B9F1D0;
	sub_82B9EFA8(ctx, base);
	// ld r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x82b9f200
	if (cr6.eq) goto loc_82B9F200;
	// bl 0x83a7d958
	ctx.lr = 0x82B9F1E4;
	sub_83A7D958(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// bl 0x83524138
	ctx.lr = 0x82B9F1EC;
	sub_83524138(ctx, base);
	// ld r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpldi cr6,r10,4000
	cr6.compare<uint64_t>(ctx.r10.u64, 4000, xer);
	// bgt cr6,0x82b9f204
	if (cr6.gt) goto loc_82B9F204;
loc_82B9F200:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82B9F204:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b9f224
	if (cr6.eq) goto loc_82B9F224;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-7384
	ctx.r5.s64 = ctx.r11.s64 + -7384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B9F224;
	sub_82D20DA8(ctx, base);
loc_82B9F224:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82B9F240"))) PPC_WEAK_FUNC(sub_82B9F240);
PPC_FUNC_IMPL(__imp__sub_82B9F240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B9F248;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82B9F2C0;
	sub_8259CB28(ctx, base);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r29,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// bl 0x8259cb28
	ctx.lr = 0x82B9F2E0;
	sub_8259CB28(ctx, base);
	// lwz r8,88(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// lwz r7,92(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// lwz r6,96(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// lbz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 100);
	// stb r5,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r5.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9F30C"))) PPC_WEAK_FUNC(sub_82B9F30C);
PPC_FUNC_IMPL(__imp__sub_82B9F30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B9F310"))) PPC_WEAK_FUNC(sub_82B9F310);
PPC_FUNC_IMPL(__imp__sub_82B9F310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B9F318;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b9f398
	if (cr6.eq) goto loc_82B9F398;
	// addi r31,r3,80
	ctx.r31.s64 = ctx.r3.s64 + 80;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B9F338:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b9f354
	if (cr6.lt) goto loc_82B9F354;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x825952b8
	ctx.lr = 0x82B9F354;
	sub_825952B8(ctx, base);
loc_82B9F354:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stb r30,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r30.u8);
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b9f37c
	if (cr6.lt) goto loc_82B9F37C;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// bl 0x825952b8
	ctx.lr = 0x82B9F37C;
	sub_825952B8(ctx, base);
loc_82B9F37C:
	// stw r29,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r29.u32);
	// stw r30,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r30.u32);
	// stb r30,-48(r31)
	PPC_STORE_U8(ctx.r31.u32 + -48, ctx.r30.u8);
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// addi r11,r31,-80
	ctx.r11.s64 = ctx.r31.s64 + -80;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x82b9f338
	if (!cr6.eq) goto loc_82B9F338;
loc_82B9F398:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9F3A0"))) PPC_WEAK_FUNC(sub_82B9F3A0);
PPC_FUNC_IMPL(__imp__sub_82B9F3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B9F3A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82b9f3c0
	if (cr6.eq) goto loc_82B9F3C0;
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// bne cr6,0x82b9f3c8
	if (!cr6.eq) goto loc_82B9F3C8;
loc_82B9F3C0:
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
loc_82B9F3C8:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_82B9F3E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b9f3e4
	if (!cr6.eq) goto loc_82B9F3E4;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B9F40C;
	sub_8259CC28(ctx, base);
	// addi r30,r28,32
	ctx.r30.s64 = ctx.r28.s64 + 32;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B9F424;
	sub_8259CB28(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b9f444
	if (cr6.lt) goto loc_82B9F444;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B9F444;
	sub_825952B8(ctx, base);
loc_82B9F444:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r11,r11,18152
	ctx.r11.s64 = ctx.r11.s64 + 18152;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b9f46c
	if (cr6.lt) goto loc_82B9F46C;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82b9f470
	goto loc_82B9F470;
loc_82B9F46C:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82B9F470:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x82B9F484;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b9f490
	if (!cr6.eq) goto loc_82B9F490;
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
loc_82B9F490:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B9F498"))) PPC_WEAK_FUNC(sub_82B9F498);
PPC_FUNC_IMPL(__imp__sub_82B9F498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82B9F4A0;
	__savegprlr_18(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31761
	ctx.r28.s64 = -2081488896;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,1000
	ctx.r9.s64 = 65536000;
	// addi r30,r11,-7264
	ctx.r30.s64 = ctx.r11.s64 + -7264;
	// lis r10,-31761
	ctx.r10.s64 = -2081488896;
	// lwz r11,10352(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10352);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r21,2
	ctx.r21.s64 = 2;
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r27,r9,36
	ctx.r27.u64 = ctx.r9.u64 | 36;
	// addi r31,r10,7904
	ctx.r31.s64 = ctx.r10.s64 + 7904;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b9fd6c
	if (!cr6.eq) goto loc_82B9FD6C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r11,10352(r28)
	PPC_STORE_U32(ctx.r28.u32 + 10352, ctx.r11.u32);
	// addi r4,r30,-553
	ctx.r4.s64 = ctx.r30.s64 + -553;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F50C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// addi r4,r30,-561
	ctx.r4.s64 = ctx.r30.s64 + -561;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F52C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r20.u32);
	// addi r4,r30,-569
	ctx.r4.s64 = ctx.r30.s64 + -569;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F54C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r20.u32);
	// addi r4,r30,-641
	ctx.r4.s64 = ctx.r30.s64 + -641;
	// ori r10,r10,80
	ctx.r10.u64 = ctx.r10.u64 | 80;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F56C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r20.u32);
	// addi r4,r30,-701
	ctx.r4.s64 = ctx.r30.s64 + -701;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F58C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r20.u32);
	// addi r4,r30,-833
	ctx.r4.s64 = ctx.r30.s64 + -833;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F5AC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r20.u32);
	// addi r4,r30,-873
	ctx.r4.s64 = ctx.r30.s64 + -873;
	// ori r10,r10,5
	ctx.r10.u64 = ctx.r10.u64 | 5;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F5CC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r20.u32);
	// addi r4,r30,-945
	ctx.r4.s64 = ctx.r30.s64 + -945;
	// ori r10,r10,6
	ctx.r10.u64 = ctx.r10.u64 | 6;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F5EC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r20.u32);
	// addi r4,r30,-953
	ctx.r4.s64 = ctx.r30.s64 + -953;
	// ori r10,r10,91
	ctx.r10.u64 = ctx.r10.u64 | 91;
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F60C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r20.u32);
	// addi r4,r30,-954
	ctx.r4.s64 = ctx.r30.s64 + -954;
	// ori r10,r10,92
	ctx.r10.u64 = ctx.r10.u64 | 92;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F62C;
	sub_837B0C10(ctx, base);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// ori r10,r10,7
	ctx.r10.u64 = ctx.r10.u64 | 7;
	// stw r20,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r20.u32);
	// addi r4,r30,-969
	ctx.r4.s64 = ctx.r30.s64 + -969;
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F64C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r20.u32);
	// addi r4,r30,-970
	ctx.r4.s64 = ctx.r30.s64 + -970;
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F66C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r20.u32);
	// addi r4,r30,-989
	ctx.r4.s64 = ctx.r30.s64 + -989;
	// ori r10,r10,9
	ctx.r10.u64 = ctx.r10.u64 | 9;
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// stw r10,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F68C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r20.u32);
	// addi r4,r30,-997
	ctx.r4.s64 = ctx.r30.s64 + -997;
	// ori r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 | 10;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// stw r10,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F6AC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r20.u32);
	// addi r4,r30,-998
	ctx.r4.s64 = ctx.r30.s64 + -998;
	// ori r10,r10,11
	ctx.r10.u64 = ctx.r10.u64 | 11;
	// addi r3,r31,508
	ctx.r3.s64 = ctx.r31.s64 + 508;
	// stw r10,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F6CC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r20.u32);
	// addi r4,r30,-999
	ctx.r4.s64 = ctx.r30.s64 + -999;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// stw r10,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F6EC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r20.u32);
	// addi r4,r30,-1005
	ctx.r4.s64 = ctx.r30.s64 + -1005;
	// ori r10,r10,13
	ctx.r10.u64 = ctx.r10.u64 | 13;
	// addi r3,r31,580
	ctx.r3.s64 = ctx.r31.s64 + 580;
	// stw r10,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F70C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r20.u32);
	// addi r4,r30,-1006
	ctx.r4.s64 = ctx.r30.s64 + -1006;
	// ori r10,r10,97
	ctx.r10.u64 = ctx.r10.u64 | 97;
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// stw r10,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F72C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r20.u32);
	// addi r4,r30,-1007
	ctx.r4.s64 = ctx.r30.s64 + -1007;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// addi r3,r31,652
	ctx.r3.s64 = ctx.r31.s64 + 652;
	// stw r10,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F74C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r20.u32);
	// addi r4,r30,-1013
	ctx.r4.s64 = ctx.r30.s64 + -1013;
	// ori r10,r10,15
	ctx.r10.u64 = ctx.r10.u64 | 15;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// stw r10,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F76C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// ori r10,r10,17
	ctx.r10.u64 = ctx.r10.u64 | 17;
	// stw r21,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r21.u32);
	// addi r4,r30,-1014
	ctx.r4.s64 = ctx.r30.s64 + -1014;
	// stw r10,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r10.u32);
	// addi r3,r31,724
	ctx.r3.s64 = ctx.r31.s64 + 724;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F78C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r20.u32);
	// addi r4,r30,-1015
	ctx.r4.s64 = ctx.r30.s64 + -1015;
	// ori r10,r10,18
	ctx.r10.u64 = ctx.r10.u64 | 18;
	// addi r3,r31,760
	ctx.r3.s64 = ctx.r31.s64 + 760;
	// stw r10,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F7AC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r20.u32);
	// addi r4,r30,-1021
	ctx.r4.s64 = ctx.r30.s64 + -1021;
	// ori r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 | 19;
	// addi r3,r31,796
	ctx.r3.s64 = ctx.r31.s64 + 796;
	// stw r10,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F7CC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r20.u32);
	// addi r4,r30,-1022
	ctx.r4.s64 = ctx.r30.s64 + -1022;
	// ori r10,r10,78
	ctx.r10.u64 = ctx.r10.u64 | 78;
	// addi r3,r31,832
	ctx.r3.s64 = ctx.r31.s64 + 832;
	// stw r10,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F7EC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r20.u32);
	// addi r4,r30,-1023
	ctx.r4.s64 = ctx.r30.s64 + -1023;
	// ori r10,r10,20
	ctx.r10.u64 = ctx.r10.u64 | 20;
	// addi r3,r31,868
	ctx.r3.s64 = ctx.r31.s64 + 868;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F80C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r20.u32);
	// addi r4,r30,-1029
	ctx.r4.s64 = ctx.r30.s64 + -1029;
	// ori r10,r10,21
	ctx.r10.u64 = ctx.r10.u64 | 21;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F82C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r20.u32);
	// addi r4,r30,-1037
	ctx.r4.s64 = ctx.r30.s64 + -1037;
	// ori r10,r10,22
	ctx.r10.u64 = ctx.r10.u64 | 22;
	// addi r3,r31,940
	ctx.r3.s64 = ctx.r31.s64 + 940;
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F84C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r20.u32);
	// addi r4,r30,-1045
	ctx.r4.s64 = ctx.r30.s64 + -1045;
	// ori r10,r10,23
	ctx.r10.u64 = ctx.r10.u64 | 23;
	// addi r3,r31,976
	ctx.r3.s64 = ctx.r31.s64 + 976;
	// stw r10,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F86C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r20.u32);
	// addi r4,r30,-1061
	ctx.r4.s64 = ctx.r30.s64 + -1061;
	// ori r10,r10,24
	ctx.r10.u64 = ctx.r10.u64 | 24;
	// addi r3,r31,1012
	ctx.r3.s64 = ctx.r31.s64 + 1012;
	// stw r10,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F88C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r26,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r26.u32);
	// addi r4,r30,-1062
	ctx.r4.s64 = ctx.r30.s64 + -1062;
	// ori r10,r10,26
	ctx.r10.u64 = ctx.r10.u64 | 26;
	// addi r3,r31,1048
	ctx.r3.s64 = ctx.r31.s64 + 1048;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F8AC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r26.u32);
	// ori r10,r10,27
	ctx.r10.u64 = ctx.r10.u64 | 27;
	// stw r10,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r10.u32);
	// addi r4,r30,-1063
	ctx.r4.s64 = ctx.r30.s64 + -1063;
	// addi r3,r31,1084
	ctx.r3.s64 = ctx.r31.s64 + 1084;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F8CC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r21,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r21.u32);
	// addi r4,r30,-1077
	ctx.r4.s64 = ctx.r30.s64 + -1077;
	// ori r10,r10,82
	ctx.r10.u64 = ctx.r10.u64 | 82;
	// addi r3,r31,1120
	ctx.r3.s64 = ctx.r31.s64 + 1120;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F8EC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r21,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r21.u32);
	// addi r4,r30,-1078
	ctx.r4.s64 = ctx.r30.s64 + -1078;
	// ori r10,r10,28
	ctx.r10.u64 = ctx.r10.u64 | 28;
	// addi r3,r31,1156
	ctx.r3.s64 = ctx.r31.s64 + 1156;
	// stw r10,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r10.u32);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F90C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r20.u32);
	// addi r4,r30,-1079
	ctx.r4.s64 = ctx.r30.s64 + -1079;
	// ori r10,r10,30
	ctx.r10.u64 = ctx.r10.u64 | 30;
	// addi r3,r31,1192
	ctx.r3.s64 = ctx.r31.s64 + 1192;
	// stw r10,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F92C;
	sub_837B0C10(ctx, base);
	// stw r20,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r20.u32);
	// stw r29,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r29.u32);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// addi r3,r31,1228
	ctx.r3.s64 = ctx.r31.s64 + 1228;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F948;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r26,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r26.u32);
	// addi r4,r30,-1093
	ctx.r4.s64 = ctx.r30.s64 + -1093;
	// ori r10,r10,83
	ctx.r10.u64 = ctx.r10.u64 | 83;
	// addi r3,r31,1264
	ctx.r3.s64 = ctx.r31.s64 + 1264;
	// stw r10,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r10.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F968;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r20.u32);
	// addi r4,r30,-1094
	ctx.r4.s64 = ctx.r30.s64 + -1094;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// addi r3,r31,1300
	ctx.r3.s64 = ctx.r31.s64 + 1300;
	// stw r10,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F988;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r26,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r26.u32);
	// addi r4,r30,-1095
	ctx.r4.s64 = ctx.r30.s64 + -1095;
	// ori r10,r10,96
	ctx.r10.u64 = ctx.r10.u64 | 96;
	// addi r3,r31,1336
	ctx.r3.s64 = ctx.r31.s64 + 1336;
	// stw r10,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r10.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F9A8;
	sub_837B0C10(ctx, base);
	// stw r20,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r20.u32);
	// stw r29,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r29.u32);
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// addi r3,r31,1372
	ctx.r3.s64 = ctx.r31.s64 + 1372;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F9C4;
	sub_837B0C10(ctx, base);
	// li r10,-3
	ctx.r10.s64 = -3;
	// stw r26,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r26.u32);
	// addi r4,r30,-1109
	ctx.r4.s64 = ctx.r30.s64 + -1109;
	// stw r10,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r10.u32);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9F9E0;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r20.u32);
	// addi r4,r30,-1110
	ctx.r4.s64 = ctx.r30.s64 + -1110;
	// ori r10,r10,33
	ctx.r10.u64 = ctx.r10.u64 | 33;
	// addi r3,r31,1444
	ctx.r3.s64 = ctx.r31.s64 + 1444;
	// stw r10,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FA00;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r26,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r26.u32);
	// addi r4,r30,-1111
	ctx.r4.s64 = ctx.r30.s64 + -1111;
	// ori r10,r10,76
	ctx.r10.u64 = ctx.r10.u64 | 76;
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
	// stw r10,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r10.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FA20;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r20.u32);
	// addi r4,r30,-1157
	ctx.r4.s64 = ctx.r30.s64 + -1157;
	// ori r10,r10,34
	ctx.r10.u64 = ctx.r10.u64 | 34;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// stw r10,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FA40;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r20.u32);
	// addi r4,r30,-1161
	ctx.r4.s64 = ctx.r30.s64 + -1161;
	// ori r10,r10,35
	ctx.r10.u64 = ctx.r10.u64 | 35;
	// addi r3,r31,1552
	ctx.r3.s64 = ctx.r31.s64 + 1552;
	// stw r10,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FA60;
	sub_837B0C10(ctx, base);
	// stw r21,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r21.u32);
	// stw r27,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r27.u32);
	// addi r4,r30,-1165
	ctx.r4.s64 = ctx.r30.s64 + -1165;
	// addi r3,r31,1588
	ctx.r3.s64 = ctx.r31.s64 + 1588;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FA7C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r21,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r21.u32);
	// addi r4,r30,-1169
	ctx.r4.s64 = ctx.r30.s64 + -1169;
	// ori r10,r10,58
	ctx.r10.u64 = ctx.r10.u64 | 58;
	// addi r3,r31,1624
	ctx.r3.s64 = ctx.r31.s64 + 1624;
	// stw r10,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r10.u32);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FA9C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r26,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r26.u32);
	// addi r4,r30,-1173
	ctx.r4.s64 = ctx.r30.s64 + -1173;
	// ori r10,r10,77
	ctx.r10.u64 = ctx.r10.u64 | 77;
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// stw r10,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r10.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FABC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r21,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r21.u32);
	// addi r4,r30,-1174
	ctx.r4.s64 = ctx.r30.s64 + -1174;
	// ori r10,r10,59
	ctx.r10.u64 = ctx.r10.u64 | 59;
	// addi r3,r31,1696
	ctx.r3.s64 = ctx.r31.s64 + 1696;
	// stw r10,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r10.u32);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FADC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// li r11,3
	ctx.r11.s64 = 3;
	// ori r10,r10,60
	ctx.r10.u64 = ctx.r10.u64 | 60;
	// stw r11,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r11.u32);
	// addi r4,r30,-1175
	ctx.r4.s64 = ctx.r30.s64 + -1175;
	// stw r10,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r10.u32);
	// addi r3,r31,1732
	ctx.r3.s64 = ctx.r31.s64 + 1732;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FAFC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r20.u32);
	// addi r4,r30,-1185
	ctx.r4.s64 = ctx.r30.s64 + -1185;
	// ori r10,r10,61
	ctx.r10.u64 = ctx.r10.u64 | 61;
	// addi r3,r31,1768
	ctx.r3.s64 = ctx.r31.s64 + 1768;
	// stw r10,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FB1C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r20.u32);
	// addi r4,r30,-1186
	ctx.r4.s64 = ctx.r30.s64 + -1186;
	// ori r10,r10,62
	ctx.r10.u64 = ctx.r10.u64 | 62;
	// addi r3,r31,1804
	ctx.r3.s64 = ctx.r31.s64 + 1804;
	// stw r10,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FB3C;
	sub_837B0C10(ctx, base);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// ori r10,r10,84
	ctx.r10.u64 = ctx.r10.u64 | 84;
	// stw r21,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r21.u32);
	// addi r4,r30,-1187
	ctx.r4.s64 = ctx.r30.s64 + -1187;
	// stw r10,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r10.u32);
	// addi r3,r31,1840
	ctx.r3.s64 = ctx.r31.s64 + 1840;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FB5C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,1868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1868, ctx.r20.u32);
	// addi r4,r30,-1205
	ctx.r4.s64 = ctx.r30.s64 + -1205;
	// ori r10,r10,85
	ctx.r10.u64 = ctx.r10.u64 | 85;
	// addi r3,r31,1876
	ctx.r3.s64 = ctx.r31.s64 + 1876;
	// stw r10,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FB7C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r20.u32);
	// addi r4,r30,-1206
	ctx.r4.s64 = ctx.r30.s64 + -1206;
	// ori r10,r10,87
	ctx.r10.u64 = ctx.r10.u64 | 87;
	// addi r3,r31,1912
	ctx.r3.s64 = ctx.r31.s64 + 1912;
	// stw r10,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FB9C;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r20.u32);
	// addi r4,r30,-1207
	ctx.r4.s64 = ctx.r30.s64 + -1207;
	// ori r10,r10,88
	ctx.r10.u64 = ctx.r10.u64 | 88;
	// addi r3,r31,1948
	ctx.r3.s64 = ctx.r31.s64 + 1948;
	// stw r10,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FBBC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r20.u32);
	// addi r4,r30,-1217
	ctx.r4.s64 = ctx.r30.s64 + -1217;
	// ori r10,r10,65
	ctx.r10.u64 = ctx.r10.u64 | 65;
	// addi r3,r31,1984
	ctx.r3.s64 = ctx.r31.s64 + 1984;
	// stw r10,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FBDC;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r20.u32);
	// addi r4,r30,-1218
	ctx.r4.s64 = ctx.r30.s64 + -1218;
	// ori r10,r10,95
	ctx.r10.u64 = ctx.r10.u64 | 95;
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// stw r10,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FBFC;
	sub_837B0C10(ctx, base);
	// stw r20,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r20.u32);
	// stw r29,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r29.u32);
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// addi r3,r31,2056
	ctx.r3.s64 = ctx.r31.s64 + 2056;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FC18;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r26,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r26.u32);
	// addi r4,r30,-1219
	ctx.r4.s64 = ctx.r30.s64 + -1219;
	// ori r10,r10,67
	ctx.r10.u64 = ctx.r10.u64 | 67;
	// addi r3,r31,2092
	ctx.r3.s64 = ctx.r31.s64 + 2092;
	// stw r10,2088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2088, ctx.r10.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FC38;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// li r11,4
	ctx.r11.s64 = 4;
	// ori r10,r10,94
	ctx.r10.u64 = ctx.r10.u64 | 94;
	// stw r11,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r11.u32);
	// addi r4,r30,-1289
	ctx.r4.s64 = ctx.r30.s64 + -1289;
	// stw r10,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r10.u32);
	// addi r3,r31,2128
	ctx.r3.s64 = ctx.r31.s64 + 2128;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FC58;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// li r11,4
	ctx.r11.s64 = 4;
	// ori r10,r10,69
	ctx.r10.u64 = ctx.r10.u64 | 69;
	// stw r11,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r11.u32);
	// addi r4,r30,-1290
	ctx.r4.s64 = ctx.r30.s64 + -1290;
	// stw r10,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r10.u32);
	// addi r3,r31,2164
	ctx.r3.s64 = ctx.r31.s64 + 2164;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FC78;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stw r20,2192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2192, ctx.r20.u32);
	// ori r10,r10,70
	ctx.r10.u64 = ctx.r10.u64 | 70;
	// stw r10,2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2196, ctx.r10.u32);
	// addi r4,r30,-1291
	ctx.r4.s64 = ctx.r30.s64 + -1291;
	// addi r3,r31,2200
	ctx.r3.s64 = ctx.r31.s64 + 2200;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FC98;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r20.u32);
	// addi r4,r30,-1309
	ctx.r4.s64 = ctx.r30.s64 + -1309;
	// ori r10,r10,71
	ctx.r10.u64 = ctx.r10.u64 | 71;
	// addi r3,r31,2236
	ctx.r3.s64 = ctx.r31.s64 + 2236;
	// stw r10,2232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2232, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FCB8;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r20,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r20.u32);
	// addi r4,r30,-1310
	ctx.r4.s64 = ctx.r30.s64 + -1310;
	// ori r10,r10,72
	ctx.r10.u64 = ctx.r10.u64 | 72;
	// addi r3,r31,2272
	ctx.r3.s64 = ctx.r31.s64 + 2272;
	// stw r10,2268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2268, ctx.r10.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FCD8;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// li r11,25
	ctx.r11.s64 = 25;
	// ori r10,r10,73
	ctx.r10.u64 = ctx.r10.u64 | 73;
	// stw r11,2300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2300, ctx.r11.u32);
	// addi r4,r30,-1311
	ctx.r4.s64 = ctx.r30.s64 + -1311;
	// stw r10,2304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2304, ctx.r10.u32);
	// addi r3,r31,2308
	ctx.r3.s64 = ctx.r31.s64 + 2308;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FCF8;
	sub_837B0C10(ctx, base);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r26,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r26.u32);
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// stw r10,2340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2340, ctx.r10.u32);
	// addi r3,r31,2344
	ctx.r3.s64 = ctx.r31.s64 + 2344;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FD14;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r26,2372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2372, ctx.r26.u32);
	// addi r4,r30,-1341
	ctx.r4.s64 = ctx.r30.s64 + -1341;
	// ori r10,r10,74
	ctx.r10.u64 = ctx.r10.u64 | 74;
	// addi r3,r31,2380
	ctx.r3.s64 = ctx.r31.s64 + 2380;
	// stw r10,2376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2376, ctx.r10.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FD34;
	sub_837B0C10(ctx, base);
	// lis r10,1000
	ctx.r10.s64 = 65536000;
	// stw r26,2408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2408, ctx.r26.u32);
	// addi r4,r30,-1342
	ctx.r4.s64 = ctx.r30.s64 + -1342;
	// ori r10,r10,75
	ctx.r10.u64 = ctx.r10.u64 | 75;
	// addi r3,r31,2416
	ctx.r3.s64 = ctx.r31.s64 + 2416;
	// stw r10,2412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2412, ctx.r10.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FD54;
	sub_837B0C10(ctx, base);
	// stw r26,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r26.u32);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r3,r10,13376
	ctx.r3.s64 = ctx.r10.s64 + 13376;
	// bl 0x831cdcc8
	ctx.lr = 0x82B9FD68;
	sub_831CDCC8(ctx, base);
	// lwz r11,10352(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10352);
loc_82B9FD6C:
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r10,-31761
	ctx.r10.s64 = -2081488896;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r24,r10,7872
	ctx.r24.s64 = ctx.r10.s64 + 7872;
	// bne cr6,0x82b9fda0
	if (!cr6.eq) goto loc_82B9FDA0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r4,r30,-545
	ctx.r4.s64 = ctx.r30.s64 + -545;
	// stw r11,10352(r28)
	PPC_STORE_U32(ctx.r28.u32 + 10352, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B9FD94;
	sub_837B0C10(ctx, base);
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13272
	ctx.r3.s64 = ctx.r11.s64 + 13272;
	// bl 0x831cdcc8
	ctx.lr = 0x82B9FDA0;
	sub_831CDCC8(ctx, base);
loc_82B9FDA0:
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r20,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r20.u8);
	// cmplwi cr6,r25,44
	cr6.compare<uint32_t>(ctx.r25.u32, 44, xer);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// rlwinm r23,r11,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r23,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82b9fe14
	if (!cr6.eq) goto loc_82B9FE14;
	// bl 0x8310e000
	ctx.lr = 0x82B9FDC4;
	sub_8310E000(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82b9fe04
	if (cr6.eq) goto loc_82B9FE04;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82b9fdf4
	if (cr6.eq) goto loc_82B9FDF4;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82b9fde4
	if (cr6.eq) goto loc_82B9FDE4;
	// stw r27,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r27.u32);
	// b 0x82b9fe50
	goto loc_82B9FE50;
loc_82B9FDE4:
	// lis r11,1000
	ctx.r11.s64 = 65536000;
	// ori r10,r11,93
	ctx.r10.u64 = ctx.r11.u64 | 93;
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// b 0x82b9fe50
	goto loc_82B9FE50;
loc_82B9FDF4:
	// lis r11,1000
	ctx.r11.s64 = 65536000;
	// ori r10,r11,38
	ctx.r10.u64 = ctx.r11.u64 | 38;
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// b 0x82b9fe50
	goto loc_82B9FE50;
loc_82B9FE04:
	// lis r11,1000
	ctx.r11.s64 = 65536000;
	// ori r10,r11,37
	ctx.r10.u64 = ctx.r11.u64 | 37;
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// b 0x82b9fe50
	goto loc_82B9FE50;
loc_82B9FE14:
	// cmplwi cr6,r25,67
	cr6.compare<uint32_t>(ctx.r25.u32, 67, xer);
	// bne cr6,0x82b9fe40
	if (!cr6.eq) goto loc_82B9FE40;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r10,-13652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13652);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// beq cr6,0x82b9fe40
	if (cr6.eq) goto loc_82B9FE40;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82B9FE38;
	sub_8259D6C0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82B9FE40:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82ba019c
	if (cr6.eq) goto loc_82BA019C;
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(ctx.r11.s32, -2, xer);
	// beq cr6,0x82ba019c
	if (cr6.eq) goto loc_82BA019C;
loc_82B9FE50:
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r26,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r26.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r25.u32);
	// cmpwi cr6,r4,-3
	cr6.compare<int32_t>(ctx.r4.s32, -3, xer);
	// stb r26,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r26.u8);
	// bne cr6,0x82b9fe7c
	if (!cr6.eq) goto loc_82B9FE7C;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x8259d6c0
	ctx.lr = 0x82B9FE78;
	sub_8259D6C0(ctx, base);
	// b 0x82b9fe80
	goto loc_82B9FE80;
loc_82B9FE7C:
	// bl 0x82d04220
	ctx.lr = 0x82B9FE80;
	sub_82D04220(ctx, base);
loc_82B9FE80:
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stb r26,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r26.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cb28
	ctx.lr = 0x82B9FEA0;
	sub_8259CB28(ctx, base);
	// stb r26,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r26.u8);
	// addi r4,r30,-537
	ctx.r4.s64 = ctx.r30.s64 + -537;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82B9FEB0;
	sub_8259D6C0(ctx, base);
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
loc_82B9FEB4:
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// subf r6,r5,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r5.s64;
	// bl 0x8259cb28
	ctx.lr = 0x82B9FED4;
	sub_8259CB28(ctx, base);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82B9FEF4;
	sub_8259CB28(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b9ff10
	if (cr6.lt) goto loc_82B9FF10;
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82B9FF10;
	sub_825952B8(ctx, base);
loc_82B9FF10:
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574d38
	ctx.lr = 0x82B9FF30;
	sub_82574D38(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82b9ff80
	if (cr6.eq) goto loc_82B9FF80;
	// addi r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 1;
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574d38
	ctx.lr = 0x82B9FF54;
	sub_82574D38(ctx, base);
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, xer);
	// bne cr6,0x82b9ff80
	if (!cr6.eq) goto loc_82B9FF80;
loc_82B9FF5C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x82574d38
	ctx.lr = 0x82B9FF78;
	sub_82574D38(ctx, base);
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, xer);
	// beq cr6,0x82b9ff5c
	if (cr6.eq) goto loc_82B9FF5C;
loc_82B9FF80:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b9ffa4
	if (!cr6.gt) goto loc_82B9FFA4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82B9FFA0;
	sub_825A1DA8(ctx, base);
	// b 0x82b9fff8
	goto loc_82B9FFF8;
loc_82B9FFA4:
	// stw r25,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r25.u32);
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// stw r26,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r26,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r26.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82B9FFBC;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82B9FFD0;
	sub_825A1DA8(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b9ffec
	if (cr6.lt) goto loc_82B9FFEC;
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82B9FFEC;
	sub_825952B8(ctx, base);
loc_82B9FFEC:
	// stw r25,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r25.u32);
	// stw r26,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// stb r26,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r26.u8);
loc_82B9FFF8:
	// lwz r10,16(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// cmplwi cr6,r4,15
	cr6.compare<uint32_t>(ctx.r4.u32, 15, xer);
	// beq cr6,0x82ba004c
	if (cr6.eq) goto loc_82BA004C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259ca68
	ctx.lr = 0x82BA0024;
	sub_8259CA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba004c
	if (cr6.eq) goto loc_82BA004C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bge cr6,0x82ba0048
	if (!cr6.lt) goto loc_82BA0048;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82BA0048:
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
loc_82BA004C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1da8
	ctx.lr = 0x82BA0060;
	sub_825A1DA8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1da8
	ctx.lr = 0x82BA0074;
	sub_825A1DA8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cb28
	ctx.lr = 0x82BA0088;
	sub_8259CB28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba00a4
	if (cr6.lt) goto loc_82BA00A4;
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82BA00A4;
	sub_825952B8(ctx, base);
loc_82BA00A4:
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// bge cr6,0x82ba00fc
	if (!cr6.lt) goto loc_82BA00FC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba00e0
	if (cr6.lt) goto loc_82BA00E0;
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x82BA00DC;
	sub_825952B8(ctx, base);
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
loc_82BA00E0:
	// lwz r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// cmplwi cr6,r11,150
	cr6.compare<uint32_t>(ctx.r11.u32, 150, xer);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// blt cr6,0x82b9feb4
	if (cr6.lt) goto loc_82B9FEB4;
	// b 0x82ba0108
	goto loc_82BA0108;
loc_82BA00FC:
	// stb r20,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r20.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA0108;
	sub_8387E8E0(ctx, base);
loc_82BA0108:
	// lbz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba0134
	if (cr6.eq) goto loc_82BA0134;
	// addi r4,r30,-529
	ctx.r4.s64 = ctx.r30.s64 + -529;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82BA0120;
	sub_8259D6C0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA0128;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA0130;
	sub_8387E8E0(ctx, base);
	// b 0x82ba01b4
	goto loc_82BA01B4;
loc_82BA0134:
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r26.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stb r26,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r26.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bl 0x8259cb28
	ctx.lr = 0x82BA0158;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BA016C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA0174;
	sub_8387E8E0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cb28
	ctx.lr = 0x82BA0188;
	sub_8259CB28(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA0190;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA0198;
	sub_8387E8E0(ctx, base);
	// b 0x82ba01b4
	goto loc_82BA01B4;
loc_82BA019C:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// add r4,r23,r11
	ctx.r4.u64 = ctx.r23.u64 + ctx.r11.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BA01B4;
	sub_8259CB28(ctx, base);
loc_82BA01B4:
	// lbz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba01f0
	if (cr6.eq) goto loc_82BA01F0;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// lwzx r11,r23,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82ba01f0
	if (!cr6.gt) goto loc_82BA01F0;
loc_82BA01D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82BA01E0;
	sub_825A1EB8(ctx, base);
	// lwzx r11,r23,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ba01d0
	if (cr6.lt) goto loc_82BA01D0;
loc_82BA01F0:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA01F8"))) PPC_WEAK_FUNC(sub_82BA01F8);
PPC_FUNC_IMPL(__imp__sub_82BA01F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BA0200;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-8637
	ctx.r4.s64 = ctx.r10.s64 + -8637;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82BA023C;
	sub_8259CC28(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b9f498
	ctx.lr = 0x82BA0254;
	sub_82B9F498(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// beq cr6,0x82ba0288
	if (cr6.eq) goto loc_82BA0288;
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x82ba0288
	if (cr6.eq) goto loc_82BA0288;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8259cb28
	ctx.lr = 0x82BA0284;
	sub_8259CB28(ctx, base);
	// b 0x82ba02a8
	goto loc_82BA02A8;
loc_82BA0288:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ba029c
	if (!cr6.lt) goto loc_82BA029C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82BA029C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b9f3a0
	ctx.lr = 0x82BA02A8;
	sub_82B9F3A0(ctx, base);
loc_82BA02A8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba02c8
	if (cr6.lt) goto loc_82BA02C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BA02C8;
	sub_825952B8(ctx, base);
loc_82BA02C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA02D0"))) PPC_WEAK_FUNC(sub_82BA02D0);
PPC_FUNC_IMPL(__imp__sub_82BA02D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82BA02D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,630
	ctx.r11.s64 = 41287680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,10082
	ctx.r10.u64 = ctx.r11.u64 | 10082;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ba02fc
	if (!cr6.gt) goto loc_82BA02FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82BA02FC;
	sub_831CC150(ctx, base);
loc_82BA02FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,104
	ctx.r24.s64 = 104;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82ba03bc
	if (!cr6.lt) goto loc_82BA03BC;
	// li r25,2
	ctx.r25.s64 = 2;
	// mulli r26,r4,104
	ctx.r26.s64 = ctx.r4.s64 * 104;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82BA0334;
	sub_82595718(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// beq cr6,0x82ba0370
	if (cr6.eq) goto loc_82BA0370;
loc_82BA034C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ba0360
	if (cr6.eq) goto loc_82BA0360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b9f240
	ctx.lr = 0x82BA0360;
	sub_82B9F240(ctx, base);
loc_82BA0360:
	// addi r30,r30,104
	ctx.r30.s64 = ctx.r30.s64 + 104;
	// addi r29,r29,104
	ctx.r29.s64 = ctx.r29.s64 + 104;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82ba034c
	if (!cr6.eq) goto loc_82BA034C;
loc_82BA0370:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r30,r11,r24
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	// beq cr6,0x82ba03a4
	if (cr6.eq) goto loc_82BA03A4;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82b9f310
	ctx.lr = 0x82BA0394;
	sub_82B9F310(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BA03A4;
	sub_825952B8(ctx, base);
loc_82BA03A4:
	// mulli r11,r30,104
	ctx.r11.s64 = ctx.r30.s64 * 104;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82BA03BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA03C4"))) PPC_WEAK_FUNC(sub_82BA03C4);
PPC_FUNC_IMPL(__imp__sub_82BA03C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA03C8"))) PPC_WEAK_FUNC(sub_82BA03C8);
PPC_FUNC_IMPL(__imp__sub_82BA03C8) {
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
	// addi r9,r11,-7176
	ctx.r9.s64 = ctx.r11.s64 + -7176;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// bl 0x830ff290
	ctx.lr = 0x82BA03FC;
	sub_830FF290(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x830ff798
	ctx.lr = 0x82BA0404;
	sub_830FF798(ctx, base);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r31,r30,136
	ctx.r31.s64 = ctx.r30.s64 + 136;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0438
	if (cr6.eq) goto loc_82BA0438;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b9f310
	ctx.lr = 0x82BA0424;
	sub_82B9F310(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BA0438;
	sub_825952B8(ctx, base);
loc_82BA0438:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82BA0450;
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

__attribute__((alias("__imp__sub_82BA0468"))) PPC_WEAK_FUNC(sub_82BA0468);
PPC_FUNC_IMPL(__imp__sub_82BA0468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,630
	ctx.r10.s64 = 41287680;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,104
	ctx.r9.s64 = 104;
	// ori r8,r10,10082
	ctx.r8.u64 = ctx.r10.u64 | 10082;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ba049c
	if (!cr6.lt) goto loc_82BA049C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82BA049C:
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
	// blt cr6,0x82ba04cc
	if (cr6.lt) goto loc_82BA04CC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82BA04CC:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ba04d8
	if (!cr6.lt) goto loc_82BA04D8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82BA04D8:
	// b 0x82ba02d0
	sub_82BA02D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA04DC"))) PPC_WEAK_FUNC(sub_82BA04DC);
PPC_FUNC_IMPL(__imp__sub_82BA04DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA04E0"))) PPC_WEAK_FUNC(sub_82BA04E0);
PPC_FUNC_IMPL(__imp__sub_82BA04E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BA04E8;
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
	ctx.lr = 0x82BA04FC;
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
	ctx.lr = 0x82BA0514;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-7176
	ctx.r9.s64 = ctx.r11.s64 + -7176;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// std r30,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r30.u64);
	// li r5,-216
	ctx.r5.s64 = -216;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// stw r6,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r6.u32);
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// addi r29,r11,17832
	ctx.r29.s64 = ctx.r11.s64 + 17832;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stb r30,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r30.u8);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stb r4,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r4.u8);
	// stb r30,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r30.u8);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82BA0594;
	sub_82D20AE0(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82BA0598:
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d20ae0
	ctx.lr = 0x82BA05A8;
	sub_82D20AE0(ctx, base);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82ba0598
	if (cr6.lt) goto loc_82BA0598;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82BA05D0;
	sub_82D23390(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x82BA05D4;
	sub_83A7D958(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// bl 0x83524138
	ctx.lr = 0x82BA05DC;
	sub_83524138(ctx, base);
	// std r3,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r3.u64);
	// bl 0x830ff290
	ctx.lr = 0x82BA05E4;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba05f8
	if (cr6.eq) goto loc_82BA05F8;
	// bl 0x830ff290
	ctx.lr = 0x82BA05F0;
	sub_830FF290(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x830ff798
	ctx.lr = 0x82BA05F8;
	sub_830FF798(ctx, base);
loc_82BA05F8:
	// bl 0x82d26640
	ctx.lr = 0x82BA05FC;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82BA0600;
	sub_82D25AB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA060C"))) PPC_WEAK_FUNC(sub_82BA060C);
PPC_FUNC_IMPL(__imp__sub_82BA060C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA0610"))) PPC_WEAK_FUNC(sub_82BA0610);
PPC_FUNC_IMPL(__imp__sub_82BA0610) {
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
	// bl 0x82ba03c8
	ctx.lr = 0x82BA0630;
	sub_82BA03C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba0648
	if (cr6.eq) goto loc_82BA0648;
	// bl 0x82416268
	ctx.lr = 0x82BA0644;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BA0648:
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

__attribute__((alias("__imp__sub_82BA0660"))) PPC_WEAK_FUNC(sub_82BA0660);
PPC_FUNC_IMPL(__imp__sub_82BA0660) {
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
	// bge cr6,0x82ba0698
	if (!cr6.lt) goto loc_82BA0698;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82ba069c
	if (!cr6.gt) goto loc_82BA069C;
loc_82BA0698:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BA069C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ba06ec
	if (cr6.eq) goto loc_82BA06EC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,104
	ctx.r9.s64 = 104;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82ba06d0
	if (!cr6.eq) goto loc_82BA06D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba0468
	ctx.lr = 0x82BA06D0;
	sub_82BA0468(ctx, base);
loc_82BA06D0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0718
	if (cr6.eq) goto loc_82BA0718;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,104
	ctx.r11.s64 = ctx.r30.s64 * 104;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ba0714
	goto loc_82BA0714;
loc_82BA06EC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ba0704
	if (!cr6.eq) goto loc_82BA0704;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba0468
	ctx.lr = 0x82BA0704;
	sub_82BA0468(ctx, base);
loc_82BA0704:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0718
	if (cr6.eq) goto loc_82BA0718;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BA0714:
	// bl 0x82b9f240
	ctx.lr = 0x82BA0718;
	sub_82B9F240(ctx, base);
loc_82BA0718:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
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

__attribute__((alias("__imp__sub_82BA073C"))) PPC_WEAK_FUNC(sub_82BA073C);
PPC_FUNC_IMPL(__imp__sub_82BA073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA0740"))) PPC_WEAK_FUNC(sub_82BA0740);
PPC_FUNC_IMPL(__imp__sub_82BA0740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BA0748;
	__savegprlr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 152);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba0880
	if (cr6.eq) goto loc_82BA0880;
	// bl 0x83a7d958
	ctx.lr = 0x82BA0760;
	sub_83A7D958(ctx, base);
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// bl 0x83524138
	ctx.lr = 0x82BA0768;
	sub_83524138(ctx, base);
	// ld r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 120);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,3200
	cr6.compare<uint64_t>(ctx.r10.u64, 3200, xer);
	// blt cr6,0x82ba098c
	if (cr6.lt) goto loc_82BA098C;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,720
	ctx.r11.s64 = 720;
	// std r31,120(r30)
	PPC_STORE_U64(ctx.r30.u32 + 120, ctx.r31.u64);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// addi r27,r30,136
	ctx.r27.s64 = ctx.r30.s64 + 136;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r25,2
	ctx.r25.s64 = 2;
loc_82BA079C:
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stb r31,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r31.u8);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r31.u8);
	// bl 0x82ba01f8
	ctx.lr = 0x82BA07FC;
	sub_82BA01F8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ba0660
	ctx.lr = 0x82BA0808;
	sub_82BA0660(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ba0818
	if (cr6.eq) goto loc_82BA0818;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82BA0818:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba0834
	if (cr6.lt) goto loc_82BA0834;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x825952b8
	ctx.lr = 0x82BA0834;
	sub_825952B8(ctx, base);
loc_82BA0834:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r31.u8);
	// blt cr6,0x82ba085c
	if (cr6.lt) goto loc_82BA085C;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BA085C;
	sub_825952B8(ctx, base);
loc_82BA085C:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// cmplwi cr6,r28,68
	cr6.compare<uint32_t>(ctx.r28.u32, 68, xer);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82ba079c
	if (cr6.lt) goto loc_82BA079C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r31,152(r30)
	PPC_STORE_U8(ctx.r30.u32 + 152, ctx.r31.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BA0880:
	// lbz r11,153(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 153);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba0998
	if (!cr6.eq) goto loc_82BA0998;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba08cc
	if (!cr6.eq) goto loc_82BA08CC;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r11.u32);
	// bl 0x82d19a68
	ctx.lr = 0x82BA08A8;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r9,r10,18004
	ctx.r9.s64 = ctx.r10.s64 + 18004;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-148(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -148);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BA08C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r3.u32);
loc_82BA08CC:
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82ba0968
	if (cr6.eq) goto loc_82BA0968;
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(ctx.r11.s32, -2, xer);
	// beq cr6,0x82ba0968
	if (cr6.eq) goto loc_82BA0968;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d04828
	ctx.lr = 0x82BA08EC;
	sub_82D04828(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// bl 0x82d28370
	ctx.lr = 0x82BA08F8;
	sub_82D28370(ctx, base);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ba0910
	if (cr6.lt) goto loc_82BA0910;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BA0910:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d06fa0
	ctx.lr = 0x82BA091C;
	sub_82D06FA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82dab6c8
	ctx.lr = 0x82BA0928;
	sub_82DAB6C8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d047a8
	ctx.lr = 0x82BA0930;
	sub_82D047A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82ba0960
	if (!cr6.gt) goto loc_82BA0960;
	// lfs f13,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82ba0960
	if (!cr6.gt) goto loc_82BA0960;
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// li r10,12
	ctx.r10.s64 = 12;
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.f0.u32);
loc_82BA0960:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d04b60
	ctx.lr = 0x82BA0968;
	sub_82D04B60(ctx, base);
loc_82BA0968:
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r11.u32);
	// lwz r9,140(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ba098c
	if (!cr6.eq) goto loc_82BA098C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,153(r30)
	PPC_STORE_U8(ctx.r30.u32 + 153, ctx.r11.u8);
loc_82BA098C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BA0998:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b9e9b8
	ctx.lr = 0x82BA09A0;
	sub_82B9E9B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BA09A8;
	sub_82D19A68(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r27,r11,18004
	ctx.r27.s64 = ctx.r11.s64 + 18004;
	// li r28,32
	ctx.r28.s64 = 32;
	// addi r29,r27,-148
	ctx.r29.s64 = ctx.r27.s64 + -148;
loc_82BA09BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA09D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BA09E4;
	sub_82D2AEC8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835d31b0
	ctx.lr = 0x82BA09EC;
	sub_835D31B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0a08
	if (cr6.eq) goto loc_82BA0A08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA0A08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BA0A08:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82ba09bc
	if (!cr0.eq) goto loc_82BA09BC;
	// addi r11,r27,-20
	ctx.r11.s64 = ctx.r27.s64 + -20;
	// li r29,5
	ctx.r29.s64 = 5;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_82BA0A20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA0A38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BA0A44;
	sub_82D2AEC8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x82ba0a20
	if (!cr0.eq) goto loc_82BA0A20;
	// li r29,5
	ctx.r29.s64 = 5;
	// addi r28,r27,-4
	ctx.r28.s64 = ctx.r27.s64 + -4;
loc_82BA0A54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA0A6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BA0A78;
	sub_82D2AEC8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x82ba0a54
	if (!cr0.eq) goto loc_82BA0A54;
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r9.u32);
	// bl 0x82d19788
	ctx.lr = 0x82BA0AA4;
	sub_82D19788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x82BA0AB0;
	sub_83102DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BA0AC0;
	sub_82D19788(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82BA0AC4;
	sub_82D26ED8(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x82d26900
	ctx.lr = 0x82BA0ACC;
	sub_82D26900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b9e9b8
	ctx.lr = 0x82BA0AD4;
	sub_82B9E9B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA0AE0"))) PPC_WEAK_FUNC(sub_82BA0AE0);
PPC_FUNC_IMPL(__imp__sub_82BA0AE0) {
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
	// blt cr6,0x82ba0b08
	if (cr6.lt) goto loc_82BA0B08;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ba0b0c
	goto loc_82BA0B0C;
loc_82BA0B08:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BA0B0C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,168
	ctx.r4.s64 = 168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BA0B28;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0b44
	if (cr6.eq) goto loc_82BA0B44;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ba04e0
	ctx.lr = 0x82BA0B3C;
	sub_82BA04E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba0b48
	if (!cr6.eq) goto loc_82BA0B48;
loc_82BA0B44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BA0B48:
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

__attribute__((alias("__imp__sub_82BA0B60"))) PPC_WEAK_FUNC(sub_82BA0B60);
PPC_FUNC_IMPL(__imp__sub_82BA0B60) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f1,9000(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// fdiv f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 / ctx.f0.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,8968(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8968);
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA0BAC"))) PPC_WEAK_FUNC(sub_82BA0BAC);
PPC_FUNC_IMPL(__imp__sub_82BA0BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA0BB0"))) PPC_WEAK_FUNC(sub_82BA0BB0);
PPC_FUNC_IMPL(__imp__sub_82BA0BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba0c04
	if (cr6.eq) goto loc_82BA0C04;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ba0c04
	if (cr6.eq) goto loc_82BA0C04;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ba0c04
	if (cr6.gt) goto loc_82BA0C04;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f0,8968(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8968);
	// fdiv f10,f12,f11
	ctx.f10.f64 = ctx.f12.f64 / ctx.f11.f64;
	// fmul f1,f10,f0
	ctx.f1.f64 = ctx.f10.f64 * ctx.f0.f64;
	// blr 
	return;
loc_82BA0C04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA0C10"))) PPC_WEAK_FUNC(sub_82BA0C10);
PPC_FUNC_IMPL(__imp__sub_82BA0C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BA0C18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-6432
	ctx.r9.s64 = ctx.r11.s64 + -6432;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ba0c54
	if (cr6.eq) goto loc_82BA0C54;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82BA0C54;
	sub_825952B8(ctx, base);
loc_82BA0C54:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ba0c7c
	if (cr6.eq) goto loc_82BA0C7C;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82BA0C7C;
	sub_825952B8(ctx, base);
loc_82BA0C7C:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// bl 0x82c0fc10
	ctx.lr = 0x82BA0C90;
	sub_82C0FC10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA0C98"))) PPC_WEAK_FUNC(sub_82BA0C98);
PPC_FUNC_IMPL(__imp__sub_82BA0C98) {
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
	// bl 0x82c0fbb8
	ctx.lr = 0x82BA0CB0;
	sub_82C0FBB8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-6432
	ctx.r9.s64 = ctx.r11.s64 + -6432;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x82d19788
	ctx.lr = 0x82BA0CF4;
	sub_82D19788(ctx, base);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,18296(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18296);
	// bl 0x82d20ae0
	ctx.lr = 0x82BA0D04;
	sub_82D20AE0(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-6572
	ctx.r4.s64 = ctx.r6.s64 + -6572;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82BA0D18;
	sub_82D23390(ctx, base);
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

__attribute__((alias("__imp__sub_82BA0D30"))) PPC_WEAK_FUNC(sub_82BA0D30);
PPC_FUNC_IMPL(__imp__sub_82BA0D30) {
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
	// bl 0x82ba0c10
	ctx.lr = 0x82BA0D50;
	sub_82BA0C10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba0d68
	if (cr6.eq) goto loc_82BA0D68;
	// bl 0x82416268
	ctx.lr = 0x82BA0D64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BA0D68:
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

__attribute__((alias("__imp__sub_82BA0D80"))) PPC_WEAK_FUNC(sub_82BA0D80);
PPC_FUNC_IMPL(__imp__sub_82BA0D80) {
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
	// blt cr6,0x82ba0da8
	if (cr6.lt) goto loc_82BA0DA8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ba0dac
	goto loc_82BA0DAC;
loc_82BA0DA8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BA0DAC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BA0DC8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba0de4
	if (cr6.eq) goto loc_82BA0DE4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ba0c98
	ctx.lr = 0x82BA0DDC;
	sub_82BA0C98(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba0de8
	if (!cr6.eq) goto loc_82BA0DE8;
loc_82BA0DE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BA0DE8:
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

__attribute__((alias("__imp__sub_82BA0E00"))) PPC_WEAK_FUNC(sub_82BA0E00);
PPC_FUNC_IMPL(__imp__sub_82BA0E00) {
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
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r4,r9,-6837
	ctx.r4.s64 = ctx.r9.s64 + -6837;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82BA0E40;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// bl 0x82d042a8
	ctx.lr = 0x82BA0E50;
	sub_82D042A8(ctx, base);
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

__attribute__((alias("__imp__sub_82BA0E6C"))) PPC_WEAK_FUNC(sub_82BA0E6C);
PPC_FUNC_IMPL(__imp__sub_82BA0E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA0E70"))) PPC_WEAK_FUNC(sub_82BA0E70);
PPC_FUNC_IMPL(__imp__sub_82BA0E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BA0E78;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-6805
	ctx.r4.s64 = ctx.r11.s64 + -6805;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82BA0EB0;
	sub_8259CC28(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82BA0EB4;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba0ef8
	if (!cr6.eq) goto loc_82BA0EF8;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BA0EDC;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba0f7c
	if (cr6.lt) goto loc_82BA0F7C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82ba0f74
	goto loc_82BA0F74;
loc_82BA0EF8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r9,r11,30364
	ctx.r9.u64 = ctx.r11.u64 | 30364;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ba0f30
	if (cr6.eq) goto loc_82BA0F30;
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// ori r4,r4,105
	ctx.r4.u64 = ctx.r4.u64 | 105;
	// bl 0x82d042a8
	ctx.lr = 0x82BA0F2C;
	sub_82D042A8(ctx, base);
	// b 0x82ba0f3c
	goto loc_82BA0F3C;
loc_82BA0F30:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,164
	ctx.r4.u64 = ctx.r4.u64 | 164;
	// bl 0x82d042a8
	ctx.lr = 0x82BA0F3C;
	sub_82D042A8(ctx, base);
loc_82BA0F3C:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BA0F5C;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba0f7c
	if (cr6.lt) goto loc_82BA0F7C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82BA0F74:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BA0F7C;
	sub_825952B8(ctx, base);
loc_82BA0F7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA0F8C"))) PPC_WEAK_FUNC(sub_82BA0F8C);
PPC_FUNC_IMPL(__imp__sub_82BA0F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA0F90"))) PPC_WEAK_FUNC(sub_82BA0F90);
PPC_FUNC_IMPL(__imp__sub_82BA0F90) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r4,r9,-6775
	ctx.r4.s64 = ctx.r9.s64 + -6775;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82BA0FD0;
	sub_8259CC28(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// ori r4,r4,198
	ctx.r4.u64 = ctx.r4.u64 | 198;
	// bl 0x82d042a8
	ctx.lr = 0x82BA0FEC;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82BA1008"))) PPC_WEAK_FUNC(sub_82BA1008);
PPC_FUNC_IMPL(__imp__sub_82BA1008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BA1010;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r29,r11,-6532
	ctx.r29.s64 = ctx.r11.s64 + -6532;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r29,-274
	ctx.r4.s64 = ctx.r29.s64 + -274;
	// bl 0x8259cc28
	ctx.lr = 0x82BA1048;
	sub_8259CC28(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82BA104C;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba10a0
	if (!cr6.eq) goto loc_82BA10A0;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1074;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba1128
	if (cr6.lt) goto loc_82BA1128;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BA1094;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BA10A0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r9,r11,30364
	ctx.r9.u64 = ctx.r11.u64 | 30364;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ba10dc
	if (cr6.eq) goto loc_82BA10DC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// bl 0x82d042a8
	ctx.lr = 0x82BA10C8;
	sub_82D042A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82BA10D8;
	sub_825A1EB8(ctx, base);
	// b 0x82ba10e8
	goto loc_82BA10E8;
loc_82BA10DC:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,164
	ctx.r4.u64 = ctx.r4.u64 | 164;
	// bl 0x82d042a8
	ctx.lr = 0x82BA10E8;
	sub_82D042A8(ctx, base);
loc_82BA10E8:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1108;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba1128
	if (cr6.lt) goto loc_82BA1128;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BA1128;
	sub_825952B8(ctx, base);
loc_82BA1128:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA1134"))) PPC_WEAK_FUNC(sub_82BA1134);
PPC_FUNC_IMPL(__imp__sub_82BA1134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA1138"))) PPC_WEAK_FUNC(sub_82BA1138);
PPC_FUNC_IMPL(__imp__sub_82BA1138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BA1140;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82c0fc30
	ctx.lr = 0x82BA114C;
	sub_82C0FC30(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r29,r11,18184
	ctx.r29.s64 = ctx.r11.s64 + 18184;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// addi r31,r26,96
	ctx.r31.s64 = ctx.r26.s64 + 96;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r28,r11,65534
	ctx.r28.u64 = ctx.r11.u64 | 65534;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
loc_82BA116C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ba1188
	if (!cr6.lt) goto loc_82BA1188;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82ba118c
	if (!cr6.gt) goto loc_82BA118C;
loc_82BA1188:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BA118C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba1220
	if (cr6.eq) goto loc_82BA1220;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// subf r8,r11,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
	// srawi r30,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 2;
	// bne cr6,0x82ba1200
	if (!cr6.eq) goto loc_82BA1200;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bgt cr6,0x82ba1320
	if (cr6.gt) goto loc_82BA1320;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82ba1200
	if (!cr6.gt) goto loc_82BA1200;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ba11ec
	if (cr6.lt) goto loc_82BA11EC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82BA11EC:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ba11f8
	if (!cr6.lt) goto loc_82BA11F8;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82BA11F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82BA1200;
	sub_82AD5E38(ctx, base);
loc_82BA1200:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba1290
	if (cr6.eq) goto loc_82BA1290;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82ba1290
	goto loc_82BA1290;
loc_82BA1220:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ba127c
	if (!cr6.eq) goto loc_82BA127C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bgt cr6,0x82ba132c
	if (cr6.gt) goto loc_82BA132C;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82ba127c
	if (!cr6.gt) goto loc_82BA127C;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ba1268
	if (cr6.lt) goto loc_82BA1268;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82BA1268:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ba1274
	if (!cr6.lt) goto loc_82BA1274;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82BA1274:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82BA127C;
	sub_82AD5E38(ctx, base);
loc_82BA127C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba1290
	if (cr6.eq) goto loc_82BA1290;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82BA1290:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r25,112
	cr6.compare<uint32_t>(ctx.r25.u32, 112, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt cr6,0x82ba116c
	if (cr6.lt) goto loc_82BA116C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// srawi r5,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// bl 0x82d20f50
	ctx.lr = 0x82BA12D0;
	sub_82D20F50(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA12D8;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1314
	if (cr6.eq) goto loc_82BA1314;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,-6556
	ctx.r4.s64 = ctx.r10.s64 + -6556;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BA12FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1314
	if (cr6.eq) goto loc_82BA1314;
	// lis r4,660
	ctx.r4.s64 = 43253760;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,275
	ctx.r4.u64 = ctx.r4.u64 | 275;
	// bl 0x82d30340
	ctx.lr = 0x82BA1314;
	sub_82D30340(ctx, base);
loc_82BA1314:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BA1320:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82BA132C;
	sub_831CC150(ctx, base);
loc_82BA132C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82BA1338;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_82BA1338"))) PPC_WEAK_FUNC(sub_82BA1338);
PPC_FUNC_IMPL(__imp__sub_82BA1338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BA1340;
	__savegprlr_27(ctx, base);
	// stwu r1,-1072(r1)
	ea = -1072 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BA1354;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1c30
	if (cr6.eq) goto loc_82BA1C30;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r30,r10,-6536
	ctx.r30.s64 = ctx.r10.s64 + -6536;
	// addis r31,r8,1
	ctx.r31.s64 = ctx.r8.s64 + 65536;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r31,r31,30360
	ctx.r31.s64 = ctx.r31.s64 + 30360;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BA138C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1c30
	if (cr6.eq) goto loc_82BA1C30;
	// addi r4,r30,-302
	ctx.r4.s64 = ctx.r30.s64 + -302;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82BA13A4;
	sub_837B0C10(ctx, base);
	// cmplwi cr6,r29,27
	cr6.compare<uint32_t>(ctx.r29.u32, 27, xer);
	// bgt cr6,0x82ba1be4
	if (cr6.gt) goto loc_82BA1BE4;
	// lis r12,-32070
	ctx.r12.s64 = -2101739520;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5060
	ctx.r12.s64 = ctx.r12.s64 + 5060;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u32) {
	case 0:
		goto loc_82BA1434;
	case 1:
		goto loc_82BA1464;
	case 2:
		goto loc_82BA1494;
	case 3:
		goto loc_82BA14C4;
	case 4:
		goto loc_82BA14F4;
	case 5:
		goto loc_82BA1528;
	case 6:
		goto loc_82BA1558;
	case 7:
		goto loc_82BA1588;
	case 8:
		goto loc_82BA15B8;
	case 9:
		goto loc_82BA15E8;
	case 10:
		goto loc_82BA1618;
	case 11:
		goto loc_82BA164C;
	case 12:
		goto loc_82BA167C;
	case 13:
		goto loc_82BA16AC;
	case 14:
		goto loc_82BA16DC;
	case 15:
		goto loc_82BA170C;
	case 16:
		goto loc_82BA173C;
	case 17:
		goto loc_82BA17A4;
	case 18:
		goto loc_82BA180C;
	case 19:
		goto loc_82BA1874;
	case 20:
		goto loc_82BA18DC;
	case 21:
		goto loc_82BA1928;
	case 22:
		goto loc_82BA1974;
	case 23:
		goto loc_82BA19DC;
	case 24:
		goto loc_82BA1A44;
	case 25:
		goto loc_82BA1AAC;
	case 26:
		goto loc_82BA1B14;
	case 27:
		goto loc_82BA1B7C;
	default:
		return;
	}
	// lwz r21,5172(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5172);
	// lwz r21,5220(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5220);
	// lwz r21,5268(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5268);
	// lwz r21,5316(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5316);
	// lwz r21,5364(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5364);
	// lwz r21,5416(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5416);
	// lwz r21,5464(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5464);
	// lwz r21,5512(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5512);
	// lwz r21,5560(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5560);
	// lwz r21,5608(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5608);
	// lwz r21,5656(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5656);
	// lwz r21,5708(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5708);
	// lwz r21,5756(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5756);
	// lwz r21,5804(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5804);
	// lwz r21,5852(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5852);
	// lwz r21,5900(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5900);
	// lwz r21,5948(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5948);
	// lwz r21,6052(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6052);
	// lwz r21,6156(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6156);
	// lwz r21,6260(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6260);
	// lwz r21,6364(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6364);
	// lwz r21,6440(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6440);
	// lwz r21,6516(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6516);
	// lwz r21,6620(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6620);
	// lwz r21,6724(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6724);
	// lwz r21,6828(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6828);
	// lwz r21,6932(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6932);
	// lwz r21,7036(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 7036);
loc_82BA1434:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ba0e00
	ctx.lr = 0x82BA1444;
	sub_82BA0E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1458;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1460;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA1464:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82ba0e00
	ctx.lr = 0x82BA1474;
	sub_82BA0E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1488;
	sub_8259CB28(ctx, base);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1490;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA1494:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x82ba0e00
	ctx.lr = 0x82BA14A4;
	sub_82BA0E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA14B8;
	sub_8259CB28(ctx, base);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA14C0;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA14C4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82ba0e00
	ctx.lr = 0x82BA14D4;
	sub_82BA0E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA14E8;
	sub_8259CB28(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA14F0;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA14F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba0b60
	ctx.lr = 0x82BA14FC;
	sub_82BA0B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82ba0e70
	ctx.lr = 0x82BA1508;
	sub_82BA0E70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA151C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1524;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA1528:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82ba0e00
	ctx.lr = 0x82BA1538;
	sub_82BA0E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA154C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1554;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA1558:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82ba0e00
	ctx.lr = 0x82BA1568;
	sub_82BA0E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA157C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1584;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA1588:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82ba0e00
	ctx.lr = 0x82BA1598;
	sub_82BA0E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA15AC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA15B4;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA15B8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82ba0e00
	ctx.lr = 0x82BA15C8;
	sub_82BA0E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA15DC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA15E4;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA15E8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82ba0e00
	ctx.lr = 0x82BA15F8;
	sub_82BA0E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA160C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1614;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA1618:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba0bb0
	ctx.lr = 0x82BA1620;
	sub_82BA0BB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x82ba0e70
	ctx.lr = 0x82BA162C;
	sub_82BA0E70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1640;
	sub_8259CB28(ctx, base);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1648;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA164C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82ba0e00
	ctx.lr = 0x82BA165C;
	sub_82BA0E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1670;
	sub_8259CB28(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1678;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA167C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbz r5,45(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ba1008
	ctx.lr = 0x82BA168C;
	sub_82BA1008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA16A0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA16A8;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA16AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82ba0e00
	ctx.lr = 0x82BA16BC;
	sub_82BA0E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA16D0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA16D8;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA16DC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ba0e00
	ctx.lr = 0x82BA16EC;
	sub_82BA0E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1700;
	sub_8259CB28(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1708;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA170C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82ba0e00
	ctx.lr = 0x82BA171C;
	sub_82BA0E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1730;
	sub_8259CB28(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1738;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA173C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba1754
	if (!cr6.eq) goto loc_82BA1754;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// b 0x82ba1778
	goto loc_82BA1778;
loc_82BA1754:
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fdiv f1,f11,f13
	ctx.f1.f64 = ctx.f11.f64 / ctx.f13.f64;
loc_82BA1778:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82ba0f90
	ctx.lr = 0x82BA1784;
	sub_82BA0F90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1798;
	sub_8259CB28(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA17A0;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA17A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba17bc
	if (!cr6.eq) goto loc_82BA17BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// b 0x82ba17e0
	goto loc_82BA17E0;
loc_82BA17BC:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fdiv f1,f13,f11
	ctx.f1.f64 = ctx.f13.f64 / ctx.f11.f64;
loc_82BA17E0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82ba0f90
	ctx.lr = 0x82BA17EC;
	sub_82BA0F90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1800;
	sub_8259CB28(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1808;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA180C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba1824
	if (!cr6.eq) goto loc_82BA1824;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// b 0x82ba1848
	goto loc_82BA1848;
loc_82BA1824:
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fdiv f1,f11,f13
	ctx.f1.f64 = ctx.f11.f64 / ctx.f13.f64;
loc_82BA1848:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82ba0f90
	ctx.lr = 0x82BA1854;
	sub_82BA0F90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1868;
	sub_8259CB28(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1870;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA1874:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba188c
	if (!cr6.eq) goto loc_82BA188C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// b 0x82ba18b0
	goto loc_82BA18B0;
loc_82BA188C:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fdiv f1,f11,f13
	ctx.f1.f64 = ctx.f11.f64 / ctx.f13.f64;
loc_82BA18B0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82ba0f90
	ctx.lr = 0x82BA18BC;
	sub_82BA0F90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA18D0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA18D8;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA18DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba18f0
	if (!cr6.eq) goto loc_82BA18F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ba18fc
	goto loc_82BA18FC;
loc_82BA18F0:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// twllei r11,0
	// divwu r5,r10,r11
	ctx.r5.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
loc_82BA18FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82ba1008
	ctx.lr = 0x82BA1908;
	sub_82BA1008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA191C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1924;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA1928:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba193c
	if (!cr6.eq) goto loc_82BA193C;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ba1948
	goto loc_82BA1948;
loc_82BA193C:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// twllei r11,0
	// divwu r5,r10,r11
	ctx.r5.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
loc_82BA1948:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82ba1008
	ctx.lr = 0x82BA1954;
	sub_82BA1008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1968;
	sub_8259CB28(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1970;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA1974:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba198c
	if (!cr6.eq) goto loc_82BA198C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// b 0x82ba19b0
	goto loc_82BA19B0;
loc_82BA198C:
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fdiv f1,f11,f13
	ctx.f1.f64 = ctx.f11.f64 / ctx.f13.f64;
loc_82BA19B0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82ba0f90
	ctx.lr = 0x82BA19BC;
	sub_82BA0F90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA19D0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA19D8;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA19DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba19f4
	if (!cr6.eq) goto loc_82BA19F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// b 0x82ba1a18
	goto loc_82BA1A18;
loc_82BA19F4:
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fdiv f1,f11,f13
	ctx.f1.f64 = ctx.f11.f64 / ctx.f13.f64;
loc_82BA1A18:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82ba0f90
	ctx.lr = 0x82BA1A24;
	sub_82BA0F90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1A38;
	sub_8259CB28(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1A40;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA1A44:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba1a5c
	if (!cr6.eq) goto loc_82BA1A5C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// b 0x82ba1a80
	goto loc_82BA1A80;
loc_82BA1A5C:
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fdiv f1,f11,f13
	ctx.f1.f64 = ctx.f11.f64 / ctx.f13.f64;
loc_82BA1A80:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82ba0f90
	ctx.lr = 0x82BA1A8C;
	sub_82BA0F90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1AA0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1AA8;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA1AAC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba1ac4
	if (!cr6.eq) goto loc_82BA1AC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// b 0x82ba1ae8
	goto loc_82BA1AE8;
loc_82BA1AC4:
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fdiv f1,f11,f13
	ctx.f1.f64 = ctx.f11.f64 / ctx.f13.f64;
loc_82BA1AE8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82ba0f90
	ctx.lr = 0x82BA1AF4;
	sub_82BA0F90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1B08;
	sub_8259CB28(ctx, base);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1B10;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA1B14:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba1b2c
	if (!cr6.eq) goto loc_82BA1B2C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// b 0x82ba1b50
	goto loc_82BA1B50;
loc_82BA1B2C:
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fdiv f1,f11,f13
	ctx.f1.f64 = ctx.f11.f64 / ctx.f13.f64;
loc_82BA1B50:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82ba0f90
	ctx.lr = 0x82BA1B5C;
	sub_82BA0F90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1B70;
	sub_8259CB28(ctx, base);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1B78;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA1B7C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba1b94
	if (!cr6.eq) goto loc_82BA1B94;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// b 0x82ba1bb8
	goto loc_82BA1BB8;
loc_82BA1B94:
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fdiv f1,f11,f13
	ctx.f1.f64 = ctx.f11.f64 / ctx.f13.f64;
loc_82BA1BB8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82ba0f90
	ctx.lr = 0x82BA1BC4;
	sub_82BA0F90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BA1BD8;
	sub_8259CB28(ctx, base);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1BE0;
	sub_8387E8E0(ctx, base);
	// b 0x82ba1bf0
	goto loc_82BA1BF0;
loc_82BA1BE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x82BA1BF0;
	sub_8259D6C0(ctx, base);
loc_82BA1BF0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ba1c04
	if (!cr6.lt) goto loc_82BA1C04;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82BA1C04:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82BA1C0C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BA1C20;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1C28;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA1C30;
	sub_8387E8E0(ctx, base);
loc_82BA1C30:
	// addi r1,r1,1072
	ctx.r1.s64 = ctx.r1.s64 + 1072;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA1C38"))) PPC_WEAK_FUNC(sub_82BA1C38);
PPC_FUNC_IMPL(__imp__sub_82BA1C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BA1C40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// addi r4,r10,-6528
	ctx.r4.s64 = ctx.r10.s64 + -6528;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BA1C6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1c88
	if (cr6.eq) goto loc_82BA1C88;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,18184
	ctx.r9.s64 = ctx.r11.s64 + 18184;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d29598
	ctx.lr = 0x82BA1C88;
	sub_82D29598(ctx, base);
loc_82BA1C88:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ba1338
	ctx.lr = 0x82BA1C98;
	sub_82BA1338(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA1CA0"))) PPC_WEAK_FUNC(sub_82BA1CA0);
PPC_FUNC_IMPL(__imp__sub_82BA1CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BA1CA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r3,6021
	ctx.r27.s64 = ctx.r3.s64 + 6021;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82BA1CBC:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stbx r26,r27,r28
	PPC_STORE_U8(ctx.r27.u32 + ctx.r28.u32, ctx.r26.u8);
	// rlwinm r30,r28,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
loc_82BA1CC8:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,1925
	ctx.r3.s64 = ctx.r11.s64 + 1925;
	// bl 0x831cdcf0
	ctx.lr = 0x82BA1CE4;
	sub_831CDCF0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,64
	cr6.compare<uint32_t>(ctx.r31.u32, 64, xer);
	// blt cr6,0x82ba1cc8
	if (cr6.lt) goto loc_82BA1CC8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// blt cr6,0x82ba1cbc
	if (cr6.lt) goto loc_82BA1CBC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA1D04"))) PPC_WEAK_FUNC(sub_82BA1D04);
PPC_FUNC_IMPL(__imp__sub_82BA1D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA1D08"))) PPC_WEAK_FUNC(sub_82BA1D08);
PPC_FUNC_IMPL(__imp__sub_82BA1D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-5624
	ctx.r9.s64 = ctx.r11.s64 + -5624;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// b 0x82bfaea8
	sub_82BFAEA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA1D24"))) PPC_WEAK_FUNC(sub_82BA1D24);
PPC_FUNC_IMPL(__imp__sub_82BA1D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA1D28"))) PPC_WEAK_FUNC(sub_82BA1D28);
PPC_FUNC_IMPL(__imp__sub_82BA1D28) {
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
	// bl 0x82bf9fb0
	ctx.lr = 0x82BA1D44;
	sub_82BF9FB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824e88
	ctx.lr = 0x82BA1D4C;
	sub_83824E88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba1dec
	if (cr6.eq) goto loc_82BA1DEC;
	// lbz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 816);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba1dec
	if (cr6.eq) goto loc_82BA1DEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17b90
	ctx.lr = 0x82BA1D6C;
	sub_82D17B90(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82BA1D70;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1dec
	if (cr6.eq) goto loc_82BA1DEC;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x82d26960
	ctx.lr = 0x82BA1D80;
	sub_82D26960(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA1D94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,296(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 296);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BA1DA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BA1DB8;
	sub_82D19788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82BA1DC4;
	sub_82D199D0(ctx, base);
	// lwz r3,812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1de8
	if (cr6.eq) goto loc_82BA1DE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d199d0
	ctx.lr = 0x82BA1DDC;
	sub_82D199D0(ctx, base);
	// lwz r3,812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// bl 0x82d29e18
	ctx.lr = 0x82BA1DE4;
	sub_82D29E18(ctx, base);
	// stw r30,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r30.u32);
loc_82BA1DE8:
	// stb r30,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r30.u8);
loc_82BA1DEC:
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

__attribute__((alias("__imp__sub_82BA1E08"))) PPC_WEAK_FUNC(sub_82BA1E08);
PPC_FUNC_IMPL(__imp__sub_82BA1E08) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ba1e60
	if (cr6.eq) goto loc_82BA1E60;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// addi r4,r10,-5720
	ctx.r4.s64 = ctx.r10.s64 + -5720;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BA1E40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba1e60
	if (cr6.eq) goto loc_82BA1E60;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x82ba1e5c
	if (cr6.lt) goto loc_82BA1E5C;
	// beq cr6,0x82ba1e74
	if (cr6.eq) goto loc_82BA1E74;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x82ba1e60
	if (!cr6.lt) goto loc_82BA1E60;
loc_82BA1E5C:
	// bl 0x82d3c780
	ctx.lr = 0x82BA1E60;
	sub_82D3C780(ctx, base);
loc_82BA1E60:
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
loc_82BA1E74:
	// bl 0x82d3c750
	ctx.lr = 0x82BA1E78;
	sub_82D3C750(ctx, base);
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

__attribute__((alias("__imp__sub_82BA1E8C"))) PPC_WEAK_FUNC(sub_82BA1E8C);
PPC_FUNC_IMPL(__imp__sub_82BA1E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA1E90"))) PPC_WEAK_FUNC(sub_82BA1E90);
PPC_FUNC_IMPL(__imp__sub_82BA1E90) {
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
	// addi r9,r11,-5624
	ctx.r9.s64 = ctx.r11.s64 + -5624;
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
	// bl 0x82bfaea8
	ctx.lr = 0x82BA1EC8;
	sub_82BFAEA8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ba1ee0
	if (cr6.eq) goto loc_82BA1EE0;
	// bl 0x82416268
	ctx.lr = 0x82BA1EDC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BA1EE0:
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

__attribute__((alias("__imp__sub_82BA1EF8"))) PPC_WEAK_FUNC(sub_82BA1EF8);
PPC_FUNC_IMPL(__imp__sub_82BA1EF8) {
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
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r4,1116
	ctx.r4.s64 = 1116;
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r3,144
	ctx.r7.s64 = ctx.r3.s64 + 144;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// divw. r8,r9,r4
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r4.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ba1fa4
	if (cr0.eq) goto loc_82BA1FA4;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
loc_82BA1F3C:
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf. r3,r30,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r30.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ba1f84
	if (cr0.eq) goto loc_82BA1F84;
loc_82BA1F58:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stbx r6,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r3,r30,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r30.s64;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ba1f58
	if (cr6.lt) goto loc_82BA1F58;
loc_82BA1F84:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r8,r8,1116
	ctx.r8.s64 = ctx.r8.s64 + 1116;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r3,r4
	ctx.r11.s32 = PPCDivide(ctx.r3.s32, ctx.r4.s32);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ba1f3c
	if (cr6.lt) goto loc_82BA1F3C;
loc_82BA1FA4:
	// bl 0x831156e8
	ctx.lr = 0x82BA1FA8;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r11,24336
	ctx.r9.u64 = ctx.r11.u64 | 24336;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ba1fd0
	if (!cr6.eq) goto loc_82BA1FD0;
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// b 0x82ba1fd4
	goto loc_82BA1FD4;
loc_82BA1FD0:
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
loc_82BA1FD4:
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA1FDC;
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

__attribute__((alias("__imp__sub_82BA1FF4"))) PPC_WEAK_FUNC(sub_82BA1FF4);
PPC_FUNC_IMPL(__imp__sub_82BA1FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA1FF8"))) PPC_WEAK_FUNC(sub_82BA1FF8);
PPC_FUNC_IMPL(__imp__sub_82BA1FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BA2000;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r28,1116
	ctx.r28.s64 = 1116;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82BA201C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f1040
	ctx.lr = 0x82BA2028;
	sub_830F1040(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba20c4
	if (cr6.eq) goto loc_82BA20C4;
	// addi r31,r25,144
	ctx.r31.s64 = ctx.r25.s64 + 144;
loc_82BA2040:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f1048
	ctx.lr = 0x82BA2050;
	sub_830F1048(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r7,r9,r28
	ctx.r7.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82ba20b4
	if (cr0.eq) goto loc_82BA20B4;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_82BA2074:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,49(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ba20dc
	if (!cr6.eq) goto loc_82BA20DC;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x82ba20d8
	if (!cr6.eq) goto loc_82BA20D8;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// ble cr6,0x82ba20dc
	if (!cr6.gt) goto loc_82BA20DC;
	// mulli r11,r8,1116
	ctx.r11.s64 = ctx.r8.s64 * 1116;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stbx r26,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r26.u8);
loc_82BA20B4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ba2040
	if (cr6.lt) goto loc_82BA2040;
loc_82BA20C4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x82ba201c
	if (cr6.lt) goto loc_82BA201C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BA20D8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82BA20DC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,1116
	ctx.r9.s64 = ctx.r9.s64 + 1116;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x82ba2074
	if (cr6.lt) goto loc_82BA2074;
	// b 0x82ba20b4
	goto loc_82BA20B4;
}

__attribute__((alias("__imp__sub_82BA20F0"))) PPC_WEAK_FUNC(sub_82BA20F0);
PPC_FUNC_IMPL(__imp__sub_82BA20F0) {
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
	ctx.lr = 0x82BA20F8;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x82BA2108;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82BA210C;
	sub_83524138(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82BA2110;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba2498
	if (cr6.eq) goto loc_82BA2498;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r21,0
	ctx.r21.s64 = 0;
	// li r26,1116
	ctx.r26.s64 = 1116;
	// addis r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 65536;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// addi r22,r22,24336
	ctx.r22.s64 = ctx.r22.s64 + 24336;
	// li r20,1
	ctx.r20.s64 = 1;
	// lbz r10,6021(r22)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r22.u32 + 6021);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ba21fc
	if (cr6.eq) goto loc_82BA21FC;
	// addi r30,r23,144
	ctx.r30.s64 = ctx.r23.s64 + 144;
	// addi r28,r22,1925
	ctx.r28.s64 = ctx.r22.s64 + 1925;
loc_82BA2148:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ba21e8
	if (cr0.eq) goto loc_82BA21E8;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82BA2164:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f1020
	ctx.lr = 0x82BA216C;
	sub_830F1020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba21e8
	if (cr6.eq) goto loc_82BA21E8;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// add r11,r31,r8
	ctx.r11.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
loc_82BA2188:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x82ba21ac
	if (cr6.eq) goto loc_82BA21AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ba2188
	if (cr6.eq) goto loc_82BA2188;
loc_82BA21AC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ba21d8
	if (cr6.eq) goto loc_82BA21D8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1116
	ctx.r31.s64 = ctx.r31.s64 + 1116;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ba2164
	if (cr6.lt) goto loc_82BA2164;
	// b 0x82ba21e8
	goto loc_82BA21E8;
loc_82BA21D8:
	// mulli r11,r29,1116
	ctx.r11.s64 = ctx.r29.s64 * 1116;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r20,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r20.u8);
loc_82BA21E8:
	// lbz r11,6021(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 6021);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ba2148
	if (cr6.lt) goto loc_82BA2148;
loc_82BA21FC:
	// lbz r11,6022(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 6022);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba22c8
	if (cr6.eq) goto loc_82BA22C8;
	// addi r30,r23,144
	ctx.r30.s64 = ctx.r23.s64 + 144;
	// addi r28,r22,3973
	ctx.r28.s64 = ctx.r22.s64 + 3973;
loc_82BA2214:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ba22b4
	if (cr0.eq) goto loc_82BA22B4;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82BA2230:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f1020
	ctx.lr = 0x82BA2238;
	sub_830F1020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba22b4
	if (cr6.eq) goto loc_82BA22B4;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// add r11,r31,r8
	ctx.r11.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
loc_82BA2254:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x82ba2278
	if (cr6.eq) goto loc_82BA2278;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ba2254
	if (cr6.eq) goto loc_82BA2254;
loc_82BA2278:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ba22a4
	if (cr6.eq) goto loc_82BA22A4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1116
	ctx.r31.s64 = ctx.r31.s64 + 1116;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ba2230
	if (cr6.lt) goto loc_82BA2230;
	// b 0x82ba22b4
	goto loc_82BA22B4;
loc_82BA22A4:
	// mulli r11,r29,1116
	ctx.r11.s64 = ctx.r29.s64 * 1116;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r20,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r20.u8);
loc_82BA22B4:
	// lbz r11,6022(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 6022);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ba2214
	if (cr6.lt) goto loc_82BA2214;
loc_82BA22C8:
	// lbz r11,1924(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 1924);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba2490
	if (cr6.eq) goto loc_82BA2490;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,280
	ctx.r9.s64 = 18350080;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r22,1796
	ctx.r28.s64 = ctx.r22.s64 + 1796;
	// addi r29,r22,4
	ctx.r29.s64 = ctx.r22.s64 + 4;
	// lfs f31,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// ori r25,r9,16
	ctx.r25.u64 = ctx.r9.u64 | 16;
	// addi r24,r11,-5748
	ctx.r24.s64 = ctx.r11.s64 + -5748;
loc_82BA22FC:
	// li r10,16
	ctx.r10.s64 = 16;
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r1,103
	ctx.r11.s64 = ctx.r1.s64 + 103;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// stb r21,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r21.u8);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// stb r21,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r21.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82BA231C:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82ba231c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BA231C;
	// cmplwi cr6,r27,64
	cr6.compare<uint32_t>(ctx.r27.u32, 64, xer);
	// bge cr6,0x82ba2350
	if (!cr6.lt) goto loc_82BA2350;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82BA233C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ba233c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BA233C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82ba2354
	goto loc_82BA2354;
loc_82BA2350:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82BA2354:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba2478
	if (cr6.eq) goto loc_82BA2478;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82bfa150
	ctx.lr = 0x82BA237C;
	sub_82BFA150(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ba242c
	if (cr6.eq) goto loc_82BA242C;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,144(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 144);
	// mulli r10,r10,1116
	ctx.r10.s64 = ctx.r10.s64 * 1116;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,49(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 49);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82ba2478
	if (!cr6.eq) goto loc_82BA2478;
	// addi r11,r8,1044
	ctx.r11.s64 = ctx.r8.s64 + 1044;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
loc_82BA23B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ba23d0
	if (!cr0.eq) goto loc_82BA23D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// bne cr6,0x82ba23b0
	if (!cr6.eq) goto loc_82BA23B0;
loc_82BA23D0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ba2478
	if (!cr6.eq) goto loc_82BA2478;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r10,144(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 144);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r8,1116
	ctx.r11.s64 = ctx.r8.s64 * 1116;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stb r9,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r31,r5,1116
	ctx.r31.s64 = ctx.r5.s64 * 1116;
	// lwz r30,144(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 144);
	// bl 0x82bfa108
	ctx.lr = 0x82BA2418;
	sub_82BFA108(ctx, base);
	// stbx r3,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u8);
	// lwz r11,820(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 820);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,820(r23)
	PPC_STORE_U32(ctx.r23.u32 + 820, ctx.r4.u32);
	// b 0x82ba2478
	goto loc_82BA2478;
loc_82BA242C:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba2478
	if (!cr6.eq) goto loc_82BA2478;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82BA2450;
	sub_82D2EE48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba2474
	if (cr6.eq) goto loc_82BA2474;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2ac30
	ctx.lr = 0x82BA2468;
	sub_82D2AC30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83103100
	ctx.lr = 0x82BA2474;
	sub_83103100(ctx, base);
loc_82BA2474:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_82BA2478:
	// lbz r11,1924(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 1924);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ba22fc
	if (cr6.lt) goto loc_82BA22FC;
loc_82BA2490:
	// bl 0x83a7d958
	ctx.lr = 0x82BA2494;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82BA2498;
	sub_83524138(ctx, base);
loc_82BA2498:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA24A4"))) PPC_WEAK_FUNC(sub_82BA24A4);
PPC_FUNC_IMPL(__imp__sub_82BA24A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA24A8"))) PPC_WEAK_FUNC(sub_82BA24A8);
PPC_FUNC_IMPL(__imp__sub_82BA24A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BA24B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82BA24C8;
	sub_82D1C1A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA24D4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BA24DC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba2568
	if (cr6.eq) goto loc_82BA2568;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r10,1116
	ctx.r10.s64 = 1116;
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// blt cr6,0x82ba2568
	if (cr6.lt) goto loc_82BA2568;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BA2508;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba2568
	if (cr6.eq) goto loc_82BA2568;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA252C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,332(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 332);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BA2540;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bfa050
	ctx.lr = 0x82BA2554;
	sub_82BFA050(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,312(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 312);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BA2568;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BA2568:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA2570"))) PPC_WEAK_FUNC(sub_82BA2570);
PPC_FUNC_IMPL(__imp__sub_82BA2570) {
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
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba2678
	if (cr6.eq) goto loc_82BA2678;
	// lbz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 120);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ba2678
	if (!cr6.eq) goto loc_82BA2678;
	// bl 0x82d17d90
	ctx.lr = 0x82BA25A4;
	sub_82D17D90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba2678
	if (!cr6.eq) goto loc_82BA2678;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r6,1116
	ctx.r6.s64 = 1116;
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r31,144
	ctx.r10.s64 = ctx.r31.s64 + 144;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// divw r8,r8,r6
	ctx.r8.s32 = PPCDivide(ctx.r8.s32, ctx.r6.s32);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,10
	ctx.r5.s64 = 10;
loc_82BA25D4:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ba261c
	if (cr6.eq) goto loc_82BA261C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BA25E4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stbx r4,r3,r7
	PPC_STORE_U8(ctx.r3.u32 + ctx.r7.u32, ctx.r4.u8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stbx r5,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1116
	ctx.r11.s64 = ctx.r11.s64 + 1116;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r3,r8,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r8.s64;
	// divw r8,r3,r6
	ctx.r8.s32 = PPCDivide(ctx.r3.s32, ctx.r6.s32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ba25e4
	if (cr6.lt) goto loc_82BA25E4;
loc_82BA261C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// blt cr6,0x82ba25d4
	if (cr6.lt) goto loc_82BA25D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA263C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r30.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,296(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 296);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BA2658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82BA2678;
	sub_82D1EBF8(ctx, base);
loc_82BA2678:
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

__attribute__((alias("__imp__sub_82BA2690"))) PPC_WEAK_FUNC(sub_82BA2690);
PPC_FUNC_IMPL(__imp__sub_82BA2690) {
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
	ctx.lr = 0x82BA2698;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BA26B0;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba28f0
	if (cr6.eq) goto loc_82BA28F0;
	// bl 0x831156e8
	ctx.lr = 0x82BA26BC;
	sub_831156E8(ctx, base);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r22,12
	ctx.r22.s64 = 12;
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addis r24,r10,1
	ctx.r24.s64 = ctx.r10.s64 + 65536;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// divw. r8,r9,r22
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// addi r24,r24,24336
	ctx.r24.s64 = ctx.r24.s64 + 24336;
	// beq 0x82ba2888
	if (cr0.eq) goto loc_82BA2888;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_82BA26FC:
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// ble cr6,0x82ba2868
	if (!cr6.gt) goto loc_82BA2868;
	// li r5,984
	ctx.r5.s64 = 984;
	// stfs f31,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82BA2724;
	sub_831CDCF0(ctx, base);
	// lwzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mulli r10,r10,1116
	ctx.r10.s64 = ctx.r10.s64 * 1116;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82d26ac0
	ctx.lr = 0x82BA273C;
	sub_82D26AC0(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// lwzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// mulli r11,r8,1116
	ctx.r11.s64 = ctx.r8.s64 * 1116;
	// lbzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82bfa0e0
	ctx.lr = 0x82BA2760;
	sub_82BFA0E0(ctx, base);
	// stfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// li r5,992
	ctx.r5.s64 = 992;
	// lwzx r6,r29,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// mulli r11,r6,1116
	ctx.r11.s64 = ctx.r6.s64 * 1116;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// bl 0x831ce980
	ctx.lr = 0x82BA2788;
	sub_831CE980(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830ef040
	ctx.lr = 0x82BA2794;
	sub_830EF040(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r1,87
	ctx.r10.s64 = ctx.r1.s64 + 87;
	// stb r27,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r27.u8);
	// stb r27,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r27.u8);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82BA27AC:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82ba27ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BA27AC;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwzx r7,r29,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mulli r11,r7,1116
	ctx.r11.s64 = ctx.r7.s64 * 1116;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82BA27D4:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r10,r1,89
	ctx.r10.s64 = ctx.r1.s64 + 89;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbz r7,1044(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1044);
	// lbz r6,1045(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1045);
	// lbz r5,1046(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1046);
	// lbz r4,1047(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1047);
	// stb r7,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r7.u8);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// stb r4,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// bdnz 0x82ba27d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BA27D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// bl 0x82bfa0e0
	ctx.lr = 0x82BA2814;
	sub_82BFA0E0(ctx, base);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// lwz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// lwzx r7,r29,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// mulli r11,r7,1116
	ctx.r11.s64 = ctx.r7.s64 * 1116;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,52(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bge cr6,0x82ba2864
	if (!cr6.lt) goto loc_82BA2864;
	// li r11,7
	ctx.r11.s64 = 7;
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
loc_82BA2858:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ba2858
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BA2858;
loc_82BA2864:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82BA2868:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// divw r9,r10,r22
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r22.s32);
	// cmplw cr6,r23,r9
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r9.u32, xer);
	// blt cr6,0x82ba26fc
	if (cr6.lt) goto loc_82BA26FC;
loc_82BA2888:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82ba28f0
	if (cr0.eq) goto loc_82BA28F0;
loc_82BA28A0:
	// cmplwi cr6,r9,64
	cr6.compare<uint32_t>(ctx.r9.u32, 64, xer);
	// bge cr6,0x82ba28d0
	if (!cr6.lt) goto loc_82BA28D0;
	// lhzx r8,r27,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r11.u32);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lbz r7,1924(r24)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1924);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// bge cr6,0x82ba28c4
	if (!cr6.lt) goto loc_82BA28C4;
	// stb r10,1924(r24)
	PPC_STORE_U8(ctx.r24.u32 + 1924, ctx.r10.u8);
loc_82BA28C4:
	// addi r11,r11,898
	ctx.r11.s64 = ctx.r11.s64 + 898;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r10,r24
	PPC_STORE_U16(ctx.r10.u32 + ctx.r24.u32, ctx.r8.u16);
loc_82BA28D0:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82ba28a0
	if (cr6.lt) goto loc_82BA28A0;
loc_82BA28F0:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA28FC"))) PPC_WEAK_FUNC(sub_82BA28FC);
PPC_FUNC_IMPL(__imp__sub_82BA28FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA2900"))) PPC_WEAK_FUNC(sub_82BA2900);
PPC_FUNC_IMPL(__imp__sub_82BA2900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BA2908;
	__savegprlr_29(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x82BA2928;
	sub_831CDCF0(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ba29a8
	if (cr0.eq) goto loc_82BA29A8;
	// lwz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82BA294C:
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mulli r10,r10,1116
	ctx.r10.s64 = ctx.r10.s64 * 1116;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r6,49(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x82ba297c
	if (!cr6.eq) goto loc_82BA297C;
	// cmplwi cr6,r7,64
	cr6.compare<uint32_t>(ctx.r7.u32, 64, xer);
	// bge cr6,0x82ba29a0
	if (!cr6.lt) goto loc_82BA29A0;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
loc_82BA297C:
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mulli r10,r10,1116
	ctx.r10.s64 = ctx.r10.s64 * 1116;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r6,49(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82ba29a0
	if (!cr6.eq) goto loc_82BA29A0;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
loc_82BA29A0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82ba294c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BA294C;
loc_82BA29A8:
	// bl 0x82d26ed8
	ctx.lr = 0x82BA29AC;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba29ec
	if (cr6.eq) goto loc_82BA29EC;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x82ba29c4
	if (!cr6.eq) goto loc_82BA29C4;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82ba29d0
	goto loc_82BA29D0;
loc_82BA29C4:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x82ba29ec
	if (!cr6.eq) goto loc_82BA29EC;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82BA29D0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// bl 0x82d269b8
	ctx.lr = 0x82BA29EC;
	sub_82D269B8(ctx, base);
loc_82BA29EC:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA29F4"))) PPC_WEAK_FUNC(sub_82BA29F4);
PPC_FUNC_IMPL(__imp__sub_82BA29F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA29F8"))) PPC_WEAK_FUNC(sub_82BA29F8);
PPC_FUNC_IMPL(__imp__sub_82BA29F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BA2A00;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bfa678
	ctx.lr = 0x82BA2A0C;
	sub_82BFA678(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA2A14;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BA2A1C;
	sub_82D33DB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba2ad0
	if (cr6.eq) goto loc_82BA2AD0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,160
	ctx.r29.s64 = ctx.r30.s64 + 160;
	// li r27,1116
	ctx.r27.s64 = 1116;
loc_82BA2A34:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82ba2abc
	if (!cr6.gt) goto loc_82BA2ABC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BA2A58;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BA2A64;
	sub_82D19BB0(ctx, base);
	// subf r25,r3,r31
	ctx.r25.s64 = ctx.r31.s64 - ctx.r3.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82BA2A74;
	sub_82D19CD0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r3,r25
	ctx.r10.u64 = ctx.r3.u64 + ctx.r25.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r27
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x82ba2abc
	if (!cr6.lt) goto loc_82BA2ABC;
	// mulli r10,r10,1116
	ctx.r10.s64 = ctx.r10.s64 * 1116;
	// lwz r9,124(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lbzx r5,r7,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x82ba1e08
	ctx.lr = 0x82BA2AB0;
	sub_82BA1E08(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,12
	cr6.compare<uint32_t>(ctx.r31.u32, 12, xer);
	// blt cr6,0x82ba2a34
	if (cr6.lt) goto loc_82BA2A34;
loc_82BA2ABC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA2AD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BA2AD0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA2AD8"))) PPC_WEAK_FUNC(sub_82BA2AD8);
PPC_FUNC_IMPL(__imp__sub_82BA2AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BA2AE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bfa748
	ctx.lr = 0x82BA2AEC;
	sub_82BFA748(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA2AF4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BA2AFC;
	sub_82D33DB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba2bb0
	if (cr6.eq) goto loc_82BA2BB0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,160
	ctx.r29.s64 = ctx.r30.s64 + 160;
	// li r27,1116
	ctx.r27.s64 = 1116;
loc_82BA2B14:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82ba2b9c
	if (!cr6.gt) goto loc_82BA2B9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BA2B38;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BA2B44;
	sub_82D19BB0(ctx, base);
	// subf r25,r3,r31
	ctx.r25.s64 = ctx.r31.s64 - ctx.r3.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82BA2B54;
	sub_82D19CD0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r3,r25
	ctx.r10.u64 = ctx.r3.u64 + ctx.r25.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r27
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x82ba2b9c
	if (!cr6.lt) goto loc_82BA2B9C;
	// mulli r10,r10,1116
	ctx.r10.s64 = ctx.r10.s64 * 1116;
	// lwz r9,124(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lbzx r5,r7,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x82ba1e08
	ctx.lr = 0x82BA2B90;
	sub_82BA1E08(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,12
	cr6.compare<uint32_t>(ctx.r31.u32, 12, xer);
	// blt cr6,0x82ba2b14
	if (cr6.lt) goto loc_82BA2B14;
loc_82BA2B9C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA2BB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BA2BB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA2BB8"))) PPC_WEAK_FUNC(sub_82BA2BB8);
PPC_FUNC_IMPL(__imp__sub_82BA2BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82BA2BC0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r26,r4,100
	ctx.r26.s64 = ctx.r4.s64 + 100;
	// addi r25,r11,-5720
	ctx.r25.s64 = ctx.r11.s64 + -5720;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r4,r25,-12
	ctx.r4.s64 = ctx.r25.s64 + -12;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BA2BF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba2e78
	if (cr6.eq) goto loc_82BA2E78;
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r11,1116
	ctx.r11.s64 = 1116;
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// blt cr6,0x82ba2e78
	if (cr6.lt) goto loc_82BA2E78;
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// divw. r3,r8,r11
	ctx.r3.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ba2cd0
	if (cr0.eq) goto loc_82BA2CD0;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mulli r11,r30,1116
	ctx.r11.s64 = ctx.r30.s64 * 1116;
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82BA2C4C:
	// lbz r11,49(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba2c6c
	if (!cr6.eq) goto loc_82BA2C6C;
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lwz r10,52(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ba2cc8
	if (cr6.eq) goto loc_82BA2CC8;
loc_82BA2C6C:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ba2cb4
	if (!cr6.eq) goto loc_82BA2CB4;
	// addi r11,r11,1044
	ctx.r11.s64 = ctx.r11.s64 + 1044;
	// addi r10,r6,1044
	ctx.r10.s64 = ctx.r6.s64 + 1044;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82BA2C8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ba2cac
	if (!cr0.eq) goto loc_82BA2CAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ba2c8c
	if (!cr6.eq) goto loc_82BA2C8C;
loc_82BA2CAC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ba2ccc
	if (cr6.eq) goto loc_82BA2CCC;
loc_82BA2CB4:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,1116
	ctx.r7.s64 = ctx.r7.s64 + 1116;
	// cmplw cr6,r5,r3
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ba2c4c
	if (cr6.lt) goto loc_82BA2C4C;
	// b 0x82ba2cd0
	goto loc_82BA2CD0;
loc_82BA2CC8:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82BA2CCC:
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
loc_82BA2CD0:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mulli r30,r29,1116
	ctx.r30.s64 = ctx.r29.s64 * 1116;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf. r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ba2d70
	if (cr0.eq) goto loc_82BA2D70;
loc_82BA2CF4:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x82ba2d48
	if (cr6.eq) goto loc_82BA2D48;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d3c7b0
	ctx.lr = 0x82BA2D08;
	sub_82D3C7B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x82ba2d2c
	if (cr6.eq) goto loc_82BA2D2C;
	// stbx r27,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r27.u8);
	// b 0x82ba2d30
	goto loc_82BA2D30;
loc_82BA2D2C:
	// stbx r28,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r28.u8);
loc_82BA2D30:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x82ba2d6c
	if (cr6.eq) goto loc_82BA2D6C;
loc_82BA2D48:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ba2cf4
	if (cr6.lt) goto loc_82BA2CF4;
	// b 0x82ba2d70
	goto loc_82BA2D70;
loc_82BA2D6C:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82BA2D70:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d3c7b0
	ctx.lr = 0x82BA2D78;
	sub_82D3C7B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba2de8
	if (cr6.eq) goto loc_82BA2DE8;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r11,820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,64
	cr6.compare<uint32_t>(ctx.r9.u32, 64, xer);
	// ble cr6,0x82ba2de8
	if (!cr6.gt) goto loc_82BA2DE8;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82ba2de8
	if (!cr6.eq) goto loc_82BA2DE8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82ba2de8
	if (!cr6.eq) goto loc_82BA2DE8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d3c780
	ctx.lr = 0x82BA2DCC;
	sub_82D3C780(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stbx r28,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82BA2DE8:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lbzx r30,r6,r8
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82BA2E14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba2e34
	if (cr6.eq) goto loc_82BA2E34;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82ba2e30
	if (cr6.lt) goto loc_82BA2E30;
	// beq cr6,0x82ba2e68
	if (cr6.eq) goto loc_82BA2E68;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bge cr6,0x82ba2e34
	if (!cr6.lt) goto loc_82BA2E34;
loc_82BA2E30:
	// bl 0x82d3c780
	ctx.lr = 0x82BA2E34;
	sub_82D3C780(ctx, base);
loc_82BA2E34:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba2e78
	if (cr6.eq) goto loc_82BA2E78;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d3c7b0
	ctx.lr = 0x82BA2E48;
	sub_82D3C7B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// beq cr6,0x82ba2e70
	if (cr6.eq) goto loc_82BA2E70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82BA2E68:
	// bl 0x82d3c750
	ctx.lr = 0x82BA2E6C;
	sub_82D3C750(ctx, base);
	// b 0x82ba2e34
	goto loc_82BA2E34;
loc_82BA2E70:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
loc_82BA2E78:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA2E80"))) PPC_WEAK_FUNC(sub_82BA2E80);
PPC_FUNC_IMPL(__imp__sub_82BA2E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BA2E88;
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
	// bl 0x82bfa0c0
	ctx.lr = 0x82BA2E9C;
	sub_82BFA0C0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ba2edc
	if (cr6.eq) goto loc_82BA2EDC;
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mulli r11,r29,1116
	ctx.r11.s64 = ctx.r29.s64 * 1116;
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lbzx r5,r7,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x82ba1e08
	ctx.lr = 0x82BA2EC8;
	sub_82BA1E08(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,332(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 332);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82BA2EDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BA2EDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA2EE4"))) PPC_WEAK_FUNC(sub_82BA2EE4);
PPC_FUNC_IMPL(__imp__sub_82BA2EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA2EE8"))) PPC_WEAK_FUNC(sub_82BA2EE8);
PPC_FUNC_IMPL(__imp__sub_82BA2EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BA2EF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ba2f14
	if (!cr6.gt) goto loc_82BA2F14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82BA2F14;
	sub_831CC150(ctx, base);
loc_82BA2F14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82ba2fc4
	if (!cr6.lt) goto loc_82BA2FC4;
	// li r27,2
	ctx.r27.s64 = 2;
	// rlwinm r28,r4,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BA2F48;
	sub_82595718(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ba2f88
	if (cr6.eq) goto loc_82BA2F88;
loc_82BA2F60:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ba2f78
	if (cr6.eq) goto loc_82BA2F78;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
loc_82BA2F78:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ba2f60
	if (!cr6.eq) goto loc_82BA2F60;
loc_82BA2F88:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r29,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 1;
	// beq cr6,0x82ba2fac
	if (cr6.eq) goto loc_82BA2FAC;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82BA2FAC;
	sub_825952B8(ctx, base);
loc_82BA2FAC:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82BA2FC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA2FCC"))) PPC_WEAK_FUNC(sub_82BA2FCC);
PPC_FUNC_IMPL(__imp__sub_82BA2FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA2FD0"))) PPC_WEAK_FUNC(sub_82BA2FD0);
PPC_FUNC_IMPL(__imp__sub_82BA2FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ba3000
	if (!cr6.lt) goto loc_82BA3000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82BA3000:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,1
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
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
	// blt cr6,0x82ba3030
	if (cr6.lt) goto loc_82BA3030;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82BA3030:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x82ba303c
	if (!cr6.lt) goto loc_82BA303C;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_82BA303C:
	// b 0x82ba2ee8
	sub_82BA2EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA3040"))) PPC_WEAK_FUNC(sub_82BA3040);
PPC_FUNC_IMPL(__imp__sub_82BA3040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA3044"))) PPC_WEAK_FUNC(sub_82BA3044);
PPC_FUNC_IMPL(__imp__sub_82BA3044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA3048"))) PPC_WEAK_FUNC(sub_82BA3048);
PPC_FUNC_IMPL(__imp__sub_82BA3048) {
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
	// bge cr6,0x82ba3080
	if (!cr6.lt) goto loc_82BA3080;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82ba3084
	if (!cr6.gt) goto loc_82BA3084;
loc_82BA3080:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BA3084:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ba30e0
	if (cr6.eq) goto loc_82BA30E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// srawi r30,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 1;
	// bne cr6,0x82ba30b4
	if (!cr6.eq) goto loc_82BA30B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba2fd0
	ctx.lr = 0x82BA30B4;
	sub_82BA2FD0(ctx, base);
loc_82BA30B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba3114
	if (cr6.eq) goto loc_82BA3114;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r6,1(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// b 0x82ba3114
	goto loc_82BA3114;
loc_82BA30E0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ba30f8
	if (!cr6.eq) goto loc_82BA30F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba2fd0
	ctx.lr = 0x82BA30F8;
	sub_82BA2FD0(ctx, base);
loc_82BA30F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba3114
	if (cr6.eq) goto loc_82BA3114;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_82BA3114:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
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

__attribute__((alias("__imp__sub_82BA3138"))) PPC_WEAK_FUNC(sub_82BA3138);
PPC_FUNC_IMPL(__imp__sub_82BA3138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BA3140;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,808(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 808);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba32e4
	if (!cr6.eq) goto loc_82BA32E4;
	// bl 0x82dd3a30
	ctx.lr = 0x82BA3158;
	sub_82DD3A30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17b90
	ctx.lr = 0x82BA3160;
	sub_82D17B90(ctx, base);
	// lis r11,50
	ctx.r11.s64 = 3276800;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,27
	ctx.r10.u64 = ctx.r11.u64 | 27;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// bl 0x835977d8
	ctx.lr = 0x82BA3194;
	sub_835977D8(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835977d8
	ctx.lr = 0x82BA31A4;
	sub_835977D8(ctx, base);
	// lis r9,11
	ctx.r9.s64 = 720896;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r8,r9,22
	ctx.r8.u64 = ctx.r9.u64 | 22;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x835977d8
	ctx.lr = 0x82BA31BC;
	sub_835977D8(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835977d8
	ctx.lr = 0x82BA31CC;
	sub_835977D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BA31D4;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,-5768
	ctx.r29.s64 = ctx.r11.s64 + -5768;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BA31F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba321c
	if (!cr6.eq) goto loc_82BA321C;
loc_82BA3200:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f73d60
	ctx.lr = 0x82BA3208;
	sub_82F73D60(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82BA3210;
	sub_82F73D60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BA321C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2fe58
	ctx.lr = 0x82BA3224;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// beq cr6,0x82ba3200
	if (cr6.eq) goto loc_82BA3200;
	// bl 0x83572958
	ctx.lr = 0x82BA3234;
	sub_83572958(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r5,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// bl 0x82d3d968
	ctx.lr = 0x82BA3250;
	sub_82D3D968(ctx, base);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82d303d0
	ctx.lr = 0x82BA3260;
	sub_82D303D0(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,292(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 292);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BA3278;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA3280;
	sub_82D19A78(ctx, base);
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
	ctx.lr = 0x82BA3298;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,332(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 332);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BA32AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,296(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 296);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BA32C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r5,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r5.u8);
	// bl 0x82f73d60
	ctx.lr = 0x82BA32D0;
	sub_82F73D60(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82BA32D8;
	sub_82F73D60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BA32E4:
	// bl 0x82bfb678
	ctx.lr = 0x82BA32E8;
	sub_82BFB678(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,772(r31)
	PPC_STORE_U8(ctx.r31.u32 + 772, ctx.r3.u8);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA3300"))) PPC_WEAK_FUNC(sub_82BA3300);
PPC_FUNC_IMPL(__imp__sub_82BA3300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82BA3308;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BA3314;
	sub_831156E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba34f0
	if (cr6.eq) goto loc_82BA34F0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r31,12
	ctx.r31.s64 = 12;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// beq 0x82ba33d0
	if (cr0.eq) goto loc_82BA33D0;
loc_82BA3364:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba338c
	if (!cr6.eq) goto loc_82BA338C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x82ba3398
	goto loc_82BA3398;
loc_82BA338C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ba34f8
	if (!cr6.eq) goto loc_82BA34F8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_82BA3398:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x833eab80
	ctx.lr = 0x82BA33A0;
	sub_833EAB80(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// divw r6,r7,r31
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r31.s32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x82ba3364
	if (cr6.lt) goto loc_82BA3364;
	// lwz r25,112(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r24,128(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82BA33D0:
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addis r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 65536;
	// subf. r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r30,r30,24336
	ctx.r30.s64 = ctx.r30.s64 + 24336;
	// beq 0x82ba344c
	if (cr0.eq) goto loc_82BA344C;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r29,r30,1925
	ctx.r29.s64 = ctx.r30.s64 + 1925;
	// addi r28,r25,-1
	ctx.r28.s64 = ctx.r25.s64 + -1;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82BA33F8:
	// lbzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r8,6021(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6021);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// bge cr6,0x82ba3424
	if (!cr6.lt) goto loc_82BA3424;
	// stb r31,6021(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6021, ctx.r31.u8);
loc_82BA3424:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ba343c
	if (cr6.eq) goto loc_82BA343C;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82BA3438;
	sub_831CE980(ctx, base);
	// stb r23,31(r29)
	PPC_STORE_U8(ctx.r29.u32 + 31, ctx.r23.u8);
loc_82BA343C:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bne 0x82ba33f8
	if (!cr0.eq) goto loc_82BA33F8;
loc_82BA344C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf. r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82ba34bc
	if (cr0.eq) goto loc_82BA34BC;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r29,r30,3973
	ctx.r29.s64 = ctx.r30.s64 + 3973;
	// addi r28,r24,-1
	ctx.r28.s64 = ctx.r24.s64 + -1;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82BA3468:
	// lbzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r8,6022(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6022);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// bge cr6,0x82ba3494
	if (!cr6.lt) goto loc_82BA3494;
	// stb r31,6022(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6022, ctx.r31.u8);
loc_82BA3494:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ba34ac
	if (cr6.eq) goto loc_82BA34AC;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82BA34A8;
	sub_831CE980(ctx, base);
	// stb r23,31(r29)
	PPC_STORE_U8(ctx.r29.u32 + 31, ctx.r23.u8);
loc_82BA34AC:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bne 0x82ba3468
	if (!cr0.eq) goto loc_82BA3468;
loc_82BA34BC:
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82ba34d8
	if (cr6.eq) goto loc_82BA34D8;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82BA34D8;
	sub_825952B8(ctx, base);
loc_82BA34D8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82ba34f0
	if (cr6.eq) goto loc_82BA34F0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82BA34F0;
	sub_825952B8(ctx, base);
loc_82BA34F0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82BA34F8:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ba3514
	if (cr6.eq) goto loc_82BA3514;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82BA3514;
	sub_825952B8(ctx, base);
loc_82BA3514:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ba34f0
	if (cr6.eq) goto loc_82BA34F0;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82BA352C;
	sub_825952B8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA3534"))) PPC_WEAK_FUNC(sub_82BA3534);
PPC_FUNC_IMPL(__imp__sub_82BA3534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA3538"))) PPC_WEAK_FUNC(sub_82BA3538);
PPC_FUNC_IMPL(__imp__sub_82BA3538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82BA3540;
	__savegprlr_17(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// bl 0x831156e8
	ctx.lr = 0x82BA35A0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r21,r11,1
	ctx.r21.s64 = ctx.r11.s64 + 65536;
	// addi r21,r21,24336
	ctx.r21.s64 = ctx.r21.s64 + 24336;
	// bl 0x831156e8
	ctx.lr = 0x82BA35B0;
	sub_831156E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// addis r18,r9,1
	ctx.r18.s64 = ctx.r9.s64 + 65536;
	// addi r18,r18,32692
	ctx.r18.s64 = ctx.r18.s64 + 32692;
	// bl 0x82ba1ca0
	ctx.lr = 0x82BA35C8;
	sub_82BA1CA0(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// stb r30,1924(r21)
	PPC_STORE_U8(ctx.r21.u32 + 1924, ctx.r30.u8);
	// addi r10,r21,1795
	ctx.r10.s64 = ctx.r21.s64 + 1795;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82BA35D8:
	// stb r30,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r30.u8);
	// stbu r30,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82ba35d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BA35D8;
	// lwz r11,144(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 144);
	// li r20,1116
	ctx.r20.s64 = 1116;
	// lwz r10,148(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 148);
	// addi r28,r17,144
	ctx.r28.s64 = ctx.r17.s64 + 144;
	// li r19,1
	ctx.r19.s64 = 1;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// divw. r8,r9,r20
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r20.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ba3738
	if (cr0.eq) goto loc_82BA3738;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82BA360C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf. r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82ba36e0
	if (cr0.eq) goto loc_82BA36E0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82BA3638:
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82ba36b8
	if (!cr6.eq) goto loc_82BA36B8;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stb r9,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r9.u8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bne cr6,0x82ba3678
	if (!cr6.eq) goto loc_82BA3678;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x835977d8
	ctx.lr = 0x82BA3670;
	sub_835977D8(ctx, base);
	// stb r19,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r19.u8);
	// b 0x82ba3690
	goto loc_82BA3690;
loc_82BA3678:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82ba3694
	if (!cr6.eq) goto loc_82BA3694;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x835977d8
	ctx.lr = 0x82BA368C;
	sub_835977D8(ctx, base);
	// stb r19,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r19.u8);
loc_82BA3690:
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_82BA3694:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ba36b4
	if (cr6.eq) goto loc_82BA36B4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_82BA36B4:
	// bl 0x82d54828
	ctx.lr = 0x82BA36B8;
	sub_82D54828(ctx, base);
loc_82BA36B8:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x82ba3638
	if (cr6.lt) goto loc_82BA3638;
loc_82BA36E0:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ba3704
	if (!cr6.eq) goto loc_82BA3704;
	// lbz r11,49(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ba3704
	if (!cr6.eq) goto loc_82BA3704;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ba3048
	ctx.lr = 0x82BA3704;
	sub_82BA3048(ctx, base);
loc_82BA3704:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,1116
	ctx.r29.s64 = ctx.r29.s64 + 1116;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r20
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r20.s32);
	// cmplw cr6,r26,r8
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ba360c
	if (cr6.lt) goto loc_82BA360C;
	// lwz r23,128(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r22,160(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r27,144(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r24,176(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r25,192(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82BA3738:
	// lbz r11,11602(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 11602);
	// addi r31,r18,11576
	ctx.r31.s64 = ctx.r18.s64 + 11576;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bge cr6,0x82ba3750
	if (!cr6.lt) goto loc_82BA3750;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r11.u8);
loc_82BA3750:
	// stb r19,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r19.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82ba3300
	ctx.lr = 0x82BA3760;
	sub_82BA3300(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r10,12
	ctx.r10.s64 = 12;
	// subf r9,r27,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r27.s64;
	// divw. r8,r9,r10
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ba37a8
	if (cr0.eq) goto loc_82BA37A8;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r10,r23,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r23.s64;
	// srawi. r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82ba37a8
	if (cr0.eq) goto loc_82BA37A8;
	// lbz r11,27(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bge cr6,0x82ba3798
	if (!cr6.lt) goto loc_82BA3798;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r11.u8);
loc_82BA3798:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82ba2690
	ctx.lr = 0x82BA37A8;
	sub_82BA2690(ctx, base);
loc_82BA37A8:
	// bl 0x82d26ed8
	ctx.lr = 0x82BA37AC;
	sub_82D26ED8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba37c0
	if (cr6.eq) goto loc_82BA37C0;
	// li r4,2000
	ctx.r4.s64 = 2000;
	// bl 0x82d26960
	ctx.lr = 0x82BA37C0;
	sub_82D26960(ctx, base);
loc_82BA37C0:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r3,-6984(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6984);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba37d4
	if (cr6.eq) goto loc_82BA37D4;
	// bl 0x82d42ec8
	ctx.lr = 0x82BA37D4;
	sub_82D42EC8(ctx, base);
loc_82BA37D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82ba2900
	ctx.lr = 0x82BA37E4;
	sub_82BA2900(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82ba2900
	ctx.lr = 0x82BA37F4;
	sub_82BA2900(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ba3808
	if (cr6.eq) goto loc_82BA3808;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d26900
	ctx.lr = 0x82BA3808;
	sub_82D26900(ctx, base);
loc_82BA3808:
	// bl 0x831156e8
	ctx.lr = 0x82BA380C;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37446
	ctx.r9.u64 = ctx.r11.u64 | 37446;
	// stbx r19,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r19.u8);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ba3864
	if (cr6.eq) goto loc_82BA3864;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82abcea8
	ctx.lr = 0x82BA3838;
	sub_82ABCEA8(ctx, base);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x82ba3860
	if (cr6.eq) goto loc_82BA3860;
loc_82BA384C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8d878
	ctx.lr = 0x82BA3854;
	sub_82A8D878(ctx, base);
	// addi r31,r31,1116
	ctx.r31.s64 = ctx.r31.s64 + 1116;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82ba384c
	if (!cr6.eq) goto loc_82BA384C;
loc_82BA3860:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_82BA3864:
	// lwz r5,160(r17)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + 160);
	// addi r28,r17,160
	ctx.r28.s64 = ctx.r17.s64 + 160;
	// lwz r4,164(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 164);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ba38b0
	if (cr6.eq) goto loc_82BA38B0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82abcea8
	ctx.lr = 0x82BA3884;
	sub_82ABCEA8(ctx, base);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x82ba38ac
	if (cr6.eq) goto loc_82BA38AC;
loc_82BA3898:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8d878
	ctx.lr = 0x82BA38A0;
	sub_82A8D878(ctx, base);
	// addi r31,r31,1116
	ctx.r31.s64 = ctx.r31.s64 + 1116;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82ba3898
	if (!cr6.eq) goto loc_82BA3898;
loc_82BA38AC:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_82BA38B0:
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82ba38cc
	if (cr6.eq) goto loc_82BA38CC;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82BA38CC;
	sub_825952B8(ctx, base);
loc_82BA38CC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82ba38e4
	if (cr6.eq) goto loc_82BA38E4;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82BA38E4;
	sub_825952B8(ctx, base);
loc_82BA38E4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82ba38fc
	if (cr6.eq) goto loc_82BA38FC;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82BA38FC;
	sub_825952B8(ctx, base);
loc_82BA38FC:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82ba3914
	if (cr6.eq) goto loc_82BA3914;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82BA3914;
	sub_825952B8(ctx, base);
loc_82BA3914:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82ba392c
	if (cr6.eq) goto loc_82BA392C;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x82BA392C;
	sub_825952B8(ctx, base);
loc_82BA392C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA3938"))) PPC_WEAK_FUNC(sub_82BA3938);
PPC_FUNC_IMPL(__imp__sub_82BA3938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82BA3940;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ba3a08
	if (cr0.eq) goto loc_82BA3A08;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r26,r11,-6053
	ctx.r26.s64 = ctx.r11.s64 + -6053;
loc_82BA3988:
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82BA39A4;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82BA39B4;
	sub_82D042A8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8291fdc8
	ctx.lr = 0x82BA39C0;
	sub_8291FDC8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ba39dc
	if (cr6.lt) goto loc_82BA39DC;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82BA39DC;
	sub_825952B8(ctx, base);
loc_82BA39DC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ba3988
	if (cr6.lt) goto loc_82BA3988;
loc_82BA3A08:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA3A20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3a4c
	if (cr6.eq) goto loc_82BA3A4C;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x838adab0
	ctx.lr = 0x82BA3A3C;
	sub_838ADAB0(ctx, base);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BA3A4C;
	sub_825952B8(ctx, base);
loc_82BA3A4C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA3A54"))) PPC_WEAK_FUNC(sub_82BA3A54);
PPC_FUNC_IMPL(__imp__sub_82BA3A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA3A58"))) PPC_WEAK_FUNC(sub_82BA3A58);
PPC_FUNC_IMPL(__imp__sub_82BA3A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BA3A60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r5,128(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r29,r3,128
	ctx.r29.s64 = ctx.r3.s64 + 128;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ba3aa0
	if (cr6.eq) goto loc_82BA3AA0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83915a50
	ctx.lr = 0x82BA3A88;
	sub_83915A50(ctx, base);
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82BA3A9C;
	sub_838ADAB0(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82BA3AA0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r27,28
	ctx.r27.s64 = 28;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ba3aec
	if (cr0.eq) goto loc_82BA3AEC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BA3AC0:
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82BA3ACC;
	sub_8291FDC8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ba3ac0
	if (cr6.lt) goto loc_82BA3AC0;
loc_82BA3AEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA3AF4"))) PPC_WEAK_FUNC(sub_82BA3AF4);
PPC_FUNC_IMPL(__imp__sub_82BA3AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA3AF8"))) PPC_WEAK_FUNC(sub_82BA3AF8);
PPC_FUNC_IMPL(__imp__sub_82BA3AF8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d1a9c8
	ctx.lr = 0x82BA3B18;
	sub_82D1A9C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3b8c
	if (cr6.eq) goto loc_82BA3B8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r4,280
	ctx.r4.s64 = 18350080;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// subfic r5,r10,50
	xer.ca = ctx.r10.u32 <= 50;
	ctx.r5.s64 = 50 - ctx.r10.s64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// ori r4,r4,257
	ctx.r4.u64 = ctx.r4.u64 | 257;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82BA3B50;
	sub_82D042A8(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82ba3b64
	if (!cr6.lt) goto loc_82BA3B64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82BA3B64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d39bf8
	ctx.lr = 0x82BA3B6C;
	sub_82D39BF8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba3b8c
	if (cr6.lt) goto loc_82BA3B8C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BA3B8C;
	sub_825952B8(ctx, base);
loc_82BA3B8C:
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

__attribute__((alias("__imp__sub_82BA3BA4"))) PPC_WEAK_FUNC(sub_82BA3BA4);
PPC_FUNC_IMPL(__imp__sub_82BA3BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA3BA8"))) PPC_WEAK_FUNC(sub_82BA3BA8);
PPC_FUNC_IMPL(__imp__sub_82BA3BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82BA3BB0;
	__savegprlr_22(ctx, base);
	// stwu r1,-1392(r1)
	ea = -1392 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x830f1028
	ctx.lr = 0x82BA3BE0;
	sub_830F1028(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x82BA3BF4;
	sub_835977D8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba3c0c
	if (!cr6.eq) goto loc_82BA3C0C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
loc_82BA3C0C:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// li r23,2
	ctx.r23.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba3d00
	if (cr6.eq) goto loc_82BA3D00;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r25,10
	ctx.r25.s64 = 10;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r26,-1
	ctx.r26.s64 = -1;
	// addi r27,r11,-6054
	ctx.r27.s64 = ctx.r11.s64 + -6054;
loc_82BA3C30:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82a8dc38
	ctx.lr = 0x82BA3C38;
	sub_82A8DC38(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f1030
	ctx.lr = 0x82BA3C44;
	sub_830F1030(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
loc_82BA3C50:
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x833eab80
	ctx.lr = 0x82BA3C60;
	sub_833EAB80(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x82ba3c50
	if (!cr0.eq) goto loc_82BA3C50;
	// stb r31,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r31.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r24,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r24.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r25,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r25.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82BA3C90;
	sub_8259CC28(ctx, base);
	// lis r4,281
	ctx.r4.s64 = 18415616;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,42
	ctx.r4.u64 = ctx.r4.u64 | 42;
	// bl 0x82d04220
	ctx.lr = 0x82BA3CA0;
	sub_82D04220(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x8259cb28
	ctx.lr = 0x82BA3CB4;
	sub_8259CB28(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82abd710
	ctx.lr = 0x82BA3CC0;
	sub_82ABD710(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba3cdc
	if (cr6.lt) goto loc_82BA3CDC;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BA3CDC;
	sub_825952B8(ctx, base);
loc_82BA3CDC:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82a8d878
	ctx.lr = 0x82BA3CF0;
	sub_82A8D878(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ba3c30
	if (cr6.lt) goto loc_82BA3C30;
loc_82BA3D00:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82bfae00
	ctx.lr = 0x82BA3D0C;
	sub_82BFAE00(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82bfb498
	ctx.lr = 0x82BA3D18;
	sub_82BFB498(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ba3d5c
	if (cr6.eq) goto loc_82BA3D5C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x82ba3d50
	if (cr6.eq) goto loc_82BA3D50;
loc_82BA3D38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a8d878
	ctx.lr = 0x82BA3D40;
	sub_82A8D878(ctx, base);
	// addi r30,r30,1116
	ctx.r30.s64 = ctx.r30.s64 + 1116;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82ba3d38
	if (!cr6.eq) goto loc_82BA3D38;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BA3D50:
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82BA3D5C;
	sub_825952B8(ctx, base);
loc_82BA3D5C:
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// beq cr6,0x82ba3d80
	if (cr6.eq) goto loc_82BA3D80;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825952b8
	ctx.lr = 0x82BA3D80;
	sub_825952B8(ctx, base);
loc_82BA3D80:
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA3D88"))) PPC_WEAK_FUNC(sub_82BA3D88);
PPC_FUNC_IMPL(__imp__sub_82BA3D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BA3D90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82bfb148
	ctx.lr = 0x82BA3DA4;
	sub_82BFB148(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r30,824(r31)
	PPC_STORE_U8(ctx.r31.u32 + 824, ctx.r30.u8);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r11,-5624
	ctx.r9.s64 = ctx.r11.s64 + -5624;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stb r29,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r29.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r7.u8);
	// li r4,206
	ctx.r4.s64 = 206;
	// stw r29,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r29.u32);
	// bl 0x82d1a998
	ctx.lr = 0x82BA3DE0;
	sub_82D1A998(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82d19788
	ctx.lr = 0x82BA3DF0;
	sub_82D19788(ctx, base);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,18428(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 18428);
	// bl 0x82d20ae0
	ctx.lr = 0x82BA3E00;
	sub_82D20AE0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-6085
	ctx.r30.s64 = ctx.r11.s64 + -6085;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,269
	ctx.r4.s64 = ctx.r30.s64 + 269;
	// bl 0x82d23390
	ctx.lr = 0x82BA3E18;
	sub_82D23390(ctx, base);
	// stw r29,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82BA3E28;
	sub_82D199D0(ctx, base);
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ba3eb0
	if (cr6.eq) goto loc_82BA3EB0;
	// addi r3,r30,285
	ctx.r3.s64 = ctx.r30.s64 + 285;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82BA3E48;
	sub_82D2EE48(ctx, base);
	// stw r3,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3eb0
	if (cr6.eq) goto loc_82BA3EB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d199d0
	ctx.lr = 0x82BA3E5C;
	sub_82D199D0(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// lwz r3,812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// ori r4,r4,184
	ctx.r4.u64 = ctx.r4.u64 | 184;
	// bl 0x82d2ada8
	ctx.lr = 0x82BA3E6C;
	sub_82D2ADA8(ctx, base);
	// lwz r3,812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA3E88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BA3EA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,812(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// bl 0x83103100
	ctx.lr = 0x82BA3EB0;
	sub_83103100(ctx, base);
loc_82BA3EB0:
	// lbz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 824);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba3ec8
	if (cr6.eq) goto loc_82BA3EC8;
	// bl 0x82ba3ba8
	ctx.lr = 0x82BA3EC4;
	sub_82BA3BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BA3EC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA3ED0"))) PPC_WEAK_FUNC(sub_82BA3ED0);
PPC_FUNC_IMPL(__imp__sub_82BA3ED0) {
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
	// blt cr6,0x82ba3ef8
	if (cr6.lt) goto loc_82BA3EF8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ba3efc
	goto loc_82BA3EFC;
loc_82BA3EF8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BA3EFC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,828
	ctx.r4.s64 = 828;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BA3F18;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba3f3c
	if (cr6.eq) goto loc_82BA3F3C;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ba3d88
	ctx.lr = 0x82BA3F34;
	sub_82BA3D88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba3f40
	if (!cr6.eq) goto loc_82BA3F40;
loc_82BA3F3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BA3F40:
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

__attribute__((alias("__imp__sub_82BA3F58"))) PPC_WEAK_FUNC(sub_82BA3F58);
PPC_FUNC_IMPL(__imp__sub_82BA3F58) {
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
	ctx.lr = 0x82BA3F70;
	sub_82A63868(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-4856
	ctx.r9.s64 = ctx.r11.s64 + -4856;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// stb r6,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r6.u8);
	// bl 0x8311e3d0
	ctx.lr = 0x82BA3F9C;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x82BA3FA4;
	sub_8311D680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82BA3FB0;
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

__attribute__((alias("__imp__sub_82BA3FC8"))) PPC_WEAK_FUNC(sub_82BA3FC8);
PPC_FUNC_IMPL(__imp__sub_82BA3FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BA3FD0;
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
	ctx.lr = 0x82BA3FE4;
	sub_82A63638(ctx, base);
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4028
	if (cr6.eq) goto loc_82BA4028;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x83089ad0
	ctx.lr = 0x82BA3FFC;
	sub_83089AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba4028
	if (!cr6.eq) goto loc_82BA4028;
	// lbz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 136);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ba4028
	if (!cr6.eq) goto loc_82BA4028;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BA4028;
	sub_82D2B608(ctx, base);
loc_82BA4028:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA4030"))) PPC_WEAK_FUNC(sub_82BA4030);
PPC_FUNC_IMPL(__imp__sub_82BA4030) {
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
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82ba407c
	if (!cr6.eq) goto loc_82BA407C;
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82ba407c
	if (cr6.lt) goto loc_82BA407C;
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ba407c
	if (cr6.gt) goto loc_82BA407C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// bl 0x82d199d0
	ctx.lr = 0x82BA407C;
	sub_82D199D0(ctx, base);
loc_82BA407C:
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

__attribute__((alias("__imp__sub_82BA4090"))) PPC_WEAK_FUNC(sub_82BA4090);
PPC_FUNC_IMPL(__imp__sub_82BA4090) {
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
	// addi r9,r11,-4856
	ctx.r9.s64 = ctx.r11.s64 + -4856;
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
	ctx.lr = 0x82BA40C8;
	sub_82A637B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ba40e0
	if (cr6.eq) goto loc_82BA40E0;
	// bl 0x82416268
	ctx.lr = 0x82BA40DC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BA40E0:
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

__attribute__((alias("__imp__sub_82BA40F8"))) PPC_WEAK_FUNC(sub_82BA40F8);
PPC_FUNC_IMPL(__imp__sub_82BA40F8) {
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
	// blt cr6,0x82ba4120
	if (cr6.lt) goto loc_82BA4120;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ba4124
	goto loc_82BA4124;
loc_82BA4120:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BA4124:
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
	ctx.lr = 0x82BA4140;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba415c
	if (cr6.eq) goto loc_82BA415C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ba3f58
	ctx.lr = 0x82BA4154;
	sub_82BA3F58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba4160
	if (!cr6.eq) goto loc_82BA4160;
loc_82BA415C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BA4160:
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

__attribute__((alias("__imp__sub_82BA4178"))) PPC_WEAK_FUNC(sub_82BA4178);
PPC_FUNC_IMPL(__imp__sub_82BA4178) {
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
	ctx.lr = 0x82BA4190;
	sub_82D1C1A8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r7,r8,r9
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r9.s32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82ba41b8
	if (cr6.gt) goto loc_82BA41B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BA41B8;
	sub_831CC188(ctx, base);
loc_82BA41B8:
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,14
	ctx.r7.s64 = 14;
	// addi r6,r11,-4960
	ctx.r6.s64 = ctx.r11.s64 + -4960;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x82BA41D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ba4218
	if (!cr6.eq) goto loc_82BA4218;
	// bl 0x8307fa88
	ctx.lr = 0x82BA41E4;
	sub_8307FA88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82BA41F0;
	sub_83103100(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82BA41FC;
	sub_82D199D0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
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
loc_82BA4218:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1b890
	ctx.lr = 0x82BA4220;
	sub_82D1B890(ctx, base);
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

__attribute__((alias("__imp__sub_82BA4234"))) PPC_WEAK_FUNC(sub_82BA4234);
PPC_FUNC_IMPL(__imp__sub_82BA4234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA4238"))) PPC_WEAK_FUNC(sub_82BA4238);
PPC_FUNC_IMPL(__imp__sub_82BA4238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82BA4240;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,96(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r22,112(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r26,r3,96
	ctx.r26.s64 = ctx.r3.s64 + 96;
	// addi r25,r3,112
	ctx.r25.s64 = ctx.r3.s64 + 112;
	// addi r18,r11,-4976
	ctx.r18.s64 = ctx.r11.s64 + -4976;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ba43a8
	if (cr6.eq) goto loc_82BA43A8;
	// lbz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r28,r27,28
	ctx.r28.s64 = ctx.r27.s64 + 28;
	// lbz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r23,r22,28
	ctx.r23.s64 = ctx.r22.s64 + 28;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_82BA4280:
	// addi r6,r18,-44
	ctx.r6.s64 = ctx.r18.s64 + -44;
	// lwz r5,-12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827a8810
	ctx.lr = 0x82BA4298;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ba42f4
	if (cr6.eq) goto loc_82BA42F4;
	// addi r6,r18,-24
	ctx.r6.s64 = ctx.r18.s64 + -24;
	// lwz r5,-12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827a8810
	ctx.lr = 0x82BA42B8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ba42f4
	if (cr6.eq) goto loc_82BA42F4;
	// addi r6,r18,-16
	ctx.r6.s64 = ctx.r18.s64 + -16;
	// lwz r5,-12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827a8810
	ctx.lr = 0x82BA42D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ba42f4
	if (cr6.eq) goto loc_82BA42F4;
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// addi r22,r22,28
	ctx.r22.s64 = ctx.r22.s64 + 28;
	// addi r23,r23,28
	ctx.r23.s64 = ctx.r23.s64 + 28;
	// b 0x82ba439c
	goto loc_82BA439C;
loc_82BA42F4:
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r30
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ba4328
	if (cr6.eq) goto loc_82BA4328;
	// subf r29,r23,r22
	ctx.r29.s64 = ctx.r22.s64 - ctx.r23.s64;
loc_82BA4308:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BA431C;
	sub_8259CB28(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82ba4308
	if (!cr6.eq) goto loc_82BA4308;
loc_82BA4328:
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r25,12
	ctx.r5.s64 = ctx.r25.s64 + 12;
	// addi r3,r4,-28
	ctx.r3.s64 = ctx.r4.s64 + -28;
	// bl 0x838adab0
	ctx.lr = 0x82BA433C;
	sub_838ADAB0(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lwz r30,4(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ba437c
	if (cr6.eq) goto loc_82BA437C;
	// subf r29,r28,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r28.s64;
loc_82BA435C:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BA4370;
	sub_8259CB28(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82ba435c
	if (!cr6.eq) goto loc_82BA435C;
loc_82BA437C:
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r26,12
	ctx.r5.s64 = ctx.r26.s64 + 12;
	// addi r3,r4,-28
	ctx.r3.s64 = ctx.r4.s64 + -28;
	// bl 0x838adab0
	ctx.lr = 0x82BA4390;
	sub_838ADAB0(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_82BA439C:
	// lwz r11,100(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 100);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ba4280
	if (!cr6.eq) goto loc_82BA4280;
loc_82BA43A8:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BA43B0:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82BA43C8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ba43d4
	if (!cr6.eq) goto loc_82BA43D4;
	// stb r30,136(r21)
	PPC_STORE_U8(ctx.r21.u32 + 136, ctx.r30.u8);
loc_82BA43D4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba43e8
	if (cr6.lt) goto loc_82BA43E8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82ba43ec
	goto loc_82BA43EC;
loc_82BA43E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82BA43EC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82BA43FC;
	sub_82D233B0(ctx, base);
	// lwz r11,100(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 100);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ba43b0
	if (!cr6.eq) goto loc_82BA43B0;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
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
	ctx.lr = 0x82BA4438;
	sub_82D20F50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA4444"))) PPC_WEAK_FUNC(sub_82BA4444);
PPC_FUNC_IMPL(__imp__sub_82BA4444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA4448"))) PPC_WEAK_FUNC(sub_82BA4448);
PPC_FUNC_IMPL(__imp__sub_82BA4448) {
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
	ctx.lr = 0x82BA4460;
	sub_82D1C1A8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r9,96
	ctx.r9.s64 = 96;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r7,r8,r9
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r9.s32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82ba4488
	if (cr6.gt) goto loc_82BA4488;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,-3684
	ctx.r5.s64 = ctx.r11.s64 + -3684;
	// b 0x82ba44b0
	goto loc_82BA44B0;
loc_82BA4488:
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82ba44ac
	if (cr6.lt) goto loc_82BA44AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BA44AC:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82BA44B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BA44BC;
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

__attribute__((alias("__imp__sub_82BA44D0"))) PPC_WEAK_FUNC(sub_82BA44D0);
PPC_FUNC_IMPL(__imp__sub_82BA44D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BA44D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba4504
	if (cr6.lt) goto loc_82BA4504;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BA4504;
	sub_825952B8(ctx, base);
loc_82BA4504:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r31,r28,40
	ctx.r31.s64 = ctx.r28.s64 + 40;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba4538
	if (cr6.lt) goto loc_82BA4538;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BA4538;
	sub_825952B8(ctx, base);
loc_82BA4538:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r30,r28,12
	ctx.r30.s64 = ctx.r28.s64 + 12;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba4564
	if (cr6.lt) goto loc_82BA4564;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BA4564;
	sub_825952B8(ctx, base);
loc_82BA4564:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA4578"))) PPC_WEAK_FUNC(sub_82BA4578);
PPC_FUNC_IMPL(__imp__sub_82BA4578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BA4580;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82BA45D0;
	sub_8259CB28(ctx, base);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stb r29,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// bl 0x8259cb28
	ctx.lr = 0x82BA45F0;
	sub_8259CB28(ctx, base);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stb r29,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// bl 0x8259cb28
	ctx.lr = 0x82BA4610;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA461C"))) PPC_WEAK_FUNC(sub_82BA461C);
PPC_FUNC_IMPL(__imp__sub_82BA461C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA4620"))) PPC_WEAK_FUNC(sub_82BA4620);
PPC_FUNC_IMPL(__imp__sub_82BA4620) {
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
	// beq cr6,0x82ba4658
	if (cr6.eq) goto loc_82BA4658;
loc_82BA4644:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba44d0
	ctx.lr = 0x82BA464C;
	sub_82BA44D0(ctx, base);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82ba4644
	if (!cr6.eq) goto loc_82BA4644;
loc_82BA4658:
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

__attribute__((alias("__imp__sub_82BA4670"))) PPC_WEAK_FUNC(sub_82BA4670);
PPC_FUNC_IMPL(__imp__sub_82BA4670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BA4678;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ba46fc
	if (cr6.eq) goto loc_82BA46FC;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82BA4694:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82BA46C0;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x8259cb28
	ctx.lr = 0x82BA46D4;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// bl 0x8259cb28
	ctx.lr = 0x82BA46E8;
	sub_8259CB28(ctx, base);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// addi r8,r31,-8
	ctx.r8.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// bne cr6,0x82ba4694
	if (!cr6.eq) goto loc_82BA4694;
loc_82BA46FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA4708"))) PPC_WEAK_FUNC(sub_82BA4708);
PPC_FUNC_IMPL(__imp__sub_82BA4708) {
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
	// beq cr6,0x82ba4750
	if (cr6.eq) goto loc_82BA4750;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ba4670
	ctx.lr = 0x82BA473C;
	sub_82BA4670(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82ba4620
	ctx.lr = 0x82BA474C;
	sub_82BA4620(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82BA4750:
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

__attribute__((alias("__imp__sub_82BA4768"))) PPC_WEAK_FUNC(sub_82BA4768);
PPC_FUNC_IMPL(__imp__sub_82BA4768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82BA4770;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,682
	ctx.r11.s64 = 44695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,43690
	ctx.r10.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ba4794
	if (!cr6.gt) goto loc_82BA4794;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82BA4794;
	sub_831CC150(ctx, base);
loc_82BA4794:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,96
	ctx.r24.s64 = 96;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82ba4860
	if (!cr6.lt) goto loc_82BA4860;
	// li r25,2
	ctx.r25.s64 = 2;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r26,r11,5,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82595718
	ctx.lr = 0x82BA47D4;
	sub_82595718(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// beq cr6,0x82ba4810
	if (cr6.eq) goto loc_82BA4810;
loc_82BA47EC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ba4800
	if (cr6.eq) goto loc_82BA4800;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ba4578
	ctx.lr = 0x82BA4800;
	sub_82BA4578(ctx, base);
loc_82BA4800:
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// addi r29,r29,96
	ctx.r29.s64 = ctx.r29.s64 + 96;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82ba47ec
	if (!cr6.eq) goto loc_82BA47EC;
loc_82BA4810:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r30,r11,r24
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	// beq cr6,0x82ba4840
	if (cr6.eq) goto loc_82BA4840;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x82ba4620
	ctx.lr = 0x82BA4830;
	sub_82BA4620(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BA4840;
	sub_825952B8(ctx, base);
loc_82BA4840:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82BA4860:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA4868"))) PPC_WEAK_FUNC(sub_82BA4868);
PPC_FUNC_IMPL(__imp__sub_82BA4868) {
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
	// addi r9,r11,-3592
	ctx.r9.s64 = ctx.r11.s64 + -3592;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba48c8
	if (cr6.eq) goto loc_82BA48C8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ba4620
	ctx.lr = 0x82BA48B4;
	sub_82BA4620(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BA48C8;
	sub_825952B8(ctx, base);
loc_82BA48C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82BA48E0;
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

__attribute__((alias("__imp__sub_82BA48F8"))) PPC_WEAK_FUNC(sub_82BA48F8);
PPC_FUNC_IMPL(__imp__sub_82BA48F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,682
	ctx.r10.s64 = 44695552;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,96
	ctx.r9.s64 = 96;
	// ori r8,r10,43690
	ctx.r8.u64 = ctx.r10.u64 | 43690;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ba492c
	if (!cr6.lt) goto loc_82BA492C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82BA492C:
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
	// blt cr6,0x82ba495c
	if (cr6.lt) goto loc_82BA495C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82BA495C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ba4968
	if (!cr6.lt) goto loc_82BA4968;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82BA4968:
	// b 0x82ba4768
	sub_82BA4768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA496C"))) PPC_WEAK_FUNC(sub_82BA496C);
PPC_FUNC_IMPL(__imp__sub_82BA496C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA4970"))) PPC_WEAK_FUNC(sub_82BA4970);
PPC_FUNC_IMPL(__imp__sub_82BA4970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BA4978;
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
	// bl 0x8308e078
	ctx.lr = 0x82BA498C;
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
	ctx.lr = 0x82BA49A4;
	sub_82D253F8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-3592
	ctx.r8.s64 = ctx.r10.s64 + -3592;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r7,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// addi r31,r6,-4196
	ctx.r31.s64 = ctx.r6.s64 + -4196;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// stb r11,116(r30)
	PPC_STORE_U8(ctx.r30.u32 + 116, ctx.r11.u8);
	// bl 0x82d20ae0
	ctx.lr = 0x82BA49E8;
	sub_82D20AE0(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20ae0
	ctx.lr = 0x82BA49F4;
	sub_82D20AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82BA4A04;
	sub_82D23390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA4A10"))) PPC_WEAK_FUNC(sub_82BA4A10);
PPC_FUNC_IMPL(__imp__sub_82BA4A10) {
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
	// bl 0x82ba4868
	ctx.lr = 0x82BA4A30;
	sub_82BA4868(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba4a48
	if (cr6.eq) goto loc_82BA4A48;
	// bl 0x82416268
	ctx.lr = 0x82BA4A44;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BA4A48:
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

__attribute__((alias("__imp__sub_82BA4A60"))) PPC_WEAK_FUNC(sub_82BA4A60);
PPC_FUNC_IMPL(__imp__sub_82BA4A60) {
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
	// bge cr6,0x82ba4a98
	if (!cr6.lt) goto loc_82BA4A98;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82ba4a9c
	if (!cr6.gt) goto loc_82BA4A9C;
loc_82BA4A98:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BA4A9C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ba4af4
	if (cr6.eq) goto loc_82BA4AF4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,96
	ctx.r9.s64 = 96;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82ba4ad0
	if (!cr6.eq) goto loc_82BA4AD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba48f8
	ctx.lr = 0x82BA4AD0;
	sub_82BA48F8(ctx, base);
loc_82BA4AD0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4b20
	if (cr6.eq) goto loc_82BA4B20;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ba4b1c
	goto loc_82BA4B1C;
loc_82BA4AF4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ba4b0c
	if (!cr6.eq) goto loc_82BA4B0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba48f8
	ctx.lr = 0x82BA4B0C;
	sub_82BA48F8(ctx, base);
loc_82BA4B0C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba4b20
	if (cr6.eq) goto loc_82BA4B20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BA4B1C:
	// bl 0x82ba4578
	ctx.lr = 0x82BA4B20;
	sub_82BA4578(ctx, base);
loc_82BA4B20:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
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

__attribute__((alias("__imp__sub_82BA4B44"))) PPC_WEAK_FUNC(sub_82BA4B44);
PPC_FUNC_IMPL(__imp__sub_82BA4B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA4B48"))) PPC_WEAK_FUNC(sub_82BA4B48);
PPC_FUNC_IMPL(__imp__sub_82BA4B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82BA4B50;
	__savegprlr_18(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BA4B5C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r18,48(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d19a78
	ctx.lr = 0x82BA4B6C;
	sub_82D19A78(ctx, base);
	// stw r3,96(r22)
	PPC_STORE_U32(ctx.r22.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba54f4
	if (cr6.eq) goto loc_82BA54F4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-4447
	ctx.r30.s64 = ctx.r11.s64 + -4447;
	// addi r4,r30,267
	ctx.r4.s64 = ctx.r30.s64 + 267;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BA4B98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA4BA0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,283
	ctx.r4.s64 = ctx.r30.s64 + 283;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BA4BB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba54f4
	if (cr6.eq) goto loc_82BA54F4;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,647
	ctx.r4.u64 = ctx.r4.u64 | 647;
	// bl 0x82d30340
	ctx.lr = 0x82BA4BD0;
	sub_82D30340(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA4BD8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,295
	ctx.r4.s64 = ctx.r30.s64 + 295;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA4BF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba54f4
	if (cr6.eq) goto loc_82BA54F4;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,317
	ctx.r4.u64 = ctx.r4.u64 | 317;
	// bl 0x82d30340
	ctx.lr = 0x82BA4C08;
	sub_82D30340(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA4C10;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,315
	ctx.r4.s64 = ctx.r30.s64 + 315;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA4C28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba4c3c
	if (!cr6.eq) goto loc_82BA4C3C;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82BA4C3C:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r24,15
	ctx.r24.s64 = 15;
	// stw r28,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r28.u32);
	// lis r4,225
	ctx.r4.s64 = 14745600;
	// stw r24,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r24.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r28,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r28.u8);
	// ori r4,r4,100
	ctx.r4.u64 = ctx.r4.u64 | 100;
	// bl 0x82d042a8
	ctx.lr = 0x82BA4C60;
	sub_82D042A8(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r30,-65
	ctx.r5.s64 = ctx.r30.s64 + -65;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831178a0
	ctx.lr = 0x82BA4C78;
	sub_831178A0(ctx, base);
	// bl 0x8314bf40
	ctx.lr = 0x82BA4C7C;
	sub_8314BF40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,116(r22)
	PPC_STORE_U8(ctx.r22.u32 + 116, ctx.r3.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba4cac
	if (cr6.eq) goto loc_82BA4CAC;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lis r4,225
	ctx.r4.s64 = 14745600;
	// ori r10,r11,57076
	ctx.r10.u64 = ctx.r11.u64 | 57076;
	// ori r4,r4,101
	ctx.r4.u64 = ctx.r4.u64 | 101;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwzx r9,r18,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82BA4CAC;
	sub_82D042A8(ctx, base);
loc_82BA4CAC:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39b70
	ctx.lr = 0x82BA4CB8;
	sub_82D39B70(ctx, base);
	// addi r21,r22,100
	ctx.r21.s64 = ctx.r22.s64 + 100;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82ba4708
	ctx.lr = 0x82BA4CC4;
	sub_82BA4708(ctx, base);
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r31,r11,11832
	ctx.r31.s64 = ctx.r11.s64 + 11832;
	// lwz r11,12984(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12984);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ba5018
	if (!cr6.eq) goto loc_82BA5018;
	// lis r10,273
	ctx.r10.s64 = 17891328;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lis r9,25
	ctx.r9.s64 = 1638400;
	// ori r29,r10,256
	ctx.r29.u64 = ctx.r10.u64 | 256;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r9,r9,318
	ctx.r9.u64 = ctx.r9.u64 | 318;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,12984(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12984, ctx.r11.u32);
	// addi r4,r30,-30
	ctx.r4.s64 = ctx.r30.s64 + -30;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4D18;
	sub_837B0C10(ctx, base);
	// addi r4,r30,707
	ctx.r4.s64 = ctx.r30.s64 + 707;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4D24;
	sub_837B0C10(ctx, base);
	// addi r4,r30,695
	ctx.r4.s64 = ctx.r30.s64 + 695;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4D30;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// ori r10,r10,556
	ctx.r10.u64 = ctx.r10.u64 | 556;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r4,r30,679
	ctx.r4.s64 = ctx.r30.s64 + 679;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4D58;
	sub_837B0C10(ctx, base);
	// addi r4,r30,671
	ctx.r4.s64 = ctx.r30.s64 + 671;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4D64;
	sub_837B0C10(ctx, base);
	// addi r4,r30,663
	ctx.r4.s64 = ctx.r30.s64 + 663;
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4D70;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// lis r9,273
	ctx.r9.s64 = 17891328;
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r10,r10,307
	ctx.r10.u64 = ctx.r10.u64 | 307;
	// ori r9,r9,257
	ctx.r9.u64 = ctx.r9.u64 | 257;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// addi r4,r30,651
	ctx.r4.s64 = ctx.r30.s64 + 651;
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4D9C;
	sub_837B0C10(ctx, base);
	// addi r4,r30,643
	ctx.r4.s64 = ctx.r30.s64 + 643;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4DA8;
	sub_837B0C10(ctx, base);
	// addi r4,r30,635
	ctx.r4.s64 = ctx.r30.s64 + 635;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4DB4;
	sub_837B0C10(ctx, base);
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// lis r9,278
	ctx.r9.s64 = 18219008;
	// li r11,3
	ctx.r11.s64 = 3;
	// ori r10,r10,152
	ctx.r10.u64 = ctx.r10.u64 | 152;
	// ori r9,r9,677
	ctx.r9.u64 = ctx.r9.u64 | 677;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// addi r4,r30,623
	ctx.r4.s64 = ctx.r30.s64 + 623;
	// stw r9,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r9.u32);
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4DE0;
	sub_837B0C10(ctx, base);
	// addi r4,r30,615
	ctx.r4.s64 = ctx.r30.s64 + 615;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4DEC;
	sub_837B0C10(ctx, base);
	// addi r4,r30,607
	ctx.r4.s64 = ctx.r30.s64 + 607;
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4DF8;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r29.u32);
	// ori r10,r10,647
	ctx.r10.u64 = ctx.r10.u64 | 647;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// addi r4,r30,-31
	ctx.r4.s64 = ctx.r30.s64 + -31;
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// addi r3,r31,396
	ctx.r3.s64 = ctx.r31.s64 + 396;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4E20;
	sub_837B0C10(ctx, base);
	// addi r4,r30,595
	ctx.r4.s64 = ctx.r30.s64 + 595;
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4E2C;
	sub_837B0C10(ctx, base);
	// addi r4,r30,583
	ctx.r4.s64 = ctx.r30.s64 + 583;
	// addi r3,r31,452
	ctx.r3.s64 = ctx.r31.s64 + 452;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4E38;
	sub_837B0C10(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r10,277
	ctx.r10.s64 = 18153472;
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r10,r10,162
	ctx.r10.u64 = ctx.r10.u64 | 162;
	// ori r11,r11,618
	ctx.r11.u64 = ctx.r11.u64 | 618;
	// stw r10,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r10.u32);
	// addi r4,r30,559
	ctx.r4.s64 = ctx.r30.s64 + 559;
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4E64;
	sub_837B0C10(ctx, base);
	// addi r4,r30,551
	ctx.r4.s64 = ctx.r30.s64 + 551;
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4E70;
	sub_837B0C10(ctx, base);
	// addi r4,r30,543
	ctx.r4.s64 = ctx.r30.s64 + 543;
	// addi r3,r31,548
	ctx.r3.s64 = ctx.r31.s64 + 548;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4E7C;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// lis r9,278
	ctx.r9.s64 = 18219008;
	// li r11,6
	ctx.r11.s64 = 6;
	// ori r10,r10,619
	ctx.r10.u64 = ctx.r10.u64 | 619;
	// ori r9,r9,679
	ctx.r9.u64 = ctx.r9.u64 | 679;
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
	// addi r4,r30,519
	ctx.r4.s64 = ctx.r30.s64 + 519;
	// stw r9,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r9.u32);
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4EA8;
	sub_837B0C10(ctx, base);
	// addi r4,r30,511
	ctx.r4.s64 = ctx.r30.s64 + 511;
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4EB4;
	sub_837B0C10(ctx, base);
	// addi r4,r30,503
	ctx.r4.s64 = ctx.r30.s64 + 503;
	// addi r3,r31,644
	ctx.r3.s64 = ctx.r31.s64 + 644;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4EC0;
	sub_837B0C10(ctx, base);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// lis r9,278
	ctx.r9.s64 = 18219008;
	// li r11,7
	ctx.r11.s64 = 7;
	// ori r10,r10,18
	ctx.r10.u64 = ctx.r10.u64 | 18;
	// ori r9,r9,676
	ctx.r9.u64 = ctx.r9.u64 | 676;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// stw r10,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r10.u32);
	// addi r4,r30,483
	ctx.r4.s64 = ctx.r30.s64 + 483;
	// stw r9,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r9.u32);
	// addi r3,r31,684
	ctx.r3.s64 = ctx.r31.s64 + 684;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4EEC;
	sub_837B0C10(ctx, base);
	// addi r4,r30,475
	ctx.r4.s64 = ctx.r30.s64 + 475;
	// addi r3,r31,712
	ctx.r3.s64 = ctx.r31.s64 + 712;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4EF8;
	sub_837B0C10(ctx, base);
	// addi r4,r30,467
	ctx.r4.s64 = ctx.r30.s64 + 467;
	// addi r3,r31,740
	ctx.r3.s64 = ctx.r31.s64 + 740;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4F04;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r29,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r29.u32);
	// ori r10,r10,563
	ctx.r10.u64 = ctx.r10.u64 | 563;
	// stw r11,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r11.u32);
	// addi r4,r30,-62
	ctx.r4.s64 = ctx.r30.s64 + -62;
	// stw r10,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r10.u32);
	// addi r3,r31,780
	ctx.r3.s64 = ctx.r31.s64 + 780;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4F28;
	sub_837B0C10(ctx, base);
	// addi r4,r30,455
	ctx.r4.s64 = ctx.r30.s64 + 455;
	// addi r3,r31,808
	ctx.r3.s64 = ctx.r31.s64 + 808;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4F34;
	sub_837B0C10(ctx, base);
	// addi r4,r30,443
	ctx.r4.s64 = ctx.r30.s64 + 443;
	// addi r3,r31,836
	ctx.r3.s64 = ctx.r31.s64 + 836;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4F40;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// lis r9,277
	ctx.r9.s64 = 18153472;
	// li r11,9
	ctx.r11.s64 = 9;
	// ori r10,r10,620
	ctx.r10.u64 = ctx.r10.u64 | 620;
	// ori r9,r9,162
	ctx.r9.u64 = ctx.r9.u64 | 162;
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// stw r10,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r10.u32);
	// addi r4,r30,419
	ctx.r4.s64 = ctx.r30.s64 + 419;
	// stw r9,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r9.u32);
	// addi r3,r31,876
	ctx.r3.s64 = ctx.r31.s64 + 876;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4F6C;
	sub_837B0C10(ctx, base);
	// addi r4,r30,411
	ctx.r4.s64 = ctx.r30.s64 + 411;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4F78;
	sub_837B0C10(ctx, base);
	// addi r4,r30,403
	ctx.r4.s64 = ctx.r30.s64 + 403;
	// addi r3,r31,932
	ctx.r3.s64 = ctx.r31.s64 + 932;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4F84;
	sub_837B0C10(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// stw r11,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r11.u32);
	// lis r11,278
	ctx.r11.s64 = 18219008;
	// ori r10,r10,621
	ctx.r10.u64 = ctx.r10.u64 | 621;
	// ori r11,r11,679
	ctx.r11.u64 = ctx.r11.u64 | 679;
	// stw r10,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r10.u32);
	// addi r4,r30,379
	ctx.r4.s64 = ctx.r30.s64 + 379;
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// addi r3,r31,972
	ctx.r3.s64 = ctx.r31.s64 + 972;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4FB0;
	sub_837B0C10(ctx, base);
	// addi r4,r30,371
	ctx.r4.s64 = ctx.r30.s64 + 371;
	// addi r3,r31,1000
	ctx.r3.s64 = ctx.r31.s64 + 1000;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4FBC;
	sub_837B0C10(ctx, base);
	// addi r4,r30,363
	ctx.r4.s64 = ctx.r30.s64 + 363;
	// addi r3,r31,1028
	ctx.r3.s64 = ctx.r31.s64 + 1028;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4FC8;
	sub_837B0C10(ctx, base);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// lis r9,278
	ctx.r9.s64 = 18219008;
	// li r11,11
	ctx.r11.s64 = 11;
	// ori r10,r10,18
	ctx.r10.u64 = ctx.r10.u64 | 18;
	// ori r9,r9,676
	ctx.r9.u64 = ctx.r9.u64 | 676;
	// stw r11,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r11.u32);
	// stw r10,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r10.u32);
	// addi r4,r30,339
	ctx.r4.s64 = ctx.r30.s64 + 339;
	// stw r9,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r9.u32);
	// addi r3,r31,1068
	ctx.r3.s64 = ctx.r31.s64 + 1068;
	// bl 0x837b0c10
	ctx.lr = 0x82BA4FF4;
	sub_837B0C10(ctx, base);
	// addi r4,r30,331
	ctx.r4.s64 = ctx.r30.s64 + 331;
	// addi r3,r31,1096
	ctx.r3.s64 = ctx.r31.s64 + 1096;
	// bl 0x837b0c10
	ctx.lr = 0x82BA5000;
	sub_837B0C10(ctx, base);
	// addi r4,r30,323
	ctx.r4.s64 = ctx.r30.s64 + 323;
	// addi r3,r31,1124
	ctx.r3.s64 = ctx.r31.s64 + 1124;
	// bl 0x837b0c10
	ctx.lr = 0x82BA500C;
	sub_837B0C10(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,14024
	ctx.r3.s64 = ctx.r9.s64 + 14024;
	// bl 0x831cdcc8
	ctx.lr = 0x82BA5018;
	sub_831CDCC8(ctx, base);
loc_82BA5018:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA5020;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BA5028;
	sub_82D33DB0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba54ec
	if (cr6.eq) goto loc_82BA54EC;
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r4,r30,719
	ctx.r4.s64 = ctx.r30.s64 + 719;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82BA504C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82BA5060;
	sub_83165D78(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ba5074
	if (!cr6.lt) goto loc_82BA5074;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
loc_82BA5074:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA508C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82BA5098;
	sub_82D33C10(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// bge cr6,0x82ba54e4
	if (!cr6.lt) goto loc_82BA54E4;
	// lis r11,239
	ctx.r11.s64 = 15663104;
	// addi r20,r19,100
	ctx.r20.s64 = ctx.r19.s64 + 100;
	// li r25,-1
	ctx.r25.s64 = -1;
	// ori r23,r11,62044
	ctx.r23.u64 = ctx.r11.u64 | 62044;
loc_82BA50B4:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r4,r30,739
	ctx.r4.s64 = ctx.r30.s64 + 739;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82BA50C4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82BA50D8;
	sub_83165D78(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ba50ec
	if (!cr6.lt) goto loc_82BA50EC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_82BA50EC:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA5100;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba54bc
	if (cr6.eq) goto loc_82BA54BC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x82ba513c
	if (cr6.lt) goto loc_82BA513C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82BA5128;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BA5138;
	sub_82D2AEC8(ctx, base);
	// b 0x82ba54bc
	goto loc_82BA54BC;
loc_82BA513C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82BA5144;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BA5154;
	sub_82D2AEC8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// stb r28,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r28.u8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// stb r28,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r28.u8);
	// stw r24,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r24.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stb r28,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r28.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82BA51C0;
	sub_8259CB28(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BA51E8;
	sub_8259CB28(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BA5210;
	sub_8259CB28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82ba4a60
	ctx.lr = 0x82BA521C;
	sub_82BA4A60(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// bge cr6,0x82ba5230
	if (!cr6.lt) goto loc_82BA5230;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
loc_82BA5230:
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
	ctx.lr = 0x82BA5248;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x82ba52f4
	if (cr6.eq) goto loc_82BA52F4;
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// beq cr6,0x82ba52f4
	if (cr6.eq) goto loc_82BA52F4;
	// cmpwi cr6,r6,8
	cr6.compare<int32_t>(ctx.r6.s32, 8, xer);
	// beq cr6,0x82ba52f4
	if (cr6.eq) goto loc_82BA52F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d21408
	ctx.lr = 0x82BA5274;
	sub_82D21408(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ba5288
	if (!cr6.lt) goto loc_82BA5288;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
loc_82BA5288:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82BA5298;
	sub_82D233B0(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BA52AC;
	sub_82D2B608(ctx, base);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// addi r4,r30,747
	ctx.r4.s64 = ctx.r30.s64 + 747;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA52C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5308
	if (cr6.eq) goto loc_82BA5308;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82BA52DC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d3bcc0
	ctx.lr = 0x82BA52E8;
	sub_82D3BCC0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA52F0;
	sub_8387E8E0(ctx, base);
	// b 0x82ba5308
	goto loc_82BA5308;
loc_82BA52F4:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BA5308;
	sub_82D2B608(ctx, base);
loc_82BA5308:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ba531c
	if (!cr6.lt) goto loc_82BA531C;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
loc_82BA531C:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA5330;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba54b4
	if (cr6.eq) goto loc_82BA54B4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x82d29598
	ctx.lr = 0x82BA5354;
	sub_82D29598(ctx, base);
	// lbz r6,116(r22)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r22.u32 + 116);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82ba53f4
	if (cr6.eq) goto loc_82BA53F4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82ba5374
	if (cr6.eq) goto loc_82BA5374;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x82ba5388
	if (!cr6.eq) goto loc_82BA5388;
loc_82BA5374:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BA5384;
	sub_82D2AEC8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BA5388:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82ba5398
	if (cr6.eq) goto loc_82BA5398;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82ba53ac
	if (!cr6.eq) goto loc_82BA53AC;
loc_82BA5398:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BA53A8;
	sub_82D2AEC8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BA53AC:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82ba53bc
	if (cr6.eq) goto loc_82BA53BC;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x82ba53d0
	if (!cr6.eq) goto loc_82BA53D0;
loc_82BA53BC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BA53CC;
	sub_82D2AEC8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BA53D0:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82ba53e0
	if (cr6.eq) goto loc_82BA53E0;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x82ba54b4
	if (!cr6.eq) goto loc_82BA54B4;
loc_82BA53E0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BA53F0;
	sub_82D2AEC8(ctx, base);
	// b 0x82ba54b4
	goto loc_82BA54B4;
loc_82BA53F4:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// add r26,r18,r23
	ctx.r26.u64 = ctx.r18.u64 + ctx.r23.u64;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82ba540c
	if (cr6.eq) goto loc_82BA540C;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x82ba5430
	if (!cr6.eq) goto loc_82BA5430;
loc_82BA540C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83129fd8
	ctx.lr = 0x82BA5418;
	sub_83129FD8(ctx, base);
	// bl 0x8312dce0
	ctx.lr = 0x82BA541C;
	sub_8312DCE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bne cr6,0x82ba5430
	if (!cr6.eq) goto loc_82BA5430;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82BA5430:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82ba5440
	if (cr6.eq) goto loc_82BA5440;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82ba5464
	if (!cr6.eq) goto loc_82BA5464;
loc_82BA5440:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83129fd8
	ctx.lr = 0x82BA544C;
	sub_83129FD8(ctx, base);
	// bl 0x8312dce0
	ctx.lr = 0x82BA5450;
	sub_8312DCE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bne cr6,0x82ba5464
	if (!cr6.eq) goto loc_82BA5464;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82BA5464:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82ba5474
	if (cr6.eq) goto loc_82BA5474;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x82ba5494
	if (!cr6.eq) goto loc_82BA5494;
loc_82BA5474:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83129fd8
	ctx.lr = 0x82BA5480;
	sub_83129FD8(ctx, base);
	// bl 0x8312dce0
	ctx.lr = 0x82BA5484;
	sub_8312DCE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba5494
	if (!cr6.eq) goto loc_82BA5494;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82BA5494:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba54b4
	if (cr6.eq) goto loc_82BA54B4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BA54B4;
	sub_82D2B608(ctx, base);
loc_82BA54B4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ba44d0
	ctx.lr = 0x82BA54BC;
	sub_82BA44D0(ctx, base);
loc_82BA54BC:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA54C4;
	sub_8387E8E0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82d33c10
	ctx.lr = 0x82BA54D8;
	sub_82D33C10(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ba50b4
	if (cr6.lt) goto loc_82BA50B4;
loc_82BA54E4:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA54EC;
	sub_8387E8E0(ctx, base);
loc_82BA54EC:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA54F4;
	sub_8387E8E0(ctx, base);
loc_82BA54F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA5500"))) PPC_WEAK_FUNC(sub_82BA5500);
PPC_FUNC_IMPL(__imp__sub_82BA5500) {
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
	// blt cr6,0x82ba5528
	if (cr6.lt) goto loc_82BA5528;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ba552c
	goto loc_82BA552C;
loc_82BA5528:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BA552C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BA5548;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5564
	if (cr6.eq) goto loc_82BA5564;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ba4970
	ctx.lr = 0x82BA555C;
	sub_82BA4970(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba5568
	if (!cr6.eq) goto loc_82BA5568;
loc_82BA5564:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BA5568:
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

__attribute__((alias("__imp__sub_82BA5580"))) PPC_WEAK_FUNC(sub_82BA5580);
PPC_FUNC_IMPL(__imp__sub_82BA5580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-2372
	ctx.r5.s64 = ctx.r11.s64 + -2372;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA5590"))) PPC_WEAK_FUNC(sub_82BA5590);
PPC_FUNC_IMPL(__imp__sub_82BA5590) {
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
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82BA55B4;
	sub_8259CC28(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31761
	ctx.r9.s64 = -2081488896;
	// ori r11,r10,65535
	ctx.r11.u64 = ctx.r10.u64 | 65535;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r5,55
	ctx.r5.s64 = 55;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// lwz r11,13376(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13376);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// sth r6,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r6.u16);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ba5644
	if (cr6.eq) goto loc_82BA5644;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r10
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ba5640
	if (cr6.eq) goto loc_82BA5640;
loc_82BA5620:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ba5620
	if (!cr6.eq) goto loc_82BA5620;
loc_82BA5640:
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
loc_82BA5644:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r8,r31,84
	ctx.r8.s64 = ctx.r31.s64 + 84;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ba5688
	if (cr6.eq) goto loc_82BA5688;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ba5684
	if (cr6.eq) goto loc_82BA5684;
loc_82BA5664:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ba5664
	if (!cr6.eq) goto loc_82BA5664;
loc_82BA5684:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_82BA5688:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r8,r31,100
	ctx.r8.s64 = ctx.r31.s64 + 100;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ba56cc
	if (cr6.eq) goto loc_82BA56CC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ba56c8
	if (cr6.eq) goto loc_82BA56C8;
loc_82BA56A8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne cr6,0x82ba56a8
	if (!cr6.eq) goto loc_82BA56A8;
loc_82BA56C8:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_82BA56CC:
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

__attribute__((alias("__imp__sub_82BA56E0"))) PPC_WEAK_FUNC(sub_82BA56E0);
PPC_FUNC_IMPL(__imp__sub_82BA56E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BA56E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x82ba572c
	if (!cr6.eq) goto loc_82BA572C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r9,-2388
	ctx.r11.s64 = ctx.r9.s64 + -2388;
	// addi r4,r11,-136
	ctx.r4.s64 = ctx.r11.s64 + -136;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BA5724;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BA572C:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82ba57b4
	if (!cr6.eq) goto loc_82BA57B4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,-2388
	ctx.r30.s64 = ctx.r11.s64 + -2388;
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BA5754;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BA576C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba58d0
	if (cr6.eq) goto loc_82BA58D0;
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82BA5784;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a6b3c0
	ctx.lr = 0x82BA5790;
	sub_82A6B3C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA5798;
	sub_8387E8E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BA57AC;
	sub_82D291E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BA57B4:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x82ba5810
	if (!cr6.eq) goto loc_82BA5810;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r30,r10,-2388
	ctx.r30.s64 = ctx.r10.s64 + -2388;
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BA57D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BA57F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba58d0
	if (cr6.eq) goto loc_82BA58D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BA5808;
	sub_82D291E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BA5810:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,-2388
	ctx.r30.s64 = ctx.r11.s64 + -2388;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BA582C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BA5848;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba58d0
	if (cr6.eq) goto loc_82BA58D0;
	// addi r4,r30,-865
	ctx.r4.s64 = ctx.r30.s64 + -865;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82BA5860;
	sub_837B0C10(ctx, base);
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba5884
	if (!cr6.eq) goto loc_82BA5884;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,137
	ctx.r4.u64 = ctx.r4.u64 | 137;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82d042a8
	ctx.lr = 0x82BA5884;
	sub_82D042A8(ctx, base);
loc_82BA5884:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BA5898;
	sub_82D291E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA58B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba58c8
	if (cr6.eq) goto loc_82BA58C8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BA58C8;
	sub_82D291E0(ctx, base);
loc_82BA58C8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA58D0;
	sub_8387E8E0(ctx, base);
loc_82BA58D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA58D8"))) PPC_WEAK_FUNC(sub_82BA58D8);
PPC_FUNC_IMPL(__imp__sub_82BA58D8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,116
	ctx.r10.s64 = 116;
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bgt cr6,0x82ba591c
	if (cr6.gt) goto loc_82BA591C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BA591C;
	sub_831CC188(ctx, base);
loc_82BA591C:
	// mulli r10,r5,116
	ctx.r10.s64 = ctx.r5.s64 * 116;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b0f990
	ctx.lr = 0x82BA592C;
	sub_82B0F990(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba56e0
	ctx.lr = 0x82BA593C;
	sub_82BA56E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b0f8d8
	ctx.lr = 0x82BA5944;
	sub_82B0F8D8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_82BA595C"))) PPC_WEAK_FUNC(sub_82BA595C);
PPC_FUNC_IMPL(__imp__sub_82BA595C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA5960"))) PPC_WEAK_FUNC(sub_82BA5960);
PPC_FUNC_IMPL(__imp__sub_82BA5960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82BA5968;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,564
	ctx.r11.s64 = 36962304;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,63276
	ctx.r10.u64 = ctx.r11.u64 | 63276;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ba598c
	if (!cr6.gt) goto loc_82BA598C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82BA598C;
	sub_831CC150(ctx, base);
loc_82BA598C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,116
	ctx.r24.s64 = 116;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82ba5a48
	if (!cr6.lt) goto loc_82BA5A48;
	// li r25,2
	ctx.r25.s64 = 2;
	// mulli r26,r4,116
	ctx.r26.s64 = ctx.r4.s64 * 116;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BA59C4;
	sub_82595718(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// beq cr6,0x82ba5a00
	if (cr6.eq) goto loc_82BA5A00;
loc_82BA59DC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ba59f0
	if (cr6.eq) goto loc_82BA59F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b0f990
	ctx.lr = 0x82BA59F0;
	sub_82B0F990(ctx, base);
loc_82BA59F0:
	// addi r30,r30,116
	ctx.r30.s64 = ctx.r30.s64 + 116;
	// addi r29,r29,116
	ctx.r29.s64 = ctx.r29.s64 + 116;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82ba59dc
	if (!cr6.eq) goto loc_82BA59DC;
loc_82BA5A00:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r30,r11,r24
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	// beq cr6,0x82ba5a30
	if (cr6.eq) goto loc_82BA5A30;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x82b104d0
	ctx.lr = 0x82BA5A20;
	sub_82B104D0(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BA5A30;
	sub_825952B8(ctx, base);
loc_82BA5A30:
	// mulli r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 * 116;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82BA5A48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA5A50"))) PPC_WEAK_FUNC(sub_82BA5A50);
PPC_FUNC_IMPL(__imp__sub_82BA5A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,564
	ctx.r10.s64 = 36962304;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,116
	ctx.r9.s64 = 116;
	// ori r8,r10,63276
	ctx.r8.u64 = ctx.r10.u64 | 63276;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ba5a84
	if (!cr6.lt) goto loc_82BA5A84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82BA5A84:
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
	// blt cr6,0x82ba5ab4
	if (cr6.lt) goto loc_82BA5AB4;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82BA5AB4:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ba5ac0
	if (!cr6.lt) goto loc_82BA5AC0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82BA5AC0:
	// b 0x82ba5960
	sub_82BA5960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA5AC4"))) PPC_WEAK_FUNC(sub_82BA5AC4);
PPC_FUNC_IMPL(__imp__sub_82BA5AC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA5AC8"))) PPC_WEAK_FUNC(sub_82BA5AC8);
PPC_FUNC_IMPL(__imp__sub_82BA5AC8) {
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
	// addi r9,r11,-2280
	ctx.r9.s64 = ctx.r11.s64 + -2280;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5b28
	if (cr6.eq) goto loc_82BA5B28;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b104d0
	ctx.lr = 0x82BA5B14;
	sub_82B104D0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BA5B28;
	sub_825952B8(ctx, base);
loc_82BA5B28:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82BA5B40;
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

__attribute__((alias("__imp__sub_82BA5B58"))) PPC_WEAK_FUNC(sub_82BA5B58);
PPC_FUNC_IMPL(__imp__sub_82BA5B58) {
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
	// bge cr6,0x82ba5b90
	if (!cr6.lt) goto loc_82BA5B90;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82ba5b94
	if (!cr6.gt) goto loc_82BA5B94;
loc_82BA5B90:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BA5B94:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ba5be4
	if (cr6.eq) goto loc_82BA5BE4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,116
	ctx.r9.s64 = 116;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82ba5bc8
	if (!cr6.eq) goto loc_82BA5BC8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba5a50
	ctx.lr = 0x82BA5BC8;
	sub_82BA5A50(ctx, base);
loc_82BA5BC8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5c10
	if (cr6.eq) goto loc_82BA5C10;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 * 116;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ba5c0c
	goto loc_82BA5C0C;
loc_82BA5BE4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ba5bfc
	if (!cr6.eq) goto loc_82BA5BFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba5a50
	ctx.lr = 0x82BA5BFC;
	sub_82BA5A50(ctx, base);
loc_82BA5BFC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba5c10
	if (cr6.eq) goto loc_82BA5C10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BA5C0C:
	// bl 0x82b0f990
	ctx.lr = 0x82BA5C10;
	sub_82B0F990(ctx, base);
loc_82BA5C10:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
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

__attribute__((alias("__imp__sub_82BA5C34"))) PPC_WEAK_FUNC(sub_82BA5C34);
PPC_FUNC_IMPL(__imp__sub_82BA5C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA5C38"))) PPC_WEAK_FUNC(sub_82BA5C38);
PPC_FUNC_IMPL(__imp__sub_82BA5C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BA5C40;
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
	// bl 0x8308e078
	ctx.lr = 0x82BA5C54;
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
	ctx.lr = 0x82BA5C6C;
	sub_82D253F8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-2280
	ctx.r8.s64 = ctx.r10.s64 + -2280;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stb r11,96(r30)
	PPC_STORE_U8(ctx.r30.u32 + 96, ctx.r11.u8);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r7.u32);
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82BA5C9C;
	sub_831156E8(ctx, base);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,18816(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 18816);
	// bl 0x82d20ae0
	ctx.lr = 0x82BA5CAC;
	sub_82D20AE0(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r5,-2704
	ctx.r31.s64 = ctx.r5.s64 + -2704;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82d23390
	ctx.lr = 0x82BA5CC4;
	sub_82D23390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d20ae0
	ctx.lr = 0x82BA5CD0;
	sub_82D20AE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a689e8
	ctx.lr = 0x82BA5CD8;
	sub_82A689E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA5CE4"))) PPC_WEAK_FUNC(sub_82BA5CE4);
PPC_FUNC_IMPL(__imp__sub_82BA5CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA5CE8"))) PPC_WEAK_FUNC(sub_82BA5CE8);
PPC_FUNC_IMPL(__imp__sub_82BA5CE8) {
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
	// bl 0x82ba5ac8
	ctx.lr = 0x82BA5D08;
	sub_82BA5AC8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba5d20
	if (cr6.eq) goto loc_82BA5D20;
	// bl 0x82416268
	ctx.lr = 0x82BA5D1C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BA5D20:
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

__attribute__((alias("__imp__sub_82BA5D38"))) PPC_WEAK_FUNC(sub_82BA5D38);
PPC_FUNC_IMPL(__imp__sub_82BA5D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82BA5D40;
	__savegprlr_14(ctx, base);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BA5D4C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r26,48(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8319dc20
	ctx.lr = 0x82BA5D5C;
	sub_8319DC20(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// addi r21,r11,-2620
	ctx.r21.s64 = ctx.r11.s64 + -2620;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r21,-636
	ctx.r5.s64 = ctx.r21.s64 + -636;
	// addi r3,r1,588
	ctx.r3.s64 = ctx.r1.s64 + 588;
	// rlwinm r30,r10,24,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// bl 0x831178a0
	ctx.lr = 0x82BA5D88;
	sub_831178A0(ctx, base);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// lis r4,28
	ctx.r4.s64 = 1835008;
	// stw r28,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r28.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
	// ori r4,r4,191
	ctx.r4.u64 = ctx.r4.u64 | 191;
	// bl 0x82d04220
	ctx.lr = 0x82BA5DA8;
	sub_82D04220(ctx, base);
	// lwz r8,932(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lwz r7,908(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 908);
	// oris r11,r8,65532
	ctx.r11.u64 = ctx.r8.u64 | 4294705152;
	// stw r28,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r28.u32);
	// ori r24,r9,65535
	ctx.r24.u64 = ctx.r9.u64 | 65535;
	// stw r31,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r31.u32);
	// oris r10,r7,65535
	ctx.r10.u64 = ctx.r7.u64 | 4294901760;
	// stb r31,880(r1)
	PPC_STORE_U8(ctx.r1.u32 + 880, ctx.r31.u8);
	// or r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 | ctx.r24.u64;
	// stw r31,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r31.u32);
	// stw r10,908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 908, ctx.r10.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r31,952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 952, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r31.u32);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// stw r31,968(r1)
	PPC_STORE_U32(ctx.r1.u32 + 968, ctx.r31.u32);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// stw r31,972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 972, ctx.r31.u32);
	// stw r31,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r31.u32);
	// stw r31,984(r1)
	PPC_STORE_U32(ctx.r1.u32 + 984, ctx.r31.u32);
	// stw r31,988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 988, ctx.r31.u32);
	// stb r31,910(r1)
	PPC_STORE_U8(ctx.r1.u32 + 910, ctx.r31.u8);
	// stb r31,911(r1)
	PPC_STORE_U8(ctx.r1.u32 + 911, ctx.r31.u8);
	// stw r9,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r9.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82BA5E1C;
	sub_8259CB28(ctx, base);
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r18,r14,100
	ctx.r18.s64 = ctx.r14.s64 + 100;
	// stw r8,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r8.u32);
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82ba5b58
	ctx.lr = 0x82BA5E34;
	sub_82BA5B58(ctx, base);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x8315fe20
	ctx.lr = 0x82BA5E4C;
	sub_8315FE20(ctx, base);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82ba5e60
	if (cr6.lt) goto loc_82BA5E60;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ba5e64
	goto loc_82BA5E64;
loc_82BA5E60:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82BA5E64:
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r4,r4,136
	ctx.r4.u64 = ctx.r4.u64 | 136;
	// bl 0x82d042a8
	ctx.lr = 0x82BA5E74;
	sub_82D042A8(ctx, base);
	// lwz r11,740(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba5e94
	if (cr6.lt) goto loc_82BA5E94;
	// stw r29,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r29.u32);
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// lwz r4,720(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// bl 0x825952b8
	ctx.lr = 0x82BA5E94;
	sub_825952B8(ctx, base);
loc_82BA5E94:
	// lwz r11,804(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r10,780(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// li r5,0
	ctx.r5.s64 = 0;
	// oris r9,r11,65532
	ctx.r9.u64 = ctx.r11.u64 | 4294705152;
	// stw r28,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r28.u32);
	// oris r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 4294901760;
	// stw r31,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r31.u32);
	// or r7,r9,r24
	ctx.r7.u64 = ctx.r9.u64 | ctx.r24.u64;
	// stb r31,720(r1)
	PPC_STORE_U8(ctx.r1.u32 + 720, ctx.r31.u8);
	// stw r8,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r8.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r28,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r28.u32);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// stw r31,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r31.u32);
	// stb r31,752(r1)
	PPC_STORE_U8(ctx.r1.u32 + 752, ctx.r31.u8);
	// stb r31,782(r1)
	PPC_STORE_U8(ctx.r1.u32 + 782, ctx.r31.u8);
	// stb r31,783(r1)
	PPC_STORE_U8(ctx.r1.u32 + 783, ctx.r31.u8);
	// stw r31,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r31.u32);
	// stw r31,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r31.u32);
	// stw r31,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r31.u32);
	// stw r31,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r31.u32);
	// stw r31,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r31.u32);
	// stw r31,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r31.u32);
	// stw r31,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r31.u32);
	// stw r31,856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 856, ctx.r31.u32);
	// stw r31,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r31.u32);
	// stw r7,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r7.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82BA5F08;
	sub_8259CB28(ctx, base);
	// li r6,11
	ctx.r6.s64 = 11;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// stw r6,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r6.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82ba5b58
	ctx.lr = 0x82BA5F1C;
	sub_82BA5B58(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82fe0df0
	ctx.lr = 0x82BA5F2C;
	sub_82FE0DF0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82f07868
	ctx.lr = 0x82BA5F3C;
	sub_82F07868(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ba5f4c
	if (cr6.eq) goto loc_82BA5F4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82BA5F4C;
	sub_82416268(ctx, base);
loc_82BA5F4C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r20,116
	ctx.r20.s64 = 116;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r20
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r20.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ba6788
	if (cr0.eq) goto loc_82BA6788;
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lis r10,930
	ctx.r10.s64 = 60948480;
	// lis r9,25
	ctx.r9.s64 = 1638400;
	// lis r8,270
	ctx.r8.s64 = 17694720;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// ori r15,r11,28
	ctx.r15.u64 = ctx.r11.u64 | 28;
	// ori r16,r10,27
	ctx.r16.u64 = ctx.r10.u64 | 27;
	// ori r17,r9,143
	ctx.r17.u64 = ctx.r9.u64 | 143;
	// ori r19,r8,138
	ctx.r19.u64 = ctx.r8.u64 | 138;
	// li r22,28
	ctx.r22.s64 = 28;
loc_82BA5F90:
	// lwz r11,484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// oris r9,r11,65532
	ctx.r9.u64 = ctx.r11.u64 | 4294705152;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// oris r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 4294901760;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// or r7,r9,r24
	ctx.r7.u64 = ctx.r9.u64 | ctx.r24.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// stw r8,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r8.u32);
	// stw r28,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r28.u32);
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
	// stb r31,462(r1)
	PPC_STORE_U8(ctx.r1.u32 + 462, ctx.r31.u8);
	// stb r31,463(r1)
	PPC_STORE_U8(ctx.r1.u32 + 463, ctx.r31.u8);
	// stw r31,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r31.u32);
	// stw r31,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r31.u32);
	// stw r31,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r31.u32);
	// stw r31,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r31.u32);
	// stw r31,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r31.u32);
	// stw r31,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r31.u32);
	// stw r31,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r31.u32);
	// stw r31,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r31.u32);
	// stw r31,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r31.u32);
	// stw r7,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r7.u32);
	// bl 0x82ba5590
	ctx.lr = 0x82BA5FF8;
	sub_82BA5590(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// divw r4,r5,r20
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r20.s32);
	// cmplw cr6,r4,r23
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r23.u32, xer);
	// ble cr6,0x82ba68d8
	if (!cr6.gt) goto loc_82BA68D8;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r10,484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r9.u32);
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r8,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r8.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r9,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r9.u32);
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwimi r10,r7,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwimi r10,r6,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r5,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r5.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x8311c3d8
	ctx.lr = 0x82BA6068;
	sub_8311C3D8(ctx, base);
	// lhz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x82ba60d0
	if (cr6.eq) goto loc_82BA60D0;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8311c338
	ctx.lr = 0x82BA6080;
	sub_8311C338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83125548
	ctx.lr = 0x82BA6090;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82BA60A4;
	sub_8259CB28(ctx, base);
	// lwz r11,676(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba60c0
	if (cr6.lt) goto loc_82BA60C0;
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r4,656(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// bl 0x825952b8
	ctx.lr = 0x82BA60C0;
	sub_825952B8(ctx, base);
loc_82BA60C0:
	// stw r28,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r28.u32);
	// stw r31,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r31.u32);
	// stb r31,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r31.u8);
	// b 0x82ba6154
	goto loc_82BA6154;
loc_82BA60D0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r20
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r20.s32);
	// cmplw cr6,r8,r23
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r23.u32, xer);
	// ble cr6,0x82ba68e4
	if (!cr6.gt) goto loc_82BA68E4;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 40);
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// beq cr6,0x82ba6158
	if (cr6.eq) goto loc_82BA6158;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x8311c338
	ctx.lr = 0x82BA6108;
	sub_8311C338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83125548
	ctx.lr = 0x82BA6118;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82BA612C;
	sub_8259CB28(ctx, base);
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba6148
	if (cr6.lt) goto loc_82BA6148;
	// stw r29,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r29.u32);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// lwz r4,688(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// bl 0x825952b8
	ctx.lr = 0x82BA6148;
	sub_825952B8(ctx, base);
loc_82BA6148:
	// stw r28,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r28.u32);
	// stw r31,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r31.u32);
	// stb r31,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, ctx.r31.u8);
loc_82BA6154:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BA6158:
	// lwz r10,464(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// bgt cr6,0x82ba64cc
	if (cr6.gt) goto loc_82BA64CC;
	// lis r12,-32070
	ctx.r12.s64 = -2101739520;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,24960
	ctx.r12.s64 = ctx.r12.s64 + 24960;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82BA61BC;
	case 1:
		goto loc_82BA61FC;
	case 2:
		goto loc_82BA61E4;
	case 3:
		goto loc_82BA61FC;
	case 4:
		goto loc_82BA61FC;
	case 5:
		goto loc_82BA61FC;
	case 6:
		goto loc_82BA61FC;
	case 7:
		goto loc_82BA61FC;
	case 8:
		goto loc_82BA61FC;
	case 9:
		goto loc_82BA64CC;
	case 10:
		goto loc_82BA64CC;
	case 11:
		goto loc_82BA64CC;
	case 12:
		goto loc_82BA64CC;
	case 13:
		goto loc_82BA67EC;
	case 14:
		goto loc_82BA67FC;
	default:
		return;
	}
	// lwz r21,25020(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25020);
	// lwz r21,25084(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25084);
	// lwz r21,25060(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25060);
	// lwz r21,25084(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25084);
	// lwz r21,25084(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25084);
	// lwz r21,25084(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25084);
	// lwz r21,25084(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25084);
	// lwz r21,25084(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25084);
	// lwz r21,25084(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25084);
	// lwz r21,25804(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25804);
	// lwz r21,25804(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25804);
	// lwz r21,25804(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25804);
	// lwz r21,25804(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25804);
	// lwz r21,26604(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26604);
	// lwz r21,26620(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26620);
loc_82BA61BC:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ba61d0
	if (!cr6.lt) goto loc_82BA61D0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82BA61D0:
	// lis r4,276
	ctx.r4.s64 = 18087936;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,81
	ctx.r4.u64 = ctx.r4.u64 | 81;
	// bl 0x82d042a8
	ctx.lr = 0x82BA61E0;
	sub_82D042A8(ctx, base);
	// b 0x82ba64cc
	goto loc_82BA64CC;
loc_82BA61E4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x82BA61F8;
	sub_825A1DA8(ctx, base);
	// b 0x82ba64cc
	goto loc_82BA64CC;
loc_82BA61FC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x82BA6210;
	sub_825A1DA8(ctx, base);
	// addi r4,r21,-16
	ctx.r4.s64 = ctx.r21.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x82BA6220;
	sub_825A1EB8(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82ba6260
	if (cr6.eq) goto loc_82BA6260;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,468
	ctx.r4.s64 = ctx.r1.s64 + 468;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x83162d40
	ctx.lr = 0x82BA6240;
	sub_83162D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x82BA6254;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA625C;
	sub_8387E8E0(ctx, base);
	// b 0x82ba64cc
	goto loc_82BA64CC;
loc_82BA6260:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r20
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r20.s32);
	// cmplw cr6,r8,r23
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r23.u32, xer);
	// ble cr6,0x82ba68f0
	if (!cr6.gt) goto loc_82BA68F0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// bl 0x8311c338
	ctx.lr = 0x82BA6288;
	sub_8311C338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r28,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r28.u32);
	// addi r4,r21,-12
	ctx.r4.s64 = ctx.r21.s64 + -12;
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// stw r28,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r28.u32);
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// rlwinm r29,r10,30,25,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x7F;
	// stb r31,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r31.u8);
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82BA62C8;
	sub_837B0C10(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lhz r9,82(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 82);
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bne cr6,0x82ba62e0
	if (!cr6.eq) goto loc_82BA62E0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82BA62E0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r20
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r20.s32);
	// cmplw cr6,r8,r23
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r23.u32, xer);
	// ble cr6,0x82ba68fc
	if (!cr6.gt) goto loc_82BA68FC;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ba6314
	if (!cr6.eq) goto loc_82BA6314;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// b 0x82ba6324
	goto loc_82BA6324;
loc_82BA6314:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82ba6330
	if (!cr6.eq) goto loc_82BA6330;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,22
	ctx.r4.u64 = ctx.r4.u64 | 22;
loc_82BA6324:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82d042a8
	ctx.lr = 0x82BA632C;
	sub_82D042A8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BA6330:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r20
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r20.s32);
	// cmplw cr6,r8,r23
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r23.u32, xer);
	// ble cr6,0x82ba6908
	if (!cr6.gt) goto loc_82BA6908;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r11,r11,-46
	ctx.r11.s64 = ctx.r11.s64 + -46;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82ba6458
	if (cr6.gt) goto loc_82BA6458;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ba63ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BA63EC;
	// bdzf 4*cr6+eq,0x82ba6414
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BA6414;
	// bdzf 4*cr6+eq,0x82ba6420
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BA6420;
	// bdzf 4*cr6+eq,0x82ba6434
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BA6434;
	// bdzf 4*cr6+eq,0x82ba63c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BA63C0;
	// bdzf 4*cr6+eq,0x82ba63b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BA63B0;
	// bne cr6,0x82ba6448
	if (!cr6.eq) goto loc_82BA6448;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// bne cr6,0x82ba63a8
	if (!cr6.eq) goto loc_82BA63A8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba639c
	if (cr6.eq) goto loc_82BA639C;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// b 0x82ba6454
	goto loc_82BA6454;
loc_82BA639C:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
	// b 0x82ba6454
	goto loc_82BA6454;
loc_82BA63A8:
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// bgt cr6,0x82ba63b8
	if (cr6.gt) goto loc_82BA63B8;
loc_82BA63B0:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// b 0x82ba6450
	goto loc_82BA6450;
loc_82BA63B8:
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, xer);
	// bgt cr6,0x82ba63c8
	if (cr6.gt) goto loc_82BA63C8;
loc_82BA63C0:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// b 0x82ba6450
	goto loc_82BA6450;
loc_82BA63C8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba63e0
	if (cr6.eq) goto loc_82BA63E0;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// b 0x82ba6454
	goto loc_82BA6454;
loc_82BA63E0:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,23
	ctx.r4.u64 = ctx.r4.u64 | 23;
	// b 0x82ba6454
	goto loc_82BA6454;
loc_82BA63EC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba6408
	if (cr6.eq) goto loc_82BA6408;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x82ba6454
	goto loc_82BA6454;
loc_82BA6408:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// b 0x82ba6454
	goto loc_82BA6454;
loc_82BA6414:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,619
	ctx.r4.u64 = ctx.r4.u64 | 619;
	// b 0x82ba6450
	goto loc_82BA6450;
loc_82BA6420:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d042a8
	ctx.lr = 0x82BA6430;
	sub_82D042A8(ctx, base);
	// b 0x82ba6458
	goto loc_82BA6458;
loc_82BA6434:
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d042a8
	ctx.lr = 0x82BA6444;
	sub_82D042A8(ctx, base);
	// b 0x82ba6458
	goto loc_82BA6458;
loc_82BA6448:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,29
	ctx.r4.u64 = ctx.r4.u64 | 29;
loc_82BA6450:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
loc_82BA6454:
	// bl 0x82d042a8
	ctx.lr = 0x82BA6458;
	sub_82D042A8(ctx, base);
loc_82BA6458:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x825a1da8
	ctx.lr = 0x82BA646C;
	sub_825A1DA8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1136
	ctx.r4.s64 = ctx.r1.s64 + 1136;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x825a1da8
	ctx.lr = 0x82BA6480;
	sub_825A1DA8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x825a1da8
	ctx.lr = 0x82BA6494;
	sub_825A1DA8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x82BA64A8;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA64B0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA64B8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA64C0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA64C8;
	sub_8387E8E0(ctx, base);
loc_82BA64C8:
	// li r29,2
	ctx.r29.s64 = 2;
loc_82BA64CC:
	// lwz r11,464(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82ba64e0
	if (cr6.eq) goto loc_82BA64E0;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82ba6590
	if (!cr6.eq) goto loc_82BA6590;
loc_82BA64E0:
	// addi r4,r21,-4
	ctx.r4.s64 = ctx.r21.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x82BA64F0;
	sub_825A1EB8(ctx, base);
	// lwz r11,464(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// stw r28,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r28.u32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// bne cr6,0x82ba6528
	if (!cr6.eq) goto loc_82BA6528;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,484(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// bl 0x8311c148
	ctx.lr = 0x82BA6514;
	sub_8311C148(ctx, base);
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// ori r4,r4,139
	ctx.r4.u64 = ctx.r4.u64 | 139;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82d042a8
	ctx.lr = 0x82BA6528;
	sub_82D042A8(ctx, base);
loc_82BA6528:
	// lwz r11,464(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82ba6554
	if (!cr6.eq) goto loc_82BA6554;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,484(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// bl 0x8311c148
	ctx.lr = 0x82BA6540;
	sub_8311C148(ctx, base);
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// ori r4,r4,140
	ctx.r4.u64 = ctx.r4.u64 | 140;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82d042a8
	ctx.lr = 0x82BA6554;
	sub_82D042A8(ctx, base);
loc_82BA6554:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x82BA6568;
	sub_825A1DA8(ctx, base);
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba6584
	if (cr6.lt) goto loc_82BA6584;
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x825952b8
	ctx.lr = 0x82BA6584;
	sub_825952B8(ctx, base);
loc_82BA6584:
	// stw r28,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r28.u32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
loc_82BA6590:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8259cb28
	ctx.lr = 0x82BA65A4;
	sub_8259CB28(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BA65B8;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BA65C0;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BA65C8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba692c
	if (cr6.eq) goto loc_82BA692C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA65E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6a4c
	if (cr6.eq) goto loc_82BA6A4C;
	// stw r28,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r28.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r31.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x8259cb28
	ctx.lr = 0x82BA6614;
	sub_8259CB28(ctx, base);
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a6c6c0
	ctx.lr = 0x82BA6624;
	sub_82A6C6C0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r22
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ba6708
	if (cr0.eq) goto loc_82BA6708;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82BA6640:
	// lwz r11,1060(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// lwz r10,1036(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1036);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// oris r9,r11,65532
	ctx.r9.u64 = ctx.r11.u64 | 4294705152;
	// stw r28,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, ctx.r28.u32);
	// oris r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 4294901760;
	// stw r31,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r31.u32);
	// or r7,r9,r24
	ctx.r7.u64 = ctx.r9.u64 | ctx.r24.u64;
	// stb r31,1008(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1008, ctx.r31.u8);
	// stw r8,1036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1036, ctx.r8.u32);
	// stb r31,1038(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1038, ctx.r31.u8);
	// stb r31,1039(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1039, ctx.r31.u8);
	// stw r31,1076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1076, ctx.r31.u32);
	// stw r31,1080(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1080, ctx.r31.u32);
	// stw r31,1084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1084, ctx.r31.u32);
	// stw r31,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r31.u32);
	// stw r31,1096(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1096, ctx.r31.u32);
	// stw r31,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r31.u32);
	// stw r31,1108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1108, ctx.r31.u32);
	// stw r31,1112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1112, ctx.r31.u32);
	// stw r31,1116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1116, ctx.r31.u32);
	// stw r7,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r7.u32);
	// bl 0x82b0fa60
	ctx.lr = 0x82BA66A0;
	sub_82B0FA60(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// divw r4,r5,r22
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r22.s32);
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, xer);
	// ble cr6,0x82ba6b58
	if (!cr6.gt) goto loc_82BA6B58;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x8259cb28
	ctx.lr = 0x82BA66CC;
	sub_8259CB28(ctx, base);
	// stw r30,1068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1068, ctx.r30.u32);
	// addi r4,r1,1008
	ctx.r4.s64 = ctx.r1.s64 + 1008;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82ba5b58
	ctx.lr = 0x82BA66DC;
	sub_82BA5B58(ctx, base);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82b0f8d8
	ctx.lr = 0x82BA66E4;
	sub_82B0F8D8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r22
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ba6640
	if (cr6.lt) goto loc_82BA6640;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82BA6708:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x838ae2a8
	ctx.lr = 0x82BA6710;
	sub_838AE2A8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba672c
	if (cr6.lt) goto loc_82BA672C;
	// stw r29,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r29.u32);
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82BA672C;
	sub_825952B8(ctx, base);
loc_82BA672C:
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82b0f8d8
	ctx.lr = 0x82BA6740;
	sub_82B0F8D8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba675c
	if (cr6.lt) goto loc_82BA675C;
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BA675C;
	sub_825952B8(ctx, base);
loc_82BA675C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r25,r25,116
	ctx.r25.s64 = ctx.r25.s64 + 116;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// divw r8,r9,r20
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r20.s32);
	// cmplw cr6,r23,r8
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ba5f90
	if (cr6.lt) goto loc_82BA5F90;
loc_82BA6788:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b10a10
	ctx.lr = 0x82BA6790;
	sub_82B10A10(ctx, base);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82b0f8d8
	ctx.lr = 0x82BA6798;
	sub_82B0F8D8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba67b4
	if (cr6.lt) goto loc_82BA67B4;
	// stw r29,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r29.u32);
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82BA67B4;
	sub_825952B8(ctx, base);
loc_82BA67B4:
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82b0f8d8
	ctx.lr = 0x82BA67C8;
	sub_82B0F8D8(ctx, base);
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba67e4
	if (cr6.lt) goto loc_82BA67E4;
	// stw r29,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r29.u32);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x825952b8
	ctx.lr = 0x82BA67E4;
	sub_825952B8(ctx, base);
loc_82BA67E4:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82BA67EC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x8315ffd0
	ctx.lr = 0x82BA67F8;
	sub_8315FFD0(ctx, base);
	// b 0x82ba64cc
	goto loc_82BA64CC;
loc_82BA67FC:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82BA6804:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r20
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r20.s32);
	// cmplw cr6,r8,r23
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r23.u32, xer);
	// ble cr6,0x82ba6914
	if (!cr6.gt) goto loc_82BA6914;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r29,r7
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, xer);
	// bge cr6,0x82ba64c8
	if (!cr6.lt) goto loc_82BA64C8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82ba6920
	if (!cr6.gt) goto loc_82BA6920;
	// ldx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r28.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// bl 0x8311bf98
	ctx.lr = 0x82BA6868;
	sub_8311BF98(ctx, base);
	// addi r5,r3,56
	ctx.r5.s64 = ctx.r3.s64 + 56;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82d042a8
	ctx.lr = 0x82BA6878;
	sub_82D042A8(ctx, base);
	// addi r4,r21,-8
	ctx.r4.s64 = ctx.r21.s64 + -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x825a1eb8
	ctx.lr = 0x82BA6888;
	sub_825A1EB8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x82BA689C;
	sub_825A1DA8(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba68bc
	if (cr6.lt) goto loc_82BA68BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BA68BC;
	sub_825952B8(ctx, base);
loc_82BA68BC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r28,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r28.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// b 0x82ba6804
	goto loc_82BA6804;
loc_82BA68D8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BA68E4;
	sub_831CC188(ctx, base);
loc_82BA68E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BA68F0;
	sub_831CC188(ctx, base);
loc_82BA68F0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BA68FC;
	sub_831CC188(ctx, base);
loc_82BA68FC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BA6908;
	sub_831CC188(ctx, base);
loc_82BA6908:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BA6914;
	sub_831CC188(ctx, base);
loc_82BA6914:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BA6920;
	sub_831CC188(ctx, base);
loc_82BA6920:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BA692C;
	sub_831CC188(ctx, base);
loc_82BA692C:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6958
	if (cr6.eq) goto loc_82BA6958;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x838adab0
	ctx.lr = 0x82BA6948;
	sub_838ADAB0(ctx, base);
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82BA6958;
	sub_825952B8(ctx, base);
loc_82BA6958:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// blt cr6,0x82ba6980
	if (cr6.lt) goto loc_82BA6980;
	// stw r29,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82BA6980;
	sub_825952B8(ctx, base);
loc_82BA6980:
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82b0f8d8
	ctx.lr = 0x82BA6994;
	sub_82B0F8D8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba69b0
	if (cr6.lt) goto loc_82BA69B0;
	// stw r29,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BA69B0;
	sub_825952B8(ctx, base);
loc_82BA69B0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// beq cr6,0x82ba69e4
	if (cr6.eq) goto loc_82BA69E4;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82b104d0
	ctx.lr = 0x82BA69D4;
	sub_82B104D0(ctx, base);
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BA69E4;
	sub_825952B8(ctx, base);
loc_82BA69E4:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82b0f8d8
	ctx.lr = 0x82BA69F8;
	sub_82B0F8D8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba6a14
	if (cr6.lt) goto loc_82BA6A14;
	// stw r29,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82BA6A14;
	sub_825952B8(ctx, base);
loc_82BA6A14:
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82b0f8d8
	ctx.lr = 0x82BA6A28;
	sub_82B0F8D8(ctx, base);
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba67e4
	if (cr6.lt) goto loc_82BA67E4;
	// stw r29,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r29.u32);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x825952b8
	ctx.lr = 0x82BA6A44;
	sub_825952B8(ctx, base);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82BA6A4C:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6a78
	if (cr6.eq) goto loc_82BA6A78;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x838adab0
	ctx.lr = 0x82BA6A68;
	sub_838ADAB0(ctx, base);
	// stw r29,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r29.u32);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82BA6A78;
	sub_825952B8(ctx, base);
loc_82BA6A78:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// blt cr6,0x82ba6aa0
	if (cr6.lt) goto loc_82BA6AA0;
	// stw r29,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r29.u32);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82BA6AA0;
	sub_825952B8(ctx, base);
loc_82BA6AA0:
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82b0f8d8
	ctx.lr = 0x82BA6AB4;
	sub_82B0F8D8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba6ad0
	if (cr6.lt) goto loc_82BA6AD0;
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BA6AD0;
	sub_825952B8(ctx, base);
loc_82BA6AD0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// beq cr6,0x82ba6b04
	if (cr6.eq) goto loc_82BA6B04;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82b104d0
	ctx.lr = 0x82BA6AF4;
	sub_82B104D0(ctx, base);
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BA6B04;
	sub_825952B8(ctx, base);
loc_82BA6B04:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82b0f8d8
	ctx.lr = 0x82BA6B18;
	sub_82B0F8D8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba6b34
	if (cr6.lt) goto loc_82BA6B34;
	// stw r29,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r29.u32);
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82BA6B34;
	sub_825952B8(ctx, base);
loc_82BA6B34:
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82b0f8d8
	ctx.lr = 0x82BA6B48;
	sub_82B0F8D8(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA6B50;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82BA6B58:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BA6B64;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82BA6B64"))) PPC_WEAK_FUNC(sub_82BA6B64);
PPC_FUNC_IMPL(__imp__sub_82BA6B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA6B68"))) PPC_WEAK_FUNC(sub_82BA6B68);
PPC_FUNC_IMPL(__imp__sub_82BA6B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BA6B70;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d34e50
	ctx.lr = 0x82BA6B7C;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82BA6B80;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba6d80
	if (cr6.eq) goto loc_82BA6D80;
	// bl 0x82d17aa0
	ctx.lr = 0x82BA6B94;
	sub_82D17AA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BA6BA4;
	sub_82D19788(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ba5d38
	ctx.lr = 0x82BA6BAC;
	sub_82BA5D38(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82BA6BB0;
	sub_831156E8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r30,r11,-2540
	ctx.r30.s64 = ctx.r11.s64 + -2540;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r30,-716
	ctx.r5.s64 = ctx.r30.s64 + -716;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x831178a0
	ctx.lr = 0x82BA6BD8;
	sub_831178A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA6BE0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BA6BF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6c0c
	if (cr6.eq) goto loc_82BA6C0C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d32e18
	ctx.lr = 0x82BA6C0C;
	sub_82D32E18(ctx, base);
loc_82BA6C0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA6C14;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA6C2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba6c40
	if (!cr6.eq) goto loc_82BA6C40;
loc_82BA6C34:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BA6C40:
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r31,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ba6c58
	if (cr6.eq) goto loc_82BA6C58;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82BA6C58:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d329f8
	ctx.lr = 0x82BA6C68;
	sub_82D329F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA6C70;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA6C88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6c34
	if (cr6.eq) goto loc_82BA6C34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA6CA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA6CB0;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82BA6CB8;
	sub_82D2F098(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6c34
	if (cr6.eq) goto loc_82BA6C34;
	// bl 0x82d33c10
	ctx.lr = 0x82BA6CC8;
	sub_82D33C10(ctx, base);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// li r27,116
	ctx.r27.s64 = 116;
	// addi r30,r29,100
	ctx.r30.s64 = ctx.r29.s64 + 100;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// divw. r5,r9,r27
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82ba6d50
	if (cr0.eq) goto loc_82BA6D50;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82BA6CEC:
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, xer);
	// bge cr6,0x82ba6d50
	if (!cr6.lt) goto loc_82BA6D50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BA6D00;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6d30
	if (cr6.eq) goto loc_82BA6D30;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82ba6d88
	if (!cr6.gt) goto loc_82BA6D88;
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ba56e0
	ctx.lr = 0x82BA6D30;
	sub_82BA56E0(ctx, base);
loc_82BA6D30:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,116
	ctx.r28.s64 = ctx.r28.s64 + 116;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r5,r9,r27
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// blt cr6,0x82ba6cec
	if (cr6.lt) goto loc_82BA6CEC;
loc_82BA6D50:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82BA6D64;
	sub_82D20F50(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82BA6D68;
	sub_82D26ED8(ctx, base);
	// li r4,38
	ctx.r4.s64 = 38;
	// bl 0x82d26b18
	ctx.lr = 0x82BA6D70;
	sub_82D26B18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x82BA6D7C;
	sub_83102DB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BA6D80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BA6D88:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BA6D94;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82BA6D94"))) PPC_WEAK_FUNC(sub_82BA6D94);
PPC_FUNC_IMPL(__imp__sub_82BA6D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA6D98"))) PPC_WEAK_FUNC(sub_82BA6D98);
PPC_FUNC_IMPL(__imp__sub_82BA6D98) {
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
	// blt cr6,0x82ba6dc0
	if (cr6.lt) goto loc_82BA6DC0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ba6dc4
	goto loc_82BA6DC4;
loc_82BA6DC0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BA6DC4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BA6DE0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba6dfc
	if (cr6.eq) goto loc_82BA6DFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ba5c38
	ctx.lr = 0x82BA6DF4;
	sub_82BA5C38(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba6e00
	if (!cr6.eq) goto loc_82BA6E00;
loc_82BA6DFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BA6E00:
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

__attribute__((alias("__imp__sub_82BA6E18"))) PPC_WEAK_FUNC(sub_82BA6E18);
PPC_FUNC_IMPL(__imp__sub_82BA6E18) {
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
	// li r4,77
	ctx.r4.s64 = 77;
	// bl 0x82d17e20
	ctx.lr = 0x82BA6E2C;
	sub_82D17E20(ctx, base);
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

__attribute__((alias("__imp__sub_82BA6E40"))) PPC_WEAK_FUNC(sub_82BA6E40);
PPC_FUNC_IMPL(__imp__sub_82BA6E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-1392
	ctx.r5.s64 = ctx.r11.s64 + -1392;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA6E50"))) PPC_WEAK_FUNC(sub_82BA6E50);
PPC_FUNC_IMPL(__imp__sub_82BA6E50) {
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
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BA6E70;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BA6E80;
	sub_82D19788(ctx, base);
	// lbz r11,97(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x82ba6e9c
	if (!cr6.eq) goto loc_82BA6E9C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82BA6E9C:
	// bl 0x82d19788
	ctx.lr = 0x82BA6EA0;
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

__attribute__((alias("__imp__sub_82BA6EB4"))) PPC_WEAK_FUNC(sub_82BA6EB4);
PPC_FUNC_IMPL(__imp__sub_82BA6EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA6EB8"))) PPC_WEAK_FUNC(sub_82BA6EB8);
PPC_FUNC_IMPL(__imp__sub_82BA6EB8) {
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
	// addi r9,r11,-1296
	ctx.r9.s64 = ctx.r11.s64 + -1296;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,6012(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6012);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ba6f00
	if (cr6.eq) goto loc_82BA6F00;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BA6F00;
	sub_825952B8(ctx, base);
loc_82BA6F00:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// stw r11,6012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6012, ctx.r11.u32);
	// stw r11,6016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6016, ctx.r11.u32);
	// stw r11,6020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6020, ctx.r11.u32);
	// bl 0x83102db0
	ctx.lr = 0x82BA6F18;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82BA6F20;
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

__attribute__((alias("__imp__sub_82BA6F34"))) PPC_WEAK_FUNC(sub_82BA6F34);
PPC_FUNC_IMPL(__imp__sub_82BA6F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA6F38"))) PPC_WEAK_FUNC(sub_82BA6F38);
PPC_FUNC_IMPL(__imp__sub_82BA6F38) {
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
	// bl 0x82ba6eb8
	ctx.lr = 0x82BA6F58;
	sub_82BA6EB8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba6f70
	if (cr6.eq) goto loc_82BA6F70;
	// bl 0x82416268
	ctx.lr = 0x82BA6F6C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BA6F70:
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

__attribute__((alias("__imp__sub_82BA6F88"))) PPC_WEAK_FUNC(sub_82BA6F88);
PPC_FUNC_IMPL(__imp__sub_82BA6F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BA6F90;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BA6F9C;
	sub_831156E8(ctx, base);
	// lbz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba7048
	if (!cr6.eq) goto loc_82BA7048;
	// lwz r11,6028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6028);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82ba7048
	if (!cr6.eq) goto loc_82BA7048;
	// lbz r11,97(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba7048
	if (!cr6.eq) goto loc_82BA7048;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// bl 0x82ad63f0
	ctx.lr = 0x82BA6FDC;
	sub_82AD63F0(ctx, base);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lis r4,260
	ctx.r4.s64 = 17039360;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,58
	ctx.r4.u64 = ctx.r4.u64 | 58;
	// bl 0x82d042a8
	ctx.lr = 0x82BA6FF8;
	sub_82D042A8(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8259cb28
	ctx.lr = 0x82BA7014;
	sub_8259CB28(ctx, base);
	// stb r31,96(r30)
	PPC_STORE_U8(ctx.r30.u32 + 96, ctx.r31.u8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-1400
	ctx.r3.s64 = ctx.r11.s64 + -1400;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bb4e80
	ctx.lr = 0x82BA702C;
	sub_82BB4E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82BA7038;
	sub_83103100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA7040;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x838760e0
	ctx.lr = 0x82BA7048;
	sub_838760E0(ctx, base);
loc_82BA7048:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA7050"))) PPC_WEAK_FUNC(sub_82BA7050);
PPC_FUNC_IMPL(__imp__sub_82BA7050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BA7058;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,6012(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6012);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,6016(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6016);
	// addi r29,r3,6012
	ctx.r29.s64 = ctx.r3.s64 + 6012;
	// lwz r9,6008(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bgt cr6,0x82ba7144
	if (cr6.gt) goto loc_82BA7144;
	// bl 0x82d19a78
	ctx.lr = 0x82BA7084;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,18968
	ctx.r30.s64 = ctx.r11.s64 + 18968;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA70A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba70c8
	if (cr6.eq) goto loc_82BA70C8;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,6008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6008);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// srawi r5,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// bl 0x82d3d968
	ctx.lr = 0x82BA70C8;
	sub_82D3D968(ctx, base);
loc_82BA70C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA70D0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA70E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7144
	if (cr6.eq) goto loc_82BA7144;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1910
	ctx.r4.s64 = ctx.r11.s64 + -1910;
	// bl 0x837b0c10
	ctx.lr = 0x82BA7104;
	sub_837B0C10(ctx, base);
	// lwz r10,6008(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6008);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,288(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 288);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BA7128;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BA713C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA7144;
	sub_8387E8E0(ctx, base);
loc_82BA7144:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA714C"))) PPC_WEAK_FUNC(sub_82BA714C);
PPC_FUNC_IMPL(__imp__sub_82BA714C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA7150"))) PPC_WEAK_FUNC(sub_82BA7150);
PPC_FUNC_IMPL(__imp__sub_82BA7150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82BA7158;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// bl 0x8308e078
	ctx.lr = 0x82BA7174;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82BA718C;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r23,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r23.u8);
	// addi r9,r11,-1296
	ctx.r9.s64 = ctx.r11.s64 + -1296;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r24,r31,100
	ctx.r24.s64 = ctx.r31.s64 + 100;
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ae4800
	ctx.lr = 0x82BA71BC;
	sub_82AE4800(ctx, base);
	// addi r29,r31,1412
	ctx.r29.s64 = ctx.r31.s64 + 1412;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312a038
	ctx.lr = 0x82BA71C8;
	sub_8312A038(ctx, base);
	// stw r28,6008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6008, ctx.r28.u32);
	// stw r28,6012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6012, ctx.r28.u32);
	// addi r30,r31,6012
	ctx.r30.s64 = ctx.r31.s64 + 6012;
	// stw r28,6016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6016, ctx.r28.u32);
	// stw r28,6020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6020, ctx.r28.u32);
	// stw r26,6028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6028, ctx.r26.u32);
	// bl 0x831156e8
	ctx.lr = 0x82BA71E4;
	sub_831156E8(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-1424
	ctx.r28.s64 = ctx.r11.s64 + -1424;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r25,48(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// addi r5,r28,-520
	ctx.r5.s64 = ctx.r28.s64 + -520;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x831178a0
	ctx.lr = 0x82BA720C;
	sub_831178A0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8311c148
	ctx.lr = 0x82BA7218;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ace470
	ctx.lr = 0x82BA7224;
	sub_82ACE470(ctx, base);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r24,r6,18948
	ctx.r24.s64 = ctx.r6.s64 + 18948;
	// lwz r4,18948(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 18948);
	// bl 0x82d20ae0
	ctx.lr = 0x82BA7238;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82BA7244;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// bl 0x82d23390
	ctx.lr = 0x82BA7254;
	sub_82D23390(ctx, base);
	// clrlwi r5,r23,24
	ctx.r5.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ba7270
	if (cr6.eq) goto loc_82BA7270;
	// addi r11,r26,-2
	ctx.r11.s64 = ctx.r26.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82ba727c
	goto loc_82BA727C;
loc_82BA7270:
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,1613
	ctx.r10.u64 = ctx.r11.u64 | 1613;
	// lbzx r11,r25,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
loc_82BA727C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addis r3,r25,240
	ctx.r3.s64 = ctx.r25.s64 + 15728640;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r3,-3492
	ctx.r3.s64 = ctx.r3.s64 + -3492;
	// beq cr6,0x82ba7318
	if (cr6.eq) goto loc_82BA7318;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83129fd8
	ctx.lr = 0x82BA7298;
	sub_83129FD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ae4338
	ctx.lr = 0x82BA72A4;
	sub_82AE4338(ctx, base);
	// addi r3,r28,-136
	ctx.r3.s64 = ctx.r28.s64 + -136;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cc1a28
	ctx.lr = 0x82BA72B8;
	sub_82CC1A28(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BA72CC;
	sub_835977D8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23788
	ctx.lr = 0x82BA72D8;
	sub_82D23788(ctx, base);
	// addi r3,r28,-112
	ctx.r3.s64 = ctx.r28.s64 + -112;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cbf6a8
	ctx.lr = 0x82BA72EC;
	sub_82CBF6A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BA7300;
	sub_835977D8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23788
	ctx.lr = 0x82BA730C;
	sub_82D23788(ctx, base);
	// addi r3,r28,-92
	ctx.r3.s64 = ctx.r28.s64 + -92;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x82ba73d0
	goto loc_82BA73D0;
loc_82BA7318:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83129fd8
	ctx.lr = 0x82BA7320;
	sub_83129FD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ae4338
	ctx.lr = 0x82BA732C;
	sub_82AE4338(ctx, base);
	// addi r3,r28,-68
	ctx.r3.s64 = ctx.r28.s64 + -68;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cbea08
	ctx.lr = 0x82BA7340;
	sub_82CBEA08(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BA7354;
	sub_835977D8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23788
	ctx.lr = 0x82BA7360;
	sub_82D23788(ctx, base);
	// addi r3,r28,-44
	ctx.r3.s64 = ctx.r28.s64 + -44;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cc1a28
	ctx.lr = 0x82BA7374;
	sub_82CC1A28(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BA7388;
	sub_835977D8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23788
	ctx.lr = 0x82BA7394;
	sub_82D23788(ctx, base);
	// addi r3,r28,-20
	ctx.r3.s64 = ctx.r28.s64 + -20;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cbf6a8
	ctx.lr = 0x82BA73A8;
	sub_82CBF6A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BA73BC;
	sub_835977D8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23788
	ctx.lr = 0x82BA73C8;
	sub_82D23788(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_82BA73D0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cbe930
	ctx.lr = 0x82BA73DC;
	sub_82CBE930(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BA73F0;
	sub_835977D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23788
	ctx.lr = 0x82BA73FC;
	sub_82D23788(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82a673c0
	ctx.lr = 0x82BA7404;
	sub_82A673C0(ctx, base);
	// bl 0x82d26640
	ctx.lr = 0x82BA7408;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82BA740C;
	sub_82D25AB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA7418"))) PPC_WEAK_FUNC(sub_82BA7418);
PPC_FUNC_IMPL(__imp__sub_82BA7418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BA7420;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d34e50
	ctx.lr = 0x82BA742C;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82BA7430;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba7448
	if (!cr6.eq) goto loc_82BA7448;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BA7448:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ba6e50
	ctx.lr = 0x82BA7450;
	sub_82BA6E50(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82BA7454;
	sub_831156E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA745C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,18964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18964);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BA7478;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba74b0
	if (cr6.eq) goto loc_82BA74B0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1941
	ctx.r4.s64 = ctx.r11.s64 + -1941;
	// bl 0x837b0c10
	ctx.lr = 0x82BA7494;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,100(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d334b0
	ctx.lr = 0x82BA74A8;
	sub_82D334B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA74B0;
	sub_8387E8E0(ctx, base);
loc_82BA74B0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ba7050
	ctx.lr = 0x82BA74B8;
	sub_82BA7050(ctx, base);
	// lwz r11,6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6012);
	// lwz r10,6016(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6016);
	// addi r29,r28,6012
	ctx.r29.s64 = ctx.r28.s64 + 6012;
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ba752c
	if (cr0.eq) goto loc_82BA752C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82BA74D8:
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ba750c
	if (cr6.eq) goto loc_82BA750C;
	// lwz r10,6008(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6008);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ba750c
	if (cr6.eq) goto loc_82BA750C;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BA74F8;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba750c
	if (cr6.eq) goto loc_82BA750C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BA750C;
	sub_82D2AEC8(ctx, base);
loc_82BA750C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ba74d8
	if (cr6.lt) goto loc_82BA74D8;
loc_82BA752C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83102db0
	ctx.lr = 0x82BA7538;
	sub_83102DB0(ctx, base);
	// lbz r11,97(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba7550
	if (!cr6.eq) goto loc_82BA7550;
	// li r4,77
	ctx.r4.s64 = 77;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82BA7550;
	sub_82D17DA0(ctx, base);
loc_82BA7550:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba7568
	if (cr6.eq) goto loc_82BA7568;
	// li r3,331
	ctx.r3.s64 = 331;
	// bl 0x82d84728
	ctx.lr = 0x82BA7568;
	sub_82D84728(ctx, base);
loc_82BA7568:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82BA7574;
	sub_82D198D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA7580"))) PPC_WEAK_FUNC(sub_82BA7580);
PPC_FUNC_IMPL(__imp__sub_82BA7580) {
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
	// lwz r11,6012(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6012);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,6016(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6016);
	// addi r31,r3,6012
	ctx.r31.s64 = ctx.r3.s64 + 6012;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ba7624
	if (cr6.eq) goto loc_82BA7624;
	// lwz r11,6008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BA75C0;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba75d4
	if (cr6.eq) goto loc_82BA75D4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BA75D4;
	sub_82D2AEC8(ctx, base);
loc_82BA75D4:
	// lwz r11,6008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6008);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba75f0
	if (!cr6.eq) goto loc_82BA75F0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
loc_82BA75F0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,6008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6008, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BA7608;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba761c
	if (cr6.eq) goto loc_82BA761C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82BA761C;
	sub_82D2AEC8(ctx, base);
loc_82BA761C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ba7050
	ctx.lr = 0x82BA7624;
	sub_82BA7050(ctx, base);
loc_82BA7624:
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

__attribute__((alias("__imp__sub_82BA763C"))) PPC_WEAK_FUNC(sub_82BA763C);
PPC_FUNC_IMPL(__imp__sub_82BA763C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA7640"))) PPC_WEAK_FUNC(sub_82BA7640);
PPC_FUNC_IMPL(__imp__sub_82BA7640) {
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
	// lwz r11,6012(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6012);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,6016(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6016);
	// addi r30,r3,6012
	ctx.r30.s64 = ctx.r3.s64 + 6012;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ba76f0
	if (cr6.eq) goto loc_82BA76F0;
	// lwz r11,6008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6008);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BA7680;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7694
	if (cr6.eq) goto loc_82BA7694;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BA7694;
	sub_82D2AEC8(ctx, base);
loc_82BA7694:
	// lwz r11,6008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6008);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6008, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x82ba76c0
	if (cr6.lt) goto loc_82BA76C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6008, ctx.r11.u32);
loc_82BA76C0:
	// lwz r11,6008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6008);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BA76D4;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba76e8
	if (cr6.eq) goto loc_82BA76E8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82BA76E8;
	sub_82D2AEC8(ctx, base);
loc_82BA76E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba7050
	ctx.lr = 0x82BA76F0;
	sub_82BA7050(ctx, base);
loc_82BA76F0:
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

__attribute__((alias("__imp__sub_82BA7708"))) PPC_WEAK_FUNC(sub_82BA7708);
PPC_FUNC_IMPL(__imp__sub_82BA7708) {
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
	// blt cr6,0x82ba7730
	if (cr6.lt) goto loc_82BA7730;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ba7734
	goto loc_82BA7734;
loc_82BA7730:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BA7734:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,6032
	ctx.r4.s64 = 6032;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BA7750;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7774
	if (cr6.eq) goto loc_82BA7774;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ba7150
	ctx.lr = 0x82BA776C;
	sub_82BA7150(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba7778
	if (!cr6.eq) goto loc_82BA7778;
loc_82BA7774:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BA7778:
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

__attribute__((alias("__imp__sub_82BA7790"))) PPC_WEAK_FUNC(sub_82BA7790);
PPC_FUNC_IMPL(__imp__sub_82BA7790) {
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
	// blt cr6,0x82ba77b8
	if (cr6.lt) goto loc_82BA77B8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ba77bc
	goto loc_82BA77BC;
loc_82BA77B8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BA77BC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,6032
	ctx.r4.s64 = 6032;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BA77D8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba77fc
	if (cr6.eq) goto loc_82BA77FC;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ba7150
	ctx.lr = 0x82BA77F4;
	sub_82BA7150(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba7800
	if (!cr6.eq) goto loc_82BA7800;
loc_82BA77FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BA7800:
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

__attribute__((alias("__imp__sub_82BA7818"))) PPC_WEAK_FUNC(sub_82BA7818);
PPC_FUNC_IMPL(__imp__sub_82BA7818) {
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
	// blt cr6,0x82ba7840
	if (cr6.lt) goto loc_82BA7840;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ba7844
	goto loc_82BA7844;
loc_82BA7840:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BA7844:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,6032
	ctx.r4.s64 = 6032;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BA7860;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7884
	if (cr6.eq) goto loc_82BA7884;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ba7150
	ctx.lr = 0x82BA787C;
	sub_82BA7150(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba7888
	if (!cr6.eq) goto loc_82BA7888;
loc_82BA7884:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BA7888:
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

__attribute__((alias("__imp__sub_82BA78A0"))) PPC_WEAK_FUNC(sub_82BA78A0);
PPC_FUNC_IMPL(__imp__sub_82BA78A0) {
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
	// blt cr6,0x82ba78c8
	if (cr6.lt) goto loc_82BA78C8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ba78cc
	goto loc_82BA78CC;
loc_82BA78C8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BA78CC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,6032
	ctx.r4.s64 = 6032;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BA78E8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba790c
	if (cr6.eq) goto loc_82BA790C;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ba7150
	ctx.lr = 0x82BA7904;
	sub_82BA7150(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba7910
	if (!cr6.eq) goto loc_82BA7910;
loc_82BA790C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BA7910:
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

__attribute__((alias("__imp__sub_82BA7928"))) PPC_WEAK_FUNC(sub_82BA7928);
PPC_FUNC_IMPL(__imp__sub_82BA7928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BA7930;
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
	ctx.lr = 0x82BA7948;
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
	ctx.lr = 0x82BA7960;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r28,96(r30)
	PPC_STORE_U8(ctx.r30.u32 + 96, ctx.r28.u8);
	// addi r9,r11,-408
	ctx.r9.s64 = ctx.r11.s64 + -408;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r7,-696
	ctx.r31.s64 = ctx.r7.s64 + -696;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// bl 0x82d20ae0
	ctx.lr = 0x82BA7990;
	sub_82D20AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82BA79A0;
	sub_82D23390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA79AC"))) PPC_WEAK_FUNC(sub_82BA79AC);
PPC_FUNC_IMPL(__imp__sub_82BA79AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA79B0"))) PPC_WEAK_FUNC(sub_82BA79B0);
PPC_FUNC_IMPL(__imp__sub_82BA79B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BA79B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba7abc
	if (cr6.eq) goto loc_82BA7ABC;
	// bl 0x831156e8
	ctx.lr = 0x82BA79D0;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r29,r11,221
	ctx.r29.s64 = ctx.r11.s64 + 14483456;
	// addi r29,r29,-26512
	ctx.r29.s64 = ctx.r29.s64 + -26512;
	// lwz r11,1288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1288);
	// cmplwi cr6,r11,27
	cr6.compare<uint32_t>(ctx.r11.u32, 27, xer);
	// bgt cr6,0x82ba7a1c
	if (cr6.gt) goto loc_82BA7A1C;
	// beq cr6,0x82ba7a38
	if (cr6.eq) goto loc_82BA7A38;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82ba7a78
	if (cr6.gt) goto loc_82BA7A78;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ba7a38
	if (cr6.eq) goto loc_82BA7A38;
	// bdz 0x82ba7a38
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BA7A38;
	// bdz 0x82ba7a78
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BA7A78;
	// bdz 0x82ba7a38
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BA7A38;
	// bdz 0x82ba7a38
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BA7A38;
	// bdz 0x82ba7a78
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BA7A78;
	// b 0x82ba7a38
	goto loc_82BA7A38;
loc_82BA7A1C:
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bgt cr6,0x82ba7a70
	if (cr6.gt) goto loc_82BA7A70;
	// beq cr6,0x82ba7a38
	if (cr6.eq) goto loc_82BA7A38;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// blt cr6,0x82ba7a78
	if (cr6.lt) goto loc_82BA7A78;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bgt cr6,0x82ba7a78
	if (cr6.gt) goto loc_82BA7A78;
loc_82BA7A38:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-508
	ctx.r31.s64 = ctx.r11.s64 + -508;
	// addi r30,r31,-40
	ctx.r30.s64 = ctx.r31.s64 + -40;
loc_82BA7A44:
	// bl 0x830ff290
	ctx.lr = 0x82BA7A48;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82BA7A4C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82ba7a88
	if (!cr6.eq) goto loc_82BA7A88;
	// addi r30,r31,-24
	ctx.r30.s64 = ctx.r31.s64 + -24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BA7A68;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BA7A70:
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x82ba7a38
	if (cr6.eq) goto loc_82BA7A38;
loc_82BA7A78:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-508
	ctx.r31.s64 = ctx.r11.s64 + -508;
	// addi r30,r31,-56
	ctx.r30.s64 = ctx.r31.s64 + -56;
	// b 0x82ba7a44
	goto loc_82BA7A44;
loc_82BA7A88:
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bne cr6,0x82ba7aa4
	if (!cr6.eq) goto loc_82BA7AA4;
	// lwz r11,1288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1288);
	// addi r30,r31,-16
	ctx.r30.s64 = ctx.r31.s64 + -16;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, xer);
	// beq cr6,0x82ba7aa4
	if (cr6.eq) goto loc_82BA7AA4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82BA7AA4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BA7AB4;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BA7ABC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA7AD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19858
	ctx.lr = 0x82BA7ADC;
	sub_82D19858(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA7AE4"))) PPC_WEAK_FUNC(sub_82BA7AE4);
PPC_FUNC_IMPL(__imp__sub_82BA7AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA7AE8"))) PPC_WEAK_FUNC(sub_82BA7AE8);
PPC_FUNC_IMPL(__imp__sub_82BA7AE8) {
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
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba7b34
	if (cr6.eq) goto loc_82BA7B34;
	// bl 0x830ff290
	ctx.lr = 0x82BA7B0C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82BA7B10;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82ba7b28
	if (cr6.eq) goto loc_82BA7B28;
	// bl 0x830ff290
	ctx.lr = 0x82BA7B1C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82BA7B20;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82ba7b34
	if (!cr6.eq) goto loc_82BA7B34;
loc_82BA7B28:
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82BA7B34;
	sub_82D17DA0(ctx, base);
loc_82BA7B34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA7B48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82BA7B54;
	sub_82D19858(ctx, base);
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

__attribute__((alias("__imp__sub_82BA7B68"))) PPC_WEAK_FUNC(sub_82BA7B68);
PPC_FUNC_IMPL(__imp__sub_82BA7B68) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ba7bd4
	if (!cr6.eq) goto loc_82BA7BD4;
	// bl 0x82d19a78
	ctx.lr = 0x82BA7B90;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BA7B98;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7bd4
	if (cr6.eq) goto loc_82BA7BD4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82ba7bd4
	if (!cr6.eq) goto loc_82BA7BD4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82BA7BB0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7bd4
	if (cr6.eq) goto loc_82BA7BD4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82ba7bd0
	if (cr6.eq) goto loc_82BA7BD0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BA7BD0:
	// bl 0x82d2b608
	ctx.lr = 0x82BA7BD4;
	sub_82D2B608(ctx, base);
loc_82BA7BD4:
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

__attribute__((alias("__imp__sub_82BA7BEC"))) PPC_WEAK_FUNC(sub_82BA7BEC);
PPC_FUNC_IMPL(__imp__sub_82BA7BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA7BF0"))) PPC_WEAK_FUNC(sub_82BA7BF0);
PPC_FUNC_IMPL(__imp__sub_82BA7BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BA7BF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BA7C04;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7cc0
	if (cr6.eq) goto loc_82BA7CC0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA7C14;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BA7C1C;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7cc0
	if (cr6.eq) goto loc_82BA7CC0;
	// bl 0x831156e8
	ctx.lr = 0x82BA7C2C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r30,r10,221
	ctx.r30.s64 = ctx.r10.s64 + 14483456;
	// addi r30,r30,-26512
	ctx.r30.s64 = ctx.r30.s64 + -26512;
	// bl 0x82d33db0
	ctx.lr = 0x82BA7C48;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7cc0
	if (cr6.eq) goto loc_82BA7CC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82BA7C60;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7cc0
	if (cr6.eq) goto loc_82BA7CC0;
	// bl 0x83a970c8
	ctx.lr = 0x82BA7C6C;
	sub_83A970C8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,1095(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1095, ctx.r10.u8);
	// bl 0x82d33db0
	ctx.lr = 0x82BA7C84;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7cc0
	if (cr6.eq) goto loc_82BA7CC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82BA7C9C;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7cc0
	if (cr6.eq) goto loc_82BA7CC0;
	// bl 0x83a970c8
	ctx.lr = 0x82BA7CA8;
	sub_83A970C8(ctx, base);
	// stw r3,1096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1096, ctx.r3.u32);
	// lbz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba7cc0
	if (cr6.eq) goto loc_82BA7CC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17aa0
	ctx.lr = 0x82BA7CC0;
	sub_82D17AA0(ctx, base);
loc_82BA7CC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA7CCC"))) PPC_WEAK_FUNC(sub_82BA7CCC);
PPC_FUNC_IMPL(__imp__sub_82BA7CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA7CD0"))) PPC_WEAK_FUNC(sub_82BA7CD0);
PPC_FUNC_IMPL(__imp__sub_82BA7CD0) {
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
	// addi r9,r11,-408
	ctx.r9.s64 = ctx.r11.s64 + -408;
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
	ctx.lr = 0x82BA7D08;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ba7d20
	if (cr6.eq) goto loc_82BA7D20;
	// bl 0x82416268
	ctx.lr = 0x82BA7D1C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BA7D20:
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

__attribute__((alias("__imp__sub_82BA7D38"))) PPC_WEAK_FUNC(sub_82BA7D38);
PPC_FUNC_IMPL(__imp__sub_82BA7D38) {
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
	// blt cr6,0x82ba7d60
	if (cr6.lt) goto loc_82BA7D60;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ba7d64
	goto loc_82BA7D64;
loc_82BA7D60:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BA7D64:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BA7D80;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7d9c
	if (cr6.eq) goto loc_82BA7D9C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ba7928
	ctx.lr = 0x82BA7D98;
	sub_82BA7928(ctx, base);
	// b 0x82ba7da0
	goto loc_82BA7DA0;
loc_82BA7D9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BA7DA0:
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

__attribute__((alias("__imp__sub_82BA7DB8"))) PPC_WEAK_FUNC(sub_82BA7DB8);
PPC_FUNC_IMPL(__imp__sub_82BA7DB8) {
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
	// blt cr6,0x82ba7de0
	if (cr6.lt) goto loc_82BA7DE0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ba7de4
	goto loc_82BA7DE4;
loc_82BA7DE0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BA7DE4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BA7E00;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba7e1c
	if (cr6.eq) goto loc_82BA7E1C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ba7928
	ctx.lr = 0x82BA7E18;
	sub_82BA7928(ctx, base);
	// b 0x82ba7e20
	goto loc_82BA7E20;
loc_82BA7E1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BA7E20:
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

__attribute__((alias("__imp__sub_82BA7E38"))) PPC_WEAK_FUNC(sub_82BA7E38);
PPC_FUNC_IMPL(__imp__sub_82BA7E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82BA7E40;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA7E4C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba825c
	if (cr6.eq) goto loc_82BA825C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA7E5C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BA7E64;
	sub_82D33DB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba825c
	if (cr6.eq) goto loc_82BA825C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA7E78;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,-572
	ctx.r29.s64 = ctx.r11.s64 + -572;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-112
	ctx.r4.s64 = ctx.r29.s64 + -112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA7E98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba7ea8
	if (!cr6.eq) goto loc_82BA7EA8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82BA7EA8:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,611
	ctx.r4.u64 = ctx.r4.u64 | 611;
	// bl 0x82d303d0
	ctx.lr = 0x82BA7EB4;
	sub_82D303D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82BA7EC4;
	sub_82D1ED60(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA7ECC;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-100
	ctx.r4.s64 = ctx.r29.s64 + -100;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA7EE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA7EEC;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-84
	ctx.r4.s64 = ctx.r29.s64 + -84;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BA7F04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BA7F0C;
	sub_82D19A78(ctx, base);
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
	// bl 0x82d2f098
	ctx.lr = 0x82BA7F14;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba825c
	if (cr6.eq) goto loc_82BA825C;
	// lbz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 96);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba7f54
	if (cr6.eq) goto loc_82BA7F54;
	// bl 0x82d19a78
	ctx.lr = 0x82BA7F34;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-56
	ctx.r4.s64 = ctx.r29.s64 + -56;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA7F4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ba7f88
	goto loc_82BA7F88;
loc_82BA7F54:
	// bl 0x82d19a78
	ctx.lr = 0x82BA7F58;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-44
	ctx.r4.s64 = ctx.r29.s64 + -44;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA7F70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BA7F84;
	sub_82D2B608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BA7F88:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BA7F94;
	sub_82D2AEC8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82BA7F98;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r24,r10,221
	ctx.r24.s64 = ctx.r10.s64 + 14483456;
	// addi r24,r24,-26512
	ctx.r24.s64 = ctx.r24.s64 + -26512;
	// bl 0x82d33db0
	ctx.lr = 0x82BA7FB4;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba825c
	if (cr6.eq) goto loc_82BA825C;
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82BA7FD4;
	sub_82D2D510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba825c
	if (cr6.eq) goto loc_82BA825C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA7FFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,108
	ctx.r9.s64 = 7077888;
	// lis r8,108
	ctx.r8.s64 = 7077888;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ori r7,r9,14
	ctx.r7.u64 = ctx.r9.u64 | 14;
	// ori r6,r8,15
	ctx.r6.u64 = ctx.r8.u64 | 15;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_82BA8020:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82BA802C;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ba8020
	if (!cr0.eq) goto loc_82BA8020;
	// lbz r11,1095(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1095);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba804c
	if (!cr6.eq) goto loc_82BA804C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82BA804C:
	// bl 0x82d3b298
	ctx.lr = 0x82BA8050;
	sub_82D3B298(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA8068;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba825c
	if (cr6.eq) goto loc_82BA825C;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,610
	ctx.r4.u64 = ctx.r4.u64 | 610;
	// bl 0x82d29598
	ctx.lr = 0x82BA807C;
	sub_82D29598(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BA8088;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba825c
	if (cr6.eq) goto loc_82BA825C;
	// addi r26,r3,100
	ctx.r26.s64 = ctx.r3.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82BA80A8;
	sub_82D2D510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba825c
	if (cr6.eq) goto loc_82BA825C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA80D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,14
	ctx.r9.s64 = 917504;
	// lis r8,930
	ctx.r8.s64 = 60948480;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// ori r6,r8,122
	ctx.r6.u64 = ctx.r8.u64 | 122;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_82BA80F4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82BA8100;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ba80f4
	if (!cr0.eq) goto loc_82BA80F4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1096(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1096);
	// bl 0x82d3b298
	ctx.lr = 0x82BA8114;
	sub_82D3B298(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BA812C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ba825c
	if (cr6.eq) goto loc_82BA825C;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,612
	ctx.r4.u64 = ctx.r4.u64 | 612;
	// bl 0x82d29598
	ctx.lr = 0x82BA8140;
	sub_82D29598(ctx, base);
	// lbz r11,1095(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1095);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba8160
	if (!cr6.eq) goto loc_82BA8160;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BA8160;
	sub_82D2B608(ctx, base);
loc_82BA8160:
	// lis r10,269
	ctx.r10.s64 = 17629184;
	// lis r9,269
	ctx.r9.s64 = 17629184;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ori r8,r10,166
	ctx.r8.u64 = ctx.r10.u64 | 166;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// ori r7,r9,168
	ctx.r7.u64 = ctx.r9.u64 | 168;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// li r28,15
	ctx.r28.s64 = 15;
loc_82BA8198:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x830f6558
	ctx.lr = 0x82BA81B8;
	sub_830F6558(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x838760e0
	ctx.lr = 0x82BA81C0;
	sub_838760E0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x82ba8198
	if (!cr0.eq) goto loc_82BA8198;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82BA81D8;
	sub_82D24C38(ctx, base);
	// lbz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba8234
	if (cr6.eq) goto loc_82BA8234;
	// lis r11,269
	ctx.r11.s64 = 17629184;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ori r10,r11,178
	ctx.r10.u64 = ctx.r11.u64 | 178;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// bl 0x830f6558
	ctx.lr = 0x82BA8214;
	sub_830F6558(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82BA8224;
	sub_82D24C38(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x838760e0
	ctx.lr = 0x82BA822C;
	sub_838760E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82acdc18
	ctx.lr = 0x82BA8234;
	sub_82ACDC18(ctx, base);
loc_82BA8234:
	// lbz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x82ba8250
	if (!cr6.eq) goto loc_82BA8250;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BA8250:
	// bl 0x82d1eac0
	ctx.lr = 0x82BA8254;
	sub_82D1EAC0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82acdc18
	ctx.lr = 0x82BA825C;
	sub_82ACDC18(ctx, base);
loc_82BA825C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA8268"))) PPC_WEAK_FUNC(sub_82BA8268);
PPC_FUNC_IMPL(__imp__sub_82BA8268) {
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
	// bl 0x831156e8
	ctx.lr = 0x82BA8288;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,40316
	ctx.r9.u64 = ctx.r11.u64 | 40316;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82ba82e4
	if (!cr6.eq) goto loc_82BA82E4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8316f620
	ctx.lr = 0x82BA82AC;
	sub_8316F620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba82e4
	if (!cr6.eq) goto loc_82BA82E4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba82cc
	if (cr6.lt) goto loc_82BA82CC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82ba82d0
	goto loc_82BA82D0;
loc_82BA82CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BA82D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82bbc8d0
	ctx.lr = 0x82BA82DC;
	sub_82BBC8D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ba8304
	if (!cr6.eq) goto loc_82BA8304;
loc_82BA82E4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba82f8
	if (cr6.lt) goto loc_82BA82F8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82ba82fc
	goto loc_82BA82FC;
loc_82BA82F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BA82FC:
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82cc3718
	ctx.lr = 0x82BA8304;
	sub_82CC3718(ctx, base);
loc_82BA8304:
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

__attribute__((alias("__imp__sub_82BA831C"))) PPC_WEAK_FUNC(sub_82BA831C);
PPC_FUNC_IMPL(__imp__sub_82BA831C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA8320"))) PPC_WEAK_FUNC(sub_82BA8320);
PPC_FUNC_IMPL(__imp__sub_82BA8320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BA8328;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BA8338;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,194
	ctx.r10.s64 = 12713984;
	// ori r9,r11,40316
	ctx.r9.u64 = ctx.r11.u64 | 40316;
	// ori r8,r10,52144
	ctx.r8.u64 = ctx.r10.u64 | 52144;
	// lwzx r3,r28,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lhzx r4,r28,r8
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r8.u32);
	// bl 0x831578f0
	ctx.lr = 0x82BA8358;
	sub_831578F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82BA8368;
	sub_8311C338(ctx, base);
	// lwz r7,92(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// beq cr6,0x82ba83a8
	if (cr6.eq) goto loc_82BA83A8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba8394
	if (cr6.lt) goto loc_82BA8394;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82cc4850
	ctx.lr = 0x82BA838C;
	sub_82CC4850(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BA8394:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82cc4850
	ctx.lr = 0x82BA83A0;
	sub_82CC4850(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BA83A8:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82ba8430
	if (cr6.eq) goto loc_82BA8430;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x82ba8430
	if (cr6.eq) goto loc_82BA8430;
	// cmplwi cr6,r11,76
	cr6.compare<uint32_t>(ctx.r11.u32, 76, xer);
	// beq cr6,0x82ba8430
	if (cr6.eq) goto loc_82BA8430;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x82ba8430
	if (cr6.eq) goto loc_82BA8430;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// beq cr6,0x82ba8430
	if (cr6.eq) goto loc_82BA8430;
	// cmplwi cr6,r11,69
	cr6.compare<uint32_t>(ctx.r11.u32, 69, xer);
	// beq cr6,0x82ba8430
	if (cr6.eq) goto loc_82BA8430;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// beq cr6,0x82ba8430
	if (cr6.eq) goto loc_82BA8430;
	// cmplwi cr6,r11,71
	cr6.compare<uint32_t>(ctx.r11.u32, 71, xer);
	// beq cr6,0x82ba8430
	if (cr6.eq) goto loc_82BA8430;
	// cmplwi cr6,r11,72
	cr6.compare<uint32_t>(ctx.r11.u32, 72, xer);
	// beq cr6,0x82ba8430
	if (cr6.eq) goto loc_82BA8430;
	// cmplwi cr6,r11,73
	cr6.compare<uint32_t>(ctx.r11.u32, 73, xer);
	// beq cr6,0x82ba8430
	if (cr6.eq) goto loc_82BA8430;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba841c
	if (cr6.lt) goto loc_82BA841C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82cc41b0
	ctx.lr = 0x82BA8414;
	sub_82CC41B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BA841C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82cc41b0
	ctx.lr = 0x82BA8428;
	sub_82CC41B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BA8430:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba8454
	if (cr6.lt) goto loc_82BA8454;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82bb5698
	ctx.lr = 0x82BA844C;
	sub_82BB5698(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BA8454:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82bb5698
	ctx.lr = 0x82BA8464;
	sub_82BB5698(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA846C"))) PPC_WEAK_FUNC(sub_82BA846C);
PPC_FUNC_IMPL(__imp__sub_82BA846C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA8470"))) PPC_WEAK_FUNC(sub_82BA8470);
PPC_FUNC_IMPL(__imp__sub_82BA8470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba8480
	if (cr6.lt) goto loc_82BA8480;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82BA8480:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82cc4f80
	sub_82CC4F80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA8488"))) PPC_WEAK_FUNC(sub_82BA8488);
PPC_FUNC_IMPL(__imp__sub_82BA8488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba8498
	if (cr6.lt) goto loc_82BA8498;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82BA8498:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82c2eea0
	sub_82C2EEA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA84A0"))) PPC_WEAK_FUNC(sub_82BA84A0);
PPC_FUNC_IMPL(__imp__sub_82BA84A0) {
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
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r7,29
	ctx.r7.s64 = 29;
	// addi r6,r11,1784
	ctx.r6.s64 = ctx.r11.s64 + 1784;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827a8810
	ctx.lr = 0x82BA84D4;
	sub_827A8810(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ba8500
	if (!cr6.eq) goto loc_82BA8500;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba84f4
	if (cr6.lt) goto loc_82BA84F4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ba8518
	goto loc_82BA8518;
loc_82BA84F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ba8518
	goto loc_82BA8518;
loc_82BA8500:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba8510
	if (cr6.lt) goto loc_82BA8510;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82ba8514
	goto loc_82BA8514;
loc_82BA8510:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BA8514:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82BA8518:
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82cc5ac8
	ctx.lr = 0x82BA8524;
	sub_82CC5AC8(ctx, base);
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

__attribute__((alias("__imp__sub_82BA853C"))) PPC_WEAK_FUNC(sub_82BA853C);
PPC_FUNC_IMPL(__imp__sub_82BA853C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA8540"))) PPC_WEAK_FUNC(sub_82BA8540);
PPC_FUNC_IMPL(__imp__sub_82BA8540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BA8548;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BA8558;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,194
	ctx.r10.s64 = 12713984;
	// ori r9,r11,40316
	ctx.r9.u64 = ctx.r11.u64 | 40316;
	// ori r8,r10,52144
	ctx.r8.u64 = ctx.r10.u64 | 52144;
	// lwzx r3,r29,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhzx r4,r29,r8
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r8.u32);
	// bl 0x831578f0
	ctx.lr = 0x82BA857C;
	sub_831578F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8311c338
	ctx.lr = 0x82BA858C;
	sub_8311C338(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82ba88fc
	if (cr6.gt) goto loc_82BA88FC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ba85fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BA85FC;
	// bdzf 4*cr6+eq,0x82ba86b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BA86B4;
	// bdzf 4*cr6+eq,0x82ba88c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BA88C4;
	// bne cr6,0x82ba85b8
	if (!cr6.eq) goto loc_82BA85B8;
loc_82BA85B8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba85e0
	if (cr6.lt) goto loc_82BA85E0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82bba140
	ctx.lr = 0x82BA85D4;
	sub_82BBA140(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BA85E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82bba140
	ctx.lr = 0x82BA85F0;
	sub_82BBA140(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BA85FC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82ba8624
	if (cr6.gt) goto loc_82BA8624;
	// beq cr6,0x82ba8670
	if (cr6.eq) goto loc_82BA8670;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82ba862c
	if (cr6.lt) goto loc_82BA862C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x82ba8670
	if (!cr6.gt) goto loc_82BA8670;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// b 0x82ba8628
	goto loc_82BA8628;
loc_82BA8624:
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
loc_82BA8628:
	// beq cr6,0x82ba8670
	if (cr6.eq) goto loc_82BA8670;
loc_82BA862C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba8654
	if (cr6.lt) goto loc_82BA8654;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82bbcf68
	ctx.lr = 0x82BA8648;
	sub_82BBCF68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BA8654:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82bbcf68
	ctx.lr = 0x82BA8664;
	sub_82BBCF68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BA8670:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba8698
	if (cr6.lt) goto loc_82BA8698;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82bbc8d0
	ctx.lr = 0x82BA868C;
	sub_82BBC8D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BA8698:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82bbc8d0
	ctx.lr = 0x82BA86A8;
	sub_82BBC8D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BA86B4:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83197d10
	ctx.lr = 0x82BA86D0;
	sub_83197D10(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r9,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ba872c
	if (cr6.eq) goto loc_82BA872C;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// ble cr6,0x82ba871c
	if (!cr6.gt) goto loc_82BA871C;
loc_82BA86F8:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r6,r28,16
	ctx.r6.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x82ba8728
	if (cr6.eq) goto loc_82BA8728;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ba86f8
	if (cr6.gt) goto loc_82BA86F8;
	// b 0x82ba872c
	goto loc_82BA872C;
loc_82BA871C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BA8728;
	sub_831CC188(ctx, base);
loc_82BA8728:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82BA872C:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba8774
	if (cr6.eq) goto loc_82BA8774;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba874c
	if (cr6.lt) goto loc_82BA874C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82ba8750
	goto loc_82BA8750;
loc_82BA874C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BA8750:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82BA8758;
	sub_837B0C10(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ba8320
	ctx.lr = 0x82BA8764;
	sub_82BA8320(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA8770;
	sub_8387E8E0(ctx, base);
	// b 0x82ba889c
	goto loc_82BA889C;
loc_82BA8774:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82ba8878
	if (cr6.eq) goto loc_82BA8878;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82ba8878
	if (cr6.eq) goto loc_82BA8878;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82ba8878
	if (cr6.eq) goto loc_82BA8878;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x82ba8878
	if (cr6.eq) goto loc_82BA8878;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82ba8878
	if (cr6.eq) goto loc_82BA8878;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x82ba8878
	if (cr6.eq) goto loc_82BA8878;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x82ba8878
	if (cr6.eq) goto loc_82BA8878;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83197d10
	ctx.lr = 0x82BA87CC;
	sub_83197D10(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ba87ec
	if (!cr0.eq) goto loc_82BA87EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BA87EC;
	sub_831CC188(ctx, base);
loc_82BA87EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8311c338
	ctx.lr = 0x82BA87F8;
	sub_8311C338(ctx, base);
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// rlwinm r10,r11,0,16,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE00;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r10,16384
	cr6.compare<uint32_t>(ctx.r10.u32, 16384, xer);
	// ble cr6,0x82ba884c
	if (!cr6.gt) goto loc_82BA884C;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba8830
	if (cr6.lt) goto loc_82BA8830;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82ccaa18
	ctx.lr = 0x82BA8820;
	sub_82CCAA18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82BA882C;
	sub_82F73D60(ctx, base);
	// b 0x82ba889c
	goto loc_82BA889C;
loc_82BA8830:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82ccaa18
	ctx.lr = 0x82BA883C;
	sub_82CCAA18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82BA8848;
	sub_82F73D60(ctx, base);
	// b 0x82ba889c
	goto loc_82BA889C;
loc_82BA884C:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba885c
	if (cr6.lt) goto loc_82BA885C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82ba8860
	goto loc_82BA8860;
loc_82BA885C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BA8860:
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82cc5ed0
	ctx.lr = 0x82BA8868;
	sub_82CC5ED0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82BA8874;
	sub_82F73D60(ctx, base);
	// b 0x82ba889c
	goto loc_82BA889C;
loc_82BA8878:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba888c
	if (cr6.lt) goto loc_82BA888C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82ba8890
	goto loc_82BA8890;
loc_82BA888C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BA8890:
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82cc5ed0
	ctx.lr = 0x82BA8898;
	sub_82CC5ED0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82BA889C:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ba88fc
	if (cr6.eq) goto loc_82BA88FC;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BA88B8;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BA88C4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba88d8
	if (cr6.lt) goto loc_82BA88D8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82ba88dc
	goto loc_82BA88DC;
loc_82BA88D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BA88DC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82BA88E4;
	sub_837B0C10(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ba8320
	ctx.lr = 0x82BA88F0;
	sub_82BA8320(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82BA88FC;
	sub_8387E8E0(ctx, base);
loc_82BA88FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA8908"))) PPC_WEAK_FUNC(sub_82BA8908);
PPC_FUNC_IMPL(__imp__sub_82BA8908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BA8910;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BA8920;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r9,r10,40316
	ctx.r9.u64 = ctx.r10.u64 | 40316;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x8316b780
	ctx.lr = 0x82BA8944;
	sub_8316B780(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82ba8a8c
	if (cr6.eq) goto loc_82BA8A8C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82ba8a8c
	if (cr6.eq) goto loc_82BA8A8C;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82ba8a8c
	if (cr6.eq) goto loc_82BA8A8C;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x82ba8a8c
	if (cr6.eq) goto loc_82BA8A8C;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82ba8a8c
	if (cr6.eq) goto loc_82BA8A8C;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x82ba8a8c
	if (cr6.eq) goto loc_82BA8A8C;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x82ba8a8c
	if (cr6.eq) goto loc_82BA8A8C;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// beq cr6,0x82ba8a8c
	if (cr6.eq) goto loc_82BA8A8C;
	// cmplwi cr6,r11,71
	cr6.compare<uint32_t>(ctx.r11.u32, 71, xer);
	// beq cr6,0x82ba8a8c
	if (cr6.eq) goto loc_82BA8A8C;
	// cmplwi cr6,r11,72
	cr6.compare<uint32_t>(ctx.r11.u32, 72, xer);
	// beq cr6,0x82ba8a8c
	if (cr6.eq) goto loc_82BA8A8C;
	// bl 0x83195c48
	ctx.lr = 0x82BA899C;
	sub_83195C48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ba8a8c
	if (!cr6.eq) goto loc_82BA8A8C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x83197d10
	ctx.lr = 0x82BA89C8;
	sub_83197D10(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ba89e8
	if (!cr0.eq) goto loc_82BA89E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BA89E8;
	sub_831CC188(ctx, base);
loc_82BA89E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8311c338
	ctx.lr = 0x82BA89F4;
	sub_8311C338(ctx, base);
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// rlwinm r10,r11,0,16,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE00;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,16384
	cr6.compare<uint32_t>(ctx.r10.u32, 16384, xer);
	// ble cr6,0x82ba8a58
	if (!cr6.gt) goto loc_82BA8A58;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba8a34
	if (cr6.lt) goto loc_82BA8A34;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82ccaa18
	ctx.lr = 0x82BA8A1C;
	sub_82CCAA18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82BA8A28;
	sub_82F73D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BA8A34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82ccaa18
	ctx.lr = 0x82BA8A40;
	sub_82CCAA18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82BA8A4C;
	sub_82F73D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BA8A58:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba8a68
	if (cr6.lt) goto loc_82BA8A68;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82ba8a6c
	goto loc_82BA8A6C;
loc_82BA8A68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BA8A6C:
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82cc5ed0
	ctx.lr = 0x82BA8A74;
	sub_82CC5ED0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82BA8A80;
	sub_82F73D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BA8A8C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ba8aa0
	if (cr6.lt) goto loc_82BA8AA0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82ba8aa4
	goto loc_82BA8AA4;
loc_82BA8AA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82BA8AA4:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
loc_82BA8ABC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ba8abc
	if (!cr6.eq) goto loc_82BA8ABC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BA8AE0;
	sub_8259CC28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cc3898
	ctx.lr = 0x82BA8AEC;
	sub_82CC3898(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ba8b10
	if (cr6.lt) goto loc_82BA8B10;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BA8B10;
	sub_825952B8(ctx, base);
loc_82BA8B10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BA8B1C"))) PPC_WEAK_FUNC(sub_82BA8B1C);
PPC_FUNC_IMPL(__imp__sub_82BA8B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA8B20"))) PPC_WEAK_FUNC(sub_82BA8B20);
PPC_FUNC_IMPL(__imp__sub_82BA8B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,20
	ctx.r9.s64 = 20;
	// addis r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 262144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-23820
	ctx.r10.s64 = ctx.r10.s64 + -23820;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82BA8B34:
	// lwz r9,-24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ba8b44
	if (cr6.eq) goto loc_82BA8B44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82BA8B44:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ba8b54
	if (cr6.eq) goto loc_82BA8B54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82BA8B54:
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ba8b64
	if (cr6.eq) goto loc_82BA8B64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82BA8B64:
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ba8b74
	if (cr6.eq) goto loc_82BA8B74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82BA8B74:
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ba8b84
	if (cr6.eq) goto loc_82BA8B84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82BA8B84:
	// addi r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 + 120;
	// bdnz 0x82ba8b34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BA8B34;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA8B94"))) PPC_WEAK_FUNC(sub_82BA8B94);
PPC_FUNC_IMPL(__imp__sub_82BA8B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BA8B98"))) PPC_WEAK_FUNC(sub_82BA8B98);
PPC_FUNC_IMPL(__imp__sub_82BA8B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BA8BB8"))) PPC_WEAK_FUNC(sub_82BA8BB8);
PPC_FUNC_IMPL(__imp__sub_82BA8BB8) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82ba8cf8
	if (cr6.gt) goto loc_82BA8CF8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ba8ca4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BA8CA4;
	// bdzf 4*cr6+eq,0x82ba8cdc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BA8CDC;
	// bdzf 4*cr6+eq,0x82ba8cf8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BA8CF8;
	// bdzf 4*cr6+eq,0x82ba8cf8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BA8CF8;
	// bne cr6,0x82ba8cc0
	if (!cr6.eq) goto loc_82BA8CC0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8317c3c0
	ctx.lr = 0x82BA8C00;
	sub_8317C3C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba8c3c
	if (cr6.eq) goto loc_82BA8C3C;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8317c2b8
	ctx.lr = 0x82BA8C14;
	sub_8317C2B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba8c3c
	if (cr6.eq) goto loc_82BA8C3C;
loc_82BA8C20:
	// lis r3,29
	ctx.r3.s64 = 1900544;
	// ori r3,r3,272
	ctx.r3.u64 = ctx.r3.u64 | 272;
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
loc_82BA8C3C:
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,19436(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19436);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ba8c6c
	if (!cr6.eq) goto loc_82BA8C6C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ba8c70
	if (cr6.eq) goto loc_82BA8C70;
loc_82BA8C6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BA8C70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ba8c88
	if (cr6.eq) goto loc_82BA8C88;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ba8c20
	if (cr6.eq) goto loc_82BA8C20;
loc_82BA8C88:
	// lis r3,641
	ctx.r3.s64 = 42008576;
	// ori r3,r3,178
	ctx.r3.u64 = ctx.r3.u64 | 178;
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
loc_82BA8CA4:
	// lis r3,29
	ctx.r3.s64 = 1900544;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
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
loc_82BA8CC0:
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,61
	ctx.r3.u64 = ctx.r3.u64 | 61;
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
loc_82BA8CDC:
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,108
	ctx.r3.u64 = ctx.r3.u64 | 108;
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
loc_82BA8CF8:
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

