#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A2CA80"))) PPC_WEAK_FUNC(sub_82A2CA80);
PPC_FUNC_IMPL(__imp__sub_82A2CA80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A2CA88;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,24
	ctx.r25.s64 = 24;
	// addi r10,r11,-22844
	ctx.r10.s64 = ctx.r11.s64 + -22844;
	// stb r24,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r24.u8);
	// stw r25,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r25,376(r27)
	PPC_STORE_U32(ctx.r27.u32 + 376, ctx.r25.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// bl 0x825b4878
	ctx.lr = 0x82A2CAC4;
	sub_825B4878(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2cae0
	if (!cr6.eq) goto loc_82A2CAE0;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82A2CAE0:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2cdb4
	if (cr6.eq) goto loc_82A2CDB4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2c200
	ctx.lr = 0x82A2CAF4;
	sub_82A2C200(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x82a2cc44
	if (cr6.eq) goto loc_82A2CC44;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82A2CB04:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2cb14
	if (cr6.lt) goto loc_82A2CB14;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2CB14:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A2CB24;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A2CB28;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82a2cb48
	if (!cr6.eq) goto loc_82A2CB48;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a2cb48
	if (!cr6.eq) goto loc_82A2CB48;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2cb58
	if (cr6.eq) goto loc_82A2CB58;
loc_82A2CB48:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2cb04
	if (cr6.lt) goto loc_82A2CB04;
	// b 0x82a2cb5c
	goto loc_82A2CB5C;
loc_82A2CB58:
	// stw r30,372(r27)
	PPC_STORE_U32(ctx.r27.u32 + 372, ctx.r30.u32);
loc_82A2CB5C:
	// lwz r11,372(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 372);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x82a2cc44
	if (!cr6.eq) goto loc_82A2CC44;
	// lwz r11,356(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 356);
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2cbd0
	if (!cr6.eq) goto loc_82A2CBD0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a2cbe0
	if (cr6.eq) goto loc_82A2CBE0;
loc_82A2CB80:
	// lwz r30,384(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A2CB88:
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// beq cr6,0x82a2cc44
	if (cr6.eq) goto loc_82A2CC44;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82A2CB94:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// subfc r10,r25,r11
	xer.ca = ctx.r11.u32 >= ctx.r25.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 & ctx.r11.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2cbb4
	if (cr6.lt) goto loc_82A2CBB4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2CBB4:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a2cbec
	if (!cr6.eq) goto loc_82A2CBEC;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a2cbf4
	goto loc_82A2CBF4;
loc_82A2CBD0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2cb80
	if (!cr6.eq) goto loc_82A2CB80;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a2cb80
	if (!cr6.eq) goto loc_82A2CB80;
loc_82A2CBE0:
	// lwz r30,380(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 380);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// b 0x82a2cb88
	goto loc_82A2CB88;
loc_82A2CBEC:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A2CBF4:
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x82a2cc1c
	if (!cr6.eq) goto loc_82A2CC1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A2CC04;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A2CC08;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82a2cc1c
	if (cr6.eq) goto loc_82A2CC1C;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2cc2c
	if (cr6.eq) goto loc_82A2CC2C;
loc_82A2CC1C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x82a2cb94
	if (cr6.lt) goto loc_82A2CB94;
	// b 0x82a2cc44
	goto loc_82A2CC44;
loc_82A2CC2C:
	// stw r30,372(r27)
	PPC_STORE_U32(ctx.r27.u32 + 372, ctx.r30.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x82a2cc40
	if (!cr6.eq) goto loc_82A2CC40;
	// stw r30,380(r27)
	PPC_STORE_U32(ctx.r27.u32 + 380, ctx.r30.u32);
	// b 0x82a2cc44
	goto loc_82A2CC44;
loc_82A2CC40:
	// stw r30,384(r27)
	PPC_STORE_U32(ctx.r27.u32 + 384, ctx.r30.u32);
loc_82A2CC44:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2c358
	ctx.lr = 0x82A2CC4C;
	sub_82A2C358(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x82a2cd9c
	if (cr6.eq) goto loc_82A2CD9C;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82A2CC5C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2cc6c
	if (cr6.lt) goto loc_82A2CC6C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2CC6C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A2CC7C;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A2CC80;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82a2cca0
	if (!cr6.eq) goto loc_82A2CCA0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a2cca0
	if (!cr6.eq) goto loc_82A2CCA0;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2ccb0
	if (cr6.eq) goto loc_82A2CCB0;
loc_82A2CCA0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2cc5c
	if (cr6.lt) goto loc_82A2CC5C;
	// b 0x82a2ccb4
	goto loc_82A2CCB4;
loc_82A2CCB0:
	// stw r30,376(r27)
	PPC_STORE_U32(ctx.r27.u32 + 376, ctx.r30.u32);
loc_82A2CCB4:
	// lwz r11,376(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 376);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x82a2cd9c
	if (!cr6.eq) goto loc_82A2CD9C;
	// lwz r11,356(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 356);
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2cce4
	if (!cr6.eq) goto loc_82A2CCE4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a2ccf4
	if (cr6.eq) goto loc_82A2CCF4;
loc_82A2CCD8:
	// lwz r30,380(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 380);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// b 0x82a2ccfc
	goto loc_82A2CCFC;
loc_82A2CCE4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2ccd8
	if (!cr6.eq) goto loc_82A2CCD8;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a2ccd8
	if (!cr6.eq) goto loc_82A2CCD8;
loc_82A2CCF4:
	// lwz r30,384(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// li r29,1
	ctx.r29.s64 = 1;
loc_82A2CCFC:
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// beq cr6,0x82a2cd9c
	if (cr6.eq) goto loc_82A2CD9C;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_82A2CD08:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// subfc r10,r25,r11
	xer.ca = ctx.r11.u32 >= ctx.r25.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 & ctx.r11.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2cd28
	if (cr6.lt) goto loc_82A2CD28;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2CD28:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a2cd44
	if (!cr6.eq) goto loc_82A2CD44;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a2cd4c
	goto loc_82A2CD4C;
loc_82A2CD44:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A2CD4C:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a2cd74
	if (!cr6.eq) goto loc_82A2CD74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A2CD5C;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A2CD60;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82a2cd74
	if (cr6.eq) goto loc_82A2CD74;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2cd84
	if (cr6.eq) goto loc_82A2CD84;
loc_82A2CD74:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x82a2cd08
	if (cr6.lt) goto loc_82A2CD08;
	// b 0x82a2cd9c
	goto loc_82A2CD9C;
loc_82A2CD84:
	// stw r30,376(r27)
	PPC_STORE_U32(ctx.r27.u32 + 376, ctx.r30.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x82a2cd98
	if (!cr6.eq) goto loc_82A2CD98;
	// stw r30,380(r27)
	PPC_STORE_U32(ctx.r27.u32 + 380, ctx.r30.u32);
	// b 0x82a2cd9c
	goto loc_82A2CD9C;
loc_82A2CD98:
	// stw r30,384(r27)
	PPC_STORE_U32(ctx.r27.u32 + 384, ctx.r30.u32);
loc_82A2CD9C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
loc_82A2CDB4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r9,r10,-9704
	ctx.r9.s64 = ctx.r10.s64 + -9704;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82a2cdf0
	if (cr6.eq) goto loc_82A2CDF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a2cdf0
	if (cr6.eq) goto loc_82A2CDF0;
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
	ctx.lr = 0x82A2CDE8;
	sub_8353F3B8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
loc_82A2CDF0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r24,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r24.u8);
	// beq cr6,0x82a2ce10
	if (cr6.eq) goto loc_82A2CE10;
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
	ctx.lr = 0x82A2CE10;
	sub_8353F3B8(ctx, base);
loc_82A2CE10:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2CE18"))) PPC_WEAK_FUNC(sub_82A2CE18);
PPC_FUNC_IMPL(__imp__sub_82A2CE18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A2CE20;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r9,r10,-22844
	ctx.r9.s64 = ctx.r10.s64 + -22844;
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,376(r28)
	PPC_STORE_U32(ctx.r28.u32 + 376, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// bl 0x825b4878
	ctx.lr = 0x82A2CE5C;
	sub_825B4878(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2ce78
	if (!cr6.eq) goto loc_82A2CE78;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82A2CE78:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2d0d4
	if (cr6.eq) goto loc_82A2D0D4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2c200
	ctx.lr = 0x82A2CE8C;
	sub_82A2C200(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x82a2cfa0
	if (cr6.eq) goto loc_82A2CFA0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82A2CE9C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2ceac
	if (cr6.lt) goto loc_82A2CEAC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2CEAC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A2CEBC;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A2CEC0;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82a2cee0
	if (!cr6.eq) goto loc_82A2CEE0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a2cee0
	if (!cr6.eq) goto loc_82A2CEE0;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2cef0
	if (cr6.eq) goto loc_82A2CEF0;
loc_82A2CEE0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2ce9c
	if (cr6.lt) goto loc_82A2CE9C;
	// b 0x82a2cef4
	goto loc_82A2CEF4;
loc_82A2CEF0:
	// stw r30,372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 372, ctx.r30.u32);
loc_82A2CEF4:
	// lwz r11,372(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x82a2cfa0
	if (!cr6.eq) goto loc_82A2CFA0;
	// lwz r11,356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 356);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2cf50
	if (!cr6.eq) goto loc_82A2CF50;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a2cf60
	if (cr6.eq) goto loc_82A2CF60;
loc_82A2CF18:
	// lwz r30,384(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A2CF20:
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// beq cr6,0x82a2cfa0
	if (cr6.eq) goto loc_82A2CFA0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt cr6,0x82a2cf34
	if (cr6.lt) goto loc_82A2CF34;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2CF34:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a2cf6c
	if (!cr6.eq) goto loc_82A2CF6C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a2cf74
	goto loc_82A2CF74;
loc_82A2CF50:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2cf18
	if (!cr6.eq) goto loc_82A2CF18;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a2cf18
	if (!cr6.eq) goto loc_82A2CF18;
loc_82A2CF60:
	// lwz r30,380(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x82a2cf20
	goto loc_82A2CF20;
loc_82A2CF6C:
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A2CF74:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82a2cfa0
	if (!cr6.eq) goto loc_82A2CFA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A2CF84;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A2CF88;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82a2cfa0
	if (cr6.eq) goto loc_82A2CFA0;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2cfa0
	if (!cr6.eq) goto loc_82A2CFA0;
	// stw r30,372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 372, ctx.r30.u32);
loc_82A2CFA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2c358
	ctx.lr = 0x82A2CFA8;
	sub_82A2C358(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x82a2d0bc
	if (cr6.eq) goto loc_82A2D0BC;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82A2CFB8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2cfc8
	if (cr6.lt) goto loc_82A2CFC8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2CFC8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A2CFD8;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A2CFDC;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82a2cffc
	if (!cr6.eq) goto loc_82A2CFFC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a2cffc
	if (!cr6.eq) goto loc_82A2CFFC;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2d00c
	if (cr6.eq) goto loc_82A2D00C;
loc_82A2CFFC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2cfb8
	if (cr6.lt) goto loc_82A2CFB8;
	// b 0x82a2d010
	goto loc_82A2D010;
loc_82A2D00C:
	// stw r30,376(r28)
	PPC_STORE_U32(ctx.r28.u32 + 376, ctx.r30.u32);
loc_82A2D010:
	// lwz r11,376(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 376);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x82a2d0bc
	if (!cr6.eq) goto loc_82A2D0BC;
	// lwz r11,356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 356);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2d040
	if (!cr6.eq) goto loc_82A2D040;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a2d050
	if (cr6.eq) goto loc_82A2D050;
loc_82A2D034:
	// lwz r30,380(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x82a2d058
	goto loc_82A2D058;
loc_82A2D040:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2d034
	if (!cr6.eq) goto loc_82A2D034;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a2d034
	if (!cr6.eq) goto loc_82A2D034;
loc_82A2D050:
	// lwz r30,384(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A2D058:
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// beq cr6,0x82a2d0bc
	if (cr6.eq) goto loc_82A2D0BC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt cr6,0x82a2d06c
	if (cr6.lt) goto loc_82A2D06C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2D06C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a2d088
	if (!cr6.eq) goto loc_82A2D088;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a2d090
	goto loc_82A2D090;
loc_82A2D088:
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A2D090:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82a2d0bc
	if (!cr6.eq) goto loc_82A2D0BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A2D0A0;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A2D0A4;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82a2d0bc
	if (cr6.eq) goto loc_82A2D0BC;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2d0bc
	if (!cr6.eq) goto loc_82A2D0BC;
	// stw r30,376(r28)
	PPC_STORE_U32(ctx.r28.u32 + 376, ctx.r30.u32);
loc_82A2D0BC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
loc_82A2D0D4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r9,r10,-9704
	ctx.r9.s64 = ctx.r10.s64 + -9704;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82a2d110
	if (cr6.eq) goto loc_82A2D110;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a2d110
	if (cr6.eq) goto loc_82A2D110;
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
	ctx.lr = 0x82A2D108;
	sub_8353F3B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
loc_82A2D110:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// beq cr6,0x82a2d130
	if (cr6.eq) goto loc_82A2D130;
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
	ctx.lr = 0x82A2D130;
	sub_8353F3B8(ctx, base);
loc_82A2D130:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2D138"))) PPC_WEAK_FUNC(sub_82A2D138);
PPC_FUNC_IMPL(__imp__sub_82A2D138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A2D140;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r9,r10,-22844
	ctx.r9.s64 = ctx.r10.s64 + -22844;
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,376(r28)
	PPC_STORE_U32(ctx.r28.u32 + 376, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// bl 0x825b4878
	ctx.lr = 0x82A2D17C;
	sub_825B4878(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2d198
	if (!cr6.eq) goto loc_82A2D198;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82A2D198:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2d3c0
	if (cr6.eq) goto loc_82A2D3C0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82A2D1A8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2d1b8
	if (cr6.lt) goto loc_82A2D1B8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2D1B8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A2D1C8;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A2D1CC;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82a2d224
	if (cr6.eq) goto loc_82A2D224;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2d224
	if (!cr6.eq) goto loc_82A2D224;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82a2d224
	if (cr6.eq) goto loc_82A2D224;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82a2d20c
	if (!cr0.eq) goto loc_82A2D20C;
	// lwz r11,380(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x82a2d224
	if (!cr6.eq) goto loc_82A2D224;
	// stw r30,380(r28)
	PPC_STORE_U32(ctx.r28.u32 + 380, ctx.r30.u32);
	// b 0x82a2d224
	goto loc_82A2D224;
loc_82A2D20C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2d224
	if (!cr6.eq) goto loc_82A2D224;
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x82a2d224
	if (!cr6.eq) goto loc_82A2D224;
	// stw r30,384(r28)
	PPC_STORE_U32(ctx.r28.u32 + 384, ctx.r30.u32);
loc_82A2D224:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2d1a8
	if (cr6.lt) goto loc_82A2D1A8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2c200
	ctx.lr = 0x82A2D238;
	sub_82A2C200(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x82a2d2d4
	if (cr6.eq) goto loc_82A2D2D4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82A2D248:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2d258
	if (cr6.lt) goto loc_82A2D258;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2D258:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A2D268;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A2D26C;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82a2d28c
	if (!cr6.eq) goto loc_82A2D28C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a2d28c
	if (!cr6.eq) goto loc_82A2D28C;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2d29c
	if (cr6.eq) goto loc_82A2D29C;
loc_82A2D28C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2d248
	if (cr6.lt) goto loc_82A2D248;
	// b 0x82a2d2a0
	goto loc_82A2D2A0;
loc_82A2D29C:
	// stw r30,372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 372, ctx.r30.u32);
loc_82A2D2A0:
	// lwz r11,372(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x82a2d2d4
	if (!cr6.eq) goto loc_82A2D2D4;
	// lwz r11,356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 356);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2d340
	if (!cr6.eq) goto loc_82A2D340;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a2d350
	if (cr6.eq) goto loc_82A2D350;
loc_82A2D2C4:
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
loc_82A2D2C8:
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// beq cr6,0x82a2d2d4
	if (cr6.eq) goto loc_82A2D2D4;
	// stw r11,372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 372, ctx.r11.u32);
loc_82A2D2D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2c358
	ctx.lr = 0x82A2D2DC;
	sub_82A2C358(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x82a2d3a8
	if (cr6.eq) goto loc_82A2D3A8;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82A2D2EC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2d2fc
	if (cr6.lt) goto loc_82A2D2FC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2D2FC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A2D30C;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A2D310;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82a2d330
	if (!cr6.eq) goto loc_82A2D330;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a2d330
	if (!cr6.eq) goto loc_82A2D330;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2d358
	if (cr6.eq) goto loc_82A2D358;
loc_82A2D330:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2d2ec
	if (cr6.lt) goto loc_82A2D2EC;
	// b 0x82a2d35c
	goto loc_82A2D35C;
loc_82A2D340:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2d2c4
	if (!cr6.eq) goto loc_82A2D2C4;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a2d2c4
	if (!cr6.eq) goto loc_82A2D2C4;
loc_82A2D350:
	// lwz r11,380(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// b 0x82a2d2c8
	goto loc_82A2D2C8;
loc_82A2D358:
	// stw r30,376(r28)
	PPC_STORE_U32(ctx.r28.u32 + 376, ctx.r30.u32);
loc_82A2D35C:
	// lwz r11,376(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 376);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x82a2d3a8
	if (!cr6.eq) goto loc_82A2D3A8;
	// lwz r11,356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 356);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2d380
	if (!cr6.eq) goto loc_82A2D380;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// b 0x82a2d38c
	goto loc_82A2D38C;
loc_82A2D380:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2d390
	if (!cr6.eq) goto loc_82A2D390;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
loc_82A2D38C:
	// beq cr6,0x82a2d398
	if (cr6.eq) goto loc_82A2D398;
loc_82A2D390:
	// lwz r11,380(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// b 0x82a2d39c
	goto loc_82A2D39C;
loc_82A2D398:
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
loc_82A2D39C:
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// beq cr6,0x82a2d3a8
	if (cr6.eq) goto loc_82A2D3A8;
	// stw r11,376(r28)
	PPC_STORE_U32(ctx.r28.u32 + 376, ctx.r11.u32);
loc_82A2D3A8:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
loc_82A2D3C0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r9,r10,-9704
	ctx.r9.s64 = ctx.r10.s64 + -9704;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82a2d3fc
	if (cr6.eq) goto loc_82A2D3FC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a2d3fc
	if (cr6.eq) goto loc_82A2D3FC;
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
	ctx.lr = 0x82A2D3F4;
	sub_8353F3B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
loc_82A2D3FC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// beq cr6,0x82a2d41c
	if (cr6.eq) goto loc_82A2D41C;
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
	ctx.lr = 0x82A2D41C;
	sub_8353F3B8(ctx, base);
loc_82A2D41C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2D424"))) PPC_WEAK_FUNC(sub_82A2D424);
PPC_FUNC_IMPL(__imp__sub_82A2D424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2D428"))) PPC_WEAK_FUNC(sub_82A2D428);
PPC_FUNC_IMPL(__imp__sub_82A2D428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stb r11,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r11.u8);
	// stb r11,35(r3)
	PPC_STORE_U8(ctx.r3.u32 + 35, ctx.r11.u8);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stb r11,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r11.u8);
	// stb r11,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r11.u8);
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stb r11,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r11.u8);
	// lbz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82a2d478
	if (!cr6.eq) goto loc_82A2D478;
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
loc_82A2D478:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// bne cr6,0x82a2d48c
	if (!cr6.eq) goto loc_82A2D48C;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// b 0x82a2ce18
	sub_82A2CE18(ctx, base);
	return;
loc_82A2D48C:
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// lwz r6,352(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// ori r5,r9,52429
	ctx.r5.u64 = ctx.r9.u64 | 52429;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// mulhwu r4,r7,r5
	ctx.r4.u64 = (uint64_t(ctx.r7.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// subfc r8,r6,r10
	xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r6.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// and r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 & ctx.r10.u64;
	// subf. r10,r4,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82a2d4f4
	if (!cr0.eq) goto loc_82A2D4F4;
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r10,r3,408
	ctx.r10.s64 = ctx.r3.s64 + 408;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82A2D4D8:
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bge cr6,0x82a2d4e8
	if (!cr6.lt) goto loc_82A2D4E8;
	// stw r11,-20(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82A2D4E8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a2d4d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2D4D8;
loc_82A2D4F4:
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// cmplwi cr6,r6,11
	cr6.compare<uint32_t>(ctx.r6.u32, 11, xer);
	// bge cr6,0x82a2d51c
	if (!cr6.lt) goto loc_82A2D51C;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// blt cr6,0x82a2d518
	if (cr6.lt) goto loc_82A2D518;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2d51c
	if (!cr6.eq) goto loc_82A2D51C;
loc_82A2D518:
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
loc_82A2D51C:
	// b 0x82a2ca80
	sub_82A2CA80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2D520"))) PPC_WEAK_FUNC(sub_82A2D520);
PPC_FUNC_IMPL(__imp__sub_82A2D520) {
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
	ctx.lr = 0x82A2D528;
	__savegprlr_17(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r10,r11,-22152
	ctx.r10.s64 = ctx.r11.s64 + -22152;
	// stb r19,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r19.u8);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r19,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r19.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r19,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r19.u32);
	// stw r19,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r19.u32);
	// stb r19,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r19.u8);
	// stw r19,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r19.u32);
	// stw r19,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r19.u32);
	// stw r19,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r19.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// bl 0x825a9cf0
	ctx.lr = 0x82A2D574;
	sub_825A9CF0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x825a9cf0
	ctx.lr = 0x82A2D588;
	sub_825A9CF0(ctx, base);
	// lbz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 180);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a2d59c
	if (!cr6.eq) goto loc_82A2D59C;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825a94f0
	ctx.lr = 0x82A2D59C;
	sub_825A94F0(ctx, base);
loc_82A2D59C:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2d5b8
	if (!cr6.eq) goto loc_82A2D5B8;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
loc_82A2D5B8:
	// lbz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 200);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a2d5d0
	if (!cr6.eq) goto loc_82A2D5D0;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x825a94f0
	ctx.lr = 0x82A2D5D0;
	sub_825A94F0(ctx, base);
loc_82A2D5D0:
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2d5ec
	if (!cr6.eq) goto loc_82A2D5EC;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
loc_82A2D5EC:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r19,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r19.u8);
	// stw r19,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r19.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r9,r10,-22152
	ctx.r9.s64 = ctx.r10.s64 + -22152;
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r19.u32);
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stb r19,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r19.u8);
	// stw r19,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A2D634;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a145d8
	ctx.lr = 0x82A2D640;
	sub_82A145D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825a9f08
	ctx.lr = 0x82A2D650;
	sub_825A9F08(ctx, base);
	// lbz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// stb r29,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r29.u8);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82a2d698
	if (!cr6.eq) goto loc_82A2D698;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A2D678;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82a145d8
	ctx.lr = 0x82A2D684;
	sub_82A145D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825a9f08
	ctx.lr = 0x82A2D694;
	sub_825A9F08(ctx, base);
	// stb r29,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r29.u8);
loc_82A2D698:
	// lbz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a2d6ac
	if (!cr6.eq) goto loc_82A2D6AC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825aa158
	ctx.lr = 0x82A2D6AC;
	sub_825AA158(ctx, base);
loc_82A2D6AC:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2d6c8
	if (!cr6.eq) goto loc_82A2D6C8;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
loc_82A2D6C8:
	// lbz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a2d6e0
	if (!cr6.eq) goto loc_82A2D6E0;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x825aa158
	ctx.lr = 0x82A2D6E0;
	sub_825AA158(ctx, base);
loc_82A2D6E0:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2d6fc
	if (!cr6.eq) goto loc_82A2D6FC;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_82A2D6FC:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r19,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r19.u8);
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r9,r10,-24692
	ctx.r9.s64 = ctx.r10.s64 + -24692;
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x825ab6c8
	ctx.lr = 0x82A2D724;
	sub_825AB6C8(ctx, base);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a2d740
	if (!cr6.eq) goto loc_82A2D740;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
loc_82A2D740:
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82a2dcb4
	if (cr6.eq) goto loc_82A2DCB4;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x82a2dcb4
	if (cr6.eq) goto loc_82A2DCB4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82a2dcb4
	if (cr6.eq) goto loc_82A2DCB4;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82a2dcb4
	if (cr6.eq) goto loc_82A2DCB4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a2dcc4
	if (cr6.eq) goto loc_82A2DCC4;
	// li r11,11
	ctx.r11.s64 = 11;
	// lwz r6,356(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 356);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A2D784:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82a2d798
	if (cr6.lt) goto loc_82A2D798;
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x82a2d79c
	if (cr6.lt) goto loc_82A2D79C;
loc_82A2D798:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82A2D79C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2d804
	if (cr6.eq) goto loc_82A2D804;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82a2d7bc
	if (cr6.lt) goto loc_82A2D7BC;
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x82a2d7c0
	if (cr6.lt) goto loc_82A2D7C0;
loc_82A2D7BC:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82A2D7C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2d7e0
	if (cr6.eq) goto loc_82A2D7E0;
	// add r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r3,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// subfe r11,r3,r10
	temp.u8 = (~ctx.r3.u32 + ctx.r10.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a2d7e4
	goto loc_82A2D7E4;
loc_82A2D7E0:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82A2D7E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2d804
	if (cr6.eq) goto loc_82A2D804;
	// cmpwi cr6,r9,11
	cr6.compare<int32_t>(ctx.r9.s32, 11, xer);
	// bge cr6,0x82a2d800
	if (!cr6.lt) goto loc_82A2D800;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x82a2d804
	goto loc_82A2D804;
loc_82A2D800:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82A2D804:
	// addic. r10,r9,1
	xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r10.s64 = ctx.r9.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82a2d818
	if (cr0.lt) goto loc_82A2D818;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x82a2d81c
	if (cr6.lt) goto loc_82A2D81C;
loc_82A2D818:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82A2D81C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2d884
	if (cr6.eq) goto loc_82A2D884;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a2d83c
	if (cr6.lt) goto loc_82A2D83C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x82a2d840
	if (cr6.lt) goto loc_82A2D840;
loc_82A2D83C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82A2D840:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2d860
	if (cr6.eq) goto loc_82A2D860;
	// add r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbz r3,5769(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5769);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a2d864
	goto loc_82A2D864;
loc_82A2D860:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82A2D864:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2d884
	if (cr6.eq) goto loc_82A2D884;
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bge cr6,0x82a2d880
	if (!cr6.lt) goto loc_82A2D880;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x82a2d884
	goto loc_82A2D884;
loc_82A2D880:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82A2D884:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x82a2d784
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2D784;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// blt cr6,0x82a2d89c
	if (cr6.lt) goto loc_82A2D89C;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
loc_82A2D89C:
	// stw r20,352(r22)
	PPC_STORE_U32(ctx.r22.u32 + 352, ctx.r20.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82a2d8b4
	if (!cr6.eq) goto loc_82A2D8B4;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// b 0x82a2d8bc
	goto loc_82A2D8BC;
loc_82A2D8B4:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
loc_82A2D8BC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// ori r25,r11,33528
	ctx.r25.u64 = ctx.r11.u64 | 33528;
	// lwzx r28,r26,r25
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// addi r10,r28,255
	ctx.r10.s64 = ctx.r28.s64 + 255;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bge cr6,0x82a2d9c4
	if (!cr6.lt) goto loc_82A2D9C4;
	// addi r26,r26,3612
	ctx.r26.s64 = ctx.r26.s64 + 3612;
loc_82A2D8E4:
	// lwz r11,29916(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 29916);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x82a2d958
	if (!cr6.lt) goto loc_82A2D958;
	// addi r11,r31,7480
	ctx.r11.s64 = ctx.r31.s64 + 7480;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a2d910
	if (cr6.lt) goto loc_82A2D910;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x82a2d914
	if (cr6.lt) goto loc_82A2D914;
loc_82A2D910:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82A2D914:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2d9a8
	if (cr6.eq) goto loc_82A2D9A8;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a2d934
	if (cr6.lt) goto loc_82A2D934;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x82a2d938
	if (cr6.lt) goto loc_82A2D938;
loc_82A2D934:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82A2D938:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2d960
	if (cr6.eq) goto loc_82A2D960;
	// add r11,r4,r18
	ctx.r11.u64 = ctx.r4.u64 + ctx.r18.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a2d964
	goto loc_82A2D964;
loc_82A2D958:
	// li r4,255
	ctx.r4.s64 = 255;
	// b 0x82a2d910
	goto loc_82A2D910;
loc_82A2D960:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82A2D964:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2d9a8
	if (cr6.eq) goto loc_82A2D9A8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a29c78
	ctx.lr = 0x82A2D978;
	sub_82A29C78(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x82a2d9a4
	if (!cr6.lt) goto loc_82A2D9A4;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x82a2d9a4
	if (!cr6.lt) goto loc_82A2D9A4;
	// addi r11,r27,6
	ctx.r11.s64 = ctx.r27.s64 + 6;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r22
	PPC_STORE_U32(ctx.r8.u32 + ctx.r22.u32, ctx.r10.u32);
loc_82A2D9A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82A2D9A8:
	// addi r11,r31,255
	ctx.r11.s64 = ctx.r31.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// blt cr6,0x82a2d8e4
	if (cr6.lt) goto loc_82A2D8E4;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82A2D9C4:
	// li r10,10
	ctx.r10.s64 = 10;
loc_82A2D9C8:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x82a2d9f0
	if (!cr6.lt) goto loc_82A2D9F0;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82a2d9f0
	if (!cr6.lt) goto loc_82A2D9F0;
	// addi r11,r27,6
	ctx.r11.s64 = ctx.r27.s64 + 6;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r22
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
	// b 0x82a2d9f4
	goto loc_82A2D9F4;
loc_82A2D9F0:
	// lwz r8,264(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 264);
loc_82A2D9F4:
	// cmpwi cr6,r8,255
	cr6.compare<int32_t>(ctx.r8.s32, 255, xer);
	// bne cr6,0x82a2da08
	if (!cr6.eq) goto loc_82A2DA08;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x82a2d9c8
	if (!cr0.lt) goto loc_82A2D9C8;
	// b 0x82a2dabc
	goto loc_82A2DABC;
loc_82A2DA08:
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// beq cr6,0x82a2dabc
	if (cr6.eq) goto loc_82A2DABC;
	// cmplw cr6,r20,r10
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82a2da88
	if (cr6.gt) goto loc_82A2DA88;
	// subf r11,r20,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r20.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A2DA24:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x82a2da80
	if (cr6.lt) goto loc_82A2DA80;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x82a2da58
	if (!cr6.lt) goto loc_82A2DA58;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82a2da58
	if (!cr6.lt) goto loc_82A2DA58;
	// mulli r11,r27,11
	ctx.r11.s64 = ctx.r27.s64 * 11;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,65
	ctx.r11.s64 = ctx.r11.s64 + 65;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// b 0x82a2da5c
	goto loc_82A2DA5C;
loc_82A2DA58:
	// lwz r11,264(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 264);
loc_82A2DA5C:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x82a2da80
	if (!cr6.lt) goto loc_82A2DA80;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82a2da80
	if (!cr6.lt) goto loc_82A2DA80;
	// addi r9,r27,6
	ctx.r9.s64 = ctx.r27.s64 + 6;
	// mulli r9,r9,11
	ctx.r9.s64 = ctx.r9.s64 * 11;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r6,r22
	PPC_STORE_U32(ctx.r6.u32 + ctx.r22.u32, ctx.r11.u32);
loc_82A2DA80:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bdnz 0x82a2da24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2DA24;
loc_82A2DA88:
	// cmplwi cr6,r20,1
	cr6.compare<uint32_t>(ctx.r20.u32, 1, xer);
	// blt cr6,0x82a2dab8
	if (cr6.lt) goto loc_82A2DAB8;
	// addi r10,r20,-1
	ctx.r10.s64 = ctx.r20.s64 + -1;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x82a2dab8
	if (!cr6.lt) goto loc_82A2DAB8;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82a2dab8
	if (!cr6.lt) goto loc_82A2DAB8;
	// addi r11,r27,6
	ctx.r11.s64 = ctx.r27.s64 + 6;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r22
	PPC_STORE_U32(ctx.r9.u32 + ctx.r22.u32, ctx.r8.u32);
loc_82A2DAB8:
	// stw r8,364(r22)
	PPC_STORE_U32(ctx.r22.u32 + 364, ctx.r8.u32);
loc_82A2DABC:
	// lwzx r28,r21,r25
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r25.u32);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// addi r11,r28,255
	ctx.r11.s64 = ctx.r28.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bge cr6,0x82a2dbbc
	if (!cr6.lt) goto loc_82A2DBBC;
	// addi r27,r21,3612
	ctx.r27.s64 = ctx.r21.s64 + 3612;
loc_82A2DADC:
	// lwz r11,29916(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29916);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x82a2db50
	if (!cr6.lt) goto loc_82A2DB50;
	// addi r11,r31,7480
	ctx.r11.s64 = ctx.r31.s64 + 7480;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a2db08
	if (cr6.lt) goto loc_82A2DB08;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x82a2db0c
	if (cr6.lt) goto loc_82A2DB0C;
loc_82A2DB08:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82A2DB0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2dba0
	if (cr6.eq) goto loc_82A2DBA0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a2db2c
	if (cr6.lt) goto loc_82A2DB2C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x82a2db30
	if (cr6.lt) goto loc_82A2DB30;
loc_82A2DB2C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82A2DB30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2db58
	if (cr6.eq) goto loc_82A2DB58;
	// add r11,r4,r18
	ctx.r11.u64 = ctx.r4.u64 + ctx.r18.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a2db5c
	goto loc_82A2DB5C;
loc_82A2DB50:
	// li r4,255
	ctx.r4.s64 = 255;
	// b 0x82a2db08
	goto loc_82A2DB08;
loc_82A2DB58:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82A2DB5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2dba0
	if (cr6.eq) goto loc_82A2DBA0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a29c78
	ctx.lr = 0x82A2DB70;
	sub_82A29C78(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x82a2db9c
	if (!cr6.lt) goto loc_82A2DB9C;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// bge cr6,0x82a2db9c
	if (!cr6.lt) goto loc_82A2DB9C;
	// addi r11,r24,6
	ctx.r11.s64 = ctx.r24.s64 + 6;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r22
	PPC_STORE_U32(ctx.r8.u32 + ctx.r22.u32, ctx.r10.u32);
loc_82A2DB9C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82A2DBA0:
	// addi r11,r31,255
	ctx.r11.s64 = ctx.r31.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// blt cr6,0x82a2dadc
	if (cr6.lt) goto loc_82A2DADC;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82A2DBBC:
	// li r10,10
	ctx.r10.s64 = 10;
loc_82A2DBC0:
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// bge cr6,0x82a2dbe8
	if (!cr6.lt) goto loc_82A2DBE8;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82a2dbe8
	if (!cr6.lt) goto loc_82A2DBE8;
	// addi r11,r24,6
	ctx.r11.s64 = ctx.r24.s64 + 6;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r22
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
	// b 0x82a2dbec
	goto loc_82A2DBEC;
loc_82A2DBE8:
	// lwz r8,264(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 264);
loc_82A2DBEC:
	// cmpwi cr6,r8,255
	cr6.compare<int32_t>(ctx.r8.s32, 255, xer);
	// bne cr6,0x82a2dc00
	if (!cr6.eq) goto loc_82A2DC00;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x82a2dbc0
	if (!cr0.lt) goto loc_82A2DBC0;
	// b 0x82a2dcb4
	goto loc_82A2DCB4;
loc_82A2DC00:
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// beq cr6,0x82a2dcb4
	if (cr6.eq) goto loc_82A2DCB4;
	// cmplw cr6,r20,r10
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82a2dc80
	if (cr6.gt) goto loc_82A2DC80;
	// subf r11,r20,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r20.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A2DC1C:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x82a2dc78
	if (cr6.lt) goto loc_82A2DC78;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// bge cr6,0x82a2dc50
	if (!cr6.lt) goto loc_82A2DC50;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82a2dc50
	if (!cr6.lt) goto loc_82A2DC50;
	// mulli r11,r24,11
	ctx.r11.s64 = ctx.r24.s64 * 11;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,65
	ctx.r11.s64 = ctx.r11.s64 + 65;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// b 0x82a2dc54
	goto loc_82A2DC54;
loc_82A2DC50:
	// lwz r11,264(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 264);
loc_82A2DC54:
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// bge cr6,0x82a2dc78
	if (!cr6.lt) goto loc_82A2DC78;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82a2dc78
	if (!cr6.lt) goto loc_82A2DC78;
	// addi r9,r24,6
	ctx.r9.s64 = ctx.r24.s64 + 6;
	// mulli r9,r9,11
	ctx.r9.s64 = ctx.r9.s64 * 11;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r6,r22
	PPC_STORE_U32(ctx.r6.u32 + ctx.r22.u32, ctx.r11.u32);
loc_82A2DC78:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bdnz 0x82a2dc1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2DC1C;
loc_82A2DC80:
	// cmplwi cr6,r20,1
	cr6.compare<uint32_t>(ctx.r20.u32, 1, xer);
	// blt cr6,0x82a2dcb0
	if (cr6.lt) goto loc_82A2DCB0;
	// addi r10,r20,-1
	ctx.r10.s64 = ctx.r20.s64 + -1;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// bge cr6,0x82a2dcb0
	if (!cr6.lt) goto loc_82A2DCB0;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82a2dcb0
	if (!cr6.lt) goto loc_82A2DCB0;
	// addi r11,r24,6
	ctx.r11.s64 = ctx.r24.s64 + 6;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r22
	PPC_STORE_U32(ctx.r9.u32 + ctx.r22.u32, ctx.r8.u32);
loc_82A2DCB0:
	// stw r8,368(r22)
	PPC_STORE_U32(ctx.r22.u32 + 368, ctx.r8.u32);
loc_82A2DCB4:
	// addic r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
loc_82A2DCC4:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addic r6,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lbz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// addi r3,r7,-24712
	ctx.r3.s64 = ctx.r7.s64 + -24712;
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// subfe r7,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addic r5,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// subfe r6,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// subfe r7,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r5,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// and r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// subfe r10,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// and r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 & ctx.r8.u64;
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// beq cr6,0x82a2dd54
	if (cr6.eq) goto loc_82A2DD54;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a2dd54
	if (cr6.eq) goto loc_82A2DD54;
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
	ctx.lr = 0x82A2DD4C;
	sub_8353F3B8(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
loc_82A2DD54:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r19,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r19.u8);
	// beq cr6,0x82a2dd78
	if (cr6.eq) goto loc_82A2DD78;
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
	ctx.lr = 0x82A2DD74;
	sub_8353F3B8(ctx, base);
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
loc_82A2DD78:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
	// addi r30,r11,-24712
	ctx.r30.s64 = ctx.r11.s64 + -24712;
loc_82A2DD88:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2ddc0
	if (cr6.eq) goto loc_82A2DDC0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a2ddc0
	if (cr6.eq) goto loc_82A2DDC0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82A2DDBC;
	sub_8353F3B8(ctx, base);
	// stw r19,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r19.u32);
loc_82A2DDC0:
	// stb r19,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r19.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a2dde8
	if (cr6.eq) goto loc_82A2DDE8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82A2DDE4;
	sub_8353F3B8(ctx, base);
	// stw r19,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r19.u32);
loc_82A2DDE8:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x82a2dd88
	if (!cr0.lt) goto loc_82A2DD88;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r1,224
	ctx.r31.s64 = ctx.r1.s64 + 224;
	// addi r30,r11,-24712
	ctx.r30.s64 = ctx.r11.s64 + -24712;
loc_82A2DDFC:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2de34
	if (cr6.eq) goto loc_82A2DE34;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a2de34
	if (cr6.eq) goto loc_82A2DE34;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82A2DE30;
	sub_8353F3B8(ctx, base);
	// stw r19,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r19.u32);
loc_82A2DE34:
	// stb r19,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r19.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a2de5c
	if (cr6.eq) goto loc_82A2DE5C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82A2DE58;
	sub_8353F3B8(ctx, base);
	// stw r19,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r19.u32);
loc_82A2DE5C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x82a2ddfc
	if (!cr0.lt) goto loc_82A2DDFC;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2DE6C"))) PPC_WEAK_FUNC(sub_82A2DE6C);
PPC_FUNC_IMPL(__imp__sub_82A2DE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DE70"))) PPC_WEAK_FUNC(sub_82A2DE70);
PPC_FUNC_IMPL(__imp__sub_82A2DE70) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,8512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8512, ctx.r11.u32);
	// stw r11,8516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8516, ctx.r11.u32);
	// stw r10,8500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8500, ctx.r10.u32);
	// stw r10,8496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8496, ctx.r10.u32);
	// stb r11,8504(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8504, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DE90"))) PPC_WEAK_FUNC(sub_82A2DE90);
PPC_FUNC_IMPL(__imp__sub_82A2DE90) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,8524(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8524);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DE98"))) PPC_WEAK_FUNC(sub_82A2DE98);
PPC_FUNC_IMPL(__imp__sub_82A2DE98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// lwz r11,8508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8508);
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DEA8"))) PPC_WEAK_FUNC(sub_82A2DEA8);
PPC_FUNC_IMPL(__imp__sub_82A2DEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// lwz r11,8508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8508);
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DEB8"))) PPC_WEAK_FUNC(sub_82A2DEB8);
PPC_FUNC_IMPL(__imp__sub_82A2DEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// lwz r11,8508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8508);
	// srawi r10,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DEC8"))) PPC_WEAK_FUNC(sub_82A2DEC8);
PPC_FUNC_IMPL(__imp__sub_82A2DEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2DEFC"))) PPC_WEAK_FUNC(sub_82A2DEFC);
PPC_FUNC_IMPL(__imp__sub_82A2DEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DF00"))) PPC_WEAK_FUNC(sub_82A2DF00);
PPC_FUNC_IMPL(__imp__sub_82A2DF00) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a2df58
	if (!cr6.eq) goto loc_82A2DF58;
	// bl 0x83740868
	ctx.lr = 0x82A2DF28;
	sub_83740868(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,8156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8164);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// b 0x82a2df94
	goto loc_82A2DF94;
loc_82A2DF58:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f10,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82A2DF94:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f8,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82A2DFD0"))) PPC_WEAK_FUNC(sub_82A2DFD0);
PPC_FUNC_IMPL(__imp__sub_82A2DFD0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a2e02c
	if (cr6.eq) goto loc_82A2E02C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a2e02c
	if (cr6.eq) goto loc_82A2E02C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// bl 0x82dcb990
	ctx.lr = 0x82A2E00C;
	sub_82DCB990(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2e02c
	if (cr6.eq) goto loc_82A2E02C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a28f48
	ctx.lr = 0x82A2E020;
	sub_82A28F48(ctx, base);
	// lfs f0,8528(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8528);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,8528(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8528, temp.u32);
loc_82A2E02C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E044"))) PPC_WEAK_FUNC(sub_82A2E044);
PPC_FUNC_IMPL(__imp__sub_82A2E044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E048"))) PPC_WEAK_FUNC(sub_82A2E048);
PPC_FUNC_IMPL(__imp__sub_82A2E048) {
	PPC_FUNC_PROLOGUE();
	// stb r4,8532(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8532, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E050"))) PPC_WEAK_FUNC(sub_82A2E050);
PPC_FUNC_IMPL(__imp__sub_82A2E050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A2E058;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83740868
	ctx.lr = 0x82A2E06C;
	sub_83740868(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r29,199
	ctx.r29.s64 = 199;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f0,-23868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23868);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f31,f12,f12
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
loc_82A2E094:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a2df00
	ctx.lr = 0x82A2E0A4;
	sub_82A2DF00(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// blt cr6,0x82a2e0d8
	if (cr6.lt) goto loc_82A2E0D8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,199
	cr6.compare<int32_t>(ctx.r31.s32, 199, xer);
	// ble cr6,0x82a2e094
	if (!cr6.gt) goto loc_82A2E094;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2E0D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2E0E8"))) PPC_WEAK_FUNC(sub_82A2E0E8);
PPC_FUNC_IMPL(__imp__sub_82A2E0E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A2E0F0;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,199
	cr6.compare<uint32_t>(ctx.r4.u32, 199, xer);
	// blt cr6,0x82a2e168
	if (cr6.lt) goto loc_82A2E168;
	// li r31,198
	ctx.r31.s64 = 198;
loc_82A2E114:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82A2E120;
	sub_82A44AC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82A2E130;
	sub_82A44AC0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f1,f7
	ctx.f1.f64 = double(float(sqrt(ctx.f7.f64)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2E168:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82a2e114
	if (!cr6.eq) goto loc_82A2E114;
	// lfs f31,8156(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8156);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8160);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,8164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8164);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x83740868
	ctx.lr = 0x82A2E180;
	sub_83740868(ctx, base);
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmadds f13,f29,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f12,f31,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f1,f11,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 / ctx.f1.f64));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2E1A8"))) PPC_WEAK_FUNC(sub_82A2E1A8);
PPC_FUNC_IMPL(__imp__sub_82A2E1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,8532(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8532, ctx.r10.u8);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8528(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8528, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E1C0"))) PPC_WEAK_FUNC(sub_82A2E1C0);
PPC_FUNC_IMPL(__imp__sub_82A2E1C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f1,8528(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8528);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82a290c8
	ctx.lr = 0x82A2E1E8;
	sub_82A290C8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,24504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lfs f13,16256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmadds f6,f8,f0,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmuls f0,f6,f13
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x82a2e24c
	if (cr6.gt) goto loc_82A2E24C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82a2e24c
	if (cr6.lt) goto loc_82A2E24C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82A2E24C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E25C"))) PPC_WEAK_FUNC(sub_82A2E25C);
PPC_FUNC_IMPL(__imp__sub_82A2E25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E260"))) PPC_WEAK_FUNC(sub_82A2E260);
PPC_FUNC_IMPL(__imp__sub_82A2E260) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// bl 0x828c5ac8
	ctx.lr = 0x82A2E298;
	sub_828C5AC8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r31,8244
	ctx.r3.s64 = ctx.r31.s64 + 8244;
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// bl 0x826c3d80
	ctx.lr = 0x82A2E2A8;
	sub_826C3D80(ctx, base);
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

__attribute__((alias("__imp__sub_82A2E2BC"))) PPC_WEAK_FUNC(sub_82A2E2BC);
PPC_FUNC_IMPL(__imp__sub_82A2E2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E2C0"))) PPC_WEAK_FUNC(sub_82A2E2C0);
PPC_FUNC_IMPL(__imp__sub_82A2E2C0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// bl 0x828c5ac8
	ctx.lr = 0x82A2E2F8;
	sub_828C5AC8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r31,8244
	ctx.r3.s64 = ctx.r31.s64 + 8244;
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// bl 0x826c3d80
	ctx.lr = 0x82A2E308;
	sub_826C3D80(ctx, base);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r8,8140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8140, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_82A2E324"))) PPC_WEAK_FUNC(sub_82A2E324);
PPC_FUNC_IMPL(__imp__sub_82A2E324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E328"))) PPC_WEAK_FUNC(sub_82A2E328);
PPC_FUNC_IMPL(__imp__sub_82A2E328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r9,200
	ctx.r9.s64 = 200;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r3,136
	ctx.r10.s64 = ctx.r3.s64 + 136;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f31,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r10,r10,-40
	ctx.r10.s64 = ctx.r10.s64 + -40;
	// stfs f31,0(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f31,12(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f31,16(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f31,20(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f31,28(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f31,32(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f31,36(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f31,40(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f31,44(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f31,48(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f31,52(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f31,56(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f31,60(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,80(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f31,84(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f31,88(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f31,92(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f31,96(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f31,100(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f31,104(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f31,108(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f31,112(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
loc_82A2E3C8:
	// stfsu f31,40(r10)
	ctx.fpscr.disableFlushMode();
	ea = 40 + ctx.r10.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f31,20(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f31,36(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfsu f31,40(r11)
	ea = 40 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2e3c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2E3C8;
	// li r5,8136
	ctx.r5.s64 = 8136;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A2E404;
	sub_831CDCF0(ctx, base);
	// li r10,200
	ctx.r10.s64 = 200;
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A2E410:
	// stfs f31,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f31,36(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfsu f31,40(r11)
	ea = 40 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2e410
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2E410;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f0,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x828c5ac8
	ctx.lr = 0x82A2E440;
	sub_828C5AC8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bl 0x828c5728
	ctx.lr = 0x82A2E450;
	sub_828C5728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82A2E474"))) PPC_WEAK_FUNC(sub_82A2E474);
PPC_FUNC_IMPL(__imp__sub_82A2E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E478"))) PPC_WEAK_FUNC(sub_82A2E478);
PPC_FUNC_IMPL(__imp__sub_82A2E478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A2E480;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a2e328
	ctx.lr = 0x82A2E490;
	sub_82A2E328(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r31,8244
	ctx.r29.s64 = ctx.r31.s64 + 8244;
	// addi r11,r31,8144
	ctx.r11.s64 = ctx.r31.s64 + 8144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,8144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8144, temp.u32);
	// stfs f31,8148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8148, temp.u32);
	// stfs f31,8152(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8152, temp.u32);
	// stfs f31,8156(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8156, temp.u32);
	// stfs f31,8160(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8160, temp.u32);
	// stfs f31,8164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8164, temp.u32);
	// stfs f31,8168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8168, temp.u32);
	// stfs f31,8172(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8172, temp.u32);
	// stfs f31,8176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8176, temp.u32);
	// stfs f31,8180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8180, temp.u32);
	// stfs f31,8184(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8184, temp.u32);
	// stfs f31,8188(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8188, temp.u32);
	// stfs f31,8192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8192, temp.u32);
	// stfs f31,8196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8196, temp.u32);
	// stfs f31,8200(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8200, temp.u32);
	// stfs f31,8204(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8204, temp.u32);
	// stfs f31,8208(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8208, temp.u32);
	// stfs f31,8212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8212, temp.u32);
	// stfs f31,8216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8216, temp.u32);
	// stfs f31,8220(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8220, temp.u32);
	// stfs f31,8224(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8224, temp.u32);
	// stfs f31,8228(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8228, temp.u32);
	// stfs f31,8232(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8232, temp.u32);
	// stfs f31,8236(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8236, temp.u32);
	// stfs f31,8240(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8240, temp.u32);
	// bl 0x826c78a8
	ctx.lr = 0x82A2E50C;
	sub_826C78A8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r5,8536
	ctx.r5.s64 = 8536;
	// stb r30,8507(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8507, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,8520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8520, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,8508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8508, ctx.r30.u32);
	// stb r30,8506(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8506, ctx.r30.u8);
	// stb r30,8505(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8505, ctx.r30.u8);
	// stw r30,8512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8512, ctx.r30.u32);
	// stw r30,8516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8516, ctx.r30.u32);
	// stw r11,8500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8500, ctx.r11.u32);
	// stw r11,8496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8496, ctx.r11.u32);
	// stb r30,8504(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8504, ctx.r30.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x82A2E54C;
	sub_831CDCF0(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stfs f31,8528(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8528, temp.u32);
	// li r10,200
	ctx.r10.s64 = 200;
	// stw r30,8136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8136, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,5
	ctx.r7.s64 = 5;
	// stb r9,8524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8524, ctx.r9.u8);
	// stfs f31,8144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8144, temp.u32);
	// lfs f0,16164(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16164);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// stfs f31,8148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8148, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f31,8152(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8152, temp.u32);
	// stb r7,8141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8141, ctx.r7.u8);
	// stfs f0,8148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8148, temp.u32);
loc_82A2E588:
	// stfs f31,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f31,36(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfsu f31,40(r11)
	ea = 40 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2e588
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2E588;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,8528(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8528, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stb r9,8532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8532, ctx.r9.u8);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f0,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x828c5ac8
	ctx.lr = 0x82A2E5C0;
	sub_828C5AC8(ctx, base);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826c3d80
	ctx.lr = 0x82A2E5CC;
	sub_826C3D80(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,8140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8140, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2E5E4"))) PPC_WEAK_FUNC(sub_82A2E5E4);
PPC_FUNC_IMPL(__imp__sub_82A2E5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E5E8"))) PPC_WEAK_FUNC(sub_82A2E5E8);
PPC_FUNC_IMPL(__imp__sub_82A2E5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,60
	ctx.r9.s64 = 60;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,52892
	ctx.r11.u64 = ctx.r11.u64 | 52892;
	// ori r8,r10,52600
	ctx.r8.u64 = ctx.r10.u64 | 52600;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stbx r10,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r10.u8);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82A2E618:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stbu r10,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2e618
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2E618;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E638"))) PPC_WEAK_FUNC(sub_82A2E638);
PPC_FUNC_IMPL(__imp__sub_82A2E638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,16
	ctx.r9.s64 = 16;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r11,52600
	ctx.r8.u64 = ctx.r11.u64 | 52600;
	// ori r7,r10,54336
	ctx.r7.u64 = ctx.r10.u64 | 54336;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// stbx r10,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,-11204
	ctx.r11.s64 = ctx.r11.s64 + -11204;
	// stbx r10,r3,r7
	PPC_STORE_U8(ctx.r3.u32 + ctx.r7.u32, ctx.r10.u8);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82A2E66C:
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stb r10,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r10.u8);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stwu r10,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2e66c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2E66C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E68C"))) PPC_WEAK_FUNC(sub_82A2E68C);
PPC_FUNC_IMPL(__imp__sub_82A2E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E690"))) PPC_WEAK_FUNC(sub_82A2E690);
PPC_FUNC_IMPL(__imp__sub_82A2E690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 65536;
	// addis r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 65536;
	// ori r9,r11,52600
	ctx.r9.u64 = ctx.r11.u64 | 52600;
	// ori r8,r10,54724
	ctx.r8.u64 = ctx.r10.u64 | 54724;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r6,-10808
	ctx.r6.s64 = ctx.r6.s64 + -10808;
	// addi r5,r5,-10788
	ctx.r5.s64 = ctx.r5.s64 + -10788;
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 65536;
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stbx r11,r3,r9
	PPC_STORE_U8(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u8);
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r4,r4,-10768
	ctx.r4.s64 = ctx.r4.s64 + -10768;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r11,r11,-10748
	ctx.r11.s64 = ctx.r11.s64 + -10748;
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// addi r10,r10,-10728
	ctx.r10.s64 = ctx.r10.s64 + -10728;
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// addi r9,r9,-10708
	ctx.r9.s64 = ctx.r9.s64 + -10708;
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E760"))) PPC_WEAK_FUNC(sub_82A2E760);
PPC_FUNC_IMPL(__imp__sub_82A2E760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52600
	ctx.r11.u64 = ctx.r11.u64 | 52600;
	// lbzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E770"))) PPC_WEAK_FUNC(sub_82A2E770);
PPC_FUNC_IMPL(__imp__sub_82A2E770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52600
	ctx.r11.u64 = ctx.r11.u64 | 52600;
	// stbx r4,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E780"))) PPC_WEAK_FUNC(sub_82A2E780);
PPC_FUNC_IMPL(__imp__sub_82A2E780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52864
	ctx.r11.u64 = ctx.r11.u64 | 52864;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E790"))) PPC_WEAK_FUNC(sub_82A2E790);
PPC_FUNC_IMPL(__imp__sub_82A2E790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52864
	ctx.r11.u64 = ctx.r11.u64 | 52864;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E7A0"))) PPC_WEAK_FUNC(sub_82A2E7A0);
PPC_FUNC_IMPL(__imp__sub_82A2E7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52868
	ctx.r11.u64 = ctx.r11.u64 | 52868;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E7B0"))) PPC_WEAK_FUNC(sub_82A2E7B0);
PPC_FUNC_IMPL(__imp__sub_82A2E7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52868
	ctx.r11.u64 = ctx.r11.u64 | 52868;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E7C0"))) PPC_WEAK_FUNC(sub_82A2E7C0);
PPC_FUNC_IMPL(__imp__sub_82A2E7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52872
	ctx.r11.u64 = ctx.r11.u64 | 52872;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E7D0"))) PPC_WEAK_FUNC(sub_82A2E7D0);
PPC_FUNC_IMPL(__imp__sub_82A2E7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52872
	ctx.r11.u64 = ctx.r11.u64 | 52872;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E7E0"))) PPC_WEAK_FUNC(sub_82A2E7E0);
PPC_FUNC_IMPL(__imp__sub_82A2E7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52876
	ctx.r11.u64 = ctx.r11.u64 | 52876;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E7F0"))) PPC_WEAK_FUNC(sub_82A2E7F0);
PPC_FUNC_IMPL(__imp__sub_82A2E7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52876
	ctx.r11.u64 = ctx.r11.u64 | 52876;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E800"))) PPC_WEAK_FUNC(sub_82A2E800);
PPC_FUNC_IMPL(__imp__sub_82A2E800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52880
	ctx.r11.u64 = ctx.r11.u64 | 52880;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E810"))) PPC_WEAK_FUNC(sub_82A2E810);
PPC_FUNC_IMPL(__imp__sub_82A2E810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52880
	ctx.r11.u64 = ctx.r11.u64 | 52880;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E820"))) PPC_WEAK_FUNC(sub_82A2E820);
PPC_FUNC_IMPL(__imp__sub_82A2E820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52884
	ctx.r11.u64 = ctx.r11.u64 | 52884;
	// lbzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E830"))) PPC_WEAK_FUNC(sub_82A2E830);
PPC_FUNC_IMPL(__imp__sub_82A2E830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52884
	ctx.r11.u64 = ctx.r11.u64 | 52884;
	// stbx r4,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E840"))) PPC_WEAK_FUNC(sub_82A2E840);
PPC_FUNC_IMPL(__imp__sub_82A2E840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52885
	ctx.r11.u64 = ctx.r11.u64 | 52885;
	// lbzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E850"))) PPC_WEAK_FUNC(sub_82A2E850);
PPC_FUNC_IMPL(__imp__sub_82A2E850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52885
	ctx.r11.u64 = ctx.r11.u64 | 52885;
	// stbx r4,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E860"))) PPC_WEAK_FUNC(sub_82A2E860);
PPC_FUNC_IMPL(__imp__sub_82A2E860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52888
	ctx.r11.u64 = ctx.r11.u64 | 52888;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E870"))) PPC_WEAK_FUNC(sub_82A2E870);
PPC_FUNC_IMPL(__imp__sub_82A2E870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52888
	ctx.r11.u64 = ctx.r11.u64 | 52888;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E880"))) PPC_WEAK_FUNC(sub_82A2E880);
PPC_FUNC_IMPL(__imp__sub_82A2E880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52892
	ctx.r11.u64 = ctx.r11.u64 | 52892;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E890"))) PPC_WEAK_FUNC(sub_82A2E890);
PPC_FUNC_IMPL(__imp__sub_82A2E890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52892
	ctx.r11.u64 = ctx.r11.u64 | 52892;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E8A0"))) PPC_WEAK_FUNC(sub_82A2E8A0);
PPC_FUNC_IMPL(__imp__sub_82A2E8A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,60
	cr6.compare<uint32_t>(ctx.r4.u32, 60, xer);
	// bge cr6,0x82a2e8d4
	if (!cr6.lt) goto loc_82A2E8D4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,52892
	ctx.r10.u64 = ctx.r11.u64 | 52892;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82a2e8d4
	if (!cr6.lt) goto loc_82A2E8D4;
	// addi r11,r4,2204
	ctx.r11.s64 = ctx.r4.s64 + 2204;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_82A2E8D4:
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-12640
	ctx.r3.s64 = ctx.r3.s64 + -12640;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E8E0"))) PPC_WEAK_FUNC(sub_82A2E8E0);
PPC_FUNC_IMPL(__imp__sub_82A2E8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// cmplwi cr6,r6,60
	cr6.compare<uint32_t>(ctx.r6.u32, 60, xer);
	// bge cr6,0x82a2e93c
	if (!cr6.lt) goto loc_82A2E93C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,52892
	ctx.r10.u64 = ctx.r11.u64 | 52892;
	// lwzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bge cr6,0x82a2e93c
	if (!cr6.lt) goto loc_82A2E93C;
	// addi r11,r6,2204
	ctx.r11.s64 = ctx.r6.s64 + 2204;
	// lfs f0,32(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f12,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
loc_82A2E93C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E944"))) PPC_WEAK_FUNC(sub_82A2E944);
PPC_FUNC_IMPL(__imp__sub_82A2E944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E948"))) PPC_WEAK_FUNC(sub_82A2E948);
PPC_FUNC_IMPL(__imp__sub_82A2E948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,60
	cr6.compare<uint32_t>(ctx.r4.u32, 60, xer);
	// bge cr6,0x82a2e980
	if (!cr6.lt) goto loc_82A2E980;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,52892
	ctx.r10.u64 = ctx.r11.u64 | 52892;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82a2e980
	if (!cr6.lt) goto loc_82A2E980;
	// addi r11,r4,2204
	ctx.r11.s64 = ctx.r4.s64 + 2204;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A2E980:
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-12640
	ctx.r11.s64 = ctx.r11.s64 + -12640;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E990"))) PPC_WEAK_FUNC(sub_82A2E990);
PPC_FUNC_IMPL(__imp__sub_82A2E990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,60
	cr6.compare<uint32_t>(ctx.r5.u32, 60, xer);
	// bge cr6,0x82a2e9d4
	if (!cr6.lt) goto loc_82A2E9D4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,52892
	ctx.r9.u64 = ctx.r10.u64 | 52892;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// bge cr6,0x82a2e9d4
	if (!cr6.lt) goto loc_82A2E9D4;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// ori r7,r9,52908
	ctx.r7.u64 = ctx.r9.u64 | 52908;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfsx f1,r6,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
loc_82A2E9D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E9DC"))) PPC_WEAK_FUNC(sub_82A2E9DC);
PPC_FUNC_IMPL(__imp__sub_82A2E9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E9E0"))) PPC_WEAK_FUNC(sub_82A2E9E0);
PPC_FUNC_IMPL(__imp__sub_82A2E9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,60
	cr6.compare<uint32_t>(ctx.r5.u32, 60, xer);
	// bge cr6,0x82a2ea34
	if (!cr6.lt) goto loc_82A2EA34;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r11,52892
	ctx.r9.u64 = ctx.r11.u64 | 52892;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// bge cr6,0x82a2ea34
	if (!cr6.lt) goto loc_82A2EA34;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82a2ea10
	if (cr6.eq) goto loc_82A2EA10;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x82a2ea34
	if (!cr6.eq) goto loc_82A2EA34;
loc_82A2EA10:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 + ctx.r11.u64;
	// ori r7,r9,52912
	ctx.r7.u64 = ctx.r9.u64 | 52912;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r4,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r4.u32);
	// blr 
	return;
loc_82A2EA34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EA3C"))) PPC_WEAK_FUNC(sub_82A2EA3C);
PPC_FUNC_IMPL(__imp__sub_82A2EA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EA40"))) PPC_WEAK_FUNC(sub_82A2EA40);
PPC_FUNC_IMPL(__imp__sub_82A2EA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54336
	ctx.r11.u64 = ctx.r11.u64 | 54336;
	// stbx r4,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EA50"))) PPC_WEAK_FUNC(sub_82A2EA50);
PPC_FUNC_IMPL(__imp__sub_82A2EA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54336
	ctx.r11.u64 = ctx.r11.u64 | 54336;
	// lbzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EA60"))) PPC_WEAK_FUNC(sub_82A2EA60);
PPC_FUNC_IMPL(__imp__sub_82A2EA60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bge cr6,0x82a2ea84
	if (!cr6.lt) goto loc_82A2EA84;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// addi r3,r3,-11196
	ctx.r3.s64 = ctx.r3.s64 + -11196;
	// blr 
	return;
loc_82A2EA84:
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-11196
	ctx.r3.s64 = ctx.r3.s64 + -11196;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EA90"))) PPC_WEAK_FUNC(sub_82A2EA90);
PPC_FUNC_IMPL(__imp__sub_82A2EA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54724
	ctx.r11.u64 = ctx.r11.u64 | 54724;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EAA0"))) PPC_WEAK_FUNC(sub_82A2EAA0);
PPC_FUNC_IMPL(__imp__sub_82A2EAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54724
	ctx.r11.u64 = ctx.r11.u64 | 54724;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EAB0"))) PPC_WEAK_FUNC(sub_82A2EAB0);
PPC_FUNC_IMPL(__imp__sub_82A2EAB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bge cr6,0x82a2eae8
	if (!cr6.lt) goto loc_82A2EAE8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,54724
	ctx.r10.u64 = ctx.r11.u64 | 54724;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82a2eae8
	if (!cr6.lt) goto loc_82A2EAE8;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// addi r3,r3,-10808
	ctx.r3.s64 = ctx.r3.s64 + -10808;
	// blr 
	return;
loc_82A2EAE8:
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-10808
	ctx.r3.s64 = ctx.r3.s64 + -10808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EAF4"))) PPC_WEAK_FUNC(sub_82A2EAF4);
PPC_FUNC_IMPL(__imp__sub_82A2EAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EAF8"))) PPC_WEAK_FUNC(sub_82A2EAF8);
PPC_FUNC_IMPL(__imp__sub_82A2EAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// cmplwi cr6,r6,6
	cr6.compare<uint32_t>(ctx.r6.u32, 6, xer);
	// bge cr6,0x82a2eb58
	if (!cr6.lt) goto loc_82A2EB58;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,54724
	ctx.r9.u64 = ctx.r10.u64 | 54724;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bge cr6,0x82a2eb58
	if (!cr6.lt) goto loc_82A2EB58;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,32(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lfs f12,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addi r8,r8,-10808
	ctx.r8.s64 = ctx.r8.s64 + -10808;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// blr 
	return;
loc_82A2EB58:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EB60"))) PPC_WEAK_FUNC(sub_82A2EB60);
PPC_FUNC_IMPL(__imp__sub_82A2EB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,6
	cr6.compare<uint32_t>(ctx.r5.u32, 6, xer);
	// bge cr6,0x82a2eb9c
	if (!cr6.lt) goto loc_82A2EB9C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r11,54724
	ctx.r9.u64 = ctx.r11.u64 | 54724;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// bge cr6,0x82a2eb9c
	if (!cr6.lt) goto loc_82A2EB9C;
	// addi r11,r5,2737
	ctx.r11.s64 = ctx.r5.s64 + 2737;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// blr 
	return;
loc_82A2EB9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EBA4"))) PPC_WEAK_FUNC(sub_82A2EBA4);
PPC_FUNC_IMPL(__imp__sub_82A2EBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EBA8"))) PPC_WEAK_FUNC(sub_82A2EBA8);
PPC_FUNC_IMPL(__imp__sub_82A2EBA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,6
	cr6.compare<uint32_t>(ctx.r5.u32, 6, xer);
	// bge cr6,0x82a2ebec
	if (!cr6.lt) goto loc_82A2EBEC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,54724
	ctx.r9.u64 = ctx.r10.u64 | 54724;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// bge cr6,0x82a2ebec
	if (!cr6.lt) goto loc_82A2EBEC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// ori r7,r9,54744
	ctx.r7.u64 = ctx.r9.u64 | 54744;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfsx f1,r6,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
loc_82A2EBEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EBF4"))) PPC_WEAK_FUNC(sub_82A2EBF4);
PPC_FUNC_IMPL(__imp__sub_82A2EBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EBF8"))) PPC_WEAK_FUNC(sub_82A2EBF8);
PPC_FUNC_IMPL(__imp__sub_82A2EBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52604
	ctx.r11.u64 = ctx.r11.u64 | 52604;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EC08"))) PPC_WEAK_FUNC(sub_82A2EC08);
PPC_FUNC_IMPL(__imp__sub_82A2EC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,52604
	ctx.r11.u64 = ctx.r11.u64 | 52604;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EC18"))) PPC_WEAK_FUNC(sub_82A2EC18);
PPC_FUNC_IMPL(__imp__sub_82A2EC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,52860
	ctx.r10.u64 = ctx.r11.u64 | 52860;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a2ec38
	if (cr6.eq) goto loc_82A2EC38;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-12688
	ctx.r3.s64 = ctx.r3.s64 + -12688;
	// blr 
	return;
loc_82A2EC38:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,54884
	ctx.r10.u64 = ctx.r11.u64 | 54884;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addi r11,r11,4384
	ctx.r11.s64 = ctx.r11.s64 + 4384;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EC5C"))) PPC_WEAK_FUNC(sub_82A2EC5C);
PPC_FUNC_IMPL(__imp__sub_82A2EC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EC60"))) PPC_WEAK_FUNC(sub_82A2EC60);
PPC_FUNC_IMPL(__imp__sub_82A2EC60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmplwi cr6,r4,20
	cr6.compare<uint32_t>(ctx.r4.u32, 20, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,4384
	ctx.r11.s64 = ctx.r4.s64 + 4384;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2ECA0"))) PPC_WEAK_FUNC(sub_82A2ECA0);
PPC_FUNC_IMPL(__imp__sub_82A2ECA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmplwi cr6,r4,40
	cr6.compare<uint32_t>(ctx.r4.u32, 40, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,1312
	ctx.r11.s64 = ctx.r4.s64 * 1312;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stb r9,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2ECE0"))) PPC_WEAK_FUNC(sub_82A2ECE0);
PPC_FUNC_IMPL(__imp__sub_82A2ECE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmplwi cr6,r4,40
	cr6.compare<uint32_t>(ctx.r4.u32, 40, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,1312
	ctx.r11.s64 = ctx.r4.s64 * 1312;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stfs f1,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stb r9,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2ED0C"))) PPC_WEAK_FUNC(sub_82A2ED0C);
PPC_FUNC_IMPL(__imp__sub_82A2ED0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2ED10"))) PPC_WEAK_FUNC(sub_82A2ED10);
PPC_FUNC_IMPL(__imp__sub_82A2ED10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r9,54884
	ctx.r9.u64 = ctx.r9.u64 | 54884;
loc_82A2ED20:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// bne cr6,0x82a2ed3c
	if (!cr6.eq) goto loc_82A2ED3C;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r7,r3,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// beq cr6,0x82a2ed54
	if (cr6.eq) goto loc_82A2ED54;
loc_82A2ED3C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1312
	ctx.r11.s64 = ctx.r11.s64 + 1312;
	// cmplwi cr6,r10,40
	cr6.compare<uint32_t>(ctx.r10.u32, 40, xer);
	// blt cr6,0x82a2ed20
	if (cr6.lt) goto loc_82A2ED20;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82A2ED54:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2ED5C"))) PPC_WEAK_FUNC(sub_82A2ED5C);
PPC_FUNC_IMPL(__imp__sub_82A2ED5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2ED60"))) PPC_WEAK_FUNC(sub_82A2ED60);
PPC_FUNC_IMPL(__imp__sub_82A2ED60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmplwi cr6,r4,40
	cr6.compare<uint32_t>(ctx.r4.u32, 40, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,1312
	ctx.r11.s64 = ctx.r4.s64 * 1312;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2ED7C"))) PPC_WEAK_FUNC(sub_82A2ED7C);
PPC_FUNC_IMPL(__imp__sub_82A2ED7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2ED80"))) PPC_WEAK_FUNC(sub_82A2ED80);
PPC_FUNC_IMPL(__imp__sub_82A2ED80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmplwi cr6,r4,40
	cr6.compare<uint32_t>(ctx.r4.u32, 40, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,1312
	ctx.r11.s64 = ctx.r4.s64 * 1312;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EDA0"))) PPC_WEAK_FUNC(sub_82A2EDA0);
PPC_FUNC_IMPL(__imp__sub_82A2EDA0) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,122
	ctx.r5.s64 = 122;
	// bl 0x82a2ed10
	ctx.lr = 0x82A2EDB8;
	sub_82A2ED10(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82a2eddc
	if (cr6.eq) goto loc_82A2EDDC;
	// mulli r11,r3,1312
	ctx.r11.s64 = ctx.r3.s64 * 1312;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A2EDDC:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EDF0"))) PPC_WEAK_FUNC(sub_82A2EDF0);
PPC_FUNC_IMPL(__imp__sub_82A2EDF0) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,94
	ctx.r5.s64 = 94;
	// bl 0x82a2ed10
	ctx.lr = 0x82A2EE08;
	sub_82A2ED10(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82a2ee2c
	if (cr6.eq) goto loc_82A2EE2C;
	// mulli r11,r3,1312
	ctx.r11.s64 = ctx.r3.s64 * 1312;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A2EE2C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EE40"))) PPC_WEAK_FUNC(sub_82A2EE40);
PPC_FUNC_IMPL(__imp__sub_82A2EE40) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-13056
	ctx.r3.s64 = ctx.r3.s64 + -13056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EE4C"))) PPC_WEAK_FUNC(sub_82A2EE4C);
PPC_FUNC_IMPL(__imp__sub_82A2EE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EE50"))) PPC_WEAK_FUNC(sub_82A2EE50);
PPC_FUNC_IMPL(__imp__sub_82A2EE50) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-13016
	ctx.r3.s64 = ctx.r3.s64 + -13016;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EE5C"))) PPC_WEAK_FUNC(sub_82A2EE5C);
PPC_FUNC_IMPL(__imp__sub_82A2EE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EE60"))) PPC_WEAK_FUNC(sub_82A2EE60);
PPC_FUNC_IMPL(__imp__sub_82A2EE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54848
	ctx.r11.u64 = ctx.r11.u64 | 54848;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EE70"))) PPC_WEAK_FUNC(sub_82A2EE70);
PPC_FUNC_IMPL(__imp__sub_82A2EE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,54848
	ctx.r10.u64 = ctx.r11.u64 | 54848;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82a2eec8
	if (cr6.gt) goto loc_82A2EEC8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a2eea8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A2EEA8;
	// bdzf 4*cr6+eq,0x82a2eeb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A2EEB0;
	// bdzf 4*cr6+eq,0x82a2eeb8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A2EEB8;
	// bne cr6,0x82a2eec0
	if (!cr6.eq) goto loc_82A2EEC0;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A2EEA8:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82A2EEB0:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82A2EEB8:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82A2EEC0:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82A2EEC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EED0"))) PPC_WEAK_FUNC(sub_82A2EED0);
PPC_FUNC_IMPL(__imp__sub_82A2EED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54848
	ctx.r11.u64 = ctx.r11.u64 | 54848;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EEE0"))) PPC_WEAK_FUNC(sub_82A2EEE0);
PPC_FUNC_IMPL(__imp__sub_82A2EEE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A2EEE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a2eff8
	if (cr6.eq) goto loc_82A2EFF8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2eff8
	if (cr6.eq) goto loc_82A2EFF8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r30,r11,16432
	ctx.r30.s64 = ctx.r11.s64 + 16432;
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// bl 0x831cef50
	ctx.lr = 0x82A2EF1C;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a2ef30
	if (!cr6.eq) goto loc_82A2EF30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2EF30:
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cef50
	ctx.lr = 0x82A2EF40;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a2ef58
	if (!cr6.eq) goto loc_82A2EF58;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2EF58:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cef50
	ctx.lr = 0x82A2EF68;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a2ef80
	if (!cr6.eq) goto loc_82A2EF80;
	// li r29,2
	ctx.r29.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2EF80:
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cef50
	ctx.lr = 0x82A2EF90;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a2efa8
	if (!cr6.eq) goto loc_82A2EFA8;
	// li r29,3
	ctx.r29.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2EFA8:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cef50
	ctx.lr = 0x82A2EFB8;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a2efd0
	if (!cr6.eq) goto loc_82A2EFD0;
	// li r29,4
	ctx.r29.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2EFD0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cef50
	ctx.lr = 0x82A2EFE0;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a2efec
	if (!cr6.eq) goto loc_82A2EFEC;
	// li r29,5
	ctx.r29.s64 = 5;
loc_82A2EFEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2EFF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F004"))) PPC_WEAK_FUNC(sub_82A2F004);
PPC_FUNC_IMPL(__imp__sub_82A2F004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F008"))) PPC_WEAK_FUNC(sub_82A2F008);
PPC_FUNC_IMPL(__imp__sub_82A2F008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A2F010;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,6
	ctx.r29.s64 = 6;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a2f124
	if (cr6.eq) goto loc_82A2F124;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2f124
	if (cr6.eq) goto loc_82A2F124;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r30,r11,16620
	ctx.r30.s64 = ctx.r11.s64 + 16620;
	// addi r4,r30,-164
	ctx.r4.s64 = ctx.r30.s64 + -164;
	// bl 0x831cef50
	ctx.lr = 0x82A2F044;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a2f05c
	if (!cr6.eq) goto loc_82A2F05C;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2F05C:
	// addi r4,r30,-132
	ctx.r4.s64 = ctx.r30.s64 + -132;
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cef50
	ctx.lr = 0x82A2F06C;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a2f084
	if (!cr6.eq) goto loc_82A2F084;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2F084:
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cef50
	ctx.lr = 0x82A2F094;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a2f0ac
	if (!cr6.eq) goto loc_82A2F0AC;
	// li r29,2
	ctx.r29.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2F0AC:
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// li r5,33
	ctx.r5.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cef50
	ctx.lr = 0x82A2F0BC;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a2f0d4
	if (!cr6.eq) goto loc_82A2F0D4;
	// li r29,3
	ctx.r29.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2F0D4:
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cef50
	ctx.lr = 0x82A2F0E4;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a2f0fc
	if (!cr6.eq) goto loc_82A2F0FC;
	// li r29,4
	ctx.r29.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2F0FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,34
	ctx.r5.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cef50
	ctx.lr = 0x82A2F10C;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a2f118
	if (!cr6.eq) goto loc_82A2F118;
	// li r29,5
	ctx.r29.s64 = 5;
loc_82A2F118:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2F124:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F130"))) PPC_WEAK_FUNC(sub_82A2F130);
PPC_FUNC_IMPL(__imp__sub_82A2F130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A2F138;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a2f1a8
	if (cr6.eq) goto loc_82A2F1A8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2f1a8
	if (cr6.eq) goto loc_82A2F1A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,25
	ctx.r5.s64 = 25;
	// addi r30,r11,16684
	ctx.r30.s64 = ctx.r11.s64 + 16684;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// bl 0x831cef50
	ctx.lr = 0x82A2F16C;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a2f180
	if (!cr6.eq) goto loc_82A2F180;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2F180:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,23
	ctx.r5.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cef50
	ctx.lr = 0x82A2F190;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a2f19c
	if (!cr6.eq) goto loc_82A2F19C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82A2F19C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2F1A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F1B4"))) PPC_WEAK_FUNC(sub_82A2F1B4);
PPC_FUNC_IMPL(__imp__sub_82A2F1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F1B8"))) PPC_WEAK_FUNC(sub_82A2F1B8);
PPC_FUNC_IMPL(__imp__sub_82A2F1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A2F1C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a2f310
	if (cr6.eq) goto loc_82A2F310;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2f310
	if (cr6.eq) goto loc_82A2F310;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,17108
	ctx.r11.s64 = ctx.r11.s64 + 17108;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r8,r11,-400
	ctx.r8.s64 = ctx.r11.s64 + -400;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// addi r7,r11,-372
	ctx.r7.s64 = ctx.r11.s64 + -372;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r6,r11,-340
	ctx.r6.s64 = ctx.r11.s64 + -340;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r5,r11,-308
	ctx.r5.s64 = ctx.r11.s64 + -308;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addi r4,r11,-268
	ctx.r4.s64 = ctx.r11.s64 + -268;
	// addi r3,r11,-232
	ctx.r3.s64 = ctx.r11.s64 + -232;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r10,r11,-192
	ctx.r10.s64 = ctx.r11.s64 + -192;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addi r9,r11,-152
	ctx.r9.s64 = ctx.r11.s64 + -152;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r8,r11,-112
	ctx.r8.s64 = ctx.r11.s64 + -112;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r7,r11,-72
	ctx.r7.s64 = ctx.r11.s64 + -72;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// li r6,11
	ctx.r6.s64 = 11;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82A2F2A8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A2F2AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a2f2ac
	if (!cr6.eq) goto loc_82A2F2AC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x831cef50
	ctx.lr = 0x82A2F2D4;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82a2f2f8
	if (cr6.eq) goto loc_82A2F2F8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r29,12
	cr6.compare<uint32_t>(ctx.r29.u32, 12, xer);
	// blt cr6,0x82a2f2a8
	if (cr6.lt) goto loc_82A2F2A8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A2F2F8:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A2F310:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F31C"))) PPC_WEAK_FUNC(sub_82A2F31C);
PPC_FUNC_IMPL(__imp__sub_82A2F31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F320"))) PPC_WEAK_FUNC(sub_82A2F320);
PPC_FUNC_IMPL(__imp__sub_82A2F320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f2,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f7,f9,f2
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// lfs f0,8976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f5,4(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,12(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f3,16(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F36C"))) PPC_WEAK_FUNC(sub_82A2F36C);
PPC_FUNC_IMPL(__imp__sub_82A2F36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F370"))) PPC_WEAK_FUNC(sub_82A2F370);
PPC_FUNC_IMPL(__imp__sub_82A2F370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54852
	ctx.r11.u64 = ctx.r11.u64 | 54852;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F380"))) PPC_WEAK_FUNC(sub_82A2F380);
PPC_FUNC_IMPL(__imp__sub_82A2F380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54852
	ctx.r11.u64 = ctx.r11.u64 | 54852;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F390"))) PPC_WEAK_FUNC(sub_82A2F390);
PPC_FUNC_IMPL(__imp__sub_82A2F390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54856
	ctx.r11.u64 = ctx.r11.u64 | 54856;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F3A0"))) PPC_WEAK_FUNC(sub_82A2F3A0);
PPC_FUNC_IMPL(__imp__sub_82A2F3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54856
	ctx.r11.u64 = ctx.r11.u64 | 54856;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F3B0"))) PPC_WEAK_FUNC(sub_82A2F3B0);
PPC_FUNC_IMPL(__imp__sub_82A2F3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54860
	ctx.r11.u64 = ctx.r11.u64 | 54860;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F3C0"))) PPC_WEAK_FUNC(sub_82A2F3C0);
PPC_FUNC_IMPL(__imp__sub_82A2F3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54860
	ctx.r11.u64 = ctx.r11.u64 | 54860;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F3D0"))) PPC_WEAK_FUNC(sub_82A2F3D0);
PPC_FUNC_IMPL(__imp__sub_82A2F3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54868
	ctx.r11.u64 = ctx.r11.u64 | 54868;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F3E0"))) PPC_WEAK_FUNC(sub_82A2F3E0);
PPC_FUNC_IMPL(__imp__sub_82A2F3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54864
	ctx.r11.u64 = ctx.r11.u64 | 54864;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F3F0"))) PPC_WEAK_FUNC(sub_82A2F3F0);
PPC_FUNC_IMPL(__imp__sub_82A2F3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54864
	ctx.r11.u64 = ctx.r11.u64 | 54864;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F400"))) PPC_WEAK_FUNC(sub_82A2F400);
PPC_FUNC_IMPL(__imp__sub_82A2F400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,54860
	ctx.r9.u64 = ctx.r10.u64 | 54860;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// blt cr6,0x82a2f424
	if (cr6.lt) goto loc_82A2F424;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x82a2f458
	goto loc_82A2F458;
loc_82A2F424:
	// ori r9,r10,54856
	ctx.r9.u64 = ctx.r10.u64 | 54856;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// blt cr6,0x82a2f440
	if (cr6.lt) goto loc_82A2F440;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x82a2f458
	goto loc_82A2F458;
loc_82A2F440:
	// ori r9,r10,54852
	ctx.r9.u64 = ctx.r10.u64 | 54852;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// blt cr6,0x82a2f474
	if (cr6.lt) goto loc_82A2F474;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82A2F458:
	// ori r8,r10,54864
	ctx.r8.u64 = ctx.r10.u64 | 54864;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// ori r9,r10,54868
	ctx.r9.u64 = ctx.r10.u64 | 54868;
	// stwx r4,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
loc_82A2F474:
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,54864
	ctx.r8.u64 = ctx.r10.u64 | 54864;
	// ori r7,r9,54868
	ctx.r7.u64 = ctx.r9.u64 | 54868;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r4,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F494"))) PPC_WEAK_FUNC(sub_82A2F494);
PPC_FUNC_IMPL(__imp__sub_82A2F494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F498"))) PPC_WEAK_FUNC(sub_82A2F498);
PPC_FUNC_IMPL(__imp__sub_82A2F498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54872
	ctx.r11.u64 = ctx.r11.u64 | 54872;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F4A8"))) PPC_WEAK_FUNC(sub_82A2F4A8);
PPC_FUNC_IMPL(__imp__sub_82A2F4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54872
	ctx.r11.u64 = ctx.r11.u64 | 54872;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F4B8"))) PPC_WEAK_FUNC(sub_82A2F4B8);
PPC_FUNC_IMPL(__imp__sub_82A2F4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54876
	ctx.r11.u64 = ctx.r11.u64 | 54876;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F4C8"))) PPC_WEAK_FUNC(sub_82A2F4C8);
PPC_FUNC_IMPL(__imp__sub_82A2F4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54876
	ctx.r11.u64 = ctx.r11.u64 | 54876;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F4D8"))) PPC_WEAK_FUNC(sub_82A2F4D8);
PPC_FUNC_IMPL(__imp__sub_82A2F4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54884
	ctx.r11.u64 = ctx.r11.u64 | 54884;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F4E8"))) PPC_WEAK_FUNC(sub_82A2F4E8);
PPC_FUNC_IMPL(__imp__sub_82A2F4E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,20
	cr6.compare<uint32_t>(ctx.r4.u32, 20, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,54884
	ctx.r10.u64 = ctx.r11.u64 | 54884;
	// stwx r4,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F500"))) PPC_WEAK_FUNC(sub_82A2F500);
PPC_FUNC_IMPL(__imp__sub_82A2F500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54880
	ctx.r11.u64 = ctx.r11.u64 | 54880;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F510"))) PPC_WEAK_FUNC(sub_82A2F510);
PPC_FUNC_IMPL(__imp__sub_82A2F510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54880
	ctx.r11.u64 = ctx.r11.u64 | 54880;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F520"))) PPC_WEAK_FUNC(sub_82A2F520);
PPC_FUNC_IMPL(__imp__sub_82A2F520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54888
	ctx.r11.u64 = ctx.r11.u64 | 54888;
	// stbx r4,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F530"))) PPC_WEAK_FUNC(sub_82A2F530);
PPC_FUNC_IMPL(__imp__sub_82A2F530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,54888
	ctx.r11.u64 = ctx.r11.u64 | 54888;
	// lbzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F540"))) PPC_WEAK_FUNC(sub_82A2F540);
PPC_FUNC_IMPL(__imp__sub_82A2F540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,255
	ctx.r3.s64 = 255;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,52872
	ctx.r9.u64 = ctx.r10.u64 | 52872;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F560"))) PPC_WEAK_FUNC(sub_82A2F560);
PPC_FUNC_IMPL(__imp__sub_82A2F560) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a2ed10
	ctx.lr = 0x82A2F584;
	sub_82A2ED10(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82a2f5c8
	if (cr6.eq) goto loc_82A2F5C8;
	// mulli r11,r3,1312
	ctx.r11.s64 = ctx.r3.s64 * 1312;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f12,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
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
loc_82A2F5C8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
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

__attribute__((alias("__imp__sub_82A2F5E0"))) PPC_WEAK_FUNC(sub_82A2F5E0);
PPC_FUNC_IMPL(__imp__sub_82A2F5E0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a2ed10
	ctx.lr = 0x82A2F5FC;
	sub_82A2ED10(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82a2f610
	if (cr6.eq) goto loc_82A2F610;
	// mulli r11,r3,1312
	ctx.r11.s64 = ctx.r3.s64 * 1312;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfs f1,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
loc_82A2F610:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F620"))) PPC_WEAK_FUNC(sub_82A2F620);
PPC_FUNC_IMPL(__imp__sub_82A2F620) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82a2ed10
	ctx.lr = 0x82A2F634;
	sub_82A2ED10(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82a2f644
	if (!cr6.eq) goto loc_82A2F644;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_82A2F644:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F654"))) PPC_WEAK_FUNC(sub_82A2F654);
PPC_FUNC_IMPL(__imp__sub_82A2F654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F658"))) PPC_WEAK_FUNC(sub_82A2F658);
PPC_FUNC_IMPL(__imp__sub_82A2F658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x82a2f698
	if (cr6.eq) goto loc_82A2F698;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x82a2f688
	if (cr6.eq) goto loc_82A2F688;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// beq cr6,0x82a2f678
	if (cr6.eq) goto loc_82A2F678;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A2F678:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,54860
	ctx.r10.u64 = ctx.r11.u64 | 54860;
	// lwzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82A2F688:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,54856
	ctx.r10.u64 = ctx.r11.u64 | 54856;
	// lwzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82A2F698:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,54852
	ctx.r10.u64 = ctx.r11.u64 | 54852;
	// lwzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F6A8"))) PPC_WEAK_FUNC(sub_82A2F6A8);
PPC_FUNC_IMPL(__imp__sub_82A2F6A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A2F6B0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-1440(r1)
	ea = -1440 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r10,r11,52600
	ctx.r10.u64 = ctx.r11.u64 | 52600;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// li r29,40
	ctx.r29.s64 = 40;
	// li r24,11
	ctx.r24.s64 = 11;
	// stbx r28,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r28.u8);
	// li r25,-1
	ctx.r25.s64 = -1;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r26,122
	ctx.r26.s64 = 122;
	// li r27,94
	ctx.r27.s64 = 94;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A2F6EC:
	// stw r24,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r25,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r25.u32);
	// stw r26,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r26.u32);
	// stw r27,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r27.u32);
	// stw r28,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r28.u32);
	// stb r30,-16(r31)
	PPC_STORE_U8(ctx.r31.u32 + -16, ctx.r30.u8);
	// stfs f31,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stb r30,-16(r31)
	PPC_STORE_U8(ctx.r31.u32 + -16, ctx.r30.u8);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stb r30,-16(r31)
	PPC_STORE_U8(ctx.r31.u32 + -16, ctx.r30.u8);
	// bl 0x82a3b9a8
	ctx.lr = 0x82A2F724;
	sub_82A3B9A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a3b8b0
	ctx.lr = 0x82A2F72C;
	sub_82A3B8B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x825a5200
	ctx.lr = 0x82A2F738;
	sub_825A5200(ctx, base);
	// stb r30,-16(r31)
	PPC_STORE_U8(ctx.r31.u32 + -16, ctx.r30.u8);
	// stb r28,-16(r31)
	PPC_STORE_U8(ctx.r31.u32 + -16, ctx.r28.u8);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,1312
	ctx.r31.s64 = ctx.r31.s64 + 1312;
	// bne 0x82a2f6ec
	if (!cr0.eq) goto loc_82A2F6EC;
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F758"))) PPC_WEAK_FUNC(sub_82A2F758);
PPC_FUNC_IMPL(__imp__sub_82A2F758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A2F760;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,54884
	ctx.r9.u64 = ctx.r10.u64 | 54884;
	// li r10,20
	ctx.r10.s64 = 20;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// ori r11,r11,52604
	ctx.r11.u64 = ctx.r11.u64 | 52604;
	// addi r28,r28,-12936
	ctx.r28.s64 = ctx.r28.s64 + -12936;
	// li r31,0
	ctx.r31.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwx r31,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r31.u32);
	// stwx r31,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r31.u32);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_82A2F7A8:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f31,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2f7a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2F7A8;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r10,r10,-12688
	ctx.r10.s64 = ctx.r10.s64 + -12688;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// ori r9,r11,52860
	ctx.r9.u64 = ctx.r11.u64 | 52860;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lfs f0,-7352(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -7352);
	ctx.f0.f64 = double(temp.f32);
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// stfs f31,0(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stfs f31,4(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stfs f31,8(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stbx r31,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r31.u8);
	// lfs f13,21708(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21708);
	ctx.f13.f64 = double(temp.f32);
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r8,-13056
	ctx.r8.s64 = ctx.r8.s64 + -13056;
	// addi r7,r7,-13016
	ctx.r7.s64 = ctx.r7.s64 + -13016;
	// ori r26,r3,52876
	ctx.r26.u64 = ctx.r3.u64 | 52876;
	// ori r25,r11,52884
	ctx.r25.u64 = ctx.r11.u64 | 52884;
	// ori r6,r6,52864
	ctx.r6.u64 = ctx.r6.u64 | 52864;
	// ori r5,r5,52868
	ctx.r5.u64 = ctx.r5.u64 | 52868;
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// ori r4,r4,52872
	ctx.r4.u64 = ctx.r4.u64 | 52872;
	// stfs f13,20(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// ori r10,r10,52885
	ctx.r10.u64 = ctx.r10.u64 | 52885;
	// stb r31,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r31.u8);
	// ori r9,r9,52888
	ctx.r9.u64 = ctx.r9.u64 | 52888;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// li r3,2000
	ctx.r3.s64 = 2000;
	// stb r29,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r29.u8);
	// li r24,3000
	ctx.r24.s64 = 3000;
	// stb r29,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r29.u8);
	// li r27,255
	ctx.r27.s64 = 255;
	// stw r3,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r3.u32);
	// li r23,5
	ctx.r23.s64 = 5;
	// stb r29,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r29.u8);
	// li r22,2
	ctx.r22.s64 = 2;
	// stb r29,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r29.u8);
	// stw r24,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// stw r11,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r11.u32);
	// stfs f31,40(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 40, temp.u32);
	// stfs f31,44(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 44, temp.u32);
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// stfs f31,48(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 48, temp.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// stfs f31,52(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 52, temp.u32);
	// stw r31,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r31.u32);
	// stfs f31,56(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 56, temp.u32);
	// stw r31,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r31.u32);
	// stfs f31,60(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 60, temp.u32);
	// stw r31,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r31.u32);
	// stfs f31,64(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 64, temp.u32);
	// stw r31,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r31.u32);
	// stfs f31,68(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 68, temp.u32);
	// stw r31,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r31.u32);
	// stfs f31,72(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 72, temp.u32);
	// stw r31,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r31.u32);
	// stfs f31,76(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 76, temp.u32);
	// stw r31,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r31.u32);
	// stw r31,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r31.u32);
	// stwx r23,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r23.u32);
	// stwx r22,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r22.u32);
	// stwx r27,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r27.u32);
	// stwx r27,r30,r26
	PPC_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r27.u32);
	// stbx r31,r30,r25
	PPC_STORE_U8(ctx.r30.u32 + ctx.r25.u32, ctx.r31.u8);
	// stbx r29,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r29.u8);
	// stwx r31,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r31.u32);
	// bl 0x82a2f6a8
	ctx.lr = 0x82A2F8F4;
	sub_82A2F6A8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,60
	ctx.r10.s64 = 60;
	// ori r11,r11,52892
	ctx.r11.u64 = ctx.r11.u64 | 52892;
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stwx r31,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_82A2F910:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stbu r31,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2f910
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2F910;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e690
	ctx.lr = 0x82A2F934;
	sub_82A2E690(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,54848
	ctx.r11.u64 = ctx.r11.u64 | 54848;
	// ori r10,r10,54852
	ctx.r10.u64 = ctx.r10.u64 | 54852;
	// ori r9,r9,54856
	ctx.r9.u64 = ctx.r9.u64 | 54856;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stwx r31,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stwx r31,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r31.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stwx r31,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r31.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r28,0
	ctx.r28.s64 = 0;
	// lis r26,0
	ctx.r26.s64 = 0;
	// lis r25,0
	ctx.r25.s64 = 0;
	// ori r8,r8,54860
	ctx.r8.u64 = ctx.r8.u64 | 54860;
	// ori r7,r7,52880
	ctx.r7.u64 = ctx.r7.u64 | 52880;
	// ori r6,r6,54336
	ctx.r6.u64 = ctx.r6.u64 | 54336;
	// ori r5,r5,54880
	ctx.r5.u64 = ctx.r5.u64 | 54880;
	// ori r4,r4,54876
	ctx.r4.u64 = ctx.r4.u64 | 54876;
	// ori r3,r3,54872
	ctx.r3.u64 = ctx.r3.u64 | 54872;
	// stwx r31,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r31.u32);
	// ori r11,r28,54864
	ctx.r11.u64 = ctx.r28.u64 | 54864;
	// stwx r27,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r27.u32);
	// ori r10,r26,54868
	ctx.r10.u64 = ctx.r26.u64 | 54868;
	// stbx r31,r30,r6
	PPC_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u8);
	// ori r9,r25,54888
	ctx.r9.u64 = ctx.r25.u64 | 54888;
	// stwx r29,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r29.u32);
	// stwx r31,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r31.u32);
	// stwx r31,r30,r3
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r31.u32);
	// stwx r31,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u32);
	// stwx r31,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r31.u32);
	// stbx r31,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r31.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F9D0"))) PPC_WEAK_FUNC(sub_82A2F9D0);
PPC_FUNC_IMPL(__imp__sub_82A2F9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A2F9D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,39
	ctx.r31.s64 = 39;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
loc_82A2F9E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a36b90
	ctx.lr = 0x82A2F9F0;
	sub_82A36B90(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,1312
	ctx.r30.s64 = ctx.r30.s64 + 1312;
	// bge 0x82a2f9e8
	if (!cr0.lt) goto loc_82A2F9E8;
	// li r10,20
	ctx.r10.s64 = 20;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r11,r11,-12932
	ctx.r11.s64 = ctx.r11.s64 + -12932;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82A2FA14:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f0,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2fa14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2FA14;
	// addis r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 65536;
	// li r10,60
	ctx.r10.s64 = 60;
	// addi r9,r9,-12688
	ctx.r9.s64 = ctx.r9.s64 + -12688;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r11,r11,-12656
	ctx.r11.s64 = ctx.r11.s64 + -12656;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
loc_82A2FA48:
	// stfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfsu f0,24(r11)
	ea = 24 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2fa48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2FA48;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r11,-11196
	ctx.r11.s64 = ctx.r11.s64 + -11196;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A2FA68:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// stb r10,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r10.u8);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stb r10,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r10.u8);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bge 0x82a2fa68
	if (!cr0.lt) goto loc_82A2FA68;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-10808
	ctx.r11.s64 = ctx.r11.s64 + -10808;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// bl 0x82a2f758
	ctx.lr = 0x82A2FAF0;
	sub_82A2F758(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2FAFC"))) PPC_WEAK_FUNC(sub_82A2FAFC);
PPC_FUNC_IMPL(__imp__sub_82A2FAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FB00"))) PPC_WEAK_FUNC(sub_82A2FB00);
PPC_FUNC_IMPL(__imp__sub_82A2FB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,3
	ctx.r10.s64 = 3;
	// subfic r8,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r3.s64;
	// subfic r7,r3,2
	xer.ca = ctx.r3.u32 <= 2;
	ctx.r7.s64 = 2 - ctx.r3.s64;
	// subfic r6,r3,-1
	xer.ca = ctx.r3.u32 <= 4294967295;
	ctx.r6.s64 = -1 - ctx.r3.s64;
	// addi r9,r4,3
	ctx.r9.s64 = ctx.r4.s64 + 3;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subfic r5,r4,-2
	xer.ca = ctx.r4.u32 <= 4294967294;
	ctx.r5.s64 = -2 - ctx.r4.s64;
loc_82A2FB24:
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// bge cr6,0x82a2fb38
	if (!cr6.lt) goto loc_82A2FB38;
	// lwz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1);
	// stb r4,-3(r9)
	PPC_STORE_U8(ctx.r9.u32 + -3, ctx.r4.u8);
loc_82A2FB38:
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// bge cr6,0x82a2fb4c
	if (!cr6.lt) goto loc_82A2FB4C;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stbx r4,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
loc_82A2FB4C:
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// bge cr6,0x82a2fb60
	if (!cr6.lt) goto loc_82A2FB60;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r4,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r4.u8);
loc_82A2FB60:
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// bge cr6,0x82a2fb74
	if (!cr6.lt) goto loc_82A2FB74;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
loc_82A2FB74:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82a2fb24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2FB24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FB84"))) PPC_WEAK_FUNC(sub_82A2FB84);
PPC_FUNC_IMPL(__imp__sub_82A2FB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FB88"))) PPC_WEAK_FUNC(sub_82A2FB88);
PPC_FUNC_IMPL(__imp__sub_82A2FB88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r5,r8,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// rlwinm r11,r6,0,24,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r7,r7,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// rlwinm r6,r8,0,16,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rotlwi r10,r11,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 | ctx.r6.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lbz r6,3(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// rlwimi r8,r6,24,0,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 24) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// or r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// rlwinm r9,r10,0,24,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// lbz r8,5(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// rlwinm r11,r5,0,16,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// lbz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// rotlwi r9,r10,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lbz r5,7(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// rlwimi r6,r5,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lbz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// or r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 | ctx.r7.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FC38"))) PPC_WEAK_FUNC(sub_82A2FC38);
PPC_FUNC_IMPL(__imp__sub_82A2FC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,2
	ctx.r10.s64 = 2;
	// subfic r8,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r3.s64;
	// subfic r7,r3,2
	xer.ca = ctx.r3.u32 <= 2;
	ctx.r7.s64 = 2 - ctx.r3.s64;
	// subfic r6,r3,-1
	xer.ca = ctx.r3.u32 <= 4294967295;
	ctx.r6.s64 = -1 - ctx.r3.s64;
	// addi r9,r4,3
	ctx.r9.s64 = ctx.r4.s64 + 3;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subfic r5,r4,-2
	xer.ca = ctx.r4.u32 <= 4294967294;
	ctx.r5.s64 = -2 - ctx.r4.s64;
loc_82A2FC5C:
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bge cr6,0x82a2fc70
	if (!cr6.lt) goto loc_82A2FC70;
	// lwz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1);
	// stb r4,-3(r9)
	PPC_STORE_U8(ctx.r9.u32 + -3, ctx.r4.u8);
loc_82A2FC70:
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bge cr6,0x82a2fc84
	if (!cr6.lt) goto loc_82A2FC84;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stbx r4,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
loc_82A2FC84:
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bge cr6,0x82a2fc98
	if (!cr6.lt) goto loc_82A2FC98;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r4,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r4.u8);
loc_82A2FC98:
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bge cr6,0x82a2fcac
	if (!cr6.lt) goto loc_82A2FCAC;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
loc_82A2FCAC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82a2fc5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2FC5C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FCBC"))) PPC_WEAK_FUNC(sub_82A2FCBC);
PPC_FUNC_IMPL(__imp__sub_82A2FCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FCC0"))) PPC_WEAK_FUNC(sub_82A2FCC0);
PPC_FUNC_IMPL(__imp__sub_82A2FCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,2
	ctx.r10.s64 = 2;
	// subfic r8,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r3.s64;
	// subfic r7,r3,2
	xer.ca = ctx.r3.u32 <= 2;
	ctx.r7.s64 = 2 - ctx.r3.s64;
	// subfic r6,r3,-1
	xer.ca = ctx.r3.u32 <= 4294967295;
	ctx.r6.s64 = -1 - ctx.r3.s64;
	// addi r9,r4,3
	ctx.r9.s64 = ctx.r4.s64 + 3;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subfic r5,r4,-2
	xer.ca = ctx.r4.u32 <= 4294967294;
	ctx.r5.s64 = -2 - ctx.r4.s64;
loc_82A2FCE4:
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// bge cr6,0x82a2fcf8
	if (!cr6.lt) goto loc_82A2FCF8;
	// lwz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1);
	// stb r4,-3(r9)
	PPC_STORE_U8(ctx.r9.u32 + -3, ctx.r4.u8);
loc_82A2FCF8:
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// bge cr6,0x82a2fd0c
	if (!cr6.lt) goto loc_82A2FD0C;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stbx r4,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
loc_82A2FD0C:
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// bge cr6,0x82a2fd20
	if (!cr6.lt) goto loc_82A2FD20;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r4,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r4.u8);
loc_82A2FD20:
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// bge cr6,0x82a2fd34
	if (!cr6.lt) goto loc_82A2FD34;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
loc_82A2FD34:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82a2fce4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2FCE4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FD44"))) PPC_WEAK_FUNC(sub_82A2FD44);
PPC_FUNC_IMPL(__imp__sub_82A2FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FD48"))) PPC_WEAK_FUNC(sub_82A2FD48);
PPC_FUNC_IMPL(__imp__sub_82A2FD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,3
	ctx.r10.s64 = 3;
	// subfic r8,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r3.s64;
	// subfic r7,r3,2
	xer.ca = ctx.r3.u32 <= 2;
	ctx.r7.s64 = 2 - ctx.r3.s64;
	// subfic r6,r3,-1
	xer.ca = ctx.r3.u32 <= 4294967295;
	ctx.r6.s64 = -1 - ctx.r3.s64;
	// addi r9,r4,3
	ctx.r9.s64 = ctx.r4.s64 + 3;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subfic r5,r4,-2
	xer.ca = ctx.r4.u32 <= 4294967294;
	ctx.r5.s64 = -2 - ctx.r4.s64;
loc_82A2FD6C:
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// bge cr6,0x82a2fd80
	if (!cr6.lt) goto loc_82A2FD80;
	// lwz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1);
	// stb r4,-3(r9)
	PPC_STORE_U8(ctx.r9.u32 + -3, ctx.r4.u8);
loc_82A2FD80:
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// bge cr6,0x82a2fd94
	if (!cr6.lt) goto loc_82A2FD94;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stbx r4,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
loc_82A2FD94:
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// bge cr6,0x82a2fda8
	if (!cr6.lt) goto loc_82A2FDA8;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r4,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r4.u8);
loc_82A2FDA8:
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// bge cr6,0x82a2fdbc
	if (!cr6.lt) goto loc_82A2FDBC;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
loc_82A2FDBC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82a2fd6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2FD6C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FDCC"))) PPC_WEAK_FUNC(sub_82A2FDCC);
PPC_FUNC_IMPL(__imp__sub_82A2FDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FDD0"))) PPC_WEAK_FUNC(sub_82A2FDD0);
PPC_FUNC_IMPL(__imp__sub_82A2FDD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r5,r8,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// rlwinm r11,r6,0,24,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r7,r7,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// rlwinm r6,r8,0,16,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rotlwi r10,r11,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 | ctx.r6.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lbz r6,3(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// rlwimi r8,r6,24,0,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 24) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// or r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// rlwinm r9,r10,0,24,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// lbz r8,5(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// rlwinm r11,r5,0,16,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// lbz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// rotlwi r9,r10,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lbz r5,7(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// rlwimi r6,r5,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// rlwinm r9,r10,0,24,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// lbz r8,9(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FE94"))) PPC_WEAK_FUNC(sub_82A2FE94);
PPC_FUNC_IMPL(__imp__sub_82A2FE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FE98"))) PPC_WEAK_FUNC(sub_82A2FE98);
PPC_FUNC_IMPL(__imp__sub_82A2FE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,3
	ctx.r10.s64 = 3;
	// subfic r8,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r3.s64;
	// subfic r7,r3,2
	xer.ca = ctx.r3.u32 <= 2;
	ctx.r7.s64 = 2 - ctx.r3.s64;
	// subfic r6,r3,-1
	xer.ca = ctx.r3.u32 <= 4294967295;
	ctx.r6.s64 = -1 - ctx.r3.s64;
	// addi r9,r4,3
	ctx.r9.s64 = ctx.r4.s64 + 3;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subfic r5,r4,-2
	xer.ca = ctx.r4.u32 <= 4294967294;
	ctx.r5.s64 = -2 - ctx.r4.s64;
loc_82A2FEBC:
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bge cr6,0x82a2fed0
	if (!cr6.lt) goto loc_82A2FED0;
	// lwz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1);
	// stb r4,-3(r9)
	PPC_STORE_U8(ctx.r9.u32 + -3, ctx.r4.u8);
loc_82A2FED0:
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bge cr6,0x82a2fee4
	if (!cr6.lt) goto loc_82A2FEE4;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stbx r4,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
loc_82A2FEE4:
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bge cr6,0x82a2fef8
	if (!cr6.lt) goto loc_82A2FEF8;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r4,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r4.u8);
loc_82A2FEF8:
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bge cr6,0x82a2ff0c
	if (!cr6.lt) goto loc_82A2FF0C;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
loc_82A2FF0C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82a2febc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2FEBC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FF1C"))) PPC_WEAK_FUNC(sub_82A2FF1C);
PPC_FUNC_IMPL(__imp__sub_82A2FF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FF20"))) PPC_WEAK_FUNC(sub_82A2FF20);
PPC_FUNC_IMPL(__imp__sub_82A2FF20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r6,r8,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// rlwinm r5,r7,0,24,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// rlwinm r8,r9,0,16,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// lbz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rotlwi r5,r7,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// or r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 | ctx.r8.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// rlwimi r10,r9,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lbz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// rlwinm r6,r7,0,24,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// lbz r5,5(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rotlwi r11,r5,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// rlwinm r9,r10,0,16,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// lbz r8,6(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// rotlwi r7,r8,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lbz r4,7(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// rlwimi r5,r4,24,0,7
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0xFF000000) | (ctx.r5.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2FFBC"))) PPC_WEAK_FUNC(sub_82A2FFBC);
PPC_FUNC_IMPL(__imp__sub_82A2FFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FFC0"))) PPC_WEAK_FUNC(sub_82A2FFC0);
PPC_FUNC_IMPL(__imp__sub_82A2FFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,2
	ctx.r10.s64 = 2;
	// subfic r8,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r3.s64;
	// subfic r7,r3,2
	xer.ca = ctx.r3.u32 <= 2;
	ctx.r7.s64 = 2 - ctx.r3.s64;
	// subfic r6,r3,-1
	xer.ca = ctx.r3.u32 <= 4294967295;
	ctx.r6.s64 = -1 - ctx.r3.s64;
	// addi r9,r4,3
	ctx.r9.s64 = ctx.r4.s64 + 3;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subfic r5,r4,-2
	xer.ca = ctx.r4.u32 <= 4294967294;
	ctx.r5.s64 = -2 - ctx.r4.s64;
loc_82A2FFE4:
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x82a2fff8
	if (!cr6.lt) goto loc_82A2FFF8;
	// lwz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1);
	// stb r4,-3(r9)
	PPC_STORE_U8(ctx.r9.u32 + -3, ctx.r4.u8);
loc_82A2FFF8:
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x82a3000c
	if (!cr6.lt) goto loc_82A3000C;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stbx r4,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
loc_82A3000C:
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x82a30020
	if (!cr6.lt) goto loc_82A30020;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r4,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r4.u8);
loc_82A30020:
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x82a30034
	if (!cr6.lt) goto loc_82A30034;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
loc_82A30034:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82a2ffe4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2FFE4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30044"))) PPC_WEAK_FUNC(sub_82A30044);
PPC_FUNC_IMPL(__imp__sub_82A30044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30048"))) PPC_WEAK_FUNC(sub_82A30048);
PPC_FUNC_IMPL(__imp__sub_82A30048) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,17312
	ctx.r11.s64 = ctx.r10.s64 + 17312;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30068"))) PPC_WEAK_FUNC(sub_82A30068);
PPC_FUNC_IMPL(__imp__sub_82A30068) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r8,r10,17312
	ctx.r8.s64 = ctx.r10.s64 + 17312;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30084"))) PPC_WEAK_FUNC(sub_82A30084);
PPC_FUNC_IMPL(__imp__sub_82A30084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30088"))) PPC_WEAK_FUNC(sub_82A30088);
PPC_FUNC_IMPL(__imp__sub_82A30088) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A300AC"))) PPC_WEAK_FUNC(sub_82A300AC);
PPC_FUNC_IMPL(__imp__sub_82A300AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A300B0"))) PPC_WEAK_FUNC(sub_82A300B0);
PPC_FUNC_IMPL(__imp__sub_82A300B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r10,r4,25
	ctx.r10.u64 = ctx.r4.u32 & 0x7F;
	// li r11,248
	ctx.r11.s64 = 248;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r6,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A300D4"))) PPC_WEAK_FUNC(sub_82A300D4);
PPC_FUNC_IMPL(__imp__sub_82A300D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A300D8"))) PPC_WEAK_FUNC(sub_82A300D8);
PPC_FUNC_IMPL(__imp__sub_82A300D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r10,r4,25
	ctx.r10.u64 = ctx.r4.u32 & 0x7F;
	// stb r5,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r5.u8);
	// li r11,248
	ctx.r11.s64 = 248;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r6,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30100"))) PPC_WEAK_FUNC(sub_82A30100);
PPC_FUNC_IMPL(__imp__sub_82A30100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r11,r3,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FE;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,17312
	ctx.r11.s64 = ctx.r9.s64 + 17312;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,328
	ctx.r12.s64 = ctx.r12.s64 + 328;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A301B4;
	case 1:
		goto loc_82A30174;
	case 2:
		goto loc_82A3017C;
	case 3:
		goto loc_82A30194;
	case 4:
		goto loc_82A30184;
	case 5:
		goto loc_82A3018C;
	case 6:
		goto loc_82A3019C;
	case 7:
		goto loc_82A301A4;
	case 8:
		goto loc_82A301A4;
	case 9:
		goto loc_82A301AC;
	case 10:
		goto loc_82A301B4;
	default:
		return;
	}
	// lwz r21,436(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// lwz r21,372(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// lwz r21,380(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// lwz r21,404(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// lwz r21,388(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// lwz r21,396(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// lwz r21,412(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// lwz r21,420(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// lwz r21,420(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// lwz r21,428(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// lwz r21,436(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
loc_82A30174:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82A3017C:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_82A30184:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82A3018C:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82A30194:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_82A3019C:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_82A301A4:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82A301AC:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82A301B4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A301BC"))) PPC_WEAK_FUNC(sub_82A301BC);
PPC_FUNC_IMPL(__imp__sub_82A301BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A301C0"))) PPC_WEAK_FUNC(sub_82A301C0);
PPC_FUNC_IMPL(__imp__sub_82A301C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x82a301d4
	if (cr6.lt) goto loc_82A301D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A301D4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82a30100
	sub_82A30100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A301DC"))) PPC_WEAK_FUNC(sub_82A301DC);
PPC_FUNC_IMPL(__imp__sub_82A301DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A301E0"))) PPC_WEAK_FUNC(sub_82A301E0);
PPC_FUNC_IMPL(__imp__sub_82A301E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x82a301f4
	if (cr6.lt) goto loc_82A301F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A301F4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,17312
	ctx.r11.s64 = ctx.r9.s64 + 17312;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30214"))) PPC_WEAK_FUNC(sub_82A30214);
PPC_FUNC_IMPL(__imp__sub_82A30214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30218"))) PPC_WEAK_FUNC(sub_82A30218);
PPC_FUNC_IMPL(__imp__sub_82A30218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a30248
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A30248;
	// bdzf 4*cr6+eq,0x82a30250
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A30250;
	// bne cr6,0x82a30258
	if (!cr6.eq) goto loc_82A30258;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82A30248:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82A30250:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82A30258:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30260"))) PPC_WEAK_FUNC(sub_82A30260);
PPC_FUNC_IMPL(__imp__sub_82A30260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82a30290
	if (cr6.eq) goto loc_82A30290;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a30288
	if (cr6.eq) goto loc_82A30288;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A30288:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A30290:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30298"))) PPC_WEAK_FUNC(sub_82A30298);
PPC_FUNC_IMPL(__imp__sub_82A30298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// clrlwi r10,r4,25
	ctx.r10.u64 = ctx.r4.u32 & 0x7F;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// li r11,248
	ctx.r11.s64 = 248;
	// lhz r8,-10(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// rlwinm r4,r10,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r6,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lfs f0,18716(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18716);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// subfe r11,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r8,r6,0,0,22
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFE00) | (ctx.r8.u64 & 0xFFFFFFFF000001FF);
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lbz r4,-9(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// rlwimi r5,r4,9,16,22
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 9) & 0xFE00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF01FF);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// rlwimi r11,r7,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30308"))) PPC_WEAK_FUNC(sub_82A30308);
PPC_FUNC_IMPL(__imp__sub_82A30308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// clrlwi r10,r4,25
	ctx.r10.u64 = ctx.r4.u32 & 0x7F;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// li r11,248
	ctx.r11.s64 = 248;
	// lhz r6,-10(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// rlwinm r7,r7,16,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFF0000;
	// subfc r5,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lfs f0,18716(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18716);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// subfe r5,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r11.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r6,r10,0,0,22
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFE00) | (ctx.r6.u64 & 0xFFFFFFFF000001FF);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lbz r6,-9(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// rlwimi r9,r6,9,16,22
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 9) & 0xFE00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF01FF);
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// rlwinm r4,r5,0,16,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// or r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rlwinm r9,r10,0,16,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// or r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// rlwimi r6,r8,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3039C"))) PPC_WEAK_FUNC(sub_82A3039C);
PPC_FUNC_IMPL(__imp__sub_82A3039C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A303A0"))) PPC_WEAK_FUNC(sub_82A303A0);
PPC_FUNC_IMPL(__imp__sub_82A303A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r10,r4,25
	ctx.r10.u64 = ctx.r4.u32 & 0x7F;
	// li r11,248
	ctx.r11.s64 = 248;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r6,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r10,r5,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A303D0"))) PPC_WEAK_FUNC(sub_82A303D0);
PPC_FUNC_IMPL(__imp__sub_82A303D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r9,r4,25
	ctx.r9.u64 = ctx.r4.u32 & 0x7F;
	// fctidz f13,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// li r11,248
	ctx.r11.s64 = 248;
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lhz r7,-10(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// subfc r5,r11,r9
	xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r4,-10(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// subfe r6,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// sth r4,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r4.u16);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lfs f0,18716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18716);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// rlwinm r11,r6,0,16,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fctidz f9,f12
	ctx.f9.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lbz r9,-9(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// fctidz f8,f11
	ctx.f8.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lbz r5,-9(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// fctidz f7,f10
	ctx.f7.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lbz r6,-9(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// rotlwi r4,r5,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// or r5,r4,r11
	ctx.r5.u64 = ctx.r4.u64 | ctx.r11.u64;
	// rotlwi r4,r7,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// rlwimi r11,r6,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r8,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r7,r8,0,24,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF0000FF;
	// or r6,r4,r7
	ctx.r6.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// rlwimi r5,r9,24,0,7
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF000000) | (ctx.r5.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r4,r10,0,24,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A304A4"))) PPC_WEAK_FUNC(sub_82A304A4);
PPC_FUNC_IMPL(__imp__sub_82A304A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A304A8"))) PPC_WEAK_FUNC(sub_82A304A8);
PPC_FUNC_IMPL(__imp__sub_82A304A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r10,r4,25
	ctx.r10.u64 = ctx.r4.u32 & 0x7F;
	// li r11,248
	ctx.r11.s64 = 248;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// subfe r4,r9,r6
	temp.u8 = (~ctx.r9.u32 + ctx.r6.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// and r7,r4,r10
	ctx.r7.u64 = ctx.r4.u64 & ctx.r10.u64;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lfs f0,-23488(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,18716(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18716);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lhz r4,-10(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fctiwz f9,f12
	ctx.f9.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fctidz f8,f11
	ctx.f8.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lbz r10,-9(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// rlwinm r7,r5,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF00;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// or r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r4,r6,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// rlwimi r11,r9,8,8,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFF00) | (ctx.r11.u64 & 0xFFFFFFFFFF0000FF);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rlwimi r10,r6,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r7,r9,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// or r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// rlwimi r5,r8,8,16,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF00FF);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30560"))) PPC_WEAK_FUNC(sub_82A30560);
PPC_FUNC_IMPL(__imp__sub_82A30560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// clrlwi r5,r4,25
	ctx.r5.u64 = ctx.r4.u32 & 0x7F;
	// li r11,248
	ctx.r11.s64 = 248;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// lfs f0,-23488(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// subfc r8,r11,r5
	xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// subfe r8,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lfs f13,18716(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 18716);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// and r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 & ctx.r5.u64;
	// fmuls f9,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stb r6,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r6.u8);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fctiwz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lhz r6,-10(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fctiwz f7,f11
	ctx.f7.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lhz r5,-10(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fctiwz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// fctidz f5,f9
	ctx.f5.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// rlwinm r8,r4,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// lhz r4,-10(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// stfd f5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f5.u64);
	// lbz r31,-9(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// or r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 | ctx.r8.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// rlwimi r8,r6,8,8,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFF00) | (ctx.r8.u64 & 0xFFFFFFFFFF0000FF);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// rlwinm r8,r5,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r6,r5,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r6,r4,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// or r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// rlwimi r8,r5,8,8,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFF00) | (ctx.r8.u64 & 0xFFFFFFFFFF0000FF);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// rlwimi r6,r10,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stb r9,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r9.u8);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r5,r7,8,17,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0x7F00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF80FF);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3065C"))) PPC_WEAK_FUNC(sub_82A3065C);
PPC_FUNC_IMPL(__imp__sub_82A3065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30660"))) PPC_WEAK_FUNC(sub_82A30660);
PPC_FUNC_IMPL(__imp__sub_82A30660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// clrlwi r6,r4,25
	ctx.r6.u64 = ctx.r4.u32 & 0x7F;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// li r11,248
	ctx.r11.s64 = 248;
	// stfd f0,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f0.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// lhz r4,-26(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -26);
	// subfc r31,r11,r6
	xer.ca = ctx.r6.u32 >= ctx.r11.u32;
	ctx.r31.s64 = ctx.r6.s64 - ctx.r11.s64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r30,-32251
	ctx.r30.s64 = -2113601536;
	// subfe r5,r5,r11
	temp.u8 = (~ctx.r5.u32 + ctx.r11.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// and r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 & ctx.r6.u64;
	// stb r6,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r6.u8);
	// sth r4,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r4.u16);
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// lfs f0,18716(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 18716);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r6,r10,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f12.u64);
	// lbz r4,-25(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + -25);
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rlwimi r10,r7,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// rlwimi r7,r8,16,15,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0x10000) | (ctx.r7.u64 & 0xFFFFFFFFFFFEFFFF);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// rlwimi r6,r5,17,8,14
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 17) & 0xFE0000) | (ctx.r6.u64 & 0xFFFFFFFFFF01FFFF);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// rlwimi r5,r9,24,0,7
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF000000) | (ctx.r5.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3070C"))) PPC_WEAK_FUNC(sub_82A3070C);
PPC_FUNC_IMPL(__imp__sub_82A3070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30710"))) PPC_WEAK_FUNC(sub_82A30710);
PPC_FUNC_IMPL(__imp__sub_82A30710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r9,r4,25
	ctx.r9.u64 = ctx.r4.u32 & 0x7F;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// li r11,248
	ctx.r11.s64 = 248;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lhz r7,-10(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// subfc r4,r11,r9
	xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfe r6,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lfs f0,18716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18716);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r10,24,1,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x7F000000) | (ctx.r11.u64 & 0xFFFFFFFF80FFFFFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lbz r10,-9(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r7,r9,0,16,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// rlwimi r4,r8,31,0,0
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 31) & 0x80000000) | (ctx.r4.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30790"))) PPC_WEAK_FUNC(sub_82A30790);
PPC_FUNC_IMPL(__imp__sub_82A30790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r10,r4,25
	ctx.r10.u64 = ctx.r4.u32 & 0x7F;
	// li r11,248
	ctx.r11.s64 = 248;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// subfe r4,r9,r4
	temp.u8 = (~ctx.r9.u32 + ctx.r4.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// and r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 & ctx.r10.u64;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r4,r5,0,30,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFFC);
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// rlwimi r11,r6,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rlwimi r10,r9,3,24,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 3) & 0xF8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF07);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A307E4"))) PPC_WEAK_FUNC(sub_82A307E4);
PPC_FUNC_IMPL(__imp__sub_82A307E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A307E8"))) PPC_WEAK_FUNC(sub_82A307E8);
PPC_FUNC_IMPL(__imp__sub_82A307E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r10,r4,25
	ctx.r10.u64 = ctx.r4.u32 & 0x7F;
	// li r11,248
	ctx.r11.s64 = 248;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r6,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30810"))) PPC_WEAK_FUNC(sub_82A30810);
PPC_FUNC_IMPL(__imp__sub_82A30810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lbz r9,5(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r6,r11,23
	ctx.r6.u64 = ctx.r11.u32 & 0x1FF;
	// rlwinm r5,r11,23,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfs f0,18720(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18720);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3085C"))) PPC_WEAK_FUNC(sub_82A3085C);
PPC_FUNC_IMPL(__imp__sub_82A3085C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30860"))) PPC_WEAK_FUNC(sub_82A30860);
PPC_FUNC_IMPL(__imp__sub_82A30860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lbz r9,5(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r6,r11,23
	ctx.r6.u64 = ctx.r11.u32 & 0x1FF;
	// rlwinm r5,r11,23,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfs f0,18720(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18720);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// rlwinm r4,r11,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// stb r4,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r4.u8);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A308B4"))) PPC_WEAK_FUNC(sub_82A308B4);
PPC_FUNC_IMPL(__imp__sub_82A308B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A308B8"))) PPC_WEAK_FUNC(sub_82A308B8);
PPC_FUNC_IMPL(__imp__sub_82A308B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A308CC"))) PPC_WEAK_FUNC(sub_82A308CC);
PPC_FUNC_IMPL(__imp__sub_82A308CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A308D0"))) PPC_WEAK_FUNC(sub_82A308D0);
PPC_FUNC_IMPL(__imp__sub_82A308D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// lbz r7,5(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r6,r9,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lfs f0,18720(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18720);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rlwinm r9,r11,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFF;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// fcfid f5,f11
	ctx.f5.f64 = double(ctx.f11.s64);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// fcfid f4,f10
	ctx.f4.f64 = double(ctx.f10.s64);
	// stb r5,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r5.u8);
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmuls f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30980"))) PPC_WEAK_FUNC(sub_82A30980);
PPC_FUNC_IMPL(__imp__sub_82A30980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r6,5(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r4,r11,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,18720(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18720);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// stb r4,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r4.u8);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stb r7,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r7.u8);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A309D4"))) PPC_WEAK_FUNC(sub_82A309D4);
PPC_FUNC_IMPL(__imp__sub_82A309D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A309D8"))) PPC_WEAK_FUNC(sub_82A309D8);
PPC_FUNC_IMPL(__imp__sub_82A309D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r6,10(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// rlwinm r7,r11,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r5,r9,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r4,r11,24,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFF;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// lfs f13,18720(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18720);
	ctx.f13.f64 = double(temp.f32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lfs f0,8976(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stb r6,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r6.u8);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f3,0(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30A6C"))) PPC_WEAK_FUNC(sub_82A30A6C);
PPC_FUNC_IMPL(__imp__sub_82A30A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30A70"))) PPC_WEAK_FUNC(sub_82A30A70);
PPC_FUNC_IMPL(__imp__sub_82A30A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r7,r11,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFF;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r5,r9,24,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// lfs f13,18720(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18720);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lfs f0,8976(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// std r31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r31.u64);
	// std r8,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r8.u64);
	// lfd f12,-32(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r5,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r5.u64);
	// lfd f11,-24(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f10,-32(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r5,r4,24,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0x7F;
	// stb r9,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r9.u8);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// stb r4,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r4.u8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stb r5,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r5.u8);
	// std r11,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r11.u64);
	// lfd f9,-24(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f10,f2,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30B3C"))) PPC_WEAK_FUNC(sub_82A30B3C);
PPC_FUNC_IMPL(__imp__sub_82A30B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30B40"))) PPC_WEAK_FUNC(sub_82A30B40);
PPC_FUNC_IMPL(__imp__sub_82A30B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x82a30b58
	if (cr6.lt) goto loc_82A30B58;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82A30B58:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r8,17312
	ctx.r11.s64 = ctx.r8.s64 + 17312;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82a30b94
	if (cr6.eq) goto loc_82A30B94;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// blr 
	return;
loc_82A30B94:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r7,10(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfs f0,18720(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18720);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// rlwinm r11,r9,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x1;
	// rlwinm r10,r9,15,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x7F;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30BFC"))) PPC_WEAK_FUNC(sub_82A30BFC);
PPC_FUNC_IMPL(__imp__sub_82A30BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30C00"))) PPC_WEAK_FUNC(sub_82A30C00);
PPC_FUNC_IMPL(__imp__sub_82A30C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r7,5(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r5,r11,8,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x7F;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,18720(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18720);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stb r4,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r4.u8);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30C54"))) PPC_WEAK_FUNC(sub_82A30C54);
PPC_FUNC_IMPL(__imp__sub_82A30C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30C58"))) PPC_WEAK_FUNC(sub_82A30C58);
PPC_FUNC_IMPL(__imp__sub_82A30C58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r9,r11,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// rlwinm r8,r11,29,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A30C78"))) PPC_WEAK_FUNC(sub_82A30C78);
PPC_FUNC_IMPL(__imp__sub_82A30C78) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x82a30cbc
	if (cr6.lt) goto loc_82A30CBC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A30CBC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,17312
	ctx.r11.s64 = ctx.r9.s64 + 17312;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x82a30e88
	if (cr6.gt) goto loc_82A30E88;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3324
	ctx.r12.s64 = ctx.r12.s64 + 3324;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A30D28;
	case 1:
		goto loc_82A30D40;
	case 2:
		goto loc_82A30D6C;
	case 3:
		goto loc_82A30DCC;
	case 4:
		goto loc_82A30D8C;
	case 5:
		goto loc_82A30DAC;
	case 6:
		goto loc_82A30DEC;
	case 7:
		goto loc_82A30E0C;
	case 8:
		goto loc_82A30E2C;
	case 9:
		goto loc_82A30E4C;
	case 10:
		goto loc_82A30E70;
	default:
		return;
	}
	// lwz r21,3368(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3368);
	// lwz r21,3392(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3392);
	// lwz r21,3436(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3436);
	// lwz r21,3532(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3532);
	// lwz r21,3468(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3468);
	// lwz r21,3500(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3500);
	// lwz r21,3564(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3564);
	// lwz r21,3596(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3596);
	// lwz r21,3628(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3628);
	// lwz r21,3660(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3660);
	// lwz r21,3696(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3696);
loc_82A30D28:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82a30e84
	goto loc_82A30E84;
loc_82A30D40:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lbz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// lbz r8,5(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r8,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r8.u8);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// b 0x82a30e88
	goto loc_82A30E88;
loc_82A30D6C:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a2fb00
	ctx.lr = 0x82A30D78;
	sub_82A2FB00(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,9
	ctx.r31.s64 = ctx.r31.s64 + 9;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82a30e88
	goto loc_82A30E88;
loc_82A30D8C:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a2fc38
	ctx.lr = 0x82A30D98;
	sub_82A2FC38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82a30e88
	goto loc_82A30E88;
loc_82A30DAC:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a2fcc0
	ctx.lr = 0x82A30DB8;
	sub_82A2FCC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82a30e88
	goto loc_82A30E88;
loc_82A30DCC:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a2fd48
	ctx.lr = 0x82A30DD8;
	sub_82A2FD48(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,10
	ctx.r31.s64 = ctx.r31.s64 + 10;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82a30e88
	goto loc_82A30E88;
loc_82A30DEC:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a2fe98
	ctx.lr = 0x82A30DF8;
	sub_82A2FE98(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82a30e88
	goto loc_82A30E88;
loc_82A30E0C:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a2ffc0
	ctx.lr = 0x82A30E18;
	sub_82A2FFC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82a30e88
	goto loc_82A30E88;
loc_82A30E2C:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a2ffc0
	ctx.lr = 0x82A30E38;
	sub_82A2FFC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82a30e88
	goto loc_82A30E88;
loc_82A30E4C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lbz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// b 0x82a30e88
	goto loc_82A30E88;
loc_82A30E70:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_82A30E84:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82A30E88:
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

__attribute__((alias("__imp__sub_82A30EA4"))) PPC_WEAK_FUNC(sub_82A30EA4);
PPC_FUNC_IMPL(__imp__sub_82A30EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30EA8"))) PPC_WEAK_FUNC(sub_82A30EA8);
PPC_FUNC_IMPL(__imp__sub_82A30EA8) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x82a30ed8
	if (cr6.lt) goto loc_82A30ED8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A30ED8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,17312
	ctx.r11.s64 = ctx.r9.s64 + 17312;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x82a311d8
	if (cr6.gt) goto loc_82A311D8;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3864
	ctx.r12.s64 = ctx.r12.s64 + 3864;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A30F44;
	case 1:
		goto loc_82A30F50;
	case 2:
		goto loc_82A30F9C;
	case 3:
		goto loc_82A310AC;
	case 4:
		goto loc_82A30FB0;
	case 5:
		goto loc_82A31024;
	case 6:
		goto loc_82A310C0;
	case 7:
		goto loc_82A310D4;
	case 8:
		goto loc_82A31130;
	case 9:
		goto loc_82A3118C;
	case 10:
		goto loc_82A311C0;
	default:
		return;
	}
	// lwz r21,3908(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3908);
	// lwz r21,3920(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3920);
	// lwz r21,3996(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3996);
	// lwz r21,4268(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4268);
	// lwz r21,4016(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4016);
	// lwz r21,4132(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4132);
	// lwz r21,4288(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4288);
	// lwz r21,4308(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4308);
	// lwz r21,4400(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4400);
	// lwz r21,4492(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4492);
	// lwz r21,4544(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4544);
loc_82A30F44:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// b 0x82a311d4
	goto loc_82A311D4;
loc_82A30F50:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// rlwinm r4,r7,0,24,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r8,r9,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// rlwinm r7,r10,0,16,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// b 0x82a311d8
	goto loc_82A311D8;
loc_82A30F9C:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a2fb88
	ctx.lr = 0x82A30FA8;
	sub_82A2FB88(ctx, base);
	// addi r31,r31,9
	ctx.r31.s64 = ctx.r31.s64 + 9;
	// b 0x82a311d8
	goto loc_82A311D8;
loc_82A30FB0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r8,r10,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r5,r7,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// rlwinm r8,r4,0,24,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r9,r10,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// rlwinm r4,r6,0,16,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// or r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rlwimi r6,r7,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// or r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// b 0x82a311d8
	goto loc_82A311D8;
loc_82A31024:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r8,r10,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r5,r7,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rlwinm r10,r4,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r10,r6,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// rlwinm r9,r4,0,16,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rlwimi r6,r7,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// or r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// rlwinm r9,r10,0,24,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// b 0x82a311d8
	goto loc_82A311D8;
loc_82A310AC:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a2fdd0
	ctx.lr = 0x82A310B8;
	sub_82A2FDD0(ctx, base);
	// addi r31,r31,10
	ctx.r31.s64 = ctx.r31.s64 + 10;
	// b 0x82a311d8
	goto loc_82A311D8;
loc_82A310C0:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a2ff20
	ctx.lr = 0x82A310CC;
	sub_82A2FF20(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x82a311d8
	goto loc_82A311D8;
loc_82A310D4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lbz r5,1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r4,r5,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// rlwinm r6,r7,0,24,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// rlwinm r7,r9,0,16,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lbz r5,3(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwimi r4,r5,24,0,7
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 24) & 0xFF000000) | (ctx.r4.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// b 0x82a311d8
	goto loc_82A311D8;
loc_82A31130:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lbz r7,1(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// rlwinm r4,r6,0,24,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// rlwinm r7,r9,0,16,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lbz r5,3(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwimi r4,r5,24,0,7
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 24) & 0xFF000000) | (ctx.r4.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// b 0x82a311d8
	goto loc_82A311D8;
loc_82A3118C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r4,r6,0,24,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// lbz r7,1(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82a311d8
	goto loc_82A311D8;
loc_82A311C0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
loc_82A311D4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82A311D8:
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

__attribute__((alias("__imp__sub_82A311F0"))) PPC_WEAK_FUNC(sub_82A311F0);
PPC_FUNC_IMPL(__imp__sub_82A311F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-5
	ctx.r11.s64 = ctx.r3.s64 + -5;
	// cmplwi cr6,r11,104
	cr6.compare<uint32_t>(ctx.r11.u32, 104, xer);
	// bgt cr6,0x82a31408
	if (cr6.gt) goto loc_82A31408;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4628
	ctx.r12.s64 = ctx.r12.s64 + 4628;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A313C8;
	case 1:
		goto loc_82A313B8;
	case 2:
		goto loc_82A313B8;
	case 3:
		goto loc_82A31408;
	case 4:
		goto loc_82A31408;
	case 5:
		goto loc_82A31408;
	case 6:
		goto loc_82A313B8;
	case 7:
		goto loc_82A313B8;
	case 8:
		goto loc_82A313B8;
	case 9:
		goto loc_82A313B8;
	case 10:
		goto loc_82A31408;
	case 11:
		goto loc_82A313B8;
	case 12:
		goto loc_82A31408;
	case 13:
		goto loc_82A31408;
	case 14:
		goto loc_82A31408;
	case 15:
		goto loc_82A31408;
	case 16:
		goto loc_82A31408;
	case 17:
		goto loc_82A31408;
	case 18:
		goto loc_82A31408;
	case 19:
		goto loc_82A31408;
	case 20:
		goto loc_82A31408;
	case 21:
		goto loc_82A313F8;
	case 22:
		goto loc_82A31408;
	case 23:
		goto loc_82A313B8;
	case 24:
		goto loc_82A313B8;
	case 25:
		goto loc_82A313B8;
	case 26:
		goto loc_82A313B8;
	case 27:
		goto loc_82A313B8;
	case 28:
		goto loc_82A313B8;
	case 29:
		goto loc_82A313B8;
	case 30:
		goto loc_82A313B8;
	case 31:
		goto loc_82A313B8;
	case 32:
		goto loc_82A313B8;
	case 33:
		goto loc_82A313B8;
	case 34:
		goto loc_82A313E0;
	case 35:
		goto loc_82A313D0;
	case 36:
		goto loc_82A313D8;
	case 37:
		goto loc_82A31408;
	case 38:
		goto loc_82A313F8;
	case 39:
		goto loc_82A313C8;
	case 40:
		goto loc_82A313C8;
	case 41:
		goto loc_82A313F8;
	case 42:
		goto loc_82A31408;
	case 43:
		goto loc_82A31408;
	case 44:
		goto loc_82A31408;
	case 45:
		goto loc_82A31408;
	case 46:
		goto loc_82A31408;
	case 47:
		goto loc_82A31408;
	case 48:
		goto loc_82A31408;
	case 49:
		goto loc_82A31408;
	case 50:
		goto loc_82A31408;
	case 51:
		goto loc_82A31408;
	case 52:
		goto loc_82A31408;
	case 53:
		goto loc_82A31408;
	case 54:
		goto loc_82A31408;
	case 55:
		goto loc_82A313E8;
	case 56:
		goto loc_82A313E8;
	case 57:
		goto loc_82A313B8;
	case 58:
		goto loc_82A313B8;
	case 59:
		goto loc_82A313B8;
	case 60:
		goto loc_82A31408;
	case 61:
		goto loc_82A31408;
	case 62:
		goto loc_82A31408;
	case 63:
		goto loc_82A31408;
	case 64:
		goto loc_82A31408;
	case 65:
		goto loc_82A31408;
	case 66:
		goto loc_82A31408;
	case 67:
		goto loc_82A31408;
	case 68:
		goto loc_82A31408;
	case 69:
		goto loc_82A31408;
	case 70:
		goto loc_82A313E8;
	case 71:
		goto loc_82A31408;
	case 72:
		goto loc_82A31408;
	case 73:
		goto loc_82A31408;
	case 74:
		goto loc_82A31408;
	case 75:
		goto loc_82A31408;
	case 76:
		goto loc_82A31408;
	case 77:
		goto loc_82A31408;
	case 78:
		goto loc_82A31408;
	case 79:
		goto loc_82A31408;
	case 80:
		goto loc_82A31408;
	case 81:
		goto loc_82A31408;
	case 82:
		goto loc_82A31408;
	case 83:
		goto loc_82A31408;
	case 84:
		goto loc_82A313B8;
	case 85:
		goto loc_82A313B8;
	case 86:
		goto loc_82A313C0;
	case 87:
		goto loc_82A313F0;
	case 88:
		goto loc_82A31408;
	case 89:
		goto loc_82A31400;
	case 90:
		goto loc_82A31408;
	case 91:
		goto loc_82A31400;
	case 92:
		goto loc_82A31400;
	case 93:
		goto loc_82A31400;
	case 94:
		goto loc_82A31400;
	case 95:
		goto loc_82A31400;
	case 96:
		goto loc_82A31400;
	case 97:
		goto loc_82A31400;
	case 98:
		goto loc_82A31400;
	case 99:
		goto loc_82A313E8;
	case 100:
		goto loc_82A31408;
	case 101:
		goto loc_82A313F8;
	case 102:
		goto loc_82A313F8;
	case 103:
		goto loc_82A313F8;
	case 104:
		goto loc_82A313F8;
	default:
		return;
	}
	// lwz r21,5064(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5064);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5112(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5112);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5088(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5088);
	// lwz r21,5072(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5072);
	// lwz r21,5080(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5080);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5112(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5112);
	// lwz r21,5064(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5064);
	// lwz r21,5064(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5064);
	// lwz r21,5112(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5112);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5096(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5096);
	// lwz r21,5096(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5096);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5096(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5096);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5048(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r21,5056(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5056);
	// lwz r21,5104(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5104);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5120(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5120);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5120(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5120);
	// lwz r21,5120(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5120);
	// lwz r21,5120(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5120);
	// lwz r21,5120(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5120);
	// lwz r21,5120(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5120);
	// lwz r21,5120(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5120);
	// lwz r21,5120(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5120);
	// lwz r21,5120(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5120);
	// lwz r21,5096(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5096);
	// lwz r21,5128(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// lwz r21,5112(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5112);
	// lwz r21,5112(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5112);
	// lwz r21,5112(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5112);
	// lwz r21,5112(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5112);
loc_82A313B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A313C0:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_82A313C8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A313D0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82A313D8:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82A313E0:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82A313E8:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82A313F0:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_82A313F8:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82A31400:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82A31408:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A31410"))) PPC_WEAK_FUNC(sub_82A31410);
PPC_FUNC_IMPL(__imp__sub_82A31410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A31418;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A31428:
	// cmpw cr6,r29,r31
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, xer);
	// beq cr6,0x82a31438
	if (cr6.eq) goto loc_82A31438;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// bne cr6,0x82a31440
	if (!cr6.eq) goto loc_82A31440;
loc_82A31438:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a30088
	ctx.lr = 0x82A31440;
	sub_82A30088(ctx, base);
loc_82A31440:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82a31428
	if (cr6.lt) goto loc_82A31428;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A31458"))) PPC_WEAK_FUNC(sub_82A31458);
PPC_FUNC_IMPL(__imp__sub_82A31458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// bge cr6,0x82a3146c
	if (!cr6.lt) goto loc_82A3146C;
	// mulli r11,r4,180
	ctx.r11.s64 = ctx.r4.s64 * 180;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_82A3146C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A31474"))) PPC_WEAK_FUNC(sub_82A31474);
PPC_FUNC_IMPL(__imp__sub_82A31474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A31478"))) PPC_WEAK_FUNC(sub_82A31478);
PPC_FUNC_IMPL(__imp__sub_82A31478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a31488
	if (cr6.eq) goto loc_82A31488;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82A31488:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a31520
	if (cr6.eq) goto loc_82A31520;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A31494:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x82a314a4
	if (cr6.lt) goto loc_82A314A4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A314A4:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a314c4
	if (cr6.lt) goto loc_82A314C4;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82a314c8
	if (cr6.lt) goto loc_82A314C8;
loc_82A314C4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A314C8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a31514
	if (cr6.eq) goto loc_82A31514;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a314e4
	if (!cr6.lt) goto loc_82A314E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a3150c
	goto loc_82A3150C;
loc_82A314E4:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a314f4
	if (!cr6.lt) goto loc_82A314F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a3150c
	goto loc_82A3150C;
loc_82A314F4:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r7,r10,r11
	ctx.r7.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r11,r7,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
loc_82A3150C:
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// beq cr6,0x82a31528
	if (cr6.eq) goto loc_82A31528;
loc_82A31514:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x82a31494
	if (cr6.lt) goto loc_82A31494;
loc_82A31520:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A31528:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a31534
	if (cr6.eq) goto loc_82A31534;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
loc_82A31534:
	// mulli r11,r9,180
	ctx.r11.s64 = ctx.r9.s64 * 180;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A31540"))) PPC_WEAK_FUNC(sub_82A31540);
PPC_FUNC_IMPL(__imp__sub_82A31540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a31550
	if (cr6.eq) goto loc_82A31550;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82A31550:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a315c4
	if (cr6.eq) goto loc_82A315C4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A3155C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a3156c
	if (cr6.lt) goto loc_82A3156C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A3156C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a315b8
	if (cr6.eq) goto loc_82A315B8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a31590
	if (cr6.lt) goto loc_82A31590;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A31590:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lbzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a315a8
	if (!cr6.eq) goto loc_82A315A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a315b0
	goto loc_82A315B0;
loc_82A315A8:
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A315B0:
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x82a315cc
	if (cr6.eq) goto loc_82A315CC;
loc_82A315B8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a3155c
	if (cr6.lt) goto loc_82A3155C;
loc_82A315C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A315CC:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a315d8
	if (cr6.eq) goto loc_82A315D8;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_82A315D8:
	// mulli r11,r10,180
	ctx.r11.s64 = ctx.r10.s64 * 180;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A315E4"))) PPC_WEAK_FUNC(sub_82A315E4);
PPC_FUNC_IMPL(__imp__sub_82A315E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A315E8"))) PPC_WEAK_FUNC(sub_82A315E8);
PPC_FUNC_IMPL(__imp__sub_82A315E8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,4320(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4320, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A315F8"))) PPC_WEAK_FUNC(sub_82A315F8);
PPC_FUNC_IMPL(__imp__sub_82A315F8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,4320(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4320);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A31608"))) PPC_WEAK_FUNC(sub_82A31608);
PPC_FUNC_IMPL(__imp__sub_82A31608) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,4344(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4344);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A31618"))) PPC_WEAK_FUNC(sub_82A31618);
PPC_FUNC_IMPL(__imp__sub_82A31618) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,4344(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4344, ctx.r5.u8);
	// stb r6,4368(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4368, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3162C"))) PPC_WEAK_FUNC(sub_82A3162C);
PPC_FUNC_IMPL(__imp__sub_82A3162C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A31630"))) PPC_WEAK_FUNC(sub_82A31630);
PPC_FUNC_IMPL(__imp__sub_82A31630) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,1098
	ctx.r11.s64 = ctx.r11.s64 + 1098;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A31648"))) PPC_WEAK_FUNC(sub_82A31648);
PPC_FUNC_IMPL(__imp__sub_82A31648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A31650;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,-3564(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
loc_82A31670:
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// bne cr6,0x82a31688
	if (!cr6.eq) goto loc_82A31688;
	// lwz r11,292(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// lwz r8,4460(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// beq cr6,0x82a316a8
	if (cr6.eq) goto loc_82A316A8;
loc_82A31688:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x82a316a8
	if (!cr6.lt) goto loc_82A316A8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a316a8
	if (cr6.eq) goto loc_82A316A8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82A316A8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// blt cr6,0x82a31670
	if (cr6.lt) goto loc_82A31670;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a3178c
	if (cr6.eq) goto loc_82A3178C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bl 0x82a30088
	ctx.lr = 0x82A316C8;
	sub_82A30088(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x82a31770
	if (!cr6.gt) goto loc_82A31770;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A316D4:
	// cmpwi cr6,r31,9
	cr6.compare<int32_t>(ctx.r31.s32, 9, xer);
	// bne cr6,0x82a316f0
	if (!cr6.eq) goto loc_82A316F0;
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x82a3175c
	if (cr6.eq) goto loc_82A3175C;
loc_82A316F0:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,248
	cr6.compare<uint32_t>(ctx.r10.u32, 248, xer);
	// bge cr6,0x82a3175c
	if (!cr6.lt) goto loc_82A3175C;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a3175c
	if (cr6.eq) goto loc_82A3175C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// bne 0x82a31748
	if (!cr0.eq) goto loc_82A31748;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ori r9,r10,128
	ctx.r9.u64 = ctx.r10.u64 | 128;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
loc_82A31748:
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a30c78
	ctx.lr = 0x82A31758;
	sub_82A30C78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A3175C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82a316d4
	if (cr6.lt) goto loc_82A316D4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A31770:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r9,r10,128
	ctx.r9.u64 = ctx.r10.u64 | 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82a30c78
	ctx.lr = 0x82A3178C;
	sub_82A30C78(ctx, base);
loc_82A3178C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A31794"))) PPC_WEAK_FUNC(sub_82A31794);
PPC_FUNC_IMPL(__imp__sub_82A31794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A31798"))) PPC_WEAK_FUNC(sub_82A31798);
PPC_FUNC_IMPL(__imp__sub_82A31798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A317A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a31840
	if (cr6.eq) goto loc_82A31840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,11
	ctx.r31.s64 = 11;
loc_82A317BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a30088
	ctx.lr = 0x82A317C4;
	sub_82A30088(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82a317bc
	if (!cr0.eq) goto loc_82A317BC;
loc_82A317D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a30088
	ctx.lr = 0x82A317D8;
	sub_82A30088(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a30ea8
	ctx.lr = 0x82A317E4;
	sub_82A30EA8(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,248
	cr6.compare<uint32_t>(ctx.r10.u32, 248, xer);
	// bge cr6,0x82a31840
	if (!cr6.lt) goto loc_82A31840;
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a31840
	if (cr6.eq) goto loc_82A31840;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a311f0
	ctx.lr = 0x82A31808;
	sub_82A311F0(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r10,25,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xFF;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stwx r6,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r6.u32);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// stw r3,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r3.u32);
	// beq cr6,0x82a317d0
	if (cr6.eq) goto loc_82A317D0;
loc_82A31840:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A31848"))) PPC_WEAK_FUNC(sub_82A31848);
PPC_FUNC_IMPL(__imp__sub_82A31848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A31850;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
loc_82A31864:
	// cmpwi cr6,r31,9
	cr6.compare<int32_t>(ctx.r31.s32, 9, xer);
	// bne cr6,0x82a31880
	if (!cr6.eq) goto loc_82A31880;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x82a318a8
	if (cr6.eq) goto loc_82A318A8;
loc_82A31880:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x82a318a8
	if (!cr6.lt) goto loc_82A318A8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a318a8
	if (cr6.eq) goto loc_82A318A8;
	// bl 0x82a301c0
	ctx.lr = 0x82A318A4;
	sub_82A301C0(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_82A318A8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82a31864
	if (cr6.lt) goto loc_82A31864;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82a318cc
	if (!cr6.eq) goto loc_82A318CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a301c0
	ctx.lr = 0x82A318C4;
	sub_82A301C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A318CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A318D8"))) PPC_WEAK_FUNC(sub_82A318D8);
PPC_FUNC_IMPL(__imp__sub_82A318D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A318E0;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce774
	ctx.lr = 0x82A318E8;
	__savefpr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// lwz r25,12(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lwz r26,292(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,5756(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5756);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a31930
	if (!cr6.lt) goto loc_82A31930;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a31958
	goto loc_82A31958;
loc_82A31930:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a31940
	if (!cr6.lt) goto loc_82A31940;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a31958
	goto loc_82A31958;
loc_82A31940:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
loc_82A31958:
	// bl 0x82a0c710
	ctx.lr = 0x82A3195C;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,5756(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5756);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c7b0
	ctx.lr = 0x82A31970;
	sub_82A0C7B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a1c580
	ctx.lr = 0x82A3197C;
	sub_82A1C580(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a20950
	ctx.lr = 0x82A31988;
	sub_82A20950(ctx, base);
	// lfs f0,8144(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f13,8148(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8148);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f11,8152(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8152);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lbz r4,252(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 252);
	// bl 0x82a40920
	ctx.lr = 0x82A319C4;
	sub_82A40920(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f28,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fcmpu cr6,f31,f28
	cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// addi r31,r11,18764
	ctx.r31.s64 = ctx.r11.s64 + 18764;
	// lfs f0,18764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18764);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x82a319ec
	if (!cr6.lt) goto loc_82A319EC;
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x82a319f8
	goto loc_82A319F8;
loc_82A319EC:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82a319fc
	if (cr6.lt) goto loc_82A319FC;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
loc_82A319F8:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A319FC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r4,252(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 252);
	// bl 0x82a40900
	ctx.lr = 0x82A31A08;
	sub_82A40900(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,8(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f10,f1
	ctx.f10.f64 = double(float(sqrt(ctx.f1.f64)));
	// lfs f27,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r11,r11,-26260
	ctx.r11.s64 = ctx.r11.s64 + -26260;
	// lfs f29,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f12,f27
	cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// bgt cr6,0x82a31a34
	if (cr6.gt) goto loc_82A31A34;
	// fmr f11,f29
	ctx.f11.f64 = ctx.f29.f64;
	// b 0x82a31ac8
	goto loc_82A31AC8;
loc_82A31A34:
	// fcmpu cr6,f12,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// blt cr6,0x82a31a44
	if (cr6.lt) goto loc_82A31A44;
	// fmr f11,f29
	ctx.f11.f64 = ctx.f29.f64;
	// b 0x82a31ac8
	goto loc_82A31AC8;
loc_82A31A44:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,16784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16784);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27732(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27732);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82a31a6c
	if (cr6.lt) goto loc_82A31A6C;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82a31a6c
	if (cr6.gt) goto loc_82A31A6C;
	// fmr f11,f28
	ctx.f11.f64 = ctx.f28.f64;
	// b 0x82a31ac8
	goto loc_82A31AC8;
loc_82A31A6C:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82a31a94
	if (!cr6.lt) goto loc_82A31A94;
	// fcmpu cr6,f12,f27
	cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// bgt cr6,0x82a31a84
	if (cr6.gt) goto loc_82A31A84;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82a31ac4
	goto loc_82A31AC4;
loc_82A31A84:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f13,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,32364(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32364);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a31ac0
	goto loc_82A31AC0;
loc_82A31A94:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82a31aa4
	if (cr6.gt) goto loc_82A31AA4;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82a31ac4
	goto loc_82A31AC4;
loc_82A31AA4:
	// fcmpu cr6,f12,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// blt cr6,0x82a31ab4
	if (cr6.lt) goto loc_82A31AB4;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82a31ac4
	goto loc_82A31AC4;
loc_82A31AB4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f13,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f0,7380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7380);
	ctx.f0.f64 = double(temp.f32);
loc_82A31AC0:
	// fmuls f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82A31AC4:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
loc_82A31AC8:
	// lbz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// lfs f31,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a31b14
	if (cr6.eq) goto loc_82A31B14;
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x82a31aec
	if (cr6.gt) goto loc_82A31AEC;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82a31b0c
	goto loc_82A31B0C;
loc_82A31AEC:
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// blt cr6,0x82a31b00
	if (cr6.lt) goto loc_82A31B00;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82a31b0c
	goto loc_82A31B0C;
loc_82A31B00:
	// fsubs f10,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
loc_82A31B0C:
	// lfs f13,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f31,f0,f13,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f31.f64));
loc_82A31B14:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82a31b28
	if (!cr6.eq) goto loc_82A31B28;
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82A31B28:
	// fcmpu cr6,f12,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f28.f64);
	// bgt cr6,0x82a31b48
	if (cr6.gt) goto loc_82A31B48;
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82a31b50
	if (cr6.lt) goto loc_82A31B50;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fnmsubs f31,f0,f11,f31
	ctx.f31.f64 = double(float(-(ctx.f0.f64 * ctx.f11.f64 - ctx.f31.f64)));
	// b 0x82a31b50
	goto loc_82A31B50;
loc_82A31B48:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f31,f0,f11,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f31.f64));
loc_82A31B50:
	// stfs f28,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A31B60;
	sub_82A5AA98(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lfs f30,-23844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f30.f64 = double(temp.f32);
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A31B78;
	sub_82A5AA98(ctx, base);
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82646fc0
	ctx.lr = 0x82A31B88;
	sub_82646FC0(ctx, base);
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsqrts f11,f9
	ctx.f11.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f11,f28
	cr6.compare(ctx.f11.f64, ctx.f28.f64);
	// beq cr6,0x82a31bbc
	if (cr6.eq) goto loc_82A31BBC;
	// fdivs f11,f29,f11
	ctx.f11.f64 = double(float(ctx.f29.f64 / ctx.f11.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
loc_82A31BBC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f10,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,-11408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11408);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f6,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f13,25340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25340);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f4,0(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fadds f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,4(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fadds f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f2,8(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f4,0(r24)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,4(r24)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// lfs f0,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a31c24
	if (cr6.gt) goto loc_82A31C24;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82a31c4c
	goto loc_82A31C4C;
loc_82A31C24:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,21712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82a31c3c
	if (cr6.lt) goto loc_82A31C3C;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82a31c4c
	goto loc_82A31C4C;
loc_82A31C3C:
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,14584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14584);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82A31C4C:
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A31C58;
	sub_82A5AA98(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,9104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9104);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f10,f11,f1,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f10,4(r24)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x82a31c88
	if (!cr6.lt) goto loc_82A31C88;
	// stfs f0,4(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
loc_82A31C88:
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a29950
	ctx.lr = 0x82A31C94;
	sub_82A29950(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// lfs f13,-11368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11368);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a31cc0
	if (cr6.gt) goto loc_82A31CC0;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82a31ce8
	goto loc_82A31CE8;
loc_82A31CC0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,11792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11792);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82a31cd8
	if (cr6.lt) goto loc_82A31CD8;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82a31ce8
	goto loc_82A31CE8;
loc_82A31CD8:
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82A31CE8:
	// fadds f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A31CF8;
	sub_82A5AA98(ctx, base);
	// fsubs f13,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// fadds f30,f13,f29
	ctx.f30.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// bl 0x82a29950
	ctx.lr = 0x82A31D10;
	sub_82A29950(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a31d24
	if (!cr6.eq) goto loc_82A31D24;
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f29.f64;
	// b 0x82a31d28
	goto loc_82A31D28;
loc_82A31D24:
	// fmr f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f27.f64;
loc_82A31D28:
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// bge cr6,0x82a31d40
	if (!cr6.lt) goto loc_82A31D40;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-20096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20096);
	ctx.f31.f64 = double(temp.f32);
loc_82A31D40:
	// fsel f12,f0,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f29.f64 : ctx.f27.f64;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f9,f31
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// bge cr6,0x82a31d6c
	if (!cr6.lt) goto loc_82A31D6C;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// b 0x82a31d78
	goto loc_82A31D78;
loc_82A31D6C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82a31d78
	if (cr6.lt) goto loc_82A31D78;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
loc_82A31D78:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82a31d8c
	if (!cr6.lt) goto loc_82A31D8C;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x82a31d98
	goto loc_82A31D98;
loc_82A31D8C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82a31d98
	if (cr6.lt) goto loc_82A31D98;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_82A31D98:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82a31dac
	if (!cr6.lt) goto loc_82A31DAC;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x82a31db8
	goto loc_82A31DB8;
loc_82A31DAC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82a31dbc
	if (cr6.lt) goto loc_82A31DBC;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_82A31DB8:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82A31DBC:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmuls f1,f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a5a710
	ctx.lr = 0x82A31DCC;
	sub_82A5A710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f1,-4460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a5a710
	ctx.lr = 0x82A31DE0;
	sub_82A5A710(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7c0
	ctx.lr = 0x82A31DEC;
	__restfpr_27(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A31DF0"))) PPC_WEAK_FUNC(sub_82A31DF0);
PPC_FUNC_IMPL(__imp__sub_82A31DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// stb r10,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r10.u8);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stb r10,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r10.u8);
loc_82A31E2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,29(r9)
	PPC_STORE_U8(ctx.r9.u32 + 29, ctx.r8.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x82a31e2c
	if (cr6.lt) goto loc_82A31E2C;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stb r10,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r10.u8);
	// stb r10,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A31E54"))) PPC_WEAK_FUNC(sub_82A31E54);
PPC_FUNC_IMPL(__imp__sub_82A31E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A31E58"))) PPC_WEAK_FUNC(sub_82A31E58);
PPC_FUNC_IMPL(__imp__sub_82A31E58) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A31E74"))) PPC_WEAK_FUNC(sub_82A31E74);
PPC_FUNC_IMPL(__imp__sub_82A31E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A31E78"))) PPC_WEAK_FUNC(sub_82A31E78);
PPC_FUNC_IMPL(__imp__sub_82A31E78) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r8,11
	ctx.r8.s64 = 11;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r10,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r10.u8);
	// stb r10,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A31EA8"))) PPC_WEAK_FUNC(sub_82A31EA8);
PPC_FUNC_IMPL(__imp__sub_82A31EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
loc_82A31EC8:
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// stwx r10,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r10.u32);
	// blt cr6,0x82a31ec8
	if (cr6.lt) goto loc_82A31EC8;
	// stb r10,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r10.u8);
	// stb r10,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r10.u8);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A31EF4"))) PPC_WEAK_FUNC(sub_82A31EF4);
PPC_FUNC_IMPL(__imp__sub_82A31EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A31EF8"))) PPC_WEAK_FUNC(sub_82A31EF8);
PPC_FUNC_IMPL(__imp__sub_82A31EF8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,2
	ctx.r31.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f13,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// li r4,255
	ctx.r4.s64 = 255;
loc_82A31F34:
	// stfs f13,-24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// stbx r5,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u8);
	// stfs f13,-12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a31f34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A31F34;
	// addi r3,r6,36
	ctx.r3.s64 = ctx.r6.s64 + 36;
	// bl 0x82a31df0
	ctx.lr = 0x82A31F58;
	sub_82A31DF0(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r5,96(r6)
	PPC_STORE_U8(ctx.r6.u32 + 96, ctx.r5.u8);
	// addi r3,r6,112
	ctx.r3.s64 = ctx.r6.s64 + 112;
	// stb r5,97(r6)
	PPC_STORE_U8(ctx.r6.u32 + 97, ctx.r5.u8);
	// stw r31,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, ctx.r31.u32);
	// stb r5,108(r6)
	PPC_STORE_U8(ctx.r6.u32 + 108, ctx.r5.u8);
	// stw r10,104(r6)
	PPC_STORE_U32(ctx.r6.u32 + 104, ctx.r10.u32);
	// stb r11,109(r6)
	PPC_STORE_U8(ctx.r6.u32 + 109, ctx.r11.u8);
	// stb r11,110(r6)
	PPC_STORE_U8(ctx.r6.u32 + 110, ctx.r11.u8);
	// stb r5,80(r6)
	PPC_STORE_U8(ctx.r6.u32 + 80, ctx.r5.u8);
	// stw r5,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, ctx.r5.u32);
	// stw r31,88(r6)
	PPC_STORE_U32(ctx.r6.u32 + 88, ctx.r31.u32);
	// stw r5,92(r6)
	PPC_STORE_U32(ctx.r6.u32 + 92, ctx.r5.u32);
	// bl 0x82a31ea8
	ctx.lr = 0x82A31F94;
	sub_82A31EA8(ctx, base);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stb r5,144(r6)
	PPC_STORE_U8(ctx.r6.u32 + 144, ctx.r5.u8);
	// stw r5,148(r6)
	PPC_STORE_U32(ctx.r6.u32 + 148, ctx.r5.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r5,152(r6)
	PPC_STORE_U8(ctx.r6.u32 + 152, ctx.r5.u8);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r11,r6,172
	ctx.r11.s64 = ctx.r6.s64 + 172;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lfs f0,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stfs f0,156(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 156, temp.u32);
	// stb r5,172(r6)
	PPC_STORE_U8(ctx.r6.u32 + 172, ctx.r5.u8);
	// stfs f13,176(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 176, temp.u32);
	// stfs f13,180(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 180, temp.u32);
	// stfs f13,184(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 184, temp.u32);
	// stw r4,188(r6)
	PPC_STORE_U32(ctx.r6.u32 + 188, ctx.r4.u32);
	// stfs f13,236(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 236, temp.u32);
	// stb r5,192(r6)
	PPC_STORE_U8(ctx.r6.u32 + 192, ctx.r5.u8);
	// stb r5,193(r6)
	PPC_STORE_U8(ctx.r6.u32 + 193, ctx.r5.u8);
	// stw r4,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r4.u32);
	// stw r4,200(r6)
	PPC_STORE_U32(ctx.r6.u32 + 200, ctx.r4.u32);
	// stb r5,204(r6)
	PPC_STORE_U8(ctx.r6.u32 + 204, ctx.r5.u8);
	// stw r8,232(r6)
	PPC_STORE_U32(ctx.r6.u32 + 232, ctx.r8.u32);
	// stb r5,240(r6)
	PPC_STORE_U8(ctx.r6.u32 + 240, ctx.r5.u8);
	// stw r5,244(r6)
	PPC_STORE_U32(ctx.r6.u32 + 244, ctx.r5.u32);
	// stb r5,248(r6)
	PPC_STORE_U8(ctx.r6.u32 + 248, ctx.r5.u8);
	// stb r5,249(r6)
	PPC_STORE_U8(ctx.r6.u32 + 249, ctx.r5.u8);
	// stb r5,250(r6)
	PPC_STORE_U8(ctx.r6.u32 + 250, ctx.r5.u8);
	// stb r5,251(r6)
	PPC_STORE_U8(ctx.r6.u32 + 251, ctx.r5.u8);
	// stb r5,252(r6)
	PPC_STORE_U8(ctx.r6.u32 + 252, ctx.r5.u8);
	// stw r5,256(r6)
	PPC_STORE_U32(ctx.r6.u32 + 256, ctx.r5.u32);
	// stb r5,3292(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3292, ctx.r5.u8);
	// stw r31,3288(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3288, ctx.r31.u32);
	// stw r5,3296(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3296, ctx.r5.u32);
	// stw r5,3300(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3300, ctx.r5.u32);
	// stb r5,3304(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3304, ctx.r5.u8);
	// stb r5,3305(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3305, ctx.r5.u8);
	// stb r5,260(r6)
	PPC_STORE_U8(ctx.r6.u32 + 260, ctx.r5.u8);
	// stb r5,261(r6)
	PPC_STORE_U8(ctx.r6.u32 + 261, ctx.r5.u8);
	// stw r7,264(r6)
	PPC_STORE_U32(ctx.r6.u32 + 264, ctx.r7.u32);
loc_82A32034:
	// addi r8,r10,387
	ctx.r8.s64 = ctx.r10.s64 + 387;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r7,r10,84
	ctx.r7.s64 = ctx.r10.s64 * 84;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stfs f13,268(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 268, temp.u32);
	// stfs f13,272(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 272, temp.u32);
	// stb r5,460(r11)
	PPC_STORE_U8(ctx.r11.u32 + 460, ctx.r5.u8);
	// stfs f13,464(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 464, temp.u32);
	// stb r4,461(r11)
	PPC_STORE_U8(ctx.r11.u32 + 461, ctx.r4.u8);
	// stfs f13,536(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 536, temp.u32);
	// stb r5,462(r11)
	PPC_STORE_U8(ctx.r11.u32 + 462, ctx.r5.u8);
	// stb r5,468(r11)
	PPC_STORE_U8(ctx.r11.u32 + 468, ctx.r5.u8);
	// addi r9,r9,268
	ctx.r9.s64 = ctx.r9.s64 + 268;
	// stb r5,469(r11)
	PPC_STORE_U8(ctx.r11.u32 + 469, ctx.r5.u8);
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// stw r4,532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 532, ctx.r4.u32);
	// stb r5,540(r11)
	PPC_STORE_U8(ctx.r11.u32 + 540, ctx.r5.u8);
	// addi r11,r11,460
	ctx.r11.s64 = ctx.r11.s64 + 460;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// stb r3,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r3.u8);
	// blt cr6,0x82a32034
	if (cr6.lt) goto loc_82A32034;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r8,24
	ctx.r8.s64 = 24;
loc_82A320A4:
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,2476
	ctx.r9.s64 = ctx.r11.s64 + 2476;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r5,2476(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2476, ctx.r5.u8);
	// cmplwi cr6,r10,22
	cr6.compare<uint32_t>(ctx.r10.u32, 22, xer);
	// stw r5,2480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2480, ctx.r5.u32);
	// stb r8,2484(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2484, ctx.r8.u8);
	// stfs f13,2488(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2488, temp.u32);
	// stfs f13,2492(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2492, temp.u32);
	// stfs f13,2496(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2496, temp.u32);
	// stw r4,2500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2500, ctx.r4.u32);
	// blt cr6,0x82a320a4
	if (cr6.lt) goto loc_82A320A4;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
loc_82A320E4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r5,3092(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3092, ctx.r5.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// blt cr6,0x82a320e4
	if (cr6.lt) goto loc_82A320E4;
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

__attribute__((alias("__imp__sub_82A32110"))) PPC_WEAK_FUNC(sub_82A32110);
PPC_FUNC_IMPL(__imp__sub_82A32110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A32118;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r3,460
	ctx.r10.s64 = ctx.r3.s64 + 460;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,192
	ctx.r11.s64 = ctx.r3.s64 + 192;
	// li r30,23
	ctx.r30.s64 = 23;
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r10,12
	ctx.r29.s64 = ctx.r10.s64 + 12;
	// stfs f31,160(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f31,164(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f31,168(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f31,176(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f31,180(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f31,184(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f31,208(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f31,212(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f31,216(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f31,220(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stfs f31,224(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f31,228(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
loc_82A3216C:
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r6,r11,22320
	ctx.r6.s64 = ctx.r11.s64 + 22320;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823fca98
	ctx.lr = 0x82A32184;
	sub_823FCA98(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// bge 0x82a3216c
	if (!cr0.lt) goto loc_82A3216C;
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r31,2476
	ctx.r11.s64 = ctx.r31.s64 + 2476;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A321A0:
	// stfs f31,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfsu f31,28(r11)
	ea = 28 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a321a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A321A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a31ef8
	ctx.lr = 0x82A321B8;
	sub_82A31EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A321C8"))) PPC_WEAK_FUNC(sub_82A321C8);
PPC_FUNC_IMPL(__imp__sub_82A321C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A321E4"))) PPC_WEAK_FUNC(sub_82A321E4);
PPC_FUNC_IMPL(__imp__sub_82A321E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A321E8"))) PPC_WEAK_FUNC(sub_82A321E8);
PPC_FUNC_IMPL(__imp__sub_82A321E8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,5
	ctx.r11.s64 = ctx.r4.s64 + 5;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A321F8"))) PPC_WEAK_FUNC(sub_82A321F8);
PPC_FUNC_IMPL(__imp__sub_82A321F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A32214"))) PPC_WEAK_FUNC(sub_82A32214);
PPC_FUNC_IMPL(__imp__sub_82A32214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A32218"))) PPC_WEAK_FUNC(sub_82A32218);
PPC_FUNC_IMPL(__imp__sub_82A32218) {
	PPC_FUNC_PROLOGUE();
	// stb r4,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A32220"))) PPC_WEAK_FUNC(sub_82A32220);
PPC_FUNC_IMPL(__imp__sub_82A32220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A3222C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82a32240
	if (!cr6.gt) goto loc_82A32240;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A32240:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a3222c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A3222C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3224C"))) PPC_WEAK_FUNC(sub_82A3224C);
PPC_FUNC_IMPL(__imp__sub_82A3224C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A32250"))) PPC_WEAK_FUNC(sub_82A32250);
PPC_FUNC_IMPL(__imp__sub_82A32250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A32264:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a32264
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A32264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A32270"))) PPC_WEAK_FUNC(sub_82A32270);
PPC_FUNC_IMPL(__imp__sub_82A32270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A32278;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// stb r30,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A322B8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a322b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A322B8;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82a47fd0
	ctx.lr = 0x82A322C8;
	sub_82A47FD0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stb r29,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A322E4"))) PPC_WEAK_FUNC(sub_82A322E4);
PPC_FUNC_IMPL(__imp__sub_82A322E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A322E8"))) PPC_WEAK_FUNC(sub_82A322E8);
PPC_FUNC_IMPL(__imp__sub_82A322E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// b 0x82a47eb0
	sub_82A47EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A322F0"))) PPC_WEAK_FUNC(sub_82A322F0);
PPC_FUNC_IMPL(__imp__sub_82A322F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a32310
	if (cr6.lt) goto loc_82A32310;
	// lbz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82A32310:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A32318"))) PPC_WEAK_FUNC(sub_82A32318);
PPC_FUNC_IMPL(__imp__sub_82A32318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a32330
	if (cr6.lt) goto loc_82A32330;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a32334
	if (cr6.lt) goto loc_82A32334;
loc_82A32330:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A32334:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3237c
	if (!cr6.eq) goto loc_82A3237C;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3237c
	if (!cr6.eq) goto loc_82A3237C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bge cr6,0x82a32360
	if (!cr6.lt) goto loc_82A32360;
loc_82A32358:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A32360:
	// lbz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a32358
	if (!cr6.eq) goto loc_82A32358;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A3237C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A32384"))) PPC_WEAK_FUNC(sub_82A32384);
PPC_FUNC_IMPL(__imp__sub_82A32384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A32388"))) PPC_WEAK_FUNC(sub_82A32388);
PPC_FUNC_IMPL(__imp__sub_82A32388) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4328);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A32390"))) PPC_WEAK_FUNC(sub_82A32390);
PPC_FUNC_IMPL(__imp__sub_82A32390) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4328, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A32398"))) PPC_WEAK_FUNC(sub_82A32398);
PPC_FUNC_IMPL(__imp__sub_82A32398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4220(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4220);
	// lwz r10,4224(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4224);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A323AC"))) PPC_WEAK_FUNC(sub_82A323AC);
PPC_FUNC_IMPL(__imp__sub_82A323AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A323B0"))) PPC_WEAK_FUNC(sub_82A323B0);
PPC_FUNC_IMPL(__imp__sub_82A323B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,4220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4220, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4224, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A323C4"))) PPC_WEAK_FUNC(sub_82A323C4);
PPC_FUNC_IMPL(__imp__sub_82A323C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A323C8"))) PPC_WEAK_FUNC(sub_82A323C8);
PPC_FUNC_IMPL(__imp__sub_82A323C8) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a3254c
	if (cr6.eq) goto loc_82A3254C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a3254c
	if (cr6.eq) goto loc_82A3254C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a3254c
	if (cr6.eq) goto loc_82A3254C;
	// ld r11,4220(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4220);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a3254c
	if (cr6.eq) goto loc_82A3254C;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82a3254c
	if (cr6.eq) goto loc_82A3254C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A32424:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x82a32434
	if (cr6.lt) goto loc_82A32434;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A32434:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82a3246c
	if (cr6.eq) goto loc_82A3246C;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r10,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a32480
	if (cr6.eq) goto loc_82A32480;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82a3246c
	if (cr6.eq) goto loc_82A3246C;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r10,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82a32480
	if (cr6.eq) goto loc_82A32480;
loc_82A3246C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x82a32424
	if (cr6.lt) goto loc_82A32424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82a32550
	goto loc_82A32550;
loc_82A32480:
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// beq cr6,0x82a32544
	if (cr6.eq) goto loc_82A32544;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a324dc
	if (cr6.eq) goto loc_82A324DC;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a32544
	if (!cr6.eq) goto loc_82A32544;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_82A3249C:
	// ld r4,4220(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 4220);
	// bl 0x82a16a60
	ctx.lr = 0x82A324A4;
	sub_82A16A60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a324b8
	if (cr6.lt) goto loc_82A324B8;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a324bc
	if (cr6.lt) goto loc_82A324BC;
loc_82A324B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A324BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a324e4
	if (cr6.eq) goto loc_82A324E4;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a324e8
	goto loc_82A324E8;
loc_82A324DC:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82a3249c
	goto loc_82A3249C;
loc_82A324E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A324E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a324f8
	if (cr6.eq) goto loc_82A324F8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A324F8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a3250c
	if (cr6.lt) goto loc_82A3250C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a32510
	if (cr6.lt) goto loc_82A32510;
loc_82A3250C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A32510:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32530
	if (cr6.eq) goto loc_82A32530;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r10,5790(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5790);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a32534
	goto loc_82A32534;
loc_82A32530:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A32534:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32544
	if (cr6.eq) goto loc_82A32544;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A32544:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82a32550
	goto loc_82A32550;
loc_82A3254C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A32550:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A32568"))) PPC_WEAK_FUNC(sub_82A32568);
PPC_FUNC_IMPL(__imp__sub_82A32568) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a3267c
	if (cr6.eq) goto loc_82A3267C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a3267c
	if (cr6.eq) goto loc_82A3267C;
	// ld r11,4220(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4220);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a3267c
	if (cr6.eq) goto loc_82A3267C;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82a3267c
	if (cr6.eq) goto loc_82A3267C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A325B0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x82a325c0
	if (cr6.lt) goto loc_82A325C0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A325C0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82a325f8
	if (cr6.eq) goto loc_82A325F8;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r10,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a32618
	if (cr6.eq) goto loc_82A32618;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82a325f8
	if (cr6.eq) goto loc_82A325F8;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r10,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82a32618
	if (cr6.eq) goto loc_82A32618;
loc_82A325F8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x82a325b0
	if (cr6.lt) goto loc_82A325B0;
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
loc_82A32618:
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// beq cr6,0x82a3267c
	if (cr6.eq) goto loc_82A3267C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a32630
	if (cr6.eq) goto loc_82A32630;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a3267c
	if (!cr6.eq) goto loc_82A3267C;
loc_82A32630:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x82a32640
	if (cr6.lt) goto loc_82A32640;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A32640:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r8
	ctx.r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// beq cr6,0x82a32658
	if (cr6.eq) goto loc_82A32658;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_82A32658:
	// ld r4,4220(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 4220);
	// bl 0x82a16a60
	ctx.lr = 0x82A32660;
	sub_82A16A60(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82a3267c
	if (cr6.eq) goto loc_82A3267C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82A3267C:
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

