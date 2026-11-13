#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82CE0EF8"))) PPC_WEAK_FUNC(sub_82CE0EF8);
PPC_FUNC_IMPL(__imp__sub_82CE0EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CE0F00;
	__savegprlr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,200(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// addi r29,r3,200
	ctx.r29.s64 = ctx.r3.s64 + 200;
	// lwz r4,204(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ce0f3c
	if (cr6.eq) goto loc_82CE0F3C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ce01a0
	ctx.lr = 0x82CE0F24;
	sub_82CE01A0(ctx, base);
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82cdfce8
	ctx.lr = 0x82CE0F38;
	sub_82CDFCE8(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82CE0F3C:
	// bl 0x82dad2e0
	ctx.lr = 0x82CE0F40;
	sub_82DAD2E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1064
	if (cr6.eq) goto loc_82CE1064;
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce0f64
	if (!cr6.eq) goto loc_82CE0F64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82ce0f68
	goto loc_82CE0F68;
loc_82CE0F64:
	// bl 0x82e744c8
	ctx.lr = 0x82CE0F68;
	sub_82E744C8(ctx, base);
loc_82CE0F68:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce1064
	if (cr6.eq) goto loc_82CE1064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db0bf0
	ctx.lr = 0x82CE0F7C;
	sub_82DB0BF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82c5bc60
	ctx.lr = 0x82CE0F8C;
	sub_82C5BC60(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c5d378
	ctx.lr = 0x82CE0F98;
	sub_82C5D378(ctx, base);
	// lwz r27,148(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x82ce1054
	if (cr6.eq) goto loc_82CE1054;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r25,2
	ctx.r25.s64 = 2;
loc_82CE0FB8:
	// lbz r11,189(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 189);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce1040
	if (!cr6.eq) goto loc_82CE1040;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce1040
	if (cr6.eq) goto loc_82CE1040;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r30,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r30.u64);
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82CE0FF8;
	sub_8259CB28(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ld r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bl 0x82ce0db0
	ctx.lr = 0x82CE1014;
	sub_82CE0DB0(ctx, base);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82ce1030
	if (cr6.lt) goto loc_82CE1030;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x82CE1030;
	sub_825952B8(ctx, base);
loc_82CE1030:
	// lwz r27,148(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
loc_82CE1040:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82c5ba08
	ctx.lr = 0x82CE1048;
	sub_82C5BA08(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bne cr6,0x82ce0fb8
	if (!cr6.eq) goto loc_82CE0FB8;
loc_82CE1054:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82c5d328
	ctx.lr = 0x82CE105C;
	sub_82C5D328(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82CE1064:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82da8d18
	ctx.lr = 0x82CE106C;
	sub_82DA8D18(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82da8838
	ctx.lr = 0x82CE1074;
	sub_82DA8838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce10d0
	if (cr6.eq) goto loc_82CE10D0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// std r30,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r30.u64);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// stb r30,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r30.u8);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x8259cb28
	ctx.lr = 0x82CE10AC;
	sub_8259CB28(ctx, base);
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// ld r9,248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// bl 0x82ce0db0
	ctx.lr = 0x82CE10C8;
	sub_82CE0DB0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x838760e0
	ctx.lr = 0x82CE10D0;
	sub_838760E0(ctx, base);
loc_82CE10D0:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82da8c38
	ctx.lr = 0x82CE10D8;
	sub_82DA8C38(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE10E0"))) PPC_WEAK_FUNC(sub_82CE10E0);
PPC_FUNC_IMPL(__imp__sub_82CE10E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE10E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82dad2e0
	ctx.lr = 0x82CE10F8;
	sub_82DAD2E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1208
	if (cr6.eq) goto loc_82CE1208;
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1114
	if (cr6.eq) goto loc_82CE1114;
	// bl 0x82e744c8
	ctx.lr = 0x82CE1114;
	sub_82E744C8(ctx, base);
loc_82CE1114:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce1208
	if (cr6.eq) goto loc_82CE1208;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,216(r30)
	PPC_STORE_U8(ctx.r30.u32 + 216, ctx.r11.u8);
	// bl 0x82db0bf0
	ctx.lr = 0x82CE1130;
	sub_82DB0BF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c5bc60
	ctx.lr = 0x82CE1140;
	sub_82C5BC60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c5d378
	ctx.lr = 0x82CE114C;
	sub_82C5D378(ctx, base);
	// lwz r9,204(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// lwz r8,200(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r5,r6,r10
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r10.s32);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// beq cr6,0x82ce1170
	if (cr6.eq) goto loc_82CE1170;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82CE1170:
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq cr6,0x82ce11fc
	if (cr6.eq) goto loc_82CE11FC;
loc_82CE1184:
	// lbz r11,189(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 189);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ce11d8
	if (!cr6.eq) goto loc_82CE11D8;
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,204(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x82ce11cc
	if (cr6.eq) goto loc_82CE11CC;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
loc_82CE11A8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x82ce11c8
	if (cr6.eq) goto loc_82CE11C8;
	// lwz r8,204(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ce11a8
	if (!cr6.eq) goto loc_82CE11A8;
	// b 0x82ce11cc
	goto loc_82CE11CC;
loc_82CE11C8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82CE11CC:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce11f8
	if (!cr6.eq) goto loc_82CE11F8;
loc_82CE11D8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82c5ba08
	ctx.lr = 0x82CE11E0;
	sub_82C5BA08(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bne cr6,0x82ce1184
	if (!cr6.eq) goto loc_82CE1184;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c5d328
	ctx.lr = 0x82CE11F4;
	sub_82C5D328(ctx, base);
	// b 0x82ce1220
	goto loc_82CE1220;
loc_82CE11F8:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82CE11FC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c5d328
	ctx.lr = 0x82CE1204;
	sub_82C5D328(ctx, base);
	// b 0x82ce1220
	goto loc_82CE1220;
loc_82CE1208:
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce1220
	if (cr6.eq) goto loc_82CE1220;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r11,216(r30)
	PPC_STORE_U8(ctx.r30.u32 + 216, ctx.r11.u8);
loc_82CE1220:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce1240
	if (cr6.eq) goto loc_82CE1240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce0ef8
	ctx.lr = 0x82CE1234;
	sub_82CE0EF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CE1240:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE124C"))) PPC_WEAK_FUNC(sub_82CE124C);
PPC_FUNC_IMPL(__imp__sub_82CE124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE1250"))) PPC_WEAK_FUNC(sub_82CE1250);
PPC_FUNC_IMPL(__imp__sub_82CE1250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CE1258;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82e6f960
	ctx.lr = 0x82CE1264;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce12a8
	if (!cr6.eq) goto loc_82CE12A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
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
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103068
	ctx.lr = 0x82CE129C;
	sub_83103068(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE12A8:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa08
	ctx.lr = 0x82CE12B0;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce12f8
	if (!cr6.eq) goto loc_82CE12F8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,20480
	ctx.r8.u64 = ctx.r10.u64 | 20480;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r7,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103068
	ctx.lr = 0x82CE12EC;
	sub_83103068(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE12F8:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r29,164
	ctx.r30.s64 = ctx.r29.s64 + 164;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82CE1304:
	// lbzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ce132c
	if (!cr6.eq) goto loc_82CE132C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cdf610
	ctx.lr = 0x82CE131C;
	sub_82CDF610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ce132c
	if (!cr6.eq) goto loc_82CE132C;
	// stbx r28,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r28.u8);
loc_82CE132C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x82ce1304
	if (cr6.lt) goto loc_82CE1304;
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ce1360
	if (!cr6.eq) goto loc_82CE1360;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce10e0
	ctx.lr = 0x82CE134C;
	sub_82CE10E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce1360
	if (cr6.eq) goto loc_82CE1360;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cdf930
	ctx.lr = 0x82CE1360;
	sub_82CDF930(ctx, base);
loc_82CE1360:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE136C"))) PPC_WEAK_FUNC(sub_82CE136C);
PPC_FUNC_IMPL(__imp__sub_82CE136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE1370"))) PPC_WEAK_FUNC(sub_82CE1370);
PPC_FUNC_IMPL(__imp__sub_82CE1370) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82CE138C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r4,r11,6316
	ctx.r4.s64 = ctx.r11.s64 + 6316;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE13A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce13d8
	if (cr6.eq) goto loc_82CE13D8;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce13cc
	if (!cr6.eq) goto loc_82CE13CC;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,215
	ctx.r4.u64 = ctx.r4.u64 | 215;
	// b 0x82ce13d4
	goto loc_82CE13D4;
loc_82CE13CC:
	// lis r4,505
	ctx.r4.s64 = 33095680;
	// ori r4,r4,53
	ctx.r4.u64 = ctx.r4.u64 | 53;
loc_82CE13D4:
	// bl 0x82d30340
	ctx.lr = 0x82CE13D8;
	sub_82D30340(ctx, base);
loc_82CE13D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r30,-31776
	ctx.r30.s64 = -2082471936;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r30,12816
	ctx.r11.s64 = ctx.r30.s64 + 12816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x82d19b10
	ctx.lr = 0x82CE13FC;
	sub_82D19B10(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12816(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12816);
	// bl 0x82d19b10
	ctx.lr = 0x82CE140C;
	sub_82D19B10(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce1494
	if (!cr6.eq) goto loc_82CE1494;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d19a78
	ctx.lr = 0x82CE1424;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE142C;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE1438;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d19a78
	ctx.lr = 0x82CE1444;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE144C;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE1458;
	sub_82D2AEC8(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r11,68
	ctx.r11.s64 = 68;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r5,r8,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r5,r5,r11
	ctx.r5.s32 = PPCDivide(ctx.r5.s32, ctx.r11.s32);
	// stw r5,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r5.u32);
	// bl 0x82d20f50
	ctx.lr = 0x82CE1488;
	sub_82D20F50(ctx, base);
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82ce14f4
	goto loc_82CE14F4;
loc_82CE1494:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ce14fc
	if (!cr6.eq) goto loc_82CE14FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d19a78
	ctx.lr = 0x82CE14A8;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE14B0;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE14BC;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d19a78
	ctx.lr = 0x82CE14C8;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE14D0;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE14DC;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce0ef8
	ctx.lr = 0x82CE14E4;
	sub_82CE0EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cdf930
	ctx.lr = 0x82CE14EC;
	sub_82CDF930(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82CE14F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82CE14FC;
	sub_82D1EAC0(ctx, base);
loc_82CE14FC:
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

__attribute__((alias("__imp__sub_82CE1518"))) PPC_WEAK_FUNC(sub_82CE1518);
PPC_FUNC_IMPL(__imp__sub_82CE1518) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r4,r3,160
	ctx.r4.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,12812(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12812);
	// bl 0x82d19b10
	ctx.lr = 0x82CE1540;
	sub_82D19B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE1548;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r4,r10,6280
	ctx.r4.s64 = ctx.r10.s64 + 6280;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CE1564;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce15a8
	if (cr6.eq) goto loc_82CE15A8;
	// bl 0x82d2fe58
	ctx.lr = 0x82CE1570;
	sub_82D2FE58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1588
	if (cr6.eq) goto loc_82CE1588;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x82d3d968
	ctx.lr = 0x82CE1588;
	sub_82D3D968(ctx, base);
loc_82CE1588:
	// bl 0x830ff290
	ctx.lr = 0x82CE158C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// beq cr6,0x82ce15a8
	if (cr6.eq) goto loc_82CE15A8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE15A8;
	sub_82D2AEC8(ctx, base);
loc_82CE15A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1370
	ctx.lr = 0x82CE15B0;
	sub_82CE1370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce0c38
	ctx.lr = 0x82CE15B8;
	sub_82CE0C38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cdf2f8
	ctx.lr = 0x82CE15C0;
	sub_82CDF2F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CE15C8;
	sub_82D19A68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1668
	if (cr6.eq) goto loc_82CE1668;
	// bl 0x83816ad8
	ctx.lr = 0x82CE15D8;
	sub_83816AD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce15f4
	if (cr6.eq) goto loc_82CE15F4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d19a30
	ctx.lr = 0x82CE15F0;
	sub_82D19A30(ctx, base);
	// b 0x82ce1608
	goto loc_82CE1608;
loc_82CE15F4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19a30
	ctx.lr = 0x82CE15FC;
	sub_82D19A30(ctx, base);
	// li r4,-4160
	ctx.r4.s64 = -4160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83545640
	ctx.lr = 0x82CE1608;
	sub_83545640(ctx, base);
loc_82CE1608:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b0f8
	ctx.lr = 0x82CE1610;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d390c0
	ctx.lr = 0x82CE1614;
	sub_82D390C0(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r30,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r30.u8);
	// bl 0x82c3a2c0
	ctx.lr = 0x82CE1620;
	sub_82C3A2C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,83(r3)
	PPC_STORE_U8(ctx.r3.u32 + 83, ctx.r11.u8);
	// stb r30,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r30.u8);
	// bl 0x831021a0
	ctx.lr = 0x82CE1630;
	sub_831021A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82da45f8
	ctx.lr = 0x82CE1638;
	sub_82DA45F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1668
	if (cr6.eq) goto loc_82CE1668;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,263
	ctx.r10.s64 = 17235968;
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,5
	ctx.r8.u64 = ctx.r10.u64 | 5;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x83102fe0
	ctx.lr = 0x82CE1668;
	sub_83102FE0(ctx, base);
loc_82CE1668:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82CE1684"))) PPC_WEAK_FUNC(sub_82CE1684);
PPC_FUNC_IMPL(__imp__sub_82CE1684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE1688"))) PPC_WEAK_FUNC(sub_82CE1688);
PPC_FUNC_IMPL(__imp__sub_82CE1688) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82CE16A4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r4,r11,6292
	ctx.r4.s64 = ctx.r11.s64 + 6292;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE16C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1714
	if (cr6.eq) goto loc_82CE1714;
	// bl 0x82d2fe58
	ctx.lr = 0x82CE16CC;
	sub_82D2FE58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1714
	if (cr6.eq) goto loc_82CE1714;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d908
	ctx.lr = 0x82CE16E0;
	sub_82D3D908(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x82cdee98
	ctx.lr = 0x82CE16F0;
	sub_82CDEE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1370
	ctx.lr = 0x82CE16F8;
	sub_82CE1370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cdf2f8
	ctx.lr = 0x82CE1700;
	sub_82CDF2F8(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82CE1704;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1714
	if (cr6.eq) goto loc_82CE1714;
	// li r4,118
	ctx.r4.s64 = 118;
	// bl 0x82d26b18
	ctx.lr = 0x82CE1714;
	sub_82D26B18(ctx, base);
loc_82CE1714:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE172C"))) PPC_WEAK_FUNC(sub_82CE172C);
PPC_FUNC_IMPL(__imp__sub_82CE172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE1730"))) PPC_WEAK_FUNC(sub_82CE1730);
PPC_FUNC_IMPL(__imp__sub_82CE1730) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82CE174C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r4,r11,6304
	ctx.r4.s64 = ctx.r11.s64 + 6304;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE1768;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce17bc
	if (cr6.eq) goto loc_82CE17BC;
	// bl 0x82d2fe58
	ctx.lr = 0x82CE1774;
	sub_82D2FE58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce17bc
	if (cr6.eq) goto loc_82CE17BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d8a8
	ctx.lr = 0x82CE1788;
	sub_82D3D8A8(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x82cdee98
	ctx.lr = 0x82CE1798;
	sub_82CDEE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1370
	ctx.lr = 0x82CE17A0;
	sub_82CE1370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cdf2f8
	ctx.lr = 0x82CE17A8;
	sub_82CDF2F8(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82CE17AC;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce17bc
	if (cr6.eq) goto loc_82CE17BC;
	// li r4,118
	ctx.r4.s64 = 118;
	// bl 0x82d26b18
	ctx.lr = 0x82CE17BC;
	sub_82D26B18(ctx, base);
loc_82CE17BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE17D4"))) PPC_WEAK_FUNC(sub_82CE17D4);
PPC_FUNC_IMPL(__imp__sub_82CE17D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE17D8"))) PPC_WEAK_FUNC(sub_82CE17D8);
PPC_FUNC_IMPL(__imp__sub_82CE17D8) {
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
	// bl 0x82c28ac0
	ctx.lr = 0x82CE17F0;
	sub_82C28AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,30192
	ctx.r9.s64 = ctx.r11.s64 + 30192;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82CE1820"))) PPC_WEAK_FUNC(sub_82CE1820);
PPC_FUNC_IMPL(__imp__sub_82CE1820) {
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
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce1874
	if (cr6.eq) goto loc_82CE1874;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,4170
	ctx.r8.u64 = ctx.r10.u64 | 4170;
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
	// bl 0x83103068
	ctx.lr = 0x82CE1864;
	sub_83103068(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CE1874:
	// bl 0x82c29a18
	ctx.lr = 0x82CE1878;
	sub_82C29A18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE1888"))) PPC_WEAK_FUNC(sub_82CE1888);
PPC_FUNC_IMPL(__imp__sub_82CE1888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CE1890;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82d19a78
	ctx.lr = 0x82CE18A0;
	sub_82D19A78(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CE18AC;
	sub_82D19A68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82CE18BC;
	sub_82D19A88(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ce1918
	if (cr6.eq) goto loc_82CE1918;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r11,7836
	ctx.r28.s64 = ctx.r11.s64 + 7836;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE18F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce1918
	if (!cr6.eq) goto loc_82CE1918;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE1914;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82CE1918:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82ce1960
	if (cr6.eq) goto loc_82CE1960;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ce1960
	if (cr6.eq) goto loc_82CE1960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2fe58
	ctx.lr = 0x82CE1930;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce195c
	if (cr6.eq) goto loc_82CE195C;
	// lwz r5,100(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x82ce1954
	if (!cr6.eq) goto loc_82CE1954;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30530
	ctx.lr = 0x82CE1950;
	sub_82D30530(ctx, base);
	// b 0x82ce195c
	goto loc_82CE195C;
loc_82CE1954:
	// lwz r4,96(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82d3d968
	ctx.lr = 0x82CE195C;
	sub_82D3D968(ctx, base);
loc_82CE195C:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82CE1960:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82ce1988
	if (cr6.eq) goto loc_82CE1988;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82CE197C;
	sub_82D2B608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CE1988;
	sub_83102DB0(ctx, base);
loc_82CE1988:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1994"))) PPC_WEAK_FUNC(sub_82CE1994);
PPC_FUNC_IMPL(__imp__sub_82CE1994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE1998"))) PPC_WEAK_FUNC(sub_82CE1998);
PPC_FUNC_IMPL(__imp__sub_82CE1998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE19A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d19a68
	ctx.lr = 0x82CE19B0;
	sub_82D19A68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce19ec
	if (cr6.eq) goto loc_82CE19EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17e98
	ctx.lr = 0x82CE19C4;
	sub_82D17E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce19ec
	if (cr6.eq) goto loc_82CE19EC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE19E0;
	sub_82D2AEC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CE19EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE19F8"))) PPC_WEAK_FUNC(sub_82CE19F8);
PPC_FUNC_IMPL(__imp__sub_82CE19F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE1A00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d19a68
	ctx.lr = 0x82CE1A10;
	sub_82D19A68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1a4c
	if (cr6.eq) goto loc_82CE1A4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17e98
	ctx.lr = 0x82CE1A24;
	sub_82D17E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce1a4c
	if (cr6.eq) goto loc_82CE1A4C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE1A40;
	sub_82D2AEC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CE1A4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1A58"))) PPC_WEAK_FUNC(sub_82CE1A58);
PPC_FUNC_IMPL(__imp__sub_82CE1A58) {
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
	ctx.lr = 0x82CE1A70;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1a88
	if (cr6.eq) goto loc_82CE1A88;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82CE1A88;
	sub_82D2B608(ctx, base);
loc_82CE1A88:
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

__attribute__((alias("__imp__sub_82CE1A9C"))) PPC_WEAK_FUNC(sub_82CE1A9C);
PPC_FUNC_IMPL(__imp__sub_82CE1A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE1AA0"))) PPC_WEAK_FUNC(sub_82CE1AA0);
PPC_FUNC_IMPL(__imp__sub_82CE1AA0) {
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
	ctx.lr = 0x82CE1AB8;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1ad0
	if (cr6.eq) goto loc_82CE1AD0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82CE1AD0;
	sub_82D2B608(ctx, base);
loc_82CE1AD0:
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

__attribute__((alias("__imp__sub_82CE1AE4"))) PPC_WEAK_FUNC(sub_82CE1AE4);
PPC_FUNC_IMPL(__imp__sub_82CE1AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE1AE8"))) PPC_WEAK_FUNC(sub_82CE1AE8);
PPC_FUNC_IMPL(__imp__sub_82CE1AE8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// ori r4,r4,46
	ctx.r4.u64 = ctx.r4.u64 | 46;
	// b 0x82ce2318
	sub_82CE2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1AF8"))) PPC_WEAK_FUNC(sub_82CE1AF8);
PPC_FUNC_IMPL(__imp__sub_82CE1AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,7968
	ctx.r9.s64 = ctx.r11.s64 + 7968;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// b 0x82d25548
	sub_82D25548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1B14"))) PPC_WEAK_FUNC(sub_82CE1B14);
PPC_FUNC_IMPL(__imp__sub_82CE1B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE1B18"))) PPC_WEAK_FUNC(sub_82CE1B18);
PPC_FUNC_IMPL(__imp__sub_82CE1B18) {
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
	// addi r9,r11,7968
	ctx.r9.s64 = ctx.r11.s64 + 7968;
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
	ctx.lr = 0x82CE1B50;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ce1b68
	if (cr6.eq) goto loc_82CE1B68;
	// bl 0x82416268
	ctx.lr = 0x82CE1B64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CE1B68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE1B80"))) PPC_WEAK_FUNC(sub_82CE1B80);
PPC_FUNC_IMPL(__imp__sub_82CE1B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE1B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce1ba8
	if (cr6.lt) goto loc_82CE1BA8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82CE1BA8:
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82CE1BBC;
	sub_82D253F8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r9,r11,7968
	ctx.r9.s64 = ctx.r11.s64 + 7968;
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

__attribute__((alias("__imp__sub_82CE1BE8"))) PPC_WEAK_FUNC(sub_82CE1BE8);
PPC_FUNC_IMPL(__imp__sub_82CE1BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE1BF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CE1BFC;
	sub_82D19A68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1cd4
	if (cr6.eq) goto loc_82CE1CD4;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,7602
	ctx.r6.s64 = ctx.r11.s64 + 7602;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82CE1C28;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ce1ca0
	if (cr6.eq) goto loc_82CE1CA0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce1c44
	if (cr6.lt) goto loc_82CE1C44;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82ce1c48
	goto loc_82CE1C48;
loc_82CE1C44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82CE1C48:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE1C5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1cd4
	if (cr6.eq) goto loc_82CE1CD4;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x82d33db0
	ctx.lr = 0x82CE1C6C;
	sub_82D33DB0(ctx, base);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ce1c84
	if (cr6.lt) goto loc_82CE1C84;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CE1C84:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE1C98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CE1CA0:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ce1cb4
	if (cr6.lt) goto loc_82CE1CB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CE1CB4:
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE1CCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CE1CD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1CE0"))) PPC_WEAK_FUNC(sub_82CE1CE0);
PPC_FUNC_IMPL(__imp__sub_82CE1CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CE1CE8;
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
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d19a68
	ctx.lr = 0x82CE1D00;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1d64
	if (cr6.eq) goto loc_82CE1D64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1be8
	ctx.lr = 0x82CE1D14;
	sub_82CE1BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1d64
	if (cr6.eq) goto loc_82CE1D64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CE1D28;
	sub_83102DB0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce1d3c
	if (cr6.lt) goto loc_82CE1D3C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ce1d40
	goto loc_82CE1D40;
loc_82CE1D3C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82CE1D40:
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
	ctx.lr = 0x82CE1D58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE1D64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1D70"))) PPC_WEAK_FUNC(sub_82CE1D70);
PPC_FUNC_IMPL(__imp__sub_82CE1D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CE1D78;
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
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d19a68
	ctx.lr = 0x82CE1D90;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1dfc
	if (cr6.eq) goto loc_82CE1DFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1be8
	ctx.lr = 0x82CE1DA4;
	sub_82CE1BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1dfc
	if (cr6.eq) goto loc_82CE1DFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CE1DB8;
	sub_83102DB0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce1de0
	if (cr6.lt) goto loc_82CE1DE0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3a900
	ctx.lr = 0x82CE1DD4;
	sub_82D3A900(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE1DE0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3a900
	ctx.lr = 0x82CE1DF0;
	sub_82D3A900(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE1DFC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1E08"))) PPC_WEAK_FUNC(sub_82CE1E08);
PPC_FUNC_IMPL(__imp__sub_82CE1E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CE1E10;
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
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d19a68
	ctx.lr = 0x82CE1E28;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1e94
	if (cr6.eq) goto loc_82CE1E94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1be8
	ctx.lr = 0x82CE1E3C;
	sub_82CE1BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1e94
	if (cr6.eq) goto loc_82CE1E94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CE1E50;
	sub_83102DB0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce1e78
	if (cr6.lt) goto loc_82CE1E78;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30138
	ctx.lr = 0x82CE1E6C;
	sub_82D30138(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE1E78:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30138
	ctx.lr = 0x82CE1E88;
	sub_82D30138(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE1E94:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1EA0"))) PPC_WEAK_FUNC(sub_82CE1EA0);
PPC_FUNC_IMPL(__imp__sub_82CE1EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CE1EA8;
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
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d19a68
	ctx.lr = 0x82CE1EC0;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1f24
	if (cr6.eq) goto loc_82CE1F24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1be8
	ctx.lr = 0x82CE1ED4;
	sub_82CE1BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1f24
	if (cr6.eq) goto loc_82CE1F24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CE1EE8;
	sub_83102DB0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce1f0c
	if (cr6.lt) goto loc_82CE1F0C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30208
	ctx.lr = 0x82CE1F00;
	sub_82D30208(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE1F0C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30208
	ctx.lr = 0x82CE1F18;
	sub_82D30208(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE1F24:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1F30"))) PPC_WEAK_FUNC(sub_82CE1F30);
PPC_FUNC_IMPL(__imp__sub_82CE1F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CE1F38;
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
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d19a68
	ctx.lr = 0x82CE1F50;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1f98
	if (cr6.eq) goto loc_82CE1F98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1be8
	ctx.lr = 0x82CE1F64;
	sub_82CE1BE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce1f8c
	if (cr6.eq) goto loc_82CE1F8C;
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bge cr6,0x82ce1f88
	if (!cr6.lt) goto loc_82CE1F88;
	// bl 0x82d39310
	ctx.lr = 0x82CE1F7C;
	sub_82D39310(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE1F88:
	// bl 0x82d39448
	ctx.lr = 0x82CE1F8C;
	sub_82D39448(ctx, base);
loc_82CE1F8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE1F98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE1FA4"))) PPC_WEAK_FUNC(sub_82CE1FA4);
PPC_FUNC_IMPL(__imp__sub_82CE1FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE1FA8"))) PPC_WEAK_FUNC(sub_82CE1FA8);
PPC_FUNC_IMPL(__imp__sub_82CE1FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE1FB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82ce1be8
	ctx.lr = 0x82CE1FC0;
	sub_82CE1BE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2034
	if (cr6.eq) goto loc_82CE2034;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CE1FD4;
	sub_83102DB0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce1fe8
	if (cr6.lt) goto loc_82CE1FE8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ce1fec
	goto loc_82CE1FEC;
loc_82CE1FE8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82CE1FEC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CE1FF4;
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
	ctx.lr = 0x82CE2008;
	sub_82D291E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce2028
	if (cr6.lt) goto loc_82CE2028;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CE2028;
	sub_825952B8(ctx, base);
loc_82CE2028:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CE2034:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE2040"))) PPC_WEAK_FUNC(sub_82CE2040);
PPC_FUNC_IMPL(__imp__sub_82CE2040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE2048;
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
	// bl 0x82d19a68
	ctx.lr = 0x82CE205C;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2134
	if (cr6.eq) goto loc_82CE2134;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1be8
	ctx.lr = 0x82CE2070;
	sub_82CE1BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2134
	if (cr6.eq) goto loc_82CE2134;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce24c0
	ctx.lr = 0x82CE2088;
	sub_82CE24C0(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,13220(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13220);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ce20b8
	if (!cr6.eq) goto loc_82CE20B8;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ce20bc
	if (cr6.eq) goto loc_82CE20BC;
loc_82CE20B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CE20BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce2110
	if (!cr6.eq) goto loc_82CE2110;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce24c0
	ctx.lr = 0x82CE20D4;
	sub_82CE24C0(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ce20f4
	if (cr6.eq) goto loc_82CE20F4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CE20F4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CE2104;
	sub_82D329F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CE2110:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,7848
	ctx.r4.s64 = ctx.r11.s64 + 7848;
	// bl 0x837b0c10
	ctx.lr = 0x82CE2120;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d32958
	ctx.lr = 0x82CE212C;
	sub_82D32958(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE2134;
	sub_8387E8E0(ctx, base);
loc_82CE2134:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE2140"))) PPC_WEAK_FUNC(sub_82CE2140);
PPC_FUNC_IMPL(__imp__sub_82CE2140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CE2148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x83123830
	ctx.lr = 0x82CE2164;
	sub_83123830(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce230c
	if (cr6.eq) goto loc_82CE230C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82ce230c
	if (cr6.gt) goto loc_82CE230C;
	// lis r12,-32050
	ctx.r12.s64 = -2100428800;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,8596
	ctx.r12.s64 = ctx.r12.s64 + 8596;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82CE2210;
	case 1:
		goto loc_82CE2230;
	case 2:
		goto loc_82CE21BC;
	case 3:
		goto loc_82CE21D8;
	case 4:
		goto loc_82CE21F4;
	case 5:
		goto loc_82CE2250;
	case 6:
		goto loc_82CE226C;
	case 7:
		goto loc_82CE22A4;
	case 8:
		goto loc_82CE22DC;
	case 9:
		goto loc_82CE22F8;
	default:
		return;
	}
	// lwz r22,8720(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8720);
	// lwz r22,8752(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8752);
	// lwz r22,8636(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8636);
	// lwz r22,8664(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8664);
	// lwz r22,8692(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8692);
	// lwz r22,8784(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8784);
	// lwz r22,8812(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8812);
	// lwz r22,8868(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8868);
	// lwz r22,8924(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8924);
	// lwz r22,8952(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8952);
loc_82CE21BC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1fa8
	ctx.lr = 0x82CE21CC;
	sub_82CE1FA8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE21D8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1d70
	ctx.lr = 0x82CE21E8;
	sub_82CE1D70(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE21F4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1ce0
	ctx.lr = 0x82CE2204;
	sub_82CE1CE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE2210:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1e08
	ctx.lr = 0x82CE2220;
	sub_82CE1E08(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE2230:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1ea0
	ctx.lr = 0x82CE2240;
	sub_82CE1EA0(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE2250:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1ce0
	ctx.lr = 0x82CE2260;
	sub_82CE1CE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE226C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d19a68
	ctx.lr = 0x82CE2278;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce230c
	if (cr6.eq) goto loc_82CE230C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1be8
	ctx.lr = 0x82CE228C;
	sub_82CE1BE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce230c
	if (cr6.eq) goto loc_82CE230C;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE22A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CE22AC;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce230c
	if (cr6.eq) goto loc_82CE230C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1be8
	ctx.lr = 0x82CE22C0;
	sub_82CE1BE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce230c
	if (cr6.eq) goto loc_82CE230C;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x82a672f0
	ctx.lr = 0x82CE22D0;
	sub_82A672F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE22DC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1f30
	ctx.lr = 0x82CE22EC;
	sub_82CE1F30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CE22F8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2040
	ctx.lr = 0x82CE2308;
	sub_82CE2040(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82CE230C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE2318"))) PPC_WEAK_FUNC(sub_82CE2318);
PPC_FUNC_IMPL(__imp__sub_82CE2318) {
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
	// bl 0x82d04220
	ctx.lr = 0x82CE2330;
	sub_82D04220(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82CE234C"))) PPC_WEAK_FUNC(sub_82CE234C);
PPC_FUNC_IMPL(__imp__sub_82CE234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE2350"))) PPC_WEAK_FUNC(sub_82CE2350);
PPC_FUNC_IMPL(__imp__sub_82CE2350) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE2360"))) PPC_WEAK_FUNC(sub_82CE2360);
PPC_FUNC_IMPL(__imp__sub_82CE2360) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82CE2388;
	sub_82D042A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE23AC"))) PPC_WEAK_FUNC(sub_82CE23AC);
PPC_FUNC_IMPL(__imp__sub_82CE23AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE23B0"))) PPC_WEAK_FUNC(sub_82CE23B0);
PPC_FUNC_IMPL(__imp__sub_82CE23B0) {
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
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,198
	ctx.r4.u64 = ctx.r4.u64 | 198;
	// bl 0x82d042a8
	ctx.lr = 0x82CE23D8;
	sub_82D042A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82CE23F4"))) PPC_WEAK_FUNC(sub_82CE23F4);
PPC_FUNC_IMPL(__imp__sub_82CE23F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE23F8"))) PPC_WEAK_FUNC(sub_82CE23F8);
PPC_FUNC_IMPL(__imp__sub_82CE23F8) {
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
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,184
	ctx.r4.u64 = ctx.r4.u64 | 184;
	// bl 0x82d042a8
	ctx.lr = 0x82CE2420;
	sub_82D042A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82CE243C"))) PPC_WEAK_FUNC(sub_82CE243C);
PPC_FUNC_IMPL(__imp__sub_82CE243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE2440"))) PPC_WEAK_FUNC(sub_82CE2440);
PPC_FUNC_IMPL(__imp__sub_82CE2440) {
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
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,177
	ctx.r4.u64 = ctx.r4.u64 | 177;
	// bl 0x82d04220
	ctx.lr = 0x82CE2460;
	sub_82D04220(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82CE247C"))) PPC_WEAK_FUNC(sub_82CE247C);
PPC_FUNC_IMPL(__imp__sub_82CE247C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE2480"))) PPC_WEAK_FUNC(sub_82CE2480);
PPC_FUNC_IMPL(__imp__sub_82CE2480) {
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
	// lis r4,33
	ctx.r4.s64 = 2162688;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,13
	ctx.r4.u64 = ctx.r4.u64 | 13;
	// bl 0x82d04220
	ctx.lr = 0x82CE24A0;
	sub_82D04220(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82CE24BC"))) PPC_WEAK_FUNC(sub_82CE24BC);
PPC_FUNC_IMPL(__imp__sub_82CE24BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE24C0"))) PPC_WEAK_FUNC(sub_82CE24C0);
PPC_FUNC_IMPL(__imp__sub_82CE24C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE24CC"))) PPC_WEAK_FUNC(sub_82CE24CC);
PPC_FUNC_IMPL(__imp__sub_82CE24CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE24D0"))) PPC_WEAK_FUNC(sub_82CE24D0);
PPC_FUNC_IMPL(__imp__sub_82CE24D0) {
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
	// lwz r10,20(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ce24fc
	if (cr6.lt) goto loc_82CE24FC;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x82ce2500
	goto loc_82CE2500;
loc_82CE24FC:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_82CE2500:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ce2510
	if (cr6.lt) goto loc_82CE2510;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CE2510:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ori r4,r4,276
	ctx.r4.u64 = ctx.r4.u64 | 276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82CE2524;
	sub_82D042A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82CE2540"))) PPC_WEAK_FUNC(sub_82CE2540);
PPC_FUNC_IMPL(__imp__sub_82CE2540) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE2568"))) PPC_WEAK_FUNC(sub_82CE2568);
PPC_FUNC_IMPL(__imp__sub_82CE2568) {
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CE2588;
	sub_8259CB28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82CE25A4"))) PPC_WEAK_FUNC(sub_82CE25A4);
PPC_FUNC_IMPL(__imp__sub_82CE25A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE25A8"))) PPC_WEAK_FUNC(sub_82CE25A8);
PPC_FUNC_IMPL(__imp__sub_82CE25A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// b 0x82c12e40
	sub_82C12E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE25B4"))) PPC_WEAK_FUNC(sub_82CE25B4);
PPC_FUNC_IMPL(__imp__sub_82CE25B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE25B8"))) PPC_WEAK_FUNC(sub_82CE25B8);
PPC_FUNC_IMPL(__imp__sub_82CE25B8) {
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
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,211
	ctx.r5.u64 = ctx.r5.u64 | 211;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE25E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CE25F8;
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

__attribute__((alias("__imp__sub_82CE260C"))) PPC_WEAK_FUNC(sub_82CE260C);
PPC_FUNC_IMPL(__imp__sub_82CE260C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE2610"))) PPC_WEAK_FUNC(sub_82CE2610);
PPC_FUNC_IMPL(__imp__sub_82CE2610) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82dcbe70
	ctx.lr = 0x82CE2630;
	sub_82DCBE70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,111
	cr6.compare<int32_t>(ctx.r31.s32, 111, xer);
	// blt cr6,0x82ce268c
	if (cr6.lt) goto loc_82CE268C;
	// cmpwi cr6,r31,112
	cr6.compare<int32_t>(ctx.r31.s32, 112, xer);
	// ble cr6,0x82ce2674
	if (!cr6.gt) goto loc_82CE2674;
	// cmpwi cr6,r31,113
	cr6.compare<int32_t>(ctx.r31.s32, 113, xer);
	// bne cr6,0x82ce268c
	if (!cr6.eq) goto loc_82CE268C;
	// bl 0x82dcb700
	ctx.lr = 0x82CE2650;
	sub_82DCB700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce2664
	if (cr6.eq) goto loc_82CE2664;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ce2690
	goto loc_82CE2690;
loc_82CE2664:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82ce2690
	goto loc_82CE2690;
loc_82CE2674:
	// bl 0x82dcb700
	ctx.lr = 0x82CE2678;
	sub_82DCB700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 & ctx.r30.u64;
	// b 0x82ce2690
	goto loc_82CE2690;
loc_82CE268C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CE2690:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE26A8"))) PPC_WEAK_FUNC(sub_82CE26A8);
PPC_FUNC_IMPL(__imp__sub_82CE26A8) {
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
	// bl 0x82dcb770
	ctx.lr = 0x82CE26C4;
	sub_82DCB770(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce26f4
	if (cr6.eq) goto loc_82CE26F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82dcc030
	ctx.lr = 0x82CE26DC;
	sub_82DCC030(ctx, base);
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CE26F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CE26F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE270C"))) PPC_WEAK_FUNC(sub_82CE270C);
PPC_FUNC_IMPL(__imp__sub_82CE270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE2710"))) PPC_WEAK_FUNC(sub_82CE2710);
PPC_FUNC_IMPL(__imp__sub_82CE2710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE2718;
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
	ctx.lr = 0x82CE273C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2778
	if (cr6.eq) goto loc_82CE2778;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ce17d8
	ctx.lr = 0x82CE2754;
	sub_82CE17D8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,9136
	ctx.r9.s64 = ctx.r11.s64 + 9136;
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
loc_82CE2778:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE2784"))) PPC_WEAK_FUNC(sub_82CE2784);
PPC_FUNC_IMPL(__imp__sub_82CE2784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE2788"))) PPC_WEAK_FUNC(sub_82CE2788);
PPC_FUNC_IMPL(__imp__sub_82CE2788) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,30192
	ctx.r9.s64 = ctx.r11.s64 + 30192;
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
	// bl 0x82c28840
	ctx.lr = 0x82CE27C0;
	sub_82C28840(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ce27d8
	if (cr6.eq) goto loc_82CE27D8;
	// bl 0x82416268
	ctx.lr = 0x82CE27D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CE27D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE27F0"))) PPC_WEAK_FUNC(sub_82CE27F0);
PPC_FUNC_IMPL(__imp__sub_82CE27F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE27F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,14704
	ctx.r31.s64 = ctx.r11.s64 + 14704;
	// lwz r11,15180(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15180);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ce29a0
	if (!cr6.eq) goto loc_82CE29A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,15180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15180, ctx.r11.u32);
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r30,r10,8932
	ctx.r30.s64 = ctx.r10.s64 + 8932;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// bl 0x837b0c10
	ctx.lr = 0x82CE284C;
	sub_837B0C10(ctx, base);
	// addi r4,r30,-234
	ctx.r4.s64 = ctx.r30.s64 + -234;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x837b0c10
	ctx.lr = 0x82CE2858;
	sub_837B0C10(ctx, base);
	// lis r10,508
	ctx.r10.s64 = 33292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,46
	ctx.r10.u64 = ctx.r10.u64 | 46;
	// li r9,109
	ctx.r9.s64 = 109;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CE2880;
	sub_837B0C10(ctx, base);
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x837b0c10
	ctx.lr = 0x82CE288C;
	sub_837B0C10(ctx, base);
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,213
	ctx.r10.u64 = ctx.r10.u64 | 213;
	// li r9,110
	ctx.r9.s64 = 110;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// lwz r4,13004(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13004);
	// bl 0x837b0c10
	ctx.lr = 0x82CE28B8;
	sub_837B0C10(ctx, base);
	// addi r4,r30,84
	ctx.r4.s64 = ctx.r30.s64 + 84;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82CE28C4;
	sub_837B0C10(ctx, base);
	// lis r10,505
	ctx.r10.s64 = 33095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// li r9,111
	ctx.r9.s64 = 111;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x837b0c10
	ctx.lr = 0x82CE28EC;
	sub_837B0C10(ctx, base);
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x837b0c10
	ctx.lr = 0x82CE28F8;
	sub_837B0C10(ctx, base);
	// lis r10,516
	ctx.r10.s64 = 33816576;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,83
	ctx.r10.u64 = ctx.r10.u64 | 83;
	// li r9,112
	ctx.r9.s64 = 112;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x837b0c10
	ctx.lr = 0x82CE2920;
	sub_837B0C10(ctx, base);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// bl 0x837b0c10
	ctx.lr = 0x82CE292C;
	sub_837B0C10(ctx, base);
	// lis r10,505
	ctx.r10.s64 = 33095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,51
	ctx.r10.u64 = ctx.r10.u64 | 51;
	// li r9,113
	ctx.r9.s64 = 113;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82CE2954;
	sub_837B0C10(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// bl 0x837b0c10
	ctx.lr = 0x82CE2960;
	sub_837B0C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,505
	ctx.r10.s64 = 33095680;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// li r11,114
	ctx.r11.s64 = 114;
	// ori r10,r10,133
	ctx.r10.u64 = ctx.r10.u64 | 133;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// stw r10,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r10.u32);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// bl 0x837b0c10
	ctx.lr = 0x82CE2988;
	sub_837B0C10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x837b0c10
	ctx.lr = 0x82CE2994;
	sub_837B0C10(ctx, base);
	// lis r7,-31790
	ctx.r7.s64 = -2083389440;
	// addi r3,r7,1088
	ctx.r3.s64 = ctx.r7.s64 + 1088;
	// bl 0x831cdcc8
	ctx.lr = 0x82CE29A0;
	sub_831CDCC8(ctx, base);
loc_82CE29A0:
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE29B4"))) PPC_WEAK_FUNC(sub_82CE29B4);
PPC_FUNC_IMPL(__imp__sub_82CE29B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE29B8"))) PPC_WEAK_FUNC(sub_82CE29B8);
PPC_FUNC_IMPL(__imp__sub_82CE29B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f2,216(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE29C4"))) PPC_WEAK_FUNC(sub_82CE29C4);
PPC_FUNC_IMPL(__imp__sub_82CE29C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE29C8"))) PPC_WEAK_FUNC(sub_82CE29C8);
PPC_FUNC_IMPL(__imp__sub_82CE29C8) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82CE29D8;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2a10
	if (cr6.eq) goto loc_82CE2A10;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,9824
	ctx.r4.s64 = ctx.r10.s64 + 9824;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE29FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2a10
	if (cr6.eq) goto loc_82CE2A10;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE2A10;
	sub_82D2AEC8(ctx, base);
loc_82CE2A10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE2A20"))) PPC_WEAK_FUNC(sub_82CE2A20);
PPC_FUNC_IMPL(__imp__sub_82CE2A20) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE2A3C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2a84
	if (cr6.eq) goto loc_82CE2A84;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,9840
	ctx.r4.s64 = ctx.r10.s64 + 9840;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE2A60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2a84
	if (cr6.eq) goto loc_82CE2A84;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE2A78;
	sub_82D2AEC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82CE2A84;
	sub_82D29598(ctx, base);
loc_82CE2A84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE2A9C"))) PPC_WEAK_FUNC(sub_82CE2A9C);
PPC_FUNC_IMPL(__imp__sub_82CE2A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE2AA0"))) PPC_WEAK_FUNC(sub_82CE2AA0);
PPC_FUNC_IMPL(__imp__sub_82CE2AA0) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82CE2AB0;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2ae8
	if (cr6.eq) goto loc_82CE2AE8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,9852
	ctx.r4.s64 = ctx.r10.s64 + 9852;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE2AD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2ae8
	if (cr6.eq) goto loc_82CE2AE8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE2AE8;
	sub_82D2AEC8(ctx, base);
loc_82CE2AE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE2AF8"))) PPC_WEAK_FUNC(sub_82CE2AF8);
PPC_FUNC_IMPL(__imp__sub_82CE2AF8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ce2e40
	ctx.lr = 0x82CE2B14;
	sub_82CE2E40(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,10664(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10664);
	// bl 0x82ce33a8
	ctx.lr = 0x82CE2B24;
	sub_82CE33A8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82ce3480
	ctx.lr = 0x82CE2B38;
	sub_82CE3480(ctx, base);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,10680(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10680);
	// bl 0x82ce2a20
	ctx.lr = 0x82CE2B48;
	sub_82CE2A20(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r30,-32238
	ctx.r30.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,296(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 296);
	// lwz r4,10692(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10692);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CE2B64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,10692(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10692);
	// lwz r5,300(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 300);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82CE2B7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,10692(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10692);
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE2B94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82CE2BA4;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82CE2BB4;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dd3a30
	ctx.lr = 0x82CE2BBC;
	sub_82DD3A30(ctx, base);
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

__attribute__((alias("__imp__sub_82CE2BD8"))) PPC_WEAK_FUNC(sub_82CE2BD8);
PPC_FUNC_IMPL(__imp__sub_82CE2BD8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ce2f50
	ctx.lr = 0x82CE2BF0;
	sub_82CE2F50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce2c0c
	if (cr6.eq) goto loc_82CE2C0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3920
	ctx.lr = 0x82CE2C08;
	sub_82CE3920(ctx, base);
	// b 0x82ce2cac
	goto loc_82CE2CAC;
loc_82CE2C0C:
	// lbz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce2cac
	if (!cr6.eq) goto loc_82CE2CAC;
	// lfs f0,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82ce2c8c
	if (cr6.lt) goto loc_82CE2C8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stb r11,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,10668(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10668);
	// bl 0x82ce33a8
	ctx.lr = 0x82CE2C40;
	sub_82CE33A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2aa0
	ctx.lr = 0x82CE2C48;
	sub_82CE2AA0(ctx, base);
	// lbz r9,221(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 221);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82ce2c88
	if (cr6.eq) goto loc_82CE2C88;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82CE2C64;
	sub_82D19788(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r5,10644(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10644);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE2C84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ce2c8c
	goto loc_82CE2C8C;
loc_82CE2C88:
	// bl 0x82ce3920
	ctx.lr = 0x82CE2C8C;
	sub_82CE3920(ctx, base);
loc_82CE2C8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ce3480
	ctx.lr = 0x82CE2C9C;
	sub_82CE3480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ce2eb8
	ctx.lr = 0x82CE2CAC;
	sub_82CE2EB8(ctx, base);
loc_82CE2CAC:
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

__attribute__((alias("__imp__sub_82CE2CC4"))) PPC_WEAK_FUNC(sub_82CE2CC4);
PPC_FUNC_IMPL(__imp__sub_82CE2CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE2CC8"))) PPC_WEAK_FUNC(sub_82CE2CC8);
PPC_FUNC_IMPL(__imp__sub_82CE2CC8) {
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
	// addi r9,r11,9992
	ctx.r9.s64 = ctx.r11.s64 + 9992;
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
	// bl 0x82ce3280
	ctx.lr = 0x82CE2D00;
	sub_82CE3280(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ce2d18
	if (cr6.eq) goto loc_82CE2D18;
	// bl 0x82416268
	ctx.lr = 0x82CE2D14;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CE2D18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE2D30"))) PPC_WEAK_FUNC(sub_82CE2D30);
PPC_FUNC_IMPL(__imp__sub_82CE2D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE2D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82ce3a08
	ctx.lr = 0x82CE2D54;
	sub_82CE3A08(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,9992
	ctx.r8.s64 = ctx.r10.s64 + 9992;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stb r11,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r11.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// stb r11,221(r31)
	PPC_STORE_U8(ctx.r31.u32 + 221, ctx.r11.u8);
	// addi r4,r6,9864
	ctx.r4.s64 = ctx.r6.s64 + 9864;
	// li r5,38
	ctx.r5.s64 = 38;
	// bl 0x8259cc28
	ctx.lr = 0x82CE2D8C;
	sub_8259CC28(ctx, base);
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13552(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13552);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE2D9C;
	sub_82D20AE0(ctx, base);
	// lis r4,-31776
	ctx.r4.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13556(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 13556);
	// bl 0x82d23390
	ctx.lr = 0x82CE2DB0;
	sub_82D23390(ctx, base);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82ce2dc4
	if (!cr6.eq) goto loc_82CE2DC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,221(r31)
	PPC_STORE_U8(ctx.r31.u32 + 221, ctx.r11.u8);
loc_82CE2DC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE2DCC"))) PPC_WEAK_FUNC(sub_82CE2DCC);
PPC_FUNC_IMPL(__imp__sub_82CE2DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE2DD0"))) PPC_WEAK_FUNC(sub_82CE2DD0);
PPC_FUNC_IMPL(__imp__sub_82CE2DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CE2DD8;
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
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x82CE2E08;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2e30
	if (cr6.eq) goto loc_82CE2E30;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ce2d30
	ctx.lr = 0x82CE2E28;
	sub_82CE2D30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CE2E30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE2E3C"))) PPC_WEAK_FUNC(sub_82CE2E3C);
PPC_FUNC_IMPL(__imp__sub_82CE2E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE2E40"))) PPC_WEAK_FUNC(sub_82CE2E40);
PPC_FUNC_IMPL(__imp__sub_82CE2E40) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82CE2E54;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2ea0
	if (cr6.eq) goto loc_82CE2EA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82CE2E6C;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2ea0
	if (cr6.eq) goto loc_82CE2EA0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x82d3d3b0
	ctx.lr = 0x82CE2E88;
	sub_82D3D3B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3d4b8
	ctx.lr = 0x82CE2E94;
	sub_82D3D4B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3d548
	ctx.lr = 0x82CE2EA0;
	sub_82D3D548(ctx, base);
loc_82CE2EA0:
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

__attribute__((alias("__imp__sub_82CE2EB4"))) PPC_WEAK_FUNC(sub_82CE2EB4);
PPC_FUNC_IMPL(__imp__sub_82CE2EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE2EB8"))) PPC_WEAK_FUNC(sub_82CE2EB8);
PPC_FUNC_IMPL(__imp__sub_82CE2EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE2ED8;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2f30
	if (cr6.eq) goto loc_82CE2F30;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82CE2EF0;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2f30
	if (cr6.eq) goto loc_82CE2F30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x82ce2f28
	if (cr6.eq) goto loc_82CE2F28;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-23580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fdivs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82CE2F28:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d3d190
	ctx.lr = 0x82CE2F30;
	sub_82D3D190(ctx, base);
loc_82CE2F30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE2F48"))) PPC_WEAK_FUNC(sub_82CE2F48);
PPC_FUNC_IMPL(__imp__sub_82CE2F48) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,169(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 169);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE2F50"))) PPC_WEAK_FUNC(sub_82CE2F50);
PPC_FUNC_IMPL(__imp__sub_82CE2F50) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,170(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 170);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE2F58"))) PPC_WEAK_FUNC(sub_82CE2F58);
PPC_FUNC_IMPL(__imp__sub_82CE2F58) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce2fd0
	if (!cr6.eq) goto loc_82CE2FD0;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r11,r3,108
	ctx.r11.s64 = ctx.r3.s64 + 108;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ce2f8c
	if (cr6.lt) goto loc_82CE2F8C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CE2F8C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d2f6d8
	ctx.lr = 0x82CE2FA4;
	sub_82D2F6D8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce2fd0
	if (cr6.eq) goto loc_82CE2FD0;
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// ori r4,r4,275
	ctx.r4.u64 = ctx.r4.u64 | 275;
	// bl 0x82d2ada8
	ctx.lr = 0x82CE2FBC;
	sub_82D2ADA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83103100
	ctx.lr = 0x82CE2FC8;
	sub_83103100(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
loc_82CE2FD0:
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

__attribute__((alias("__imp__sub_82CE2FE4"))) PPC_WEAK_FUNC(sub_82CE2FE4);
PPC_FUNC_IMPL(__imp__sub_82CE2FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE2FE8"))) PPC_WEAK_FUNC(sub_82CE2FE8);
PPC_FUNC_IMPL(__imp__sub_82CE2FE8) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce3054
	if (!cr6.eq) goto loc_82CE3054;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r11,r3,108
	ctx.r11.s64 = ctx.r3.s64 + 108;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ce301c
	if (cr6.lt) goto loc_82CE301C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CE301C:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d2fa90
	ctx.lr = 0x82CE3030;
	sub_82D2FA90(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce3054
	if (cr6.eq) goto loc_82CE3054;
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// ori r4,r4,99
	ctx.r4.u64 = ctx.r4.u64 | 99;
	// bl 0x82d2ada8
	ctx.lr = 0x82CE3048;
	sub_82D2ADA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x83103100
	ctx.lr = 0x82CE3054;
	sub_83103100(ctx, base);
loc_82CE3054:
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

__attribute__((alias("__imp__sub_82CE3068"))) PPC_WEAK_FUNC(sub_82CE3068);
PPC_FUNC_IMPL(__imp__sub_82CE3068) {
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
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,108
	ctx.r11.s64 = ctx.r3.s64 + 108;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ce3090
	if (cr6.lt) goto loc_82CE3090;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CE3090:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d2fa90
	ctx.lr = 0x82CE30A4;
	sub_82D2FA90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// beq cr6,0x82ce30d4
	if (cr6.eq) goto loc_82CE30D4;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82ce30c0
	if (cr6.lt) goto loc_82CE30C0;
	// bne cr6,0x82ce30c8
	if (!cr6.eq) goto loc_82CE30C8;
loc_82CE30C0:
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82d2ada8
	ctx.lr = 0x82CE30C8;
	sub_82D2ADA8(ctx, base);
loc_82CE30C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x83103100
	ctx.lr = 0x82CE30D4;
	sub_83103100(ctx, base);
loc_82CE30D4:
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

__attribute__((alias("__imp__sub_82CE30E8"))) PPC_WEAK_FUNC(sub_82CE30E8);
PPC_FUNC_IMPL(__imp__sub_82CE30E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ce2f58
	sub_82CE2F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE30EC"))) PPC_WEAK_FUNC(sub_82CE30EC);
PPC_FUNC_IMPL(__imp__sub_82CE30EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE30F0"))) PPC_WEAK_FUNC(sub_82CE30F0);
PPC_FUNC_IMPL(__imp__sub_82CE30F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// stw r4,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r4.u32);
	// stw r5,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce3110
	if (cr6.eq) goto loc_82CE3110;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,171(r3)
	PPC_STORE_U8(ctx.r3.u32 + 171, ctx.r11.u8);
	// blr 
	return;
loc_82CE3110:
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,247
	ctx.r11.s64 = 16187392;
	// ori r10,r11,90
	ctx.r10.u64 = ctx.r11.u64 | 90;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ce313c
	if (!cr6.eq) goto loc_82CE313C;
	// b 0x82ce3068
	sub_82CE3068(ctx, base);
	return;
loc_82CE313C:
	// b 0x82ce3068
	sub_82CE3068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3140"))) PPC_WEAK_FUNC(sub_82CE3140);
PPC_FUNC_IMPL(__imp__sub_82CE3140) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce3204
	if (cr6.eq) goto loc_82CE3204;
	// lbz r10,171(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 171);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82ce31b4
	if (cr6.eq) goto loc_82CE31B4;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ce326c
	if (!cr6.eq) goto loc_82CE326C;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ce326c
	if (!cr6.eq) goto loc_82CE326C;
	// lis r10,247
	ctx.r10.s64 = 16187392;
	// ori r9,r10,90
	ctx.r9.u64 = ctx.r10.u64 | 90;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bl 0x82ce3068
	ctx.lr = 0x82CE31A0;
	sub_82CE3068(ctx, base);
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
loc_82CE31B4:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ce3268
	if (!cr6.eq) goto loc_82CE3268;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// addi r8,r10,21716
	ctx.r8.s64 = ctx.r10.s64 + 21716;
	// ori r7,r9,20481
	ctx.r7.u64 = ctx.r9.u64 | 20481;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82CE31E8;
	sub_83103068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2fe8
	ctx.lr = 0x82CE31F0;
	sub_82CE2FE8(ctx, base);
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
loc_82CE3204:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce3234
	if (cr6.eq) goto loc_82CE3234;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stb r10,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r10.u8);
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
loc_82CE3234:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce3264
	if (cr6.eq) goto loc_82CE3264;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stb r10,170(r31)
	PPC_STORE_U8(ctx.r31.u32 + 170, ctx.r10.u8);
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
loc_82CE3264:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CE3268:
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
loc_82CE326C:
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

__attribute__((alias("__imp__sub_82CE3280"))) PPC_WEAK_FUNC(sub_82CE3280);
PPC_FUNC_IMPL(__imp__sub_82CE3280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CE3288;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r10,10936
	ctx.r8.s64 = ctx.r10.s64 + 10936;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce32bc
	if (cr6.eq) goto loc_82CE32BC;
	// stb r28,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r28.u8);
loc_82CE32BC:
	// lwz r11,200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// addi r30,r29,180
	ctx.r30.s64 = ctx.r29.s64 + 180;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce32e0
	if (cr6.lt) goto loc_82CE32E0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CE32E0;
	sub_825952B8(ctx, base);
loc_82CE32E0:
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,140
	ctx.r31.s64 = ctx.r29.s64 + 140;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce3310
	if (cr6.lt) goto loc_82CE3310;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CE3310;
	sub_825952B8(ctx, base);
loc_82CE3310:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r30,r29,108
	ctx.r30.s64 = ctx.r29.s64 + 108;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce333c
	if (cr6.lt) goto loc_82CE333C;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CE333C;
	sub_825952B8(ctx, base);
loc_82CE333C:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// bl 0x82d25548
	ctx.lr = 0x82CE3350;
	sub_82D25548(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3358"))) PPC_WEAK_FUNC(sub_82CE3358);
PPC_FUNC_IMPL(__imp__sub_82CE3358) {
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
	// bl 0x82ce3280
	ctx.lr = 0x82CE3378;
	sub_82CE3280(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce3390
	if (cr6.eq) goto loc_82CE3390;
	// bl 0x82416268
	ctx.lr = 0x82CE338C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CE3390:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE33A8"))) PPC_WEAK_FUNC(sub_82CE33A8);
PPC_FUNC_IMPL(__imp__sub_82CE33A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CE33B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE33C0;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce3478
	if (cr6.eq) goto loc_82CE3478;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r31,r11,10716
	ctx.r31.s64 = ctx.r11.s64 + 10716;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE33E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce3478
	if (cr6.eq) goto loc_82CE3478;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d04220
	ctx.lr = 0x82CE3414;
	sub_82D04220(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1eb8
	ctx.lr = 0x82CE3424;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,140
	ctx.r4.s64 = ctx.r29.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x82CE3438;
	sub_825A1DA8(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ce344c
	if (!cr6.lt) goto loc_82CE344C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CE344C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82CE3454;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CE3468;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE3470;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE3478;
	sub_8387E8E0(ctx, base);
loc_82CE3478:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3480"))) PPC_WEAK_FUNC(sub_82CE3480);
PPC_FUNC_IMPL(__imp__sub_82CE3480) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE34A4;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce3560
	if (cr6.eq) goto loc_82CE3560;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,10720
	ctx.r4.s64 = ctx.r10.s64 + 10720;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE34C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce3560
	if (cr6.eq) goto loc_82CE3560;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f31,f1
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// beq cr6,0x82ce34f4
	if (cr6.eq) goto loc_82CE34F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-23488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fdivs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
loc_82CE34F4:
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r4,r4,105
	ctx.r4.u64 = ctx.r4.u64 | 105;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d042a8
	ctx.lr = 0x82CE3520;
	sub_82D042A8(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ce3534
	if (!cr6.lt) goto loc_82CE3534;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CE3534:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82CE353C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CE3550;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE3558;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE3560;
	sub_8387E8E0(ctx, base);
loc_82CE3560:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82CE357C"))) PPC_WEAK_FUNC(sub_82CE357C);
PPC_FUNC_IMPL(__imp__sub_82CE357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3580"))) PPC_WEAK_FUNC(sub_82CE3580);
PPC_FUNC_IMPL(__imp__sub_82CE3580) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE359C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce364c
	if (cr6.eq) goto loc_82CE364C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,10728
	ctx.r4.s64 = ctx.r10.s64 + 10728;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE35C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce364c
	if (cr6.eq) goto loc_82CE364C;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// bne cr6,0x82ce35e4
	if (!cr6.eq) goto loc_82CE35E4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE35E0;
	sub_82D2AEC8(ctx, base);
	// b 0x82ce364c
	goto loc_82CE364C;
loc_82CE35E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// ori r4,r4,105
	ctx.r4.u64 = ctx.r4.u64 | 105;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82CE360C;
	sub_82D042A8(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ce3620
	if (!cr6.lt) goto loc_82CE3620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CE3620:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82CE3628;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CE363C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE3644;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE364C;
	sub_8387E8E0(ctx, base);
loc_82CE364C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE3664"))) PPC_WEAK_FUNC(sub_82CE3664);
PPC_FUNC_IMPL(__imp__sub_82CE3664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3668"))) PPC_WEAK_FUNC(sub_82CE3668);
PPC_FUNC_IMPL(__imp__sub_82CE3668) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE3684;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce3734
	if (cr6.eq) goto loc_82CE3734;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,10744
	ctx.r4.s64 = ctx.r10.s64 + 10744;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE36A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce3734
	if (cr6.eq) goto loc_82CE3734;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// bne cr6,0x82ce36cc
	if (!cr6.eq) goto loc_82CE36CC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE36C8;
	sub_82D2AEC8(ctx, base);
	// b 0x82ce3734
	goto loc_82CE3734;
loc_82CE36CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// ori r4,r4,107
	ctx.r4.u64 = ctx.r4.u64 | 107;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82CE36F4;
	sub_82D042A8(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ce3708
	if (!cr6.lt) goto loc_82CE3708;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CE3708:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82CE3710;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CE3724;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE372C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE3734;
	sub_8387E8E0(ctx, base);
loc_82CE3734:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE374C"))) PPC_WEAK_FUNC(sub_82CE374C);
PPC_FUNC_IMPL(__imp__sub_82CE374C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3750"))) PPC_WEAK_FUNC(sub_82CE3750);
PPC_FUNC_IMPL(__imp__sub_82CE3750) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE376C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce381c
	if (cr6.eq) goto loc_82CE381C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,10760
	ctx.r4.s64 = ctx.r10.s64 + 10760;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE3790;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce381c
	if (cr6.eq) goto loc_82CE381C;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// bne cr6,0x82ce37b4
	if (!cr6.eq) goto loc_82CE37B4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE37B0;
	sub_82D2AEC8(ctx, base);
	// b 0x82ce381c
	goto loc_82CE381C;
loc_82CE37B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// ori r4,r4,106
	ctx.r4.u64 = ctx.r4.u64 | 106;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82CE37DC;
	sub_82D042A8(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ce37f0
	if (!cr6.lt) goto loc_82CE37F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CE37F0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82CE37F8;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CE380C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE3814;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE381C;
	sub_8387E8E0(ctx, base);
loc_82CE381C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE3834"))) PPC_WEAK_FUNC(sub_82CE3834);
PPC_FUNC_IMPL(__imp__sub_82CE3834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3838"))) PPC_WEAK_FUNC(sub_82CE3838);
PPC_FUNC_IMPL(__imp__sub_82CE3838) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE3854;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce3904
	if (cr6.eq) goto loc_82CE3904;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,10772
	ctx.r4.s64 = ctx.r10.s64 + 10772;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE3878;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce3904
	if (cr6.eq) goto loc_82CE3904;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// bne cr6,0x82ce389c
	if (!cr6.eq) goto loc_82CE389C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE3898;
	sub_82D2AEC8(ctx, base);
	// b 0x82ce3904
	goto loc_82CE3904;
loc_82CE389C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// ori r4,r4,107
	ctx.r4.u64 = ctx.r4.u64 | 107;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82CE38C4;
	sub_82D042A8(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ce38d8
	if (!cr6.lt) goto loc_82CE38D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CE38D8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82CE38E0;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CE38F4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE38FC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE3904;
	sub_8387E8E0(ctx, base);
loc_82CE3904:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE391C"))) PPC_WEAK_FUNC(sub_82CE391C);
PPC_FUNC_IMPL(__imp__sub_82CE391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3920"))) PPC_WEAK_FUNC(sub_82CE3920);
PPC_FUNC_IMPL(__imp__sub_82CE3920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CE3928;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// addi r31,r11,10832
	ctx.r31.s64 = ctx.r11.s64 + 10832;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,264
	ctx.r29.s64 = 17301504;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// ori r29,r29,20481
	ctx.r29.u64 = ctx.r29.u64 | 20481;
	// bl 0x8259cc28
	ctx.lr = 0x82CE3968;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82ce3994
	if (cr6.lt) goto loc_82CE3994;
	// beq cr6,0x82ce3984
	if (cr6.eq) goto loc_82CE3984;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bge cr6,0x82ce39a8
	if (!cr6.lt) goto loc_82CE39A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x82ce3998
	goto loc_82CE3998;
loc_82CE3984:
	// lis r29,264
	ctx.r29.s64 = 17301504;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// ori r29,r29,20482
	ctx.r29.u64 = ctx.r29.u64 | 20482;
	// b 0x82ce39a0
	goto loc_82CE39A0;
loc_82CE3994:
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
loc_82CE3998:
	// lis r29,264
	ctx.r29.s64 = 17301504;
	// ori r29,r29,20480
	ctx.r29.u64 = ctx.r29.u64 | 20480;
loc_82CE39A0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259d6c0
	ctx.lr = 0x82CE39A8;
	sub_8259D6C0(ctx, base);
loc_82CE39A8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,21716
	ctx.r31.s64 = ctx.r11.s64 + 21716;
	// stb r27,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r27.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x83103068
	ctx.lr = 0x82CE39CC;
	sub_83103068(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CE39DC;
	sub_82D20DA8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ce3a00
	if (cr6.lt) goto loc_82CE3A00;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CE3A00;
	sub_825952B8(ctx, base);
loc_82CE3A00:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3A08"))) PPC_WEAK_FUNC(sub_82CE3A08);
PPC_FUNC_IMPL(__imp__sub_82CE3A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CE3A10;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce3a44
	if (cr6.lt) goto loc_82CE3A44;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82ce3a48
	goto loc_82CE3A48;
loc_82CE3A44:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82CE3A48:
	// bl 0x8308e078
	ctx.lr = 0x82CE3A4C;
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
	ctx.lr = 0x82CE3A64;
	sub_82D253F8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,10936
	ctx.r9.s64 = ctx.r11.s64 + 10936;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82CE3AB0;
	sub_8259CB28(ctx, base);
	// lis r7,206
	ctx.r7.s64 = 13500416;
	// stw r24,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r24.u32);
	// lis r4,-32238
	ctx.r4.s64 = -2112749568;
	// ori r6,r7,94
	ctx.r6.u64 = ctx.r7.u64 | 94;
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// stb r30,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r30.u8);
	// addi r4,r4,10354
	ctx.r4.s64 = ctx.r4.s64 + 10354;
	// stb r30,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r30.u8);
	// addi r28,r31,140
	ctx.r28.s64 = ctx.r31.s64 + 140;
	// stb r30,170(r31)
	PPC_STORE_U8(ctx.r31.u32 + 170, ctx.r30.u8);
	// stb r30,171(r31)
	PPC_STORE_U8(ctx.r31.u32 + 171, ctx.r30.u8);
	// stw r6,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r6.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stb r30,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CE3B04;
	sub_8259CC28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// bl 0x82d191f8
	ctx.lr = 0x82CE3B20;
	sub_82D191F8(ctx, base);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x82d042a8
	ctx.lr = 0x82CE3B48;
	sub_82D042A8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CE3B58;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ce3b6c
	if (!cr6.lt) goto loc_82CE3B6C;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82CE3B6C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce3b80
	if (!cr6.lt) goto loc_82CE3B80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82CE3B80:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,276
	ctx.r4.u64 = ctx.r4.u64 | 276;
	// bl 0x82d042a8
	ctx.lr = 0x82CE3B90;
	sub_82D042A8(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82ce3ba0
	if (cr6.eq) goto loc_82CE3BA0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,96(r27)
	PPC_STORE_U8(ctx.r27.u32 + 96, ctx.r11.u8);
loc_82CE3BA0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce3bc0
	if (cr6.lt) goto loc_82CE3BC0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CE3BC0;
	sub_825952B8(ctx, base);
loc_82CE3BC0:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// blt cr6,0x82ce3be8
	if (cr6.lt) goto loc_82CE3BE8;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CE3BE8;
	sub_825952B8(ctx, base);
loc_82CE3BE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3BF4"))) PPC_WEAK_FUNC(sub_82CE3BF4);
PPC_FUNC_IMPL(__imp__sub_82CE3BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3BF8"))) PPC_WEAK_FUNC(sub_82CE3BF8);
PPC_FUNC_IMPL(__imp__sub_82CE3BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE3C00;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// addi r31,r10,10792
	ctx.r31.s64 = ctx.r10.s64 + 10792;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x8259cc28
	ctx.lr = 0x82CE3C34;
	sub_8259CC28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259d6c0
	ctx.lr = 0x82CE3C40;
	sub_8259D6C0(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r31,r9,21716
	ctx.r31.s64 = ctx.r9.s64 + 21716;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// ori r7,r8,20480
	ctx.r7.u64 = ctx.r8.u64 | 20480;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83103068
	ctx.lr = 0x82CE3C6C;
	sub_83103068(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CE3C7C;
	sub_82D20DA8(ctx, base);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82ce3ca0
	if (cr6.lt) goto loc_82CE3CA0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CE3CA0;
	sub_825952B8(ctx, base);
loc_82CE3CA0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3CA8"))) PPC_WEAK_FUNC(sub_82CE3CA8);
PPC_FUNC_IMPL(__imp__sub_82CE3CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x82ce2e40
	ctx.lr = 0x82CE3CC0;
	sub_82CE2E40(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,10620(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10620);
	// bl 0x82ce33a8
	ctx.lr = 0x82CE3CD0;
	sub_82CE33A8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82ce3480
	ctx.lr = 0x82CE3CE4;
	sub_82CE3480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82CE3CF4;
	sub_82D19788(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// lwz r5,10644(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10644);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CE3D14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82CE3D24;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r5,10648(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10648);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE3D44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dd3a30
	ctx.lr = 0x82CE3D4C;
	sub_82DD3A30(ctx, base);
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

__attribute__((alias("__imp__sub_82CE3D64"))) PPC_WEAK_FUNC(sub_82CE3D64);
PPC_FUNC_IMPL(__imp__sub_82CE3D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3D68"))) PPC_WEAK_FUNC(sub_82CE3D68);
PPC_FUNC_IMPL(__imp__sub_82CE3D68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ce2f48
	ctx.lr = 0x82CE3D80;
	sub_82CE2F48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce3d9c
	if (cr6.eq) goto loc_82CE3D9C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82ce3920
	ctx.lr = 0x82CE3D98;
	sub_82CE3920(ctx, base);
	// b 0x82ce3e40
	goto loc_82CE3E40;
loc_82CE3D9C:
	// bl 0x82ce2f50
	ctx.lr = 0x82CE3DA0;
	sub_82CE2F50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce3dbc
	if (cr6.eq) goto loc_82CE3DBC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3920
	ctx.lr = 0x82CE3DB8;
	sub_82CE3920(ctx, base);
	// b 0x82ce3e40
	goto loc_82CE3E40;
loc_82CE3DBC:
	// lbz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce3e40
	if (!cr6.eq) goto loc_82CE3E40;
	// lfs f0,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82ce3e20
	if (cr6.lt) goto loc_82CE3E20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cdb490
	ctx.lr = 0x82CE3DE0;
	sub_82CDB490(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce3e20
	if (!cr6.eq) goto loc_82CE3E20;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stb r11,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,10624(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10624);
	// bl 0x82ce33a8
	ctx.lr = 0x82CE3E04;
	sub_82CE33A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CE3E14;
	sub_82D19788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3920
	ctx.lr = 0x82CE3E20;
	sub_82CE3920(ctx, base);
loc_82CE3E20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ce3480
	ctx.lr = 0x82CE3E30;
	sub_82CE3480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ce2eb8
	ctx.lr = 0x82CE3E40;
	sub_82CE2EB8(ctx, base);
loc_82CE3E40:
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

__attribute__((alias("__imp__sub_82CE3E58"))) PPC_WEAK_FUNC(sub_82CE3E58);
PPC_FUNC_IMPL(__imp__sub_82CE3E58) {
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
	// addi r9,r11,11720
	ctx.r9.s64 = ctx.r11.s64 + 11720;
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
	// bl 0x82ce3280
	ctx.lr = 0x82CE3E90;
	sub_82CE3280(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ce3ea8
	if (cr6.eq) goto loc_82CE3EA8;
	// bl 0x82416268
	ctx.lr = 0x82CE3EA4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CE3EA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE3EC0"))) PPC_WEAK_FUNC(sub_82CE3EC0);
PPC_FUNC_IMPL(__imp__sub_82CE3EC0) {
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
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ce3a08
	ctx.lr = 0x82CE3EE0;
	sub_82CE3A08(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,11720
	ctx.r9.s64 = ctx.r11.s64 + 11720;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// stb r7,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r7.u8);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// addi r4,r6,11592
	ctx.r4.s64 = ctx.r6.s64 + 11592;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x8259cc28
	ctx.lr = 0x82CE3F14;
	sub_8259CC28(ctx, base);
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13816(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13816);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE3F24;
	sub_82D20AE0(ctx, base);
	// lis r4,-31776
	ctx.r4.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,13820(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 13820);
	// bl 0x82d23390
	ctx.lr = 0x82CE3F38;
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

__attribute__((alias("__imp__sub_82CE3F50"))) PPC_WEAK_FUNC(sub_82CE3F50);
PPC_FUNC_IMPL(__imp__sub_82CE3F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CE3F58;
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
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x82CE3F88;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce3fb0
	if (cr6.eq) goto loc_82CE3FB0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ce3ec0
	ctx.lr = 0x82CE3FA8;
	sub_82CE3EC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CE3FB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE3FBC"))) PPC_WEAK_FUNC(sub_82CE3FBC);
PPC_FUNC_IMPL(__imp__sub_82CE3FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE3FC0"))) PPC_WEAK_FUNC(sub_82CE3FC0);
PPC_FUNC_IMPL(__imp__sub_82CE3FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE3FC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// bl 0x8308e078
	ctx.lr = 0x82CE3FE8;
	sub_8308E078(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,13012
	ctx.r4.s64 = ctx.r11.s64 + 13012;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82CE4004;
	sub_82D253F8(ctx, base);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r8,14840
	ctx.r6.s64 = ctx.r8.s64 + 14840;
	// addi r5,r7,-17088
	ctx.r5.s64 = ctx.r7.s64 + -17088;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
loc_82CE4054:
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82ce4054
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CE4054;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// stw r6,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r6.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// bl 0x82d19788
	ctx.lr = 0x82CE409C;
	sub_82D19788(ctx, base);
	// lis r30,-31776
	ctx.r30.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r30,14128
	ctx.r29.s64 = ctx.r30.s64 + 14128;
	// lwz r4,-36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -36);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE40B0;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE40BC;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE40C8;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE40D4;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE40E0;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE40EC;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE40F8;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE4104;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE4110;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,14128(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14128);
	// bl 0x82d23390
	ctx.lr = 0x82CE4120;
	sub_82D23390(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CE4130;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CE4140;
	sub_82D19788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82CE414C;
	sub_82D198D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE4158"))) PPC_WEAK_FUNC(sub_82CE4158);
PPC_FUNC_IMPL(__imp__sub_82CE4158) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82CE4170;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r4,r11,13032
	ctx.r4.s64 = ctx.r11.s64 + 13032;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE418C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce41a4
	if (cr6.eq) goto loc_82CE41A4;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82CE41A4;
	sub_82D3D968(ctx, base);
loc_82CE41A4:
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

__attribute__((alias("__imp__sub_82CE41BC"))) PPC_WEAK_FUNC(sub_82CE41BC);
PPC_FUNC_IMPL(__imp__sub_82CE41BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE41C0"))) PPC_WEAK_FUNC(sub_82CE41C0);
PPC_FUNC_IMPL(__imp__sub_82CE41C0) {
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
	// ori r10,r10,8195
	ctx.r10.u64 = ctx.r10.u64 | 8195;
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
	ctx.lr = 0x82CE41F8;
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

__attribute__((alias("__imp__sub_82CE4208"))) PPC_WEAK_FUNC(sub_82CE4208);
PPC_FUNC_IMPL(__imp__sub_82CE4208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE4210;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x82CE4240;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce4270
	if (cr6.eq) goto loc_82CE4270;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82ce3fc0
	ctx.lr = 0x82CE4268;
	sub_82CE3FC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CE4270:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE427C"))) PPC_WEAK_FUNC(sub_82CE427C);
PPC_FUNC_IMPL(__imp__sub_82CE427C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE4280"))) PPC_WEAK_FUNC(sub_82CE4280);
PPC_FUNC_IMPL(__imp__sub_82CE4280) {
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
	// addi r9,r11,14840
	ctx.r9.s64 = ctx.r11.s64 + 14840;
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
	ctx.lr = 0x82CE42B8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ce42d0
	if (cr6.eq) goto loc_82CE42D0;
	// bl 0x82416268
	ctx.lr = 0x82CE42CC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CE42D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE42E8"))) PPC_WEAK_FUNC(sub_82CE42E8);
PPC_FUNC_IMPL(__imp__sub_82CE42E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82CE42F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE4300;
	sub_82D19A78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE4308;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce4b18
	if (cr6.eq) goto loc_82CE4B18;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,13576
	ctx.r30.s64 = ctx.r11.s64 + 13576;
	// addi r4,r30,-464
	ctx.r4.s64 = ctx.r30.s64 + -464;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE4334;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r30,-448
	ctx.r7.s64 = ctx.r30.s64 + -448;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r6,r30,-432
	ctx.r6.s64 = ctx.r30.s64 + -432;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r14,0
	ctx.r14.s64 = 0;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// add r16,r11,r15
	ctx.r16.u64 = ctx.r11.u64 + ctx.r15.u64;
	// sth r14,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r14.u16);
	// lwz r5,104(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x831156e8
	ctx.lr = 0x82CE4368;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// sth r14,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r14.u16);
	// bne cr6,0x82ce4384
	if (!cr6.eq) goto loc_82CE4384;
	// lwz r11,120(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 120);
	// lwz r26,116(r15)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r15.u32 + 116);
	// b 0x82ce438c
	goto loc_82CE438C;
loc_82CE4384:
	// lwz r11,108(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 108);
	// lwz r26,104(r15)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r15.u32 + 104);
loc_82CE438C:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82CE43A4;
	sub_8311BF98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8311bf98
	ctx.lr = 0x82CE43B4;
	sub_8311BF98(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r18,r31,100
	ctx.r18.s64 = ctx.r31.s64 + 100;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r4,r30,-416
	ctx.r4.s64 = ctx.r30.s64 + -416;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE43D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce4b18
	if (cr6.eq) goto loc_82CE4B18;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE43EC;
	sub_82D2AEC8(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82CE43F0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce4b18
	if (cr6.eq) goto loc_82CE4B18;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CE4400;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CE4404;
	sub_83102DB0(ctx, base);
	// lwz r4,104(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CE4410;
	sub_82D9A868(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CE4420;
	sub_82D9A868(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// lwz r24,96(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 96);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ld r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r28.u32 + 44);
	// bl 0x83179518
	ctx.lr = 0x82CE4444;
	sub_83179518(ctx, base);
	// addi r11,r29,9
	ctx.r11.s64 = ctx.r29.s64 + 9;
	// li r6,2
	ctx.r6.s64 = 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ld r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r28.u32 + 44);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r15
	ctx.r26.u64 = ctx.r11.u64 + ctx.r15.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x83179518
	ctx.lr = 0x82CE4470;
	sub_83179518(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r19,r31,100
	ctx.r19.s64 = ctx.r31.s64 + 100;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r4,r30,-404
	ctx.r4.s64 = ctx.r30.s64 + -404;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CE4490;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r20,12
	ctx.r20.s64 = 12;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce4510
	if (cr6.eq) goto loc_82CE4510;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,104(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d459d0
	ctx.lr = 0x82CE44B0;
	sub_82D459D0(ctx, base);
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831235b8
	ctx.lr = 0x82CE44C4;
	sub_831235B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CE44D0;
	sub_83102DB0(ctx, base);
	// lwz r3,104(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// bl 0x82d8bf78
	ctx.lr = 0x82CE44D8;
	sub_82D8BF78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d45370
	ctx.lr = 0x82CE44E4;
	sub_82D45370(ctx, base);
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d45c08
	ctx.lr = 0x82CE44F0;
	sub_82D45C08(ctx, base);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x82CE4504;
	sub_83120738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d45a28
	ctx.lr = 0x82CE4510;
	sub_82D45A28(ctx, base);
loc_82CE4510:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r4,r30,-396
	ctx.r4.s64 = ctx.r30.s64 + -396;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4528;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce45d4
	if (cr6.eq) goto loc_82CE45D4;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// bne cr6,0x82ce4570
	if (!cr6.eq) goto loc_82CE4570;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r4,r30,-372
	ctx.r4.s64 = ctx.r30.s64 + -372;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r29,48(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x83815d38
	ctx.lr = 0x82CE4550;
	sub_83815D38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815b28
	ctx.lr = 0x82CE455C;
	sub_83815B28(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838153c8
	ctx.lr = 0x82CE4568;
	sub_838153C8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815cb8
	ctx.lr = 0x82CE4570;
	sub_83815CB8(ctx, base);
loc_82CE4570:
	// ld r9,44(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 44);
	// li r11,1
	ctx.r11.s64 = 1;
	// ld r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 44);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,96(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 96);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r7,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r7.s64;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r8,r10
	ctx.r29.u64 = ctx.r8.u64 & ctx.r10.u64;
	// bl 0x82a678c0
	ctx.lr = 0x82CE45BC;
	sub_82A678C0(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,96(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a678c0
	ctx.lr = 0x82CE45D4;
	sub_82A678C0(ctx, base);
loc_82CE45D4:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r4,r30,-356
	ctx.r4.s64 = ctx.r30.s64 + -356;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE45EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce4b18
	if (cr6.eq) goto loc_82CE4B18;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bne cr6,0x82ce461c
	if (!cr6.eq) goto loc_82CE461C;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x82CE4618;
	sub_83120738(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82CE461C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39310
	ctx.lr = 0x82CE4624;
	sub_82D39310(ctx, base);
	// addi r4,r30,-1430
	ctx.r4.s64 = ctx.r30.s64 + -1430;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CE4630;
	sub_837B0C10(ctx, base);
	// addi r4,r30,-340
	ctx.r4.s64 = ctx.r30.s64 + -340;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// clrlwi r27,r22,24
	ctx.r27.u64 = ctx.r22.u32 & 0xFF;
	// bl 0x837b0c10
	ctx.lr = 0x82CE4640;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CE4650;
	sub_82A6A1B8(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,96(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 96);
	// ori r4,r4,500
	ctx.r4.u64 = ctx.r4.u64 | 500;
	// bl 0x82d042a8
	ctx.lr = 0x82CE4664;
	sub_82D042A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce4678
	if (!cr6.lt) goto loc_82CE4678;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CE4678:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82CE4680;
	sub_837B0C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-324
	ctx.r4.s64 = ctx.r30.s64 + -324;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CE4690;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CE46A0;
	sub_82A69AD0(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r4,r30,-312
	ctx.r4.s64 = ctx.r30.s64 + -312;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE46B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce46dc
	if (cr6.eq) goto loc_82CE46DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8337f1e0
	ctx.lr = 0x82CE46CC;
	sub_8337F1E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE46DC;
	sub_82D2AEC8(ctx, base);
loc_82CE46DC:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r4,r30,-292
	ctx.r4.s64 = ctx.r30.s64 + -292;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE46F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce4724
	if (cr6.eq) goto loc_82CE4724;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82d8c868
	ctx.lr = 0x82CE470C;
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
	ctx.lr = 0x82CE4724;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CE4724:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r4,r30,-264
	ctx.r4.s64 = ctx.r30.s64 + -264;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE473C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce4b10
	if (cr6.eq) goto loc_82CE4B10;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r4,r30,-248
	ctx.r4.s64 = ctx.r30.s64 + -248;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4760;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce4b10
	if (cr6.eq) goto loc_82CE4B10;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// beq cr6,0x82ce4818
	if (cr6.eq) goto loc_82CE4818;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d39310
	ctx.lr = 0x82CE4780;
	sub_82D39310(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// ld r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r28.u32 + 44);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83179518
	ctx.lr = 0x82CE4794;
	sub_83179518(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,-232
	ctx.r4.s64 = ctx.r30.s64 + -232;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x837b0c10
	ctx.lr = 0x82CE47A8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CE47B8;
	sub_82A6A1B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8337f1e0
	ctx.lr = 0x82CE47C4;
	sub_8337F1E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE47D4;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ble cr6,0x82ce47fc
	if (!cr6.gt) goto loc_82CE47FC;
	// addi r4,r30,-216
	ctx.r4.s64 = ctx.r30.s64 + -216;
	// bctrl 
	ctx.lr = 0x82CE47F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ce4850
	goto loc_82CE4850;
loc_82CE47FC:
	// bge cr6,0x82ce480c
	if (!cr6.lt) goto loc_82CE480C;
	// addi r4,r30,-200
	ctx.r4.s64 = ctx.r30.s64 + -200;
	// bctrl 
	ctx.lr = 0x82CE4808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ce4850
	goto loc_82CE4850;
loc_82CE480C:
	// addi r4,r30,-184
	ctx.r4.s64 = ctx.r30.s64 + -184;
	// bctrl 
	ctx.lr = 0x82CE4814;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ce4850
	goto loc_82CE4850;
loc_82CE4818:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE4828;
	sub_82D2AEC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d39448
	ctx.lr = 0x82CE4830;
	sub_82D39448(ctx, base);
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CE483C;
	sub_837B0C10(ctx, base);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ori r5,r5,61
	ctx.r5.u64 = ctx.r5.u64 | 61;
	// bl 0x82a69a28
	ctx.lr = 0x82CE4850;
	sub_82A69A28(ctx, base);
loc_82CE4850:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r4,r30,-152
	ctx.r4.s64 = ctx.r30.s64 + -152;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4868;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce487c
	if (cr6.eq) goto loc_82CE487C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a68da0
	ctx.lr = 0x82CE487C;
	sub_82A68DA0(ctx, base);
loc_82CE487C:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r4,r30,-132
	ctx.r4.s64 = ctx.r30.s64 + -132;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4894;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce48a8
	if (cr6.eq) goto loc_82CE48A8;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a69958
	ctx.lr = 0x82CE48A8;
	sub_82A69958(ctx, base);
loc_82CE48A8:
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x82CE48B8;
	sub_83120738(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82a67598
	ctx.lr = 0x82CE48C0;
	sub_82A67598(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CE48D0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CE48E0;
	sub_82A69A28(ctx, base);
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r31,40(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 40);
	// bl 0x837b0c10
	ctx.lr = 0x82CE48F0;
	sub_837B0C10(ctx, base);
	// li r11,90
	ctx.r11.s64 = 90;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// divwu r5,r31,r11
	ctx.r5.u32 = PPCDivide(ctx.r31.u32, ctx.r11.u32);
	// bl 0x82a6a1b8
	ctx.lr = 0x82CE4904;
	sub_82A6A1B8(ctx, base);
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r31,44(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// bl 0x837b0c10
	ctx.lr = 0x82CE4914;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CE4924;
	sub_82A6A1B8(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// addi r24,r11,13980
	ctx.r24.s64 = ctx.r11.s64 + 13980;
loc_82CE4930:
	// stb r14,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r14.u8);
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CE4940;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// bl 0x83165d78
	ctx.lr = 0x82CE4954;
	sub_83165D78(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce4968
	if (!cr6.lt) goto loc_82CE4968;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_82CE4968:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE4970;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce4b08
	if (cr6.eq) goto loc_82CE4B08;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r31,100
	ctx.r28.s64 = ctx.r31.s64 + 100;
	// lwzx r29,r10,r24
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CE4998;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CE49A8;
	sub_82A69A28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,104(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,100(r15)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r15.u32 + 100);
	// bl 0x82d01390
	ctx.lr = 0x82CE49BC;
	sub_82D01390(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r25,r3,24
	ctx.r25.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82ce49e8
	if (!cr6.eq) goto loc_82CE49E8;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
loc_82CE49E8:
	// bctrl 
	ctx.lr = 0x82CE49EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4A04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,100(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 100);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d01090
	ctx.lr = 0x82CE4A14;
	sub_82D01090(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ce4a48
	if (cr6.eq) goto loc_82CE4A48;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// beq cr6,0x82ce4a30
	if (cr6.eq) goto loc_82CE4A30;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bne cr6,0x82ce4a34
	if (!cr6.eq) goto loc_82CE4A34;
loc_82CE4A30:
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
loc_82CE4A34:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a68548
	ctx.lr = 0x82CE4A48;
	sub_82A68548(ctx, base);
loc_82CE4A48:
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
loc_82CE4A50:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE4A68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce4acc
	if (cr6.eq) goto loc_82CE4ACC;
	// cmplwi cr6,r25,1
	cr6.compare<uint32_t>(ctx.r25.u32, 1, xer);
	// bne cr6,0x82ce4a88
	if (!cr6.eq) goto loc_82CE4A88;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// beq cr6,0x82ce4a8c
	if (cr6.eq) goto loc_82CE4A8C;
loc_82CE4A88:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82CE4A8C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a68548
	ctx.lr = 0x82CE4A9C;
	sub_82A68548(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,104(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// bl 0x82d01260
	ctx.lr = 0x82CE4AA8;
	sub_82D01260(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x82ce4acc
	if (cr6.eq) goto loc_82CE4ACC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,104(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// bl 0x82d01260
	ctx.lr = 0x82CE4ABC;
	sub_82D01260(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// beq cr6,0x82ce4acc
	if (cr6.eq) goto loc_82CE4ACC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a68650
	ctx.lr = 0x82CE4ACC;
	sub_82A68650(ctx, base);
loc_82CE4ACC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82ce4a50
	if (cr6.lt) goto loc_82CE4A50;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE4AE4;
	sub_8387E8E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82ce4930
	if (cr6.lt) goto loc_82CE4930;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE4B00;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82CE4B08:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE4B10;
	sub_8387E8E0(ctx, base);
loc_82CE4B10:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE4B18;
	sub_8387E8E0(ctx, base);
loc_82CE4B18:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE4B20"))) PPC_WEAK_FUNC(sub_82CE4B20);
PPC_FUNC_IMPL(__imp__sub_82CE4B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82CE4B28;
	__savegprlr_21(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE4B38;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE4B40;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce53f8
	if (cr6.eq) goto loc_82CE53F8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r25,r11,13804
	ctx.r25.s64 = ctx.r11.s64 + 13804;
	// addi r4,r25,-212
	ctx.r4.s64 = ctx.r25.s64 + -212;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE4B6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r25,-196
	ctx.r4.s64 = ctx.r25.s64 + -196;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CE4B84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce53f8
	if (cr6.eq) goto loc_82CE53F8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE4B9C;
	sub_82D2AEC8(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82CE4BA0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce53f8
	if (cr6.eq) goto loc_82CE53F8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CE4BB0;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CE4BB4;
	sub_83102DB0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r4,104(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// bl 0x82d9a868
	ctx.lr = 0x82CE4BCC;
	sub_82D9A868(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// addi r23,r31,100
	ctx.r23.s64 = ctx.r31.s64 + 100;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r29,r11,14268
	ctx.r29.s64 = ctx.r11.s64 + 14268;
loc_82CE4BE8:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r25,-184
	ctx.r4.s64 = ctx.r25.s64 + -184;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CE4C08;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x83165d78
	ctx.lr = 0x82CE4C1C;
	sub_83165D78(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce4c30
	if (!cr6.lt) goto loc_82CE4C30;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
loc_82CE4C30:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE4C38;
	sub_82D2E228(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce5400
	if (cr6.eq) goto loc_82CE5400;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r4,r25,-168
	ctx.r4.s64 = ctx.r25.s64 + -168;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,100
	ctx.r31.s64 = ctx.r11.s64 + 100;
	// lwzx r26,r9,r29
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CE4C60;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CE4C70;
	sub_82A69A28(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE4C78;
	sub_8387E8E0(ctx, base);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x82ce4be8
	if (cr6.lt) goto loc_82CE4BE8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82d8d258
	ctx.lr = 0x82CE4C98;
	sub_82D8D258(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,43
	ctx.r4.s64 = 43;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x83120738
	ctx.lr = 0x82CE4CB0;
	sub_83120738(ctx, base);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r22,r10,24
	ctx.r22.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x831236a0
	ctx.lr = 0x82CE4CC4;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x83120738
	ctx.lr = 0x82CE4CD4;
	sub_83120738(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// addi r4,r25,-156
	ctx.r4.s64 = ctx.r25.s64 + -156;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// clrlwi r21,r9,24
	ctx.r21.u64 = ctx.r9.u32 & 0xFF;
	// bl 0x8259cc28
	ctx.lr = 0x82CE4CFC;
	sub_8259CC28(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// addi r4,r25,-144
	ctx.r4.s64 = ctx.r25.s64 + -144;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82CE4D1C;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83165d78
	ctx.lr = 0x82CE4D30;
	sub_83165D78(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82ce4d44
	if (!cr6.lt) goto loc_82CE4D44;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CE4D44:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE4D4C;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce53e8
	if (cr6.eq) goto loc_82CE53E8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE4D64;
	sub_82D2AEC8(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x82CE4D8C;
	sub_8259CB28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82a6a1b8
	ctx.lr = 0x82CE4D9C;
	sub_82A6A1B8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r25,-128
	ctx.r4.s64 = ctx.r25.s64 + -128;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CE4DB8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82CE4DCC;
	sub_83165D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CE4DE0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE4DE8;
	sub_8387E8E0(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ce4dfc
	if (!cr6.lt) goto loc_82CE4DFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CE4DFC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE4E04;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce53e8
	if (cr6.eq) goto loc_82CE53E8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE4E1C;
	sub_82D2AEC8(ctx, base);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// bl 0x8292a3f8
	ctx.lr = 0x82CE4E34;
	sub_8292A3F8(ctx, base);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,8976(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x82a6b1b8
	ctx.lr = 0x82CE4E5C;
	sub_82A6B1B8(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r25,-112
	ctx.r4.s64 = ctx.r25.s64 + -112;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CE4E78;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82CE4E8C;
	sub_83165D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CE4EA0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE4EA8;
	sub_8387E8E0(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// bge cr6,0x82ce4ebc
	if (!cr6.lt) goto loc_82CE4EBC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CE4EBC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE4EC4;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce53e8
	if (cr6.eq) goto loc_82CE53E8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE4EDC;
	sub_82D2AEC8(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// lwz r29,8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x8292a3f8
	ctx.lr = 0x82CE4EF0;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CE4F00;
	sub_82A6A1B8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r25,-96
	ctx.r4.s64 = ctx.r25.s64 + -96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CE4F1C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82CE4F30;
	sub_83165D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CE4F44;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE4F4C;
	sub_8387E8E0(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ce4f60
	if (!cr6.lt) goto loc_82CE4F60;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CE4F60:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE4F68;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce53e8
	if (cr6.eq) goto loc_82CE53E8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE4F80;
	sub_82D2AEC8(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// lwz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x8292a3f8
	ctx.lr = 0x82CE4F94;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CE4FA4;
	sub_82A6A1B8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r25,-80
	ctx.r4.s64 = ctx.r25.s64 + -80;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CE4FC0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82CE4FD4;
	sub_83165D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CE4FE8;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE4FF0;
	sub_8387E8E0(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ce5004
	if (!cr6.lt) goto loc_82CE5004;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CE5004:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE500C;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce53e8
	if (cr6.eq) goto loc_82CE53E8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE5024;
	sub_82D2AEC8(ctx, base);
	// addi r4,r25,-1657
	ctx.r4.s64 = ctx.r25.s64 + -1657;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82CE5030;
	sub_837B0C10(ctx, base);
	// lis r4,562
	ctx.r4.s64 = 36831232;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r5,32(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// ori r4,r4,30
	ctx.r4.u64 = ctx.r4.u64 | 30;
	// bl 0x82d042a8
	ctx.lr = 0x82CE5044;
	sub_82D042A8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// bl 0x8292a3f8
	ctx.lr = 0x82CE5054;
	sub_8292A3F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292a3f8
	ctx.lr = 0x82CE5064;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CE5074;
	sub_82A69AD0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r26,r28,76
	ctx.r26.s64 = ctx.r28.s64 + 76;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82CE5088:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r25,-64
	ctx.r4.s64 = ctx.r25.s64 + -64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82CE5098;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82CE50AC;
	sub_83165D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CE50C0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE50C8;
	sub_8387E8E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce50dc
	if (!cr6.lt) goto loc_82CE50DC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CE50DC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE50E4;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce53e0
	if (cr6.eq) goto loc_82CE53E0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwzu r28,4(r26)
	ea = 4 + ctx.r26.u32;
	ctx.r28.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r27,r31,100
	ctx.r27.s64 = ctx.r31.s64 + 100;
	// bl 0x8292a3f8
	ctx.lr = 0x82CE5104;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CE5114;
	sub_82A6A1B8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE5124;
	sub_82D2AEC8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt cr6,0x82ce5088
	if (cr6.lt) goto loc_82CE5088;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r25,-48
	ctx.r4.s64 = ctx.r25.s64 + -48;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82CE514C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82CE5160;
	sub_83165D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CE5174;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE517C;
	sub_8387E8E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce5190
	if (!cr6.lt) goto loc_82CE5190;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CE5190:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE5198;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce53e0
	if (cr6.eq) goto loc_82CE53E0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE51B0;
	sub_82D2AEC8(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x83132450
	ctx.lr = 0x82CE51C8;
	sub_83132450(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// bl 0x8292a3f8
	ctx.lr = 0x82CE51DC;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CE51EC;
	sub_82A6A1B8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r25,-32
	ctx.r4.s64 = ctx.r25.s64 + -32;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CE5208;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82CE521C;
	sub_83165D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CE5230;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE5238;
	sub_8387E8E0(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82ce524c
	if (!cr6.lt) goto loc_82CE524C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CE524C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE5254;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce53e0
	if (cr6.eq) goto loc_82CE53E0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE526C;
	sub_82D2AEC8(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// bl 0x8292a3f8
	ctx.lr = 0x82CE527C;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CE528C;
	sub_82A6A1B8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r25,-16
	ctx.r4.s64 = ctx.r25.s64 + -16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CE52A8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82CE52BC;
	sub_83165D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CE52D0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE52D8;
	sub_8387E8E0(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ce52ec
	if (!cr6.lt) goto loc_82CE52EC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CE52EC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE52F4;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce53e0
	if (cr6.eq) goto loc_82CE53E0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE530C;
	sub_82D2AEC8(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// bl 0x8292a3f8
	ctx.lr = 0x82CE531C;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CE532C;
	sub_82A6A1B8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82dad028
	ctx.lr = 0x82CE5344;
	sub_82DAD028(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bge cr6,0x82ce53e0
	if (!cr6.lt) goto loc_82CE53E0;
loc_82CE5350:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82CE5360;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82CE5374;
	sub_83165D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CE5388;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE5390;
	sub_8387E8E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce53a4
	if (!cr6.lt) goto loc_82CE53A4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CE53A4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE53AC;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce53e0
	if (cr6.eq) goto loc_82CE53E0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE53C0;
	sub_82D2AEC8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82dad028
	ctx.lr = 0x82CE53D4;
	sub_82DAD028(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ce5350
	if (cr6.lt) goto loc_82CE5350;
loc_82CE53E0:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE53E8;
	sub_8387E8E0(ctx, base);
loc_82CE53E8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE53F0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE53F8;
	sub_8387E8E0(ctx, base);
loc_82CE53F8:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82CE5400:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE5408;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE5410"))) PPC_WEAK_FUNC(sub_82CE5410);
PPC_FUNC_IMPL(__imp__sub_82CE5410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CE5418;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// subf. r28,r6,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x82ce5434
	if (!cr0.lt) goto loc_82CE5434;
	// neg r28,r28
	ctx.r28.s64 = -ctx.r28.s64;
loc_82CE5434:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
	// bne cr6,0x82ce5448
	if (!cr6.eq) goto loc_82CE5448;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82CE5448:
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r31,r11,14232
	ctx.r31.s64 = ctx.r11.s64 + 14232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// bl 0x8259cc28
	ctx.lr = 0x82CE5470;
	sub_8259CC28(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CE5480;
	sub_82A6A1B8(ctx, base);
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CE5498;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce54d0
	if (cr6.eq) goto loc_82CE54D0;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, xer);
	// ble cr6,0x82ce54b0
	if (!cr6.gt) goto loc_82CE54B0;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// b 0x82ce54bc
	goto loc_82CE54BC;
loc_82CE54B0:
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// blt cr6,0x82ce54bc
	if (cr6.lt) goto loc_82CE54BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82CE54BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE54D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CE54D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE54D8"))) PPC_WEAK_FUNC(sub_82CE54D8);
PPC_FUNC_IMPL(__imp__sub_82CE54D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CE54E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ce5720
	if (cr6.eq) goto loc_82CE5720;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE5508;
	sub_82D2AEC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r31,r30,100
	ctx.r31.s64 = ctx.r30.s64 + 100;
	// bl 0x82a68718
	ctx.lr = 0x82CE5514;
	sub_82A68718(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r29,r11,14364
	ctx.r29.s64 = ctx.r11.s64 + 14364;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r29,-116
	ctx.r4.s64 = ctx.r29.s64 + -116;
	// bl 0x837b0c10
	ctx.lr = 0x82CE552C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CE553C;
	sub_82A69A28(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r29,-100
	ctx.r4.s64 = ctx.r29.s64 + -100;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE5558;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r29,-84
	ctx.r4.s64 = ctx.r29.s64 + -84;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CE5574;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// bgt cr6,0x82ce5720
	if (cr6.gt) goto loc_82CE5720;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ce55d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CE55D4;
	// bdzf 4*cr6+eq,0x82ce5644
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CE5644;
	// bne cr6,0x82ce56b4
	if (!cr6.eq) goto loc_82CE56B4;
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83120738
	ctx.lr = 0x82CE55A8;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x837b0c10
	ctx.lr = 0x82CE55BC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CE55CC;
	sub_82A6A1B8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CE55D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a66ef0
	ctx.lr = 0x82CE55E0;
	sub_82A66EF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// ori r4,r4,265
	ctx.r4.u64 = ctx.r4.u64 | 265;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CE5608;
	sub_82D042A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292a3f8
	ctx.lr = 0x82CE5614;
	sub_8292A3F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82CE5624;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CE5634;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE563C;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CE5644:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a66ef0
	ctx.lr = 0x82CE5650;
	sub_82A66EF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// ori r4,r4,266
	ctx.r4.u64 = ctx.r4.u64 | 266;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x82CE5678;
	sub_82D042A8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8292a3f8
	ctx.lr = 0x82CE5684;
	sub_8292A3F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82CE5694;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CE56A4;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE56AC;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CE56B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83120738
	ctx.lr = 0x82CE56CC;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ce5700
	if (!cr6.eq) goto loc_82CE5700;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x837b0c10
	ctx.lr = 0x82CE56E4;
	sub_837B0C10(ctx, base);
	// lis r5,990
	ctx.r5.s64 = 64880640;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,84
	ctx.r5.u64 = ctx.r5.u64 | 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CE56F8;
	sub_82A69A28(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CE5700:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82CE570C;
	sub_837B0C10(ctx, base);
	// lis r5,990
	ctx.r5.s64 = 64880640;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,86
	ctx.r5.u64 = ctx.r5.u64 | 86;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CE5720;
	sub_82A69A28(ctx, base);
loc_82CE5720:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE5728"))) PPC_WEAK_FUNC(sub_82CE5728);
PPC_FUNC_IMPL(__imp__sub_82CE5728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82CE5730;
	__savegprlr_21(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CE5740;
	sub_831156E8(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r30.u16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311bf98
	ctx.lr = 0x82CE576C;
	sub_8311BF98(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE5778;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE5780;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce5d38
	if (cr6.eq) goto loc_82CE5D38;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r25,r11,14488
	ctx.r25.s64 = ctx.r11.s64 + 14488;
	// addi r4,r25,-108
	ctx.r4.s64 = ctx.r25.s64 + -108;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE57AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r25,-92
	ctx.r4.s64 = ctx.r25.s64 + -92;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CE57C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce5d38
	if (cr6.eq) goto loc_82CE5D38;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE57DC;
	sub_82D2AEC8(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r25,-80
	ctx.r4.s64 = ctx.r25.s64 + -80;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x837b0c10
	ctx.lr = 0x82CE57EC;
	sub_837B0C10(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r21,-1
	ctx.r21.s64 = -1;
loc_82CE57F8:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// bl 0x83123700
	ctx.lr = 0x82CE5808;
	sub_83123700(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// bl 0x83120738
	ctx.lr = 0x82CE5818;
	sub_83120738(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ce58f0
	if (!cr6.eq) goto loc_82CE58F0;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CE5848;
	sub_8259CB28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x83165d78
	ctx.lr = 0x82CE585C;
	sub_83165D78(ctx, base);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce5870
	if (!cr6.lt) goto loc_82CE5870;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
loc_82CE5870:
	// addi r3,r26,100
	ctx.r3.s64 = ctx.r26.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x82CE5878;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce58e8
	if (cr6.eq) goto loc_82CE58E8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE5890;
	sub_82D2AEC8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r25,-60
	ctx.r4.s64 = ctx.r25.s64 + -60;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE58A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce58e8
	if (cr6.eq) goto loc_82CE58E8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83160838
	ctx.lr = 0x82CE58C0;
	sub_83160838(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82CE58D4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE58DC;
	sub_8387E8E0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82CE58E8:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE58F0;
	sub_8387E8E0(ctx, base);
loc_82CE58F0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,28
	cr6.compare<uint32_t>(ctx.r29.u32, 28, xer);
	// blt cr6,0x82ce57f8
	if (cr6.lt) goto loc_82CE57F8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// li r24,2
	ctx.r24.s64 = 2;
	// ori r22,r10,61
	ctx.r22.u64 = ctx.r10.u64 | 61;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82ce5a20
	if (!cr6.lt) goto loc_82CE5A20;
	// addi r29,r26,100
	ctx.r29.s64 = ctx.r26.s64 + 100;
	// subfic r28,r11,11
	xer.ca = ctx.r11.u32 <= 11;
	ctx.r28.s64 = 11 - ctx.r11.s64;
loc_82CE591C:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CE5940;
	sub_8259CB28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83165d78
	ctx.lr = 0x82CE5954;
	sub_83165D78(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce5968
	if (!cr6.lt) goto loc_82CE5968;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_82CE5968:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE5970;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce5994
	if (!cr6.eq) goto loc_82CE5994;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce5a0c
	if (cr6.lt) goto loc_82CE5A0C;
	// stw r24,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r24.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// b 0x82ce5a04
	goto loc_82CE5A04;
loc_82CE5994:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE59A4;
	sub_82D2AEC8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r25,-48
	ctx.r4.s64 = ctx.r25.s64 + -48;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE59BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce59dc
	if (!cr6.eq) goto loc_82CE59DC;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce5a0c
	if (cr6.lt) goto loc_82CE5A0C;
	// stw r24,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r24.u32);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// b 0x82ce5a04
	goto loc_82CE5A04;
loc_82CE59DC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82d29598
	ctx.lr = 0x82CE59E4;
	sub_82D29598(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// blt cr6,0x82ce5a0c
	if (cr6.lt) goto loc_82CE5A0C;
	// stw r24,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r24.u32);
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
loc_82CE5A04:
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82CE5A0C;
	sub_825952B8(ctx, base);
loc_82CE5A0C:
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// bne 0x82ce591c
	if (!cr0.eq) goto loc_82CE591C;
loc_82CE5A20:
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// addi r4,r25,-36
	ctx.r4.s64 = ctx.r25.s64 + -36;
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// li r5,22
	ctx.r5.s64 = 22;
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8259cc28
	ctx.lr = 0x82CE5A3C;
	sub_8259CC28(ctx, base);
	// addi r29,r25,-2140
	ctx.r29.s64 = ctx.r25.s64 + -2140;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82CE5A48:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83120738
	ctx.lr = 0x82CE5A58;
	sub_83120738(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce5b58
	if (cr6.eq) goto loc_82CE5B58;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CE5A88;
	sub_8259CB28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83165d78
	ctx.lr = 0x82CE5A9C;
	sub_83165D78(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce5ab0
	if (!cr6.lt) goto loc_82CE5AB0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CE5AB0:
	// addi r3,r26,100
	ctx.r3.s64 = ctx.r26.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x82CE5AB8;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce5adc
	if (!cr6.eq) goto loc_82CE5ADC;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce5b4c
	if (cr6.lt) goto loc_82CE5B4C;
	// stw r24,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r24.u32);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// b 0x82ce5b44
	goto loc_82CE5B44;
loc_82CE5ADC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE5AEC;
	sub_82D2AEC8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r25,-12
	ctx.r4.s64 = ctx.r25.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE5B04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce5bf4
	if (cr6.eq) goto loc_82CE5BF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8314d648
	ctx.lr = 0x82CE5B18;
	sub_8314D648(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82CE5B24;
	sub_82D29598(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// blt cr6,0x82ce5b4c
	if (cr6.lt) goto loc_82CE5B4C;
	// stw r24,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r24.u32);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
loc_82CE5B44:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CE5B4C;
	sub_825952B8(ctx, base);
loc_82CE5B4C:
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
loc_82CE5B58:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,28
	cr6.compare<uint32_t>(ctx.r28.u32, 28, xer);
	// blt cr6,0x82ce5a48
	if (cr6.lt) goto loc_82CE5A48;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bge cr6,0x82ce5cf4
	if (!cr6.lt) goto loc_82CE5CF4;
	// addi r29,r26,100
	ctx.r29.s64 = ctx.r26.s64 + 100;
	// subfic r28,r11,5
	xer.ca = ctx.r11.u32 <= 5;
	ctx.r28.s64 = 5 - ctx.r11.s64;
loc_82CE5B7C:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CE5BA0;
	sub_8259CB28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83165d78
	ctx.lr = 0x82CE5BB4;
	sub_83165D78(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce5bc8
	if (!cr6.lt) goto loc_82CE5BC8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82CE5BC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE5BD0;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce5c68
	if (!cr6.eq) goto loc_82CE5C68;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce5ce0
	if (cr6.lt) goto loc_82CE5CE0;
	// stw r24,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r24.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// b 0x82ce5cd8
	goto loc_82CE5CD8;
loc_82CE5BF4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce5c10
	if (cr6.lt) goto loc_82CE5C10;
	// stw r24,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r24.u32);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CE5C10;
	sub_825952B8(ctx, base);
loc_82CE5C10:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// blt cr6,0x82ce5c38
	if (cr6.lt) goto loc_82CE5C38;
	// stw r24,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r24.u32);
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82CE5C38;
	sub_825952B8(ctx, base);
loc_82CE5C38:
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// blt cr6,0x82ce5d38
	if (cr6.lt) goto loc_82CE5D38;
	// stw r24,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r24.u32);
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x825952b8
	ctx.lr = 0x82CE5C60;
	sub_825952B8(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82CE5C68:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE5C78;
	sub_82D2AEC8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE5C90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce5cb0
	if (!cr6.eq) goto loc_82CE5CB0;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce5ce0
	if (cr6.lt) goto loc_82CE5CE0;
	// stw r24,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r24.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// b 0x82ce5cd8
	goto loc_82CE5CD8;
loc_82CE5CB0:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82d29598
	ctx.lr = 0x82CE5CB8;
	sub_82D29598(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// blt cr6,0x82ce5ce0
	if (cr6.lt) goto loc_82CE5CE0;
	// stw r24,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r24.u32);
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
loc_82CE5CD8:
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82CE5CE0;
	sub_825952B8(ctx, base);
loc_82CE5CE0:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// bne 0x82ce5b7c
	if (!cr0.eq) goto loc_82CE5B7C;
loc_82CE5CF4:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce5d10
	if (cr6.lt) goto loc_82CE5D10;
	// stw r24,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r24.u32);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82CE5D10;
	sub_825952B8(ctx, base);
loc_82CE5D10:
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// blt cr6,0x82ce5d38
	if (cr6.lt) goto loc_82CE5D38;
	// stw r24,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r24.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x825952b8
	ctx.lr = 0x82CE5D38;
	sub_825952B8(ctx, base);
loc_82CE5D38:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE5D40"))) PPC_WEAK_FUNC(sub_82CE5D40);
PPC_FUNC_IMPL(__imp__sub_82CE5D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CE5D48;
	__savegprlr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE5D58;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE5D60;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce611c
	if (cr6.eq) goto loc_82CE611C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r27,r11,14600
	ctx.r27.s64 = ctx.r11.s64 + 14600;
	// addi r4,r27,-100
	ctx.r4.s64 = ctx.r27.s64 + -100;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE5D8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r27,-80
	ctx.r4.s64 = ctx.r27.s64 + -80;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CE5DA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce611c
	if (cr6.eq) goto loc_82CE611C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE5DBC;
	sub_82D2AEC8(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82CE5DC0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce611c
	if (cr6.eq) goto loc_82CE611C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CE5DD0;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CE5DD4;
	sub_83102DB0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r4,104(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// bl 0x82d9a868
	ctx.lr = 0x82CE5DEC;
	sub_82D9A868(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r3,52
	ctx.r9.s64 = ctx.r3.s64 + 52;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r24,r31,100
	ctx.r24.s64 = ctx.r31.s64 + 100;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r6,2(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r5,3(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// lbz r11,5(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r10,6(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r31,7(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// lbz r30,8(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// lbz r28,9(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// lbz r26,10(r9)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// lbz r25,11(r9)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// lbz r23,12(r9)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// lbz r9,13(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r8,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r8.u8);
	// stb r7,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r7.u8);
	// stb r6,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r6.u8);
	// stb r5,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r5.u8);
	// stb r4,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r4.u8);
	// stb r11,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r11.u8);
	// stb r10,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r10.u8);
	// stb r31,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r31.u8);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// stb r28,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r28.u8);
	// stb r26,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r26.u8);
	// stb r25,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r25.u8);
	// stb r23,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r23.u8);
	// stb r9,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r9.u8);
	// bl 0x82dad028
	ctx.lr = 0x82CE5E74;
	sub_82DAD028(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bge cr6,0x82ce611c
	if (!cr6.lt) goto loc_82CE611C;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r23,2
	ctx.r23.s64 = 2;
	// addi r25,r11,14024
	ctx.r25.s64 = ctx.r11.s64 + 14024;
loc_82CE5E90:
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r4,r27,-64
	ctx.r4.s64 = ctx.r27.s64 + -64;
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r29.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CE5EB0;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83165d78
	ctx.lr = 0x82CE5EC4;
	sub_83165D78(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce5ed8
	if (!cr6.lt) goto loc_82CE5ED8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CE5ED8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE5EE0;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce5ef8
	if (!cr6.eq) goto loc_82CE5EF8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE5EF4;
	sub_8387E8E0(ctx, base);
	// b 0x82ce60e4
	goto loc_82CE60E4;
loc_82CE5EF8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82ce610c
	if (!cr6.lt) goto loc_82CE610C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE5F14;
	sub_82D2AEC8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r25,-16
	ctx.r11.s64 = ctx.r25.s64 + -16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r27,-48
	ctx.r4.s64 = ctx.r27.s64 + -48;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r28,r31,100
	ctx.r28.s64 = ctx.r31.s64 + 100;
	// lwzx r31,r9,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CE5F34;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CE5F44;
	sub_82A69A28(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwzx r31,r7,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CE5F5C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CE5F6C;
	sub_82A69A28(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r25,4
	ctx.r6.s64 = ctx.r25.s64 + 4;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwzx r31,r11,r6
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CE5F88;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CE5F98;
	sub_82A69A28(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
loc_82CE5FA0:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// blt cr6,0x82ce5fb8
	if (cr6.lt) goto loc_82CE5FB8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82ce5fdc
	goto loc_82CE5FDC;
loc_82CE5FB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82ce5fcc
	if (cr6.lt) goto loc_82CE5FCC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82ce5fdc
	goto loc_82CE5FDC;
loc_82CE5FCC:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
loc_82CE5FDC:
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r29.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CE5FFC;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83165d78
	ctx.lr = 0x82CE6010;
	sub_83165D78(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce6024
	if (!cr6.lt) goto loc_82CE6024;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82CE6024:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE6038;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce6080
	if (cr6.eq) goto loc_82CE6080;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d3d548
	ctx.lr = 0x82CE604C;
	sub_82D3D548(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// bge cr6,0x82ce6060
	if (!cr6.lt) goto loc_82CE6060;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82ce6070
	goto loc_82CE6070;
loc_82CE6060:
	// cmplwi cr6,r11,66
	cr6.compare<uint32_t>(ctx.r11.u32, 66, xer);
	// li r6,2
	ctx.r6.s64 = 2;
	// blt cr6,0x82ce6070
	if (cr6.lt) goto loc_82CE6070;
	// li r6,3
	ctx.r6.s64 = 3;
loc_82CE6070:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3d3b0
	ctx.lr = 0x82CE6080;
	sub_82D3D3B0(ctx, base);
loc_82CE6080:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce609c
	if (cr6.lt) goto loc_82CE609C;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82CE609C;
	sub_825952B8(ctx, base);
loc_82CE609C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r29.u8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82ce5fa0
	if (cr6.lt) goto loc_82CE5FA0;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce60d8
	if (cr6.lt) goto loc_82CE60D8;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CE60D8;
	sub_825952B8(ctx, base);
loc_82CE60D8:
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
loc_82CE60E4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82dad028
	ctx.lr = 0x82CE60F8;
	sub_82DAD028(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ce5e90
	if (cr6.lt) goto loc_82CE5E90;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82CE610C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE6114;
	sub_82D2AEC8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE611C;
	sub_8387E8E0(ctx, base);
loc_82CE611C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE6124"))) PPC_WEAK_FUNC(sub_82CE6124);
PPC_FUNC_IMPL(__imp__sub_82CE6124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE6128"))) PPC_WEAK_FUNC(sub_82CE6128);
PPC_FUNC_IMPL(__imp__sub_82CE6128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CE6130;
	__savegprlr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE6140;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE6148;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce650c
	if (cr6.eq) goto loc_82CE650C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r27,r11,14716
	ctx.r27.s64 = ctx.r11.s64 + 14716;
	// addi r4,r27,-100
	ctx.r4.s64 = ctx.r27.s64 + -100;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE6174;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r27,-80
	ctx.r4.s64 = ctx.r27.s64 + -80;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CE618C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce650c
	if (cr6.eq) goto loc_82CE650C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE61A4;
	sub_82D2AEC8(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82CE61A8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce650c
	if (cr6.eq) goto loc_82CE650C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CE61B8;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CE61BC;
	sub_83102DB0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r4,104(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// bl 0x82d9a868
	ctx.lr = 0x82CE61D4;
	sub_82D9A868(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r3,52
	ctx.r9.s64 = ctx.r3.s64 + 52;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r24,r31,100
	ctx.r24.s64 = ctx.r31.s64 + 100;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r6,2(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r5,3(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// lbz r11,5(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r10,6(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r31,7(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// lbz r30,8(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// lbz r28,9(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// lbz r26,10(r9)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// lbz r25,11(r9)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// lbz r23,12(r9)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// lbz r9,13(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r8,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r8.u8);
	// stb r7,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r7.u8);
	// stb r6,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r6.u8);
	// stb r5,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r5.u8);
	// stb r4,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r4.u8);
	// stb r11,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r11.u8);
	// stb r10,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r10.u8);
	// stb r31,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r31.u8);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// stb r28,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r28.u8);
	// stb r26,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r26.u8);
	// stb r25,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r25.u8);
	// stb r23,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r23.u8);
	// stb r9,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r9.u8);
	// bl 0x82dad028
	ctx.lr = 0x82CE625C;
	sub_82DAD028(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bge cr6,0x82ce650c
	if (!cr6.lt) goto loc_82CE650C;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r23,2
	ctx.r23.s64 = 2;
	// addi r25,r11,14068
	ctx.r25.s64 = ctx.r11.s64 + 14068;
loc_82CE6278:
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r4,r27,-64
	ctx.r4.s64 = ctx.r27.s64 + -64;
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r29.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CE6298;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83165d78
	ctx.lr = 0x82CE62AC;
	sub_83165D78(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce62c0
	if (!cr6.lt) goto loc_82CE62C0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CE62C0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE62C8;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce62e0
	if (!cr6.eq) goto loc_82CE62E0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE62DC;
	sub_8387E8E0(ctx, base);
	// b 0x82ce64d4
	goto loc_82CE64D4;
loc_82CE62E0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82ce64fc
	if (!cr6.lt) goto loc_82CE64FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE62FC;
	sub_82D2AEC8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r25,-12
	ctx.r11.s64 = ctx.r25.s64 + -12;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r27,-48
	ctx.r4.s64 = ctx.r27.s64 + -48;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r28,r31,100
	ctx.r28.s64 = ctx.r31.s64 + 100;
	// lwzx r31,r9,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CE631C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CE632C;
	sub_82A69A28(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwzx r31,r7,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CE6344;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CE6354;
	sub_82A69A28(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r25,4
	ctx.r6.s64 = ctx.r25.s64 + 4;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwzx r31,r11,r6
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CE6370;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CE6380;
	sub_82A69A28(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
loc_82CE6388:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// blt cr6,0x82ce63a4
	if (cr6.lt) goto loc_82CE63A4;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82ce63c8
	goto loc_82CE63C8;
loc_82CE63A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82ce63b8
	if (cr6.lt) goto loc_82CE63B8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82ce63c8
	goto loc_82CE63C8;
loc_82CE63B8:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
loc_82CE63C8:
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r29.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CE63E8;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83165d78
	ctx.lr = 0x82CE63FC;
	sub_83165D78(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce6410
	if (!cr6.lt) goto loc_82CE6410;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82CE6410:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE6424;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce6470
	if (cr6.eq) goto loc_82CE6470;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// bge cr6,0x82ce6444
	if (!cr6.lt) goto loc_82CE6444;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82ce6454
	goto loc_82CE6454;
loc_82CE6444:
	// cmplwi cr6,r11,66
	cr6.compare<uint32_t>(ctx.r11.u32, 66, xer);
	// li r6,2
	ctx.r6.s64 = 2;
	// blt cr6,0x82ce6454
	if (cr6.lt) goto loc_82CE6454;
	// li r6,3
	ctx.r6.s64 = 3;
loc_82CE6454:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3d3b0
	ctx.lr = 0x82CE6464;
	sub_82D3D3B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3d548
	ctx.lr = 0x82CE6470;
	sub_82D3D548(ctx, base);
loc_82CE6470:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce648c
	if (cr6.lt) goto loc_82CE648C;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82CE648C;
	sub_825952B8(ctx, base);
loc_82CE648C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r29.u8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82ce6388
	if (cr6.lt) goto loc_82CE6388;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce64c8
	if (cr6.lt) goto loc_82CE64C8;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CE64C8;
	sub_825952B8(ctx, base);
loc_82CE64C8:
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
loc_82CE64D4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82dad028
	ctx.lr = 0x82CE64E8;
	sub_82DAD028(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ce6278
	if (cr6.lt) goto loc_82CE6278;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82CE64FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE6504;
	sub_82D2AEC8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE650C;
	sub_8387E8E0(ctx, base);
loc_82CE650C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE6514"))) PPC_WEAK_FUNC(sub_82CE6514);
PPC_FUNC_IMPL(__imp__sub_82CE6514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE6518"))) PPC_WEAK_FUNC(sub_82CE6518);
PPC_FUNC_IMPL(__imp__sub_82CE6518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CE6520;
	__savegprlr_23(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CE6530;
	sub_831156E8(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cntlzw r10,r31
	ctx.r10.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r27
	ctx.r8.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r26,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r26.u16);
	// add r24,r11,r27
	ctx.r24.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r30,104(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// sth r26,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r26.u16);
	// lwz r29,104(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 104);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x8311bf98
	ctx.lr = 0x82CE6584;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82CE6594;
	sub_831CE980(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8311bf98
	ctx.lr = 0x82CE65A0;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82CE65B0;
	sub_831CE980(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82CE65B4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce6884
	if (cr6.eq) goto loc_82CE6884;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CE65C4;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CE65C8;
	sub_83102DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CE65D4;
	sub_82D9A868(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CE65E4;
	sub_82D9A868(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r30,96(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x83179380
	ctx.lr = 0x82CE65F8;
	sub_83179380(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179380
	ctx.lr = 0x82CE6604;
	sub_83179380(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE660C;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE6614;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce6884
	if (cr6.eq) goto loc_82CE6884;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,13924
	ctx.r29.s64 = ctx.r11.s64 + 13924;
	// addi r4,r29,-104
	ctx.r4.s64 = ctx.r29.s64 + -104;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE6640;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r29,-84
	ctx.r4.s64 = ctx.r29.s64 + -84;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CE6658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce6884
	if (cr6.eq) goto loc_82CE6884;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE6670;
	sub_82D2AEC8(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r25,r31,100
	ctx.r25.s64 = ctx.r31.s64 + 100;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82dad028
	ctx.lr = 0x82CE6680;
	sub_82DAD028(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bge cr6,0x82ce6884
	if (!cr6.lt) goto loc_82CE6884;
	// li r23,15
	ctx.r23.s64 = 15;
loc_82CE6690:
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// addi r4,r29,-68
	ctx.r4.s64 = ctx.r29.s64 + -68;
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CE66B0;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83165d78
	ctx.lr = 0x82CE66C4;
	sub_83165D78(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce66d8
	if (!cr6.lt) goto loc_82CE66D8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82CE66D8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE66E0;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce687c
	if (cr6.eq) goto loc_82CE687C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE6704;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CE6720;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r7,17
	cr6.compare<uint32_t>(ctx.r7.u32, 17, xer);
	// blt cr6,0x82ce6740
	if (cr6.lt) goto loc_82CE6740;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE673C;
	sub_82D2AEC8(ctx, base);
	// b 0x82ce684c
	goto loc_82CE684C;
loc_82CE6740:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE675C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce684c
	if (cr6.eq) goto loc_82CE684C;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r29,-1548
	ctx.r11.s64 = ctx.r29.s64 + -1548;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831607b8
	ctx.lr = 0x82CE6784;
	sub_831607B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82CE6798;
	sub_82D291E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE67A0;
	sub_8387E8E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE67B0;
	sub_82D2AEC8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CE67C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce687c
	if (cr6.eq) goto loc_82CE687C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r29,-1548
	ctx.r10.s64 = ctx.r29.s64 + -1548;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82be51a8
	ctx.lr = 0x82CE67EC;
	sub_82BE51A8(ctx, base);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r29,-1548
	ctx.r7.s64 = ctx.r29.s64 + -1548;
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// bl 0x82be51a8
	ctx.lr = 0x82CE6808;
	sub_82BE51A8(ctx, base);
	// lwz r5,104(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 104);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x82ce682c
	if (!cr6.eq) goto loc_82CE682C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ce6830
	goto loc_82CE6830;
loc_82CE682C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82CE6830:
	// bl 0x82ce5410
	ctx.lr = 0x82CE6834;
	sub_82CE5410(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d45d08
	ctx.lr = 0x82CE6840;
	sub_82D45D08(ctx, base);
	// extsw r4,r28
	ctx.r4.s64 = ctx.r28.s32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d45d88
	ctx.lr = 0x82CE684C;
	sub_82D45D88(ctx, base);
loc_82CE684C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE6854;
	sub_8387E8E0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82dad028
	ctx.lr = 0x82CE6868;
	sub_82DAD028(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ce6690
	if (cr6.lt) goto loc_82CE6690;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82CE687C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE6884;
	sub_8387E8E0(ctx, base);
loc_82CE6884:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE688C"))) PPC_WEAK_FUNC(sub_82CE688C);
PPC_FUNC_IMPL(__imp__sub_82CE688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE6890"))) PPC_WEAK_FUNC(sub_82CE6890);
PPC_FUNC_IMPL(__imp__sub_82CE6890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82CE6898;
	__savegprlr_20(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CE68A8;
	sub_831156E8(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cntlzw r10,r31
	ctx.r10.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r21
	ctx.r8.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r28,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r28.u16);
	// add r24,r11,r21
	ctx.r24.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r30,104(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// sth r28,240(r1)
	PPC_STORE_U16(ctx.r1.u32 + 240, ctx.r28.u16);
	// lwz r29,104(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 104);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// bl 0x8311bf98
	ctx.lr = 0x82CE68FC;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82CE690C;
	sub_831CE980(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// bl 0x8311bf98
	ctx.lr = 0x82CE6918;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82CE6928;
	sub_831CE980(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82CE692C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce6f54
	if (cr6.eq) goto loc_82CE6F54;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CE693C;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CE6940;
	sub_83102DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CE694C;
	sub_82D9A868(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CE695C;
	sub_82D9A868(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r30,96(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x83179380
	ctx.lr = 0x82CE6970;
	sub_83179380(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179380
	ctx.lr = 0x82CE697C;
	sub_83179380(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE6984;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE698C;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce6f54
	if (cr6.eq) goto loc_82CE6F54;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r25,r11,14160
	ctx.r25.s64 = ctx.r11.s64 + 14160;
	// addi r4,r25,-220
	ctx.r4.s64 = ctx.r25.s64 + -220;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE69B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r25,-200
	ctx.r4.s64 = ctx.r25.s64 + -200;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CE69D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce6f54
	if (cr6.eq) goto loc_82CE6F54;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE69E8;
	sub_82D2AEC8(ctx, base);
	// addi r27,r25,-1860
	ctx.r27.s64 = ctx.r25.s64 + -1860;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r20,r26,100
	ctx.r20.s64 = ctx.r26.s64 + 100;
	// li r23,6
	ctx.r23.s64 = 6;
	// li r22,15
	ctx.r22.s64 = 15;
loc_82CE69FC:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r4,r25,-184
	ctx.r4.s64 = ctx.r25.s64 + -184;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CE6A1C;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83165d78
	ctx.lr = 0x82CE6A30;
	sub_83165D78(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce6a44
	if (!cr6.lt) goto loc_82CE6A44;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_82CE6A44:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE6A4C;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce6b80
	if (cr6.eq) goto loc_82CE6B80;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE6A64;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,-168
	ctx.r4.s64 = ctx.r25.s64 + -168;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE6A80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,-152
	ctx.r4.s64 = ctx.r25.s64 + -152;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CE6A9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// addi r4,r25,-132
	ctx.r4.s64 = ctx.r25.s64 + -132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CE6AB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce6b80
	if (cr6.eq) goto loc_82CE6B80;
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831607b8
	ctx.lr = 0x82CE6AD0;
	sub_831607B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82CE6AE4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE6AEC;
	sub_8387E8E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE6AFC;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r25,-116
	ctx.r4.s64 = ctx.r25.s64 + -116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE6B14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce6b80
	if (cr6.eq) goto loc_82CE6B80;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82be51a8
	ctx.lr = 0x82CE6B2C;
	sub_82BE51A8(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82be51a8
	ctx.lr = 0x82CE6B3C;
	sub_82BE51A8(ctx, base);
	// lwz r11,104(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 104);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bne cr6,0x82ce6b60
	if (!cr6.eq) goto loc_82CE6B60;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ce6b64
	goto loc_82CE6B64;
loc_82CE6B60:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82CE6B64:
	// bl 0x82ce5410
	ctx.lr = 0x82CE6B68;
	sub_82CE5410(ctx, base);
	// extsw r4,r30
	ctx.r4.s64 = ctx.r30.s32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d45d88
	ctx.lr = 0x82CE6B74;
	sub_82D45D88(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82CE6B80:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE6B88;
	sub_8387E8E0(ctx, base);
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x82ce69fc
	if (!cr0.eq) goto loc_82CE69FC;
	// addi r27,r25,-1616
	ctx.r27.s64 = ctx.r25.s64 + -1616;
	// addi r29,r25,-1648
	ctx.r29.s64 = ctx.r25.s64 + -1648;
	// li r26,4
	ctx.r26.s64 = 4;
	// li r24,2
	ctx.r24.s64 = 2;
loc_82CE6BA4:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r4,r25,-100
	ctx.r4.s64 = ctx.r25.s64 + -100;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CE6BC4;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83165d78
	ctx.lr = 0x82CE6BD8;
	sub_83165D78(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce6bec
	if (!cr6.lt) goto loc_82CE6BEC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CE6BEC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE6BF4;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce6c2c
	if (!cr6.eq) goto loc_82CE6C2C;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce6c1c
	if (cr6.lt) goto loc_82CE6C1C;
	// stw r24,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r24.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CE6C1C;
	sub_825952B8(ctx, base);
loc_82CE6C1C:
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// b 0x82ce6d88
	goto loc_82CE6D88;
loc_82CE6C2C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE6C3C;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,-84
	ctx.r4.s64 = ctx.r25.s64 + -84;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE6C58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,-68
	ctx.r4.s64 = ctx.r25.s64 + -68;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CE6C74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r25,-48
	ctx.r4.s64 = ctx.r25.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CE6C90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce6cc8
	if (!cr6.eq) goto loc_82CE6CC8;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce6cb8
	if (cr6.lt) goto loc_82CE6CB8;
	// stw r24,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r24.u32);
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CE6CB8;
	sub_825952B8(ctx, base);
loc_82CE6CB8:
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// b 0x82ce6d88
	goto loc_82CE6D88;
loc_82CE6CC8:
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x831607b8
	ctx.lr = 0x82CE6CD4;
	sub_831607B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82CE6CE8;
	sub_82D291E0(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce6d04
	if (cr6.lt) goto loc_82CE6D04;
	// stw r24,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r24.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82CE6D04;
	sub_825952B8(ctx, base);
loc_82CE6D04:
	// stw r22,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r22.u32);
	// addi r4,r25,-32
	ctx.r4.s64 = ctx.r25.s64 + -32;
	// stw r28,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r28.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE6D28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce6d80
	if (cr6.eq) goto loc_82CE6D80;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83123650
	ctx.lr = 0x82CE6D40;
	sub_83123650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x83120738
	ctx.lr = 0x82CE6D50;
	sub_83120738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82d45d08
	ctx.lr = 0x82CE6D5C;
	sub_82D45D08(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// bl 0x82d45d88
	ctx.lr = 0x82CE6D74;
	sub_82D45D88(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_82CE6D80:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE6D88;
	sub_8387E8E0(ctx, base);
loc_82CE6D88:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82ce6ba4
	if (!cr0.eq) goto loc_82CE6BA4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82CE6D9C:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r4,r25,-16
	ctx.r4.s64 = ctx.r25.s64 + -16;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CE6DBC;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83165d78
	ctx.lr = 0x82CE6DD0;
	sub_83165D78(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce6de4
	if (!cr6.lt) goto loc_82CE6DE4;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82CE6DE4:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE6DEC;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce6e10
	if (!cr6.eq) goto loc_82CE6E10;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce6e5c
	if (cr6.lt) goto loc_82CE6E5C;
	// stw r24,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// b 0x82ce6e54
	goto loc_82CE6E54;
loc_82CE6E10:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE6E20;
	sub_82D2AEC8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82ce54d8
	ctx.lr = 0x82CE6E34;
	sub_82CE54D8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// blt cr6,0x82ce6e5c
	if (cr6.lt) goto loc_82CE6E5C;
	// stw r24,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r24.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
loc_82CE6E54:
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82CE6E5C;
	sub_825952B8(ctx, base);
loc_82CE6E5C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r28.u8);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x82ce6d9c
	if (cr6.lt) goto loc_82CE6D9C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82dad028
	ctx.lr = 0x82CE6E84;
	sub_82DAD028(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bge cr6,0x82ce6f54
	if (!cr6.lt) goto loc_82CE6F54;
loc_82CE6E90:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CE6EB0;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83165d78
	ctx.lr = 0x82CE6EC4;
	sub_83165D78(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce6ed8
	if (!cr6.lt) goto loc_82CE6ED8;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_82CE6ED8:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CE6EE0;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce6f00
	if (!cr6.eq) goto loc_82CE6F00;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce6f28
	if (cr6.lt) goto loc_82CE6F28;
	// stw r24,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r24.u32);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// b 0x82ce6f20
	goto loc_82CE6F20;
loc_82CE6F00:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE6F0C;
	sub_82D2AEC8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce6f28
	if (cr6.lt) goto loc_82CE6F28;
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
loc_82CE6F20:
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82CE6F28;
	sub_825952B8(ctx, base);
loc_82CE6F28:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stb r28,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r28.u8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82dad028
	ctx.lr = 0x82CE6F48;
	sub_82DAD028(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ce6e90
	if (cr6.lt) goto loc_82CE6E90;
loc_82CE6F54:
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE6F5C"))) PPC_WEAK_FUNC(sub_82CE6F5C);
PPC_FUNC_IMPL(__imp__sub_82CE6F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE6F60"))) PPC_WEAK_FUNC(sub_82CE6F60);
PPC_FUNC_IMPL(__imp__sub_82CE6F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82CE6F68;
	__savegprlr_20(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82CE6F78:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE6F80;
	sub_82D19A78(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE6F88;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce74dc
	if (cr6.eq) goto loc_82CE74DC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82CE6FA4;
	sub_82D2B608(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82CE6FB0;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce6fec
	if (cr6.eq) goto loc_82CE6FEC;
loc_82CE6FB8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE6FC4;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce74dc
	if (cr6.eq) goto loc_82CE74DC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE6FD8;
	sub_82D2AEC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82CE6FE4;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ce6fb8
	if (cr6.lt) goto loc_82CE6FB8;
loc_82CE6FEC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// blt cr6,0x82ce6f78
	if (cr6.lt) goto loc_82CE6F78;
	// lwz r10,96(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r29,15
	ctx.r29.s64 = 15;
	// addi r28,r11,13100
	ctx.r28.s64 = ctx.r11.s64 + 13100;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bgt cr6,0x82ce7064
	if (cr6.gt) goto loc_82CE7064;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE7018;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82ce7028
	if (!cr6.eq) goto loc_82CE7028;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82CE7028:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r28,-56
	ctx.r4.s64 = ctx.r28.s64 + -56;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82CE7044;
	sub_8259CC28(ctx, base);
	// lwz r9,96(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,13952
	ctx.r10.s64 = ctx.r11.s64 + 13952;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x82a69a28
	ctx.lr = 0x82CE7064;
	sub_82A69A28(ctx, base);
loc_82CE7064:
	// bl 0x82d86078
	ctx.lr = 0x82CE7068;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce74dc
	if (cr6.eq) goto loc_82CE74DC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CE7078;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CE707C;
	sub_83102DB0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// addi r24,r26,104
	ctx.r24.s64 = ctx.r26.s64 + 104;
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r21,2
	ctx.r21.s64 = 2;
loc_82CE7090:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE7098;
	sub_82D19A78(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE70A0;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce74dc
	if (cr6.eq) goto loc_82CE74DC;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce7150
	if (!cr6.eq) goto loc_82CE7150;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r28,-1018
	ctx.r4.s64 = ctx.r28.s64 + -1018;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r27,100
	ctx.r30.s64 = ctx.r27.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82CE70D8;
	sub_8259CC28(ctx, base);
	// stw r29,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r29.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// addi r4,r28,-44
	ctx.r4.s64 = ctx.r28.s64 + -44;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8259cc28
	ctx.lr = 0x82CE70F4;
	sub_8259CC28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x82a69ad0
	ctx.lr = 0x82CE7104;
	sub_82A69AD0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE7120;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CE7138;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce74dc
	if (cr6.eq) goto loc_82CE74DC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CE714C;
	sub_82D2AEC8(ctx, base);
	// b 0x82ce74cc
	goto loc_82CE74CC;
loc_82CE7150:
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// sth r31,272(r1)
	PPC_STORE_U16(ctx.r1.u32 + 272, ctx.r31.u16);
	// bl 0x831156e8
	ctx.lr = 0x82CE715C;
	sub_831156E8(ctx, base);
	// ld r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x82CE7168;
	sub_8311BF98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CE7178;
	sub_82D9A868(ctx, base);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r4,r28,-1017
	ctx.r4.s64 = ctx.r28.s64 + -1017;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82CE7198;
	sub_8259CC28(ctx, base);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r4,r28,-986
	ctx.r4.s64 = ctx.r28.s64 + -986;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cc28
	ctx.lr = 0x82CE71B4;
	sub_8259CC28(ctx, base);
	// lbz r11,66(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 66);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce7230
	if (cr6.eq) goto loc_82CE7230;
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// addi r4,r28,-985
	ctx.r4.s64 = ctx.r28.s64 + -985;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8259cc28
	ctx.lr = 0x82CE71DC;
	sub_8259CC28(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// ori r4,r4,347
	ctx.r4.u64 = ctx.r4.u64 | 347;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d042a8
	ctx.lr = 0x82CE71F0;
	sub_82D042A8(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cb28
	ctx.lr = 0x82CE7204;
	sub_8259CB28(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce7220
	if (cr6.lt) goto loc_82CE7220;
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82CE7220;
	sub_825952B8(ctx, base);
loc_82CE7220:
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// b 0x82ce725c
	goto loc_82CE725C;
loc_82CE7230:
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CE7238:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ce7238
	if (!cr6.eq) goto loc_82CE7238;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CE725C;
	sub_8259CC28(ctx, base);
loc_82CE725C:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce735c
	if (cr6.eq) goto loc_82CE735C;
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// addi r4,r28,-955
	ctx.r4.s64 = ctx.r28.s64 + -955;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CE7284;
	sub_8259CC28(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r5,8(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// bl 0x82d042a8
	ctx.lr = 0x82CE7294;
	sub_82D042A8(ctx, base);
	// addi r5,r28,-4
	ctx.r5.s64 = ctx.r28.s64 + -4;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82ab6970
	ctx.lr = 0x82CE72A4;
	sub_82AB6970(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x825a1da8
	ctx.lr = 0x82CE72B4;
	sub_825A1DA8(ctx, base);
	// stw r29,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r29.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8292a448
	ctx.lr = 0x82CE72CC;
	sub_8292A448(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82CE72E0;
	sub_8259CB28(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce72fc
	if (cr6.lt) goto loc_82CE72FC;
	// stw r21,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82CE72FC;
	sub_825952B8(ctx, base);
loc_82CE72FC:
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// stw r29,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r29.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x82ce7324
	if (cr6.lt) goto loc_82CE7324;
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x825952b8
	ctx.lr = 0x82CE7324;
	sub_825952B8(ctx, base);
loc_82CE7324:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r29,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r29.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// blt cr6,0x82ce734c
	if (cr6.lt) goto loc_82CE734C;
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82CE734C;
	sub_825952B8(ctx, base);
loc_82CE734C:
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// b 0x82ce736c
	goto loc_82CE736C;
loc_82CE735C:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82CE736C;
	sub_8259CB28(ctx, base);
loc_82CE736C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r30,r27,100
	ctx.r30.s64 = ctx.r27.s64 + 100;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce7384
	if (!cr6.lt) goto loc_82CE7384;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82CE7384:
	// stw r29,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_82CE7394:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ce7394
	if (!cr6.eq) goto loc_82CE7394;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CE73B8;
	sub_8259CC28(ctx, base);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82CE73D4;
	sub_8259CC28(ctx, base);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CE73E4;
	sub_82A69AD0(ctx, base);
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82ce747c
	if (cr6.gt) goto loc_82CE747C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ce7420
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CE7420;
	// bdzf 4*cr6+eq,0x82ce7430
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CE7430;
	// bdzf 4*cr6+eq,0x82ce7440
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CE7440;
	// bdzf 4*cr6+eq,0x82ce7450
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CE7450;
	// bdzf 4*cr6+eq,0x82ce7460
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CE7460;
	// bne cr6,0x82ce7470
	if (!cr6.eq) goto loc_82CE7470;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce42e8
	ctx.lr = 0x82CE741C;
	sub_82CE42E8(ctx, base);
	// b 0x82ce747c
	goto loc_82CE747C;
loc_82CE7420:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce4b20
	ctx.lr = 0x82CE742C;
	sub_82CE4B20(ctx, base);
	// b 0x82ce747c
	goto loc_82CE747C;
loc_82CE7430:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce6518
	ctx.lr = 0x82CE743C;
	sub_82CE6518(ctx, base);
	// b 0x82ce747c
	goto loc_82CE747C;
loc_82CE7440:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce6890
	ctx.lr = 0x82CE744C;
	sub_82CE6890(ctx, base);
	// b 0x82ce747c
	goto loc_82CE747C;
loc_82CE7450:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce5728
	ctx.lr = 0x82CE745C;
	sub_82CE5728(ctx, base);
	// b 0x82ce747c
	goto loc_82CE747C;
loc_82CE7460:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce5d40
	ctx.lr = 0x82CE746C;
	sub_82CE5D40(ctx, base);
	// b 0x82ce747c
	goto loc_82CE747C;
loc_82CE7470:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce6128
	ctx.lr = 0x82CE747C;
	sub_82CE6128(ctx, base);
loc_82CE747C:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce7498
	if (cr6.lt) goto loc_82CE7498;
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82CE7498;
	sub_825952B8(ctx, base);
loc_82CE7498:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x82ce74c0
	if (cr6.lt) goto loc_82CE74C0;
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82CE74C0;
	sub_825952B8(ctx, base);
loc_82CE74C0:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_82CE74CC:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,12
	ctx.r24.s64 = ctx.r24.s64 + 12;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// blt cr6,0x82ce7090
	if (cr6.lt) goto loc_82CE7090;
loc_82CE74DC:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE74E4"))) PPC_WEAK_FUNC(sub_82CE74E4);
PPC_FUNC_IMPL(__imp__sub_82CE74E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE74E8"))) PPC_WEAK_FUNC(sub_82CE74E8);
PPC_FUNC_IMPL(__imp__sub_82CE74E8) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// stw r8,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r8.u32);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r9,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r9.u32);
	// stw r8,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// stw r7,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r7.u32);
	// stw r6,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r6.u32);
	// stw r5,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r5.u32);
	// bl 0x82ce6f60
	ctx.lr = 0x82CE7540;
	sub_82CE6F60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE7550"))) PPC_WEAK_FUNC(sub_82CE7550);
PPC_FUNC_IMPL(__imp__sub_82CE7550) {
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
	ctx.lr = 0x82CE756C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r4,r11,14732
	ctx.r4.s64 = ctx.r11.s64 + 14732;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE7588;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce75a8
	if (cr6.eq) goto loc_82CE75A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d908
	ctx.lr = 0x82CE759C;
	sub_82D3D908(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
loc_82CE75A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce6f60
	ctx.lr = 0x82CE75B0;
	sub_82CE6F60(ctx, base);
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CE75BC;
	sub_82D17DA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE75D4"))) PPC_WEAK_FUNC(sub_82CE75D4);
PPC_FUNC_IMPL(__imp__sub_82CE75D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE75D8"))) PPC_WEAK_FUNC(sub_82CE75D8);
PPC_FUNC_IMPL(__imp__sub_82CE75D8) {
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
	ctx.lr = 0x82CE75F4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r4,r11,14744
	ctx.r4.s64 = ctx.r11.s64 + 14744;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE7610;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce7630
	if (cr6.eq) goto loc_82CE7630;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d8a8
	ctx.lr = 0x82CE7624;
	sub_82D3D8A8(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
loc_82CE7630:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce6f60
	ctx.lr = 0x82CE7638;
	sub_82CE6F60(ctx, base);
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CE7644;
	sub_82D17DA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE765C"))) PPC_WEAK_FUNC(sub_82CE765C);
PPC_FUNC_IMPL(__imp__sub_82CE765C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE7660"))) PPC_WEAK_FUNC(sub_82CE7660);
PPC_FUNC_IMPL(__imp__sub_82CE7660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CE7668;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce774
	ctx.lr = 0x82CE7670;
	__savefpr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82CE767C;
	sub_82D19A10(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce7760
	if (cr6.eq) goto loc_82CE7760;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lfs f27,20048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f27.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f29,24552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24552);
	ctx.f29.f64 = double(temp.f32);
	// addi r26,r27,244
	ctx.r26.s64 = ctx.r27.s64 + 244;
	// lfs f30,25244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25244);
	ctx.f30.f64 = double(temp.f32);
	// addi r25,r11,16684
	ctx.r25.s64 = ctx.r11.s64 + 16684;
	// lfs f28,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f28.f64 = double(temp.f32);
loc_82CE76B8:
	// lwz r30,1768(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1768);
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r29,r9,r27
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
loc_82CE76E0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82CE76EC;
	sub_82D987F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d98478
	ctx.lr = 0x82CE76F8;
	sub_82D98478(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// fmadds f31,f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f31.f64));
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82ce76e0
	if (cr6.lt) goto loc_82CE76E0;
	// lbz r11,2657(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2657);
	// fmuls f31,f31,f29
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce771c
	if (cr6.eq) goto loc_82CE771C;
	// fmuls f31,f31,f27
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
loc_82CE771C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83815d38
	ctx.lr = 0x82CE7728;
	sub_83815D38(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83815b08
	ctx.lr = 0x82CE7734;
	sub_83815B08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82CE7740;
	sub_83815B68(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x838153c8
	ctx.lr = 0x82CE774C;
	sub_838153C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83815cb8
	ctx.lr = 0x82CE7754;
	sub_83815CB8(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,10
	cr6.compare<uint32_t>(ctx.r28.u32, 10, xer);
	// ble cr6,0x82ce76b8
	if (!cr6.gt) goto loc_82CE76B8;
loc_82CE7760:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7c0
	ctx.lr = 0x82CE776C;
	__restfpr_27(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE7770"))) PPC_WEAK_FUNC(sub_82CE7770);
PPC_FUNC_IMPL(__imp__sub_82CE7770) {
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
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// ble cr6,0x82ce7798
	if (!cr6.gt) goto loc_82CE7798;
	// bl 0x82d19a78
	ctx.lr = 0x82CE7788;
	sub_82D19A78(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r11,r11,16844
	ctx.r11.s64 = ctx.r11.s64 + 16844;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// b 0x82ce77bc
	goto loc_82CE77BC;
loc_82CE7798:
	// bge cr6,0x82ce77b0
	if (!cr6.lt) goto loc_82CE77B0;
	// bl 0x82d19a78
	ctx.lr = 0x82CE77A0;
	sub_82D19A78(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r11,r11,16844
	ctx.r11.s64 = ctx.r11.s64 + 16844;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x82ce77bc
	goto loc_82CE77BC;
loc_82CE77B0:
	// bl 0x82d19a78
	ctx.lr = 0x82CE77B4;
	sub_82D19A78(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r4,r11,16844
	ctx.r4.s64 = ctx.r11.s64 + 16844;
loc_82CE77BC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE77D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE77E0"))) PPC_WEAK_FUNC(sub_82CE77E0);
PPC_FUNC_IMPL(__imp__sub_82CE77E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE77E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE77FC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE7814;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce7894
	if (cr6.eq) goto loc_82CE7894;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// ble cr6,0x82ce784c
	if (!cr6.gt) goto loc_82CE784C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,16892
	ctx.r11.s64 = ctx.r9.s64 + 16892;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CE7844;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CE784C:
	// bge cr6,0x82ce7878
	if (!cr6.lt) goto loc_82CE7878;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,16892
	ctx.r11.s64 = ctx.r9.s64 + 16892;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CE7870;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CE7878:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,16892
	ctx.r4.s64 = ctx.r10.s64 + 16892;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CE7894;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CE7894:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE789C"))) PPC_WEAK_FUNC(sub_82CE789C);
PPC_FUNC_IMPL(__imp__sub_82CE789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE78A0"))) PPC_WEAK_FUNC(sub_82CE78A0);
PPC_FUNC_IMPL(__imp__sub_82CE78A0) {
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
	// bl 0x82d19ba0
	ctx.lr = 0x82CE78B8;
	sub_82D19BA0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 & ctx.r10.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82CE78D0;
	sub_82D19BB0(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// and r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 & ctx.r3.u64;
	// bgt cr6,0x82ce7910
	if (cr6.gt) goto loc_82CE7910;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x82ce7910
	if (cr6.eq) goto loc_82CE7910;
	// bdz 0x82ce78fc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CE78FC;
	// bdz 0x82ce7904
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CE7904;
	// b 0x82ce7910
	goto loc_82CE7910;
loc_82CE78FC:
	// subfic r3,r11,10
	xer.ca = ctx.r11.u32 <= 10;
	ctx.r3.s64 = 10 - ctx.r11.s64;
	// b 0x82ce7908
	goto loc_82CE7908;
loc_82CE7904:
	// addi r3,r11,11
	ctx.r3.s64 = ctx.r11.s64 + 11;
loc_82CE7908:
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// blt cr6,0x82ce7914
	if (cr6.lt) goto loc_82CE7914;
loc_82CE7910:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CE7914:
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

__attribute__((alias("__imp__sub_82CE7928"))) PPC_WEAK_FUNC(sub_82CE7928);
PPC_FUNC_IMPL(__imp__sub_82CE7928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CE7930;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE793C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r30,r11,15528
	ctx.r30.s64 = ctx.r11.s64 + 15528;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE795C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce7a84
	if (cr6.eq) goto loc_82CE7A84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE7970;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE7988;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce7a84
	if (cr6.eq) goto loc_82CE7A84;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,2860
	ctx.r4.s64 = ctx.r30.s64 + 2860;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE79A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce7a84
	if (cr6.eq) goto loc_82CE7A84;
	// bl 0x82d28258
	ctx.lr = 0x82CE79B8;
	sub_82D28258(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d28268
	ctx.lr = 0x82CE79C0;
	sub_82D28268(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CE79C4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE79D0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce7a84
	if (cr6.eq) goto loc_82CE7A84;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,2872
	ctx.r4.s64 = ctx.r30.s64 + 2872;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE79F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce7a08
	if (cr6.eq) goto loc_82CE7A08;
	// bl 0x82d28258
	ctx.lr = 0x82CE7A00;
	sub_82D28258(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d28268
	ctx.lr = 0x82CE7A08;
	sub_82D28268(ctx, base);
loc_82CE7A08:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,10
	cr6.compare<uint32_t>(ctx.r29.u32, 10, xer);
	// ble cr6,0x82ce79c4
	if (!cr6.gt) goto loc_82CE79C4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82CE7A1C;
	sub_82D19BA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce7a34
	if (!cr6.eq) goto loc_82CE7A34;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d28248
	ctx.lr = 0x82CE7A2C;
	sub_82D28248(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CE7A34:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82CE7A3C;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82ce7a84
	if (!cr6.eq) goto loc_82CE7A84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82CE7A4C;
	sub_82D19BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE7A58;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce7a84
	if (cr6.eq) goto loc_82CE7A84;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,2884
	ctx.r4.s64 = ctx.r30.s64 + 2884;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE7A78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce7a84
	if (cr6.eq) goto loc_82CE7A84;
	// bl 0x82d28248
	ctx.lr = 0x82CE7A84;
	sub_82D28248(ctx, base);
loc_82CE7A84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE7A8C"))) PPC_WEAK_FUNC(sub_82CE7A8C);
PPC_FUNC_IMPL(__imp__sub_82CE7A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE7A90"))) PPC_WEAK_FUNC(sub_82CE7A90);
PPC_FUNC_IMPL(__imp__sub_82CE7A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r3,r3,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r31,3
	ctx.r31.s64 = 3;
loc_82CE7AB4:
	// li r8,11
	ctx.r8.s64 = 11;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82CE7AC8:
	// lbzx r8,r9,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82ce7ac8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CE7AC8;
	// li r7,11
	ctx.r7.s64 = 11;
	// addi r8,r10,9
	ctx.r8.s64 = ctx.r10.s64 + 9;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_82CE7AE8:
	// lbzx r6,r9,r5
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lbzu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// stb r7,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r7.u8);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x82ce7ae8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CE7AE8;
	// li r8,11
	ctx.r8.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r10,33
	ctx.r7.s64 = ctx.r10.s64 + 33;
	// addi r6,r11,33
	ctx.r6.s64 = ctx.r11.s64 + 33;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82CE7B14:
	// lbzx r8,r7,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stbx r8,r6,r9
	PPC_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82ce7b14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CE7B14;
	// li r7,11
	ctx.r7.s64 = 11;
	// addi r8,r10,42
	ctx.r8.s64 = ctx.r10.s64 + 42;
	// addi r9,r11,45
	ctx.r9.s64 = ctx.r11.s64 + 45;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_82CE7B34:
	// lbzx r6,r5,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// lbzu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// stb r7,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r7.u8);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x82ce7b34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CE7B34;
	// li r8,11
	ctx.r8.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r10,66
	ctx.r7.s64 = ctx.r10.s64 + 66;
	// addi r6,r11,66
	ctx.r6.s64 = ctx.r11.s64 + 66;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82CE7B60:
	// lbzx r8,r7,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stbx r8,r6,r9
	PPC_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82ce7b60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CE7B60;
	// li r7,11
	ctx.r7.s64 = 11;
	// addi r8,r10,75
	ctx.r8.s64 = ctx.r10.s64 + 75;
	// addi r9,r11,78
	ctx.r9.s64 = ctx.r11.s64 + 78;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_82CE7B80:
	// lbzx r6,r5,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// lbzu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// stb r7,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r7.u8);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x82ce7b80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CE7B80;
	// lbz r5,99(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 99);
	// li r8,11
	ctx.r8.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r10,145
	ctx.r7.s64 = ctx.r10.s64 + 145;
	// addi r6,r11,145
	ctx.r6.s64 = ctx.r11.s64 + 145;
	// stb r5,99(r11)
	PPC_STORE_U8(ctx.r11.u32 + 99, ctx.r5.u8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lbz r8,100(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 100);
	// stb r8,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r8.u8);
	// lbz r5,101(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 101);
	// stb r5,101(r11)
	PPC_STORE_U8(ctx.r11.u32 + 101, ctx.r5.u8);
	// lbz r8,102(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 102);
	// stb r8,102(r11)
	PPC_STORE_U8(ctx.r11.u32 + 102, ctx.r8.u8);
	// lbz r5,103(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 103);
	// stb r5,103(r11)
	PPC_STORE_U8(ctx.r11.u32 + 103, ctx.r5.u8);
	// lbz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 104);
	// stb r8,104(r11)
	PPC_STORE_U8(ctx.r11.u32 + 104, ctx.r8.u8);
	// lbz r5,105(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 105);
	// stb r5,105(r11)
	PPC_STORE_U8(ctx.r11.u32 + 105, ctx.r5.u8);
	// lwz r8,108(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// stw r8,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r8.u32);
	// lwz r5,112(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// stw r5,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r5.u32);
	// lwz r8,116(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// stw r8,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r8.u32);
	// lwz r5,120(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// stw r5,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r5.u32);
	// lwz r8,124(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// stw r8,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r8.u32);
	// lwz r5,128(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// stw r5,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r5.u32);
	// lwz r8,132(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// stw r8,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r8.u32);
	// lwz r5,136(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// stw r5,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r5.u32);
	// lbz r8,140(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 140);
	// stb r8,140(r11)
	PPC_STORE_U8(ctx.r11.u32 + 140, ctx.r8.u8);
	// lbz r5,141(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 141);
	// stb r5,141(r11)
	PPC_STORE_U8(ctx.r11.u32 + 141, ctx.r5.u8);
	// lbz r8,142(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 142);
	// stb r8,142(r11)
	PPC_STORE_U8(ctx.r11.u32 + 142, ctx.r8.u8);
	// lbz r5,143(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 143);
	// stb r5,143(r11)
	PPC_STORE_U8(ctx.r11.u32 + 143, ctx.r5.u8);
	// lbz r8,144(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 144);
	// stb r8,144(r11)
	PPC_STORE_U8(ctx.r11.u32 + 144, ctx.r8.u8);
loc_82CE7C4C:
	// lbzx r8,r7,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stbx r8,r6,r9
	PPC_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82ce7c4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CE7C4C;
	// lbz r10,156(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 156);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stb r10,156(r11)
	PPC_STORE_U8(ctx.r11.u32 + 156, ctx.r10.u8);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// bne 0x82ce7ab4
	if (!cr0.eq) goto loc_82CE7AB4;
	// addi r4,r4,480
	ctx.r4.s64 = ctx.r4.s64 + 480;
	// addi r3,r30,480
	ctx.r3.s64 = ctx.r30.s64 + 480;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82CE7C80;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_82CE7C9C"))) PPC_WEAK_FUNC(sub_82CE7C9C);
PPC_FUNC_IMPL(__imp__sub_82CE7C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE7CA0"))) PPC_WEAK_FUNC(sub_82CE7CA0);
PPC_FUNC_IMPL(__imp__sub_82CE7CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CE7CA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CE7CB4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce7d40
	if (cr6.eq) goto loc_82CE7D40;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CE7CC4;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CE7CC8;
	sub_83102DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r31,244
	ctx.r28.s64 = ctx.r31.s64 + 244;
loc_82CE7CD4:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,100(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// bl 0x82d9a868
	ctx.lr = 0x82CE7D08;
	sub_82D9A868(ctx, base);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,111
	ctx.r4.s64 = ctx.r11.s64 + 111;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82d996b0
	ctx.lr = 0x82CE7D34;
	sub_82D996B0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// blt cr6,0x82ce7cd4
	if (cr6.lt) goto loc_82CE7CD4;
loc_82CE7D40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE7D48"))) PPC_WEAK_FUNC(sub_82CE7D48);
PPC_FUNC_IMPL(__imp__sub_82CE7D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r3,104
	ctx.r9.s64 = ctx.r3.s64 + 104;
loc_82CE7D50:
	// cmplwi cr6,r4,19
	cr6.compare<uint32_t>(ctx.r4.u32, 19, xer);
	// bne cr6,0x82ce7d5c
	if (!cr6.eq) goto loc_82CE7D5C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82CE7D5C:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82CE7D64:
	// cmplwi cr6,r10,18
	cr6.compare<uint32_t>(ctx.r10.u32, 18, xer);
	// bge cr6,0x82ce7d8c
	if (!cr6.lt) goto loc_82CE7D8C;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ce7d84
	if (cr6.eq) goto loc_82CE7D84;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82ce7d64
	goto loc_82CE7D64;
loc_82CE7D84:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82ce7d50
	goto loc_82CE7D50;
loc_82CE7D8C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE7D94"))) PPC_WEAK_FUNC(sub_82CE7D94);
PPC_FUNC_IMPL(__imp__sub_82CE7D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE7D98"))) PPC_WEAK_FUNC(sub_82CE7D98);
PPC_FUNC_IMPL(__imp__sub_82CE7D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE7DA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8308e078
	ctx.lr = 0x82CE7DAC;
	sub_8308E078(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x82CE7DB8;
	sub_8353B168(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce7f1c
	if (cr6.eq) goto loc_82CE7F1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,37
	ctx.r4.s64 = 37;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE7DD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ce7e9c
	if (!cr6.eq) goto loc_82CE7E9C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE7DFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ce7e9c
	if (!cr6.eq) goto loc_82CE7E9C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE7E20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ce7e9c
	if (!cr6.eq) goto loc_82CE7E9C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE7E44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ce7e9c
	if (!cr6.eq) goto loc_82CE7E9C;
	// lbz r11,2656(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2656);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce7f1c
	if (cr6.eq) goto loc_82CE7F1C;
loc_82CE7E5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,2656(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2656, ctx.r11.u8);
	// bl 0x82d19bb0
	ctx.lr = 0x82CE7E70;
	sub_82D19BB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82CE7E7C;
	sub_82D19BA0(ctx, base);
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE7E94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CE7E9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82CE7EA4;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce7f1c
	if (!cr6.eq) goto loc_82CE7F1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,2656(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2656, ctx.r11.u8);
	// bl 0x82d19ba0
	ctx.lr = 0x82CE7EC0;
	sub_82D19BA0(ctx, base);
	// lwz r10,2644(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2644);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x82ce7efc
	if (!cr6.eq) goto loc_82CE7EFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82CE7ED4;
	sub_82D19BB0(ctx, base);
	// lwz r11,2648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2648);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82ce7efc
	if (!cr6.eq) goto loc_82CE7EFC;
	// lwz r11,2652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2652);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bgt cr6,0x82ce7e5c
	if (cr6.gt) goto loc_82CE7E5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2652, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CE7EFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82CE7F04;
	sub_82D19BA0(ctx, base);
	// stw r3,2644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2644, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82CE7F10;
	sub_82D19BB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,2648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2648, ctx.r3.u32);
	// stw r11,2652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2652, ctx.r11.u32);
loc_82CE7F1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE7F24"))) PPC_WEAK_FUNC(sub_82CE7F24);
PPC_FUNC_IMPL(__imp__sub_82CE7F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE7F28"))) PPC_WEAK_FUNC(sub_82CE7F28);
PPC_FUNC_IMPL(__imp__sub_82CE7F28) {
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
	ctx.lr = 0x82CE7F44;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce8014
	if (cr6.eq) goto loc_82CE8014;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CE7F54;
	sub_82DAB6D0(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce7f94
	if (!cr6.eq) goto loc_82CE7F94;
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,1716(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1716);
	// bl 0x82d97540
	ctx.lr = 0x82CE7F78;
	sub_82D97540(ctx, base);
	// lwz r9,1768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,1716(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1716);
	// bl 0x82d97530
	ctx.lr = 0x82CE7F90;
	sub_82D97530(ctx, base);
	// b 0x82ce8014
	goto loc_82CE8014;
loc_82CE7F94:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ce8014
	if (!cr6.eq) goto loc_82CE8014;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce78a0
	ctx.lr = 0x82CE7FA4;
	sub_82CE78A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bne cr6,0x82ce7fc4
	if (!cr6.eq) goto loc_82CE7FC4;
	// lwz r31,1756(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// b 0x82ce7ffc
	goto loc_82CE7FFC;
loc_82CE7FC4:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r31,100(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x83a7a980
	ctx.lr = 0x82CE7FFC;
	sub_83A7A980(ctx, base);
loc_82CE7FFC:
	// bl 0x82f00728
	ctx.lr = 0x82CE8000;
	sub_82F00728(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r11,92(r3)
	PPC_STORE_U64(ctx.r3.u32 + 92, ctx.r11.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832f8
	ctx.lr = 0x82CE8014;
	sub_825832F8(ctx, base);
loc_82CE8014:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE802C"))) PPC_WEAK_FUNC(sub_82CE802C);
PPC_FUNC_IMPL(__imp__sub_82CE802C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE8030"))) PPC_WEAK_FUNC(sub_82CE8030);
PPC_FUNC_IMPL(__imp__sub_82CE8030) {
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
	// li r10,33
	ctx.r10.s64 = 33;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r8,32
	ctx.r8.s64 = 32;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r9,13
	ctx.r9.s64 = 13;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82CE8064:
	// stb r31,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r31.u8);
	// stb r31,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r31.u8);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82ce8064
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CE8064;
	// li r5,528
	ctx.r5.s64 = 528;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82CE808C;
	sub_831CDCF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE80AC"))) PPC_WEAK_FUNC(sub_82CE80AC);
PPC_FUNC_IMPL(__imp__sub_82CE80AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE80B0"))) PPC_WEAK_FUNC(sub_82CE80B0);
PPC_FUNC_IMPL(__imp__sub_82CE80B0) {
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
	ctx.lr = 0x82CE80B8;
	__savegprlr_27(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8308e078
	ctx.lr = 0x82CE80D0;
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
	ctx.lr = 0x82CE80E8;
	sub_82D253F8(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r10,18560
	ctx.r8.s64 = ctx.r10.s64 + 18560;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r27,r31,100
	ctx.r27.s64 = ctx.r31.s64 + 100;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
loc_82CE8118:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stbu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82ce8118
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CE8118;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x82d997d8
	ctx.lr = 0x82CE812C;
	sub_82D997D8(ctx, base);
	// li r9,54
	ctx.r9.s64 = 54;
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r29,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r29.u32);
	// li r8,18
	ctx.r8.s64 = 18;
	// stw r30,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r30.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// stw r8,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r8.u32);
	// addi r11,r31,1772
	ctx.r11.s64 = ctx.r31.s64 + 1772;
	// stw r30,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r30.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r10,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r10.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r30,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r30.u32);
	// stw r10,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r10.u32);
	// stw r30,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r30.u32);
	// stw r30,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r30.u32);
	// stw r30,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r30.u32);
loc_82CE817C:
	// stb r30,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r30.u8);
	// stb r30,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r30.u8);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r9,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82ce817c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CE817C;
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r30,2656(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2656, ctx.r30.u8);
	// stb r30,2657(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2657, ctx.r30.u8);
	// addi r3,r31,2661
	ctx.r3.s64 = ctx.r31.s64 + 2661;
	// stw r11,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r11.u32);
	// stb r30,2658(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2658, ctx.r30.u8);
	// stb r30,2659(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2659, ctx.r30.u8);
	// stb r30,2660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2660, ctx.r30.u8);
	// bl 0x82dd6420
	ctx.lr = 0x82CE81B8;
	sub_82DD6420(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r31,2672
	ctx.r28.s64 = ctx.r31.s64 + 2672;
	// stb r30,2664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2664, ctx.r30.u8);
	// li r29,2
	ctx.r29.s64 = 2;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2668, temp.u32);
loc_82CE81D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce8030
	ctx.lr = 0x82CE81D8;
	sub_82CE8030(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,532
	ctx.r28.s64 = ctx.r28.s64 + 532;
	// bge 0x82ce81d0
	if (!cr0.lt) goto loc_82CE81D0;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,1712
	ctx.r11.s64 = ctx.r31.s64 + 1712;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82CE81F4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82ce81f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CE81F4;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82CE820C;
	sub_831CDCF0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,2652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2652, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2644, ctx.r11.u32);
	// stw r11,2648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2648, ctx.r11.u32);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r30,r11,14312
	ctx.r30.s64 = ctx.r11.s64 + 14312;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE8230;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE823C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE8248;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE8254;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE8260;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE826C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE8278;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE8284;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x82d20ae0
	ctx.lr = 0x82CE8290;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x82d23390
	ctx.lr = 0x82CE82A0;
	sub_82D23390(ctx, base);
	// bl 0x82d8a7c8
	ctx.lr = 0x82CE82A4;
	sub_82D8A7C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce82c4
	if (cr6.eq) goto loc_82CE82C4;
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82ce82c4
	if (cr6.eq) goto loc_82CE82C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r11.u32);
loc_82CE82C4:
	// bl 0x82d86078
	ctx.lr = 0x82CE82C8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce83f8
	if (cr6.eq) goto loc_82CE83F8;
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce8308
	if (cr6.eq) goto loc_82CE8308;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE82E4;
	sub_831F8200(ctx, base);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce8308
	if (!cr6.eq) goto loc_82CE8308;
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,109
	ctx.r5.u64 = ctx.r5.u64 | 109;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82CE8304;
	sub_82D20EB8(ctx, base);
	// b 0x82ce8368
	goto loc_82CE8368;
loc_82CE8308:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CE8318;
	sub_82D19788(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d20eb8
	ctx.lr = 0x82CE8328;
	sub_82D20EB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CE8338;
	sub_82D19788(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,205
	ctx.r5.u64 = ctx.r5.u64 | 205;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82CE834C;
	sub_82D20EB8(ctx, base);
	// li r4,69
	ctx.r4.s64 = 69;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82CE8358;
	sub_82D1A998(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CE8368;
	sub_82D19788(ctx, base);
loc_82CE8368:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CE8378;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CE8388;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CE8398;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CE83A8;
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
	ctx.lr = 0x82CE83BC;
	sub_82D20EB8(ctx, base);
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82ce83e0
	if (!cr6.eq) goto loc_82CE83E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CE83E0;
	sub_82D19788(ctx, base);
loc_82CE83E0:
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82ce83fc
	if (!cr6.eq) goto loc_82CE83FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19720
	ctx.lr = 0x82CE83F8;
	sub_82D19720(ctx, base);
loc_82CE83F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CE83FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE8404"))) PPC_WEAK_FUNC(sub_82CE8404);
PPC_FUNC_IMPL(__imp__sub_82CE8404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE8408"))) PPC_WEAK_FUNC(sub_82CE8408);
PPC_FUNC_IMPL(__imp__sub_82CE8408) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,18560
	ctx.r9.s64 = ctx.r11.s64 + 18560;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x838760e0
	ctx.lr = 0x82CE8444;
	sub_838760E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82CE844C;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ce8464
	if (cr6.eq) goto loc_82CE8464;
	// bl 0x82416268
	ctx.lr = 0x82CE8460;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CE8464:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE847C"))) PPC_WEAK_FUNC(sub_82CE847C);
PPC_FUNC_IMPL(__imp__sub_82CE847C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE8480"))) PPC_WEAK_FUNC(sub_82CE8480);
PPC_FUNC_IMPL(__imp__sub_82CE8480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CE8488;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CE8494;
	sub_82D86078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce8788
	if (cr6.eq) goto loc_82CE8788;
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce8720
	if (!cr6.eq) goto loc_82CE8720;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x825832d8
	ctx.lr = 0x82CE84B8;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CE84BC;
	sub_82D99C08(ctx, base);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,1716(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1716);
	// bl 0x82d9a978
	ctx.lr = 0x82CE84D4;
	sub_82D9A978(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99ff0
	ctx.lr = 0x82CE84E0;
	sub_82D99FF0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x82ce84fc
	if (cr6.eq) goto loc_82CE84FC;
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE84F0;
	sub_831F8200(ctx, base);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce8500
	if (cr6.eq) goto loc_82CE8500;
loc_82CE84FC:
	// li r30,2
	ctx.r30.s64 = 2;
loc_82CE8500:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r5,264
	ctx.r5.s64 = 17301504;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r3,r11,18096
	ctx.r3.s64 = ctx.r11.s64 + 18096;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r5,8195
	ctx.r5.u64 = ctx.r5.u64 | 8195;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c21960
	ctx.lr = 0x82CE8524;
	sub_82C21960(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce8788
	if (cr6.eq) goto loc_82CE8788;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,14312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14312);
	// bl 0x82c21bb8
	ctx.lr = 0x82CE853C;
	sub_82C21BB8(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,335
	ctx.r5.u64 = ctx.r5.u64 | 335;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21c28
	ctx.lr = 0x82CE8550;
	sub_82C21C28(ctx, base);
	// lwz r10,1768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ori r5,r5,211
	ctx.r5.u64 = ctx.r5.u64 | 211;
	// beq cr6,0x82ce856c
	if (cr6.eq) goto loc_82CE856C;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,505
	ctx.r5.u64 = ctx.r5.u64 | 505;
loc_82CE856C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8578;
	sub_82C21CB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99ff0
	ctx.lr = 0x82CE8580;
	sub_82D99FF0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x82ce859c
	if (cr6.eq) goto loc_82CE859C;
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE8590;
	sub_831F8200(ctx, base);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce85ac
	if (cr6.eq) goto loc_82CE85AC;
loc_82CE859C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE85AC;
	sub_82C20F50(ctx, base);
loc_82CE85AC:
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,506
	ctx.r5.u64 = ctx.r5.u64 | 506;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE85C0;
	sub_82C21CB0(ctx, base);
	// lis r5,29
	ctx.r5.s64 = 1900544;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,179
	ctx.r5.u64 = ctx.r5.u64 | 179;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE85D4;
	sub_82C21CB0(ctx, base);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce85f0
	if (cr6.eq) goto loc_82CE85F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE85F0;
	sub_82C20F50(ctx, base);
loc_82CE85F0:
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,4
	ctx.r4.s64 = 4;
	// ori r5,r5,400
	ctx.r5.u64 = ctx.r5.u64 | 400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8604;
	sub_82C21CB0(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,5
	ctx.r4.s64 = 5;
	// ori r5,r5,624
	ctx.r5.u64 = ctx.r5.u64 | 624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21c28
	ctx.lr = 0x82CE8618;
	sub_82C21C28(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE865C;
	sub_831F8200(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82d9f020
	ctx.lr = 0x82CE8668;
	sub_82D9F020(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE8678;
	sub_831F8200(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82d9f020
	ctx.lr = 0x82CE8684;
	sub_82D9F020(ctx, base);
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// ori r7,r7,648
	ctx.r7.u64 = ctx.r7.u64 | 648;
	// ori r5,r5,556
	ctx.r5.u64 = ctx.r5.u64 | 556;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21d38
	ctx.lr = 0x82CE86A4;
	sub_82C21D38(ctx, base);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ce86c0
	if (!cr6.eq) goto loc_82CE86C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE86C0;
	sub_82C20F50(ctx, base);
loc_82CE86C0:
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r7,r7,649
	ctx.r7.u64 = ctx.r7.u64 | 649;
	// ori r5,r5,557
	ctx.r5.u64 = ctx.r5.u64 | 557;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21d38
	ctx.lr = 0x82CE86E0;
	sub_82C21D38(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce86fc
	if (!cr6.eq) goto loc_82CE86FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE86FC;
	sub_82C20F50(ctx, base);
loc_82CE86FC:
	// stw r29,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82CE870C;
	sub_83103100(ctx, base);
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CE8718;
	sub_82D17DA0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CE8720:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ce877c
	if (!cr6.eq) goto loc_82CE877C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce78a0
	ctx.lr = 0x82CE8730;
	sub_82CE78A0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ce8788
	if (cr6.eq) goto loc_82CE8788;
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,288(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 288);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r5,r11,111
	ctx.r5.s64 = ctx.r11.s64 + 111;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r4,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,100(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// bctrl 
	ctx.lr = 0x82CE877C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CE877C:
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CE8788;
	sub_82D17DA0(ctx, base);
loc_82CE8788:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE8790"))) PPC_WEAK_FUNC(sub_82CE8790);
PPC_FUNC_IMPL(__imp__sub_82CE8790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CE8798;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r5,264
	ctx.r5.s64 = 17301504;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r11,18112
	ctx.r3.s64 = ctx.r11.s64 + 18112;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r5,8195
	ctx.r5.u64 = ctx.r5.u64 | 8195;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c21960
	ctx.lr = 0x82CE87C8;
	sub_82C21960(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce8acc
	if (cr6.eq) goto loc_82CE8ACC;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,14312
	ctx.r10.s64 = ctx.r11.s64 + 14312;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82c21bb8
	ctx.lr = 0x82CE87E4;
	sub_82C21BB8(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,335
	ctx.r5.u64 = ctx.r5.u64 | 335;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21c28
	ctx.lr = 0x82CE87F8;
	sub_82C21C28(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82ce8aac
	if (cr6.eq) goto loc_82CE8AAC;
	// lis r5,60
	ctx.r5.s64 = 3932160;
	// ori r5,r5,82
	ctx.r5.u64 = ctx.r5.u64 | 82;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8814;
	sub_82C21CB0(ctx, base);
	// lis r5,29
	ctx.r5.s64 = 1900544;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,262
	ctx.r5.u64 = ctx.r5.u64 | 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8828;
	sub_82C21CB0(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,209
	ctx.r5.u64 = ctx.r5.u64 | 209;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE883C;
	sub_82C21CB0(ctx, base);
	// lis r5,29
	ctx.r5.s64 = 1900544;
	// li r4,4
	ctx.r4.s64 = 4;
	// ori r5,r5,179
	ctx.r5.u64 = ctx.r5.u64 | 179;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8850;
	sub_82C21CB0(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,5
	ctx.r4.s64 = 5;
	// ori r5,r5,422
	ctx.r5.u64 = ctx.r5.u64 | 422;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8864;
	sub_82C21CB0(ctx, base);
	// lis r5,29
	ctx.r5.s64 = 1900544;
	// li r4,6
	ctx.r4.s64 = 6;
	// ori r5,r5,193
	ctx.r5.u64 = ctx.r5.u64 | 193;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8878;
	sub_82C21CB0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// bl 0x82d86078
	ctx.lr = 0x82CE88AC;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce8acc
	if (cr6.eq) goto loc_82CE8ACC;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE88C8;
	sub_831F8200(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82d9f020
	ctx.lr = 0x82CE88D4;
	sub_82D9F020(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE88E4;
	sub_831F8200(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82d9f020
	ctx.lr = 0x82CE88F0;
	sub_82D9F020(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,7
	ctx.r4.s64 = 7;
	// ori r5,r5,624
	ctx.r5.u64 = ctx.r5.u64 | 624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21c28
	ctx.lr = 0x82CE8904;
	sub_82C21C28(ctx, base);
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// ori r7,r7,646
	ctx.r7.u64 = ctx.r7.u64 | 646;
	// ori r5,r5,165
	ctx.r5.u64 = ctx.r5.u64 | 165;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21d38
	ctx.lr = 0x82CE8924;
	sub_82C21D38(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ce8940
	if (!cr6.eq) goto loc_82CE8940;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8940;
	sub_82C20F50(ctx, base);
loc_82CE8940:
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r7,r7,647
	ctx.r7.u64 = ctx.r7.u64 | 647;
	// ori r5,r5,414
	ctx.r5.u64 = ctx.r5.u64 | 414;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21d38
	ctx.lr = 0x82CE8960;
	sub_82C21D38(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce897c
	if (!cr6.eq) goto loc_82CE897C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE897C;
	sub_82C20F50(ctx, base);
loc_82CE897C:
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE8984;
	sub_831F8200(ctx, base);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce89d0
	if (cr6.eq) goto loc_82CE89D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE89A0;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE89B0;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE89C0;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE89D0;
	sub_82C20F50(ctx, base);
loc_82CE89D0:
	// bl 0x82db7320
	ctx.lr = 0x82CE89D4;
	sub_82DB7320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce8a30
	if (cr6.eq) goto loc_82CE8A30;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE89F0;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8A00;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8A10;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8A20;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8A30;
	sub_82C20F50(ctx, base);
loc_82CE8A30:
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CE8A38;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CE8A3C;
	sub_83102DB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CE8A44;
	sub_82D9A868(ctx, base);
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce8a84
	if (cr6.eq) goto loc_82CE8A84;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8A64;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8A74;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8A84;
	sub_82C20F50(ctx, base);
loc_82CE8A84:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// subfic r10,r11,100
	xer.ca = ctx.r11.u32 <= 100;
	ctx.r10.s64 = 100 - ctx.r11.s64;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// bne cr6,0x82ce8aa4
	if (!cr6.eq) goto loc_82CE8AA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8AA4;
	sub_82C20F50(ctx, base);
loc_82CE8AA4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82ce8abc
	goto loc_82CE8ABC;
loc_82CE8AAC:
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,208
	ctx.r5.u64 = ctx.r5.u64 | 208;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8AB8;
	sub_82C21CB0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
loc_82CE8ABC:
	// stw r11,2640(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2640, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83103100
	ctx.lr = 0x82CE8ACC;
	sub_83103100(ctx, base);
loc_82CE8ACC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE8AD4"))) PPC_WEAK_FUNC(sub_82CE8AD4);
PPC_FUNC_IMPL(__imp__sub_82CE8AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE8AD8"))) PPC_WEAK_FUNC(sub_82CE8AD8);
PPC_FUNC_IMPL(__imp__sub_82CE8AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CE8AE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r5,264
	ctx.r5.s64 = 17301504;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r11,18128
	ctx.r3.s64 = ctx.r11.s64 + 18128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r5,8195
	ctx.r5.u64 = ctx.r5.u64 | 8195;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c21960
	ctx.lr = 0x82CE8B10;
	sub_82C21960(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce8d78
	if (cr6.eq) goto loc_82CE8D78;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,14312
	ctx.r10.s64 = ctx.r11.s64 + 14312;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82c21bb8
	ctx.lr = 0x82CE8B2C;
	sub_82C21BB8(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,335
	ctx.r5.u64 = ctx.r5.u64 | 335;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21c28
	ctx.lr = 0x82CE8B40;
	sub_82C21C28(ctx, base);
	// lis r5,60
	ctx.r5.s64 = 3932160;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,82
	ctx.r5.u64 = ctx.r5.u64 | 82;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8B54;
	sub_82C21CB0(ctx, base);
	// lis r5,29
	ctx.r5.s64 = 1900544;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,179
	ctx.r5.u64 = ctx.r5.u64 | 179;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8B68;
	sub_82C21CB0(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,422
	ctx.r5.u64 = ctx.r5.u64 | 422;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8B7C;
	sub_82C21CB0(ctx, base);
	// lis r5,29
	ctx.r5.s64 = 1900544;
	// li r4,4
	ctx.r4.s64 = 4;
	// ori r5,r5,193
	ctx.r5.u64 = ctx.r5.u64 | 193;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8B90;
	sub_82C21CB0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// bl 0x82d86078
	ctx.lr = 0x82CE8BC4;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce8d78
	if (cr6.eq) goto loc_82CE8D78;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE8BE0;
	sub_831F8200(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82d9f020
	ctx.lr = 0x82CE8BEC;
	sub_82D9F020(ctx, base);
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE8BFC;
	sub_831F8200(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82d9f020
	ctx.lr = 0x82CE8C08;
	sub_82D9F020(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,5
	ctx.r4.s64 = 5;
	// ori r5,r5,624
	ctx.r5.u64 = ctx.r5.u64 | 624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21c28
	ctx.lr = 0x82CE8C1C;
	sub_82C21C28(ctx, base);
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// ori r7,r7,646
	ctx.r7.u64 = ctx.r7.u64 | 646;
	// ori r5,r5,165
	ctx.r5.u64 = ctx.r5.u64 | 165;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21d38
	ctx.lr = 0x82CE8C3C;
	sub_82C21D38(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce8c58
	if (!cr6.eq) goto loc_82CE8C58;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8C58;
	sub_82C20F50(ctx, base);
loc_82CE8C58:
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r7,r7,647
	ctx.r7.u64 = ctx.r7.u64 | 647;
	// ori r5,r5,414
	ctx.r5.u64 = ctx.r5.u64 | 414;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c21d38
	ctx.lr = 0x82CE8C78;
	sub_82C21D38(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce8c94
	if (!cr6.eq) goto loc_82CE8C94;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8C94;
	sub_82C20F50(ctx, base);
loc_82CE8C94:
	// bl 0x82db7320
	ctx.lr = 0x82CE8C98;
	sub_82DB7320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce8cf4
	if (cr6.eq) goto loc_82CE8CF4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8CB4;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8CC4;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8CD4;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8CE4;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8CF4;
	sub_82C20F50(ctx, base);
loc_82CE8CF4:
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CE8CFC;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CE8D00;
	sub_83102DB0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CE8D08;
	sub_82D9A868(ctx, base);
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce8d48
	if (cr6.eq) goto loc_82CE8D48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8D28;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8D38;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8D48;
	sub_82C20F50(ctx, base);
loc_82CE8D48:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// subfic r10,r11,100
	xer.ca = ctx.r11.u32 <= 100;
	ctx.r10.s64 = 100 - ctx.r11.s64;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// bne cr6,0x82ce8d68
	if (!cr6.eq) goto loc_82CE8D68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8D68;
	sub_82C20F50(ctx, base);
loc_82CE8D68:
	// stw r28,2640(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2640, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103100
	ctx.lr = 0x82CE8D78;
	sub_83103100(ctx, base);
loc_82CE8D78:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE8D80"))) PPC_WEAK_FUNC(sub_82CE8D80);
PPC_FUNC_IMPL(__imp__sub_82CE8D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CE8D88;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2660(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2660);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce8e74
	if (cr6.eq) goto loc_82CE8E74;
	// bl 0x82ce78a0
	ctx.lr = 0x82CE8DA0;
	sub_82CE78A0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ce9110
	if (cr6.eq) goto loc_82CE9110;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82ce8dec
	if (cr6.eq) goto loc_82CE8DEC;
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// stw r6,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r6.u32);
	// b 0x82ce8df0
	goto loc_82CE8DF0;
loc_82CE8DEC:
	// stw r29,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r29.u32);
loc_82CE8DF0:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r9,21716
	ctx.r30.s64 = ctx.r9.s64 + 21716;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r7,r8,8193
	ctx.r7.u64 = ctx.r8.u64 | 8193;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r11,111
	ctx.r5.s64 = ctx.r11.s64 + 111;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,1784(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1784);
	// stw r9,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r9.u32);
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r8,r11,13
	ctx.r8.s64 = ctx.r11.s64 + 13;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r5,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r5.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stb r29,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r29.u8);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bl 0x83103068
	ctx.lr = 0x82CE8E5C;
	sub_83103068(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CE8E6C;
	sub_82D17DA0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CE8E74:
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82d86078
	ctx.lr = 0x82CE8E7C;
	sub_82D86078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce9110
	if (cr6.eq) goto loc_82CE9110;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE8E90;
	sub_831F8200(ctx, base);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce8ea0
	if (cr6.eq) goto loc_82CE8EA0;
	// li r30,7
	ctx.r30.s64 = 7;
loc_82CE8EA0:
	// bl 0x82db7320
	ctx.lr = 0x82CE8EA4;
	sub_82DB7320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce8eb4
	if (cr6.eq) goto loc_82CE8EB4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CE8EB4:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r5,264
	ctx.r5.s64 = 17301504;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r3,r11,18144
	ctx.r3.s64 = ctx.r11.s64 + 18144;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r5,8195
	ctx.r5.u64 = ctx.r5.u64 | 8195;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c21960
	ctx.lr = 0x82CE8ED8;
	sub_82C21960(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce9110
	if (cr6.eq) goto loc_82CE9110;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,205
	ctx.r4.u64 = ctx.r4.u64 | 205;
	// bl 0x82c21bb8
	ctx.lr = 0x82CE8EF0;
	sub_82C21BB8(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,335
	ctx.r5.u64 = ctx.r5.u64 | 335;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21c28
	ctx.lr = 0x82CE8F04;
	sub_82C21C28(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x82d98830
	ctx.lr = 0x82CE8F0C;
	sub_82D98830(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ce8f24
	if (!cr6.eq) goto loc_82CE8F24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE8F24;
	sub_82C20F50(ctx, base);
loc_82CE8F24:
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,152
	ctx.r5.u64 = ctx.r5.u64 | 152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8F38;
	sub_82C21CB0(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,504
	ctx.r5.u64 = ctx.r5.u64 | 504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8F4C;
	sub_82C21CB0(ctx, base);
	// lis r5,32
	ctx.r5.s64 = 2097152;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,13
	ctx.r5.u64 = ctx.r5.u64 | 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8F60;
	sub_82C21CB0(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// li r4,4
	ctx.r4.s64 = 4;
	// ori r5,r5,247
	ctx.r5.u64 = ctx.r5.u64 | 247;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8F74;
	sub_82C21CB0(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// li r4,5
	ctx.r4.s64 = 5;
	// ori r5,r5,248
	ctx.r5.u64 = ctx.r5.u64 | 248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21cb0
	ctx.lr = 0x82CE8F88;
	sub_82C21CB0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE8FC8;
	sub_831F8200(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x82d9f020
	ctx.lr = 0x82CE8FD4;
	sub_82D9F020(ctx, base);
	// li r27,4
	ctx.r27.s64 = 4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE8FE4;
	sub_831F8200(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82d9f020
	ctx.lr = 0x82CE8FF0;
	sub_82D9F020(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,6
	ctx.r4.s64 = 6;
	// ori r5,r5,624
	ctx.r5.u64 = ctx.r5.u64 | 624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21c28
	ctx.lr = 0x82CE9004;
	sub_82C21C28(ctx, base);
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// ori r7,r7,646
	ctx.r7.u64 = ctx.r7.u64 | 646;
	// ori r5,r5,166
	ctx.r5.u64 = ctx.r5.u64 | 166;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21d38
	ctx.lr = 0x82CE9024;
	sub_82C21D38(ctx, base);
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// ori r7,r7,650
	ctx.r7.u64 = ctx.r7.u64 | 650;
	// ori r5,r5,555
	ctx.r5.u64 = ctx.r5.u64 | 555;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21d38
	ctx.lr = 0x82CE9044;
	sub_82C21D38(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce9060
	if (!cr6.eq) goto loc_82CE9060;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE9060;
	sub_82C20F50(ctx, base);
loc_82CE9060:
	// lbz r11,2658(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2658);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce907c
	if (!cr6.eq) goto loc_82CE907C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE907C;
	sub_82C20F50(ctx, base);
loc_82CE907C:
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE9084;
	sub_831F8200(ctx, base);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce90b4
	if (cr6.eq) goto loc_82CE90B4;
loc_82CE9090:
	// cmplwi cr6,r29,7
	cr6.compare<uint32_t>(ctx.r29.u32, 7, xer);
	// beq cr6,0x82ce90a8
	if (cr6.eq) goto loc_82CE90A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE90A8;
	sub_82C20F50(ctx, base);
loc_82CE90A8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,9
	cr6.compare<uint32_t>(ctx.r29.u32, 9, xer);
	// blt cr6,0x82ce9090
	if (cr6.lt) goto loc_82CE9090;
loc_82CE90B4:
	// bl 0x82db7320
	ctx.lr = 0x82CE90B8;
	sub_82DB7320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce90f4
	if (cr6.eq) goto loc_82CE90F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE90D4;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE90E4;
	sub_82C20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c20f50
	ctx.lr = 0x82CE90F4;
	sub_82C20F50(ctx, base);
loc_82CE90F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82CE9100;
	sub_83103100(ctx, base);
	// stw r27,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r27.u32);
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CE9110;
	sub_82D17DA0(ctx, base);
loc_82CE9110:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE9118"))) PPC_WEAK_FUNC(sub_82CE9118);
PPC_FUNC_IMPL(__imp__sub_82CE9118) {
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
	// addi r3,r3,2661
	ctx.r3.s64 = ctx.r3.s64 + 2661;
	// bl 0x82dd64f8
	ctx.lr = 0x82CE912C;
	sub_82DD64F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_82CE9148"))) PPC_WEAK_FUNC(sub_82CE9148);
PPC_FUNC_IMPL(__imp__sub_82CE9148) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4268
	ctx.r4.s64 = 4268;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CE9174;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce91a4
	if (cr6.eq) goto loc_82CE91A4;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,15179
	ctx.r4.s64 = ctx.r11.s64 + 15179;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ce80b0
	ctx.lr = 0x82CE9190;
	sub_82CE80B0(ctx, base);
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
loc_82CE91A4:
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

__attribute__((alias("__imp__sub_82CE91BC"))) PPC_WEAK_FUNC(sub_82CE91BC);
PPC_FUNC_IMPL(__imp__sub_82CE91BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE91C0"))) PPC_WEAK_FUNC(sub_82CE91C0);
PPC_FUNC_IMPL(__imp__sub_82CE91C0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ac0af0
	ctx.lr = 0x82CE91E0;
	sub_82AC0AF0(ctx, base);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82d98930
	ctx.lr = 0x82CE91F0;
	sub_82D98930(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bge cr6,0x82ce9218
	if (!cr6.lt) goto loc_82CE9218;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82CE9218;
	sub_82ABFDA0(ctx, base);
loc_82CE9218:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8316f008
	ctx.lr = 0x82CE9224;
	sub_8316F008(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE9230;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r31,r11,15540
	ctx.r31.s64 = ctx.r11.s64 + 15540;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE9250;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce9280
	if (cr6.eq) goto loc_82CE9280;
	// cmplwi cr6,r30,25
	cr6.compare<uint32_t>(ctx.r30.u32, 25, xer);
	// bge cr6,0x82ce9280
	if (!cr6.lt) goto loc_82CE9280;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,460
	ctx.r10.s64 = ctx.r31.s64 + 460;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CE9280;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CE9280:
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

__attribute__((alias("__imp__sub_82CE9298"))) PPC_WEAK_FUNC(sub_82CE9298);
PPC_FUNC_IMPL(__imp__sub_82CE9298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CE92A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CE92B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ac0af0
	ctx.lr = 0x82CE92C0;
	sub_82AC0AF0(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82ce92e8
	if (!cr6.lt) goto loc_82CE92E8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82CE92E8;
	sub_82ABFDA0(ctx, base);
loc_82CE92E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CE92EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r29,r3
	ctx.r4.u64 = ctx.r29.u64 + ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82CE92F8:
	// addi r10,r4,167
	ctx.r10.s64 = ctx.r4.s64 + 167;
	// add r11,r31,r6
	ctx.r11.u64 = ctx.r31.u64 + ctx.r6.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// lwzx r7,r9,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// blt cr6,0x82ce9354
	if (cr6.lt) goto loc_82CE9354;
	// beq cr6,0x82ce9340
	if (cr6.eq) goto loc_82CE9340;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bge cr6,0x82ce937c
	if (!cr6.lt) goto loc_82CE937C;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82ce937c
	if (!cr6.lt) goto loc_82CE937C;
	// addi r9,r1,157
	ctx.r9.s64 = ctx.r1.s64 + 157;
	// b 0x82ce9364
	goto loc_82CE9364;
loc_82CE9340:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82ce937c
	if (!cr6.lt) goto loc_82CE937C;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// b 0x82ce9364
	goto loc_82CE9364;
loc_82CE9354:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82ce937c
	if (!cr6.lt) goto loc_82CE937C;
	// addi r9,r1,91
	ctx.r9.s64 = ctx.r1.s64 + 91;
loc_82CE9364:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r24,2677(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2677);
	// lbz r25,2676(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2676);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r24,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r24.u8);
	// stb r25,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r25.u8);
loc_82CE937C:
	// lwz r10,2680(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x82ce93cc
	if (cr6.lt) goto loc_82CE93CC;
	// beq cr6,0x82ce93b0
	if (cr6.eq) goto loc_82CE93B0;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bge cr6,0x82ce93e0
	if (!cr6.lt) goto loc_82CE93E0;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82ce93e0
	if (!cr6.lt) goto loc_82CE93E0;
	// addi r9,r1,146
	ctx.r9.s64 = ctx.r1.s64 + 146;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stbx r8,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x82ce93e0
	goto loc_82CE93E0;
loc_82CE93B0:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82ce93e0
	if (!cr6.lt) goto loc_82CE93E0;
	// addi r9,r1,113
	ctx.r9.s64 = ctx.r1.s64 + 113;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stbx r8,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x82ce93e0
	goto loc_82CE93E0;
loc_82CE93CC:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82ce93e0
	if (!cr6.lt) goto loc_82CE93E0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
loc_82CE93E0:
	// addi r6,r6,532
	ctx.r6.s64 = ctx.r6.s64 + 532;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r6,1596
	cr6.compare<uint32_t>(ctx.r6.u32, 1596, xer);
	// blt cr6,0x82ce92f8
	if (cr6.lt) goto loc_82CE92F8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// blt cr6,0x82ce92ec
	if (cr6.lt) goto loc_82CE92EC;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// bge cr6,0x82ce9420
	if (!cr6.lt) goto loc_82CE9420;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82CE9420;
	sub_82ABFDA0(ctx, base);
loc_82CE9420:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,11
	ctx.r29.s64 = ctx.r29.s64 + 11;
	// cmplwi cr6,r31,528
	cr6.compare<uint32_t>(ctx.r31.u32, 528, xer);
	// blt cr6,0x82ce92b8
	if (cr6.lt) goto loc_82CE92B8;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE9438"))) PPC_WEAK_FUNC(sub_82CE9438);
PPC_FUNC_IMPL(__imp__sub_82CE9438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CE9440;
	__savegprlr_27(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r3,2661
	ctx.r3.s64 = ctx.r3.s64 + 2661;
	// bl 0x82dd64f8
	ctx.lr = 0x82CE9450;
	sub_82DD64F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce9468
	if (!cr6.eq) goto loc_82CE9468;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CE9468:
	// bl 0x82d26640
	ctx.lr = 0x82CE946C;
	sub_82D26640(ctx, base);
	// bl 0x82d25a90
	ctx.lr = 0x82CE9470;
	sub_82D25A90(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82CE9474;
	sub_82D86078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce9598
	if (cr6.eq) goto loc_82CE9598;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CE9488;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82CE948C;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82CE9490;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce9598
	if (cr6.eq) goto loc_82CE9598;
	// bl 0x82d98930
	ctx.lr = 0x82CE949C;
	sub_82D98930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x82CE94AC;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce9298
	ctx.lr = 0x82CE94B8;
	sub_82CE9298(ctx, base);
	// addi r3,r30,244
	ctx.r3.s64 = ctx.r30.s64 + 244;
	// bl 0x82d98930
	ctx.lr = 0x82CE94C0;
	sub_82D98930(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r4,r11,480
	ctx.r4.s64 = ctx.r11.s64 + 480;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82CE94D4;
	sub_831CE980(ctx, base);
	// lwz r3,116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CE94DC;
	sub_82DAB6D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d97698
	ctx.lr = 0x82CE94E8;
	sub_82D97698(ctx, base);
	// addi r29,r30,1760
	ctx.r29.s64 = ctx.r30.s64 + 1760;
	// li r31,18
	ctx.r31.s64 = 18;
loc_82CE94F0:
	// lwzu r4,16(r29)
	ea = 16 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r11,100
	ctx.r5.s64 = ctx.r11.s64 + 100;
	// bl 0x82d97588
	ctx.lr = 0x82CE9508;
	sub_82D97588(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ce94f0
	if (!cr0.eq) goto loc_82CE94F0;
	// lwz r11,1708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce9530
	if (cr6.eq) goto loc_82CE9530;
	// lwz r3,116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE9524;
	sub_831F8200(ctx, base);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce9550
	if (cr6.eq) goto loc_82CE9550;
loc_82CE9530:
	// lbz r11,2659(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2659);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce9550
	if (!cr6.eq) goto loc_82CE9550;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1768(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// bl 0x82d97700
	ctx.lr = 0x82CE9548;
	sub_82D97700(ctx, base);
	// lwz r4,1772(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1772);
	// b 0x82ce9560
	goto loc_82CE9560;
loc_82CE9550:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97700
	ctx.lr = 0x82CE955C;
	sub_82D97700(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82CE9560:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97710
	ctx.lr = 0x82CE9568;
	sub_82D97710(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1768(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// bl 0x82d97548
	ctx.lr = 0x82CE9574;
	sub_82D97548(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82CE957C;
	sub_82D19BB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82CE9588;
	sub_82D19BA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d97798
	ctx.lr = 0x82CE9598;
	sub_82D97798(ctx, base);
loc_82CE9598:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE95A4"))) PPC_WEAK_FUNC(sub_82CE95A4);
PPC_FUNC_IMPL(__imp__sub_82CE95A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE95A8"))) PPC_WEAK_FUNC(sub_82CE95A8);
PPC_FUNC_IMPL(__imp__sub_82CE95A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE95B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82CE95C0;
	sub_82D199F0(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,18436
	ctx.r3.s64 = ctx.r11.s64 + 18436;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x82d2fa90
	ctx.lr = 0x82CE95D8;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce95f8
	if (cr6.eq) goto loc_82CE95F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82CE95EC;
	sub_82D2AAB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82CE95F8;
	sub_83103100(ctx, base);
loc_82CE95F8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce9618
	if (cr6.lt) goto loc_82CE9618;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CE9618;
	sub_825952B8(ctx, base);
loc_82CE9618:
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE9634"))) PPC_WEAK_FUNC(sub_82CE9634);
PPC_FUNC_IMPL(__imp__sub_82CE9634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE9638"))) PPC_WEAK_FUNC(sub_82CE9638);
PPC_FUNC_IMPL(__imp__sub_82CE9638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE9640;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82CE9650;
	sub_82D199F0(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,18456
	ctx.r3.s64 = ctx.r11.s64 + 18456;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82d2f6d8
	ctx.lr = 0x82CE966C;
	sub_82D2F6D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce968c
	if (cr6.eq) goto loc_82CE968C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82CE9680;
	sub_82D2AAB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82CE968C;
	sub_83103100(ctx, base);
loc_82CE968C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce96ac
	if (cr6.lt) goto loc_82CE96AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CE96AC;
	sub_825952B8(ctx, base);
loc_82CE96AC:
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE96C8"))) PPC_WEAK_FUNC(sub_82CE96C8);
PPC_FUNC_IMPL(__imp__sub_82CE96C8) {
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CE9700;
	sub_8259CB28(ctx, base);
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

__attribute__((alias("__imp__sub_82CE9718"))) PPC_WEAK_FUNC(sub_82CE9718);
PPC_FUNC_IMPL(__imp__sub_82CE9718) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82CE9764;
	sub_8259CB28(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// li r5,864
	ctx.r5.s64 = 864;
	// bl 0x831ce980
	ctx.lr = 0x82CE9774;
	sub_831CE980(ctx, base);
	// lwz r8,896(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	// addi r3,r31,920
	ctx.r3.s64 = ctx.r31.s64 + 920;
	// addi r4,r30,920
	ctx.r4.s64 = ctx.r30.s64 + 920;
	// li r5,528
	ctx.r5.s64 = 528;
	// stw r8,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r8.u32);
	// lwz r7,900(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// stw r7,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r7.u32);
	// lwz r6,904(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 904);
	// stw r6,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r6.u32);
	// lwz r11,908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 908);
	// stw r11,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r11.u32);
	// lwz r10,912(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// stw r10,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r10.u32);
	// lwz r9,916(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 916);
	// stw r9,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r9.u32);
	// bl 0x831ce980
	ctx.lr = 0x82CE97B4;
	sub_831CE980(ctx, base);
	// lwz r8,1448(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r8.u32);
	// lwz r7,1452(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// stw r7,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r7.u32);
	// lwz r6,1456(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// stw r6,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CE97E8"))) PPC_WEAK_FUNC(sub_82CE97E8);
PPC_FUNC_IMPL(__imp__sub_82CE97E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CE97F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-1600(r1)
	ea = -1600 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1712(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1712);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,13
	ctx.r29.s64 = 13;
	// cmplwi cr6,r10,18
	cr6.compare<uint32_t>(ctx.r10.u32, 18, xer);
	// beq cr6,0x82ce982c
	if (cr6.eq) goto loc_82CE982C;
	// lwz r11,1768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1768);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r29,1784(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1784);
loc_82CE982C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82CE9834;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce985c
	if (cr6.eq) goto loc_82CE985C;
	// bl 0x82d86078
	ctx.lr = 0x82CE9844;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce98cc
	if (cr6.eq) goto loc_82CE98CC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE9854;
	sub_831F8200(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r11.u32);
loc_82CE985C:
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82ce9880
	if (cr6.lt) goto loc_82CE9880;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x82ce987c
	if (!cr6.gt) goto loc_82CE987C;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x82ce9880
	if (!cr6.eq) goto loc_82CE9880;
loc_82CE987C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CE9880:
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// lbz r27,2664(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2664);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r26,1756(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// bl 0x82ce9718
	ctx.lr = 0x82CE9894;
	sub_82CE9718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,1772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// bl 0x82d02598
	ctx.lr = 0x82CE98B4;
	sub_82D02598(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce98cc
	if (cr6.eq) goto loc_82CE98CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82CE98CC;
	sub_83103100(ctx, base);
loc_82CE98CC:
	// addi r1,r1,1600
	ctx.r1.s64 = ctx.r1.s64 + 1600;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE98D4"))) PPC_WEAK_FUNC(sub_82CE98D4);
PPC_FUNC_IMPL(__imp__sub_82CE98D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE98D8"))) PPC_WEAK_FUNC(sub_82CE98D8);
PPC_FUNC_IMPL(__imp__sub_82CE98D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE98E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82d04220
	ctx.lr = 0x82CE9904;
	sub_82D04220(ctx, base);
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
	// bl 0x8259cb28
	ctx.lr = 0x82CE9924;
	sub_8259CB28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce95a8
	ctx.lr = 0x82CE9930;
	sub_82CE95A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce9950
	if (cr6.lt) goto loc_82CE9950;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CE9950;
	sub_825952B8(ctx, base);
loc_82CE9950:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE9958"))) PPC_WEAK_FUNC(sub_82CE9958);
PPC_FUNC_IMPL(__imp__sub_82CE9958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CE9960;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82d04220
	ctx.lr = 0x82CE9984;
	sub_82D04220(ctx, base);
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
	// bl 0x8259cb28
	ctx.lr = 0x82CE99A4;
	sub_8259CB28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce9638
	ctx.lr = 0x82CE99B0;
	sub_82CE9638(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ce99d0
	if (cr6.lt) goto loc_82CE99D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CE99D0;
	sub_825952B8(ctx, base);
loc_82CE99D0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE99D8"))) PPC_WEAK_FUNC(sub_82CE99D8);
PPC_FUNC_IMPL(__imp__sub_82CE99D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CE99E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CE99EC;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce9c38
	if (cr6.eq) goto loc_82CE9C38;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CE9A00;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d8bb28
	ctx.lr = 0x82CE9A0C;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce9acc
	if (cr6.eq) goto loc_82CE9ACC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19720
	ctx.lr = 0x82CE9A24;
	sub_82D19720(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82ce9c38
	if (!cr6.eq) goto loc_82CE9C38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82cefad8
	ctx.lr = 0x82CE9A3C;
	sub_82CEFAD8(ctx, base);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lwz r9,1712(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,100(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// bl 0x825832f8
	ctx.lr = 0x82CE9A78;
	sub_825832F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19948
	ctx.lr = 0x82CE9A80;
	sub_82D19948(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CE9A90;
	sub_82D19788(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82CE9AB0;
	sub_82D1EBF8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ce9c38
	if (cr6.eq) goto loc_82CE9C38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82CE9AC4;
	sub_83103100(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CE9ACC:
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82ce9af0
	if (!cr6.eq) goto loc_82CE9AF0;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,280
	ctx.r4.u64 = ctx.r4.u64 | 280;
	// bl 0x82ce98d8
	ctx.lr = 0x82CE9AE8;
	sub_82CE98D8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CE9AF0:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82ce9b24
	if (!cr6.eq) goto loc_82CE9B24;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82CE9B00;
	sub_83815CB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// bl 0x82ce96c8
	ctx.lr = 0x82CE9B10;
	sub_82CE96C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce95a8
	ctx.lr = 0x82CE9B1C;
	sub_82CE95A8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CE9B24:
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x82ce9bc8
	if (!cr6.eq) goto loc_82CE9BC8;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82CE9B34;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82CE9B38;
	sub_825832D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// li r29,18
	ctx.r29.s64 = 18;
loc_82CE9B48:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ce9b6c
	if (cr6.eq) goto loc_82CE9B6C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9d490
	ctx.lr = 0x82CE9B5C;
	sub_82D9D490(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce9b6c
	if (cr6.eq) goto loc_82CE9B6C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82CE9B6C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82ce9b48
	if (!cr0.eq) goto loc_82CE9B48;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15210
	ctx.r4.s64 = ctx.r11.s64 + 15210;
	// bl 0x837b0c10
	ctx.lr = 0x82CE9B88;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,232(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// ori r4,r4,498
	ctx.r4.u64 = ctx.r4.u64 | 498;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CE9BA0;
	sub_82D042A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292a3f8
	ctx.lr = 0x82CE9BAC;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce95a8
	ctx.lr = 0x82CE9BB8;
	sub_82CE95A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CE9BC0;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CE9BC8:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82ce9bfc
	if (cr6.eq) goto loc_82CE9BFC;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CE9BD8;
	sub_831F8200(ctx, base);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ce9bfc
	if (cr6.eq) goto loc_82CE9BFC;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,424
	ctx.r4.u64 = ctx.r4.u64 | 424;
	// bl 0x82ce98d8
	ctx.lr = 0x82CE9BF4;
	sub_82CE98D8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CE9BFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d976f8
	ctx.lr = 0x82CE9C04;
	sub_82D976F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ce9c2c
	if (!cr6.eq) goto loc_82CE9C2C;
	// lbz r11,2657(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2657);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ce9c2c
	if (!cr6.eq) goto loc_82CE9C2C;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,237
	ctx.r4.u64 = ctx.r4.u64 | 237;
	// bl 0x82ce98d8
	ctx.lr = 0x82CE9C2C;
	sub_82CE98D8(ctx, base);
loc_82CE9C2C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d976f0
	ctx.lr = 0x82CE9C38;
	sub_82D976F0(ctx, base);
loc_82CE9C38:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE9C40"))) PPC_WEAK_FUNC(sub_82CE9C40);
PPC_FUNC_IMPL(__imp__sub_82CE9C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CE9C48;
	__savegprlr_26(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE9C54;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r30,r11,15528
	ctx.r30.s64 = ctx.r11.s64 + 15528;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE9C74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce9d64
	if (cr6.eq) goto loc_82CE9D64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CE9C88;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce9d64
	if (cr6.eq) goto loc_82CE9D64;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,1084
	ctx.r4.s64 = ctx.r30.s64 + 1084;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE9CA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce9d64
	if (cr6.eq) goto loc_82CE9D64;
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r28,1716(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1716);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x831156e8
	ctx.lr = 0x82CE9CD4;
	sub_831156E8(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c260
	ctx.lr = 0x82CE9CE0;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82CE9CF0;
	sub_831CE980(ctx, base);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82CE9D00;
	sub_837B0C10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r30,1092
	ctx.r4.s64 = ctx.r30.s64 + 1092;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CE9D10;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CE9D20;
	sub_82A69AD0(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82CE9D24;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ce9d64
	if (cr6.eq) goto loc_82CE9D64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CE9D34;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CE9D38;
	sub_82D99C08(ctx, base);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,1716(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1716);
	// bl 0x82d9a978
	ctx.lr = 0x82CE9D4C;
	sub_82D9A978(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r6,397(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 397);
	// bl 0x82d45220
	ctx.lr = 0x82CE9D64;
	sub_82D45220(ctx, base);
loc_82CE9D64:
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CE9D6C"))) PPC_WEAK_FUNC(sub_82CE9D6C);
PPC_FUNC_IMPL(__imp__sub_82CE9D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CE9D70"))) PPC_WEAK_FUNC(sub_82CE9D70);
PPC_FUNC_IMPL(__imp__sub_82CE9D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82CE9D78;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x82d19a10
	ctx.lr = 0x82CE9D90;
	sub_82D19A10(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CE9D98;
	sub_831156E8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r22,48(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// li r26,2
	ctx.r26.s64 = 2;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r11,15568
	ctx.r27.s64 = ctx.r11.s64 + 15568;
loc_82CE9DBC:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x82d9e220
	ctx.lr = 0x82CE9DF4;
	sub_82D9E220(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CE9E00;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CE9E18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cea190
	if (cr6.eq) goto loc_82CEA190;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// addi r4,r27,1064
	ctx.r4.s64 = ctx.r27.s64 + 1064;
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r24,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r24.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CE9E44;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83165d78
	ctx.lr = 0x82CE9E58;
	sub_83165D78(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ce9e6c
	if (!cr6.lt) goto loc_82CE9E6C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82CE9E6C:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE9E80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cea024
	if (cr6.eq) goto loc_82CEA024;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ce9ebc
	if (!cr6.eq) goto loc_82CE9EBC;
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CE9EB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2668, temp.u32);
loc_82CE9EBC:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,1772(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r7,1784(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1784);
	// bl 0x82d013e8
	ctx.lr = 0x82CE9EF4;
	sub_82D013E8(ctx, base);
	// addi r7,r27,1076
	ctx.r7.s64 = ctx.r27.s64 + 1076;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d017a8
	ctx.lr = 0x82CE9F0C;
	sub_82D017A8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ce9f28
	if (cr6.lt) goto loc_82CE9F28;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82CE9F28;
	sub_825952B8(ctx, base);
loc_82CE9F28:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// stb r24,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r24.u8);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// ble cr6,0x82ce9dbc
	if (!cr6.gt) goto loc_82CE9DBC;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// li r26,12
	ctx.r26.s64 = 12;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_82CE9F54:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r11,122
	ctx.r10.s64 = ctx.r11.s64 + 122;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82CE9F8C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CE9FA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cea190
	if (cr6.eq) goto loc_82CEA190;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CE9FB4;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cea190
	if (cr6.eq) goto loc_82CEA190;
	// bl 0x82d86078
	ctx.lr = 0x82CE9FC4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cea190
	if (cr6.eq) goto loc_82CEA190;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CE9FD4;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CE9FD8;
	sub_83102DB0(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d9a868
	ctx.lr = 0x82CE9FE0;
	sub_82D9A868(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cea04c
	if (cr6.eq) goto loc_82CEA04C;
	// sth r24,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r24.u16);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x8311bf98
	ctx.lr = 0x82CEA004;
	sub_8311BF98(ctx, base);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x82CEA014;
	sub_83120738(ctx, base);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,96(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// b 0x82cea058
	goto loc_82CEA058;
loc_82CEA024:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cea190
	if (cr6.lt) goto loc_82CEA190;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82CEA040;
	sub_825952B8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82CEA04C:
	// li r7,13
	ctx.r7.s64 = 13;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82CEA058:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1772(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// bl 0x82d013e8
	ctx.lr = 0x82CEA064;
	sub_82D013E8(ctx, base);
	// addi r7,r27,1096
	ctx.r7.s64 = ctx.r27.s64 + 1096;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d017a8
	ctx.lr = 0x82CEA07C;
	sub_82D017A8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r29,11
	ctx.r11.s64 = ctx.r29.s64 + 11;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// blt cr6,0x82ce9f54
	if (cr6.lt) goto loc_82CE9F54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEA094;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEA0AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cea190
	if (cr6.eq) goto loc_82CEA190;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CEA0BC;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cea190
	if (cr6.eq) goto loc_82CEA190;
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82cea124
	if (!cr6.eq) goto loc_82CEA124;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// sth r24,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r24.u16);
	// sth r24,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r24.u16);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82CEA0EC;
	sub_831156E8(ctx, base);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x82CEA0F8;
	sub_8311BF98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82d9e220
	ctx.lr = 0x82CEA104;
	sub_82D9E220(ctx, base);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x82CEA11C;
	sub_83120738(ctx, base);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82cea17c
	goto loc_82CEA17C;
loc_82CEA124:
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bne cr6,0x82cea190
	if (!cr6.eq) goto loc_82CEA190;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// sth r24,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r24.u16);
	// sth r24,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r24.u16);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82CEA148;
	sub_831156E8(ctx, base);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x82CEA154;
	sub_8311BF98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82d9e220
	ctx.lr = 0x82CEA160;
	sub_82D9E220(ctx, base);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x82CEA178;
	sub_83120738(ctx, base);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82CEA17C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1772(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// bl 0x82d013e8
	ctx.lr = 0x82CEA190;
	sub_82D013E8(ctx, base);
loc_82CEA190:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEA19C"))) PPC_WEAK_FUNC(sub_82CEA19C);
PPC_FUNC_IMPL(__imp__sub_82CEA19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEA1A0"))) PPC_WEAK_FUNC(sub_82CEA1A0);
PPC_FUNC_IMPL(__imp__sub_82CEA1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CEA1A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,1768(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1768);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82d98938
	ctx.lr = 0x82CEA1C4;
	sub_82D98938(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r26,100(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d19a78
	ctx.lr = 0x82CEA1D8;
	sub_82D19A78(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82cea1ec
	if (!cr6.eq) goto loc_82CEA1EC;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82CEA1EC:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r29,r11,16844
	ctx.r29.s64 = ctx.r11.s64 + 16844;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r29,-152
	ctx.r4.s64 = ctx.r29.s64 + -152;
	// bl 0x8259cc28
	ctx.lr = 0x82CEA214;
	sub_8259CC28(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CEA224;
	sub_82A6A1B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEA22C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82cea23c
	if (!cr6.eq) goto loc_82CEA23C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82CEA23C:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// addi r4,r29,-132
	ctx.r4.s64 = ctx.r29.s64 + -132;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x82CEA258;
	sub_8259CC28(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d999a0
	ctx.lr = 0x82CEA260;
	sub_82D999A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CEA270;
	sub_82A6A1B8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d999a0
	ctx.lr = 0x82CEA278;
	sub_82D999A0(ctx, base);
	// bl 0x82d8aed8
	ctx.lr = 0x82CEA27C;
	sub_82D8AED8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r29,-116
	ctx.r4.s64 = ctx.r29.s64 + -116;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CEA2A0;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83165d78
	ctx.lr = 0x82CEA2B4;
	sub_83165D78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEA2BC;
	sub_82D19A78(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cea2d0
	if (!cr6.lt) goto loc_82CEA2D0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82CEA2D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEA2E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r30,244
	ctx.r31.s64 = ctx.r30.s64 + 244;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d98938
	ctx.lr = 0x82CEA2F4;
	sub_82D98938(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d999a0
	ctx.lr = 0x82CEA308;
	sub_82D999A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r31
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ble cr6,0x82cea324
	if (!cr6.gt) goto loc_82CEA324;
	// bl 0x82d19a78
	ctx.lr = 0x82CEA31C;
	sub_82D19A78(ctx, base);
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// b 0x82cea33c
	goto loc_82CEA33C;
loc_82CEA324:
	// bge cr6,0x82cea334
	if (!cr6.lt) goto loc_82CEA334;
	// bl 0x82d19a78
	ctx.lr = 0x82CEA32C;
	sub_82D19A78(ctx, base);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// b 0x82cea33c
	goto loc_82CEA33C;
loc_82CEA334:
	// bl 0x82d19a78
	ctx.lr = 0x82CEA338;
	sub_82D19A78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82CEA33C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEA350;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d999a0
	ctx.lr = 0x82CEA358;
	sub_82D999A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r29,-104
	ctx.r6.s64 = ctx.r29.s64 + -104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82ce77e0
	ctx.lr = 0x82CEA36C;
	sub_82CE77E0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cea38c
	if (cr6.lt) goto loc_82CEA38C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CEA38C;
	sub_825952B8(ctx, base);
loc_82CEA38C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEA394"))) PPC_WEAK_FUNC(sub_82CEA394);
PPC_FUNC_IMPL(__imp__sub_82CEA394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEA398"))) PPC_WEAK_FUNC(sub_82CEA398);
PPC_FUNC_IMPL(__imp__sub_82CEA398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CEA3A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CEA3B0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cea5d0
	if (cr6.eq) goto loc_82CEA5D0;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CEA3C0;
	sub_825832D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEA3CC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r30,r11,16796
	ctx.r30.s64 = ctx.r11.s64 + 16796;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEA3EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEA3F8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CEA410;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r26,1716(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d99c08
	ctx.lr = 0x82CEA420;
	sub_82D99C08(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CEA428;
	sub_82D9A978(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82cea4b8
	if (cr6.eq) goto loc_82CEA4B8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82cea4b8
	if (cr6.eq) goto loc_82CEA4B8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d98640
	ctx.lr = 0x82CEA448;
	sub_82D98640(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3d3b0
	ctx.lr = 0x82CEA45C;
	sub_82D3D3B0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d98640
	ctx.lr = 0x82CEA464;
	sub_82D98640(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// ble cr6,0x82cea498
	if (!cr6.gt) goto loc_82CEA498;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f3,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// bl 0x82d3cc88
	ctx.lr = 0x82CEA48C;
	sub_82D3CC88(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,2657(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2657, ctx.r9.u8);
	// b 0x82cea49c
	goto loc_82CEA49C;
loc_82CEA498:
	// stb r24,2657(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2657, ctx.r24.u8);
loc_82CEA49C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r29,8(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x82d98640
	ctx.lr = 0x82CEA4A8;
	sub_82D98640(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a6a100
	ctx.lr = 0x82CEA4B8;
	sub_82A6A100(ctx, base);
loc_82CEA4B8:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r29,1716(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1716);
	// bl 0x82d99c08
	ctx.lr = 0x82CEA4D0;
	sub_82D99C08(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82CEA4D8;
	sub_82D9A978(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-1585
	ctx.r4.s64 = ctx.r30.s64 + -1585;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CEA4E8;
	sub_837B0C10(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,1768(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// bl 0x82d988d8
	ctx.lr = 0x82CEA4F4;
	sub_82D988D8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x82cea52c
	if (cr6.eq) goto loc_82CEA52C;
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83165ba8
	ctx.lr = 0x82CEA50C;
	sub_83165BA8(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CEA524;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x82cea554
	goto loc_82CEA554;
loc_82CEA52C:
	// addi r4,r29,224
	ctx.r4.s64 = ctx.r29.s64 + 224;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83165ba8
	ctx.lr = 0x82CEA538;
	sub_83165BA8(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CEA550;
	sub_8259CB28(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_82CEA554:
	// bl 0x8387e8e0
	ctx.lr = 0x82CEA558;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEA560;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82cea570
	if (!cr6.eq) goto loc_82CEA570;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82CEA570:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82CEA594;
	sub_8259CB28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CEA5A0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82a69ad0
	ctx.lr = 0x82CEA5B0;
	sub_82A69AD0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cea5d0
	if (cr6.lt) goto loc_82CEA5D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CEA5D0;
	sub_825952B8(ctx, base);
loc_82CEA5D0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEA5D8"))) PPC_WEAK_FUNC(sub_82CEA5D8);
PPC_FUNC_IMPL(__imp__sub_82CEA5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CEA5E0;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-2288(r1)
	ea = -2288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CEA5F0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceaafc
	if (cr6.eq) goto loc_82CEAAFC;
	// lwz r11,1768(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1768);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sth r24,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r24.u16);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r9,1716(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1716);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x825832d8
	ctx.lr = 0x82CEA61C;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CEA620;
	sub_82D99C08(ctx, base);
	// lwz r8,1768(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1768);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r4,1716(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1716);
	// bl 0x82d9a978
	ctx.lr = 0x82CEA634;
	sub_82D9A978(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CEA63C;
	sub_831156E8(ctx, base);
	// lwz r25,48(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82CEA644;
	sub_831156E8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r26,52(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// bl 0x8311c260
	ctx.lr = 0x82CEA658;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82CEA668;
	sub_831CE980(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEA670;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r31,r11,15396
	ctx.r31.s64 = ctx.r11.s64 + 15396;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CEA690;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceaafc
	if (cr6.eq) goto loc_82CEAAFC;
	// lwz r11,1768(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1768);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r10,1716(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1716);
	// addi r30,r28,100
	ctx.r30.s64 = ctx.r28.s64 + 100;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r8,1716(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1716);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82cea6d4
	if (!cr6.eq) goto loc_82CEA6D4;
	// addi r4,r31,1512
	ctx.r4.s64 = ctx.r31.s64 + 1512;
	// bl 0x837b0c10
	ctx.lr = 0x82CEA6C8;
	sub_837B0C10(ctx, base);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// ori r5,r5,616
	ctx.r5.u64 = ctx.r5.u64 | 616;
	// b 0x82cea6e4
	goto loc_82CEA6E4;
loc_82CEA6D4:
	// addi r4,r31,1524
	ctx.r4.s64 = ctx.r31.s64 + 1524;
	// bl 0x837b0c10
	ctx.lr = 0x82CEA6DC;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,512
	ctx.r5.u64 = ctx.r5.u64 | 512;
loc_82CEA6E4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CEA6F0;
	sub_82A69A28(ctx, base);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f13,23372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23372);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,-23488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f11,f13
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82cea724
	if (!cr6.gt) goto loc_82CEA724;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82CEA724:
	// addi r4,r31,-155
	ctx.r4.s64 = ctx.r31.s64 + -155;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82CEA730;
	sub_837B0C10(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// ori r4,r4,105
	ctx.r4.u64 = ctx.r4.u64 | 105;
	// bl 0x82d042a8
	ctx.lr = 0x82CEA74C;
	sub_82D042A8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cea760
	if (!cr6.lt) goto loc_82CEA760;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82CEA760:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82CEA768;
	sub_837B0C10(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r31,1536
	ctx.r4.s64 = ctx.r31.s64 + 1536;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82CEA778;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CEA788;
	sub_82A69AD0(ctx, base);
	// lhz r8,338(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 338);
	// li r10,512
	ctx.r10.s64 = 512;
	// addis r11,r26,6
	ctx.r11.s64 = ctx.r26.s64 + 393216;
	// subfc r7,r10,r8
	xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r11,r11,-30140
	ctx.r11.s64 = ctx.r11.s64 + -30140;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82CEA7B4;
	sub_837B0C10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r31,1564
	ctx.r4.s64 = ctx.r31.s64 + 1564;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82CEA7C4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CEA7D4;
	sub_82A69AD0(ctx, base);
	// addi r4,r31,1592
	ctx.r4.s64 = ctx.r31.s64 + 1592;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r26,4(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x837b0c10
	ctx.lr = 0x82CEA7E4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CEA7F4;
	sub_82A6A1B8(ctx, base);
	// addi r4,r31,1616
	ctx.r4.s64 = ctx.r31.s64 + 1616;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r26,8(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x837b0c10
	ctx.lr = 0x82CEA804;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CEA814;
	sub_82A6A1B8(ctx, base);
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82CEA820;
	sub_837B0C10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r31,1640
	ctx.r4.s64 = ctx.r31.s64 + 1640;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82CEA830;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CEA840;
	sub_82A69AD0(ctx, base);
	// addi r4,r31,1652
	ctx.r4.s64 = ctx.r31.s64 + 1652;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r26,12(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x837b0c10
	ctx.lr = 0x82CEA850;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CEA860;
	sub_82A6A1B8(ctx, base);
	// addi r4,r31,1676
	ctx.r4.s64 = ctx.r31.s64 + 1676;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r29,20(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x837b0c10
	ctx.lr = 0x82CEA870;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CEA880;
	sub_82A6A1B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,1704
	ctx.r4.s64 = ctx.r31.s64 + 1704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEA898;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceab10
	if (cr6.eq) goto loc_82CEAB10;
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lhz r11,338(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 338);
	// stw r24,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r24.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cea8bc
	if (cr6.eq) goto loc_82CEA8BC;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CEA8BC:
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82d32b60
	ctx.lr = 0x82CEA8C8;
	sub_82D32B60(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,1768(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1768);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r10,215
	ctx.r10.s64 = ctx.r10.s64 + 215;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r9,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// lwz r11,14468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14468);
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82cea9dc
	if (cr6.eq) goto loc_82CEA9DC;
	// addi r4,r31,1732
	ctx.r4.s64 = ctx.r31.s64 + 1732;
	// bctrl 
	ctx.lr = 0x82CEA908;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,1756
	ctx.r4.s64 = ctx.r31.s64 + 1756;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CEA920;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceab10
	if (cr6.eq) goto loc_82CEAB10;
	// lwz r11,1768(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1768);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r11,215
	ctx.r7.s64 = ctx.r11.s64 + 215;
	// clrlwi r10,r8,14
	ctx.r10.u64 = ctx.r8.u32 & 0x3FFFF;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r6,r9,65535
	ctx.r6.u64 = ctx.r9.u64 | 65535;
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rlwimi r5,r10,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// ble cr6,0x82cea968
	if (!cr6.gt) goto loc_82CEA968;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82CEA968:
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r24,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r24.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82cea980
	if (cr6.eq) goto loc_82CEA980;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CEA980:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d329f8
	ctx.lr = 0x82CEA990;
	sub_82D329F8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8311c148
	ctx.lr = 0x82CEA99C;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x82CEA9AC;
	sub_831CE980(ctx, base);
	// addi r4,r1,954
	ctx.r4.s64 = ctx.r1.s64 + 954;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82CEA9B8;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,1776
	ctx.r4.s64 = ctx.r31.s64 + 1776;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82CEA9C8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CEA9D8;
	sub_82A69AD0(ctx, base);
	// b 0x82cea9e4
	goto loc_82CEA9E4;
loc_82CEA9DC:
	// addi r4,r31,1796
	ctx.r4.s64 = ctx.r31.s64 + 1796;
	// bctrl 
	ctx.lr = 0x82CEA9E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CEA9E4:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r26,r11,14320
	ctx.r26.s64 = ctx.r11.s64 + 14320;
loc_82CEA9F0:
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// addi r4,r31,1824
	ctx.r4.s64 = ctx.r31.s64 + 1824;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82CEAA00;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82CEAA14;
	sub_83165D78(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ceaa28
	if (!cr6.lt) goto loc_82CEAA28;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_82CEAA28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CEAA30;
	sub_82D2E228(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceab08
	if (cr6.eq) goto loc_82CEAB08;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r31,1844
	ctx.r4.s64 = ctx.r31.s64 + 1844;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r28,100
	ctx.r29.s64 = ctx.r28.s64 + 100;
	// lwzx r25,r10,r26
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CEAA58;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CEAA68;
	sub_82A69A28(ctx, base);
	// lwz r9,100(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r4,r31,1868
	ctx.r4.s64 = ctx.r31.s64 + 1868;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CEAA80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceaac0
	if (cr6.eq) goto loc_82CEAAC0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,1768(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1768);
	// bl 0x82d01090
	ctx.lr = 0x82CEAA98;
	sub_82D01090(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// beq cr6,0x82ceaaac
	if (cr6.eq) goto loc_82CEAAAC;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bne cr6,0x82ceaab0
	if (!cr6.eq) goto loc_82CEAAB0;
loc_82CEAAAC:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_82CEAAB0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a68548
	ctx.lr = 0x82CEAAC0;
	sub_82A68548(ctx, base);
loc_82CEAAC0:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEAAC8;
	sub_8387E8E0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82cea9f0
	if (cr6.lt) goto loc_82CEA9F0;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ceaafc
	if (cr6.lt) goto loc_82CEAAFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CEAAFC;
	sub_825952B8(ctx, base);
loc_82CEAAFC:
	// addi r1,r1,2288
	ctx.r1.s64 = ctx.r1.s64 + 2288;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82CEAB08:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEAB10;
	sub_8387E8E0(ctx, base);
loc_82CEAB10:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEAB18;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,2288
	ctx.r1.s64 = ctx.r1.s64 + 2288;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEAB24"))) PPC_WEAK_FUNC(sub_82CEAB24);
PPC_FUNC_IMPL(__imp__sub_82CEAB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEAB28"))) PPC_WEAK_FUNC(sub_82CEAB28);
PPC_FUNC_IMPL(__imp__sub_82CEAB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82CEAB30;
	__savegprlr_18(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r24,r11,15412
	ctx.r24.s64 = ctx.r11.s64 + 15412;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// addi r11,r24,2096
	ctx.r11.s64 = ctx.r24.s64 + 2096;
	// addi r10,r24,2112
	ctx.r10.s64 = ctx.r24.s64 + 2112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82CEAB58;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CEAB70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceade4
	if (cr6.eq) goto loc_82CEADE4;
	// addi r4,r24,-79
	ctx.r4.s64 = ctx.r24.s64 + -79;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82CEAB88;
	sub_837B0C10(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r19,r31,100
	ctx.r19.s64 = ctx.r31.s64 + 100;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r22,15
	ctx.r22.s64 = 15;
	// li r18,2
	ctx.r18.s64 = 2;
	// addi r20,r11,14320
	ctx.r20.s64 = ctx.r11.s64 + 14320;
loc_82CEABA4:
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r4,r24,2128
	ctx.r4.s64 = ctx.r24.s64 + 2128;
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CEABC4;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83165d78
	ctx.lr = 0x82CEABD8;
	sub_83165D78(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ceabec
	if (!cr6.lt) goto loc_82CEABEC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CEABEC:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CEABF4;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceadec
	if (cr6.eq) goto loc_82CEADEC;
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// addi r4,r24,2140
	ctx.r4.s64 = ctx.r24.s64 + 2140;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82CEAC20;
	sub_8259CC28(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r5,r10,r20
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// bl 0x82a69a28
	ctx.lr = 0x82CEAC38;
	sub_82A69A28(ctx, base);
	// lwz r6,1768(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1768);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r4,1716(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1716);
	// bl 0x82d01390
	ctx.lr = 0x82CEAC54;
	sub_82D01390(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r25,r3,24
	ctx.r25.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r4,r24,2156
	ctx.r4.s64 = ctx.r24.s64 + 2156;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82ceac80
	if (!cr6.eq) goto loc_82CEAC80;
	// addi r4,r24,2172
	ctx.r4.s64 = ctx.r24.s64 + 2172;
loc_82CEAC80:
	// bctrl 
	ctx.lr = 0x82CEAC84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r24,2188
	ctx.r4.s64 = ctx.r24.s64 + 2188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEAC9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ceacc0
	if (!cr6.eq) goto loc_82CEACC0;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ceada8
	if (cr6.lt) goto loc_82CEADA8;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// b 0x82ceada0
	goto loc_82CEADA0;
loc_82CEACC0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,1768(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1768);
	// bl 0x82d01090
	ctx.lr = 0x82CEACCC;
	sub_82D01090(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// beq cr6,0x82ceace0
	if (cr6.eq) goto loc_82CEACE0;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bne cr6,0x82ceace4
	if (!cr6.eq) goto loc_82CEACE4;
loc_82CEACE0:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82CEACE4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a68548
	ctx.lr = 0x82CEACF8;
	sub_82A68548(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
loc_82CEAD00:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEAD18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cead7c
	if (cr6.eq) goto loc_82CEAD7C;
	// cmplwi cr6,r25,1
	cr6.compare<uint32_t>(ctx.r25.u32, 1, xer);
	// bne cr6,0x82cead38
	if (!cr6.eq) goto loc_82CEAD38;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// beq cr6,0x82cead3c
	if (cr6.eq) goto loc_82CEAD3C;
loc_82CEAD38:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82CEAD3C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a68548
	ctx.lr = 0x82CEAD4C;
	sub_82A68548(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d01260
	ctx.lr = 0x82CEAD58;
	sub_82D01260(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x82cead7c
	if (cr6.eq) goto loc_82CEAD7C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d01260
	ctx.lr = 0x82CEAD6C;
	sub_82D01260(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// beq cr6,0x82cead7c
	if (cr6.eq) goto loc_82CEAD7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a68650
	ctx.lr = 0x82CEAD7C;
	sub_82A68650(ctx, base);
loc_82CEAD7C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82cead00
	if (cr6.lt) goto loc_82CEAD00;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ceada8
	if (cr6.lt) goto loc_82CEADA8;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
loc_82CEADA0:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CEADA8;
	sub_825952B8(ctx, base);
loc_82CEADA8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82ceaba4
	if (cr6.lt) goto loc_82CEABA4;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ceade4
	if (cr6.lt) goto loc_82CEADE4;
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82CEADE4;
	sub_825952B8(ctx, base);
loc_82CEADE4:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82CEADEC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ceae08
	if (cr6.lt) goto loc_82CEAE08;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CEAE08;
	sub_825952B8(ctx, base);
loc_82CEAE08:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// blt cr6,0x82ceade4
	if (cr6.lt) goto loc_82CEADE4;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82CEAE30;
	sub_825952B8(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEAE38"))) PPC_WEAK_FUNC(sub_82CEAE38);
PPC_FUNC_IMPL(__imp__sub_82CEAE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CEAE40;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CEAE50;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceb46c
	if (cr6.eq) goto loc_82CEB46C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CEAE64;
	sub_82DAB6D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CEAE6C;
	sub_831156E8(ctx, base);
	// lwz r11,2640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2640);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82ceb42c
	if (cr6.gt) goto loc_82CEB42C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ceaf18
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEAF18;
	// bdzf 4*cr6+eq,0x82ceb17c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEB17C;
	// bdzf 4*cr6+eq,0x82ceb320
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEB320;
	// bdzf 4*cr6+eq,0x82ceb348
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEB348;
	// bne cr6,0x82ceb414
	if (!cr6.eq) goto loc_82CEB414;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82ceaefc
	if (cr6.gt) goto loc_82CEAEFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ceaed4
	if (cr6.eq) goto loc_82CEAED4;
	// bdz 0x82ceaecc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CEAECC;
	// bdz 0x82ceaedc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CEAEDC;
	// bdz 0x82ceaee4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CEAEE4;
	// bdz 0x82ceaefc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CEAEFC;
	// bdz 0x82ceaeec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CEAEEC;
	// b 0x82ceaef4
	goto loc_82CEAEF4;
loc_82CEAECC:
	// stw r26,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r26.u32);
	// b 0x82ceaefc
	goto loc_82CEAEFC;
loc_82CEAED4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82ceaef8
	goto loc_82CEAEF8;
loc_82CEAEDC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82ceaef8
	goto loc_82CEAEF8;
loc_82CEAEE4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82ceaef8
	goto loc_82CEAEF8;
loc_82CEAEEC:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82ceaef8
	goto loc_82CEAEF8;
loc_82CEAEF4:
	// li r11,5
	ctx.r11.s64 = 5;
loc_82CEAEF8:
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
loc_82CEAEFC:
	// lbz r11,2657(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2657);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ceb424
	if (!cr6.eq) goto loc_82CEB424;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d976f0
	ctx.lr = 0x82CEAF14;
	sub_82D976F0(ctx, base);
	// b 0x82ceb424
	goto loc_82CEB424;
loc_82CEAF18:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// li r29,11
	ctx.r29.s64 = 11;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82ceaf58
	if (cr6.gt) goto loc_82CEAF58;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ceaf60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEAF60;
	// bdzf 4*cr6+eq,0x82ceaf88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEAF88;
	// bdzf 4*cr6+eq,0x82ceb098
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEB098;
	// bdzf 4*cr6+eq,0x82ceb0c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEB0C4;
	// bdzf 4*cr6+eq,0x82ceafa8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEAFA8;
	// bdzf 4*cr6+eq,0x82ceaf58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEAF58;
	// bdzf 4*cr6+eq,0x82ceb0b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEB0B4;
	// bne cr6,0x82ceb0a8
	if (!cr6.eq) goto loc_82CEB0A8;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
loc_82CEAF58:
	// stw r29,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r29.u32);
	// b 0x82ceb42c
	goto loc_82CEB42C;
loc_82CEAF60:
	// lbz r11,2657(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2657);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ceaf78
	if (!cr6.eq) goto loc_82CEAF78;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d976f0
	ctx.lr = 0x82CEAF78;
	sub_82D976F0(ctx, base);
loc_82CEAF78:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r29,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r29.u32);
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// b 0x82ceb42c
	goto loc_82CEB42C;
loc_82CEAF88:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,172
	ctx.r4.u64 = ctx.r4.u64 | 172;
	// bl 0x82ce9958
	ctx.lr = 0x82CEAF98;
	sub_82CE9958(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CEAFA8:
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r26,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r26.u16);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x82ce78a0
	ctx.lr = 0x82CEAFBC;
	sub_82CE78A0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ceb46c
	if (cr6.eq) goto loc_82CEB46C;
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r30,100(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x825832d8
	ctx.lr = 0x82CEB000;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CEB004;
	sub_83102DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CEB00C;
	sub_82D9A868(ctx, base);
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r6,15365
	ctx.r11.s64 = ctx.r6.s64 + 15365;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x837b0c10
	ctx.lr = 0x82CEB024;
	sub_837B0C10(ctx, base);
	// lbz r5,66(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 66);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ceb044
	if (cr6.eq) goto loc_82CEB044;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,244
	ctx.r4.u64 = ctx.r4.u64 | 244;
	// bl 0x82d042a8
	ctx.lr = 0x82CEB040;
	sub_82D042A8(ctx, base);
	// b 0x82ceb068
	goto loc_82CEB068;
loc_82CEB044:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82CEB050;
	sub_8311BF98(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r3,56
	ctx.r5.s64 = ctx.r3.s64 + 56;
	// lwz r6,68(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// ori r4,r4,158
	ctx.r4.u64 = ctx.r4.u64 | 158;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CEB068;
	sub_82D042A8(ctx, base);
loc_82CEB068:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8292a3f8
	ctx.lr = 0x82CEB074;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce9638
	ctx.lr = 0x82CEB080;
	sub_82CE9638(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82CEB090;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CEB098:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r29,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r29.u32);
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// b 0x82ceb42c
	goto loc_82CEB42C;
loc_82CEB0A8:
	// stw r29,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r29.u32);
	// stw r29,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r29.u32);
	// b 0x82ceb42c
	goto loc_82CEB42C;
loc_82CEB0B4:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r29,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r29.u32);
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// b 0x82ceb42c
	goto loc_82CEB42C;
loc_82CEB0C4:
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r26,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r26.u16);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x82ce78a0
	ctx.lr = 0x82CEB0D8;
	sub_82CE78A0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ceb46c
	if (cr6.eq) goto loc_82CEB46C;
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82CEB120;
	sub_8311BF98(ctx, base);
	// lis r5,-32238
	ctx.r5.s64 = -2112749568;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r5,15365
	ctx.r11.s64 = ctx.r5.s64 + 15365;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19
	ctx.r4.s64 = ctx.r11.s64 + -19;
	// bl 0x837b0c10
	ctx.lr = 0x82CEB138;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// ori r4,r4,307
	ctx.r4.u64 = ctx.r4.u64 | 307;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CEB14C;
	sub_82D042A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8292a3f8
	ctx.lr = 0x82CEB158;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce9638
	ctx.lr = 0x82CEB164;
	sub_82CE9638(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r4,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r4.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82CEB174;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CEB17C:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// li r29,11
	ctx.r29.s64 = 11;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82ceb30c
	if (cr6.gt) goto loc_82CEB30C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ceb26c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEB26C;
	// bdzf 4*cr6+eq,0x82ceb298
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEB298;
	// bdzf 4*cr6+eq,0x82ceb1bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEB1BC;
	// bdzf 4*cr6+eq,0x82ceb30c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEB30C;
	// bdzf 4*cr6+eq,0x82ceb288
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEB288;
	// bne cr6,0x82ceb27c
	if (!cr6.eq) goto loc_82CEB27C;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r29,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r29.u32);
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// b 0x82ceb42c
	goto loc_82CEB42C;
loc_82CEB1BC:
	// lwz r29,1756(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x825832d8
	ctx.lr = 0x82CEB1D4;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CEB1D8;
	sub_83102DB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CEB1E0;
	sub_82D9A868(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r10,15365
	ctx.r11.s64 = ctx.r10.s64 + 15365;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-18
	ctx.r4.s64 = ctx.r11.s64 + -18;
	// bl 0x837b0c10
	ctx.lr = 0x82CEB1F8;
	sub_837B0C10(ctx, base);
	// lbz r9,66(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 66);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ceb218
	if (cr6.eq) goto loc_82CEB218;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,244
	ctx.r4.u64 = ctx.r4.u64 | 244;
	// bl 0x82d042a8
	ctx.lr = 0x82CEB214;
	sub_82D042A8(ctx, base);
	// b 0x82ceb23c
	goto loc_82CEB23C;
loc_82CEB218:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82CEB224;
	sub_8311BF98(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r3,56
	ctx.r5.s64 = ctx.r3.s64 + 56;
	// lwz r6,68(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// ori r4,r4,158
	ctx.r4.u64 = ctx.r4.u64 | 158;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CEB23C;
	sub_82D042A8(ctx, base);
loc_82CEB23C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8292a3f8
	ctx.lr = 0x82CEB248;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce9638
	ctx.lr = 0x82CEB254;
	sub_82CE9638(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82CEB264;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CEB26C:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r29,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r29.u32);
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// b 0x82ceb42c
	goto loc_82CEB42C;
loc_82CEB27C:
	// stw r29,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r29.u32);
	// stw r29,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r29.u32);
	// b 0x82ceb42c
	goto loc_82CEB42C;
loc_82CEB288:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r29,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r29.u32);
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// b 0x82ceb42c
	goto loc_82CEB42C;
loc_82CEB298:
	// lwz r11,1756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82CEB2B4;
	sub_8311BF98(ctx, base);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r9,15365
	ctx.r4.s64 = ctx.r9.s64 + 15365;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CEB2C8;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// ori r4,r4,307
	ctx.r4.u64 = ctx.r4.u64 | 307;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CEB2DC;
	sub_82D042A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8292a3f8
	ctx.lr = 0x82CEB2E8;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce9638
	ctx.lr = 0x82CEB2F4;
	sub_82CE9638(ctx, base);
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r8.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82CEB304;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CEB30C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce97e8
	ctx.lr = 0x82CEB318;
	sub_82CE97E8(ctx, base);
	// stw r29,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r29.u32);
	// b 0x82ceb42c
	goto loc_82CEB42C;
loc_82CEB320:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// bne cr6,0x82ceb424
	if (!cr6.eq) goto loc_82CEB424;
	// lbz r11,2657(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2657);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ceb340
	if (!cr6.eq) goto loc_82CEB340;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d976f0
	ctx.lr = 0x82CEB340;
	sub_82D976F0(ctx, base);
loc_82CEB340:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82ceb420
	goto loc_82CEB420;
loc_82CEB348:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82ceb424
	if (cr6.gt) goto loc_82CEB424;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ceb384
	if (cr6.eq) goto loc_82CEB384;
	// bdz 0x82ceb38c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CEB38C;
	// bdz 0x82ceb37c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CEB37C;
	// bdz 0x82ceb3a8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CEB3A8;
	// bdz 0x82ceb3c8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CEB3C8;
	// bdz 0x82ceb424
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CEB424;
	// bdz 0x82ceb3e8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CEB3E8;
	// b 0x82ceb3f0
	goto loc_82CEB3F0;
loc_82CEB37C:
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82ceb420
	goto loc_82CEB420;
loc_82CEB384:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82ceb420
	goto loc_82CEB420;
loc_82CEB38C:
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x825832e0
	ctx.lr = 0x82CEB394;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8307e038
	ctx.lr = 0x82CEB3A0;
	sub_8307E038(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x82ceb420
	goto loc_82CEB420;
loc_82CEB3A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d976f0
	ctx.lr = 0x82CEB3B4;
	sub_82D976F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d976d0
	ctx.lr = 0x82CEB3C0;
	sub_82D976D0(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x82ceb420
	goto loc_82CEB420;
loc_82CEB3C8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d976f0
	ctx.lr = 0x82CEB3D4;
	sub_82D976F0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d976d0
	ctx.lr = 0x82CEB3E0;
	sub_82D976D0(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x82ceb420
	goto loc_82CEB420;
loc_82CEB3E8:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82ceb420
	goto loc_82CEB420;
loc_82CEB3F0:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,1716(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1716);
	// bl 0x82d97540
	ctx.lr = 0x82CEB408;
	sub_82D97540(ctx, base);
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r9,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r9.u32);
	// b 0x82ceb424
	goto loc_82CEB424;
loc_82CEB414:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82ceb424
	if (!cr6.eq) goto loc_82CEB424;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82CEB420:
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
loc_82CEB424:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r11.u32);
loc_82CEB42C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce7f28
	ctx.lr = 0x82CEB434;
	sub_82CE7F28(ctx, base);
	// lwz r11,1704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// beq cr6,0x82ceb46c
	if (cr6.eq) goto loc_82CEB46C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stb r26,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r26.u8);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,8192
	ctx.r8.u64 = ctx.r10.u64 | 8192;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82CEB46C;
	sub_83103068(ctx, base);
loc_82CEB46C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEB474"))) PPC_WEAK_FUNC(sub_82CEB474);
PPC_FUNC_IMPL(__imp__sub_82CEB474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEB478"))) PPC_WEAK_FUNC(sub_82CEB478);
PPC_FUNC_IMPL(__imp__sub_82CEB478) {
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
	// lwz r11,1772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1772);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x82ceb49c
	if (!cr0.lt) goto loc_82CEB49C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82CEB49C:
	// stw r11,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce9d70
	ctx.lr = 0x82CEB4A8;
	sub_82CE9D70(ctx, base);
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CEB4B4;
	sub_82D17DA0(ctx, base);
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

__attribute__((alias("__imp__sub_82CEB4C8"))) PPC_WEAK_FUNC(sub_82CEB4C8);
PPC_FUNC_IMPL(__imp__sub_82CEB4C8) {
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
	// lwz r11,1772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1772);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
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
	// stw r7,1772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1772, ctx.r7.u32);
	// bl 0x82ce9d70
	ctx.lr = 0x82CEB4FC;
	sub_82CE9D70(ctx, base);
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CEB508;
	sub_82D17DA0(ctx, base);
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

__attribute__((alias("__imp__sub_82CEB51C"))) PPC_WEAK_FUNC(sub_82CEB51C);
PPC_FUNC_IMPL(__imp__sub_82CEB51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEB520"))) PPC_WEAK_FUNC(sub_82CEB520);
PPC_FUNC_IMPL(__imp__sub_82CEB520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CEB528;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CEB538;
	sub_831156E8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r27,1744(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ceb8f0
	if (cr6.eq) goto loc_82CEB8F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEB554;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r25,r11,15568
	ctx.r25.s64 = ctx.r11.s64 + 15568;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-28
	ctx.r4.s64 = ctx.r25.s64 + -28;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEB574;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceba60
	if (cr6.eq) goto loc_82CEBA60;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_82CEB58C:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,100(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82ceb69c
	if (cr6.eq) goto loc_82CEB69C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8311bf98
	ctx.lr = 0x82CEB5D4;
	sub_8311BF98(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lwz r11,1748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83123620
	ctx.lr = 0x82CEB5E8;
	sub_83123620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x83120738
	ctx.lr = 0x82CEB5F8;
	sub_83120738(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ceb698
	if (cr6.eq) goto loc_82CEB698;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r4,r25,2668
	ctx.r4.s64 = ctx.r25.s64 + 2668;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82CEB614;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82CEB628;
	sub_83165D78(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ceb63c
	if (!cr6.lt) goto loc_82CEB63C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82CEB63C:
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEB650;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceb868
	if (cr6.eq) goto loc_82CEB868;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,2680
	ctx.r4.s64 = ctx.r25.s64 + 2680;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEB674;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r25,2696
	ctx.r4.s64 = ctx.r25.s64 + 2696;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CEB690;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEB698;
	sub_8387E8E0(ctx, base);
loc_82CEB698:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82CEB69C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// ble cr6,0x82ceb58c
	if (!cr6.gt) goto loc_82CEB58C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEB6B8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,-12
	ctx.r4.s64 = ctx.r25.s64 + -12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEB6D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceba60
	if (cr6.eq) goto loc_82CEBA60;
	// li r28,11
	ctx.r28.s64 = 11;
loc_82CEB6E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CEB6EC;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceba60
	if (cr6.eq) goto loc_82CEBA60;
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,100(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82ceb7ac
	if (cr6.eq) goto loc_82CEB7AC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8311bf98
	ctx.lr = 0x82CEB744;
	sub_8311BF98(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lwz r11,1748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83123620
	ctx.lr = 0x82CEB758;
	sub_83123620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x83120738
	ctx.lr = 0x82CEB768;
	sub_83120738(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ceb7ac
	if (cr6.eq) goto loc_82CEB7AC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r25,2712
	ctx.r4.s64 = ctx.r25.s64 + 2712;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEB790;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r25,2728
	ctx.r4.s64 = ctx.r25.s64 + 2728;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CEB7AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CEB7AC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,18
	cr6.compare<uint32_t>(ctx.r28.u32, 18, xer);
	// blt cr6,0x82ceb6e0
	if (cr6.lt) goto loc_82CEB6E0;
	// bl 0x82d86078
	ctx.lr = 0x82CEB7BC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceba60
	if (cr6.eq) goto loc_82CEBA60;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CEB7CC;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CEB7D0;
	sub_83102DB0(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CEB7D4;
	sub_83102DB0(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82ceb87c
	if (cr6.eq) goto loc_82CEB87C;
	// addi r27,r31,244
	ctx.r27.s64 = ctx.r31.s64 + 244;
loc_82CEB7EC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d98cb0
	ctx.lr = 0x82CEB7F8;
	sub_82D98CB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ceb854
	if (!cr6.eq) goto loc_82CEB854;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82ceb858
	if (cr6.eq) goto loc_82CEB858;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8311bf98
	ctx.lr = 0x82CEB824;
	sub_8311BF98(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lwz r11,1748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83123620
	ctx.lr = 0x82CEB838;
	sub_83123620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x83120738
	ctx.lr = 0x82CEB848;
	sub_83120738(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ceb878
	if (!cr6.eq) goto loc_82CEB878;
loc_82CEB854:
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
loc_82CEB858:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ceb7ec
	if (!cr6.eq) goto loc_82CEB7EC;
	// b 0x82ceb87c
	goto loc_82CEB87C;
loc_82CEB868:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEB870;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82CEB878:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82CEB87C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ceba60
	if (cr6.eq) goto loc_82CEBA60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEB890;
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
	ctx.lr = 0x82CEB8A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceba60
	if (cr6.eq) goto loc_82CEBA60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,2744
	ctx.r4.s64 = ctx.r25.s64 + 2744;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEB8CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,2760
	ctx.r4.s64 = ctx.r25.s64 + 2760;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CEB8E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82CEB8F0:
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r28,r11,15568
	ctx.r28.s64 = ctx.r11.s64 + 15568;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
loc_82CEB90C:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
	// beq cr6,0x82ceba34
	if (cr6.eq) goto loc_82CEBA34;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8311bf98
	ctx.lr = 0x82CEB928;
	sub_8311BF98(ctx, base);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,1784(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1784);
	// bl 0x83123620
	ctx.lr = 0x82CEB958;
	sub_83123620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x83120738
	ctx.lr = 0x82CEB968;
	sub_83120738(ctx, base);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ceba34
	if (cr6.eq) goto loc_82CEBA34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEB97C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEB994;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceba60
	if (cr6.eq) goto loc_82CEBA60;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r4,r28,2776
	ctx.r4.s64 = ctx.r28.s64 + 2776;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82CEB9B0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82CEB9C4;
	sub_83165D78(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ceb9d8
	if (!cr6.lt) goto loc_82CEB9D8;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_82CEB9D8:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEB9EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceba50
	if (cr6.eq) goto loc_82CEBA50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,2788
	ctx.r4.s64 = ctx.r28.s64 + 2788;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEBA10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r28,2804
	ctx.r4.s64 = ctx.r28.s64 + 2804;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CEBA2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEBA34;
	sub_8387E8E0(ctx, base);
loc_82CEBA34:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// ble cr6,0x82ceb90c
	if (!cr6.gt) goto loc_82CEB90C;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82CEBA50:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEBA58;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f73d60
	ctx.lr = 0x82CEBA60;
	sub_82F73D60(ctx, base);
loc_82CEBA60:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEBA68"))) PPC_WEAK_FUNC(sub_82CEBA68);
PPC_FUNC_IMPL(__imp__sub_82CEBA68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CEBA70;
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82CEBA98;
	sub_8259CB28(ctx, base);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// subf r27,r31,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r28,18
	ctx.r28.s64 = 18;
loc_82CEBAA4:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82CEBAB4;
	sub_831CE980(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// bne 0x82cebaa4
	if (!cr0.eq) goto loc_82CEBAA4;
	// lwz r11,896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	// addi r4,r30,920
	ctx.r4.s64 = ctx.r30.s64 + 920;
	// addi r3,r31,920
	ctx.r3.s64 = ctx.r31.s64 + 920;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// lwz r10,900(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// lwz r9,904(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 904);
	// stw r9,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r9.u32);
	// lwz r8,908(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 908);
	// stw r8,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r8.u32);
	// lwz r7,912(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// stw r7,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r7.u32);
	// lwz r6,916(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 916);
	// stw r6,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r6.u32);
	// bl 0x82ce7a90
	ctx.lr = 0x82CEBAFC;
	sub_82CE7A90(ctx, base);
	// lfs f0,1448(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1448, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,1452(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1452(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1452, temp.u32);
	// lfs f12,1456(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1456(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1456, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEBB20"))) PPC_WEAK_FUNC(sub_82CEBB20);
PPC_FUNC_IMPL(__imp__sub_82CEBB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82CEBB28;
	__savegprlr_20(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4800(r1)
	ea = -4800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CEBB38;
	sub_82D86078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cec168
	if (cr6.eq) goto loc_82CEC168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce78a0
	ctx.lr = 0x82CEBB4C;
	sub_82CE78A0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cec168
	if (cr6.eq) goto loc_82CEC168;
	// addi r4,r30,244
	ctx.r4.s64 = ctx.r30.s64 + 244;
	// addi r3,r1,3232
	ctx.r3.s64 = ctx.r1.s64 + 3232;
	// bl 0x82ce9718
	ctx.lr = 0x82CEBB64;
	sub_82CE9718(ctx, base);
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// li r28,0
	ctx.r28.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82CEBB74:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stbu r28,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82cebb74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CEBB74;
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,144
	ctx.r5.s64 = 144;
	// bl 0x831ce980
	ctx.lr = 0x82CEBB90;
	sub_831CE980(ctx, base);
	// lwz r11,1708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	// lwz r25,1712(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82cebbdc
	if (!cr6.eq) goto loc_82CEBBDC;
	// lwz r3,116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CEBBA8;
	sub_82DAB6D0(ctx, base);
	// lwz r11,1768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r31,r9,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// bl 0x825832e0
	ctx.lr = 0x82CEBBCC;
	sub_825832E0(ctx, base);
	// rlwinm r8,r31,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stwx r3,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r3.u32);
	// b 0x82cebc14
	goto loc_82CEBC14;
loc_82CEBBDC:
	// cmplwi cr6,r25,18
	cr6.compare<uint32_t>(ctx.r25.u32, 18, xer);
	// bne cr6,0x82cebc18
	if (!cr6.eq) goto loc_82CEBC18;
	// lwz r11,1768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,1744(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1744);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r6,r11,111
	ctx.r6.s64 = ctx.r11.s64 + 111;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r5,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r8,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r8.u32);
loc_82CEBC14:
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82CEBC18:
	// li r10,54
	ctx.r10.s64 = 54;
	// addi r11,r1,236
	ctx.r11.s64 = ctx.r1.s64 + 236;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,13
	ctx.r9.s64 = 13;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82CEBC30:
	// stb r28,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r28.u8);
	// stb r28,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r28.u8);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82cebc30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CEBC30;
	// addi r4,r30,1776
	ctx.r4.s64 = ctx.r30.s64 + 1776;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// li r5,864
	ctx.r5.s64 = 864;
	// bl 0x831ce980
	ctx.lr = 0x82CEBC58;
	sub_831CE980(ctx, base);
	// addi r29,r1,1104
	ctx.r29.s64 = ctx.r1.s64 + 1104;
	// li r31,2
	ctx.r31.s64 = 2;
loc_82CEBC60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce8030
	ctx.lr = 0x82CEBC68;
	sub_82CE8030(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r29,r29,532
	ctx.r29.s64 = ctx.r29.s64 + 532;
	// bge 0x82cebc60
	if (!cr0.lt) goto loc_82CEBC60;
	// addi r4,r30,2672
	ctx.r4.s64 = ctx.r30.s64 + 2672;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// li r5,1596
	ctx.r5.s64 = 1596;
	// bl 0x831ce980
	ctx.lr = 0x82CEBC84;
	sub_831CE980(ctx, base);
	// lwz r11,1708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82cebe6c
	if (cr6.eq) goto loc_82CEBE6C;
	// cmplwi cr6,r25,11
	cr6.compare<uint32_t>(ctx.r25.u32, 11, xer);
	// bge cr6,0x82cebddc
	if (!cr6.lt) goto loc_82CEBDDC;
	// cmplwi cr6,r26,11
	cr6.compare<uint32_t>(ctx.r26.u32, 11, xer);
	// bge cr6,0x82cebddc
	if (!cr6.lt) goto loc_82CEBDDC;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82cebe0c
	if (cr6.eq) goto loc_82CEBE0C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82cebddc
	if (cr6.eq) goto loc_82CEBDDC;
	// lwz r8,1768(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// add r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r11,r8,r26
	ctx.r11.u64 = ctx.r8.u64 + ctx.r26.u64;
	// add r5,r8,r25
	ctx.r5.u64 = ctx.r8.u64 + ctx.r25.u64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 + ctx.r26.u64;
	// lwzx r29,r5,r6
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// add r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 + ctx.r25.u64;
	// rlwinm r20,r4,4,0,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r22,r1,240
	ctx.r22.s64 = ctx.r1.s64 + 240;
	// addi r21,r1,240
	ctx.r21.s64 = ctx.r1.s64 + 240;
	// stwx r11,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r11.u32);
	// rlwinm r5,r3,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r29,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r29.u32);
	// mulli r4,r31,11
	ctx.r4.s64 = ctx.r31.s64 * 11;
	// mulli r3,r31,11
	ctx.r3.s64 = ctx.r31.s64 * 11;
	// mulli r6,r31,11
	ctx.r6.s64 = ctx.r31.s64 * 11;
	// lwzx r31,r20,r22
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r22.u32);
	// lwzx r5,r5,r21
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CEBD44:
	// li r9,11
	ctx.r9.s64 = 11;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r8,r1,1104
	ctx.r8.s64 = ctx.r1.s64 + 1104;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82CEBD54:
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r9,r7,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cebd70
	if (!cr6.eq) goto loc_82CEBD70;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_82CEBD70:
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r8,r1,1104
	ctx.r8.s64 = ctx.r1.s64 + 1104;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r9,r7,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cebd90
	if (!cr6.eq) goto loc_82CEBD90;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
loc_82CEBD90:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r1,1104
	ctx.r8.s64 = ctx.r1.s64 + 1104;
	// bdnz 0x82cebd54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CEBD54;
	// add r10,r6,r23
	ctx.r10.u64 = ctx.r6.u64 + ctx.r23.u64;
	// add r8,r6,r24
	ctx.r8.u64 = ctx.r6.u64 + ctx.r24.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r1,1104
	ctx.r7.s64 = ctx.r1.s64 + 1104;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r1,1104
	ctx.r9.s64 = ctx.r1.s64 + 1104;
	// addi r11,r11,532
	ctx.r11.s64 = ctx.r11.s64 + 532;
	// lwzx r29,r8,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,1596
	cr6.compare<uint32_t>(ctx.r11.u32, 1596, xer);
	// lwzx r22,r10,r9
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// stwx r22,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r22.u32);
	// blt cr6,0x82cebd44
	if (cr6.lt) goto loc_82CEBD44;
	// b 0x82cebe6c
	goto loc_82CEBE6C;
loc_82CEBDDC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82cebe0c
	if (cr6.eq) goto loc_82CEBE0C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82cebe0c
	if (cr6.eq) goto loc_82CEBE0C;
	// cmplwi cr6,r25,11
	cr6.compare<uint32_t>(ctx.r25.u32, 11, xer);
	// blt cr6,0x82cebdfc
	if (cr6.lt) goto loc_82CEBDFC;
	// cmplwi cr6,r25,18
	cr6.compare<uint32_t>(ctx.r25.u32, 18, xer);
	// blt cr6,0x82cebe0c
	if (cr6.lt) goto loc_82CEBE0C;
loc_82CEBDFC:
	// cmplwi cr6,r26,11
	cr6.compare<uint32_t>(ctx.r26.u32, 11, xer);
	// blt cr6,0x82cebe6c
	if (cr6.lt) goto loc_82CEBE6C;
	// cmplwi cr6,r26,18
	cr6.compare<uint32_t>(ctx.r26.u32, 18, xer);
	// bge cr6,0x82cebe6c
	if (!cr6.lt) goto loc_82CEBE6C;
loc_82CEBE0C:
	// lwz r11,1768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r11,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r6,r10,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
loc_82CEBE6C:
	// lwz r3,116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CEBE74;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CEBE78;
	sub_83102DB0(ctx, base);
	// lwz r11,1768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r25
	ctx.r6.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bl 0x82d9a868
	ctx.lr = 0x82CEBEAC;
	sub_82D9A868(ctx, base);
	// lwz r11,1768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,3232
	ctx.r3.s64 = ctx.r1.s64 + 3232;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r6,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// bl 0x82d996b0
	ctx.lr = 0x82CEBED8;
	sub_82D996B0(ctx, base);
	// lwz r11,1768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r7,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// bl 0x82d9a868
	ctx.lr = 0x82CEBF0C;
	sub_82D9A868(ctx, base);
	// lwz r11,1768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,3232
	ctx.r3.s64 = ctx.r1.s64 + 3232;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r10,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// bl 0x82d996b0
	ctx.lr = 0x82CEBF38;
	sub_82D996B0(ctx, base);
	// addi r3,r1,3232
	ctx.r3.s64 = ctx.r1.s64 + 3232;
	// bl 0x82d98930
	ctx.lr = 0x82CEBF40;
	sub_82D98930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x82CEBF50;
	sub_831CE980(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ac0af0
	ctx.lr = 0x82CEBF58;
	sub_82AC0AF0(ctx, base);
	// lwz r9,1768(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82cebf84
	if (!cr6.lt) goto loc_82CEBF84;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,2704
	ctx.r10.s64 = ctx.r1.s64 + 2704;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82CEBF84;
	sub_82ABFDA0(ctx, base);
loc_82CEBF84:
	// lwz r8,1768(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// addi r9,r1,1104
	ctx.r9.s64 = ctx.r1.s64 + 1104;
	// mulli r11,r8,11
	ctx.r11.s64 = ctx.r8.s64 * 11;
loc_82CEBF94:
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplwi cr6,r24,11
	cr6.compare<uint32_t>(ctx.r24.u32, 11, xer);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bge cr6,0x82cec040
	if (!cr6.lt) goto loc_82CEC040;
	// clrlwi r29,r9,24
	ctx.r29.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r1,1108
	ctx.r11.s64 = ctx.r1.s64 + 1108;
	// clrlwi r31,r27,24
	ctx.r31.u64 = ctx.r27.u32 & 0xFF;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ac0388
	ctx.lr = 0x82CEBFCC;
	sub_82AC0388(ctx, base);
	// lwz r8,1768(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// addi r7,r1,1112
	ctx.r7.s64 = ctx.r1.s64 + 1112;
	// mulli r11,r8,11
	ctx.r11.s64 = ctx.r8.s64 * 11;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwzx r10,r5,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// blt cr6,0x82cec02c
	if (cr6.lt) goto loc_82CEC02C;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// beq cr6,0x82cec018
	if (cr6.eq) goto loc_82CEC018;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x82cec040
	if (!cr6.lt) goto loc_82CEC040;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bge cr6,0x82cec040
	if (!cr6.lt) goto loc_82CEC040;
	// addi r7,r1,146
	ctx.r7.s64 = ctx.r1.s64 + 146;
	// b 0x82cec03c
	goto loc_82CEC03C;
loc_82CEC018:
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bge cr6,0x82cec040
	if (!cr6.lt) goto loc_82CEC040;
	// addi r7,r1,113
	ctx.r7.s64 = ctx.r1.s64 + 113;
	// b 0x82cec03c
	goto loc_82CEC03C;
loc_82CEC02C:
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bge cr6,0x82cec040
	if (!cr6.lt) goto loc_82CEC040;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
loc_82CEC03C:
	// stbx r10,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u8);
loc_82CEC040:
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r9,r1,1104
	ctx.r9.s64 = ctx.r1.s64 + 1104;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r23,11
	cr6.compare<uint32_t>(ctx.r23.u32, 11, xer);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bge cr6,0x82cec100
	if (!cr6.lt) goto loc_82CEC100;
	// clrlwi r29,r9,24
	ctx.r29.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r1,1108
	ctx.r11.s64 = ctx.r1.s64 + 1108;
	// clrlwi r31,r27,24
	ctx.r31.u64 = ctx.r27.u32 & 0xFF;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ac0388
	ctx.lr = 0x82CEC07C;
	sub_82AC0388(ctx, base);
	// lwz r8,1768(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// addi r7,r1,1112
	ctx.r7.s64 = ctx.r1.s64 + 1112;
	// mulli r11,r8,11
	ctx.r11.s64 = ctx.r8.s64 * 11;
	// add r6,r11,r23
	ctx.r6.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwzx r10,r5,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// blt cr6,0x82cec0ec
	if (cr6.lt) goto loc_82CEC0EC;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// beq cr6,0x82cec0d0
	if (cr6.eq) goto loc_82CEC0D0;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x82cec100
	if (!cr6.lt) goto loc_82CEC100;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bge cr6,0x82cec100
	if (!cr6.lt) goto loc_82CEC100;
	// addi r7,r1,146
	ctx.r7.s64 = ctx.r1.s64 + 146;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// stbx r6,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u8);
	// b 0x82cec100
	goto loc_82CEC100;
loc_82CEC0D0:
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bge cr6,0x82cec100
	if (!cr6.lt) goto loc_82CEC100;
	// addi r7,r1,113
	ctx.r7.s64 = ctx.r1.s64 + 113;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// stbx r6,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u8);
	// b 0x82cec100
	goto loc_82CEC100;
loc_82CEC0EC:
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bge cr6,0x82cec100
	if (!cr6.lt) goto loc_82CEC100;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stbx r10,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u8);
loc_82CEC100:
	// addi r28,r28,532
	ctx.r28.s64 = ctx.r28.s64 + 532;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r28,1596
	cr6.compare<uint32_t>(ctx.r28.u32, 1596, xer);
	// addi r9,r1,1104
	ctx.r9.s64 = ctx.r1.s64 + 1104;
	// blt cr6,0x82cebf94
	if (cr6.lt) goto loc_82CEBF94;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82cec13c
	if (!cr6.lt) goto loc_82CEC13C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,2704
	ctx.r10.s64 = ctx.r1.s64 + 2704;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82CEC13C;
	sub_82ABFDA0(ctx, base);
loc_82CEC13C:
	// addi r4,r1,2704
	ctx.r4.s64 = ctx.r1.s64 + 2704;
	// addi r3,r1,3232
	ctx.r3.s64 = ctx.r1.s64 + 3232;
	// bl 0x82d99658
	ctx.lr = 0x82CEC148;
	sub_82D99658(ctx, base);
	// addi r4,r1,3232
	ctx.r4.s64 = ctx.r1.s64 + 3232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cea1a0
	ctx.lr = 0x82CEC154;
	sub_82CEA1A0(ctx, base);
	// addi r4,r1,3232
	ctx.r4.s64 = ctx.r1.s64 + 3232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cea398
	ctx.lr = 0x82CEC160;
	sub_82CEA398(ctx, base);
	// addi r3,r1,3232
	ctx.r3.s64 = ctx.r1.s64 + 3232;
	// bl 0x838760e0
	ctx.lr = 0x82CEC168;
	sub_838760E0(ctx, base);
loc_82CEC168:
	// addi r1,r1,4800
	ctx.r1.s64 = ctx.r1.s64 + 4800;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEC170"))) PPC_WEAK_FUNC(sub_82CEC170);
PPC_FUNC_IMPL(__imp__sub_82CEC170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CEC178;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEC184;
	sub_82D19A78(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82cec198
	if (!cr6.eq) goto loc_82CEC198;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82CEC198:
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r30,r11,16588
	ctx.r30.s64 = ctx.r11.s64 + 16588;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// bl 0x8259cc28
	ctx.lr = 0x82CEC1C0;
	sub_8259CC28(ctx, base);
	// lwz r6,1768(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,14516
	ctx.r7.s64 = ctx.r8.s64 + 14516;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// bl 0x82a69a28
	ctx.lr = 0x82CEC1E0;
	sub_82A69A28(ctx, base);
	// lwz r4,1768(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82cec1fc
	if (!cr6.eq) goto loc_82CEC1FC;
	// bl 0x82d19a78
	ctx.lr = 0x82CEC1F4;
	sub_82D19A78(ctx, base);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// b 0x82cec204
	goto loc_82CEC204;
loc_82CEC1FC:
	// bl 0x82d19a78
	ctx.lr = 0x82CEC200;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82CEC204:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEC218;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce9c40
	ctx.lr = 0x82CEC220;
	sub_82CE9C40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce9d70
	ctx.lr = 0x82CEC228;
	sub_82CE9D70(ctx, base);
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cea1a0
	ctx.lr = 0x82CEC238;
	sub_82CEA1A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cea398
	ctx.lr = 0x82CEC244;
	sub_82CEA398(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce7660
	ctx.lr = 0x82CEC24C;
	sub_82CE7660(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEC254"))) PPC_WEAK_FUNC(sub_82CEC254);
PPC_FUNC_IMPL(__imp__sub_82CEC254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEC258"))) PPC_WEAK_FUNC(sub_82CEC258);
PPC_FUNC_IMPL(__imp__sub_82CEC258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82CEC260;
	__savegprlr_20(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEC270;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r31,r11,15412
	ctx.r31.s64 = ctx.r11.s64 + 15412;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEC290;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cec764
	if (cr6.eq) goto loc_82CEC764;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82cec2c4
	if (!cr6.eq) goto loc_82CEC2C4;
	// addi r4,r31,1860
	ctx.r4.s64 = ctx.r31.s64 + 1860;
	// bctrl 
	ctx.lr = 0x82CEC2BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82CEC2C4:
	// addi r4,r31,1876
	ctx.r4.s64 = ctx.r31.s64 + 1876;
	// bctrl 
	ctx.lr = 0x82CEC2CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d86078
	ctx.lr = 0x82CEC2D0;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cec764
	if (cr6.eq) goto loc_82CEC764;
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// sth r23,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r23.u16);
	// bl 0x831156e8
	ctx.lr = 0x82CEC2EC;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82CEC300;
	sub_8311BF98(ctx, base);
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825832d8
	ctx.lr = 0x82CEC310;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CEC314;
	sub_83102DB0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CEC320;
	sub_82D9A868(ctx, base);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r31,1892
	ctx.r4.s64 = ctx.r31.s64 + 1892;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CEC340;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cec370
	if (cr6.eq) goto loc_82CEC370;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x82CEC364;
	sub_83120738(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d39310
	ctx.lr = 0x82CEC370;
	sub_82D39310(ctx, base);
loc_82CEC370:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,1908
	ctx.r4.s64 = ctx.r31.s64 + 1908;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEC388;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cec3c0
	if (cr6.eq) goto loc_82CEC3C0;
	// ld r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 44);
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d8c868
	ctx.lr = 0x82CEC3A8;
	sub_82D8C868(ctx, base);
	// lwz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEC3C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CEC3C0:
	// li r11,13
	ctx.r11.s64 = 13;
	// ld r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r28.u32 + 44);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,96(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83179518
	ctx.lr = 0x82CEC3DC;
	sub_83179518(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,1936
	ctx.r4.s64 = ctx.r31.s64 + 1936;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CEC3EC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CEC3FC;
	sub_82A6A1B8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,1952
	ctx.r4.s64 = ctx.r31.s64 + 1952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CEC414;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cec4a4
	if (cr6.eq) goto loc_82CEC4A4;
	// lwz r25,1744(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1744);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82cec474
	if (cr6.eq) goto loc_82CEC474;
	// sth r23,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r23.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82CEC440;
	sub_8311BF98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CEC450;
	sub_82D9A868(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82a678c0
	ctx.lr = 0x82CEC46C;
	sub_82A678C0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x82cec490
	goto loc_82CEC490;
loc_82CEC474:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,96(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a678c0
	ctx.lr = 0x82CEC48C;
	sub_82A678C0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
loc_82CEC490:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,96(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a678c0
	ctx.lr = 0x82CEC4A4;
	sub_82A678C0(ctx, base);
loc_82CEC4A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,1976
	ctx.r4.s64 = ctx.r31.s64 + 1976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEC4BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cec4d0
	if (cr6.eq) goto loc_82CEC4D0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a68da0
	ctx.lr = 0x82CEC4D0;
	sub_82A68DA0(ctx, base);
loc_82CEC4D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,1996
	ctx.r4.s64 = ctx.r31.s64 + 1996;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEC4E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cec4fc
	if (cr6.eq) goto loc_82CEC4FC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a69958
	ctx.lr = 0x82CEC4FC;
	sub_82A69958(ctx, base);
loc_82CEC4FC:
	// addi r4,r31,-170
	ctx.r4.s64 = ctx.r31.s64 + -170;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CEC508;
	sub_837B0C10(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r5,96(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// ori r4,r4,500
	ctx.r4.u64 = ctx.r4.u64 | 500;
	// bl 0x82d042a8
	ctx.lr = 0x82CEC51C;
	sub_82D042A8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cec530
	if (!cr6.lt) goto loc_82CEC530;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82CEC530:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CEC538;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,2020
	ctx.r4.s64 = ctx.r31.s64 + 2020;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82CEC548;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CEC558;
	sub_82A69AD0(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x82CEC568;
	sub_83120738(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82a67598
	ctx.lr = 0x82CEC570;
	sub_82A67598(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,2032
	ctx.r4.s64 = ctx.r31.s64 + 2032;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CEC580;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CEC590;
	sub_82A69A28(ctx, base);
	// addi r4,r31,-169
	ctx.r4.s64 = ctx.r31.s64 + -169;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CEC59C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-151
	ctx.r4.s64 = ctx.r31.s64 + -151;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82CEC5A8;
	sub_837B0C10(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ce78a0
	ctx.lr = 0x82CEC5B0;
	sub_82CE78A0(ctx, base);
	// lbz r11,66(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 66);
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cec604
	if (cr6.eq) goto loc_82CEC604;
	// addi r4,r31,-150
	ctx.r4.s64 = ctx.r31.s64 + -150;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x837b0c10
	ctx.lr = 0x82CEC5D0;
	sub_837B0C10(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r5,r28,56
	ctx.r5.s64 = ctx.r28.s64 + 56;
	// ori r4,r4,347
	ctx.r4.u64 = ctx.r4.u64 | 347;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82d042a8
	ctx.lr = 0x82CEC5E4;
	sub_82D042A8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cb28
	ctx.lr = 0x82CEC5F8;
	sub_8259CB28(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEC600;
	sub_8387E8E0(ctx, base);
	// b 0x82cec610
	goto loc_82CEC610;
loc_82CEC604:
	// addi r4,r28,56
	ctx.r4.s64 = ctx.r28.s64 + 56;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259d6c0
	ctx.lr = 0x82CEC610;
	sub_8259D6C0(ctx, base);
loc_82CEC610:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// beq cr6,0x82cec6ac
	if (cr6.eq) goto loc_82CEC6AC;
	// addi r4,r31,-149
	ctx.r4.s64 = ctx.r31.s64 + -149;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82CEC624;
	sub_837B0C10(ctx, base);
	// lwz r11,1768(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1768);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// addi r8,r11,13
	ctx.r8.s64 = ctx.r11.s64 + 13;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r5,r7,r22
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r22.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82CEC65C;
	sub_82D042A8(ctx, base);
	// addi r5,r31,2048
	ctx.r5.s64 = ctx.r31.s64 + 2048;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ab6970
	ctx.lr = 0x82CEC66C;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bl 0x82ac8718
	ctx.lr = 0x82CEC67C;
	sub_82AC8718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82CEC690;
	sub_8259CB28(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEC698;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEC6A0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEC6A8;
	sub_8387E8E0(ctx, base);
	// b 0x82cec6c0
	goto loc_82CEC6C0;
loc_82CEC6AC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82CEC6C0;
	sub_8259CB28(ctx, base);
loc_82CEC6C0:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cec6d4
	if (!cr6.lt) goto loc_82CEC6D4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CEC6D4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CEC6DC;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,2052
	ctx.r4.s64 = ctx.r31.s64 + 2052;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82CEC6EC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CEC6FC;
	sub_82A69AD0(ctx, base);
	// addi r4,r31,2064
	ctx.r4.s64 = ctx.r31.s64 + 2064;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,40(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// bl 0x837b0c10
	ctx.lr = 0x82CEC70C;
	sub_837B0C10(ctx, base);
	// li r11,90
	ctx.r11.s64 = 90;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// divwu r5,r29,r11
	ctx.r5.u32 = PPCDivide(ctx.r29.u32, ctx.r11.u32);
	// bl 0x82a6a1b8
	ctx.lr = 0x82CEC720;
	sub_82A6A1B8(ctx, base);
	// addi r4,r31,2084
	ctx.r4.s64 = ctx.r31.s64 + 2084;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,44(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// bl 0x837b0c10
	ctx.lr = 0x82CEC730;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CEC740;
	sub_82A6A1B8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ceab28
	ctx.lr = 0x82CEC74C;
	sub_82CEAB28(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEC754;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEC75C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEC764;
	sub_8387E8E0(ctx, base);
loc_82CEC764:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEC76C"))) PPC_WEAK_FUNC(sub_82CEC76C);
PPC_FUNC_IMPL(__imp__sub_82CEC76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEC770"))) PPC_WEAK_FUNC(sub_82CEC770);
PPC_FUNC_IMPL(__imp__sub_82CEC770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82CEC778;
	__savegprlr_17(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CEC784;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cecae0
	if (cr6.eq) goto loc_82CECAE0;
	// bl 0x831156e8
	ctx.lr = 0x82CEC794;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r19,48(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x825832d8
	ctx.lr = 0x82CEC7A4;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CEC7A8;
	sub_83102DB0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CEC7B0;
	sub_83102DB0(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// beq cr6,0x82cec81c
	if (cr6.eq) goto loc_82CEC81C;
	// addi r29,r28,244
	ctx.r29.s64 = ctx.r28.s64 + 244;
loc_82CEC7E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d98cb0
	ctx.lr = 0x82CEC7EC;
	sub_82D98CB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cec804
	if (!cr6.eq) goto loc_82CEC804;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835977d8
	ctx.lr = 0x82CEC804;
	sub_835977D8(ctx, base);
loc_82CEC804:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82cec7e0
	if (!cr6.eq) goto loc_82CEC7E0;
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r26,144(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_82CEC81C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEC824;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r27,r11,15428
	ctx.r27.s64 = ctx.r11.s64 + 15428;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEC844;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cec860
	if (!cr6.eq) goto loc_82CEC860;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f73d60
	ctx.lr = 0x82CEC858;
	sub_82F73D60(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82CEC860:
	// addi r17,r31,100
	ctx.r17.s64 = ctx.r31.s64 + 100;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82dad028
	ctx.lr = 0x82CEC86C;
	sub_82DAD028(ctx, base);
	// subf r11,r26,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r26.s64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// srawi r24,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r11.s32 >> 2;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplw cr6,r3,r24
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bge cr6,0x82cec908
	if (!cr6.lt) goto loc_82CEC908;
	// addi r4,r27,2188
	ctx.r4.s64 = ctx.r27.s64 + 2188;
	// bctrl 
	ctx.lr = 0x82CEC89C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r27,-94
	ctx.r4.s64 = ctx.r27.s64 + -94;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82CEC8A8;
	sub_837B0C10(ctx, base);
	// subf r11,r23,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r23.s64;
	// lis r4,561
	ctx.r4.s64 = 36765696;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d042a8
	ctx.lr = 0x82CEC8C0;
	sub_82D042A8(ctx, base);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82cec8d4
	if (!cr6.lt) goto loc_82CEC8D4;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_82CEC8D4:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82CEC8DC;
	sub_837B0C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r27,2208
	ctx.r4.s64 = ctx.r27.s64 + 2208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82CEC8EC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CEC8FC;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEC904;
	sub_8387E8E0(ctx, base);
	// b 0x82cec910
	goto loc_82CEC910;
loc_82CEC908:
	// addi r4,r27,2216
	ctx.r4.s64 = ctx.r27.s64 + 2216;
	// bctrl 
	ctx.lr = 0x82CEC910;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CEC910:
	// lis r11,-32048
	ctx.r11.s64 = -2100297728;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r6,r11,3888
	ctx.r6.s64 = ctx.r11.s64 + 3888;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b02be8
	ctx.lr = 0x82CEC928;
	sub_82B02BE8(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// beq cr6,0x82cecac4
	if (cr6.eq) goto loc_82CECAC4;
	// li r20,15
	ctx.r20.s64 = 15;
	// li r18,12
	ctx.r18.s64 = 12;
	// li r21,13
	ctx.r21.s64 = 13;
loc_82CEC940:
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r4,r27,2240
	ctx.r4.s64 = ctx.r27.s64 + 2240;
	// stw r20,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r25,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r25.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CEC960;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83165d78
	ctx.lr = 0x82CEC974;
	sub_83165D78(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cec988
	if (!cr6.lt) goto loc_82CEC988;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82CEC988:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CEC990;
	sub_82D2E228(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cecae8
	if (cr6.eq) goto loc_82CECAE8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82cec9b8
	if (cr6.gt) goto loc_82CEC9B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CEC9B4;
	sub_82D2AEC8(ctx, base);
	// b 0x82cecaa8
	goto loc_82CECAA8;
loc_82CEC9B8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CEC9C0;
	sub_82D2AEC8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// ble cr6,0x82cecb34
	if (!cr6.gt) goto loc_82CECB34;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r25,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r25.u16);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwzx r31,r11,r26
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x8311bf98
	ctx.lr = 0x82CEC9E8;
	sub_8311BF98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CEC9F8;
	sub_82D9A868(ctx, base);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r31,r30,100
	ctx.r31.s64 = ctx.r30.s64 + 100;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r27,2256
	ctx.r4.s64 = ctx.r27.s64 + 2256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CECA18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceca44
	if (cr6.eq) goto loc_82CECA44;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x82CECA38;
	sub_83120738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82d39310
	ctx.lr = 0x82CECA44;
	sub_82D39310(ctx, base);
loc_82CECA44:
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82CECA50;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r27,2292
	ctx.r4.s64 = ctx.r27.s64 + 2292;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82CECA60;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82CECA70;
	sub_82A69AD0(ctx, base);
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// ld r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r29.u32 + 44);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x83179518
	ctx.lr = 0x82CECA88;
	sub_83179518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r27,2316
	ctx.r4.s64 = ctx.r27.s64 + 2316;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82CECA98;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CECAA8;
	sub_82A6A1B8(ctx, base);
loc_82CECAA8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CECAB0;
	sub_8387E8E0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// blt cr6,0x82cec940
	if (cr6.lt) goto loc_82CEC940;
loc_82CECAC4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82cecae0
	if (cr6.eq) goto loc_82CECAE0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825952b8
	ctx.lr = 0x82CECAE0;
	sub_825952B8(ctx, base);
loc_82CECAE0:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82CECAE8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cecb08
	if (cr6.lt) goto loc_82CECB08;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82CECB08;
	sub_825952B8(ctx, base);
loc_82CECB08:
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r25.u8);
	// beq cr6,0x82cecae0
	if (cr6.eq) goto loc_82CECAE0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825952b8
	ctx.lr = 0x82CECB2C;
	sub_825952B8(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82CECB34:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CECB40;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CECB40"))) PPC_WEAK_FUNC(sub_82CECB40);
PPC_FUNC_IMPL(__imp__sub_82CECB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CECB48;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CECB54;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r28,r11,15568
	ctx.r28.s64 = ctx.r11.s64 + 15568;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CECB74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceccdc
	if (cr6.eq) goto loc_82CECCDC;
	// bl 0x82d86078
	ctx.lr = 0x82CECB84;
	sub_82D86078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceccdc
	if (cr6.eq) goto loc_82CECCDC;
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82cecd6c
	if (cr6.eq) goto loc_82CECD6C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CECBA4;
	sub_831F8200(ctx, base);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cecd6c
	if (!cr6.eq) goto loc_82CECD6C;
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82cecce8
	if (!cr6.eq) goto loc_82CECCE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CECBC4;
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
	ctx.lr = 0x82CECBDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceccdc
	if (cr6.eq) goto loc_82CECCDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,2628
	ctx.r4.s64 = ctx.r28.s64 + 2628;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CECC00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CECC0C;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceccdc
	if (cr6.eq) goto loc_82CECCDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82CECC20;
	sub_82D19A10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceccdc
	if (cr6.eq) goto loc_82CECCDC;
	// lwz r3,116(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CECC34;
	sub_82DAB6D0(ctx, base);
	// lwz r10,1744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x831156e8
	ctx.lr = 0x82CECC48;
	sub_831156E8(ctx, base);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x82CECC54;
	sub_8311BF98(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82d9e220
	ctx.lr = 0x82CECC60;
	sub_82D9E220(ctx, base);
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83120738
	ctx.lr = 0x82CECC7C;
	sub_83120738(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,1772(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82d013e8
	ctx.lr = 0x82CECC94;
	sub_82D013E8(ctx, base);
	// addi r7,r28,2644
	ctx.r7.s64 = ctx.r28.s64 + 2644;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d017a8
	ctx.lr = 0x82CECCAC;
	sub_82D017A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ceb520
	ctx.lr = 0x82CECCB8;
	sub_82CEB520(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CECCC8;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82CECCDC;
	sub_82D2B608(ctx, base);
loc_82CECCDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82CECCE8:
	// lwz r3,116(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x825832d8
	ctx.lr = 0x82CECCF4;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CECCF8;
	sub_83102DB0(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CECCFC;
	sub_83102DB0(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82cecd3c
	if (cr6.eq) goto loc_82CECD3C;
	// addi r31,r31,244
	ctx.r31.s64 = ctx.r31.s64 + 244;
loc_82CECD14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d98cb0
	ctx.lr = 0x82CECD20;
	sub_82D98CB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cecd58
	if (!cr6.eq) goto loc_82CECD58;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cecd5c
	if (cr6.eq) goto loc_82CECD5C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82CECD3C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CECD4C;
	sub_82D2AEC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82CECD58:
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
loc_82CECD5C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82cecd14
	if (!cr6.eq) goto loc_82CECD14;
	// b 0x82cecd3c
	goto loc_82CECD3C;
loc_82CECD6C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CECD7C;
	sub_82D2AEC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CECD88"))) PPC_WEAK_FUNC(sub_82CECD88);
PPC_FUNC_IMPL(__imp__sub_82CECD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82CECD90;
	__savegprlr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CECD9C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ced128
	if (cr6.eq) goto loc_82CED128;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CECDAC;
	sub_825832D8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bl 0x82d99c10
	ctx.lr = 0x82CECDB4;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82CECDB8;
	sub_825832F0(ctx, base);
	// li r14,0
	ctx.r14.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// addi r29,r27,96
	ctx.r29.s64 = ctx.r27.s64 + 96;
loc_82CECDC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82CECDD4;
	sub_82D987F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d983f8
	ctx.lr = 0x82CECDDC;
	sub_82D983F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cecdec
	if (cr6.eq) goto loc_82CECDEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cecdf0
	goto loc_82CECDF0;
loc_82CECDEC:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_82CECDF0:
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a47dc0
	ctx.lr = 0x82CECDFC;
	sub_82A47DC0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stbu r3,8(r29)
	ea = 8 + ctx.r29.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r29.u32 = ea;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x82cecdc8
	if (cr6.lt) goto loc_82CECDC8;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// addi r31,r27,1720
	ctx.r31.s64 = ctx.r27.s64 + 1720;
loc_82CECE14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d98848
	ctx.lr = 0x82CECE20;
	sub_82D98848(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cece58
	if (cr6.eq) goto loc_82CECE58;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r14,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r14.u16);
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x83151610
	ctx.lr = 0x82CECE4C;
	sub_83151610(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r7,r8,14
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFFF;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82CECE58:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82cece14
	if (cr6.lt) goto loc_82CECE14;
	// addi r15,r27,244
	ctx.r15.s64 = ctx.r27.s64 + 244;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82ceba68
	ctx.lr = 0x82CECE78;
	sub_82CEBA68(ctx, base);
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// addi r22,r27,3200
	ctx.r22.s64 = ctx.r27.s64 + 3200;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// addi r24,r27,1776
	ctx.r24.s64 = ctx.r27.s64 + 1776;
	// addi r29,r27,1760
	ctx.r29.s64 = ctx.r27.s64 + 1760;
	// li r21,11
	ctx.r21.s64 = 11;
	// li r25,13
	ctx.r25.s64 = 13;
	// li r16,12
	ctx.r16.s64 = 12;
	// li r17,14
	ctx.r17.s64 = 14;
	// li r18,15
	ctx.r18.s64 = 15;
	// li r19,16
	ctx.r19.s64 = 16;
	// li r20,17
	ctx.r20.s64 = 17;
loc_82CECEB0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ac0af0
	ctx.lr = 0x82CECEB8;
	sub_82AC0AF0(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// clrlwi r31,r23,24
	ctx.r31.u64 = ctx.r23.u32 & 0xFF;
	// bl 0x82d98930
	ctx.lr = 0x82CECEC4;
	sub_82D98930(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x82ceceec
	if (!cr6.lt) goto loc_82CECEEC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82CECEEC;
	sub_82ABFDA0(ctx, base);
loc_82CECEEC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// addi r7,r28,111
	ctx.r7.s64 = ctx.r28.s64 + 111;
loc_82CECEFC:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r1,123
	ctx.r11.s64 = ctx.r1.s64 + 123;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bge cr6,0x82cecf14
	if (!cr6.lt) goto loc_82CECF14;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_82CECF14:
	// add r8,r28,r10
	ctx.r8.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stb r6,1780(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1780, ctx.r6.u8);
	// stb r5,1781(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1781, ctx.r5.u8);
	// bge cr6,0x82cecf44
	if (!cr6.lt) goto loc_82CECF44;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// b 0x82cecf48
	goto loc_82CECF48;
loc_82CECF44:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_82CECF48:
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r9,1784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1784, ctx.r9.u32);
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r10,r6,r27
	PPC_STORE_U32(ctx.r6.u32 + ctx.r27.u32, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82cecefc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CECEFC;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_82CECF64:
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// add r4,r26,r5
	ctx.r4.u64 = ctx.r26.u64 + ctx.r5.u64;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
loc_82CECF74:
	// addi r11,r4,167
	ctx.r11.s64 = ctx.r4.s64 + 167;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r5,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r5.u32);
	// blt cr6,0x82cecfe4
	if (cr6.lt) goto loc_82CECFE4;
	// beq cr6,0x82cecfc0
	if (cr6.eq) goto loc_82CECFC0;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bge cr6,0x82ced000
	if (!cr6.lt) goto loc_82CED000;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82cecfb8
	if (!cr6.lt) goto loc_82CECFB8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,189
	ctx.r10.s64 = ctx.r1.s64 + 189;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ced004
	goto loc_82CED004;
loc_82CECFB8:
	// addi r11,r1,189
	ctx.r11.s64 = ctx.r1.s64 + 189;
	// b 0x82ced004
	goto loc_82CED004;
loc_82CECFC0:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82cecfdc
	if (!cr6.lt) goto loc_82CECFDC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ced004
	goto loc_82CED004;
loc_82CECFDC:
	// addi r11,r1,156
	ctx.r11.s64 = ctx.r1.s64 + 156;
	// b 0x82ced004
	goto loc_82CED004;
loc_82CECFE4:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82ced000
	if (!cr6.lt) goto loc_82CED000;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,123
	ctx.r10.s64 = ctx.r1.s64 + 123;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ced004
	goto loc_82CED004;
loc_82CED000:
	// addi r11,r1,123
	ctx.r11.s64 = ctx.r1.s64 + 123;
loc_82CED004:
	// add r10,r30,r8
	ctx.r10.u64 = ctx.r30.u64 + ctx.r8.u64;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stb r3,2676(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2676, ctx.r3.u8);
	// stb r11,2677(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2677, ctx.r11.u8);
	// blt cr6,0x82ced060
	if (cr6.lt) goto loc_82CED060;
	// beq cr6,0x82ced048
	if (cr6.eq) goto loc_82CED048;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bge cr6,0x82ced078
	if (!cr6.lt) goto loc_82CED078;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82ced078
	if (!cr6.lt) goto loc_82CED078;
	// addi r9,r1,178
	ctx.r9.s64 = ctx.r1.s64 + 178;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82ced07c
	goto loc_82CED07C;
loc_82CED048:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82ced078
	if (!cr6.lt) goto loc_82CED078;
	// addi r9,r1,145
	ctx.r9.s64 = ctx.r1.s64 + 145;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82ced07c
	goto loc_82CED07C;
loc_82CED060:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82ced078
	if (!cr6.lt) goto loc_82CED078;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82ced07c
	goto loc_82CED07C;
loc_82CED078:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82CED07C:
	// stw r11,2680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2680, ctx.r11.u32);
	// stwx r7,r22,r8
	PPC_STORE_U32(ctx.r22.u32 + ctx.r8.u32, ctx.r7.u32);
	// addi r8,r8,532
	ctx.r8.s64 = ctx.r8.s64 + 532;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r8,1596
	cr6.compare<uint32_t>(ctx.r8.u32, 1596, xer);
	// blt cr6,0x82cecf74
	if (cr6.lt) goto loc_82CECF74;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpwi cr6,r5,11
	cr6.compare<int32_t>(ctx.r5.s32, 11, xer);
	// blt cr6,0x82cecf64
	if (cr6.lt) goto loc_82CECF64;
	// stw r21,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r21.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r16,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r16.u32);
	// stw r25,224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 224, ctx.r25.u32);
	// stw r17,240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 240, ctx.r17.u32);
	// stw r18,256(r29)
	PPC_STORE_U32(ctx.r29.u32 + 256, ctx.r18.u32);
	// stw r19,272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 272, ctx.r19.u32);
	// stwu r20,288(r29)
	ea = 288 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r29.u32 = ea;
	// bl 0x8316d1a8
	ctx.lr = 0x82CED0C8;
	sub_8316D1A8(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r26,r26,11
	ctx.r26.s64 = ctx.r26.s64 + 11;
	// addi r28,r28,18
	ctx.r28.s64 = ctx.r28.s64 + 18;
	// addi r24,r24,288
	ctx.r24.s64 = ctx.r24.s64 + 288;
	// cmplwi cr6,r30,528
	cr6.compare<uint32_t>(ctx.r30.u32, 528, xer);
	// blt cr6,0x82ceceb0
	if (cr6.lt) goto loc_82CECEB0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83102db0
	ctx.lr = 0x82CED0E8;
	sub_83102DB0(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CED0EC;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ced128
	if (cr6.eq) goto loc_82CED128;
loc_82CED0FC:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subfic r8,r9,100
	xer.ca = ctx.r9.u32 <= 100;
	ctx.r8.s64 = 100 - ctx.r9.s64;
	// cmpwi cr6,r8,100
	cr6.compare<int32_t>(ctx.r8.s32, 100, xer);
	// bne cr6,0x82ced120
	if (!cr6.eq) goto loc_82CED120;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ced0fc
	if (!cr6.eq) goto loc_82CED0FC;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82CED120:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2658(r27)
	PPC_STORE_U8(ctx.r27.u32 + 2658, ctx.r11.u8);
loc_82CED128:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CED130"))) PPC_WEAK_FUNC(sub_82CED130);
PPC_FUNC_IMPL(__imp__sub_82CED130) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82CED148;
	sub_82D19A78(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r9,r10,15516
	ctx.r9.s64 = ctx.r10.s64 + 15516;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CED170;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ced198
	if (!cr6.eq) goto loc_82CED198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cea5d8
	ctx.lr = 0x82CED184;
	sub_82CEA5D8(ctx, base);
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
loc_82CED198:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ced228
	if (!cr6.eq) goto loc_82CED228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce78a0
	ctx.lr = 0x82CED1A8;
	sub_82CE78A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ced1d4
	if (!cr6.eq) goto loc_82CED1D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// bl 0x82cec258
	ctx.lr = 0x82CED1C0;
	sub_82CEC258(ctx, base);
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
loc_82CED1D4:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,100(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ced20c
	if (cr6.eq) goto loc_82CED20C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82CED20C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cec258
	ctx.lr = 0x82CED214;
	sub_82CEC258(ctx, base);
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
loc_82CED228:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82ced238
	if (!cr6.eq) goto loc_82CED238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cec770
	ctx.lr = 0x82CED238;
	sub_82CEC770(ctx, base);
loc_82CED238:
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

__attribute__((alias("__imp__sub_82CED24C"))) PPC_WEAK_FUNC(sub_82CED24C);
PPC_FUNC_IMPL(__imp__sub_82CED24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CED250"))) PPC_WEAK_FUNC(sub_82CED250);
PPC_FUNC_IMPL(__imp__sub_82CED250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CED258;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CED268;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ced5d4
	if (cr6.eq) goto loc_82CED5D4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r27,r11,21716
	ctx.r27.s64 = ctx.r11.s64 + 21716;
	// lwz r11,2640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2640);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// ori r26,r10,8192
	ctx.r26.u64 = ctx.r10.u64 | 8192;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82ced598
	if (cr6.gt) goto loc_82CED598;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ced2cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CED2CC;
	// bdzf 4*cr6+eq,0x82ced348
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CED348;
	// bdzf 4*cr6+eq,0x82ced538
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CED538;
	// bne cr6,0x82ced568
	if (!cr6.eq) goto loc_82CED568;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82ced2c0
	if (!cr6.eq) goto loc_82CED2C0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
loc_82CED2C0:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r11.u32);
	// b 0x82ced598
	goto loc_82CED598;
loc_82CED2CC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82ced33c
	if (!cr6.eq) goto loc_82CED33C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce78a0
	ctx.lr = 0x82CED2DC;
	sub_82CE78A0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ced2ec
	if (!cr6.eq) goto loc_82CED2EC;
	// lwz r30,1756(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// b 0x82ced318
	goto loc_82CED318;
loc_82CED2EC:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r30,100(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
loc_82CED318:
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x82e877c8
	ctx.lr = 0x82CED320;
	sub_82E877C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82da0c38
	ctx.lr = 0x82CED328;
	sub_82DA0C38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// stw r10,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r10.u32);
loc_82CED33C:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r11.u32);
	// b 0x82ced598
	goto loc_82CED598;
loc_82CED348:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82ced52c
	if (!cr6.eq) goto loc_82CED52C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce78a0
	ctx.lr = 0x82CED358;
	sub_82CE78A0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ced5d4
	if (cr6.eq) goto loc_82CED5D4;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82CED370:
	// lwz r9,1768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lwz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r9,111
	ctx.r5.s64 = ctx.r9.s64 + 111;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ced3ac
	if (!cr6.eq) goto loc_82CED3AC;
	// stw r28,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r28.u32);
loc_82CED3AC:
	// lwz r9,1768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r9,111
	ctx.r5.s64 = ctx.r9.s64 + 111;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ced3e8
	if (!cr6.eq) goto loc_82CED3E8;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82CED3E8:
	// lwz r9,1768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r9,111
	ctx.r5.s64 = ctx.r9.s64 + 111;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ced424
	if (!cr6.eq) goto loc_82CED424;
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_82CED424:
	// lwz r9,1768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r9,111
	ctx.r5.s64 = ctx.r9.s64 + 111;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ced460
	if (!cr6.eq) goto loc_82CED460;
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
loc_82CED460:
	// lwz r9,1768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r9,111
	ctx.r5.s64 = ctx.r9.s64 + 111;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ced49c
	if (!cr6.eq) goto loc_82CED49C;
	// stw r28,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r28.u32);
loc_82CED49C:
	// lwz r9,1768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r9,111
	ctx.r5.s64 = ctx.r9.s64 + 111;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ced4d8
	if (!cr6.eq) goto loc_82CED4D8;
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
loc_82CED4D8:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x82ced370
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CED370;
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,100(r7)
	PPC_STORE_U32(ctx.r7.u32 + 100, ctx.r28.u32);
	// bl 0x82ce7ca0
	ctx.lr = 0x82CED514;
	sub_82CE7CA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cec170
	ctx.lr = 0x82CED51C;
	sub_82CEC170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ced130
	ctx.lr = 0x82CED524;
	sub_82CED130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cecb40
	ctx.lr = 0x82CED52C;
	sub_82CECB40(ctx, base);
loc_82CED52C:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r11.u32);
	// b 0x82ced598
	goto loc_82CED598;
loc_82CED538:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82CED558;
	sub_82D1EBF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19720
	ctx.lr = 0x82CED564;
	sub_82D19720(ctx, base);
	// b 0x82ced598
	goto loc_82CED598;
loc_82CED568:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r28.u8);
	// bl 0x83103068
	ctx.lr = 0x82CED58C;
	sub_83103068(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r10,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r10.u32);
loc_82CED598:
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82ced5ac
	if (cr6.eq) goto loc_82CED5AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce7f28
	ctx.lr = 0x82CED5AC;
	sub_82CE7F28(ctx, base);
loc_82CED5AC:
	// lwz r11,1704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// beq cr6,0x82ced5d4
	if (cr6.eq) goto loc_82CED5D4;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stb r28,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r28.u8);
	// bl 0x83103068
	ctx.lr = 0x82CED5D4;
	sub_83103068(ctx, base);
loc_82CED5D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CED5DC"))) PPC_WEAK_FUNC(sub_82CED5DC);
PPC_FUNC_IMPL(__imp__sub_82CED5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CED5E0"))) PPC_WEAK_FUNC(sub_82CED5E0);
PPC_FUNC_IMPL(__imp__sub_82CED5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CED5E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r28,r11,15568
	ctx.r28.s64 = ctx.r11.s64 + 15568;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// addi r27,r28,16
	ctx.r27.s64 = ctx.r28.s64 + 16;
loc_82CED608:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CED610;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CED628;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ced838
	if (cr6.eq) goto loc_82CED838;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82CED63C;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ced684
	if (cr6.eq) goto loc_82CED684;
loc_82CED644:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CED650;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ced838
	if (cr6.eq) goto loc_82CED838;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,2472
	ctx.r4.s64 = ctx.r28.s64 + 2472;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CED670;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82CED67C;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ced644
	if (cr6.lt) goto loc_82CED644;
loc_82CED684:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r26,16
	cr6.compare<uint32_t>(ctx.r26.u32, 16, xer);
	// blt cr6,0x82ced608
	if (cr6.lt) goto loc_82CED608;
	// lwz r11,1708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1708);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82ced730
	if (cr6.eq) goto loc_82CED730;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CED6A8;
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
	ctx.lr = 0x82CED6C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ced838
	if (cr6.eq) goto loc_82CED838;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ced6ec
	if (cr6.eq) goto loc_82CED6EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,2484
	ctx.r4.s64 = ctx.r28.s64 + 2484;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CED6EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CED6EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82CED6F4;
	sub_82D19BA0(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x82ced728
	if (cr6.gt) goto loc_82CED728;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ced718
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CED718;
	// bdzf 4*cr6+eq,0x82ced718
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CED718;
	// bne cr6,0x82ced720
	if (!cr6.eq) goto loc_82CED720;
	// stw r24,1740(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1740, ctx.r24.u32);
	// b 0x82ced728
	goto loc_82CED728;
loc_82CED718:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82ced724
	goto loc_82CED724;
loc_82CED720:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82CED724:
	// stw r11,1740(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1740, ctx.r11.u32);
loc_82CED728:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ced130
	ctx.lr = 0x82CED730;
	sub_82CED130(ctx, base);
loc_82CED730:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82CED738;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82ced7ec
	if (cr6.eq) goto loc_82CED7EC;
	// bl 0x82d86078
	ctx.lr = 0x82CED744;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ced838
	if (cr6.eq) goto loc_82CED838;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CED754;
	sub_831F8200(ctx, base);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ced78c
	if (cr6.eq) goto loc_82CED78C;
	// lbz r11,2658(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2658);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// beq cr6,0x82ced77c
	if (cr6.eq) goto loc_82CED77C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82CED77C:
	// bl 0x82d19788
	ctx.lr = 0x82CED780;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82ced7e4
	goto loc_82CED7E4;
loc_82CED78C:
	// lwz r11,1708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1708);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82ced7b0
	if (cr6.lt) goto loc_82CED7B0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x82ced7ac
	if (!cr6.gt) goto loc_82CED7AC;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x82ced7b0
	if (!cr6.eq) goto loc_82CED7B0;
loc_82CED7AC:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82CED7B0:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82ced7d4
	if (!cr6.eq) goto loc_82CED7D4;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82CED7CC;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82ced7e0
	goto loc_82CED7E0;
loc_82CED7D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82CED7DC;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82CED7E0:
	// li r4,3
	ctx.r4.s64 = 3;
loc_82CED7E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CED7EC;
	sub_82D19788(ctx, base);
loc_82CED7EC:
	// lwz r11,1708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1708);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82ced834
	if (cr6.eq) goto loc_82CED834;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,205
	ctx.r5.u64 = ctx.r5.u64 | 205;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CED818;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,18
	ctx.r9.s64 = 18;
	// stb r24,2660(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2660, ctx.r24.u8);
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r9,1712(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1712, ctx.r9.u32);
	// stw r24,1744(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1744, ctx.r24.u32);
	// stw r8,1748(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1748, ctx.r8.u32);
	// stw r24,1752(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1752, ctx.r24.u32);
loc_82CED834:
	// stw r24,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r24.u32);
loc_82CED838:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CED840"))) PPC_WEAK_FUNC(sub_82CED840);
PPC_FUNC_IMPL(__imp__sub_82CED840) {
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
	// lwz r11,1744(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1744);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ced870
	if (!cr6.eq) goto loc_82CED870;
	// lwz r11,1712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1712);
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// beq cr6,0x82ced87c
	if (cr6.eq) goto loc_82CED87C;
loc_82CED870:
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82ced8c0
	if (!cr6.eq) goto loc_82CED8C0;
loc_82CED87C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r8,r11,21716
	ctx.r8.s64 = ctx.r11.s64 + 21716;
	// ori r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 8192;
	// stw r9,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r9.u32);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82CED8B4;
	sub_83103068(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,2659(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2659, ctx.r5.u8);
	// b 0x82ced918
	goto loc_82CED918;
loc_82CED8C0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ced5e0
	ctx.lr = 0x82CED8CC;
	sub_82CED5E0(ctx, base);
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cea1a0
	ctx.lr = 0x82CED8DC;
	sub_82CEA1A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cea398
	ctx.lr = 0x82CED8E8;
	sub_82CEA398(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce7770
	ctx.lr = 0x82CED8F8;
	sub_82CE7770(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,18072
	ctx.r6.s64 = ctx.r11.s64 + 18072;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce77e0
	ctx.lr = 0x82CED910;
	sub_82CE77E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ced130
	ctx.lr = 0x82CED918;
	sub_82CED130(ctx, base);
loc_82CED918:
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

__attribute__((alias("__imp__sub_82CED930"))) PPC_WEAK_FUNC(sub_82CED930);
PPC_FUNC_IMPL(__imp__sub_82CED930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CED938;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82ce7928
	ctx.lr = 0x82CED948;
	sub_82CE7928(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ced5e0
	ctx.lr = 0x82CED954;
	sub_82CED5E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CED95C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r29,r11,16844
	ctx.r29.s64 = ctx.r11.s64 + 16844;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,1316
	ctx.r4.s64 = ctx.r29.s64 + 1316;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CED97C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ced9ac
	if (cr6.eq) goto loc_82CED9AC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bge cr6,0x82ced99c
	if (!cr6.lt) goto loc_82CED99C;
	// bl 0x82d3d908
	ctx.lr = 0x82CED998;
	sub_82D3D908(ctx, base);
	// b 0x82ced9a0
	goto loc_82CED9A0;
loc_82CED99C:
	// bl 0x82d3d8a8
	ctx.lr = 0x82CED9A0;
	sub_82D3D8A8(ctx, base);
loc_82CED9A0:
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r11.u32);
loc_82CED9AC:
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CED9B8;
	sub_82D17DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CED9C0;
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
	ctx.lr = 0x82CED9D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r29,1328
	ctx.r6.s64 = ctx.r29.s64 + 1328;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce77e0
	ctx.lr = 0x82CED9EC;
	sub_82CE77E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce91c0
	ctx.lr = 0x82CED9F4;
	sub_82CE91C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cec170
	ctx.lr = 0x82CED9FC;
	sub_82CEC170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ced130
	ctx.lr = 0x82CEDA04;
	sub_82CED130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82CEDA0C;
	sub_82D19BB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82CEDA18;
	sub_82D19BA0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f2,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82CEDA38;
	sub_82D1EBF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEDA40"))) PPC_WEAK_FUNC(sub_82CEDA40);
PPC_FUNC_IMPL(__imp__sub_82CEDA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CEDA48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ce7928
	ctx.lr = 0x82CEDA58;
	sub_82CE7928(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cede80
	if (!cr6.eq) goto loc_82CEDE80;
	// bl 0x82d86078
	ctx.lr = 0x82CEDA68;
	sub_82D86078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cede80
	if (cr6.eq) goto loc_82CEDE80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,35
	ctx.r5.u64 = ctx.r5.u64 | 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEDA94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82cedbfc
	if (!cr6.eq) goto loc_82CEDBFC;
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r10.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82cedbf0
	if (cr6.eq) goto loc_82CEDBF0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82cedbf0
	if (cr6.eq) goto loc_82CEDBF0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82cedb04
	if (cr6.eq) goto loc_82CEDB04;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82cedb04
	if (cr6.eq) goto loc_82CEDB04;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82cedb04
	if (cr6.eq) goto loc_82CEDB04;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEDAE0;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,211
	ctx.r5.u64 = ctx.r5.u64 | 211;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEDB00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cedb14
	goto loc_82CEDB14;
loc_82CEDB04:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEDB14;
	sub_82D19788(ctx, base);
loc_82CEDB14:
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82cedb38
	if (cr6.lt) goto loc_82CEDB38;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x82cedb34
	if (!cr6.gt) goto loc_82CEDB34;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x82cedb38
	if (!cr6.eq) goto loc_82CEDB38;
loc_82CEDB34:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CEDB38:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cedbe4
	if (cr6.eq) goto loc_82CEDBE4;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cedbb4
	if (!cr6.eq) goto loc_82CEDBB4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82CEDB60;
	sub_82D19788(ctx, base);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CEDB68;
	sub_831F8200(ctx, base);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cedb80
	if (cr6.eq) goto loc_82CEDB80;
	// lbz r11,2658(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2658);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cedbc0
	if (cr6.eq) goto loc_82CEDBC0;
loc_82CEDB80:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEDB90;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,205
	ctx.r5.u64 = ctx.r5.u64 | 205;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEDBB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cedbc0
	goto loc_82CEDBC0;
loc_82CEDBB4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d19788
	ctx.lr = 0x82CEDBC0;
	sub_82D19788(ctx, base);
loc_82CEDBC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r5,14312(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14312);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CEDBE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cede40
	goto loc_82CEDE40;
loc_82CEDBE4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82cede38
	goto loc_82CEDE38;
loc_82CEDBF0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82cede38
	goto loc_82CEDE38;
loc_82CEDBFC:
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bne cr6,0x82cedc54
	if (!cr6.eq) goto loc_82CEDC54;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cedc28
	if (cr6.eq) goto loc_82CEDC28;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bne cr6,0x82cedc28
	if (!cr6.eq) goto loc_82CEDC28;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// b 0x82cede30
	goto loc_82CEDE30;
loc_82CEDC28:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEDC40;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEDC50;
	sub_82D19788(ctx, base);
	// b 0x82cede30
	goto loc_82CEDE30;
loc_82CEDC54:
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r29.u32);
	// bl 0x82ce78a0
	ctx.lr = 0x82CEDC64;
	sub_82CE78A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cede80
	if (cr6.eq) goto loc_82CEDE80;
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// stw r6,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r6.u32);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CEDCA8;
	sub_831F8200(ctx, base);
	// lwz r5,764(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82cedcd0
	if (cr6.eq) goto loc_82CEDCD0;
	// lwz r11,1756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cedcd0
	if (!cr6.eq) goto loc_82CEDCD0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEDCD0;
	sub_82D19788(ctx, base);
loc_82CEDCD0:
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82cede14
	if (cr6.eq) goto loc_82CEDE14;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEDCEC;
	sub_82D19788(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,14312
	ctx.r10.s64 = ctx.r11.s64 + 14312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CEDD10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// beq cr6,0x82cedd68
	if (cr6.eq) goto loc_82CEDD68;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cedd68
	if (cr6.eq) goto loc_82CEDD68;
	// lwz r11,1756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cedd68
	if (cr6.eq) goto loc_82CEDD68;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEDD40;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,464
	ctx.r5.u64 = ctx.r5.u64 | 464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEDD60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r29,2660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2660, ctx.r29.u8);
	// b 0x82cede14
	goto loc_82CEDE14;
loc_82CEDD68:
	// lbz r11,2660(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2660);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ceddf4
	if (!cr6.eq) goto loc_82CEDDF4;
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82cedd98
	if (cr6.lt) goto loc_82CEDD98;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x82cedd94
	if (!cr6.gt) goto loc_82CEDD94;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x82cedd98
	if (!cr6.eq) goto loc_82CEDD98;
loc_82CEDD94:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CEDD98:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ceddf4
	if (!cr6.eq) goto loc_82CEDDF4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEDDB4;
	sub_82D19788(ctx, base);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CEDDBC;
	sub_831F8200(ctx, base);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ceddd8
	if (cr6.eq) goto loc_82CEDDD8;
	// lbz r11,2658(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2658);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cedddc
	if (cr6.eq) goto loc_82CEDDDC;
loc_82CEDDD8:
	// li r5,2
	ctx.r5.s64 = 2;
loc_82CEDDDC:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEDDE8;
	sub_82D19788(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,205
	ctx.r5.u64 = ctx.r5.u64 | 205;
	// b 0x82ceddfc
	goto loc_82CEDDFC;
loc_82CEDDF4:
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,464
	ctx.r5.u64 = ctx.r5.u64 | 464;
loc_82CEDDFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEDE14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CEDE14:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82CEDE1C;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cede40
	if (cr6.eq) goto loc_82CEDE40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19948
	ctx.lr = 0x82CEDE30;
	sub_82D19948(ctx, base);
loc_82CEDE30:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
loc_82CEDE38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEDE40;
	sub_82D19788(ctx, base);
loc_82CEDE40:
	// lbz r11,2656(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2656);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cede80
	if (!cr6.eq) goto loc_82CEDE80;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cede70
	if (!cr6.eq) goto loc_82CEDE70;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bne cr6,0x82cede70
	if (!cr6.eq) goto loc_82CEDE70;
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82cede78
	if (!cr6.eq) goto loc_82CEDE78;
loc_82CEDE70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cebb20
	ctx.lr = 0x82CEDE78;
	sub_82CEBB20(ctx, base);
loc_82CEDE78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ced130
	ctx.lr = 0x82CEDE80;
	sub_82CED130(ctx, base);
loc_82CEDE80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEDE88"))) PPC_WEAK_FUNC(sub_82CEDE88);
PPC_FUNC_IMPL(__imp__sub_82CEDE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CEDE90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,2661
	ctx.r3.s64 = ctx.r3.s64 + 2661;
	// bl 0x82dd6438
	ctx.lr = 0x82CEDEA0;
	sub_82DD6438(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cedeb8
	if (!cr6.eq) goto loc_82CEDEB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CEDEB8:
	// bl 0x82d26640
	ctx.lr = 0x82CEDEBC;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82CEDEC0;
	sub_82D25AB8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19648
	ctx.lr = 0x82CEDECC;
	sub_82D19648(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19740
	ctx.lr = 0x82CEDED8;
	sub_82D19740(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19750
	ctx.lr = 0x82CEDEE4;
	sub_82D19750(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,16548
	ctx.r28.s64 = ctx.r11.s64 + 16548;
	// lfs f1,-448(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d19760
	ctx.lr = 0x82CEDEF8;
	sub_82D19760(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cecd88
	ctx.lr = 0x82CEDF00;
	sub_82CECD88(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82CEDF04;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cee074
	if (cr6.eq) goto loc_82CEE074;
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x82CEDF1C;
	sub_825832D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82CEDF24;
	sub_82DAB6D0(ctx, base);
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cedf48
	if (cr6.eq) goto loc_82CEDF48;
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CEDF3C;
	sub_831F8200(ctx, base);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cedfc4
	if (cr6.eq) goto loc_82CEDFC4;
loc_82CEDF48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97708
	ctx.lr = 0x82CEDF50;
	sub_82D97708(ctx, base);
	// stw r3,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97718
	ctx.lr = 0x82CEDF5C;
	sub_82D97718(ctx, base);
	// stw r3,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cecb40
	ctx.lr = 0x82CEDF68;
	sub_82CECB40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cedf90
	if (!cr6.eq) goto loc_82CEDF90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d977a8
	ctx.lr = 0x82CEDF7C;
	sub_82D977A8(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bne cr6,0x82cedf90
	if (!cr6.eq) goto loc_82CEDF90;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cedfac
	goto loc_82CEDFAC;
loc_82CEDF90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d977b0
	ctx.lr = 0x82CEDF98;
	sub_82D977B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d977a8
	ctx.lr = 0x82CEDFA4;
	sub_82D977A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_82CEDFAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82CEDFC4;
	sub_82D1EBF8(ctx, base);
loc_82CEDFC4:
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82cedfe4
	if (!cr6.eq) goto loc_82CEDFE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,2660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2660, ctx.r11.u8);
	// bl 0x825832e0
	ctx.lr = 0x82CEDFE0;
	sub_825832E0(ctx, base);
	// stw r3,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r3.u32);
loc_82CEDFE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEDFEC;
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
	ctx.lr = 0x82CEE004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cee01c
	if (cr6.eq) goto loc_82CEE01C;
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82CEE01C;
	sub_82D3D968(ctx, base);
loc_82CEE01C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce91c0
	ctx.lr = 0x82CEE024;
	sub_82CE91C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cec170
	ctx.lr = 0x82CEE02C;
	sub_82CEC170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ced130
	ctx.lr = 0x82CEE034;
	sub_82CED130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce99d8
	ctx.lr = 0x82CEE03C;
	sub_82CE99D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cecb40
	ctx.lr = 0x82CEE044;
	sub_82CECB40(ctx, base);
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CEE04C;
	sub_831F8200(ctx, base);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cee074
	if (cr6.eq) goto loc_82CEE074;
	// lbz r11,2658(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2658);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cee074
	if (!cr6.eq) goto loc_82CEE074;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEE074;
	sub_82D19788(ctx, base);
loc_82CEE074:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEE080"))) PPC_WEAK_FUNC(sub_82CEE080);
PPC_FUNC_IMPL(__imp__sub_82CEE080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82CEE088;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CEE098;
	sub_831156E8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cee538
	if (cr6.eq) goto loc_82CEE538;
	// addi r29,r31,244
	ctx.r29.s64 = ctx.r31.s64 + 244;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d98930
	ctx.lr = 0x82CEE0B4;
	sub_82D98930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x82CEE0C4;
	sub_831CE980(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82CEE0D4;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEE0DC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r27,r11,15568
	ctx.r27.s64 = ctx.r11.s64 + 15568;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEE0FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cee538
	if (cr6.eq) goto loc_82CEE538;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,2204
	ctx.r4.s64 = ctx.r27.s64 + 2204;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEE120;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CEE12C;
	sub_82D33DB0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cee538
	if (cr6.eq) goto loc_82CEE538;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82CEE140;
	sub_82D19A10(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cee538
	if (cr6.eq) goto loc_82CEE538;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// beq cr6,0x82cee398
	if (cr6.eq) goto loc_82CEE398;
	// bl 0x82d01dd8
	ctx.lr = 0x82CEE160;
	sub_82D01DD8(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// sth r22,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r22.u16);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311bf98
	ctx.lr = 0x82CEE178;
	sub_8311BF98(ctx, base);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,1712(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r5,r11,111
	ctx.r5.s64 = ctx.r11.s64 + 111;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r30,r4,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// addi r3,r30,13
	ctx.r3.s64 = ctx.r30.s64 + 13;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// stw r7,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r7.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cee1f0
	if (!cr6.eq) goto loc_82CEE1F0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r10,r31,104
	ctx.r10.s64 = ctx.r31.s64 + 104;
loc_82CEE1CC:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// beq cr6,0x82cee248
	if (cr6.eq) goto loc_82CEE248;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// blt cr6,0x82cee1cc
	if (cr6.lt) goto loc_82CEE1CC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CEE1EC:
	// stbx r3,r8,r31
	PPC_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r3.u8);
loc_82CEE1F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce7ca0
	ctx.lr = 0x82CEE1F8;
	sub_82CE7CA0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce9298
	ctx.lr = 0x82CEE204;
	sub_82CE9298(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82CEE214;
	sub_831CE980(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99658
	ctx.lr = 0x82CEE220;
	sub_82D99658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cec170
	ctx.lr = 0x82CEE228;
	sub_82CEC170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ced130
	ctx.lr = 0x82CEE230;
	sub_82CED130(ctx, base);
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// bgt cr6,0x82cee258
	if (cr6.gt) goto loc_82CEE258;
	// li r30,1
	ctx.r30.s64 = 1;
	// subfic r29,r11,10
	xer.ca = ctx.r11.u32 <= 10;
	ctx.r29.s64 = 10 - ctx.r11.s64;
	// b 0x82cee260
	goto loc_82CEE260;
loc_82CEE248:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce7d48
	ctx.lr = 0x82CEE254;
	sub_82CE7D48(ctx, base);
	// b 0x82cee1ec
	goto loc_82CEE1EC;
loc_82CEE258:
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r29,r11,-11
	ctx.r29.s64 = ctx.r11.s64 + -11;
loc_82CEE260:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82d9e220
	ctx.lr = 0x82CEE268;
	sub_82D9E220(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x82CEE284;
	sub_83120738(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,1772(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// lwz r5,1744(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// bl 0x82d013e8
	ctx.lr = 0x82CEE29C;
	sub_82D013E8(ctx, base);
	// addi r7,r27,2220
	ctx.r7.s64 = ctx.r27.s64 + 2220;
	// lwz r5,1744(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d017a8
	ctx.lr = 0x82CEE2B4;
	sub_82D017A8(ctx, base);
	// lbz r10,2657(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2657);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cee2d0
	if (cr6.eq) goto loc_82CEE2D0;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,237
	ctx.r4.u64 = ctx.r4.u64 | 237;
	// bl 0x82ce98d8
	ctx.lr = 0x82CEE2D0;
	sub_82CE98D8(ctx, base);
loc_82CEE2D0:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r27,2256
	ctx.r4.s64 = ctx.r27.s64 + 2256;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEE2EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ced5e0
	ctx.lr = 0x82CEE2F8;
	sub_82CED5E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cecb40
	ctx.lr = 0x82CEE300;
	sub_82CECB40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82CEE308;
	sub_82D8BB28(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82cee36c
	if (cr6.eq) goto loc_82CEE36C;
	// bl 0x82d86078
	ctx.lr = 0x82CEE320;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CEE328;
	sub_82DAB6D0(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x825832f8
	ctx.lr = 0x82CEE330;
	sub_825832F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82cefad8
	ctx.lr = 0x82CEE33C;
	sub_82CEFAD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cee350
	if (cr6.eq) goto loc_82CEE350;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82CEE350;
	sub_83103100(ctx, base);
loc_82CEE350:
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r5,10
	ctx.r5.s64 = 10;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82CEE36C;
	sub_82D1EBF8(ctx, base);
loc_82CEE36C:
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82CEE388;
	sub_82D1EBF8(ctx, base);
	// stw r22,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r22.u32);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82CEE398:
	// addi r28,r31,1744
	ctx.r28.s64 = ctx.r31.s64 + 1744;
	// bl 0x82d01dd8
	ctx.lr = 0x82CEE3A0;
	sub_82D01DD8(ctx, base);
	// stw r3,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r3.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d01dd8
	ctx.lr = 0x82CEE3AC;
	sub_82D01DD8(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r26,r27,16
	ctx.r26.s64 = ctx.r27.s64 + 16;
	// stw r3,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r3.u32);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_82CEE3BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEE3C4;
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
	ctx.lr = 0x82CEE3DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cee538
	if (cr6.eq) goto loc_82CEE538;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82CEE3F0;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cee438
	if (cr6.eq) goto loc_82CEE438;
loc_82CEE3F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CEE404;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cee538
	if (cr6.eq) goto loc_82CEE538;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,2276
	ctx.r4.s64 = ctx.r27.s64 + 2276;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEE424;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82CEE430;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x82cee3f8
	if (cr6.lt) goto loc_82CEE3F8;
loc_82CEE438:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r25,16
	cr6.compare<uint32_t>(ctx.r25.u32, 16, xer);
	// blt cr6,0x82cee3bc
	if (cr6.lt) goto loc_82CEE3BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ceb520
	ctx.lr = 0x82CEE454;
	sub_82CEB520(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r27,2288
	ctx.r4.s64 = ctx.r27.s64 + 2288;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEE470;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r27,2304
	ctx.r4.s64 = ctx.r27.s64 + 2304;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CEE48C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// sth r22,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r22.u16);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82CEE4A4;
	sub_8311BF98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9e220
	ctx.lr = 0x82CEE4B0;
	sub_82D9E220(ctx, base);
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x82CEE4CC;
	sub_83120738(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,1772(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// bl 0x82d013e8
	ctx.lr = 0x82CEE4E4;
	sub_82D013E8(ctx, base);
	// addi r7,r27,2320
	ctx.r7.s64 = ctx.r27.s64 + 2320;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d017a8
	ctx.lr = 0x82CEE4FC;
	sub_82D017A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r4,2660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2660, ctx.r4.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEE514;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,464
	ctx.r5.u64 = ctx.r5.u64 | 464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEE534;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r22,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r22.u32);
loc_82CEE538:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEE544"))) PPC_WEAK_FUNC(sub_82CEE544);
PPC_FUNC_IMPL(__imp__sub_82CEE544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEE548"))) PPC_WEAK_FUNC(sub_82CEE548);
PPC_FUNC_IMPL(__imp__sub_82CEE548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82CEE550;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CEE560;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceee3c
	if (cr6.eq) goto loc_82CEEE3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82CEE574;
	sub_82D19BA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEE580;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r19,r11,18016
	ctx.r19.s64 = ctx.r11.s64 + 18016;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r19,-2432
	ctx.r8.s64 = ctx.r19.s64 + -2432;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwzx r4,r10,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CEE5A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceee3c
	if (cr6.eq) goto loc_82CEEE3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce78a0
	ctx.lr = 0x82CEE5BC;
	sub_82CE78A0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CEE5C8;
	sub_82DAB6D0(ctx, base);
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82ceedcc
	if (cr6.eq) goto loc_82CEEDCC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82ceedc4
	if (cr6.eq) goto loc_82CEEDC4;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// bne cr6,0x82cee628
	if (!cr6.eq) goto loc_82CEE628;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// beq cr6,0x82cee610
	if (cr6.eq) goto loc_82CEE610;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce97e8
	ctx.lr = 0x82CEE604;
	sub_82CE97E8(ctx, base);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82CEE610:
	// stb r23,2664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2664, ctx.r23.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce97e8
	ctx.lr = 0x82CEE61C;
	sub_82CE97E8(ctx, base);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82CEE628:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82cee698
	if (!cr6.eq) goto loc_82CEE698;
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CEE638;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CEE63C;
	sub_82D99C08(ctx, base);
	// bl 0x82d99ff0
	ctx.lr = 0x82CEE640;
	sub_82D99FF0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82cee664
	if (!cr6.eq) goto loc_82CEE664;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,574
	ctx.r4.u64 = ctx.r4.u64 | 574;
	// bl 0x82ce98d8
	ctx.lr = 0x82CEE658;
	sub_82CE98D8(ctx, base);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82CEE664:
	// bl 0x82ce7f28
	ctx.lr = 0x82CEE668;
	sub_82CE7F28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r8,r11,21716
	ctx.r8.s64 = ctx.r11.s64 + 21716;
	// ori r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 8192;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r6,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// b 0x82ceee30
	goto loc_82CEEE30;
loc_82CEE698:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82CEE6A0;
	sub_82D19BB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CEE6B0;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceee3c
	if (cr6.eq) goto loc_82CEEE3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CEE6E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,2668(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2668);
	ctx.f0.f64 = double(temp.f32);
	// li r21,1
	ctx.r21.s64 = 1;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// li r23,0
	ctx.r23.s64 = 0;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82cee710
	if (cr6.lt) goto loc_82CEE710;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// bne cr6,0x82cee708
	if (!cr6.eq) goto loc_82CEE708;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// bge cr6,0x82cee710
	if (!cr6.lt) goto loc_82CEE710;
loc_82CEE708:
	// stb r23,2664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2664, ctx.r23.u8);
	// b 0x82cee714
	goto loc_82CEE714;
loc_82CEE710:
	// stb r21,2664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2664, ctx.r21.u8);
loc_82CEE714:
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// addi r24,r31,1744
	ctx.r24.s64 = ctx.r31.s64 + 1744;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cee868
	if (!cr6.eq) goto loc_82CEE868;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bne cr6,0x82cee868
	if (!cr6.eq) goto loc_82CEE868;
	// stw r22,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r22.u32);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,464
	ctx.r5.u64 = ctx.r5.u64 | 464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEE754;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEE764;
	sub_82D19788(ctx, base);
	// lwz r9,1712(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmplwi cr6,r9,18
	cr6.compare<uint32_t>(ctx.r9.u32, 18, xer);
	// beq cr6,0x82cee7a4
	if (cr6.eq) goto loc_82CEE7A4;
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,100(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cee7e8
	if (!cr6.eq) goto loc_82CEE7E8;
loc_82CEE7A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEE7B4;
	sub_82D19788(ctx, base);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lwz r9,1712(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r23,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r23.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,1784(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1784);
	// stw r8,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r8.u32);
	// stw r23,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r23.u32);
	// b 0x82cee814
	goto loc_82CEE814;
loc_82CEE7E8:
	// stb r21,2660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2660, ctx.r21.u8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,1784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1784);
	// stw r10,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r10.u32);
	// lwzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r9,r11,13
	ctx.r9.s64 = ctx.r11.s64 + 13;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// stw r7,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r7.u32);
loc_82CEE814:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82cee828
	if (cr6.eq) goto loc_82CEE828;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82CEE828:
	// bl 0x82ceb520
	ctx.lr = 0x82CEE82C;
	sub_82CEB520(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r19,-104
	ctx.r4.s64 = ctx.r19.s64 + -104;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEE848;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r19,-88
	ctx.r4.s64 = ctx.r19.s64 + -88;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CEE864;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ceed34
	goto loc_82CEED34;
loc_82CEE868:
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// bne cr6,0x82cee88c
	if (!cr6.eq) goto loc_82CEE88C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ced5e0
	ctx.lr = 0x82CEE880;
	sub_82CED5E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ced130
	ctx.lr = 0x82CEE888;
	sub_82CED130(ctx, base);
	// b 0x82ceed34
	goto loc_82CEED34;
loc_82CEE88C:
	// addi r20,r31,244
	ctx.r20.s64 = ctx.r31.s64 + 244;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d98930
	ctx.lr = 0x82CEE898;
	sub_82D98930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x82CEE8A8;
	sub_831CE980(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82CEE8B8;
	sub_831CE980(ctx, base);
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// li r8,18
	ctx.r8.s64 = 18;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// beq cr6,0x82cee8e8
	if (cr6.eq) goto loc_82CEE8E8;
	// lwz r10,1768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,111
	ctx.r9.s64 = ctx.r10.s64 + 111;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
loc_82CEE8E8:
	// lwz r10,1768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r22
	ctx.r10.u64 = ctx.r9.u64 + ctx.r22.u64;
	// addi r7,r10,111
	ctx.r7.s64 = ctx.r10.s64 + 111;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r25,r10,r31
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bge cr6,0x82ceea68
	if (!cr6.lt) goto loc_82CEEA68;
	// cmplwi cr6,r22,11
	cr6.compare<uint32_t>(ctx.r22.u32, 11, xer);
	// bge cr6,0x82ceea68
	if (!cr6.lt) goto loc_82CEEA68;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ceea98
	if (cr6.eq) goto loc_82CEEA98;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82ceea68
	if (cr6.eq) goto loc_82CEEA68;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rotlwi r8,r25,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// addi r7,r11,111
	ctx.r7.s64 = ctx.r11.s64 + 111;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lwzx r6,r9,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
loc_82CEE950:
	// lwz r8,1768(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// li r10,11
	ctx.r10.s64 = 11;
	// lwz r4,1712(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r5,r22
	ctx.r10.u64 = ctx.r5.u64 + ctx.r22.u64;
	// addi r7,r10,111
	ctx.r7.s64 = ctx.r10.s64 + 111;
	// rlwinm r3,r7,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r3,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
loc_82CEE980:
	// mulli r10,r8,11
	ctx.r10.s64 = ctx.r8.s64 * 11;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r7,r7,167
	ctx.r7.s64 = ctx.r7.s64 + 167;
	// addi r28,r9,111
	ctx.r28.s64 = ctx.r9.s64 + 111;
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r28,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r7,r7,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cee9b4
	if (!cr6.eq) goto loc_82CEE9B4;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_82CEE9B4:
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cee9c0
	if (!cr6.eq) goto loc_82CEE9C0;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
loc_82CEE9C0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bdnz 0x82cee980
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CEE980;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r9,r9,167
	ctx.r9.s64 = ctx.r9.s64 + 167;
	// addi r8,r10,167
	ctx.r8.s64 = ctx.r10.s64 + 167;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,532
	ctx.r11.s64 = ctx.r11.s64 + 532;
	// cmplwi cr6,r11,1596
	cr6.compare<uint32_t>(ctx.r11.u32, 1596, xer);
	// lwzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stwx r7,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r6,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r6.u32);
	// blt cr6,0x82cee950
	if (cr6.lt) goto loc_82CEE950;
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lwz r10,1712(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,111
	ctx.r10.s64 = ctx.r10.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82ceec74
	if (cr6.eq) goto loc_82CEEC74;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r11,r11,111
	ctx.r11.s64 = ctx.r11.s64 + 111;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r7,100(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ceec74
	if (cr6.eq) goto loc_82CEEC74;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// b 0x82ceec74
	goto loc_82CEEC74;
loc_82CEEA68:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ceea98
	if (cr6.eq) goto loc_82CEEA98;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82ceea98
	if (cr6.eq) goto loc_82CEEA98;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x82ceea88
	if (cr6.lt) goto loc_82CEEA88;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// blt cr6,0x82ceeaa0
	if (cr6.lt) goto loc_82CEEAA0;
loc_82CEEA88:
	// cmplwi cr6,r22,11
	cr6.compare<uint32_t>(ctx.r22.u32, 11, xer);
	// blt cr6,0x82ceeb3c
	if (cr6.lt) goto loc_82CEEB3C;
	// cmplwi cr6,r22,18
	cr6.compare<uint32_t>(ctx.r22.u32, 18, xer);
	// bge cr6,0x82ceeb3c
	if (!cr6.lt) goto loc_82CEEB3C;
loc_82CEEA98:
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// beq cr6,0x82ceeb3c
	if (cr6.eq) goto loc_82CEEB3C;
loc_82CEEAA0:
	// rlwinm r10,r25,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,100
	ctx.r9.s64 = ctx.r11.s64 + 100;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// ld r7,100(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 100);
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// lwz r6,104(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stw r6,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r6.u32);
	// std r7,100(r10)
	PPC_STORE_U64(ctx.r10.u32 + 100, ctx.r7.u64);
	// lwz r5,100(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ceeae8
	if (cr6.eq) goto loc_82CEEAE8;
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ceeae8
	if (cr6.eq) goto loc_82CEEAE8;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
loc_82CEEAE8:
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// bge cr6,0x82ceeafc
	if (!cr6.lt) goto loc_82CEEAFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// b 0x82ceeb00
	goto loc_82CEEB00;
loc_82CEEAFC:
	// li r10,255
	ctx.r10.s64 = 255;
loc_82CEEB00:
	// cmplwi cr6,r25,32
	cr6.compare<uint32_t>(ctx.r25.u32, 32, xer);
	// bge cr6,0x82ceeb14
	if (!cr6.lt) goto loc_82CEEB14;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lbzx r11,r25,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// b 0x82ceeb18
	goto loc_82CEEB18;
loc_82CEEB14:
	// li r11,255
	ctx.r11.s64 = 255;
loc_82CEEB18:
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// bge cr6,0x82ceeb28
	if (!cr6.lt) goto loc_82CEEB28;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stbx r11,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u8);
loc_82CEEB28:
	// cmplwi cr6,r25,32
	cr6.compare<uint32_t>(ctx.r25.u32, 32, xer);
	// bge cr6,0x82ceec74
	if (!cr6.lt) goto loc_82CEEC74;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stbx r10,r25,r11
	PPC_STORE_U8(ctx.r25.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x82ceec74
	goto loc_82CEEC74;
loc_82CEEB3C:
	// bl 0x831156e8
	ctx.lr = 0x82CEEB40;
	sub_831156E8(ctx, base);
	// sth r23,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r23.u16);
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r28,100(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82CEEB60;
	sub_8311BF98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d9e220
	ctx.lr = 0x82CEEB6C;
	sub_82D9E220(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEEB78;
	sub_82D19A78(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d33db0
	ctx.lr = 0x82CEEB80;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r19,-72
	ctx.r4.s64 = ctx.r19.s64 + -72;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEEB98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceee3c
	if (cr6.eq) goto loc_82CEEE3C;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83120738
	ctx.lr = 0x82CEEBBC;
	sub_83120738(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1772(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// bl 0x82d013e8
	ctx.lr = 0x82CEEBD4;
	sub_82D013E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82CEEBDC;
	sub_82D19A10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r7,r19,-56
	ctx.r7.s64 = ctx.r19.s64 + -56;
	// lwz r5,100(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d017a8
	ctx.lr = 0x82CEEBF4;
	sub_82D017A8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r19,-32
	ctx.r4.s64 = ctx.r19.s64 + -32;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CEEC10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,2657(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2657);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ceec2c
	if (cr6.eq) goto loc_82CEEC2C;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,237
	ctx.r4.u64 = ctx.r4.u64 | 237;
	// bl 0x82ce98d8
	ctx.lr = 0x82CEEC2C;
	sub_82CE98D8(ctx, base);
loc_82CEEC2C:
	// addi r11,r25,13
	ctx.r11.s64 = ctx.r25.s64 + 13;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r10.u32);
	// lbzx r9,r8,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ceec74
	if (!cr6.eq) goto loc_82CEEC74;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r10,r31,104
	ctx.r10.s64 = ctx.r31.s64 + 104;
loc_82CEEC50:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// beq cr6,0x82ceedb4
	if (cr6.eq) goto loc_82CEEDB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// blt cr6,0x82ceec50
	if (cr6.lt) goto loc_82CEEC50;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82CEEC70:
	// stbx r3,r8,r31
	PPC_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r3.u8);
loc_82CEEC74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce7ca0
	ctx.lr = 0x82CEEC7C;
	sub_82CE7CA0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce9298
	ctx.lr = 0x82CEEC88;
	sub_82CE9298(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82CEEC98;
	sub_831CE980(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d99658
	ctx.lr = 0x82CEECA4;
	sub_82D99658(ctx, base);
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CEECB0;
	sub_82D17DA0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEECC0;
	sub_82D19788(ctx, base);
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ceed10
	if (cr6.eq) goto loc_82CEED10;
	// addi r4,r19,-12
	ctx.r4.s64 = ctx.r19.s64 + -12;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83815d38
	ctx.lr = 0x82CEECD8;
	sub_83815D38(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,1712(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// bl 0x83815b08
	ctx.lr = 0x82CEECE4;
	sub_83815B08(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83815b08
	ctx.lr = 0x82CEECF0;
	sub_83815B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82CEECF8;
	sub_82D19A10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceed08
	if (cr6.eq) goto loc_82CEED08;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x838153c8
	ctx.lr = 0x82CEED08;
	sub_838153C8(ctx, base);
loc_82CEED08:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83815cb8
	ctx.lr = 0x82CEED10;
	sub_83815CB8(ctx, base);
loc_82CEED10:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ced5e0
	ctx.lr = 0x82CEED1C;
	sub_82CED5E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cec170
	ctx.lr = 0x82CEED24;
	sub_82CEC170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ced130
	ctx.lr = 0x82CEED2C;
	sub_82CED130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cecb40
	ctx.lr = 0x82CEED34;
	sub_82CECB40(ctx, base);
loc_82CEED34:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce7770
	ctx.lr = 0x82CEED44;
	sub_82CE7770(ctx, base);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce77e0
	ctx.lr = 0x82CEED58;
	sub_82CE77E0(ctx, base);
	// lwz r11,2640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2640);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x82ceee3c
	if (!cr6.eq) goto loc_82CEEE3C;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82CEED80;
	sub_82D1EBF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82cefad8
	ctx.lr = 0x82CEED8C;
	sub_82CEFAD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceeda0
	if (cr6.eq) goto loc_82CEEDA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82CEEDA0;
	sub_83103100(ctx, base);
loc_82CEEDA0:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r11.u32);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82CEEDB4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce7d48
	ctx.lr = 0x82CEEDC0;
	sub_82CE7D48(ctx, base);
	// b 0x82ceec70
	goto loc_82CEEC70;
loc_82CEEDC4:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82ceee04
	if (!cr6.eq) goto loc_82CEEE04;
loc_82CEEDCC:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r10,r11,111
	ctx.r10.s64 = ctx.r11.s64 + 111;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r30,r9,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x825832e0
	ctx.lr = 0x82CEEDF0;
	sub_825832E0(ctx, base);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce7f28
	ctx.lr = 0x82CEEE04;
	sub_82CE7F28(ctx, base);
loc_82CEEE04:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r8,r11,21716
	ctx.r8.s64 = ctx.r11.s64 + 21716;
	// ori r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 8192;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r6,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r6.u8);
loc_82CEEE30:
	// stw r9,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82CEEE3C;
	sub_83103068(ctx, base);
loc_82CEEE3C:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEEE48"))) PPC_WEAK_FUNC(sub_82CEEE48);
PPC_FUNC_IMPL(__imp__sub_82CEEE48) {
	PPC_FUNC_PROLOGUE();
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82ced930
	sub_82CED930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEEE50"))) PPC_WEAK_FUNC(sub_82CEEE50);
PPC_FUNC_IMPL(__imp__sub_82CEEE50) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ced930
	sub_82CED930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEEE58"))) PPC_WEAK_FUNC(sub_82CEEE58);
PPC_FUNC_IMPL(__imp__sub_82CEEE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CEEE60;
	__savegprlr_29(ctx, base);
	// stwu r1,-2544(r1)
	ea = -2544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CEEE70;
	sub_831156E8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,-8192
	ctx.r11.s64 = ctx.r11.s64 + -8192;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x82cef2f0
	if (cr6.gt) goto loc_82CEF2F0;
	// lis r12,-32049
	ctx.r12.s64 = -2100363264;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4444
	ctx.r12.s64 = ctx.r12.s64 + -4444;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82CEEED4;
	case 1:
		goto loc_82CEEEF0;
	case 2:
		goto loc_82CEEF0C;
	case 3:
		goto loc_82CEEF28;
	case 4:
		goto loc_82CEEF60;
	case 5:
		goto loc_82CEEF74;
	case 6:
		goto loc_82CEEFA4;
	case 7:
		goto loc_82CEEFFC;
	case 8:
		goto loc_82CEF0B8;
	case 9:
		goto loc_82CEF20C;
	case 10:
		goto loc_82CEF2C0;
	case 11:
		goto loc_82CEF2D8;
	default:
		return;
	}
	// lwz r22,-4396(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -4396);
	// lwz r22,-4368(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -4368);
	// lwz r22,-4340(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -4340);
	// lwz r22,-4312(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -4312);
	// lwz r22,-4256(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -4256);
	// lwz r22,-4236(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -4236);
	// lwz r22,-4188(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -4188);
	// lwz r22,-4100(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -4100);
	// lwz r22,-3912(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3912);
	// lwz r22,-3572(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3572);
	// lwz r22,-3392(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3392);
	// lwz r22,-3368(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3368);
loc_82CEEED4:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r11.u32);
	// bl 0x82ce9d70
	ctx.lr = 0x82CEEEE4;
	sub_82CE9D70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CEEEF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r11.u32);
	// bl 0x82ce9d70
	ctx.lr = 0x82CEEF00;
	sub_82CE9D70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CEEF0C:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r11.u32);
	// bl 0x82ce9d70
	ctx.lr = 0x82CEEF1C;
	sub_82CE9D70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CEEF28:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cef2f0
	if (cr6.eq) goto loc_82CEF2F0;
	// lbz r10,756(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 756);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ceef4c
	if (cr6.eq) goto loc_82CEEF4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// bl 0x82ceae38
	ctx.lr = 0x82CEEF4C;
	sub_82CEAE38(ctx, base);
loc_82CEEF4C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CEEF60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cee080
	ctx.lr = 0x82CEEF68;
	sub_82CEE080(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CEEF74:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cef2f0
	if (cr6.eq) goto loc_82CEF2F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// bl 0x82ced130
	ctx.lr = 0x82CEEF90;
	sub_82CED130(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CEEFA4:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cef2f0
	if (cr6.eq) goto loc_82CEF2F0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r30,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r30.u32);
	// stw r11,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r11.u32);
	// stw r30,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r30.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d01dd8
	ctx.lr = 0x82CEEFCC;
	sub_82D01DD8(ctx, base);
	// stw r3,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r3.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d01dd8
	ctx.lr = 0x82CEEFDC;
	sub_82D01DD8(ctx, base);
	// lwz r10,292(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEEFF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CEEFFC:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cef2f0
	if (cr6.eq) goto loc_82CEF2F0;
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,1712(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// li r8,13
	ctx.r8.s64 = 13;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r11,111
	ctx.r6.s64 = ctx.r11.s64 + 111;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// stw r10,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r10.u32);
	// lwz r9,1784(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1784);
	// stw r9,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r9.u32);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// stw r5,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r5.u32);
	// stw r30,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r30.u32);
	// stw r8,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r8.u32);
	// stw r30,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r30.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d01dd8
	ctx.lr = 0x82CEF07C;
	sub_82D01DD8(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r3,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r3.u32);
	// addi r10,r4,21716
	ctx.r10.s64 = ctx.r4.s64 + 21716;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// ori r9,r11,8194
	ctx.r9.u64 = ctx.r11.u64 | 8194;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82CEF0AC;
	sub_83103068(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CEF0B8:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cef2f0
	if (cr6.eq) goto loc_82CEF2F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82CEF0D4;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,15476
	ctx.r4.s64 = ctx.r10.s64 + 15476;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CEF0F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,1744(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82cef108
	if (!cr6.eq) goto loc_82CEF108;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// beq cr6,0x82cef1ec
	if (cr6.eq) goto loc_82CEF1EC;
loc_82CEF108:
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ce9718
	ctx.lr = 0x82CEF114;
	sub_82CE9718(ctx, base);
	// li r10,54
	ctx.r10.s64 = 54;
	// addi r11,r1,1644
	ctx.r11.s64 = ctx.r1.s64 + 1644;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,13
	ctx.r8.s64 = 13;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82CEF130:
	// stb r30,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r30.u8);
	// stb r30,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r30.u8);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82cef130
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CEF130;
	// addi r4,r31,1776
	ctx.r4.s64 = ctx.r31.s64 + 1776;
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// li r5,864
	ctx.r5.s64 = 864;
	// bl 0x831ce980
	ctx.lr = 0x82CEF158;
	sub_831CE980(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82CEF15C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cef178
	if (!cr6.eq) goto loc_82CEF178;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x838760e0
	ctx.lr = 0x82CEF16C;
	sub_838760E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CEF178:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CEF180;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CEF184;
	sub_83102DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d01dd8
	ctx.lr = 0x82CEF190;
	sub_82D01DD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CEF19C;
	sub_82D9A868(ctx, base);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lwz r9,1712(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// addi r8,r1,1648
	ctx.r8.s64 = ctx.r1.s64 + 1648;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// bl 0x82d996b0
	ctx.lr = 0x82CEF1CC;
	sub_82D996B0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cea1a0
	ctx.lr = 0x82CEF1D8;
	sub_82CEA1A0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cea398
	ctx.lr = 0x82CEF1E4;
	sub_82CEA398(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x838760e0
	ctx.lr = 0x82CEF1EC;
	sub_838760E0(ctx, base);
loc_82CEF1EC:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d01dd8
	ctx.lr = 0x82CEF1F4;
	sub_82D01DD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cec258
	ctx.lr = 0x82CEF200;
	sub_82CEC258(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CEF20C:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,1712(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r11,111
	ctx.r6.s64 = ctx.r11.s64 + 111;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r5,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82CEF250;
	sub_8311BF98(ctx, base);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r9,15476
	ctx.r11.s64 = ctx.r9.s64 + 15476;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-141
	ctx.r4.s64 = ctx.r11.s64 + -141;
	// bl 0x837b0c10
	ctx.lr = 0x82CEF268;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// ori r4,r4,321
	ctx.r4.u64 = ctx.r4.u64 | 321;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x82CEF27C;
	sub_82D042A8(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82cef290
	if (!cr6.lt) goto loc_82CEF290;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82CEF290:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82CEF298;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce95a8
	ctx.lr = 0x82CEF2A4;
	sub_82CE95A8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82CEF2B4;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CEF2C0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce97e8
	ctx.lr = 0x82CEF2CC;
	sub_82CE97E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CEF2D8:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,520
	ctx.r4.u64 = ctx.r4.u64 | 520;
	// bl 0x82ce98d8
	ctx.lr = 0x82CEF2E8;
	sub_82CE98D8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r11.u32);
loc_82CEF2F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEF2FC"))) PPC_WEAK_FUNC(sub_82CEF2FC);
PPC_FUNC_IMPL(__imp__sub_82CEF2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEF300"))) PPC_WEAK_FUNC(sub_82CEF300);
PPC_FUNC_IMPL(__imp__sub_82CEF300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,19820
	ctx.r5.s64 = ctx.r11.s64 + 19820;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEF314"))) PPC_WEAK_FUNC(sub_82CEF314);
PPC_FUNC_IMPL(__imp__sub_82CEF314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEF318"))) PPC_WEAK_FUNC(sub_82CEF318);
PPC_FUNC_IMPL(__imp__sub_82CEF318) {
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
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x82cef3b0
	if (cr6.gt) goto loc_82CEF3B0;
	// lis r12,-32049
	ctx.r12.s64 = -2100363264;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-3248
	ctx.r12.s64 = ctx.r12.s64 + -3248;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82CEF39C;
	case 1:
		goto loc_82CEF39C;
	case 2:
		goto loc_82CEF3B0;
	case 3:
		goto loc_82CEF39C;
	case 4:
		goto loc_82CEF39C;
	case 5:
		goto loc_82CEF3B0;
	case 6:
		goto loc_82CEF3B0;
	case 7:
		goto loc_82CEF3B0;
	case 8:
		goto loc_82CEF3B0;
	case 9:
		goto loc_82CEF380;
	case 10:
		goto loc_82CEF3B0;
	case 11:
		goto loc_82CEF39C;
	default:
		return;
	}
	// lwz r22,-3172(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3172);
	// lwz r22,-3172(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3172);
	// lwz r22,-3152(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3152);
	// lwz r22,-3172(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3172);
	// lwz r22,-3172(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3172);
	// lwz r22,-3152(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3152);
	// lwz r22,-3152(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3152);
	// lwz r22,-3152(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3152);
	// lwz r22,-3152(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3152);
	// lwz r22,-3200(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3200);
	// lwz r22,-3152(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3152);
	// lwz r22,-3172(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + -3172);
loc_82CEF380:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,14528(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14528);
	// bl 0x82450880
	ctx.lr = 0x82CEF390;
	sub_82450880(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cef3b0
	if (cr6.eq) goto loc_82CEF3B0;
loc_82CEF39C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CEF3A4;
	sub_82D19A68(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CEF3B0;
	sub_82D2AEC8(ctx, base);
loc_82CEF3B0:
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

__attribute__((alias("__imp__sub_82CEF3C4"))) PPC_WEAK_FUNC(sub_82CEF3C4);
PPC_FUNC_IMPL(__imp__sub_82CEF3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEF3C8"))) PPC_WEAK_FUNC(sub_82CEF3C8);
PPC_FUNC_IMPL(__imp__sub_82CEF3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CEF3D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,6
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 6;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// ble cr6,0x82cef5a0
	if (!cr6.gt) goto loc_82CEF5A0;
	// bl 0x82d19a78
	ctx.lr = 0x82CEF3F8;
	sub_82D19A78(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r28,r30,6,0,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cef418
	if (cr6.lt) goto loc_82CEF418;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CEF418:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CEF430;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d86078
	ctx.lr = 0x82CEF434;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cef5a0
	if (cr6.eq) goto loc_82CEF5A0;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CEF448;
	sub_831F8200(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82CEF458;
	sub_82DAB6D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CEF460;
	sub_831156E8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r25,r11,19808
	ctx.r25.s64 = ctx.r11.s64 + 19808;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r25,-745
	ctx.r4.s64 = ctx.r25.s64 + -745;
	// lwz r30,48(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x837b0c10
	ctx.lr = 0x82CEF47C;
	sub_837B0C10(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x82cef508
	if (cr6.eq) goto loc_82CEF508;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82cef4e4
	if (cr6.eq) goto loc_82CEF4E4;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x82cef4b4
	if (cr6.eq) goto loc_82CEF4B4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d042a8
	ctx.lr = 0x82CEF4B0;
	sub_82D042A8(ctx, base);
	// b 0x82cef540
	goto loc_82CEF540;
loc_82CEF4B4:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82CEF4CC;
	sub_8311BF98(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r5,r3,56
	ctx.r5.s64 = ctx.r3.s64 + 56;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82cef538
	goto loc_82CEF538;
loc_82CEF4E4:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82CEF4FC;
	sub_8311BF98(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// b 0x82cef52c
	goto loc_82CEF52C;
loc_82CEF508:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// bl 0x825832e0
	ctx.lr = 0x82CEF514;
	sub_825832E0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82CEF524;
	sub_8311BF98(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
loc_82CEF52C:
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r3,56
	ctx.r5.s64 = ctx.r3.s64 + 56;
loc_82CEF538:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CEF540;
	sub_82D042A8(ctx, base);
loc_82CEF540:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CEF548;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82cef558
	if (!cr6.eq) goto loc_82CEF558;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82CEF558:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82CEF57C;
	sub_8259CB28(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CEF588;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82a69ad0
	ctx.lr = 0x82CEF598;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEF5A0;
	sub_8387E8E0(ctx, base);
loc_82CEF5A0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEF5A8"))) PPC_WEAK_FUNC(sub_82CEF5A8);
PPC_FUNC_IMPL(__imp__sub_82CEF5A8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// srawi r7,r8,6
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 6;
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bgt cr6,0x82cef7cc
	if (cr6.gt) goto loc_82CEF7CC;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82cef73c
	if (cr6.gt) goto loc_82CEF73C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82cef660
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEF660;
	// bdzf 4*cr6+eq,0x82cef6c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CEF6C0;
	// bne cr6,0x82cef70c
	if (!cr6.eq) goto loc_82CEF70C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19948
	ctx.lr = 0x82CEF608;
	sub_82D19948(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,8201
	ctx.r8.u64 = ctx.r10.u64 | 8201;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82CEF638;
	sub_83103068(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82CEF64C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_82CEF660:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19948
	ctx.lr = 0x82CEF668;
	sub_82D19948(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,8202
	ctx.r8.u64 = ctx.r10.u64 | 8202;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r7,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82CEF698;
	sub_83103068(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82CEF6AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_82CEF6C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19948
	ctx.lr = 0x82CEF6C8;
	sub_82D19948(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,8203
	ctx.r8.u64 = ctx.r10.u64 | 8203;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r7,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82CEF6F8;
	sub_83103068(ctx, base);
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
loc_82CEF70C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19948
	ctx.lr = 0x82CEF714;
	sub_82D19948(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEF728;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_82CEF73C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,21716
	ctx.r9.s64 = ctx.r10.s64 + 21716;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// bl 0x83103068
	ctx.lr = 0x82CEF764;
	sub_83103068(ctx, base);
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cef7a4
	if (cr6.eq) goto loc_82CEF7A4;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cef794
	if (cr6.lt) goto loc_82CEF794;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CEF794:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d20da8
	ctx.lr = 0x82CEF7A4;
	sub_82D20DA8(ctx, base);
loc_82CEF7A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CEF7B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_82CEF7CC:
	// stw r4,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cef3c8
	ctx.lr = 0x82CEF7D8;
	sub_82CEF3C8(ctx, base);
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

__attribute__((alias("__imp__sub_82CEF7EC"))) PPC_WEAK_FUNC(sub_82CEF7EC);
PPC_FUNC_IMPL(__imp__sub_82CEF7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEF7F0"))) PPC_WEAK_FUNC(sub_82CEF7F0);
PPC_FUNC_IMPL(__imp__sub_82CEF7F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CEF7F8;
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
	// beq cr6,0x82cef860
	if (cr6.eq) goto loc_82CEF860;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82CEF814:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82CEF838;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x8259cb28
	ctx.lr = 0x82CEF84C;
	sub_8259CB28(ctx, base);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r9,r31,-8
	ctx.r9.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cef814
	if (!cr6.eq) goto loc_82CEF814;
loc_82CEF860:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEF86C"))) PPC_WEAK_FUNC(sub_82CEF86C);
PPC_FUNC_IMPL(__imp__sub_82CEF86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEF870"))) PPC_WEAK_FUNC(sub_82CEF870);
PPC_FUNC_IMPL(__imp__sub_82CEF870) {
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
	// addi r9,r11,19912
	ctx.r9.s64 = ctx.r11.s64 + 19912;
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
	// beq cr6,0x82cef8d4
	if (cr6.eq) goto loc_82CEF8D4;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83540518
	ctx.lr = 0x82CEF8C0;
	sub_83540518(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CEF8D4;
	sub_825952B8(ctx, base);
loc_82CEF8D4:
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
	ctx.lr = 0x82CEF8EC;
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

__attribute__((alias("__imp__sub_82CEF904"))) PPC_WEAK_FUNC(sub_82CEF904);
PPC_FUNC_IMPL(__imp__sub_82CEF904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEF908"))) PPC_WEAK_FUNC(sub_82CEF908);
PPC_FUNC_IMPL(__imp__sub_82CEF908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CEF910;
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x8308e078
	ctx.lr = 0x82CEF930;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82CEF948;
	sub_82D253F8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r26,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r26.u32);
	// addi r9,r11,19912
	ctx.r9.s64 = ctx.r11.s64 + 19912;
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
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r27,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r27.u32);
	// bl 0x82d191f8
	ctx.lr = 0x82CEF984;
	sub_82D191F8(ctx, base);
	// lis r30,-31776
	ctx.r30.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r30,14536
	ctx.r7.s64 = ctx.r30.s64 + 14536;
	// lwz r4,-4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// bl 0x82d20ae0
	ctx.lr = 0x82CEF998;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,14536(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14536);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82CEF9A8;
	sub_82D23390(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17e60
	ctx.lr = 0x82CEF9B4;
	sub_82D17E60(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82cefa20
	if (cr6.eq) goto loc_82CEFA20;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82cefa20
	if (cr6.eq) goto loc_82CEFA20;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82cefa20
	if (cr6.eq) goto loc_82CEFA20;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82cefa20
	if (cr6.eq) goto loc_82CEFA20;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82cefa20
	if (cr6.eq) goto loc_82CEFA20;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82cefa20
	if (cr6.eq) goto loc_82CEFA20;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82cefa20
	if (cr6.eq) goto loc_82CEFA20;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82cefa20
	if (cr6.eq) goto loc_82CEFA20;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x82cefa20
	if (cr6.eq) goto loc_82CEFA20;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x82cefa20
	if (cr6.eq) goto loc_82CEFA20;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x82cefa20
	if (cr6.eq) goto loc_82CEFA20;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// beq cr6,0x82cefa20
	if (cr6.eq) goto loc_82CEFA20;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x82cefa30
	if (!cr6.eq) goto loc_82CEFA30;
loc_82CEFA20:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CEFA30;
	sub_82D19788(ctx, base);
loc_82CEFA30:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82cefa64
	if (cr6.eq) goto loc_82CEFA64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x82cefa64
	if (cr6.eq) goto loc_82CEFA64;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x82cefa64
	if (cr6.eq) goto loc_82CEFA64;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x82cefa64
	if (cr6.eq) goto loc_82CEFA64;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// beq cr6,0x82cefa64
	if (cr6.eq) goto loc_82CEFA64;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x82cefa78
	if (!cr6.eq) goto loc_82CEFA78;
loc_82CEFA64:
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,140
	ctx.r5.u64 = ctx.r5.u64 | 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82CEFA78;
	sub_82D20EB8(ctx, base);
loc_82CEFA78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEFA84"))) PPC_WEAK_FUNC(sub_82CEFA84);
PPC_FUNC_IMPL(__imp__sub_82CEFA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEFA88"))) PPC_WEAK_FUNC(sub_82CEFA88);
PPC_FUNC_IMPL(__imp__sub_82CEFA88) {
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
	// bl 0x82cef870
	ctx.lr = 0x82CEFAA8;
	sub_82CEF870(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cefac0
	if (cr6.eq) goto loc_82CEFAC0;
	// bl 0x82416268
	ctx.lr = 0x82CEFABC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CEFAC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CEFAD8"))) PPC_WEAK_FUNC(sub_82CEFAD8);
PPC_FUNC_IMPL(__imp__sub_82CEFAD8) {
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
	// li r4,124
	ctx.r4.s64 = 124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CEFB0C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cefb34
	if (cr6.eq) goto loc_82CEFB34;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r4,r11,19752
	ctx.r4.s64 = ctx.r11.s64 + 19752;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82cef908
	ctx.lr = 0x82CEFB30;
	sub_82CEF908(ctx, base);
	// b 0x82cefb38
	goto loc_82CEFB38;
loc_82CEFB34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CEFB38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CEFB50"))) PPC_WEAK_FUNC(sub_82CEFB50);
PPC_FUNC_IMPL(__imp__sub_82CEFB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CEFB58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,100(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cefb98
	if (cr6.eq) goto loc_82CEFB98;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82cef7f0
	ctx.lr = 0x82CEFB80;
	sub_82CEF7F0(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83540518
	ctx.lr = 0x82CEFB94;
	sub_83540518(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82CEFB98:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r29,19
	ctx.r29.s64 = 19;
	// addi r30,r11,14672
	ctx.r30.s64 = ctx.r11.s64 + 14672;
loc_82CEFBA4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,116(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82cefbc0
	if (!cr6.eq) goto loc_82CEFBC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83540ba8
	ctx.lr = 0x82CEFBC0;
	sub_83540BA8(ctx, base);
loc_82CEFBC0:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// bne 0x82cefba4
	if (!cr0.eq) goto loc_82CEFBA4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEFBD4"))) PPC_WEAK_FUNC(sub_82CEFBD4);
PPC_FUNC_IMPL(__imp__sub_82CEFBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEFBD8"))) PPC_WEAK_FUNC(sub_82CEFBD8);
PPC_FUNC_IMPL(__imp__sub_82CEFBD8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82cefc24
	if (!cr6.eq) goto loc_82CEFC24;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,19800
	ctx.r11.s64 = ctx.r11.s64 + 19800;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82CEFC18;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,182
	ctx.r4.u64 = ctx.r4.u64 | 182;
	// b 0x82cefdc4
	goto loc_82CEFDC4;
loc_82CEFC24:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82cefc54
	if (!cr6.eq) goto loc_82CEFC54;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,19800
	ctx.r11.s64 = ctx.r11.s64 + 19800;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82CEFC48;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,521
	ctx.r4.u64 = ctx.r4.u64 | 521;
	// b 0x82cefdc4
	goto loc_82CEFDC4;
loc_82CEFC54:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82cefc84
	if (!cr6.eq) goto loc_82CEFC84;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,19800
	ctx.r11.s64 = ctx.r11.s64 + 19800;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82CEFC78;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,560
	ctx.r4.u64 = ctx.r4.u64 | 560;
	// b 0x82cefdc4
	goto loc_82CEFDC4;
loc_82CEFC84:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82cefcb4
	if (!cr6.eq) goto loc_82CEFCB4;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,19800
	ctx.r11.s64 = ctx.r11.s64 + 19800;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82CEFCA8;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,332
	ctx.r4.u64 = ctx.r4.u64 | 332;
	// b 0x82cefdc4
	goto loc_82CEFDC4;
loc_82CEFCB4:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x82cefd9c
	if (!cr6.eq) goto loc_82CEFD9C;
	// bl 0x82d86078
	ctx.lr = 0x82CEFCC0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cefe0c
	if (cr6.eq) goto loc_82CEFE0C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CEFCD0;
	sub_831F8200(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,19800
	ctx.r11.s64 = ctx.r11.s64 + 19800;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-738
	ctx.r4.s64 = ctx.r11.s64 + -738;
	// bl 0x837b0c10
	ctx.lr = 0x82CEFCE8;
	sub_837B0C10(ctx, base);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x831156e8
	ctx.lr = 0x82CEFCFC;
	sub_831156E8(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x82CEFD08;
	sub_8311BF98(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r3,56
	ctx.r5.s64 = ctx.r3.s64 + 56;
	// ori r4,r4,358
	ctx.r4.u64 = ctx.r4.u64 | 358;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CEFD1C;
	sub_82D042A8(ctx, base);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,14528(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14528);
	// bl 0x82d2fa90
	ctx.lr = 0x82CEFD34;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cefd7c
	if (cr6.eq) goto loc_82CEFD7C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cefd54
	if (!cr6.lt) goto loc_82CEFD54;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CEFD54:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CEFD5C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82CEFD68;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEFD70;
	sub_8387E8E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82CEFD7C;
	sub_83103100(ctx, base);
loc_82CEFD7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CEFD84;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CEFD90;
	sub_82D2AEC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CEFD98;
	sub_8387E8E0(ctx, base);
	// b 0x82cefdec
	goto loc_82CEFDEC;
loc_82CEFD9C:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x82cefdec
	if (!cr6.eq) goto loc_82CEFDEC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,19800
	ctx.r3.s64 = ctx.r11.s64 + 19800;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82CEFDBC;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,568
	ctx.r4.u64 = ctx.r4.u64 | 568;
loc_82CEFDC4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d2ada8
	ctx.lr = 0x82CEFDCC;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82CEFDD8;
	sub_83103100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CEFDE0;
	sub_82D19A68(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CEFDEC;
	sub_82D2AEC8(ctx, base);
loc_82CEFDEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cefb50
	ctx.lr = 0x82CEFDF4;
	sub_82CEFB50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cef3c8
	ctx.lr = 0x82CEFE00;
	sub_82CEF3C8(ctx, base);
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CEFE0C;
	sub_82D17DA0(ctx, base);
loc_82CEFE0C:
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

__attribute__((alias("__imp__sub_82CEFE28"))) PPC_WEAK_FUNC(sub_82CEFE28);
PPC_FUNC_IMPL(__imp__sub_82CEFE28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82CEFE44"))) PPC_WEAK_FUNC(sub_82CEFE44);
PPC_FUNC_IMPL(__imp__sub_82CEFE44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CEFE48"))) PPC_WEAK_FUNC(sub_82CEFE48);
PPC_FUNC_IMPL(__imp__sub_82CEFE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CEFE50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,15976(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15976);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CEFE78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cefeb0
	if (cr6.eq) goto loc_82CEFEB0;
	// li r11,13
	ctx.r11.s64 = 13;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179518
	ctx.lr = 0x82CEFEA0;
	sub_83179518(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82d45c08
	ctx.lr = 0x82CEFEB0;
	sub_82D45C08(ctx, base);
loc_82CEFEB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEFEB8"))) PPC_WEAK_FUNC(sub_82CEFEB8);
PPC_FUNC_IMPL(__imp__sub_82CEFEB8) {
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
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83179518
	ctx.lr = 0x82CEFEEC;
	sub_83179518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ceff24
	if (cr6.eq) goto loc_82CEFF24;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,15988(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15988);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CEFF14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceff24
	if (cr6.eq) goto loc_82CEFF24;
	// clrldi r4,r30,56
	ctx.r4.u64 = ctx.r30.u64 & 0xFF;
	// bl 0x82d294d0
	ctx.lr = 0x82CEFF24;
	sub_82D294D0(ctx, base);
loc_82CEFF24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CEFF3C"))) PPC_WEAK_FUNC(sub_82CEFF3C);
PPC_FUNC_IMPL(__imp__sub_82CEFF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CEFF40"))) PPC_WEAK_FUNC(sub_82CEFF40);
PPC_FUNC_IMPL(__imp__sub_82CEFF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CEFF48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cefff0
	if (cr6.eq) goto loc_82CEFFF0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,16008(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16008);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CEFF7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,16004(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16004);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CEFF9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceffe4
	if (cr6.eq) goto loc_82CEFFE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,21120
	ctx.r4.s64 = ctx.r10.s64 + 21120;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CEFFC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ceffe4
	if (cr6.eq) goto loc_82CEFFE4;
	// bl 0x82d2b0f8
	ctx.lr = 0x82CEFFD0;
	sub_82D2B0F8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83545640
	ctx.lr = 0x82CEFFE4;
	sub_83545640(ctx, base);
loc_82CEFFE4:
	// li r4,109
	ctx.r4.s64 = 109;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CEFFF0;
	sub_82D17DA0(ctx, base);
loc_82CEFFF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CEFFF8"))) PPC_WEAK_FUNC(sub_82CEFFF8);
PPC_FUNC_IMPL(__imp__sub_82CEFFF8) {
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
	// addi r3,r3,205
	ctx.r3.s64 = ctx.r3.s64 + 205;
	// bl 0x82dd6438
	ctx.lr = 0x82CF0014;
	sub_82DD6438(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cf0038
	if (!cr6.eq) goto loc_82CF0038;
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
loc_82CF0038:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CF004C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,292(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CF0060;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,304(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 304);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CF0074;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

