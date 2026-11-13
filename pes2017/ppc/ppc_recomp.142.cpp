#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BC0E18"))) PPC_WEAK_FUNC(sub_82BC0E18);
PPC_FUNC_IMPL(__imp__sub_82BC0E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BC0E20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bc0f8c
	if (cr6.eq) goto loc_82BC0F8C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r27,112
	ctx.r27.s64 = 112;
	// lwz r28,4(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// divw. r10,r10,r27
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bc0e6c
	if (!cr0.eq) goto loc_82BC0E6C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82bc0cb8
	ctx.lr = 0x82BC0E60;
	sub_82BC0CB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82BC0E6C:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// divw r9,r8,r27
	ctx.r9.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82bc0ee0
	if (cr6.gt) goto loc_82BC0EE0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x82bc0eb4
	if (cr6.eq) goto loc_82BC0EB4;
loc_82BC0E94:
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82BC0EA4;
	sub_831CE980(ctx, base);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82bc0e94
	if (!cr6.eq) goto loc_82BC0E94;
loc_82BC0EB4:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r27
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// mulli r10,r7,112
	ctx.r10.s64 = ctx.r7.s64 * 112;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82BC0EE0:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r6,r7,r27
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r27.s32);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bgt cr6,0x82bc0f38
	if (cr6.gt) goto loc_82BC0F38;
	// mulli r10,r9,112
	ctx.r10.s64 = ctx.r9.s64 * 112;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x82bc0f2c
	if (cr6.eq) goto loc_82BC0F2C;
loc_82BC0F0C:
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82BC0F1C;
	sub_831CE980(ctx, base);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82bc0f0c
	if (!cr6.eq) goto loc_82BC0F0C;
loc_82BC0F2C:
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82bc0f7c
	goto loc_82BC0F7C;
loc_82BC0F38:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bc0f50
	if (cr6.eq) goto loc_82BC0F50;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BC0F50;
	sub_825952B8(ctx, base);
loc_82BC0F50:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r4,r9,r27
	ctx.r4.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// bl 0x82bc0bc0
	ctx.lr = 0x82BC0F68;
	sub_82BC0BC0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bc0f8c
	if (cr6.eq) goto loc_82BC0F8C;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82BC0F7C:
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82bc0c60
	ctx.lr = 0x82BC0F88;
	sub_82BC0C60(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_82BC0F8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC0F98"))) PPC_WEAK_FUNC(sub_82BC0F98);
PPC_FUNC_IMPL(__imp__sub_82BC0F98) {
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
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bc0fd4
	if (cr6.eq) goto loc_82BC0FD4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bc0b40
	ctx.lr = 0x82BC0FD0;
	sub_82BC0B40(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_82BC0FD4:
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r6,140(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,136(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82bc0cb8
	ctx.lr = 0x82BC0FE8;
	sub_82BC0CB8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82BC0FF8;
	sub_831CDCF0(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82BC1008;
	sub_831CDCF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC1020"))) PPC_WEAK_FUNC(sub_82BC1020);
PPC_FUNC_IMPL(__imp__sub_82BC1020) {
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
	// bl 0x82bc0d88
	ctx.lr = 0x82BC1040;
	sub_82BC0D88(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc1058
	if (cr6.eq) goto loc_82BC1058;
	// bl 0x82416268
	ctx.lr = 0x82BC1054;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC1058:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC1070"))) PPC_WEAK_FUNC(sub_82BC1070);
PPC_FUNC_IMPL(__imp__sub_82BC1070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82BC1078;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC1084;
	sub_82D19A78(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d33db0
	ctx.lr = 0x82BC108C;
	sub_82D33DB0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc1238
	if (cr6.eq) goto loc_82BC1238;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC10A0;
	sub_82D19A78(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d33db0
	ctx.lr = 0x82BC10A8;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc10d4
	if (cr6.eq) goto loc_82BC10D4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82BC10C4;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC10D4;
	sub_82D2AEC8(ctx, base);
loc_82BC10D4:
	// bl 0x831156e8
	ctx.lr = 0x82BC10D8;
	sub_831156E8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,26444
	ctx.r31.s64 = ctx.r11.s64 + 26444;
	// addi r4,r31,-1626
	ctx.r4.s64 = ctx.r31.s64 + -1626;
	// bl 0x837b0c10
	ctx.lr = 0x82BC10EC;
	sub_837B0C10(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82d04220
	ctx.lr = 0x82BC10FC;
	sub_82D04220(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82BC1104;
	sub_82D33C10(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r26,r11,22408
	ctx.r26.s64 = ctx.r11.s64 + 22408;
	// beq cr6,0x82bc11f8
	if (cr6.eq) goto loc_82BC11F8;
	// addi r28,r31,-8
	ctx.r28.s64 = ctx.r31.s64 + -8;
loc_82BC1124:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BC1130;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc11ec
	if (cr6.eq) goto loc_82BC11EC;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// bge cr6,0x82bc11c8
	if (!cr6.lt) goto loc_82BC11C8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// lwz r4,60(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1164;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc1174
	if (cr6.eq) goto loc_82BC1174;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82d29598
	ctx.lr = 0x82BC1174;
	sub_82D29598(ctx, base);
loc_82BC1174:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC118C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc11ac
	if (cr6.eq) goto loc_82BC11AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC11AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BC11AC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwzu r4,12(r28)
	ea = 12 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82BC11C0;
	sub_82D233B0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82BC11C8:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BC11DC;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC11EC;
	sub_82D2AEC8(ctx, base);
loc_82BC11EC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, xer);
	// blt cr6,0x82bc1124
	if (cr6.lt) goto loc_82BC1124;
loc_82BC11F8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC1200;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1218;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bc1238
	if (cr6.lt) goto loc_82BC1238;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BC1238;
	sub_825952B8(ctx, base);
loc_82BC1238:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC1240"))) PPC_WEAK_FUNC(sub_82BC1240);
PPC_FUNC_IMPL(__imp__sub_82BC1240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BC1248;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r31,r10,22432
	ctx.r31.s64 = ctx.r10.s64 + 22432;
	// addi r27,r11,24839
	ctx.r27.s64 = ctx.r11.s64 + 24839;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r27,-2
	ctx.r4.s64 = ctx.r27.s64 + -2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,-32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// bl 0x8259cc28
	ctx.lr = 0x82BC128C;
	sub_8259CC28(ctx, base);
	// lwz r11,396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82bc12c0
	if (cr6.lt) goto loc_82BC12C0;
	// beq cr6,0x82bc12ac
	if (cr6.eq) goto loc_82BC12AC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82bc12e0
	if (!cr6.lt) goto loc_82BC12E0;
	// lwz r30,-28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// b 0x82bc12e0
	goto loc_82BC12E0;
loc_82BC12AC:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,661
	ctx.r4.u64 = ctx.r4.u64 | 661;
	// bl 0x82d04220
	ctx.lr = 0x82BC12BC;
	sub_82D04220(ctx, base);
	// b 0x82bc12d4
	goto loc_82BC12D4;
loc_82BC12C0:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// li r5,10
	ctx.r5.s64 = 10;
	// ori r4,r4,660
	ctx.r4.u64 = ctx.r4.u64 | 660;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82BC12D4;
	sub_82D042A8(ctx, base);
loc_82BC12D4:
	// lis r28,26
	ctx.r28.s64 = 1703936;
	// lwz r30,-32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// ori r28,r28,644
	ctx.r28.u64 = ctx.r28.u64 | 644;
loc_82BC12E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC12E8;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1300;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC1308;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC1320;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc13b4
	if (cr6.eq) goto loc_82BC13B4;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// beq cr6,0x82bc13b4
	if (cr6.eq) goto loc_82BC13B4;
	// addi r4,r27,-1
	ctx.r4.s64 = ctx.r27.s64 + -1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82BC1340;
	sub_837B0C10(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82BC134C;
	sub_837B0C10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d04220
	ctx.lr = 0x82BC1358;
	sub_82D04220(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bc136c
	if (!cr6.lt) goto loc_82BC136C;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82BC136C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bc1380
	if (!cr6.lt) goto loc_82BC1380;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82BC1380:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,634
	ctx.r4.u64 = ctx.r4.u64 | 634;
	// bl 0x82d042a8
	ctx.lr = 0x82BC1390;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BC13A4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82BC13AC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82BC13B4;
	sub_8387E8E0(ctx, base);
loc_82BC13B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC13BC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC13D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc13ec
	if (cr6.eq) goto loc_82BC13EC;
	// lwz r11,396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82BC13EC;
	sub_82D3D968(ctx, base);
loc_82BC13EC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc140c
	if (cr6.lt) goto loc_82BC140C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BC140C;
	sub_825952B8(ctx, base);
loc_82BC140C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC1414"))) PPC_WEAK_FUNC(sub_82BC1414);
PPC_FUNC_IMPL(__imp__sub_82BC1414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC1418"))) PPC_WEAK_FUNC(sub_82BC1418);
PPC_FUNC_IMPL(__imp__sub_82BC1418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC1420;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bc15d8
	if (cr6.eq) goto loc_82BC15D8;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,12
	ctx.r29.s64 = 12;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw. r10,r11,r29
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bc147c
	if (!cr0.eq) goto loc_82BC147C;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bc15d8
	if (cr6.eq) goto loc_82BC15D8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bc0b40
	ctx.lr = 0x82BC1468;
	sub_82BC0B40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BC147C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r5,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r5.s64;
	// divw r11,r9,r29
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82bc14cc
	if (cr6.gt) goto loc_82BC14CC;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bc0b40
	ctx.lr = 0x82BC1498;
	sub_82BC0B40(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r8,r29
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BC14CC:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r5,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r5.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bgt cr6,0x82bc1550
	if (cr6.gt) goto loc_82BC1550;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bc0b40
	ctx.lr = 0x82BC14FC;
	sub_82BC0B40(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x82bc15d4
	if (cr6.eq) goto loc_82BC15D4;
loc_82BC1510:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bc1530
	if (cr6.eq) goto loc_82BC1530;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
loc_82BC1530:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bc1510
	if (!cr6.eq) goto loc_82BC1510;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BC1550:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82bc156c
	if (cr6.eq) goto loc_82BC156C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82BC156C;
	sub_825952B8(ctx, base);
loc_82BC156C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r4,r9,r29
	ctx.r4.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// bl 0x83476828
	ctx.lr = 0x82BC1584;
	sub_83476828(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bc15d8
	if (cr6.eq) goto loc_82BC15D8;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82bc15d4
	if (cr6.eq) goto loc_82BC15D4;
loc_82BC15A4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bc15c4
	if (cr6.eq) goto loc_82BC15C4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
loc_82BC15C4:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bc15a4
	if (!cr6.eq) goto loc_82BC15A4;
loc_82BC15D4:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82BC15D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC15E4"))) PPC_WEAK_FUNC(sub_82BC15E4);
PPC_FUNC_IMPL(__imp__sub_82BC15E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC15E8"))) PPC_WEAK_FUNC(sub_82BC15E8);
PPC_FUNC_IMPL(__imp__sub_82BC15E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BC15F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bc1628
	if (cr6.eq) goto loc_82BC1628;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bc0b40
	ctx.lr = 0x82BC1624;
	sub_82BC0B40(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82BC1628:
	// lwz r29,136(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r27,r28,136
	ctx.r27.s64 = ctx.r28.s64 + 136;
	// lwz r30,140(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bc166c
	if (cr6.eq) goto loc_82BC166C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bc1668
	if (cr6.eq) goto loc_82BC1668;
loc_82BC1648:
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82BC1658;
	sub_831CE980(ctx, base);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82bc1648
	if (!cr6.eq) goto loc_82BC1648;
loc_82BC1668:
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
loc_82BC166C:
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82BC167C;
	sub_831CDCF0(ctx, base);
	// addi r3,r28,152
	ctx.r3.s64 = ctx.r28.s64 + 152;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82BC168C;
	sub_831CDCF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC1694"))) PPC_WEAK_FUNC(sub_82BC1694);
PPC_FUNC_IMPL(__imp__sub_82BC1694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC1698"))) PPC_WEAK_FUNC(sub_82BC1698);
PPC_FUNC_IMPL(__imp__sub_82BC1698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82BC16A0;
	__savegprlr_17(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC16AC;
	sub_82D19A78(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d33db0
	ctx.lr = 0x82BC16B4;
	sub_82D33DB0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc1a20
	if (cr6.eq) goto loc_82BC1A20;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC16C8;
	sub_82D19A78(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d33db0
	ctx.lr = 0x82BC16D0;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc16fc
	if (cr6.eq) goto loc_82BC16FC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82BC16EC;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC16FC;
	sub_82D2AEC8(ctx, base);
loc_82BC16FC:
	// bl 0x831156e8
	ctx.lr = 0x82BC1700;
	sub_831156E8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r23,r11,24817
	ctx.r23.s64 = ctx.r11.s64 + 24817;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r23,-31
	ctx.r4.s64 = ctx.r23.s64 + -31;
	// lwz r19,52(r10)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x837b0c10
	ctx.lr = 0x82BC171C;
	sub_837B0C10(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82d04220
	ctx.lr = 0x82BC172C;
	sub_82D04220(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82BC1734;
	sub_82D33C10(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// li r17,2
	ctx.r17.s64 = 2;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r28,r11,22412
	ctx.r28.s64 = ctx.r11.s64 + 22412;
	// beq cr6,0x82bc19e4
	if (cr6.eq) goto loc_82BC19E4;
	// li r22,15
	ctx.r22.s64 = 15;
loc_82BC175C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BC1768;
	sub_82D33DB0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc19d8
	if (cr6.eq) goto loc_82BC19D8;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(ctx.r26.u32, 2, xer);
	// bge cr6,0x82bc196c
	if (!cr6.lt) goto loc_82BC196C;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r4,r23,-30
	ctx.r4.s64 = ctx.r23.s64 + -30;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82BC179C;
	sub_8259CC28(ctx, base);
	// lwz r4,92(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC17A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc17a4
	if (!cr6.eq) goto loc_82BC17A4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC17C8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r5,76(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// bl 0x82ab6970
	ctx.lr = 0x82BC17D8;
	sub_82AB6970(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc17ec
	if (cr6.lt) goto loc_82BC17EC;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc17f0
	goto loc_82BC17F0;
loc_82BC17EC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BC17F0:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r30,r25,100
	ctx.r30.s64 = ctx.r25.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bc1828
	if (cr6.lt) goto loc_82BC1828;
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82BC1828;
	sub_825952B8(ctx, base);
loc_82BC1828:
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// beq cr6,0x82bc1878
	if (cr6.eq) goto loc_82BC1878;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82BC1848;
	sub_837B0C10(ctx, base);
	// lis r4,69
	ctx.r4.s64 = 4521984;
	// addi r5,r26,1
	ctx.r5.s64 = ctx.r26.s64 + 1;
	// ori r4,r4,65
	ctx.r4.u64 = ctx.r4.u64 | 65;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d042a8
	ctx.lr = 0x82BC185C;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BC1870;
	sub_82D291E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82BC1878;
	sub_8387E8E0(ctx, base);
loc_82BC1878:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,72(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ab6970
	ctx.lr = 0x82BC1888;
	sub_82AB6970(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc189c
	if (cr6.lt) goto loc_82BC189C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc18a0
	goto loc_82BC18A0;
loc_82BC189C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BC18A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC18B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bc18d4
	if (cr6.lt) goto loc_82BC18D4;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82BC18D4;
	sub_825952B8(ctx, base);
loc_82BC18D4:
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r27.u32);
	// stb r27,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r27.u8);
	// beq cr6,0x82bc1938
	if (cr6.eq) goto loc_82BC1938;
	// addi r30,r19,4
	ctx.r30.s64 = ctx.r19.s64 + 4;
	// li r31,32
	ctx.r31.s64 = 32;
loc_82BC18F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82BC18FC;
	sub_82D3B548(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,2800
	ctx.r30.s64 = ctx.r30.s64 + 2800;
	// bne 0x82bc18f0
	if (!cr0.eq) goto loc_82BC18F0;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bc191c
	if (!cr6.lt) goto loc_82BC191C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82BC191C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82BC1924;
	sub_82D3B548(ctx, base);
	// addi r11,r26,31
	ctx.r11.s64 = ctx.r26.s64 + 31;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// bl 0x82d3b298
	ctx.lr = 0x82BC1938;
	sub_82D3B298(ctx, base);
loc_82BC1938:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc195c
	if (cr6.lt) goto loc_82BC195C;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BC195C;
	sub_825952B8(ctx, base);
loc_82BC195C:
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// b 0x82bc19b4
	goto loc_82BC19B4;
loc_82BC196C:
	// bne cr6,0x82bc19b4
	if (!cr6.eq) goto loc_82BC19B4;
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r3,r25,100
	ctx.r3.s64 = ctx.r25.s64 + 100;
	// lwz r4,60(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1988;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc199c
	if (cr6.eq) goto loc_82BC199C;
	// lis r4,49
	ctx.r4.s64 = 3211264;
	// ori r4,r4,47
	ctx.r4.u64 = ctx.r4.u64 | 47;
	// bl 0x82d29598
	ctx.lr = 0x82BC199C;
	sub_82D29598(ctx, base);
loc_82BC199C:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82BC19B0;
	sub_82D233B0(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
loc_82BC19B4:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BC19C8;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC19D8;
	sub_82D2AEC8(ctx, base);
loc_82BC19D8:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r20
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r20.u32, xer);
	// blt cr6,0x82bc175c
	if (cr6.lt) goto loc_82BC175C;
loc_82BC19E4:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC19EC;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1A04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bc1a20
	if (cr6.lt) goto loc_82BC1A20;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BC1A20;
	sub_825952B8(ctx, base);
loc_82BC1A20:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC1A28"))) PPC_WEAK_FUNC(sub_82BC1A28);
PPC_FUNC_IMPL(__imp__sub_82BC1A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82BC1A30;
	__savegprlr_14(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r3.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BC1A40;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82BC1A48;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc1ff8
	if (cr6.eq) goto loc_82BC1FF8;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r6,128(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r4,r30,132
	ctx.r4.s64 = ctx.r30.s64 + 132;
	// lwz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83130fe8
	ctx.lr = 0x82BC1A6C;
	sub_83130FE8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r24,r11,22464
	ctx.r24.s64 = ctx.r11.s64 + 22464;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bne cr6,0x82bc1aa0
	if (!cr6.eq) goto loc_82BC1AA0;
	// lwz r4,-44(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + -44);
	// b 0x82bc1aa4
	goto loc_82BC1AA4;
loc_82BC1AA0:
	// lwz r4,-48(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + -48);
loc_82BC1AA4:
	// bctrl 
	ctx.lr = 0x82BC1AA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82BC1AAC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82dad028
	ctx.lr = 0x82BC1AC4;
	sub_82DAD028(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
	// li r17,2
	ctx.r17.s64 = 2;
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc1fe0
	if (cr6.eq) goto loc_82BC1FE0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// li r14,12
	ctx.r14.s64 = 12;
	// li r26,15
	ctx.r26.s64 = 15;
	// addi r21,r11,24819
	ctx.r21.s64 = ctx.r11.s64 + 24819;
loc_82BC1AFC:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82BC1B08;
	sub_82D2D580(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc1fd4
	if (cr6.eq) goto loc_82BC1FD4;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r23,-48(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + -48);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r14
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r14.s32);
	// cmplw cr6,r16,r7
	cr6.compare<uint32_t>(ctx.r16.u32, ctx.r7.u32, xer);
	// bge cr6,0x82bc1e50
	if (!cr6.lt) goto loc_82BC1E50;
	// addi r27,r24,44
	ctx.r27.s64 = ctx.r24.s64 + 44;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r25,r3,100
	ctx.r25.s64 = ctx.r3.s64 + 100;
	// b 0x82bc1b44
	goto loc_82BC1B44;
loc_82BC1B40:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82BC1B44:
	// add r10,r22,r28
	ctx.r10.u64 = ctx.r22.u64 + ctx.r28.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// bl 0x8311c148
	ctx.lr = 0x82BC1B5C;
	sub_8311C148(ctx, base);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82BC1B7C;
	sub_8259CC28(ctx, base);
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC1B84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc1b84
	if (!cr6.eq) goto loc_82BC1B84;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC1BA8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x82BC1BB8;
	sub_82AB6970(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc1bcc
	if (cr6.lt) goto loc_82BC1BCC;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc1bd0
	goto loc_82BC1BD0;
loc_82BC1BCC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BC1BD0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1BE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bc1c04
	if (cr6.lt) goto loc_82BC1C04;
	// stw r17,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r17.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x825952b8
	ctx.lr = 0x82BC1C04;
	sub_825952B8(ctx, base);
loc_82BC1C04:
	// stw r26,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r26.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r29,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r29.u32);
	// stb r29,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r29.u8);
	// beq cr6,0x82bc1c44
	if (cr6.eq) goto loc_82BC1C44;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82bc1c30
	if (cr6.eq) goto loc_82BC1C30;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82BC1C30:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82BC1C44;
	sub_82D329F8(ctx, base);
loc_82BC1C44:
	// lwz r4,-4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC1C4C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc1c4c
	if (!cr6.eq) goto loc_82BC1C4C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC1C70;
	sub_8259CC28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x82BC1C80;
	sub_82AB6970(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc1c94
	if (cr6.lt) goto loc_82BC1C94;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc1c98
	goto loc_82BC1C98;
loc_82BC1C94:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BC1C98:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1CAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bc1ccc
	if (cr6.lt) goto loc_82BC1CCC;
	// stw r17,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82BC1CCC;
	sub_825952B8(ctx, base);
loc_82BC1CCC:
	// stw r26,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r26.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// stb r29,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r29.u8);
	// beq cr6,0x82bc1d54
	if (cr6.eq) goto loc_82BC1D54;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r29,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r29.u8);
loc_82BC1CF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc1cf4
	if (!cr6.eq) goto loc_82BC1CF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC1D18;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BC1D2C;
	sub_82D291E0(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc1d48
	if (cr6.lt) goto loc_82BC1D48;
	// stw r17,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r17.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82BC1D48;
	sub_825952B8(ctx, base);
loc_82BC1D48:
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stb r29,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r29.u8);
loc_82BC1D54:
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC1D5C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc1d5c
	if (!cr6.eq) goto loc_82BC1D5C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC1D80;
	sub_8259CC28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x82BC1D90;
	sub_82AB6970(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc1da4
	if (cr6.lt) goto loc_82BC1DA4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc1da8
	goto loc_82BC1DA8;
loc_82BC1DA4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BC1DA8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1DBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bc1ddc
	if (cr6.lt) goto loc_82BC1DDC;
	// stw r17,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82BC1DDC;
	sub_825952B8(ctx, base);
loc_82BC1DDC:
	// stw r26,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// stb r29,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r29.u8);
	// beq cr6,0x82bc1e08
	if (cr6.eq) goto loc_82BC1E08;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r18,r11
	ctx.r11.u64 = ctx.r18.u64 + ctx.r11.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// bl 0x82d294d0
	ctx.lr = 0x82BC1E08;
	sub_82D294D0(ctx, base);
loc_82BC1E08:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc1e24
	if (cr6.lt) goto loc_82BC1E24;
	// stw r17,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r17.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x82BC1E24;
	sub_825952B8(ctx, base);
loc_82BC1E24:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// blt cr6,0x82bc1b40
	if (cr6.lt) goto loc_82BC1B40;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r22,r22,3
	ctx.r22.s64 = ctx.r22.s64 + 3;
	// addi r18,r18,12
	ctx.r18.s64 = ctx.r18.s64 + 12;
	// b 0x82bc1fb0
	goto loc_82BC1FB0;
loc_82BC1E50:
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r29.u8);
loc_82BC1E64:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc1e64
	if (!cr6.eq) goto loc_82BC1E64;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC1E88;
	sub_8259CC28(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r5,44(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// bl 0x82ab6970
	ctx.lr = 0x82BC1E98;
	sub_82AB6970(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc1eac
	if (cr6.lt) goto loc_82BC1EAC;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc1eb0
	goto loc_82BC1EB0;
loc_82BC1EAC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BC1EB0:
	// lwz r11,100(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 100);
	// addi r30,r19,100
	ctx.r30.s64 = ctx.r19.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1EC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,340(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bc1ee8
	if (cr6.lt) goto loc_82BC1EE8;
	// stw r17,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r17.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x82BC1EE8;
	sub_825952B8(ctx, base);
loc_82BC1EE8:
	// stw r26,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r29,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r29.u32);
	// stb r29,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r29.u8);
	// beq cr6,0x82bc1f08
	if (cr6.eq) goto loc_82BC1F08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,596(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// bl 0x82a68740
	ctx.lr = 0x82BC1F08;
	sub_82A68740(ctx, base);
loc_82BC1F08:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r5,48(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82ab6970
	ctx.lr = 0x82BC1F18;
	sub_82AB6970(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc1f2c
	if (cr6.lt) goto loc_82BC1F2C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc1f30
	goto loc_82BC1F30;
loc_82BC1F2C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BC1F30:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1F44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,404(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bc1f64
	if (cr6.lt) goto loc_82BC1F64;
	// stw r17,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r17.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x825952b8
	ctx.lr = 0x82BC1F64;
	sub_825952B8(ctx, base);
loc_82BC1F64:
	// stw r26,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r26.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r29,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r29.u32);
	// stb r29,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r29.u8);
	// beq cr6,0x82bc1f84
	if (cr6.eq) goto loc_82BC1F84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,596(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// bl 0x82a68740
	ctx.lr = 0x82BC1F84;
	sub_82A68740(ctx, base);
loc_82BC1F84:
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r23,-44(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + -44);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc1fa4
	if (cr6.lt) goto loc_82BC1FA4;
	// stw r17,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r17.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82BC1FA4;
	sub_825952B8(ctx, base);
loc_82BC1FA4:
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r29.u8);
loc_82BC1FB0:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1FCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82BC1FD4:
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// cmplw cr6,r15,r30
	cr6.compare<uint32_t>(ctx.r15.u32, ctx.r30.u32, xer);
	// blt cr6,0x82bc1afc
	if (cr6.lt) goto loc_82BC1AFC;
loc_82BC1FE0:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bc1ff8
	if (cr6.eq) goto loc_82BC1FF8;
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82BC1FF8;
	sub_825952B8(ctx, base);
loc_82BC1FF8:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC2000"))) PPC_WEAK_FUNC(sub_82BC2000);
PPC_FUNC_IMPL(__imp__sub_82BC2000) {
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
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82BC2038;
	sub_831CDCF0(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// li r5,112
	ctx.r5.s64 = 112;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82BC2054;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc15e8
	ctx.lr = 0x82BC205C;
	sub_82BC15E8(ctx, base);
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

__attribute__((alias("__imp__sub_82BC2078"))) PPC_WEAK_FUNC(sub_82BC2078);
PPC_FUNC_IMPL(__imp__sub_82BC2078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BC2080;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82cd21e0
	ctx.lr = 0x82BC2090;
	sub_82CD21E0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,27264
	ctx.r9.s64 = ctx.r11.s64 + 27264;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x82bc2000
	ctx.lr = 0x82BC20B0;
	sub_82BC2000(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r29,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r29.u8);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// bl 0x82f00728
	ctx.lr = 0x82BC20C0;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc20f0
	if (cr6.eq) goto loc_82BC20F0;
	// bl 0x82f00728
	ctx.lr = 0x82BC20CC;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22996
	ctx.r10.u64 = ctx.r11.u64 | 22996;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// bl 0x82f00728
	ctx.lr = 0x82BC20E0;
	sub_82F00728(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r8,23000
	ctx.r7.u64 = ctx.r8.u64 | 23000;
	// lwzx r6,r3,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
loc_82BC20F0:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82bc2100
	if (!cr6.eq) goto loc_82BC2100;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
loc_82BC2100:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82bc2128
	if (!cr6.eq) goto loc_82BC2128;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
loc_82BC2128:
	// clrlwi r27,r29,24
	ctx.r27.u64 = ctx.r29.u32 & 0xFF;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// addi r28,r11,22376
	ctx.r28.s64 = ctx.r11.s64 + 22376;
	// beq cr6,0x82bc216c
	if (cr6.eq) goto loc_82BC216C;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
loc_82BC2144:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82d20ae0
	ctx.lr = 0x82BC2150;
	sub_82D20AE0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x82bc2144
	if (!cr0.eq) goto loc_82BC2144;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82bc216c
	if (cr6.eq) goto loc_82BC216C;
	// bl 0x82d26ed8
	ctx.lr = 0x82BC2164;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x82BC216C;
	sub_82D26900(ctx, base);
loc_82BC216C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82d20ae0
	ctx.lr = 0x82BC2178;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x82d23390
	ctx.lr = 0x82BC2188;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC2194"))) PPC_WEAK_FUNC(sub_82BC2194);
PPC_FUNC_IMPL(__imp__sub_82BC2194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2198"))) PPC_WEAK_FUNC(sub_82BC2198);
PPC_FUNC_IMPL(__imp__sub_82BC2198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc21a8
	if (cr6.eq) goto loc_82BC21A8;
	// b 0x82bc1070
	sub_82BC1070(ctx, base);
	return;
loc_82BC21A8:
	// b 0x82bc1698
	sub_82BC1698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC21AC"))) PPC_WEAK_FUNC(sub_82BC21AC);
PPC_FUNC_IMPL(__imp__sub_82BC21AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC21B0"))) PPC_WEAK_FUNC(sub_82BC21B0);
PPC_FUNC_IMPL(__imp__sub_82BC21B0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82bc1418
	ctx.lr = 0x82BC21E8;
	sub_82BC1418(ctx, base);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r5,112
	ctx.r5.s64 = 112;
	// bl 0x831ce980
	ctx.lr = 0x82BC21F8;
	sub_831CE980(ctx, base);
	// addi r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 + 136;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82bc0e18
	ctx.lr = 0x82BC2204;
	sub_82BC0E18(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// li r5,112
	ctx.r5.s64 = 112;
	// bl 0x831ce980
	ctx.lr = 0x82BC2214;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_82BC2230"))) PPC_WEAK_FUNC(sub_82BC2230);
PPC_FUNC_IMPL(__imp__sub_82BC2230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82BC2238;
	__savegprlr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BC2244;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// lwz r5,128(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// addi r31,r27,124
	ctx.r31.s64 = ctx.r27.s64 + 124;
	// lwz r4,124(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// lwz r23,52(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x8312e9a8
	ctx.lr = 0x82BC2260;
	sub_8312E9A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,132
	ctx.r3.s64 = ctx.r27.s64 + 132;
	// bl 0x82bc21b0
	ctx.lr = 0x82BC226C;
	sub_82BC21B0(ctx, base);
	// lwz r10,396(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 396);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r22,2
	ctx.r22.s64 = 2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc22a4
	if (!cr6.eq) goto loc_82BC22A4;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// beq cr6,0x82bc229c
	if (cr6.eq) goto loc_82BC229C;
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82bc22c0
	if (!cr6.eq) goto loc_82BC22C0;
loc_82BC229C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82bc22c0
	goto loc_82BC22C0;
loc_82BC22A4:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// beq cr6,0x82bc22bc
	if (cr6.eq) goto loc_82BC22BC;
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x82bc22c0
	if (!cr6.eq) goto loc_82BC22C0;
loc_82BC22BC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82BC22C0:
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// addi r24,r11,22508
	ctx.r24.s64 = ctx.r11.s64 + 22508;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// li r29,15
	ctx.r29.s64 = 15;
loc_82BC22DC:
	// lwz r4,-64(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + -64);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
loc_82BC22F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc22f0
	if (!cr6.eq) goto loc_82BC22F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC2314;
	sub_8259CC28(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC231C;
	sub_82D19A78(ctx, base);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ab6970
	ctx.lr = 0x82BC2330;
	sub_82AB6970(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc2344
	if (cr6.lt) goto loc_82BC2344;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc2348
	goto loc_82BC2348;
loc_82BC2344:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BC2348:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC235C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bc237c
	if (cr6.lt) goto loc_82BC237C;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82BC237C;
	sub_825952B8(ctx, base);
loc_82BC237C:
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// beq cr6,0x82bc242c
	if (cr6.eq) goto loc_82BC242C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// beq cr6,0x82bc241c
	if (cr6.eq) goto loc_82BC241C;
	// mulli r11,r11,2800
	ctx.r11.s64 = ctx.r11.s64 * 2800;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC23B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc23b8
	if (!cr6.eq) goto loc_82BC23B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC23DC;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BC23F0;
	sub_82D291E0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc240c
	if (cr6.lt) goto loc_82BC240C;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BC240C;
	sub_825952B8(ctx, base);
loc_82BC240C:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// b 0x82bc242c
	goto loc_82BC242C;
loc_82BC241C:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82d29598
	ctx.lr = 0x82BC242C;
	sub_82D29598(ctx, base);
loc_82BC242C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc2448
	if (cr6.lt) goto loc_82BC2448;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BC2448;
	sub_825952B8(ctx, base);
loc_82BC2448:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x82bc22dc
	if (!cr0.eq) goto loc_82BC22DC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC246C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BC2474;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82cd4040
	ctx.lr = 0x82BC2484;
	sub_82CD4040(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc1a28
	ctx.lr = 0x82BC248C;
	sub_82BC1A28(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC2494"))) PPC_WEAK_FUNC(sub_82BC2494);
PPC_FUNC_IMPL(__imp__sub_82BC2494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2498"))) PPC_WEAK_FUNC(sub_82BC2498);
PPC_FUNC_IMPL(__imp__sub_82BC2498) {
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
	// blt cr6,0x82bc24c0
	if (cr6.lt) goto loc_82BC24C0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc24c4
	goto loc_82BC24C4;
loc_82BC24C0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BC24C4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,404
	ctx.r4.s64 = 404;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BC24E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc2500
	if (cr6.eq) goto loc_82BC2500;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bc2078
	ctx.lr = 0x82BC24F8;
	sub_82BC2078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bc2504
	if (!cr6.eq) goto loc_82BC2504;
loc_82BC2500:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC2504:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC251C"))) PPC_WEAK_FUNC(sub_82BC251C);
PPC_FUNC_IMPL(__imp__sub_82BC251C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2520"))) PPC_WEAK_FUNC(sub_82BC2520);
PPC_FUNC_IMPL(__imp__sub_82BC2520) {
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
	// blt cr6,0x82bc2548
	if (cr6.lt) goto loc_82BC2548;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc254c
	goto loc_82BC254C;
loc_82BC2548:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BC254C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,404
	ctx.r4.s64 = 404;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BC2568;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc2588
	if (cr6.eq) goto loc_82BC2588;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bc2078
	ctx.lr = 0x82BC2580;
	sub_82BC2078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bc258c
	if (!cr6.eq) goto loc_82BC258C;
loc_82BC2588:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC258C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC25A4"))) PPC_WEAK_FUNC(sub_82BC25A4);
PPC_FUNC_IMPL(__imp__sub_82BC25A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC25A8"))) PPC_WEAK_FUNC(sub_82BC25A8);
PPC_FUNC_IMPL(__imp__sub_82BC25A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BC25B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 400);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,6
	ctx.r4.s64 = 6;
	// beq cr6,0x82bc25e8
	if (cr6.eq) goto loc_82BC25E8;
	// bl 0x82d19788
	ctx.lr = 0x82BC25D0;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC25E0;
	sub_82D19788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82bc2600
	goto loc_82BC2600;
loc_82BC25E8:
	// bl 0x82d19788
	ctx.lr = 0x82BC25EC;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC25FC;
	sub_82D19788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BC2600:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC260C;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc2230
	ctx.lr = 0x82BC2614;
	sub_82BC2230(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc1240
	ctx.lr = 0x82BC261C;
	sub_82BC1240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC2624;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27160
	ctx.r4.s64 = ctx.r11.s64 + 27160;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC2640;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc2654
	if (cr6.eq) goto loc_82BC2654;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,653
	ctx.r4.u64 = ctx.r4.u64 | 653;
	// bl 0x82d29598
	ctx.lr = 0x82BC2654;
	sub_82D29598(ctx, base);
loc_82BC2654:
	// bl 0x831156e8
	ctx.lr = 0x82BC2658;
	sub_831156E8(ctx, base);
	// lbz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 400);
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc2874
	if (cr6.eq) goto loc_82BC2874;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,35066
	ctx.r10.u64 = ctx.r11.u64 | 35066;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bc2874
	if (cr6.eq) goto loc_82BC2874;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x8312e948
	ctx.lr = 0x82BC2688;
	sub_8312E948(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bc2874
	if (!cr6.eq) goto loc_82BC2874;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// beq cr6,0x82bc26b0
	if (cr6.eq) goto loc_82BC26B0;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82bc26b4
	if (!cr6.eq) goto loc_82BC26B4;
loc_82BC26B0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BC26B4:
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83105358
	ctx.lr = 0x82BC26BC;
	sub_83105358(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc2874
	if (cr6.eq) goto loc_82BC2874;
	// addis r28,r30,6
	ctx.r28.s64 = ctx.r30.s64 + 393216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r28,-30316
	ctx.r28.s64 = ctx.r28.s64 + -30316;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82BC26D4:
	// bl 0x83105d48
	ctx.lr = 0x82BC26D8;
	sub_83105D48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC26F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82bc2710
	if (!cr6.eq) goto loc_82BC2710;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837cfda8
	ctx.lr = 0x82BC270C;
	sub_837CFDA8(ctx, base);
	// b 0x82bc2868
	goto loc_82BC2868;
loc_82BC2710:
	// bl 0x83105d48
	ctx.lr = 0x82BC2714;
	sub_83105D48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2728;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BC2730:
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bc274c
	if (cr6.eq) goto loc_82BC274C;
	// lbz r11,117(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 117);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82bc2760
	if (cr6.eq) goto loc_82BC2760;
loc_82BC274C:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82bc2730
	if (cr6.lt) goto loc_82BC2730;
	// b 0x82bc2764
	goto loc_82BC2764;
loc_82BC2760:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82BC2764:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc27a8
	if (!cr6.eq) goto loc_82BC27A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc2868
	if (cr6.eq) goto loc_82BC2868;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwsync 
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_82BC2788:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82bc2788
	if (!cr0.eq) goto loc_82BC2788;
	// b 0x82bc284c
	goto loc_82BC284C;
loc_82BC27A8:
	// bl 0x83105358
	ctx.lr = 0x82BC27AC;
	sub_83105358(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC27CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r27,24
	ctx.r8.u64 = ctx.r27.u32 & 0xFF;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r31,r11,10
	ctx.r31.s64 = ctx.r11.s64 + 10;
	// rlwinm r5,r31,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r4,r31,27
	ctx.r4.u64 = ctx.r31.u32 & 0x1F;
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// srw r11,r3,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc2818
	if (!cr6.eq) goto loc_82BC2818;
	// bl 0x83105358
	ctx.lr = 0x82BC2800;
	sub_83105358(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2818;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BC2818:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc2868
	if (cr6.eq) goto loc_82BC2868;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwsync 
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_82BC2830:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82bc2830
	if (!cr0.eq) goto loc_82BC2830;
loc_82BC284C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc2868
	if (!cr6.eq) goto loc_82BC2868;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2868;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BC2868:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// blt cr6,0x82bc26d4
	if (cr6.lt) goto loc_82BC26D4;
loc_82BC2874:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC2880"))) PPC_WEAK_FUNC(sub_82BC2880);
PPC_FUNC_IMPL(__imp__sub_82BC2880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BC2888;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,31
	ctx.r11.s64 = ctx.r5.s64 + 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwzx r11,r27,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bne cr6,0x82bc28e8
	if (!cr6.eq) goto loc_82BC28E8;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82bc28e8
	if (!cr6.eq) goto loc_82BC28E8;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// stwx r26,r27,r3
	PPC_STORE_U32(ctx.r27.u32 + ctx.r3.u32, ctx.r26.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82bc29b0
	if (!cr6.eq) goto loc_82BC29B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bc0a20
	ctx.lr = 0x82BC28E4;
	sub_82BC0A20(ctx, base);
	// b 0x82bc29b0
	goto loc_82BC29B0;
loc_82BC28E8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc291c
	if (!cr6.eq) goto loc_82BC291C;
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// bne cr6,0x82bc291c
	if (!cr6.eq) goto loc_82BC291C;
	// li r11,32
	ctx.r11.s64 = 32;
	// cntlzw r10,r30
	ctx.r10.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// stwx r11,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r7,32
	cr6.compare<uint32_t>(ctx.r7.u32, 32, xer);
	// b 0x82bc299c
	goto loc_82BC299C;
loc_82BC291C:
	// cntlzw r10,r30
	ctx.r10.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// ble cr6,0x82bc2970
	if (!cr6.gt) goto loc_82BC2970;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bne cr6,0x82bc293c
	if (!cr6.eq) goto loc_82BC293C;
	// stwx r26,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r26.u32);
	// b 0x82bc2944
	goto loc_82BC2944;
loc_82BC293C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r11.u32);
loc_82BC2944:
	// addi r11,r10,31
	ctx.r11.s64 = ctx.r10.s64 + 31;
	// lwzx r10,r27,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82bc29b0
	if (!cr6.eq) goto loc_82BC29B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc0a20
	ctx.lr = 0x82BC296C;
	sub_82BC0A20(ctx, base);
	// b 0x82bc29b0
	goto loc_82BC29B0;
loc_82BC2970:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc2980
	if (!cr6.eq) goto loc_82BC2980;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x82bc2984
	goto loc_82BC2984;
loc_82BC2980:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82BC2984:
	// stwx r11,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r11,r10,31
	ctx.r11.s64 = ctx.r10.s64 + 31;
	// lwzx r10,r27,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
loc_82BC299C:
	// bne cr6,0x82bc29b0
	if (!cr6.eq) goto loc_82BC29B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc0a80
	ctx.lr = 0x82BC29B0;
	sub_82BC0A80(ctx, base);
loc_82BC29B0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82BC29C0;
	sub_82D19AA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc2abc
	if (cr6.eq) goto loc_82BC2ABC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,24755
	ctx.r4.s64 = ctx.r11.s64 + 24755;
	// bl 0x837b0c10
	ctx.lr = 0x82BC29DC;
	sub_837B0C10(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,22484
	ctx.r30.s64 = ctx.r11.s64 + 22484;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC29EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc29ec
	if (!cr6.eq) goto loc_82BC29EC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC2A10;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x82BC2A20;
	sub_82AB6970(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc2a34
	if (cr6.lt) goto loc_82BC2A34;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc2a38
	goto loc_82BC2A38;
loc_82BC2A34:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BC2A38:
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC2A4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r28,2
	ctx.r28.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82bc2a70
	if (cr6.lt) goto loc_82BC2A70;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BC2A70;
	sub_825952B8(ctx, base);
loc_82BC2A70:
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r26.u8);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// beq cr6,0x82bc2a94
	if (cr6.eq) goto loc_82BC2A94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r27,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x82d3b298
	ctx.lr = 0x82BC2A94;
	sub_82D3B298(ctx, base);
loc_82BC2A94:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc2ab0
	if (cr6.lt) goto loc_82BC2AB0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BC2AB0;
	sub_825952B8(ctx, base);
loc_82BC2AB0:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
loc_82BC2ABC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc2230
	ctx.lr = 0x82BC2AC4;
	sub_82BC2230(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC2ACC"))) PPC_WEAK_FUNC(sub_82BC2ACC);
PPC_FUNC_IMPL(__imp__sub_82BC2ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2AD0"))) PPC_WEAK_FUNC(sub_82BC2AD0);
PPC_FUNC_IMPL(__imp__sub_82BC2AD0) {
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
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc2af8
	if (!cr6.eq) goto loc_82BC2AF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82bc2afc
	goto loc_82BC2AFC;
loc_82BC2AF8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82BC2AFC:
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc2230
	ctx.lr = 0x82BC2B08;
	sub_82BC2230(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc1240
	ctx.lr = 0x82BC2B10;
	sub_82BC1240(ctx, base);
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

__attribute__((alias("__imp__sub_82BC2B24"))) PPC_WEAK_FUNC(sub_82BC2B24);
PPC_FUNC_IMPL(__imp__sub_82BC2B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2B28"))) PPC_WEAK_FUNC(sub_82BC2B28);
PPC_FUNC_IMPL(__imp__sub_82BC2B28) {
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
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r11.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82bc2b58
	if (!cr6.eq) goto loc_82BC2B58;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r11.u32);
loc_82BC2B58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc2230
	ctx.lr = 0x82BC2B60;
	sub_82BC2230(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc1240
	ctx.lr = 0x82BC2B68;
	sub_82BC1240(ctx, base);
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

__attribute__((alias("__imp__sub_82BC2B7C"))) PPC_WEAK_FUNC(sub_82BC2B7C);
PPC_FUNC_IMPL(__imp__sub_82BC2B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2B80"))) PPC_WEAK_FUNC(sub_82BC2B80);
PPC_FUNC_IMPL(__imp__sub_82BC2B80) {
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
	// bl 0x82c50138
	ctx.lr = 0x82BC2B9C;
	sub_82C50138(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,27920
	ctx.r9.s64 = ctx.r11.s64 + 27920;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x82f00728
	ctx.lr = 0x82BC2BB8;
	sub_82F00728(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc2bd8
	if (cr6.eq) goto loc_82BC2BD8;
	// bl 0x82f00728
	ctx.lr = 0x82BC2BC8;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22996
	ctx.r10.u64 = ctx.r11.u64 | 22996;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// b 0x82bc2bdc
	goto loc_82BC2BDC;
loc_82BC2BD8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BC2BDC:
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// bl 0x82f00728
	ctx.lr = 0x82BC2BE4;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc2c00
	if (cr6.eq) goto loc_82BC2C00;
	// bl 0x82f00728
	ctx.lr = 0x82BC2BF0;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23000
	ctx.r10.u64 = ctx.r11.u64 | 23000;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// b 0x82bc2c04
	goto loc_82BC2C04;
loc_82BC2C00:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BC2C04:
	// lwz r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x82bc2c20
	if (cr6.eq) goto loc_82BC2C20;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82bc2c28
	if (!cr6.eq) goto loc_82BC2C28;
loc_82BC2C20:
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
loc_82BC2C28:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// beq cr6,0x82bc2c40
	if (cr6.eq) goto loc_82BC2C40;
	// lwz r9,356(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bne cr6,0x82bc2c64
	if (!cr6.eq) goto loc_82BC2C64;
loc_82BC2C40:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// stb r9,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82bc2c68
	if (!cr6.eq) goto loc_82BC2C68;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// b 0x82bc2c68
	goto loc_82BC2C68;
loc_82BC2C64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC2C68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC2C80"))) PPC_WEAK_FUNC(sub_82BC2C80);
PPC_FUNC_IMPL(__imp__sub_82BC2C80) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,49
	ctx.r4.s64 = 3211264;
	// ori r4,r4,47
	ctx.r4.u64 = ctx.r4.u64 | 47;
	// bl 0x82d04220
	ctx.lr = 0x82BC2C9C;
	sub_82D04220(ctx, base);
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

__attribute__((alias("__imp__sub_82BC2CB0"))) PPC_WEAK_FUNC(sub_82BC2CB0);
PPC_FUNC_IMPL(__imp__sub_82BC2CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC2CB8;
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
	// li r4,364
	ctx.r4.s64 = 364;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BC2CE0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc2d00
	if (cr6.eq) goto loc_82BC2D00;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bc2b80
	ctx.lr = 0x82BC2CF8;
	sub_82BC2B80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BC2D00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC2D0C"))) PPC_WEAK_FUNC(sub_82BC2D0C);
PPC_FUNC_IMPL(__imp__sub_82BC2D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2D10"))) PPC_WEAK_FUNC(sub_82BC2D10);
PPC_FUNC_IMPL(__imp__sub_82BC2D10) {
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
	// addi r9,r11,27920
	ctx.r9.s64 = ctx.r11.s64 + 27920;
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
	// bl 0x82c502e8
	ctx.lr = 0x82BC2D48;
	sub_82C502E8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bc2d60
	if (cr6.eq) goto loc_82BC2D60;
	// bl 0x82416268
	ctx.lr = 0x82BC2D5C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC2D60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC2D78"))) PPC_WEAK_FUNC(sub_82BC2D78);
PPC_FUNC_IMPL(__imp__sub_82BC2D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,36
	ctx.r10.s64 = 36;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,1820
	ctx.r8.s64 = 119275520;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// ori r6,r8,29127
	ctx.r6.u64 = ctx.r8.u64 | 29127;
	// divw r11,r7,r10
	ctx.r11.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bge cr6,0x82bc2dac
	if (!cr6.lt) goto loc_82BC2DAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bc2db0
	goto loc_82BC2DB0;
loc_82BC2DAC:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82BC2DB0:
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

__attribute__((alias("__imp__sub_82BC2DC4"))) PPC_WEAK_FUNC(sub_82BC2DC4);
PPC_FUNC_IMPL(__imp__sub_82BC2DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2DC8"))) PPC_WEAK_FUNC(sub_82BC2DC8);
PPC_FUNC_IMPL(__imp__sub_82BC2DC8) {
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
	// blt cr6,0x82bc2df0
	if (cr6.lt) goto loc_82BC2DF0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc2df4
	goto loc_82BC2DF4;
loc_82BC2DF0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BC2DF4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,364
	ctx.r4.s64 = 364;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BC2E10;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc2e30
	if (cr6.eq) goto loc_82BC2E30;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bc2b80
	ctx.lr = 0x82BC2E28;
	sub_82BC2B80(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bc2e34
	if (!cr6.eq) goto loc_82BC2E34;
loc_82BC2E30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC2E34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC2E4C"))) PPC_WEAK_FUNC(sub_82BC2E4C);
PPC_FUNC_IMPL(__imp__sub_82BC2E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2E50"))) PPC_WEAK_FUNC(sub_82BC2E50);
PPC_FUNC_IMPL(__imp__sub_82BC2E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82bc2e90
	if (cr6.eq) goto loc_82BC2E90;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_82BC2E60:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bc2e84
	if (cr6.eq) goto loc_82BC2E84;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82BC2E78:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82bc2e78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BC2E78;
loc_82BC2E84:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,36
	ctx.r8.s64 = ctx.r8.s64 + 36;
	// bne 0x82bc2e60
	if (!cr0.eq) goto loc_82BC2E60;
loc_82BC2E90:
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC2EA4"))) PPC_WEAK_FUNC(sub_82BC2EA4);
PPC_FUNC_IMPL(__imp__sub_82BC2EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2EA8"))) PPC_WEAK_FUNC(sub_82BC2EA8);
PPC_FUNC_IMPL(__imp__sub_82BC2EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82BC2EB0;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82bc3224
	if (cr6.eq) goto loc_82BC3224;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1820
	ctx.r10.s64 = 119275520;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r23,36
	ctx.r23.s64 = 36;
	// ori r8,r10,29127
	ctx.r8.u64 = ctx.r10.u64 | 29127;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// divw r10,r9,r23
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r7,r26
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, xer);
	// bge cr6,0x82bc2f00
	if (!cr6.lt) goto loc_82BC2F00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82BC2F00;
	sub_831CC150(ctx, base);
loc_82BC2F00:
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add r4,r10,r26
	ctx.r4.u64 = ctx.r10.u64 + ctx.r26.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r23
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r23.s32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bge cr6,0x82bc306c
	if (!cr6.lt) goto loc_82BC306C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bc2d78
	ctx.lr = 0x82BC2F20;
	sub_82BC2D78(ctx, base);
	// li r24,2
	ctx.r24.s64 = 2;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82595718
	ctx.lr = 0x82BC2F48;
	sub_82595718(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r9,r10,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r10.s64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// divw r31,r9,r23
	ctx.r31.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82bc2e50
	ctx.lr = 0x82BC2F78;
	sub_82BC2E50(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// beq cr6,0x82bc2fbc
	if (cr6.eq) goto loc_82BC2FBC;
loc_82BC2F88:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bc2fac
	if (cr6.eq) goto loc_82BC2FAC;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_82BC2FA0:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82bc2fa0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BC2FA0;
loc_82BC2FAC:
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x82bc2f88
	if (!cr6.eq) goto loc_82BC2F88;
loc_82BC2FBC:
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r27,r6
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r6.u32, xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// beq cr6,0x82bc301c
	if (cr6.eq) goto loc_82BC301C;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r8,r10,r27
	ctx.r8.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_82BC2FE8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc300c
	if (cr6.eq) goto loc_82BC300C;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_82BC3000:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82bc3000
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BC3000;
loc_82BC300C:
	// addi r8,r8,36
	ctx.r8.s64 = ctx.r8.s64 + 36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// bne cr6,0x82bc2fe8
	if (!cr6.eq) goto loc_82BC2FE8;
loc_82BC301C:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r11,r10,r23
	ctx.r11.s32 = PPCDivide(ctx.r10.s32, ctx.r23.s32);
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// beq cr6,0x82bc3044
	if (cr6.eq) goto loc_82BC3044;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82BC3044;
	sub_825952B8(ctx, base);
loc_82BC3044:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// add r10,r25,r30
	ctx.r10.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82BC306C:
	// subf r11,r27,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r27.s64;
	// li r9,9
	ctx.r9.s64 = 9;
	// divw r10,r11,r23
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r23.s32);
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bge cr6,0x82bc3150
	if (!cr6.lt) goto loc_82BC3150;
loc_82BC308C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82bc308c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BC308C;
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r27,r5
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r5.u32, xer);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r31,r27
	ctx.r9.u64 = ctx.r31.u64 + ctx.r27.u64;
	// beq cr6,0x82bc30e8
	if (cr6.eq) goto loc_82BC30E8;
	// subf r7,r31,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r31.s64;
loc_82BC30B4:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bc30d8
	if (cr6.eq) goto loc_82BC30D8;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82BC30CC:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82bc30cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BC30CC;
loc_82BC30D8:
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x82bc30b4
	if (!cr6.eq) goto loc_82BC30B4;
loc_82BC30E8:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r11,r27,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r27.s64;
	// divw r10,r11,r23
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r23.s32);
	// subf r5,r10,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r10.s64;
	// bl 0x82bc2e50
	ctx.lr = 0x82BC3104;
	sub_82BC2E50(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// subf r7,r31,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r27,r7
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, xer);
	// beq cr6,0x82bc3224
	if (cr6.eq) goto loc_82BC3224;
loc_82BC3120:
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82BC3130:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82bc3130
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BC3130;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bc3120
	if (!cr6.eq) goto loc_82BC3120;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82BC3150:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82bc3150
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BC3150;
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82bc31b0
	if (cr6.eq) goto loc_82BC31B0;
loc_82BC317C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bc31a0
	if (cr6.eq) goto loc_82BC31A0;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_82BC3194:
	// lwzu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82bc3194
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BC3194;
loc_82BC31A0:
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x82bc317c
	if (!cr6.eq) goto loc_82BC317C;
loc_82BC31B0:
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bc31ec
	if (cr6.eq) goto loc_82BC31EC;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
loc_82BC31C0:
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// addi r8,r8,-36
	ctx.r8.s64 = ctx.r8.s64 + -36;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_82BC31D8:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82bc31d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BC31D8;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x82bc31c0
	if (!cr6.eq) goto loc_82BC31C0;
loc_82BC31EC:
	// add r7,r4,r27
	ctx.r7.u64 = ctx.r4.u64 + ctx.r27.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r7
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, xer);
	// beq cr6,0x82bc3224
	if (cr6.eq) goto loc_82BC3224;
loc_82BC31FC:
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82BC320C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82bc320c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BC320C;
	// addi r8,r8,36
	ctx.r8.s64 = ctx.r8.s64 + 36;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bc31fc
	if (!cr6.eq) goto loc_82BC31FC;
loc_82BC3224:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC322C"))) PPC_WEAK_FUNC(sub_82BC322C);
PPC_FUNC_IMPL(__imp__sub_82BC322C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3230"))) PPC_WEAK_FUNC(sub_82BC3230);
PPC_FUNC_IMPL(__imp__sub_82BC3230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC3238;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,88
	ctx.r11.s64 = ctx.r4.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwzx r10,r30,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x82bc3264
	if (cr6.lt) goto loc_82BC3264;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BC3264:
	// bl 0x831156e8
	ctx.lr = 0x82BC3268;
	sub_831156E8(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r11,r11,2800
	ctx.r11.s64 = ctx.r11.s64 * 2800;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC3280:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc3280
	if (!cr6.eq) goto loc_82BC3280;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC32A4;
	sub_8259CC28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC32B0"))) PPC_WEAK_FUNC(sub_82BC32B0);
PPC_FUNC_IMPL(__imp__sub_82BC32B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82BC32B8;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BC32C8;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addis r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 131072;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r22,352
	ctx.r29.s64 = ctx.r22.s64 + 352;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// addi r28,r28,-19992
	ctx.r28.s64 = ctx.r28.s64 + -19992;
	// li r25,33
	ctx.r25.s64 = 33;
	// lfs f31,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// li r24,34
	ctx.r24.s64 = 34;
	// li r26,-1
	ctx.r26.s64 = -1;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// li r21,2
	ctx.r21.s64 = 2;
loc_82BC3300:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82bc3438
	if (!cr6.lt) goto loc_82BC3438;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
loc_82BC331C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bc3360
	if (cr6.eq) goto loc_82BC3360;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bc2ea8
	ctx.lr = 0x82BC3360;
	sub_82BC2EA8(ctx, base);
loc_82BC3360:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// blt cr6,0x82bc331c
	if (cr6.lt) goto loc_82BC331C;
	// li r11,10
	ctx.r11.s64 = 10;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stb r31,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r31.u8);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stb r31,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r31.u8);
	// stb r31,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r31.u8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r31.u8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// stb r31,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r31.u8);
	// stb r31,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r31.u8);
	// stb r25,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r25.u8);
	// stb r24,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r24.u8);
	// stb r25,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r25.u8);
	// stb r31,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r31.u8);
loc_82BC33B4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82bc33b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BC33B4;
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// stw r31,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r31.u32);
	// stw r31,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r31,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r31.u32);
	// stw r31,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r31.u32);
loc_82BC33EC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82bc33ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BC33EC;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831c3b88
	ctx.lr = 0x82BC3404;
	sub_831C3B88(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c50420
	ctx.lr = 0x82BC3414;
	sub_82C50420(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bc342c
	if (cr6.eq) goto loc_82BC342C;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82BC342C;
	sub_825952B8(ctx, base);
loc_82BC342C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
loc_82BC3438:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r23,2
	cr6.compare<uint32_t>(ctx.r23.u32, 2, xer);
	// blt cr6,0x82bc3300
	if (cr6.lt) goto loc_82BC3300;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC3454"))) PPC_WEAK_FUNC(sub_82BC3454);
PPC_FUNC_IMPL(__imp__sub_82BC3454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3458"))) PPC_WEAK_FUNC(sub_82BC3458);
PPC_FUNC_IMPL(__imp__sub_82BC3458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,16
	cr6.compare<int32_t>(ctx.r4.s32, 16, xer);
	// bge cr6,0x82bc346c
	if (!cr6.lt) goto loc_82BC346C;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82BC346C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC3474"))) PPC_WEAK_FUNC(sub_82BC3474);
PPC_FUNC_IMPL(__imp__sub_82BC3474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3478"))) PPC_WEAK_FUNC(sub_82BC3478);
PPC_FUNC_IMPL(__imp__sub_82BC3478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC3480;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC348C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,23172
	ctx.r30.s64 = ctx.r11.s64 + 23172;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC34AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc34ec
	if (cr6.eq) goto loc_82BC34EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd1560
	ctx.lr = 0x82BC34C0;
	sub_82CD1560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc34d8
	if (cr6.eq) goto loc_82BC34D8;
	// lis r4,660
	ctx.r4.s64 = 43253760;
	// ori r4,r4,275
	ctx.r4.u64 = ctx.r4.u64 | 275;
	// b 0x82bc34e0
	goto loc_82BC34E0;
loc_82BC34D8:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,646
	ctx.r4.u64 = ctx.r4.u64 | 646;
loc_82BC34E0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d30340
	ctx.lr = 0x82BC34EC;
	sub_82D30340(ctx, base);
loc_82BC34EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC34F4;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC350C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82BC3524;
	sub_82D20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC3534;
	sub_82D19788(ctx, base);
	// lbz r9,122(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 122);
	// li r30,2
	ctx.r30.s64 = 2;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// li r4,6
	ctx.r4.s64 = 6;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 & ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC3554;
	sub_82D19788(ctx, base);
	// lbz r5,122(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 122);
	// li r4,7
	ctx.r4.s64 = 7;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 & ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC3570;
	sub_82D19788(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC357C"))) PPC_WEAK_FUNC(sub_82BC357C);
PPC_FUNC_IMPL(__imp__sub_82BC357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3580"))) PPC_WEAK_FUNC(sub_82BC3580);
PPC_FUNC_IMPL(__imp__sub_82BC3580) {
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
	ctx.lr = 0x82BC359C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BC35A4;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc35d0
	if (cr6.eq) goto loc_82BC35D0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82BC35C0;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC35D0;
	sub_82D2AEC8(ctx, base);
loc_82BC35D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC35D8;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,23168(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23168);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC35F4;
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

__attribute__((alias("__imp__sub_82BC360C"))) PPC_WEAK_FUNC(sub_82BC360C);
PPC_FUNC_IMPL(__imp__sub_82BC360C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3610"))) PPC_WEAK_FUNC(sub_82BC3610);
PPC_FUNC_IMPL(__imp__sub_82BC3610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC3618;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3638;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x82bc3684
	if (!cr6.eq) goto loc_82BC3684;
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// bge cr6,0x82bc3684
	if (!cr6.lt) goto loc_82BC3684;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,23176(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23176);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC3664;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc3684
	if (cr6.eq) goto loc_82BC3684;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd14b8
	ctx.lr = 0x82BC3678;
	sub_82CD14B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82BC3684;
	sub_82D29598(ctx, base);
loc_82BC3684:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC368C"))) PPC_WEAK_FUNC(sub_82BC368C);
PPC_FUNC_IMPL(__imp__sub_82BC368C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3690"))) PPC_WEAK_FUNC(sub_82BC3690);
PPC_FUNC_IMPL(__imp__sub_82BC3690) {
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
	// addi r9,r11,28736
	ctx.r9.s64 = ctx.r11.s64 + 28736;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,164(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bc36d8
	if (cr6.eq) goto loc_82BC36D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BC36D8;
	sub_825952B8(ctx, base);
loc_82BC36D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// bl 0x82cd1fe0
	ctx.lr = 0x82BC36F0;
	sub_82CD1FE0(ctx, base);
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

__attribute__((alias("__imp__sub_82BC3704"))) PPC_WEAK_FUNC(sub_82BC3704);
PPC_FUNC_IMPL(__imp__sub_82BC3704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3708"))) PPC_WEAK_FUNC(sub_82BC3708);
PPC_FUNC_IMPL(__imp__sub_82BC3708) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82cd21e0
	ctx.lr = 0x82BC3728;
	sub_82CD21E0(ctx, base);
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// subfic r10,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r5.s64;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// addi r7,r11,28736
	ctx.r7.s64 = ctx.r11.s64 + 28736;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r3,r8,-17088
	ctx.r3.s64 = ctx.r8.s64 + -17088;
	// li r6,0
	ctx.r6.s64 = 0;
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stw r6,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r6.u32);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// stw r6,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r6.u32);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stw r6,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r6.u32);
	// ori r9,r9,8320
	ctx.r9.u64 = ctx.r9.u64 | 8320;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r8,r11,-30688
	ctx.r8.s64 = ctx.r11.s64 + -30688;
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// stw r6,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r6.u32);
loc_82BC3788:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// beq cr6,0x82bc37ac
	if (cr6.eq) goto loc_82BC37AC;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82bc37c0
	if (!cr6.lt) goto loc_82BC37C0;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,2560
	ctx.r11.s64 = ctx.r11.s64 + 2560;
	// b 0x82bc37c4
	goto loc_82BC37C4;
loc_82BC37AC:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82bc37c0
	if (!cr6.lt) goto loc_82BC37C0;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82bc37c4
	goto loc_82BC37C4;
loc_82BC37C0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82BC37C4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc37f0
	if (cr6.eq) goto loc_82BC37F0;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// ble cr6,0x82bc37f0
	if (!cr6.gt) goto loc_82BC37F0;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82BC37F0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// beq cr6,0x82bc3814
	if (cr6.eq) goto loc_82BC3814;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82bc382c
	if (!cr6.lt) goto loc_82BC382C;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,2624
	ctx.r11.s64 = ctx.r11.s64 + 2624;
	// b 0x82bc3830
	goto loc_82BC3830;
loc_82BC3814:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82bc382c
	if (!cr6.lt) goto loc_82BC382C;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// b 0x82bc3830
	goto loc_82BC3830;
loc_82BC382C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82BC3830:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc385c
	if (cr6.eq) goto loc_82BC385C;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// ble cr6,0x82bc385c
	if (!cr6.gt) goto loc_82BC385C;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82BC385C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82bc387c
	if (cr6.eq) goto loc_82BC387C;
	// cmplwi cr6,r7,32
	cr6.compare<uint32_t>(ctx.r7.u32, 32, xer);
	// bge cr6,0x82bc3894
	if (!cr6.lt) goto loc_82BC3894;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,2688
	ctx.r11.s64 = ctx.r11.s64 + 2688;
	// b 0x82bc3898
	goto loc_82BC3898;
loc_82BC387C:
	// cmplwi cr6,r7,32
	cr6.compare<uint32_t>(ctx.r7.u32, 32, xer);
	// bge cr6,0x82bc3894
	if (!cr6.lt) goto loc_82BC3894;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// b 0x82bc3898
	goto loc_82BC3898;
loc_82BC3894:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82BC3898:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc38c4
	if (cr6.eq) goto loc_82BC38C4;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// ble cr6,0x82bc38c4
	if (!cr6.gt) goto loc_82BC38C4;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82BC38C4:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// beq cr6,0x82bc38e8
	if (cr6.eq) goto loc_82BC38E8;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82bc3900
	if (!cr6.lt) goto loc_82BC3900;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,2752
	ctx.r11.s64 = ctx.r11.s64 + 2752;
	// b 0x82bc3904
	goto loc_82BC3904;
loc_82BC38E8:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82bc3900
	if (!cr6.lt) goto loc_82BC3900;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// b 0x82bc3904
	goto loc_82BC3904;
loc_82BC3900:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82BC3904:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc3930
	if (cr6.eq) goto loc_82BC3930;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// ble cr6,0x82bc3930
	if (!cr6.gt) goto loc_82BC3930;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82BC3930:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82bc3788
	if (cr6.lt) goto loc_82BC3788;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82bc3968
	if (!cr6.gt) goto loc_82BC3968;
	// stw r4,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd1580
	ctx.lr = 0x82BC395C;
	sub_82CD1580(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r11.u8);
	// b 0x82bc3974
	goto loc_82BC3974;
loc_82BC3968:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r6,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r6.u8);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_82BC3974:
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r30,23192
	ctx.r11.s64 = ctx.r30.s64 + 23192;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x82d20ae0
	ctx.lr = 0x82BC3988;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,23192(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82BC3998;
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

__attribute__((alias("__imp__sub_82BC39B4"))) PPC_WEAK_FUNC(sub_82BC39B4);
PPC_FUNC_IMPL(__imp__sub_82BC39B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC39B8"))) PPC_WEAK_FUNC(sub_82BC39B8);
PPC_FUNC_IMPL(__imp__sub_82BC39B8) {
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
	// bl 0x82bc3690
	ctx.lr = 0x82BC39D8;
	sub_82BC3690(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc39f0
	if (cr6.eq) goto loc_82BC39F0;
	// bl 0x82416268
	ctx.lr = 0x82BC39EC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC39F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC3A08"))) PPC_WEAK_FUNC(sub_82BC3A08);
PPC_FUNC_IMPL(__imp__sub_82BC3A08) {
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
	// blt cr6,0x82bc3a30
	if (cr6.lt) goto loc_82BC3A30;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc3a34
	goto loc_82BC3A34;
loc_82BC3A30:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BC3A34:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,180
	ctx.r4.s64 = 180;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BC3A50;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc3a70
	if (cr6.eq) goto loc_82BC3A70;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bc3708
	ctx.lr = 0x82BC3A68;
	sub_82BC3708(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bc3a74
	if (!cr6.eq) goto loc_82BC3A74;
loc_82BC3A70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC3A74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC3A8C"))) PPC_WEAK_FUNC(sub_82BC3A8C);
PPC_FUNC_IMPL(__imp__sub_82BC3A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3A90"))) PPC_WEAK_FUNC(sub_82BC3A90);
PPC_FUNC_IMPL(__imp__sub_82BC3A90) {
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
	// blt cr6,0x82bc3ab8
	if (cr6.lt) goto loc_82BC3AB8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc3abc
	goto loc_82BC3ABC;
loc_82BC3AB8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BC3ABC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,180
	ctx.r4.s64 = 180;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BC3AD8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc3af8
	if (cr6.eq) goto loc_82BC3AF8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bc3708
	ctx.lr = 0x82BC3AF0;
	sub_82BC3708(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bc3afc
	if (!cr6.eq) goto loc_82BC3AFC;
loc_82BC3AF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC3AFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC3B14"))) PPC_WEAK_FUNC(sub_82BC3B14);
PPC_FUNC_IMPL(__imp__sub_82BC3B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3B18"))) PPC_WEAK_FUNC(sub_82BC3B18);
PPC_FUNC_IMPL(__imp__sub_82BC3B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC3B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC3B2C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,23184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23184);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC3B48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc3ce4
	if (cr6.eq) goto loc_82BC3CE4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r31,r11,28330
	ctx.r31.s64 = ctx.r11.s64 + 28330;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x82BC3B68;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-31
	ctx.r4.s64 = ctx.r31.s64 + -31;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82BC3B74;
	sub_837B0C10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82BC3B80;
	sub_837B0C10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd1570
	ctx.lr = 0x82BC3B88;
	sub_82CD1570(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82bc3bac
	if (cr6.eq) goto loc_82BC3BAC;
	// li r5,10
	ctx.r5.s64 = 10;
	// ori r4,r4,660
	ctx.r4.u64 = ctx.r4.u64 | 660;
	// bl 0x82d042a8
	ctx.lr = 0x82BC3BA8;
	sub_82D042A8(ctx, base);
	// b 0x82bc3bb4
	goto loc_82BC3BB4;
loc_82BC3BAC:
	// ori r4,r4,661
	ctx.r4.u64 = ctx.r4.u64 | 661;
	// bl 0x82d04220
	ctx.lr = 0x82BC3BB4;
	sub_82D04220(ctx, base);
loc_82BC3BB4:
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x82cd14b8
	ctx.lr = 0x82BC3BBC;
	sub_82CD14B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d04220
	ctx.lr = 0x82BC3BC8;
	sub_82D04220(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bc3bdc
	if (!cr6.lt) goto loc_82BC3BDC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82BC3BDC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bc3bf0
	if (!cr6.lt) goto loc_82BC3BF0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82BC3BF0:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,634
	ctx.r4.u64 = ctx.r4.u64 | 634;
	// bl 0x82d042a8
	ctx.lr = 0x82BC3C00;
	sub_82D042A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2fde0
	ctx.lr = 0x82BC3C10;
	sub_82D2FDE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2fe58
	ctx.lr = 0x82BC3C18;
	sub_82D2FE58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc3c6c
	if (cr6.eq) goto loc_82BC3C6C;
	// lbz r11,122(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 122);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc3c5c
	if (cr6.eq) goto loc_82BC3C5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd1570
	ctx.lr = 0x82BC3C38;
	sub_82CD1570(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,152(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82BC3C54;
	sub_82D3D968(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82bc3c60
	goto loc_82BC3C60;
loc_82BC3C5C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BC3C60:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC3C6C;
	sub_82D2AEC8(ctx, base);
loc_82BC3C6C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc3c8c
	if (cr6.lt) goto loc_82BC3C8C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BC3C8C;
	sub_825952B8(ctx, base);
loc_82BC3C8C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82bc3cbc
	if (cr6.lt) goto loc_82BC3CBC;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BC3CBC;
	sub_825952B8(ctx, base);
loc_82BC3CBC:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82bc3ce4
	if (cr6.lt) goto loc_82BC3CE4;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82BC3CE4;
	sub_825952B8(ctx, base);
loc_82BC3CE4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC3CEC"))) PPC_WEAK_FUNC(sub_82BC3CEC);
PPC_FUNC_IMPL(__imp__sub_82BC3CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3CF0"))) PPC_WEAK_FUNC(sub_82BC3CF0);
PPC_FUNC_IMPL(__imp__sub_82BC3CF0) {
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
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// addi r30,r3,164
	ctx.r30.s64 = ctx.r3.s64 + 164;
	// lwz r9,140(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r7,r9,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// srawi r6,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bge cr6,0x82bc3de8
	if (!cr6.lt) goto loc_82BC3DE8;
	// bl 0x83a7d958
	ctx.lr = 0x82BC3D30;
	sub_83A7D958(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic. r9,r10,-1000
	xer.ca = ctx.r10.u32 > 999;
	ctx.r9.s64 = ctx.r10.s64 + -1000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x82bc3de8
	if (!cr0.gt) goto loc_82BC3DE8;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r10,r6,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r6.s64;
	// srawi. r7,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82bc3da4
	if (cr0.eq) goto loc_82BC3DA4;
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BC3D60:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82bc3d70
	if (!cr6.eq) goto loc_82BC3D70;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bc3d88
	goto loc_82BC3D88;
loc_82BC3D70:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r5,r8,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r4,r11,r5
	ctx.r4.u32 = PPCDivide(ctx.r11.u32, ctx.r5.u32);
	// twllei r5,0
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
loc_82BC3D88:
	// lwzx r5,r10,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bc3da4
	if (cr6.eq) goto loc_82BC3DA4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82bc3d60
	if (cr6.lt) goto loc_82BC3D60;
loc_82BC3DA4:
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bc3de8
	if (!cr6.eq) goto loc_82BC3DE8;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc3dc0
	if (!cr6.eq) goto loc_82BC3DC0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82bc3ddc
	goto loc_82BC3DDC;
loc_82BC3DC0:
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r8,r10,r9
	ctx.r8.u32 = PPCDivide(ctx.r10.u32, ctx.r9.u32);
	// twllei r9,0
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_82BC3DDC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BC3DE8;
	sub_835977D8(ctx, base);
loc_82BC3DE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC3E00"))) PPC_WEAK_FUNC(sub_82BC3E00);
PPC_FUNC_IMPL(__imp__sub_82BC3E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BC3E08;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x82bc3f58
	if (!cr6.gt) goto loc_82BC3F58;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r30,r11,28644
	ctx.r30.s64 = ctx.r11.s64 + 28644;
	// addi r4,r30,-313
	ctx.r4.s64 = ctx.r30.s64 + -313;
	// bl 0x837b0c10
	ctx.lr = 0x82BC3E30;
	sub_837B0C10(ctx, base);
	// addi r4,r30,-283
	ctx.r4.s64 = ctx.r30.s64 + -283;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82BC3E3C;
	sub_837B0C10(ctx, base);
	// lis r4,505
	ctx.r4.s64 = 33095680;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,202
	ctx.r4.u64 = ctx.r4.u64 | 202;
	// bl 0x82d04220
	ctx.lr = 0x82BC3E4C;
	sub_82D04220(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lis r4,23
	ctx.r4.s64 = 1507328;
	// lwz r6,140(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,408
	ctx.r4.u64 = ctx.r4.u64 | 408;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82d042a8
	ctx.lr = 0x82BC3E68;
	sub_82D042A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a6b900
	ctx.lr = 0x82BC3E78;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x82BC3E8C;
	sub_825A1DA8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc3eac
	if (cr6.lt) goto loc_82BC3EAC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82BC3EAC;
	sub_825952B8(ctx, base);
loc_82BC3EAC:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC3ED0;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC3EE0;
	sub_82D19788(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bc3ef4
	if (!cr6.lt) goto loc_82BC3EF4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82BC3EF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3F0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bc3f28
	if (cr6.lt) goto loc_82BC3F28;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BC3F28;
	sub_825952B8(ctx, base);
loc_82BC3F28:
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
	// blt cr6,0x82bc3f88
	if (cr6.lt) goto loc_82BC3F88;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BC3F50;
	sub_825952B8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BC3F58:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC3F68;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC3F78;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC3F88;
	sub_82D19788(ctx, base);
loc_82BC3F88:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC3F90"))) PPC_WEAK_FUNC(sub_82BC3F90);
PPC_FUNC_IMPL(__imp__sub_82BC3F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC3F98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC3FA4;
	sub_82D19A78(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d33db0
	ctx.lr = 0x82BC3FAC;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82dad028
	ctx.lr = 0x82BC3FB8;
	sub_82DAD028(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mullw r29,r11,r10
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82cd1570
	ctx.lr = 0x82BC3FCC;
	sub_82CD1570(ctx, base);
	// lwz r5,132(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r8,10
	ctx.r8.s64 = 10;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// and r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 & ctx.r8.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cd4ba8
	ctx.lr = 0x82BC3FF4;
	sub_82CD4BA8(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x82BC3FF8;
	sub_83A7D958(ctx, base);
	// stw r3,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc3b18
	ctx.lr = 0x82BC4004;
	sub_82BC3B18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc3e00
	ctx.lr = 0x82BC400C;
	sub_82BC3E00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC4014"))) PPC_WEAK_FUNC(sub_82BC4014);
PPC_FUNC_IMPL(__imp__sub_82BC4014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC4018"))) PPC_WEAK_FUNC(sub_82BC4018);
PPC_FUNC_IMPL(__imp__sub_82BC4018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BC4020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC402C;
	sub_82D19A78(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d33db0
	ctx.lr = 0x82BC4034;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82dad028
	ctx.lr = 0x82BC4040;
	sub_82DAD028(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd1570
	ctx.lr = 0x82BC404C;
	sub_82CD1570(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,10
	ctx.r10.s64 = 10;
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// and r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd4ba8
	ctx.lr = 0x82BC4074;
	sub_82CD4BA8(ctx, base);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc40f8
	if (cr6.eq) goto loc_82BC40F8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82bc4090
	if (!cr6.eq) goto loc_82BC4090;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bc40a0
	goto loc_82BC40A0;
loc_82BC4090:
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// twllei r29,0
	// divwu r11,r11,r29
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82BC40A0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r29,r31,164
	ctx.r29.s64 = ctx.r31.s64 + 164;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bc40e0
	if (cr6.eq) goto loc_82BC40E0;
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
	ctx.lr = 0x82BC40D8;
	sub_831CE420(ctx, base);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82BC40E0:
	// bl 0x83a7d958
	ctx.lr = 0x82BC40E4;
	sub_83A7D958(ctx, base);
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc3b18
	ctx.lr = 0x82BC40F0;
	sub_82BC3B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc3e00
	ctx.lr = 0x82BC40F8;
	sub_82BC3E00(ctx, base);
loc_82BC40F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC4100"))) PPC_WEAK_FUNC(sub_82BC4100);
PPC_FUNC_IMPL(__imp__sub_82BC4100) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC412C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// bne cr6,0x82bc415c
	if (!cr6.eq) goto loc_82BC415C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82BC4148;
	sub_82D19CD0(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bge cr6,0x82bc4154
	if (!cr6.lt) goto loc_82BC4154;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
loc_82BC4154:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc4018
	ctx.lr = 0x82BC415C;
	sub_82BC4018(ctx, base);
loc_82BC415C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC4174"))) PPC_WEAK_FUNC(sub_82BC4174);
PPC_FUNC_IMPL(__imp__sub_82BC4174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC4178"))) PPC_WEAK_FUNC(sub_82BC4178);
PPC_FUNC_IMPL(__imp__sub_82BC4178) {
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
	// bl 0x82cd1580
	ctx.lr = 0x82BC4190;
	sub_82CD1580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc4018
	ctx.lr = 0x82BC4198;
	sub_82BC4018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc3b18
	ctx.lr = 0x82BC41A0;
	sub_82BC3B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc3e00
	ctx.lr = 0x82BC41A8;
	sub_82BC3E00(ctx, base);
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

__attribute__((alias("__imp__sub_82BC41BC"))) PPC_WEAK_FUNC(sub_82BC41BC);
PPC_FUNC_IMPL(__imp__sub_82BC41BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC41C0"))) PPC_WEAK_FUNC(sub_82BC41C0);
PPC_FUNC_IMPL(__imp__sub_82BC41C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc41d0
	if (!cr6.eq) goto loc_82BC41D0;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
loc_82BC41D0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// b 0x82bc3f90
	sub_82BC3F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC41DC"))) PPC_WEAK_FUNC(sub_82BC41DC);
PPC_FUNC_IMPL(__imp__sub_82BC41DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC41E0"))) PPC_WEAK_FUNC(sub_82BC41E0);
PPC_FUNC_IMPL(__imp__sub_82BC41E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bc4200
	if (!cr6.eq) goto loc_82BC4200;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
loc_82BC4200:
	// b 0x82bc3f90
	sub_82BC3F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC4204"))) PPC_WEAK_FUNC(sub_82BC4204);
PPC_FUNC_IMPL(__imp__sub_82BC4204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC4208"))) PPC_WEAK_FUNC(sub_82BC4208);
PPC_FUNC_IMPL(__imp__sub_82BC4208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bc4238
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BC4238;
	// bdzf 4*cr6+eq,0x82bc4238
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BC4238;
	// bdzf 4*cr6+eq,0x82bc4240
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BC4240;
	// bne cr6,0x82bc4248
	if (!cr6.eq) goto loc_82BC4248;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82BC4238:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82BC4240:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82BC4248:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC4250"))) PPC_WEAK_FUNC(sub_82BC4250);
PPC_FUNC_IMPL(__imp__sub_82BC4250) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82d19858
	sub_82D19858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC4258"))) PPC_WEAK_FUNC(sub_82BC4258);
PPC_FUNC_IMPL(__imp__sub_82BC4258) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,23424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23424);
	// bl 0x82d2f6d8
	ctx.lr = 0x82BC428C;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc42b0
	if (cr6.eq) goto loc_82BC42B0;
	// lis r4,260
	ctx.r4.s64 = 17039360;
	// ori r4,r4,65
	ctx.r4.u64 = ctx.r4.u64 | 65;
	// bl 0x82d2ada8
	ctx.lr = 0x82BC42A4;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82BC42B0;
	sub_83103100(ctx, base);
loc_82BC42B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC42C8"))) PPC_WEAK_FUNC(sub_82BC42C8);
PPC_FUNC_IMPL(__imp__sub_82BC42C8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,91
	ctx.r5.u64 = ctx.r5.u64 | 91;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC42F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bc4310
	if (!cr6.eq) goto loc_82BC4310;
	// lbz r11,133(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 133);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc4340
	if (cr6.eq) goto loc_82BC4340;
loc_82BC4310:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC4320;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,26
	ctx.r5.s64 = 1703936;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,656
	ctx.r5.u64 = ctx.r5.u64 | 656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4340;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BC4340:
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

__attribute__((alias("__imp__sub_82BC4358"))) PPC_WEAK_FUNC(sub_82BC4358);
PPC_FUNC_IMPL(__imp__sub_82BC4358) {
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
	// bl 0x82d199f0
	ctx.lr = 0x82BC4370;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc438c
	if (!cr6.eq) goto loc_82BC438C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82BC438C;
	sub_82D1EAC0(ctx, base);
loc_82BC438C:
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

__attribute__((alias("__imp__sub_82BC43A0"))) PPC_WEAK_FUNC(sub_82BC43A0);
PPC_FUNC_IMPL(__imp__sub_82BC43A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BC43A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,96(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r3,100
	ctx.r28.s64 = ctx.r3.s64 + 100;
loc_82BC43BC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82BC43C0:
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd4ba8
	ctx.lr = 0x82BC43DC;
	sub_82CD4BA8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x831c6ab8
	ctx.lr = 0x82BC43EC;
	sub_831C6AB8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,12
	cr6.compare<uint32_t>(ctx.r31.u32, 12, xer);
	// blt cr6,0x82bc43c0
	if (cr6.lt) goto loc_82BC43C0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// blt cr6,0x82bc43bc
	if (cr6.lt) goto loc_82BC43BC;
	// stw r27,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC4414"))) PPC_WEAK_FUNC(sub_82BC4414);
PPC_FUNC_IMPL(__imp__sub_82BC4414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC4418"))) PPC_WEAK_FUNC(sub_82BC4418);
PPC_FUNC_IMPL(__imp__sub_82BC4418) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d1eac0
	ctx.lr = 0x82BC4430;
	sub_82D1EAC0(ctx, base);
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

__attribute__((alias("__imp__sub_82BC4444"))) PPC_WEAK_FUNC(sub_82BC4444);
PPC_FUNC_IMPL(__imp__sub_82BC4444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC4448"))) PPC_WEAK_FUNC(sub_82BC4448);
PPC_FUNC_IMPL(__imp__sub_82BC4448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BC4450;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cd21e0
	ctx.lr = 0x82BC445C;
	sub_82CD21E0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r11,29992
	ctx.r9.s64 = ctx.r11.s64 + 29992;
	// addi r8,r10,29988
	ctx.r8.s64 = ctx.r10.s64 + 29988;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r30,2
	ctx.r30.s64 = 131072;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stb r26,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r26.u8);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// stb r26,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r26.u8);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// ori r30,r30,10880
	ctx.r30.u64 = ctx.r30.u64 | 10880;
	// ori r28,r10,12928
	ctx.r28.u64 = ctx.r10.u64 | 12928;
	// addi r27,r11,-30688
	ctx.r27.s64 = ctx.r11.s64 + -30688;
loc_82BC449C:
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// bge cr6,0x82bc44b0
	if (!cr6.lt) goto loc_82BC44B0;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82bc44b4
	goto loc_82BC44B4;
loc_82BC44B0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82BC44B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x831ce980
	ctx.lr = 0x82BC44C0;
	sub_831CE980(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc44e0
	if (!cr6.eq) goto loc_82BC44E0;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x82bc449c
	if (cr6.lt) goto loc_82BC449C;
	// b 0x82bc44e8
	goto loc_82BC44E8;
loc_82BC44E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
loc_82BC44E8:
	// lis r30,2
	ctx.r30.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// ori r30,r30,8320
	ctx.r30.u64 = ctx.r30.u64 | 8320;
	// ori r28,r11,10368
	ctx.r28.u64 = ctx.r11.u64 | 10368;
loc_82BC44FC:
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// bge cr6,0x82bc4510
	if (!cr6.lt) goto loc_82BC4510;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82bc4514
	goto loc_82BC4514;
loc_82BC4510:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82BC4514:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x831ce980
	ctx.lr = 0x82BC4520;
	sub_831CE980(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc4540
	if (!cr6.eq) goto loc_82BC4540;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x82bc44fc
	if (cr6.lt) goto loc_82BC44FC;
	// b 0x82bc4548
	goto loc_82BC4548;
loc_82BC4540:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r11.u8);
loc_82BC4548:
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r26,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r26.u8);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,23324
	ctx.r30.s64 = ctx.r9.s64 + 23324;
	// lwz r4,23324(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23324);
	// bl 0x82d20ae0
	ctx.lr = 0x82BC4570;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82BC4580;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC458C"))) PPC_WEAK_FUNC(sub_82BC458C);
PPC_FUNC_IMPL(__imp__sub_82BC458C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC4590"))) PPC_WEAK_FUNC(sub_82BC4590);
PPC_FUNC_IMPL(__imp__sub_82BC4590) {
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
	// addi r9,r11,29992
	ctx.r9.s64 = ctx.r11.s64 + 29992;
	// addi r8,r10,29988
	ctx.r8.s64 = ctx.r10.s64 + 29988;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82cd1fe0
	ctx.lr = 0x82BC45C8;
	sub_82CD1FE0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bc45e0
	if (cr6.eq) goto loc_82BC45E0;
	// bl 0x82416268
	ctx.lr = 0x82BC45DC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC45E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC45F8"))) PPC_WEAK_FUNC(sub_82BC45F8);
PPC_FUNC_IMPL(__imp__sub_82BC45F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82BC4600;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4618;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC4624;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BC462C;
	sub_82D33DB0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc482c
	if (cr6.eq) goto loc_82BC482C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC4640;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82BC4648;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc4674
	if (cr6.eq) goto loc_82BC4674;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82BC4664;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC4674;
	sub_82D2AEC8(ctx, base);
loc_82BC4674:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC467C;
	sub_82D19A78(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r26,r11,23348
	ctx.r26.s64 = ctx.r11.s64 + 23348;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,64(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC469C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC46A4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC46BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc46d4
	if (cr6.eq) goto loc_82BC46D4;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,192
	ctx.r4.u64 = ctx.r4.u64 | 192;
	// bl 0x82d30340
	ctx.lr = 0x82BC46D4;
	sub_82D30340(ctx, base);
loc_82BC46D4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82BC46DC;
	sub_82D33C10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc482c
	if (cr6.eq) goto loc_82BC482C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,29440
	ctx.r28.s64 = ctx.r11.s64 + 29440;
loc_82BC46F8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BC4704;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc4820
	if (cr6.eq) goto loc_82BC4820;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// bge cr6,0x82bc480c
	if (!cr6.lt) goto loc_82BC480C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4734;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc4750
	if (cr6.eq) goto loc_82BC4750;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// bl 0x82d29598
	ctx.lr = 0x82BC4750;
	sub_82D29598(ctx, base);
loc_82BC4750:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r23,r9,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,296(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC4770;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r7,r28,4
	ctx.r7.s64 = ctx.r28.s64 + 4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwzx r4,r23,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r7.u32);
	// bl 0x82d233b0
	ctx.lr = 0x82BC4788;
	sub_82D233B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r28,8
	ctx.r6.s64 = ctx.r28.s64 + 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r23,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r6.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC47A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// beq cr6,0x82bc47f8
	if (cr6.eq) goto loc_82BC47F8;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// beq cr6,0x82bc47e4
	if (cr6.eq) goto loc_82BC47E4;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bne cr6,0x82bc4808
	if (!cr6.eq) goto loc_82BC4808;
	// lbz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 132);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc4808
	if (!cr6.eq) goto loc_82BC4808;
	// lbz r10,133(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 133);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc4808
	if (!cr6.eq) goto loc_82BC4808;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bc4808
	goto loc_82BC4808;
loc_82BC47E4:
	// lbz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 132);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc4808
	if (!cr6.eq) goto loc_82BC4808;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bc4808
	goto loc_82BC4808;
loc_82BC47F8:
	// lbz r10,133(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 133);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_82BC4808:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82BC480C:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BC4820;
	sub_82D2B608(ctx, base);
loc_82BC4820:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// blt cr6,0x82bc46f8
	if (cr6.lt) goto loc_82BC46F8;
loc_82BC482C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC4834"))) PPC_WEAK_FUNC(sub_82BC4834);
PPC_FUNC_IMPL(__imp__sub_82BC4834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC4838"))) PPC_WEAK_FUNC(sub_82BC4838);
PPC_FUNC_IMPL(__imp__sub_82BC4838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bc48c0
	if (cr6.eq) goto loc_82BC48C0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82BC4844:
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// stb r9,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r9.u8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r6,r3,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// lbz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r6,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r6.u8);
	// lbz r3,9(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stb r3,13(r5)
	PPC_STORE_U8(ctx.r5.u32 + 13, ctx.r3.u8);
	// lbz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stb r10,14(r5)
	PPC_STORE_U8(ctx.r5.u32 + 14, ctx.r10.u8);
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bne cr6,0x82bc4844
	if (!cr6.eq) goto loc_82BC4844;
loc_82BC48C0:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC48C8"))) PPC_WEAK_FUNC(sub_82BC48C8);
PPC_FUNC_IMPL(__imp__sub_82BC48C8) {
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
	// blt cr6,0x82bc48f0
	if (cr6.lt) goto loc_82BC48F0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc48f4
	goto loc_82BC48F4;
loc_82BC48F0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BC48F4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BC4910;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc492c
	if (cr6.eq) goto loc_82BC492C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bc4448
	ctx.lr = 0x82BC4924;
	sub_82BC4448(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bc4930
	if (!cr6.eq) goto loc_82BC4930;
loc_82BC492C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC4930:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC4948"))) PPC_WEAK_FUNC(sub_82BC4948);
PPC_FUNC_IMPL(__imp__sub_82BC4948) {
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
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82BC4974;
	sub_82595718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc4990
	if (cr6.eq) goto loc_82BC4990;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,30292
	ctx.r10.s64 = ctx.r11.s64 + 30292;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82bc4994
	goto loc_82BC4994;
loc_82BC4990:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BC4994:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83878e28
	ctx.lr = 0x82BC49B0;
	sub_83878E28(ctx, base);
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

__attribute__((alias("__imp__sub_82BC49C8"))) PPC_WEAK_FUNC(sub_82BC49C8);
PPC_FUNC_IMPL(__imp__sub_82BC49C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82BC49D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// li r26,528
	ctx.r26.s64 = 528;
loc_82BC49E4:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r30,-12
	ctx.r27.s64 = ctx.r30.s64 + -12;
	// lwz r5,-4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bc4a08
	if (cr6.eq) goto loc_82BC4A08;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82bc0b40
	ctx.lr = 0x82BC4A04;
	sub_82BC0B40(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82BC4A08:
	// lwz r28,128(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r29,124(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// beq cr6,0x82bc4a48
	if (cr6.eq) goto loc_82BC4A48;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r28
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r28.u32, xer);
	// beq cr6,0x82bc4a44
	if (cr6.eq) goto loc_82BC4A44;
loc_82BC4A24:
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82BC4A34;
	sub_831CE980(ctx, base);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82bc4a24
	if (!cr6.eq) goto loc_82BC4A24;
loc_82BC4A44:
	// stw r29,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r29.u32);
loc_82BC4A48:
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82BC4A58;
	sub_831CDCF0(ctx, base);
	// addi r3,r27,152
	ctx.r3.s64 = ctx.r27.s64 + 152;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82BC4A68;
	sub_831CDCF0(ctx, base);
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r30,r30,264
	ctx.r30.s64 = ctx.r30.s64 + 264;
	// bne 0x82bc49e4
	if (!cr0.eq) goto loc_82BC49E4;
	// addis r27,r24,2
	ctx.r27.s64 = ctx.r24.s64 + 131072;
	// addis r28,r24,2
	ctx.r28.s64 = ctx.r24.s64 + 131072;
	// addi r27,r27,10880
	ctx.r27.s64 = ctx.r27.s64 + 10880;
	// addi r28,r28,12932
	ctx.r28.s64 = ctx.r28.s64 + 12932;
	// li r26,32
	ctx.r26.s64 = 32;
loc_82BC4A88:
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,-2560
	ctx.r3.s64 = ctx.r27.s64 + -2560;
	// bl 0x831cdcf0
	ctx.lr = 0x82BC4A98;
	sub_831CDCF0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82BC4AA8;
	sub_831CDCF0(ctx, base);
	// lwz r30,-2560(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2560);
	// lwz r29,-2564(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2564);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bc4aec
	if (cr6.eq) goto loc_82BC4AEC;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r30
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bc4ae8
	if (cr6.eq) goto loc_82BC4AE8;
loc_82BC4AC4:
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d0080
	ctx.lr = 0x82BC4AD8;
	sub_831D0080(ctx, base);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82bc4ac4
	if (!cr6.eq) goto loc_82BC4AC4;
loc_82BC4AE8:
	// stw r29,-2560(r28)
	PPC_STORE_U32(ctx.r28.u32 + -2560, ctx.r29.u32);
loc_82BC4AEC:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,-4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82bc4b30
	if (cr6.eq) goto loc_82BC4B30;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, xer);
	// beq cr6,0x82bc4b2c
	if (cr6.eq) goto loc_82BC4B2C;
loc_82BC4B08:
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d0080
	ctx.lr = 0x82BC4B1C;
	sub_831D0080(ctx, base);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82bc4b08
	if (!cr6.eq) goto loc_82BC4B08;
loc_82BC4B2C:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_82BC4B30:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// bne 0x82bc4a88
	if (!cr0.eq) goto loc_82BC4A88;
	// addis r31,r24,2
	ctx.r31.s64 = ctx.r24.s64 + 131072;
	// addi r31,r31,13440
	ctx.r31.s64 = ctx.r31.s64 + 13440;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bc4b68
	if (cr6.eq) goto loc_82BC4B68;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bc4838
	ctx.lr = 0x82BC4B64;
	sub_82BC4838(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82BC4B68:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC4B70"))) PPC_WEAK_FUNC(sub_82BC4B70);
PPC_FUNC_IMPL(__imp__sub_82BC4B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82BC4B78;
	__savegprlr_14(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r3.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BC4B88;
	sub_82D19A78(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82d33db0
	ctx.lr = 0x82BC4B90;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc50c4
	if (cr6.eq) goto loc_82BC50C4;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addis r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 131072;
	// addi r4,r4,13440
	ctx.r4.s64 = ctx.r4.s64 + 13440;
	// bl 0x830a4c40
	ctx.lr = 0x82BC4BB4;
	sub_830A4C40(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r22,176(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r22,r10
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bc4be8
	if (!cr6.eq) goto loc_82BC4BE8;
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x82bc4be8
	if (!cr6.eq) goto loc_82BC4BE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r11,121(r30)
	PPC_STORE_U8(ctx.r30.u32 + 121, ctx.r11.u8);
	// bl 0x82f73d60
	ctx.lr = 0x82BC4BE0;
	sub_82F73D60(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82BC4BE8:
	// bl 0x831156e8
	ctx.lr = 0x82BC4BEC;
	sub_831156E8(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82dad028
	ctx.lr = 0x82BC4BF4;
	sub_82DAD028(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
	// li r16,2
	ctx.r16.s64 = 2;
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc5090
	if (cr6.eq) goto loc_82BC5090;
	// lis r9,108
	ctx.r9.s64 = 7077888;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,25
	ctx.r8.s64 = 1638400;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// li r26,15
	ctx.r26.s64 = 15;
	// ori r17,r9,2
	ctx.r17.u64 = ctx.r9.u64 | 2;
	// ori r14,r8,634
	ctx.r14.u64 = ctx.r8.u64 | 634;
	// addi r21,r11,29536
	ctx.r21.s64 = ctx.r11.s64 + 29536;
	// addi r23,r10,23364
	ctx.r23.s64 = ctx.r10.s64 + 23364;
loc_82BC4C40:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82BC4C4C;
	sub_82D2D580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc5084
	if (cr6.eq) goto loc_82BC5084;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r27,r23,4
	ctx.r27.s64 = ctx.r23.s64 + 4;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// subf r10,r22,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r22.s64;
	// addi r25,r3,100
	ctx.r25.s64 = ctx.r3.s64 + 100;
	// srawi r9,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// subfc r8,r9,r18
	xer.ca = ctx.r18.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r18.s64 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r19,r6,31
	ctx.r19.u64 = ctx.r6.u32 & 0x1;
loc_82BC4C78:
	// lwz r4,-8(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
loc_82BC4C8C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc4c8c
	if (!cr6.eq) goto loc_82BC4C8C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC4CB0;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x82BC4CC0;
	sub_82AB6970(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc4cd4
	if (cr6.lt) goto loc_82BC4CD4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc4cd8
	goto loc_82BC4CD8;
loc_82BC4CD4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BC4CD8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4CEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bc4d0c
	if (cr6.lt) goto loc_82BC4D0C;
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r16.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82BC4D0C;
	sub_825952B8(ctx, base);
loc_82BC4D0C:
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stb r29,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r29.u8);
	// beq cr6,0x82bc4d74
	if (cr6.eq) goto loc_82BC4D74;
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc4d68
	if (cr6.eq) goto loc_82BC4D68;
	// add r11,r20,r28
	ctx.r11.u64 = ctx.r20.u64 + ctx.r28.u64;
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// beq cr6,0x82bc4d54
	if (cr6.eq) goto loc_82BC4D54;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82BC4D54:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82BC4D64;
	sub_82D329F8(ctx, base);
	// b 0x82bc4d74
	goto loc_82BC4D74;
loc_82BC4D68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a68740
	ctx.lr = 0x82BC4D74;
	sub_82A68740(ctx, base);
loc_82BC4D74:
	// lwz r4,-4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC4D7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc4d7c
	if (!cr6.eq) goto loc_82BC4D7C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC4DA0;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x82BC4DB0;
	sub_82AB6970(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc4dc4
	if (cr6.lt) goto loc_82BC4DC4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc4dc8
	goto loc_82BC4DC8;
loc_82BC4DC4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BC4DC8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4DDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bc4dfc
	if (cr6.lt) goto loc_82BC4DFC;
	// stw r16,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r16.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82BC4DFC;
	sub_825952B8(ctx, base);
loc_82BC4DFC:
	// stw r26,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// stb r29,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r29.u8);
	// beq cr6,0x82bc4f6c
	if (cr6.eq) goto loc_82BC4F6C;
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc4f5c
	if (cr6.eq) goto loc_82BC4F5C;
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// addi r4,r21,-445
	ctx.r4.s64 = ctx.r21.s64 + -445;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x82BC4E38;
	sub_8259CC28(ctx, base);
	// lbzx r11,r24,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82bc4e88
	if (!cr6.lt) goto loc_82BC4E88;
	// bl 0x831156e8
	ctx.lr = 0x82BC4E48;
	sub_831156E8(ctx, base);
	// lbzx r10,r24,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r28.u32);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC4E60:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc4e60
	if (!cr6.eq) goto loc_82BC4E60;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC4E84;
	sub_8259CC28(ctx, base);
	// b 0x82bc4f1c
	goto loc_82BC4F1C;
loc_82BC4E88:
	// lbz r31,14(r24)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r24.u32 + 14);
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(ctx.r31.s32, 6, xer);
	// bge cr6,0x82bc4f10
	if (!cr6.lt) goto loc_82BC4F10;
	// addi r4,r21,-414
	ctx.r4.s64 = ctx.r21.s64 + -414;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82BC4EA0;
	sub_837B0C10(ctx, base);
	// addi r4,r21,-413
	ctx.r4.s64 = ctx.r21.s64 + -413;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82BC4EAC;
	sub_837B0C10(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d04220
	ctx.lr = 0x82BC4EB8;
	sub_82D04220(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwzx r4,r11,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// bl 0x82d04220
	ctx.lr = 0x82BC4EC8;
	sub_82D04220(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82bc4edc
	if (!cr6.lt) goto loc_82BC4EDC;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
loc_82BC4EDC:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bc4ef0
	if (!cr6.lt) goto loc_82BC4EF0;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
loc_82BC4EF0:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x82BC4EFC;
	sub_82D042A8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82BC4F04;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82BC4F0C;
	sub_8387E8E0(ctx, base);
	// b 0x82bc4f1c
	goto loc_82BC4F1C;
loc_82BC4F10:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d04220
	ctx.lr = 0x82BC4F1C;
	sub_82D04220(ctx, base);
loc_82BC4F1C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BC4F30;
	sub_82D291E0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc4f4c
	if (cr6.lt) goto loc_82BC4F4C;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82BC4F4C;
	sub_825952B8(ctx, base);
loc_82BC4F4C:
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// b 0x82bc4f6c
	goto loc_82BC4F6C;
loc_82BC4F5C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC4F6C;
	sub_82D2AEC8(ctx, base);
loc_82BC4F6C:
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC4F74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc4f74
	if (!cr6.eq) goto loc_82BC4F74;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC4F98;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x82BC4FA8;
	sub_82AB6970(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc4fbc
	if (cr6.lt) goto loc_82BC4FBC;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc4fc0
	goto loc_82BC4FC0;
loc_82BC4FBC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BC4FC0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4FD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,340(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bc4ff4
	if (cr6.lt) goto loc_82BC4FF4;
	// stw r16,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r16.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x82BC4FF4;
	sub_825952B8(ctx, base);
loc_82BC4FF4:
	// stw r26,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r29,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r29.u32);
	// stb r29,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r29.u8);
	// beq cr6,0x82bc5034
	if (cr6.eq) goto loc_82BC5034;
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc5028
	if (cr6.eq) goto loc_82BC5028;
	// add r11,r24,r28
	ctx.r11.u64 = ctx.r24.u64 + ctx.r28.u64;
	// lbz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// bl 0x82d294d0
	ctx.lr = 0x82BC5024;
	sub_82D294D0(ctx, base);
	// b 0x82bc5034
	goto loc_82BC5034;
loc_82BC5028:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC5034;
	sub_82D2AEC8(ctx, base);
loc_82BC5034:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc5050
	if (cr6.lt) goto loc_82BC5050;
	// stw r16,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r16.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BC5050;
	sub_825952B8(ctx, base);
loc_82BC5050:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r30,532(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// blt cr6,0x82bc4c78
	if (cr6.lt) goto loc_82BC4C78;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// lwz r31,124(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
loc_82BC5084:
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// cmplw cr6,r15,r28
	cr6.compare<uint32_t>(ctx.r15.u32, ctx.r28.u32, xer);
	// blt cr6,0x82bc4c40
	if (cr6.lt) goto loc_82BC4C40;
loc_82BC5090:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// stb r11,121(r30)
	PPC_STORE_U8(ctx.r30.u32 + 121, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BC50AC;
	sub_82D2B608(ctx, base);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82bc50c4
	if (cr6.eq) goto loc_82BC50C4;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82BC50C4;
	sub_825952B8(ctx, base);
loc_82BC50C4:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC50CC"))) PPC_WEAK_FUNC(sub_82BC50CC);
PPC_FUNC_IMPL(__imp__sub_82BC50CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC50D0"))) PPC_WEAK_FUNC(sub_82BC50D0);
PPC_FUNC_IMPL(__imp__sub_82BC50D0) {
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
	ctx.lr = 0x82BC50D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r25,2
	ctx.r25.s64 = 2;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82bc5130
	if (cr6.gt) goto loc_82BC5130;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bc511c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BC511C;
	// bdzf 4*cr6+eq,0x82bc511c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BC511C;
	// bdzf 4*cr6+eq,0x82bc5124
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BC5124;
	// bne cr6,0x82bc512c
	if (!cr6.eq) goto loc_82BC512C;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// b 0x82bc5130
	goto loc_82BC5130;
loc_82BC511C:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82bc5130
	goto loc_82BC5130;
loc_82BC5124:
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x82bc5130
	goto loc_82BC5130;
loc_82BC512C:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82BC5130:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC5138;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BC5140;
	sub_82D33DB0(ctx, base);
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r4,r11,29090
	ctx.r4.s64 = ctx.r11.s64 + 29090;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82BC5164;
	sub_8259CC28(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r26,r11,23336
	ctx.r26.s64 = ctx.r11.s64 + 23336;
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82bc54bc
	if (cr6.gt) goto loc_82BC54BC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bc5480
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BC5480;
	// bdzf 4*cr6+eq,0x82bc5294
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BC5294;
	// bdzf 4*cr6+eq,0x82bc5380
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BC5380;
	// bne cr6,0x82bc546c
	if (!cr6.eq) goto loc_82BC546C;
	// stb r31,122(r29)
	PPC_STORE_U8(ctx.r29.u32 + 122, ctx.r31.u8);
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,384
	ctx.r4.u64 = ctx.r4.u64 | 384;
	// bl 0x82d04220
	ctx.lr = 0x82BC51A4;
	sub_82D04220(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// bl 0x837b0c10
	ctx.lr = 0x82BC51B0;
	sub_837B0C10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC51B8;
	sub_82D19A78(ctx, base);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r5,52(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82ab6970
	ctx.lr = 0x82BC51CC;
	sub_82AB6970(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc51e0
	if (cr6.lt) goto loc_82BC51E0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc51e4
	goto loc_82BC51E4;
loc_82BC51E0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BC51E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC51F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x82BC5204;
	sub_8387E8E0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bc521c
	if (cr6.eq) goto loc_82BC521C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC521C;
	sub_82D2AEC8(ctx, base);
loc_82BC521C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC5224;
	sub_82D19A78(ctx, base);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r5,56(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82ab6970
	ctx.lr = 0x82BC5238;
	sub_82AB6970(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc524c
	if (cr6.lt) goto loc_82BC524C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc5250
	goto loc_82BC5250;
loc_82BC524C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BC5250:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC5264;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x82BC5270;
	sub_8387E8E0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bc5288
	if (cr6.eq) goto loc_82BC5288;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC5288;
	sub_82D2AEC8(ctx, base);
loc_82BC5288:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82BC5290;
	sub_8387E8E0(ctx, base);
	// b 0x82bc54bc
	goto loc_82BC54BC;
loc_82BC5294:
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r30,140(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// stw r31,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r31.u32);
	// bl 0x82bc4208
	ctx.lr = 0x82BC52A4;
	sub_82BC4208(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC52B0;
	sub_82D19A78(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BC52B8;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82cd4ba8
	ctx.lr = 0x82BC52D0;
	sub_82CD4BA8(ctx, base);
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r27,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r27.u32);
	// ori r4,r4,651
	ctx.r4.u64 = ctx.r4.u64 | 651;
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r31.u8);
	// bl 0x82d04220
	ctx.lr = 0x82BC52F8;
	sub_82D04220(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// ori r4,r4,652
	ctx.r4.u64 = ctx.r4.u64 | 652;
	// bl 0x82d04220
	ctx.lr = 0x82BC5308;
	sub_82D04220(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bc531c
	if (!cr6.lt) goto loc_82BC531C;
	// addi r6,r1,220
	ctx.r6.s64 = ctx.r1.s64 + 220;
loc_82BC531C:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bc5330
	if (!cr6.lt) goto loc_82BC5330;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
loc_82BC5330:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,634
	ctx.r4.u64 = ctx.r4.u64 | 634;
	// bl 0x82d042a8
	ctx.lr = 0x82BC5340;
	sub_82D042A8(ctx, base);
	// addi r30,r1,248
	ctx.r30.s64 = ctx.r1.s64 + 248;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82BC5348:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc5368
	if (cr6.lt) goto loc_82BC5368;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BC5368;
	sub_825952B8(ctx, base);
loc_82BC5368:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x82bc5348
	if (!cr0.lt) goto loc_82BC5348;
	// b 0x82bc54bc
	goto loc_82BC54BC;
loc_82BC5380:
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r30,140(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// stw r25,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r25.u32);
	// bl 0x82bc4208
	ctx.lr = 0x82BC5390;
	sub_82BC4208(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC539C;
	sub_82D19A78(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BC53A4;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82cd4ba8
	ctx.lr = 0x82BC53BC;
	sub_82CD4BA8(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// ori r4,r4,651
	ctx.r4.u64 = ctx.r4.u64 | 651;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stb r31,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r31.u8);
	// bl 0x82d04220
	ctx.lr = 0x82BC53E4;
	sub_82D04220(ctx, base);
	// lis r4,642
	ctx.r4.s64 = 42074112;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// ori r4,r4,149
	ctx.r4.u64 = ctx.r4.u64 | 149;
	// bl 0x82d04220
	ctx.lr = 0x82BC53F4;
	sub_82D04220(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bc5408
	if (!cr6.lt) goto loc_82BC5408;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
loc_82BC5408:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bc541c
	if (!cr6.lt) goto loc_82BC541C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82BC541C:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,634
	ctx.r4.u64 = ctx.r4.u64 | 634;
	// bl 0x82d042a8
	ctx.lr = 0x82BC542C;
	sub_82D042A8(ctx, base);
	// addi r30,r1,184
	ctx.r30.s64 = ctx.r1.s64 + 184;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82BC5434:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc5454
	if (cr6.lt) goto loc_82BC5454;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BC5454;
	sub_825952B8(ctx, base);
loc_82BC5454:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x82bc5434
	if (!cr0.lt) goto loc_82BC5434;
	// b 0x82bc54bc
	goto loc_82BC54BC;
loc_82BC546C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc4b70
	ctx.lr = 0x82BC5474;
	sub_82BC4B70(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,653
	ctx.r4.u64 = ctx.r4.u64 | 653;
	// b 0x82bc54b4
	goto loc_82BC54B4;
loc_82BC5480:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bc4208
	ctx.lr = 0x82BC5488;
	sub_82BC4208(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC5494;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BC549C;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82cd4040
	ctx.lr = 0x82BC54AC;
	sub_82CD4040(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,644
	ctx.r4.u64 = ctx.r4.u64 | 644;
loc_82BC54B4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04220
	ctx.lr = 0x82BC54BC;
	sub_82D04220(ctx, base);
loc_82BC54BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC54C4;
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
	ctx.lr = 0x82BC54DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc5510
	if (cr6.eq) goto loc_82BC5510;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d2fde0
	ctx.lr = 0x82BC54F4;
	sub_82D2FDE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2fe58
	ctx.lr = 0x82BC54FC;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc5510
	if (cr6.eq) goto loc_82BC5510;
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r4,122(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 122);
	// bl 0x82d2aec8
	ctx.lr = 0x82BC5510;
	sub_82D2AEC8(ctx, base);
loc_82BC5510:
	// lbz r11,122(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 122);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r8,r25
	ctx.r5.u64 = ctx.r8.u64 & ctx.r25.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC552C;
	sub_82D19788(ctx, base);
	// lbz r7,122(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 122);
	// li r4,7
	ctx.r4.s64 = 7;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 & ctx.r25.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC5548;
	sub_82D19788(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC5550;
	sub_82D19A78(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,136(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lis r9,-31761
	ctx.r9.s64 = -2081488896;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r8,r9,23680
	ctx.r8.s64 = ctx.r9.s64 + 23680;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC5578;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc5594
	if (cr6.lt) goto loc_82BC5594;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BC5594;
	sub_825952B8(ctx, base);
loc_82BC5594:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC559C"))) PPC_WEAK_FUNC(sub_82BC559C);
PPC_FUNC_IMPL(__imp__sub_82BC559C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC55A0"))) PPC_WEAK_FUNC(sub_82BC55A0);
PPC_FUNC_IMPL(__imp__sub_82BC55A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC55A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC55C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x82bc564c
	if (!cr6.eq) goto loc_82BC564C;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// bge cr6,0x82bc564c
	if (!cr6.lt) goto loc_82BC564C;
	// lbz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r11,r11,29440
	ctx.r11.s64 = ctx.r11.s64 + 29440;
	// bne cr6,0x82bc55f8
	if (!cr6.eq) goto loc_82BC55F8;
	// lbz r10,133(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 133);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bc560c
	if (cr6.eq) goto loc_82BC560C;
loc_82BC55F8:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
loc_82BC560C:
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r7,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r5,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r5.u32);
	// lbzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// subfic r11,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r4.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 & ctx.r6.u64;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// bl 0x82bc50d0
	ctx.lr = 0x82BC564C;
	sub_82BC50D0(ctx, base);
loc_82BC564C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC5654"))) PPC_WEAK_FUNC(sub_82BC5654);
PPC_FUNC_IMPL(__imp__sub_82BC5654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5658"))) PPC_WEAK_FUNC(sub_82BC5658);
PPC_FUNC_IMPL(__imp__sub_82BC5658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// bne 0x82bc5678
	if (!cr0.eq) goto loc_82BC5678;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
loc_82BC5678:
	// b 0x82bc50d0
	sub_82BC50D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC567C"))) PPC_WEAK_FUNC(sub_82BC567C);
PPC_FUNC_IMPL(__imp__sub_82BC567C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC5680"))) PPC_WEAK_FUNC(sub_82BC5680);
PPC_FUNC_IMPL(__imp__sub_82BC5680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x82bc56a4
	if (!cr6.eq) goto loc_82BC56A4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
loc_82BC56A4:
	// b 0x82bc50d0
	sub_82BC50D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC56A8"))) PPC_WEAK_FUNC(sub_82BC56A8);
PPC_FUNC_IMPL(__imp__sub_82BC56A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC56AC"))) PPC_WEAK_FUNC(sub_82BC56AC);
PPC_FUNC_IMPL(__imp__sub_82BC56AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC56B0"))) PPC_WEAK_FUNC(sub_82BC56B0);
PPC_FUNC_IMPL(__imp__sub_82BC56B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BC56B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,23428
	ctx.r30.s64 = ctx.r11.s64 + 23428;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r6,-4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82BC56D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc56d8
	if (!cr6.eq) goto loc_82BC56D8;
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
	ctx.lr = 0x82BC5704;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bc5780
	if (!cr6.eq) goto loc_82BC5780;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82bc5868
	if (!cr6.eq) goto loc_82BC5868;
	// bl 0x831156e8
	ctx.lr = 0x82BC5718;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 131072;
	// addi r31,r31,-19992
	ctx.r31.s64 = ctx.r31.s64 + -19992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312e340
	ctx.lr = 0x82BC572C;
	sub_8312E340(ctx, base);
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x82bc49c8
	ctx.lr = 0x82BC5734;
	sub_82BC49C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x831314e0
	ctx.lr = 0x82BC5740;
	sub_831314E0(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82BC5754;
	sub_82D2EE48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc5868
	if (cr6.eq) goto loc_82BC5868;
	// lis r4,249
	ctx.r4.s64 = 16318464;
	// ori r4,r4,36
	ctx.r4.u64 = ctx.r4.u64 | 36;
	// bl 0x82d2ada8
	ctx.lr = 0x82BC576C;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82BC5778;
	sub_83103100(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BC5780:
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82BC5788:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc5788
	if (!cr6.eq) goto loc_82BC5788;
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
	ctx.lr = 0x82BC57B4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bc5868
	if (!cr6.eq) goto loc_82BC5868;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r31.u32);
	// bl 0x8307fa80
	ctx.lr = 0x82BC57C8;
	sub_8307FA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82BC57D4;
	sub_83103100(ctx, base);
	// stb r31,132(r29)
	PPC_STORE_U8(ctx.r29.u32 + 132, ctx.r31.u8);
	// stb r31,133(r29)
	PPC_STORE_U8(ctx.r29.u32 + 133, ctx.r31.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc50d0
	ctx.lr = 0x82BC57E4;
	sub_82BC50D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC57EC;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BC57F4;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc5848
	if (cr6.eq) goto loc_82BC5848;
	// bl 0x82d33c10
	ctx.lr = 0x82BC5804;
	sub_82D33C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc5848
	if (cr6.eq) goto loc_82BC5848;
loc_82BC5810:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BC581C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc583c
	if (cr6.eq) goto loc_82BC583C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bc583c
	if (cr6.eq) goto loc_82BC583C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82BC583C;
	sub_82D2B608(ctx, base);
loc_82BC583C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x82bc5810
	if (cr6.lt) goto loc_82BC5810;
loc_82BC5848:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82BC5858;
	sub_82D1EAC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC5868;
	sub_82D19788(ctx, base);
loc_82BC5868:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC5870"))) PPC_WEAK_FUNC(sub_82BC5870);
PPC_FUNC_IMPL(__imp__sub_82BC5870) {
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
	// ori r10,r10,4199
	ctx.r10.u64 = ctx.r10.u64 | 4199;
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
	ctx.lr = 0x82BC58A8;
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

__attribute__((alias("__imp__sub_82BC58B8"))) PPC_WEAK_FUNC(sub_82BC58B8);
PPC_FUNC_IMPL(__imp__sub_82BC58B8) {
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
	// ori r10,r10,4200
	ctx.r10.u64 = ctx.r10.u64 | 4200;
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
	ctx.lr = 0x82BC58F0;
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

__attribute__((alias("__imp__sub_82BC5900"))) PPC_WEAK_FUNC(sub_82BC5900);
PPC_FUNC_IMPL(__imp__sub_82BC5900) {
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
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82BC591C;
	sub_82D17DA0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r10,r10,4202
	ctx.r10.u64 = ctx.r10.u64 | 4202;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82BC594C;
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

__attribute__((alias("__imp__sub_82BC5960"))) PPC_WEAK_FUNC(sub_82BC5960);
PPC_FUNC_IMPL(__imp__sub_82BC5960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82BC5970:
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// bne cr6,0x82bc5984
	if (!cr6.eq) goto loc_82BC5984;
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// b 0x82bc598c
	goto loc_82BC598C;
loc_82BC5984:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_82BC598C:
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x82bc5970
	if (cr6.lt) goto loc_82BC5970;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC59A8"))) PPC_WEAK_FUNC(sub_82BC59A8);
PPC_FUNC_IMPL(__imp__sub_82BC59A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r9,31
	ctx.r9.s64 = 31;
loc_82BC59B8:
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc59cc
	if (!cr6.eq) goto loc_82BC59CC;
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// b 0x82bc59d4
	goto loc_82BC59D4;
loc_82BC59CC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_82BC59D4:
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x82bc59b8
	if (cr6.lt) goto loc_82BC59B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC59F0"))) PPC_WEAK_FUNC(sub_82BC59F0);
PPC_FUNC_IMPL(__imp__sub_82BC59F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC59F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BC5A04;
	sub_831156E8(ctx, base);
	// bl 0x82f00728
	ctx.lr = 0x82BC5A08;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc5a60
	if (cr6.eq) goto loc_82BC5A60;
	// lwz r29,104(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lbz r30,112(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// bl 0x82f00728
	ctx.lr = 0x82BC5A1C;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// bge cr6,0x82bc5a30
	if (!cr6.lt) goto loc_82BC5A30;
	// addi r11,r30,22129
	ctx.r11.s64 = ctx.r30.s64 + 22129;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r29.u32);
loc_82BC5A30:
	// lwz r30,108(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lbz r31,113(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 113);
	// bl 0x82f00728
	ctx.lr = 0x82BC5A3C;
	sub_82F00728(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x82bc5a64
	if (!cr6.lt) goto loc_82BC5A64;
	// addi r10,r31,22129
	ctx.r10.s64 = ctx.r31.s64 + 22129;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BC5A60:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BC5A64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC5A6C"))) PPC_WEAK_FUNC(sub_82BC5A6C);
PPC_FUNC_IMPL(__imp__sub_82BC5A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5A70"))) PPC_WEAK_FUNC(sub_82BC5A70);
PPC_FUNC_IMPL(__imp__sub_82BC5A70) {
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
	// addi r9,r11,31072
	ctx.r9.s64 = ctx.r11.s64 + 31072;
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
	ctx.lr = 0x82BC5AA8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bc5ac0
	if (cr6.eq) goto loc_82BC5AC0;
	// bl 0x82416268
	ctx.lr = 0x82BC5ABC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC5AC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC5AD8"))) PPC_WEAK_FUNC(sub_82BC5AD8);
PPC_FUNC_IMPL(__imp__sub_82BC5AD8) {
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
	// addi r9,r11,31360
	ctx.r9.s64 = ctx.r11.s64 + 31360;
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
	ctx.lr = 0x82BC5B10;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bc5b28
	if (cr6.eq) goto loc_82BC5B28;
	// bl 0x82416268
	ctx.lr = 0x82BC5B24;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC5B28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC5B40"))) PPC_WEAK_FUNC(sub_82BC5B40);
PPC_FUNC_IMPL(__imp__sub_82BC5B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82BC5B48;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,-1
	ctx.r20.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82BC5B60;
	sub_82D253F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,31360
	ctx.r9.s64 = ctx.r11.s64 + 31360;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// stb r7,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r21,r11,23560
	ctx.r21.s64 = ctx.r11.s64 + 23560;
	// lwz r4,23560(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23560);
	// bl 0x82d20ae0
	ctx.lr = 0x82BC5B94;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82BC5BA4;
	sub_82D23390(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82BC5BA8;
	sub_831156E8(ctx, base);
	// lwz r26,52(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r11,255
	ctx.r11.s64 = 255;
	// addis r7,r26,6
	ctx.r7.s64 = ctx.r26.s64 + 393216;
	// stb r11,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r11.u8);
	// addi r19,r31,112
	ctx.r19.s64 = ctx.r31.s64 + 112;
	// stb r11,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// addi r7,r7,-30316
	ctx.r7.s64 = ctx.r7.s64 + -30316;
	// stb r11,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BC5BD4:
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x82bc5c08
	if (cr6.eq) goto loc_82BC5C08;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x82bc5c20
	if (!cr6.eq) goto loc_82BC5C20;
	// lbz r9,115(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 115);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// bne cr6,0x82bc5c20
	if (!cr6.eq) goto loc_82BC5C20;
	// stb r11,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r11.u8);
	// lbz r11,117(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 117);
	// stb r11,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r11.u8);
	// b 0x82bc5c20
	goto loc_82BC5C20;
loc_82BC5C08:
	// lbz r9,114(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// bne cr6,0x82bc5c20
	if (!cr6.eq) goto loc_82BC5C20;
	// stb r11,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r11.u8);
	// lbz r11,117(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 117);
	// stb r11,0(r19)
	PPC_STORE_U8(ctx.r19.u32 + 0, ctx.r11.u8);
loc_82BC5C20:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82bc5bd4
	if (cr6.lt) goto loc_82BC5BD4;
	// li r28,32
	ctx.r28.s64 = 32;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x82f00728
	ctx.lr = 0x82BC5C48;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc5ca0
	if (cr6.eq) goto loc_82BC5CA0;
	// lbz r30,0(r19)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// bl 0x82f00728
	ctx.lr = 0x82BC5C58;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// bge cr6,0x82bc5c70
	if (!cr6.lt) goto loc_82BC5C70;
	// addi r11,r30,22129
	ctx.r11.s64 = ctx.r30.s64 + 22129;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82bc5c74
	goto loc_82BC5C74;
loc_82BC5C70:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82BC5C74:
	// lbz r30,113(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 113);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82f00728
	ctx.lr = 0x82BC5C80;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// bge cr6,0x82bc5c98
	if (!cr6.lt) goto loc_82BC5C98;
	// addi r11,r30,22129
	ctx.r11.s64 = ctx.r30.s64 + 22129;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82bc5c9c
	goto loc_82BC5C9C;
loc_82BC5C98:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82BC5C9C:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82BC5CA0:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82BC5CA8:
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r11,114(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 114);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82bc5ccc
	if (!cr6.eq) goto loc_82BC5CCC;
	// addi r11,r30,26
	ctx.r11.s64 = ctx.r30.s64 + 26;
	// stb r29,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r29.u8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r28.u32);
	// b 0x82bc5d34
	goto loc_82BC5D34;
loc_82BC5CCC:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82bc5cec
	if (!cr6.eq) goto loc_82BC5CEC;
	// lbz r3,112(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 112);
	// bl 0x831c6650
	ctx.lr = 0x82BC5CE8;
	sub_831C6650(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_82BC5CEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82bc5d08
	if (cr6.lt) goto loc_82BC5D08;
	// addi r11,r30,26
	ctx.r11.s64 = ctx.r30.s64 + 26;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r20,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r20.u32);
	// b 0x82bc5d34
	goto loc_82BC5D34;
loc_82BC5D08:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bc5d24
	if (!cr6.eq) goto loc_82BC5D24;
	// addi r11,r30,26
	ctx.r11.s64 = ctx.r30.s64 + 26;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r20,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r20.u32);
	// b 0x82bc5d34
	goto loc_82BC5D34;
loc_82BC5D24:
	// addi r10,r30,26
	ctx.r10.s64 = ctx.r30.s64 + 26;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u32);
loc_82BC5D34:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x82bc5ca8
	if (cr6.lt) goto loc_82BC5CA8;
	// bl 0x8353b230
	ctx.lr = 0x82BC5D48;
	sub_8353B230(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BC5D4C:
	// slw r10,r29,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// and r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 & ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bc5d6c
	if (!cr6.eq) goto loc_82BC5D6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x82bc5d4c
	if (cr6.lt) goto loc_82BC5D4C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82BC5D6C:
	// lbz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82bc5d80
	if (!cr6.eq) goto loc_82BC5D80;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bc5db8
	goto loc_82BC5DB8;
loc_82BC5D80:
	// bl 0x8353b230
	ctx.lr = 0x82BC5D84;
	sub_8353B230(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BC5D88:
	// slw r10,r29,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// and r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 & ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bc5da8
	if (!cr6.eq) goto loc_82BC5DA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x82bc5d88
	if (cr6.lt) goto loc_82BC5D88;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82BC5DA8:
	// lbz r10,113(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 113);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82bc5de4
	if (!cr6.eq) goto loc_82BC5DE4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BC5DB8:
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82bc5de4
	if (!cr6.eq) goto loc_82BC5DE4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82bc5de4
	if (cr6.eq) goto loc_82BC5DE4;
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
loc_82BC5DE4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82BC5DE8:
	// addi r10,r9,26
	ctx.r10.s64 = ctx.r9.s64 + 26;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x82bc5e24
	if (!cr6.eq) goto loc_82BC5E24;
loc_82BC5E00:
	// clrlwi r8,r27,24
	ctx.r8.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x82bc5e14
	if (cr6.eq) goto loc_82BC5E14;
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
loc_82BC5E14:
	// lwzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x82bc5e00
	if (cr6.eq) goto loc_82BC5E00;
loc_82BC5E24:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82bc5de8
	if (cr6.lt) goto loc_82BC5DE8;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r10,25360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25360);
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// bne cr6,0x82bc5e9c
	if (!cr6.eq) goto loc_82BC5E9C;
	// lbz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82bc5e6c
	if (cr6.eq) goto loc_82BC5E6C;
	// bl 0x831d4788
	ctx.lr = 0x82BC5E58;
	sub_831D4788(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831d4788
	ctx.lr = 0x82BC5E60;
	sub_831D4788(ctx, base);
	// mullw r11,r30,r3
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r3.s32);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
loc_82BC5E6C:
	// lbz r11,115(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 115);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82bc5e9c
	if (cr6.eq) goto loc_82BC5E9C;
loc_82BC5E78:
	// bl 0x831d4788
	ctx.lr = 0x82BC5E7C;
	sub_831D4788(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831d4788
	ctx.lr = 0x82BC5E84;
	sub_831D4788(ctx, base);
	// mullw r11,r30,r3
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r3.s32);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82bc5e78
	if (cr6.eq) goto loc_82BC5E78;
loc_82BC5E9C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r22,27
	ctx.r22.s64 = 27;
	// addi r25,r11,30952
	ctx.r25.s64 = ctx.r11.s64 + 30952;
	// addi r24,r10,-17088
	ctx.r24.s64 = ctx.r10.s64 + -17088;
	// addi r23,r9,31072
	ctx.r23.s64 = ctx.r9.s64 + 31072;
loc_82BC5EBC:
	// lbzx r11,r19,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r29.u32);
	// cntlzw r10,r29
	ctx.r10.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82bc5ed8
	if (cr6.eq) goto loc_82BC5ED8;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82BC5ED8:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r11,r10,26
	ctx.r11.s64 = ctx.r10.s64 + 26;
	// addi r10,r29,26
	ctx.r10.s64 = ctx.r29.s64 + 26;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r28,r9,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r27,r8,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x82595718
	ctx.lr = 0x82BC5F04;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc5f48
	if (cr6.eq) goto loc_82BC5F48;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d253f8
	ctx.lr = 0x82BC5F24;
	sub_82D253F8(ctx, base);
	// stw r27,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r27.u32);
	// stw r28,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r24,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r24.u32);
	// lwz r4,8(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// bl 0x82d23390
	ctx.lr = 0x82BC5F44;
	sub_82D23390(ctx, base);
	// b 0x82bc5f4c
	goto loc_82BC5F4C;
loc_82BC5F48:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BC5F4C:
	// addi r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 + 24;
	// lwz r4,4(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r10,r21,28
	ctx.r10.s64 = ctx.r21.s64 + 28;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r30,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwzx r6,r8,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r5,r7,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// bl 0x82d23900
	ctx.lr = 0x82BC5F78;
	sub_82D23900(ctx, base);
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// clrlwi r29,r6,24
	ctx.r29.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x82bc5ebc
	if (cr6.lt) goto loc_82BC5EBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC5F94"))) PPC_WEAK_FUNC(sub_82BC5F94);
PPC_FUNC_IMPL(__imp__sub_82BC5F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5F98"))) PPC_WEAK_FUNC(sub_82BC5F98);
PPC_FUNC_IMPL(__imp__sub_82BC5F98) {
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
	// blt cr6,0x82bc5fc0
	if (cr6.lt) goto loc_82BC5FC0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc5fc4
	goto loc_82BC5FC4;
loc_82BC5FC0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BC5FC4:
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
	ctx.lr = 0x82BC5FE0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc5ffc
	if (cr6.eq) goto loc_82BC5FFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bc5b40
	ctx.lr = 0x82BC5FF4;
	sub_82BC5B40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bc6000
	if (!cr6.eq) goto loc_82BC6000;
loc_82BC5FFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC6000:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC6018"))) PPC_WEAK_FUNC(sub_82BC6018);
PPC_FUNC_IMPL(__imp__sub_82BC6018) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC6034;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BC603C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc60bc
	if (cr6.eq) goto loc_82BC60BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BC604C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc60bc
	if (cr6.eq) goto loc_82BC60BC;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,23612(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23612);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC6070;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc60bc
	if (cr6.eq) goto loc_82BC60BC;
	// bl 0x831156e8
	ctx.lr = 0x82BC6080;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82BC60A0;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BC60B4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82BC60BC;
	sub_8387E8E0(ctx, base);
loc_82BC60BC:
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

__attribute__((alias("__imp__sub_82BC60D4"))) PPC_WEAK_FUNC(sub_82BC60D4);
PPC_FUNC_IMPL(__imp__sub_82BC60D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC60D8"))) PPC_WEAK_FUNC(sub_82BC60D8);
PPC_FUNC_IMPL(__imp__sub_82BC60D8) {
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
	ctx.lr = 0x82BC60E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// beq cr6,0x82bc62e4
	if (cr6.eq) goto loc_82BC62E4;
	// bl 0x831156e8
	ctx.lr = 0x82BC60F8;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r31,0
	ctx.r31.s64 = 0;
	// addis r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 131072;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r30,r30,-19992
	ctx.r30.s64 = ctx.r30.s64 + -19992;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// bl 0x82b7cb68
	ctx.lr = 0x82BC611C;
	sub_82B7CB68(ctx, base);
loc_82BC611C:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bc6158
	if (cr6.eq) goto loc_82BC6158;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82bb6500
	ctx.lr = 0x82BC6158;
	sub_82BB6500(ctx, base);
loc_82BC6158:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x82bc611c
	if (cr6.lt) goto loc_82BC611C;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831c3b88
	ctx.lr = 0x82BC6174;
	sub_831C3B88(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r8,61
	ctx.r8.s64 = 3997696;
	// addi r30,r11,23644
	ctx.r30.s64 = ctx.r11.s64 + 23644;
	// ori r11,r8,116
	ctx.r11.u64 = ctx.r8.u64 | 116;
	// lis r7,61
	ctx.r7.s64 = 3997696;
	// lis r6,24
	ctx.r6.s64 = 1572864;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r5,24
	ctx.r5.s64 = 1572864;
	// lis r4,61
	ctx.r4.s64 = 3997696;
	// lwz r10,-16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// ori r8,r7,86
	ctx.r8.u64 = ctx.r7.u64 | 86;
	// lwz r9,-12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// ori r7,r6,157
	ctx.r7.u64 = ctx.r6.u64 | 157;
	// lis r3,61
	ctx.r3.s64 = 3997696;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// ori r6,r5,158
	ctx.r6.u64 = ctx.r5.u64 | 158;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// ori r5,r4,124
	ctx.r5.u64 = ctx.r4.u64 | 124;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// ori r4,r3,78
	ctx.r4.u64 = ctx.r3.u64 | 78;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r29,r1,100
	ctx.r29.s64 = ctx.r1.s64 + 100;
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lwz r11,-20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82BC61E4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r31,-4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x82d19a78
	ctx.lr = 0x82BC61F0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82BC61FC;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc6258
	if (cr6.eq) goto loc_82BC6258;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// lwz r4,-28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC6220;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc6230
	if (cr6.eq) goto loc_82BC6230;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82BC6230;
	sub_82D29598(ctx, base);
loc_82BC6230:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC6248;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc6258
	if (cr6.eq) goto loc_82BC6258;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d29598
	ctx.lr = 0x82BC6258;
	sub_82D29598(ctx, base);
loc_82BC6258:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x82bc61e4
	if (!cr0.eq) goto loc_82BC61E4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC626C;
	sub_82D19A78(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bc62c8
	if (cr6.eq) goto loc_82BC62C8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83815d38
	ctx.lr = 0x82BC6284;
	sub_83815D38(ctx, base);
	// lbz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 172);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bc62b4
	if (cr6.eq) goto loc_82BC62B4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x82BC629C;
	sub_83815B68(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x82BC62A8;
	sub_83815B68(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x82BC62B4;
	sub_83815B68(ctx, base);
loc_82BC62B4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838153c8
	ctx.lr = 0x82BC62C0;
	sub_838153C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815cb8
	ctx.lr = 0x82BC62C8;
	sub_83815CB8(ctx, base);
loc_82BC62C8:
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bc62e4
	if (cr6.eq) goto loc_82BC62E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BC62E4;
	sub_825952B8(ctx, base);
loc_82BC62E4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC62EC"))) PPC_WEAK_FUNC(sub_82BC62EC);
PPC_FUNC_IMPL(__imp__sub_82BC62EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC62F0"))) PPC_WEAK_FUNC(sub_82BC62F0);
PPC_FUNC_IMPL(__imp__sub_82BC62F0) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// beq cr6,0x82bc6348
	if (cr6.eq) goto loc_82BC6348;
	// bl 0x82d19a68
	ctx.lr = 0x82BC6314;
	sub_82D19A68(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,23584
	ctx.r10.s64 = ctx.r11.s64 + 23584;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC6334;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6018
	ctx.lr = 0x82BC633C;
	sub_82BC6018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc60d8
	ctx.lr = 0x82BC6344;
	sub_82BC60D8(ctx, base);
	// b 0x82bc6368
	goto loc_82BC6368;
loc_82BC6348:
	// bl 0x82d19a68
	ctx.lr = 0x82BC634C;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,23584(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23584);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC6368;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BC6368:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC6378;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC6388;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,69
	ctx.r5.s64 = 4521984;
	// li r4,6
	ctx.r4.s64 = 6;
	// ori r5,r5,9
	ctx.r5.u64 = ctx.r5.u64 | 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC63A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC63B8;
	sub_82D19788(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,69
	ctx.r5.s64 = 4521984;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC63D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d26640
	ctx.lr = 0x82BC63DC;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82BC63E0;
	sub_82D25AB8(ctx, base);
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

__attribute__((alias("__imp__sub_82BC63F8"))) PPC_WEAK_FUNC(sub_82BC63F8);
PPC_FUNC_IMPL(__imp__sub_82BC63F8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82bc64c8
	if (!cr6.eq) goto loc_82BC64C8;
	// bl 0x82d19a78
	ctx.lr = 0x82BC6424;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BC642C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc6504
	if (cr6.eq) goto loc_82BC6504;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BC643C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc6504
	if (cr6.eq) goto loc_82BC6504;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,23640(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23640);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC6460;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc6504
	if (cr6.eq) goto loc_82BC6504;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82bc648c
	if (!cr6.eq) goto loc_82BC648C;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// bne cr6,0x82bc6484
	if (!cr6.eq) goto loc_82BC6484;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82bc64c0
	goto loc_82BC64C0;
loc_82BC6484:
	// li r31,31
	ctx.r31.s64 = 31;
	// b 0x82bc64c0
	goto loc_82BC64C0;
loc_82BC648C:
	// cmplwi cr6,r31,31
	cr6.compare<uint32_t>(ctx.r31.u32, 31, xer);
	// bne cr6,0x82bc64a8
	if (!cr6.eq) goto loc_82BC64A8;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r10,30
	ctx.r10.s64 = 30;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r10
	ctx.r31.u64 = ctx.r7.u64 & ctx.r10.u64;
	// b 0x82bc64c0
	goto loc_82BC64C0;
loc_82BC64A8:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82bc64b8
	if (!cr6.gt) goto loc_82BC64B8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82bc64c0
	goto loc_82BC64C0;
loc_82BC64B8:
	// bge cr6,0x82bc64c0
	if (!cr6.lt) goto loc_82BC64C0;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82BC64C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82BC64C8;
	sub_82D3B298(ctx, base);
loc_82BC64C8:
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc60d8
	ctx.lr = 0x82BC64D4;
	sub_82BC60D8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,4201
	ctx.r8.u64 = ctx.r10.u64 | 4201;
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103068
	ctx.lr = 0x82BC6504;
	sub_83103068(ctx, base);
loc_82BC6504:
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

__attribute__((alias("__imp__sub_82BC651C"))) PPC_WEAK_FUNC(sub_82BC651C);
PPC_FUNC_IMPL(__imp__sub_82BC651C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC6520"))) PPC_WEAK_FUNC(sub_82BC6520);
PPC_FUNC_IMPL(__imp__sub_82BC6520) {
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
	// bne cr6,0x82bc6548
	if (!cr6.eq) goto loc_82BC6548;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x82bc654c
	goto loc_82BC654C;
loc_82BC6548:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82BC654C:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bc656c
	if (!cr6.eq) goto loc_82BC656C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc59a8
	ctx.lr = 0x82BC656C;
	sub_82BC59A8(ctx, base);
loc_82BC656C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6018
	ctx.lr = 0x82BC6574;
	sub_82BC6018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc60d8
	ctx.lr = 0x82BC657C;
	sub_82BC60D8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,4201
	ctx.r8.u64 = ctx.r10.u64 | 4201;
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
	ctx.lr = 0x82BC65AC;
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

__attribute__((alias("__imp__sub_82BC65C0"))) PPC_WEAK_FUNC(sub_82BC65C0);
PPC_FUNC_IMPL(__imp__sub_82BC65C0) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// bne cr6,0x82bc65f0
	if (!cr6.eq) goto loc_82BC65F0;
	// stw r30,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// b 0x82bc65f8
	goto loc_82BC65F8;
loc_82BC65F0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82BC65F8:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bc6614
	if (!cr6.eq) goto loc_82BC6614;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5960
	ctx.lr = 0x82BC6614;
	sub_82BC5960(ctx, base);
loc_82BC6614:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6018
	ctx.lr = 0x82BC661C;
	sub_82BC6018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc60d8
	ctx.lr = 0x82BC6624;
	sub_82BC60D8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// ori r8,r10,4201
	ctx.r8.u64 = ctx.r10.u64 | 4201;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82BC6650;
	sub_83103068(ctx, base);
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

__attribute__((alias("__imp__sub_82BC6668"))) PPC_WEAK_FUNC(sub_82BC6668);
PPC_FUNC_IMPL(__imp__sub_82BC6668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82BC6670;
	__savegprlr_23(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BC667C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r3,r3,-19992
	ctx.r3.s64 = ctx.r3.s64 + -19992;
	// bl 0x8312e7e8
	ctx.lr = 0x82BC6694;
	sub_8312E7E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82bc2000
	ctx.lr = 0x82BC66A0;
	sub_82BC2000(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x83131178
	ctx.lr = 0x82BC66AC;
	sub_83131178(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x8312e948
	ctx.lr = 0x82BC66B8;
	sub_8312E948(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8312e948
	ctx.lr = 0x82BC66CC;
	sub_8312E948(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x8312e948
	ctx.lr = 0x82BC66E4;
	sub_8312E948(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// bl 0x8312e948
	ctx.lr = 0x82BC66FC;
	sub_8312E948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BC6704;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r28,r11,23600
	ctx.r28.s64 = ctx.r11.s64 + 23600;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC6724;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r24,15
	ctx.r24.s64 = 15;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc679c
	if (cr6.eq) goto loc_82BC679C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,30355
	ctx.r4.s64 = ctx.r11.s64 + 30355;
	// bl 0x837b0c10
	ctx.lr = 0x82BC674C;
	sub_837B0C10(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,643
	ctx.r4.u64 = ctx.r4.u64 | 643;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x82BC6760;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BC6774;
	sub_82D291E0(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc6790
	if (cr6.lt) goto loc_82BC6790;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82BC6790;
	sub_825952B8(ctx, base);
loc_82BC6790:
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
loc_82BC679C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// addi r25,r11,15320
	ctx.r25.s64 = ctx.r11.s64 + 15320;
loc_82BC67AC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82a8c428
	ctx.lr = 0x82BC67BC;
	sub_82A8C428(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82473550
	ctx.lr = 0x82BC67C8;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82474170
	ctx.lr = 0x82BC67D0;
	sub_82474170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BC67D8;
	sub_82D19A68(ctx, base);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a79bf8
	ctx.lr = 0x82BC67E8;
	sub_82A79BF8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bc67fc
	if (!cr6.lt) goto loc_82BC67FC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82BC67FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC6810;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bc6828
	if (cr6.lt) goto loc_82BC6828;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x82BC6828;
	sub_82416268(ctx, base);
loc_82BC6828:
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// beq cr6,0x82bc6848
	if (cr6.eq) goto loc_82BC6848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82d294d0
	ctx.lr = 0x82BC6848;
	sub_82D294D0(ctx, base);
loc_82BC6848:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82a79160
	ctx.lr = 0x82BC6850;
	sub_82A79160(ctx, base);
	// stw r25,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r25.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x831ccf00
	ctx.lr = 0x82BC685C;
	sub_831CCF00(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x82bc67ac
	if (cr6.lt) goto loc_82BC67AC;
	// lwz r4,488(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bc6884
	if (cr6.eq) goto loc_82BC6884;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82BC6884;
	sub_825952B8(ctx, base);
loc_82BC6884:
	// lwz r4,360(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// stw r26,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r26.u32);
	// stw r26,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r26.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r26,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r26.u32);
	// beq cr6,0x82bc68a8
	if (cr6.eq) goto loc_82BC68A8;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82BC68A8;
	sub_825952B8(ctx, base);
loc_82BC68A8:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC68B0"))) PPC_WEAK_FUNC(sub_82BC68B0);
PPC_FUNC_IMPL(__imp__sub_82BC68B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82BC68B8;
	__savegprlr_14(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BC68C4;
	sub_831156E8(ctx, base);
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x831156e8
	ctx.lr = 0x82BC68CC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,108(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 108);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// lwz r4,104(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 104);
	// addi r3,r3,-19992
	ctx.r3.s64 = ctx.r3.s64 + -19992;
	// lwz r18,48(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8312e7e8
	ctx.lr = 0x82BC68E8;
	sub_8312E7E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82bc2000
	ctx.lr = 0x82BC68F4;
	sub_82BC2000(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x83131178
	ctx.lr = 0x82BC6900;
	sub_83131178(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r6,108(r20)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r20.u32 + 108);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 104);
	// bl 0x83130fe8
	ctx.lr = 0x82BC6918;
	sub_83130FE8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BC6928;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82dad028
	ctx.lr = 0x82BC6930;
	sub_82DAD028(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r19,2
	ctx.r19.s64 = 2;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc6eb8
	if (cr6.eq) goto loc_82BC6EB8;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// li r14,12
	ctx.r14.s64 = 12;
	// li r26,15
	ctx.r26.s64 = 15;
	// lis r16,-31777
	ctx.r16.s64 = -2082537472;
	// addi r27,r11,23576
	ctx.r27.s64 = ctx.r11.s64 + 23576;
loc_82BC6964:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BC696C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82BC6978;
	sub_82D2D580(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc6eac
	if (cr6.eq) goto loc_82BC6EAC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r14
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r14.s32);
	// cmplw cr6,r17,r8
	cr6.compare<uint32_t>(ctx.r17.u32, ctx.r8.u32, xer);
	// bge cr6,0x82bc6a14
	if (!cr6.lt) goto loc_82BC6A14;
	// lwz r8,23752(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 23752);
	// add r11,r23,r10
	ctx.r11.u64 = ctx.r23.u64 + ctx.r10.u64;
	// lwzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// rlwinm r7,r8,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3FFF;
	// rlwinm r5,r9,14,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bc69d0
	if (!cr6.eq) goto loc_82BC69D0;
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// clrlwi r5,r9,14
	ctx.r5.u64 = ctx.r9.u32 & 0x3FFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82bc69d4
	if (cr6.eq) goto loc_82BC69D4;
loc_82BC69D0:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82BC69D4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bc6a14
	if (!cr6.eq) goto loc_82BC6A14;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bc6a04
	if (!cr6.eq) goto loc_82BC6A04;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bc6a08
	if (cr6.eq) goto loc_82BC6A08;
loc_82BC6A04:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BC6A08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc6a18
	if (cr6.eq) goto loc_82BC6A18;
loc_82BC6A14:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_82BC6A18:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc6da4
	if (cr6.eq) goto loc_82BC6DA4;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r24,r22,100
	ctx.r24.s64 = ctx.r22.s64 + 100;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82bc6a38
	goto loc_82BC6A38;
loc_82BC6A34:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BC6A38:
	// add r9,r21,r28
	ctx.r9.u64 = ctx.r21.u64 + ctx.r28.u64;
	// lwz r4,60(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// add r11,r23,r10
	ctx.r11.u64 = ctx.r23.u64 + ctx.r10.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lbz r25,8(r7)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r7.u32 + 8);
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// stb r29,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r29.u8);
loc_82BC6A68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc6a68
	if (!cr6.eq) goto loc_82BC6A68;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC6A8C;
	sub_8259CC28(ctx, base);
	// lwz r4,28(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
loc_82BC6AA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc6aa0
	if (!cr6.eq) goto loc_82BC6AA0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC6AC4;
	sub_8259CC28(ctx, base);
	// lwz r4,32(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
loc_82BC6AD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc6ad8
	if (!cr6.eq) goto loc_82BC6AD8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC6AFC;
	sub_8259CC28(ctx, base);
	// addi r31,r27,76
	ctx.r31.s64 = ctx.r27.s64 + 76;
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC6B08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc6b08
	if (!cr6.eq) goto loc_82BC6B08;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82BC6B2C;
	sub_825A1EB8(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82bc6b40
	if (!cr6.lt) goto loc_82BC6B40;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_82BC6B40:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC6B54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc6b84
	if (cr6.eq) goto loc_82BC6B84;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r29,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82bc6b74
	if (cr6.eq) goto loc_82BC6B74;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82BC6B74:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d329f8
	ctx.lr = 0x82BC6B84;
	sub_82D329F8(ctx, base);
loc_82BC6B84:
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC6B8C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc6b8c
	if (!cr6.eq) goto loc_82BC6B8C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82BC6BB0;
	sub_825A1EB8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82bc6bc4
	if (!cr6.lt) goto loc_82BC6BC4;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_82BC6BC4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC6BD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc6c64
	if (cr6.eq) goto loc_82BC6C64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8311c148
	ctx.lr = 0x82BC6BF0;
	sub_8311C148(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r26,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r29,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r29.u8);
loc_82BC6C04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc6c04
	if (!cr6.eq) goto loc_82BC6C04;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC6C28;
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
	ctx.lr = 0x82BC6C3C;
	sub_82D291E0(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc6c58
	if (cr6.lt) goto loc_82BC6C58;
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82BC6C58;
	sub_825952B8(ctx, base);
loc_82BC6C58:
	// stw r26,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// stb r29,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r29.u8);
loc_82BC6C64:
	// addi r11,r27,84
	ctx.r11.s64 = ctx.r27.s64 + 84;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC6C70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc6c70
	if (!cr6.eq) goto loc_82BC6C70;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82BC6C94;
	sub_825A1EB8(ctx, base);
	// lwz r4,72(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC6C9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc6c9c
	if (!cr6.eq) goto loc_82BC6C9C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82BC6CC0;
	sub_825A1EB8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82bc6cd4
	if (!cr6.lt) goto loc_82BC6CD4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82BC6CD4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC6CE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc6cf8
	if (cr6.eq) goto loc_82BC6CF8;
	// clrldi r4,r25,56
	ctx.r4.u64 = ctx.r25.u64 & 0xFF;
	// bl 0x82d294d0
	ctx.lr = 0x82BC6CF8;
	sub_82D294D0(ctx, base);
loc_82BC6CF8:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc6d14
	if (cr6.lt) goto loc_82BC6D14;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BC6D14;
	sub_825952B8(ctx, base);
loc_82BC6D14:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// blt cr6,0x82bc6d3c
	if (cr6.lt) goto loc_82BC6D3C;
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82BC6D3C;
	sub_825952B8(ctx, base);
loc_82BC6D3C:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// blt cr6,0x82bc6d64
	if (cr6.lt) goto loc_82BC6D64;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82BC6D64;
	sub_825952B8(ctx, base);
loc_82BC6D64:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stb r29,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r29.u8);
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// blt cr6,0x82bc6a34
	if (cr6.lt) goto loc_82BC6A34;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,-4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC6D9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r25,164(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// b 0x82bc6ea0
	goto loc_82BC6EA0;
loc_82BC6DA4:
	// addi r31,r27,76
	ctx.r31.s64 = ctx.r27.s64 + 76;
	// addi r28,r22,100
	ctx.r28.s64 = ctx.r22.s64 + 100;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_82BC6DB0:
	// lwz r4,60(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
loc_82BC6DC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc6dc4
	if (!cr6.eq) goto loc_82BC6DC4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC6DE8;
	sub_8259CC28(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC6DF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc6df0
	if (!cr6.eq) goto loc_82BC6DF0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82BC6E14;
	sub_825A1EB8(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82bc6e28
	if (!cr6.lt) goto loc_82BC6E28;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_82BC6E28:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC6E3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc6e50
	if (cr6.eq) goto loc_82BC6E50;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a68740
	ctx.lr = 0x82BC6E50;
	sub_82A68740(ctx, base);
loc_82BC6E50:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc6e6c
	if (cr6.lt) goto loc_82BC6E6C;
	// stw r19,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82BC6E6C;
	sub_825952B8(ctx, base);
loc_82BC6E6C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// bne 0x82bc6db0
	if (!cr0.eq) goto loc_82BC6DB0;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC6EA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BC6EA0:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r21,r21,3
	ctx.r21.s64 = ctx.r21.s64 + 3;
	// addi r23,r23,12
	ctx.r23.s64 = ctx.r23.s64 + 12;
loc_82BC6EAC:
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// cmplw cr6,r15,r25
	cr6.compare<uint32_t>(ctx.r15.u32, ctx.r25.u32, xer);
	// blt cr6,0x82bc6964
	if (cr6.lt) goto loc_82BC6964;
loc_82BC6EB8:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bc6ed0
	if (cr6.eq) goto loc_82BC6ED0;
	// stw r19,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x825952b8
	ctx.lr = 0x82BC6ED0;
	sub_825952B8(ctx, base);
loc_82BC6ED0:
	// lwz r4,440(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// beq cr6,0x82bc6ef4
	if (cr6.eq) goto loc_82BC6EF4;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82BC6EF4;
	sub_825952B8(ctx, base);
loc_82BC6EF4:
	// lwz r4,312(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// stw r29,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r29.u32);
	// stw r29,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r29.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r29,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r29.u32);
	// beq cr6,0x82bc6f18
	if (cr6.eq) goto loc_82BC6F18;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82BC6F18;
	sub_825952B8(ctx, base);
loc_82BC6F18:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC6F20"))) PPC_WEAK_FUNC(sub_82BC6F20);
PPC_FUNC_IMPL(__imp__sub_82BC6F20) {
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
	// bl 0x82bc6668
	ctx.lr = 0x82BC6F38;
	sub_82BC6668(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68b0
	ctx.lr = 0x82BC6F40;
	sub_82BC68B0(ctx, base);
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

__attribute__((alias("__imp__sub_82BC6F58"))) PPC_WEAK_FUNC(sub_82BC6F58);
PPC_FUNC_IMPL(__imp__sub_82BC6F58) {
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
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bge cr6,0x82bc6fb0
	if (!cr6.lt) goto loc_82BC6FB0;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addi r10,r4,26
	ctx.r10.s64 = ctx.r4.s64 + 26;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwzx r11,r7,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc6fa0
	if (cr6.eq) goto loc_82BC6FA0;
	// stw r5,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r5.u32);
loc_82BC6FA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6668
	ctx.lr = 0x82BC6FA8;
	sub_82BC6668(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68b0
	ctx.lr = 0x82BC6FB0;
	sub_82BC68B0(ctx, base);
loc_82BC6FB0:
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

__attribute__((alias("__imp__sub_82BC6FC4"))) PPC_WEAK_FUNC(sub_82BC6FC4);
PPC_FUNC_IMPL(__imp__sub_82BC6FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC6FC8"))) PPC_WEAK_FUNC(sub_82BC6FC8);
PPC_FUNC_IMPL(__imp__sub_82BC6FC8) {
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
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
loc_82BC6FEC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bc700c
	if (cr6.eq) goto loc_82BC700C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x82bc6fec
	if (cr6.lt) goto loc_82BC6FEC;
	// b 0x82bc7158
	goto loc_82BC7158;
loc_82BC700C:
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// bge cr6,0x82bc7158
	if (!cr6.lt) goto loc_82BC7158;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc7158
	if (cr6.eq) goto loc_82BC7158;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addis r10,r10,-264
	ctx.r10.s64 = ctx.r10.s64 + -17301504;
	// addi r10,r10,-4199
	ctx.r10.s64 = ctx.r10.s64 + -4199;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x82bc7158
	if (cr6.gt) goto loc_82BC7158;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bc70e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BC70E8;
	// bdzf 4*cr6+eq,0x82bc7108
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BC7108;
	// bne cr6,0x82bc711c
	if (!cr6.eq) goto loc_82BC711C;
	// bl 0x825d8390
	ctx.lr = 0x82BC7054;
	sub_825D8390(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 112);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x82bc7158
	if (!cr6.eq) goto loc_82BC7158;
	// bl 0x831156e8
	ctx.lr = 0x82BC7068;
	sub_831156E8(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// ori r11,r11,35289
	ctx.r11.u64 = ctx.r11.u64 | 35289;
	// beq cr6,0x82bc708c
	if (cr6.eq) goto loc_82BC708C;
	// lbz r8,114(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
loc_82BC708C:
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// beq cr6,0x82bc70a4
	if (cr6.eq) goto loc_82BC70A4;
	// lbz r10,115(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 115);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stbx r8,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u8);
loc_82BC70A4:
	// bl 0x82f00728
	ctx.lr = 0x82BC70A8;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc70d8
	if (cr6.eq) goto loc_82BC70D8;
	// lwz r30,104(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82f00728
	ctx.lr = 0x82BC70B8;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22996
	ctx.r10.u64 = ctx.r11.u64 | 22996;
	// stwx r30,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r30,108(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82f00728
	ctx.lr = 0x82BC70CC;
	sub_82F00728(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,23000
	ctx.r8.u64 = ctx.r9.u64 | 23000;
	// stwx r30,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r30.u32);
loc_82BC70D8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,30980
	ctx.r11.s64 = ctx.r11.s64 + 30980;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// b 0x82bc714c
	goto loc_82BC714C;
loc_82BC70E8:
	// bl 0x825d8390
	ctx.lr = 0x82BC70EC;
	sub_825D8390(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 112);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x82bc7158
	if (!cr6.eq) goto loc_82BC7158;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,30980
	ctx.r5.s64 = ctx.r11.s64 + 30980;
	// b 0x82bc714c
	goto loc_82BC714C;
loc_82BC7108:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f58
	ctx.lr = 0x82BC7118;
	sub_82BC6F58(ctx, base);
	// b 0x82bc7158
	goto loc_82BC7158;
loc_82BC711C:
	// addi r11,r30,26
	ctx.r11.s64 = ctx.r30.s64 + 26;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r30,r31
	ctx.r8.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r11,2940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2940, ctx.r11.u32);
	// lbz r30,112(r8)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + 112);
	// bl 0x8311e3d0
	ctx.lr = 0x82BC713C;
	sub_8311E3D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8311d8c0
	ctx.lr = 0x82BC7144;
	sub_8311D8C0(ctx, base);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lwz r5,23668(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 23668);
loc_82BC714C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BC7158;
	sub_82D20DA8(ctx, base);
loc_82BC7158:
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

__attribute__((alias("__imp__sub_82BC7174"))) PPC_WEAK_FUNC(sub_82BC7174);
PPC_FUNC_IMPL(__imp__sub_82BC7174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC7178"))) PPC_WEAK_FUNC(sub_82BC7178);
PPC_FUNC_IMPL(__imp__sub_82BC7178) {
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
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,32192
	ctx.r9.s64 = ctx.r11.s64 + 32192;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// bl 0x82f00728
	ctx.lr = 0x82BC71A8;
	sub_82F00728(ctx, base);
	// addis r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 65536;
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// addi r7,r7,19016
	ctx.r7.s64 = ctx.r7.s64 + 19016;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,23892(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23892);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwimi r5,r11,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lwz r11,23892(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23892);
	// rlwimi r4,r11,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// bl 0x82d25548
	ctx.lr = 0x82BC71DC;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_82BC71F0"))) PPC_WEAK_FUNC(sub_82BC71F0);
PPC_FUNC_IMPL(__imp__sub_82BC71F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BC71F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82bc72a8
	if (!cr6.eq) goto loc_82BC72A8;
	// bl 0x831156e8
	ctx.lr = 0x82BC720C;
	sub_831156E8(ctx, base);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// rlwinm r9,r10,0,16,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE00;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bc7294
	if (cr6.eq) goto loc_82BC7294;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r30,328
	ctx.r30.s64 = 328;
	// addi r27,r10,23892
	ctx.r27.s64 = ctx.r10.s64 + 23892;
loc_82BC7234:
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r9,r10,23,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bc724c
	if (cr6.lt) goto loc_82BC724C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82BC724C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8311bdf0
	ctx.lr = 0x82BC7258;
	sub_8311BDF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc7294
	if (cr6.eq) goto loc_82BC7294;
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82bc7278
	if (cr6.eq) goto loc_82BC7278;
	// oris r11,r11,510
	ctx.r11.u64 = ctx.r11.u64 | 33423360;
	// stw r11,788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 788, ctx.r11.u32);
loc_82BC7278:
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// rlwinm r9,r10,23,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bc7234
	if (cr6.lt) goto loc_82BC7234;
loc_82BC7294:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,32000
	ctx.r5.s64 = ctx.r11.s64 + 32000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BC72A8;
	sub_82D20DA8(ctx, base);
loc_82BC72A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC72B0"))) PPC_WEAK_FUNC(sub_82BC72B0);
PPC_FUNC_IMPL(__imp__sub_82BC72B0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,32032
	ctx.r5.s64 = ctx.r11.s64 + 32032;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BC72D8;
	sub_82D20DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BC72E0;
	sub_82D19BB0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// rlwinm r9,r10,23,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bc7304
	if (!cr6.lt) goto loc_82BC7304;
	// addi r10,r3,82
	ctx.r10.s64 = ctx.r3.s64 + 82;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82bc730c
	goto loc_82BC730C;
loc_82BC7304:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r11,r11,23892
	ctx.r11.s64 = ctx.r11.s64 + 23892;
loc_82BC730C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// bl 0x82d17d80
	ctx.lr = 0x82BC731C;
	sub_82D17D80(ctx, base);
	// bl 0x82f00728
	ctx.lr = 0x82BC7320;
	sub_82F00728(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc7340
	if (cr6.eq) goto loc_82BC7340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BC7334;
	sub_82D19BB0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,19008
	ctx.r10.u64 = ctx.r11.u64 | 19008;
	// stwx r3,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
loc_82BC7340:
	// bl 0x82d26ed8
	ctx.lr = 0x82BC7344;
	sub_82D26ED8(ctx, base);
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x82d26b18
	ctx.lr = 0x82BC734C;
	sub_82D26B18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC7364"))) PPC_WEAK_FUNC(sub_82BC7364);
PPC_FUNC_IMPL(__imp__sub_82BC7364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC7368"))) PPC_WEAK_FUNC(sub_82BC7368);
PPC_FUNC_IMPL(__imp__sub_82BC7368) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82bc7658
	if (cr6.gt) goto loc_82BC7658;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bc7434
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BC7434;
	// bdzf 4*cr6+eq,0x82bc7508
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BC7508;
	// bdzf 4*cr6+eq,0x82bc7570
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BC7570;
	// bne cr6,0x82bc75d8
	if (!cr6.eq) goto loc_82BC75D8;
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
	ctx.lr = 0x82BC73C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC73D0;
	sub_82D19788(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC73F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC7400;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC7410;
	sub_82D19788(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,58
	ctx.r5.u64 = ctx.r5.u64 | 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,96(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BC7430;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82bc7648
	goto loc_82BC7648;
loc_82BC7434:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,478
	ctx.r5.u64 = ctx.r5.u64 | 478;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC7454;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC7464;
	sub_82D19788(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC7484;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC7494;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC74A4;
	sub_82D19788(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,58
	ctx.r5.u64 = ctx.r5.u64 | 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,96(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BC74C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC74D4;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,537
	ctx.r5.u64 = ctx.r5.u64 | 537;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC74F4;
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
loc_82BC7508:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,478
	ctx.r5.u64 = ctx.r5.u64 | 478;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC7528;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC7538;
	sub_82D19788(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,40
	ctx.r5.u64 = ctx.r5.u64 | 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC7558;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC7568;
	sub_82D19788(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82bc763c
	goto loc_82BC763C;
loc_82BC7570:
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
	ctx.lr = 0x82BC7590;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC75A0;
	sub_82D19788(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC75C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC75D0;
	sub_82D19788(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82bc763c
	goto loc_82BC763C;
loc_82BC75D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,58
	ctx.r5.u64 = ctx.r5.u64 | 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC75F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC7608;
	sub_82D19788(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC7628;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC7638;
	sub_82D19788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BC763C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC7648;
	sub_82D19788(ctx, base);
loc_82BC7648:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BC7658;
	sub_82D19788(ctx, base);
loc_82BC7658:
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

__attribute__((alias("__imp__sub_82BC766C"))) PPC_WEAK_FUNC(sub_82BC766C);
PPC_FUNC_IMPL(__imp__sub_82BC766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC7670"))) PPC_WEAK_FUNC(sub_82BC7670);
PPC_FUNC_IMPL(__imp__sub_82BC7670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BC7678;
	__savegprlr_28(ctx, base);
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
	// bl 0x8308e078
	ctx.lr = 0x82BC768C;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82BC76A4;
	sub_82D253F8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r10,32192
	ctx.r8.s64 = ctx.r10.s64 + 32192;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82BC76D4;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r28,r29,221
	ctx.r28.s64 = ctx.r29.s64 + 14483456;
	// addi r28,r28,-26512
	ctx.r28.s64 = ctx.r28.s64 + -26512;
	// bl 0x82f00728
	ctx.lr = 0x82BC76E4;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc7718
	if (cr6.eq) goto loc_82BC7718;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc7718
	if (!cr6.eq) goto loc_82BC7718;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,19008
	ctx.r11.s64 = ctx.r11.s64 + 19008;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82bc7718
	if (cr6.eq) goto loc_82BC7718;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82BC7718:
	// lwz r11,1292(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1292);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8316b780
	ctx.lr = 0x82BC772C;
	sub_8316B780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bf00
	ctx.lr = 0x82BC7738;
	sub_8311BF00(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,23800
	ctx.r30.s64 = ctx.r10.s64 + 23800;
	// lwz r4,23800(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23800);
	// bl 0x82d20ae0
	ctx.lr = 0x82BC7750;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82BC7760;
	sub_82D23390(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7368
	ctx.lr = 0x82BC776C;
	sub_82BC7368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC7778"))) PPC_WEAK_FUNC(sub_82BC7778);
PPC_FUNC_IMPL(__imp__sub_82BC7778) {
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
	// bl 0x82bc7178
	ctx.lr = 0x82BC7798;
	sub_82BC7178(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc77b0
	if (cr6.eq) goto loc_82BC77B0;
	// bl 0x82416268
	ctx.lr = 0x82BC77AC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC77B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC77C8"))) PPC_WEAK_FUNC(sub_82BC77C8);
PPC_FUNC_IMPL(__imp__sub_82BC77C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BC77D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC77E0;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,31992
	ctx.r4.s64 = ctx.r11.s64 + 31992;
	// bl 0x82d2f098
	ctx.lr = 0x82BC77EC;
	sub_82D2F098(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,540(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 540);
	// rlwinm r28,r9,23,25,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x7F;
	// bl 0x82d19bb0
	ctx.lr = 0x82BC7804;
	sub_82D19BB0(ctx, base);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82bc7820
	if (cr6.gt) goto loc_82BC7820;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7368
	ctx.lr = 0x82BC7818;
	sub_82BC7368(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BC7820:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82bc7864
	if (!cr6.lt) goto loc_82BC7864;
	// bl 0x82d19a88
	ctx.lr = 0x82BC7838;
	sub_82D19A88(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82bc7854
	if (!cr6.eq) goto loc_82BC7854;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bc7368
	ctx.lr = 0x82BC784C;
	sub_82BC7368(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BC7854:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bc7368
	ctx.lr = 0x82BC785C;
	sub_82BC7368(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BC7864:
	// bl 0x82d19a88
	ctx.lr = 0x82BC7868;
	sub_82D19A88(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// li r4,3
	ctx.r4.s64 = 3;
	// beq cr6,0x82bc7878
	if (cr6.eq) goto loc_82BC7878;
	// li r4,2
	ctx.r4.s64 = 2;
loc_82BC7878:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7368
	ctx.lr = 0x82BC7880;
	sub_82BC7368(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC7888"))) PPC_WEAK_FUNC(sub_82BC7888);
PPC_FUNC_IMPL(__imp__sub_82BC7888) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82BC78A4;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,32072
	ctx.r4.s64 = ctx.r11.s64 + 32072;
	// bl 0x82d2f098
	ctx.lr = 0x82BC78B0;
	sub_82D2F098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc791c
	if (cr6.eq) goto loc_82BC791C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82bc78f8
	if (cr6.lt) goto loc_82BC78F8;
	// bl 0x82d19ba0
	ctx.lr = 0x82BC78D0;
	sub_82D19BA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82BC78DC;
	sub_82D19A88(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82bc78f0
	if (!cr6.eq) goto loc_82BC78F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bc7918
	goto loc_82BC7918;
loc_82BC78F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82bc7918
	goto loc_82BC7918;
loc_82BC78F8:
	// bl 0x82d19ba0
	ctx.lr = 0x82BC78FC;
	sub_82D19BA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82BC7908;
	sub_82D19A88(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// bne cr6,0x82bc791c
	if (!cr6.eq) goto loc_82BC791C;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC7918:
	// bl 0x82bc7368
	ctx.lr = 0x82BC791C;
	sub_82BC7368(ctx, base);
loc_82BC791C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC7934"))) PPC_WEAK_FUNC(sub_82BC7934);
PPC_FUNC_IMPL(__imp__sub_82BC7934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC7938"))) PPC_WEAK_FUNC(sub_82BC7938);
PPC_FUNC_IMPL(__imp__sub_82BC7938) {
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
	// blt cr6,0x82bc7960
	if (cr6.lt) goto loc_82BC7960;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc7964
	goto loc_82BC7964;
loc_82BC7960:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BC7964:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BC7980;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc799c
	if (cr6.eq) goto loc_82BC799C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bc7670
	ctx.lr = 0x82BC7994;
	sub_82BC7670(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bc79a0
	if (!cr6.eq) goto loc_82BC79A0;
loc_82BC799C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC79A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC79B8"))) PPC_WEAK_FUNC(sub_82BC79B8);
PPC_FUNC_IMPL(__imp__sub_82BC79B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BC79C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC79D4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BC79DC;
	sub_82D33DB0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BC79E4;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc7b3c
	if (cr6.eq) goto loc_82BC7B3C;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r30,r11,32080
	ctx.r30.s64 = ctx.r11.s64 + 32080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC7A14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc7b3c
	if (cr6.eq) goto loc_82BC7B3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC7A38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc7b3c
	if (cr6.eq) goto loc_82BC7B3C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BC7A58;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC7A68;
	sub_82D2AEC8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82BC7A6C;
	sub_831156E8(ctx, base);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bdf0
	ctx.lr = 0x82BC7A78;
	sub_8311BDF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc7b3c
	if (cr6.eq) goto loc_82BC7B3C;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82BC7A90;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BC7AA4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82BC7AAC;
	sub_8387E8E0(ctx, base);
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r5,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r5.u32);
	// beq cr6,0x82bc7ac4
	if (cr6.eq) goto loc_82BC7AC4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82BC7AC4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82BC7AD8;
	sub_82D329F8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,23808(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23808);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC7AF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc7b18
	if (cr6.eq) goto loc_82BC7B18;
	// lwz r11,788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 788);
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
	ctx.lr = 0x82BC7B18;
	sub_82D2AEC8(ctx, base);
loc_82BC7B18:
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// rlwinm r9,r10,23,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bc7b3c
	if (!cr6.lt) goto loc_82BC7B3C;
	// addi r10,r27,82
	ctx.r10.s64 = ctx.r27.s64 + 82;
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82BC7B3C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC7B44"))) PPC_WEAK_FUNC(sub_82BC7B44);
PPC_FUNC_IMPL(__imp__sub_82BC7B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC7B48"))) PPC_WEAK_FUNC(sub_82BC7B48);
PPC_FUNC_IMPL(__imp__sub_82BC7B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC7B50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82BC7B5C;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82bc7d30
	if (cr6.lt) goto loc_82BC7D30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BC7B6C;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82bc7d30
	if (cr6.lt) goto loc_82BC7D30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC7B7C;
	sub_82D19A78(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,32080
	ctx.r30.s64 = ctx.r11.s64 + 32080;
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// bl 0x82d2f098
	ctx.lr = 0x82BC7B8C;
	sub_82D2F098(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82BC7B98;
	sub_82D19BA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82BC7BA4;
	sub_82D19A88(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x82bc7bd4
	if (!cr6.eq) goto loc_82BC7BD4;
	// bl 0x82f00728
	ctx.lr = 0x82BC7BB0;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r9,r11,19008
	ctx.r9.u64 = ctx.r11.u64 | 19008;
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r10,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82BC7BCC;
	sub_82D19858(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BC7BD4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7368
	ctx.lr = 0x82BC7BE0;
	sub_82BC7368(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82bc7c74
	if (!cr6.lt) goto loc_82BC7C74;
	// bl 0x82d19bb0
	ctx.lr = 0x82BC7BF4;
	sub_82D19BB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// bl 0x82d19ba0
	ctx.lr = 0x82BC7C04;
	sub_82D19BA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82BC7C10;
	sub_82D19A88(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BC7C18;
	sub_82D33DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC7C34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d19ba0
	ctx.lr = 0x82BC7C40;
	sub_82D19BA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82BC7C4C;
	sub_82D19A88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BC7C54;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82BC7C64;
	sub_82D2B608(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BC7C6C;
	sub_82D19BB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BC7C74:
	// bl 0x82d19bb0
	ctx.lr = 0x82BC7C78;
	sub_82D19BB0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r9,r10,23892
	ctx.r9.s64 = ctx.r10.s64 + 23892;
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// rlwinm r8,r10,23,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// bge cr6,0x82bc7ca4
	if (!cr6.lt) goto loc_82BC7CA4;
	// addi r10,r3,82
	ctx.r10.s64 = ctx.r3.s64 + 82;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82bc7ca8
	goto loc_82BC7CA8;
loc_82BC7CA4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82BC7CA8:
	// lwz r8,540(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r7,r8,23,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x7F;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// bge cr6,0x82bc7cd0
	if (!cr6.lt) goto loc_82BC7CD0;
	// addi r10,r4,82
	ctx.r10.s64 = ctx.r4.s64 + 82;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82bc7cd4
	goto loc_82BC7CD4;
loc_82BC7CD0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82BC7CD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bc79b8
	ctx.lr = 0x82BC7CE0;
	sub_82BC79B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BC7CE8;
	sub_82D19BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82bc79b8
	ctx.lr = 0x82BC7CF8;
	sub_82BC79B8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d19bb0
	ctx.lr = 0x82BC7D0C;
	sub_82D19BB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82BC7D18;
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
	ctx.lr = 0x82BC7D30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BC7D30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC7D38"))) PPC_WEAK_FUNC(sub_82BC7D38);
PPC_FUNC_IMPL(__imp__sub_82BC7D38) {
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
	// bl 0x82d19ba0
	ctx.lr = 0x82BC7D54;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82bc7e04
	if (cr6.lt) goto loc_82BC7E04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BC7D64;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82bc7e04
	if (cr6.lt) goto loc_82BC7E04;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82bc7dc4
	if (cr6.lt) goto loc_82BC7DC4;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// rlwinm r9,r10,23,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bc7d9c
	if (!cr6.lt) goto loc_82BC7D9C;
	// addi r10,r4,82
	ctx.r10.s64 = ctx.r4.s64 + 82;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82bc7da4
	goto loc_82BC7DA4;
loc_82BC7D9C:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r11,r11,23892
	ctx.r11.s64 = ctx.r11.s64 + 23892;
loc_82BC7DA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bc79b8
	ctx.lr = 0x82BC7DB0;
	sub_82BC79B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7888
	ctx.lr = 0x82BC7DB8;
	sub_82BC7888(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x82bc7e04
	goto loc_82BC7E04;
loc_82BC7DC4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,32016
	ctx.r3.s64 = ctx.r11.s64 + 32016;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82BC7DE0;
	sub_82D2F6D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc7e04
	if (cr6.eq) goto loc_82BC7E04;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,132
	ctx.r4.u64 = ctx.r4.u64 | 132;
	// bl 0x82d2ada8
	ctx.lr = 0x82BC7DF8;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82BC7E04;
	sub_83103100(ctx, base);
loc_82BC7E04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC7E1C"))) PPC_WEAK_FUNC(sub_82BC7E1C);
PPC_FUNC_IMPL(__imp__sub_82BC7E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC7E20"))) PPC_WEAK_FUNC(sub_82BC7E20);
PPC_FUNC_IMPL(__imp__sub_82BC7E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BC7E28;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BC7E34;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// addis r30,r11,221
	ctx.r30.s64 = ctx.r11.s64 + 14483456;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r30,r30,-26512
	ctx.r30.s64 = ctx.r30.s64 + -26512;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lbz r10,1100(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1100);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bc7ee8
	if (cr6.eq) goto loc_82BC7EE8;
	// lis r28,-31777
	ctx.r28.s64 = -2082537472;
	// lwz r10,23892(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23892);
loc_82BC7E80:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// addi r11,r11,289
	ctx.r11.s64 = ctx.r11.s64 + 289;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82bc7eb8
	if (!cr6.eq) goto loc_82BC7EB8;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bc7ebc
	if (cr6.eq) goto loc_82BC7EBC;
loc_82BC7EB8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BC7EBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc7ed8
	if (!cr6.eq) goto loc_82BC7ED8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82BC7ED4;
	sub_835977D8(ctx, base);
	// lwz r10,23892(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23892);
loc_82BC7ED8:
	// lbz r11,1100(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1100);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82bc7e80
	if (cr6.lt) goto loc_82BC7E80;
loc_82BC7EE8:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r10,23,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// bl 0x831ba958
	ctx.lr = 0x82BC7F10;
	sub_831BA958(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x82bc7f48
	if (cr6.eq) goto loc_82BC7F48;
loc_82BC7F24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc79b8
	ctx.lr = 0x82BC7F34;
	sub_82BC79B8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82bc7f24
	if (!cr6.eq) goto loc_82BC7F24;
loc_82BC7F48:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bc7f64
	if (cr6.eq) goto loc_82BC7F64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82BC7F64;
	sub_825952B8(ctx, base);
loc_82BC7F64:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// beq cr6,0x82bc7f88
	if (cr6.eq) goto loc_82BC7F88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82BC7F88;
	sub_825952B8(ctx, base);
loc_82BC7F88:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// beq cr6,0x82bc7fac
	if (cr6.eq) goto loc_82BC7FAC;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82BC7FAC;
	sub_825952B8(ctx, base);
loc_82BC7FAC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC7FB4"))) PPC_WEAK_FUNC(sub_82BC7FB4);
PPC_FUNC_IMPL(__imp__sub_82BC7FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC7FB8"))) PPC_WEAK_FUNC(sub_82BC7FB8);
PPC_FUNC_IMPL(__imp__sub_82BC7FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BC7FC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,23892
	ctx.r28.s64 = ctx.r11.s64 + 23892;
	// lwz r30,23892(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23892);
	// bl 0x82f00728
	ctx.lr = 0x82BC7FD8;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc7fec
	if (cr6.eq) goto loc_82BC7FEC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,19016
	ctx.r10.u64 = ctx.r11.u64 | 19016;
	// lwzx r30,r3,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
loc_82BC7FEC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r4,r30,14,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bc8014
	if (!cr6.eq) goto loc_82BC8014;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bc8018
	if (cr6.eq) goto loc_82BC8018;
loc_82BC8014:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BC8018:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc8164
	if (!cr6.eq) goto loc_82BC8164;
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,540(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 540);
	// rlwinm r7,r11,23,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bc80a8
	if (cr6.eq) goto loc_82BC80A8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r9,328
	ctx.r9.s64 = 328;
	// rlwinm r6,r11,23,25,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
loc_82BC804C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// blt cr6,0x82bc805c
	if (cr6.lt) goto loc_82BC805C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BC805C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r3,r11,14,18,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// bne cr6,0x82bc8080
	if (!cr6.eq) goto loc_82BC8080;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r3,r11,14
	ctx.r3.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc8084
	if (cr6.eq) goto loc_82BC8084;
loc_82BC8080:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BC8084:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc80a4
	if (!cr6.eq) goto loc_82BC80A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x82bc804c
	if (cr6.lt) goto loc_82BC804C;
	// b 0x82bc80a8
	goto loc_82BC80A8;
loc_82BC80A4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82BC80A8:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc8164
	if (cr6.eq) goto loc_82BC8164;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82bc8164
	if (cr6.lt) goto loc_82BC8164;
	// bl 0x831156e8
	ctx.lr = 0x82BC80C4;
	sub_831156E8(ctx, base);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,540(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// rlwinm r8,r9,23,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x82bc80f0
	if (!cr6.lt) goto loc_82BC80F0;
	// addi r10,r10,82
	ctx.r10.s64 = ctx.r10.s64 + 82;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82bc80f4
	goto loc_82BC80F4;
loc_82BC80F0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BC80F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8311bdf0
	ctx.lr = 0x82BC8100;
	sub_8311BDF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc81c4
	if (cr6.eq) goto loc_82BC81C4;
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82bc8140
	if (cr6.eq) goto loc_82BC8140;
	// oris r11,r11,510
	ctx.r11.u64 = ctx.r11.u64 | 33423360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 788, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311bdf0
	ctx.lr = 0x82BC812C;
	sub_8311BDF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc81c4
	if (cr6.eq) goto loc_82BC81C4;
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,0,15,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE01FFFF;
	// stw r10,788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 788, ctx.r10.u32);
loc_82BC8140:
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r9,540(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// rlwinm r8,r9,23,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x82bc8164
	if (!cr6.lt) goto loc_82BC8164;
	// addi r10,r10,82
	ctx.r10.s64 = ctx.r10.s64 + 82;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
loc_82BC8164:
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// rlwinm r9,r10,0,16,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE00;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bc81c4
	if (cr6.eq) goto loc_82BC81C4;
	// li r30,328
	ctx.r30.s64 = 328;
loc_82BC8180:
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r9,r10,23,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bc8198
	if (cr6.lt) goto loc_82BC8198;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BC8198:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc79b8
	ctx.lr = 0x82BC81A8;
	sub_82BC79B8(ctx, base);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// rlwinm r9,r10,23,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bc8180
	if (cr6.lt) goto loc_82BC8180;
loc_82BC81C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC81CC"))) PPC_WEAK_FUNC(sub_82BC81CC);
PPC_FUNC_IMPL(__imp__sub_82BC81CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC81D0"))) PPC_WEAK_FUNC(sub_82BC81D0);
PPC_FUNC_IMPL(__imp__sub_82BC81D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC81D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bc7e20
	ctx.lr = 0x82BC81E4;
	sub_82BC7E20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d19bb0
	ctx.lr = 0x82BC81F0;
	sub_82D19BB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82BC81FC;
	sub_82D19BA0(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC8214;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d26ed8
	ctx.lr = 0x82BC8218;
	sub_82D26ED8(ctx, base);
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x82d26b18
	ctx.lr = 0x82BC8220;
	sub_82D26B18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC8228"))) PPC_WEAK_FUNC(sub_82BC8228);
PPC_FUNC_IMPL(__imp__sub_82BC8228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BC8230;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC823C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,32052
	ctx.r28.s64 = ctx.r11.s64 + 32052;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC825C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc8270
	if (cr6.eq) goto loc_82BC8270;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,521
	ctx.r4.u64 = ctx.r4.u64 | 521;
	// bl 0x82d303d0
	ctx.lr = 0x82BC8270;
	sub_82D303D0(ctx, base);
loc_82BC8270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC8278;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BC8280;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d33c10
	ctx.lr = 0x82BC828C;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc82c0
	if (cr6.eq) goto loc_82BC82C0;
loc_82BC8294:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BC82A0;
	sub_82D33DB0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC82AC;
	sub_82D2AEC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82BC82B8;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x82bc8294
	if (cr6.lt) goto loc_82BC8294;
loc_82BC82C0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// rlwinm r6,r10,23,25,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// bl 0x831d0b08
	ctx.lr = 0x82BC82DC;
	sub_831D0B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC82E4;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC82FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge cr6,0x82bc8328
	if (!cr6.lt) goto loc_82BC8328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82BC8310;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc8328
	if (!cr6.eq) goto loc_82BC8328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7e20
	ctx.lr = 0x82BC8324;
	sub_82BC7E20(ctx, base);
	// b 0x82bc8330
	goto loc_82BC8330;
loc_82BC8328:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7fb8
	ctx.lr = 0x82BC8330;
	sub_82BC7FB8(ctx, base);
loc_82BC8330:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17d80
	ctx.lr = 0x82BC833C;
	sub_82D17D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7888
	ctx.lr = 0x82BC8344;
	sub_82BC7888(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82bc8370
	if (cr6.lt) goto loc_82BC8370;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82BC8358;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc8370
	if (!cr6.eq) goto loc_82BC8370;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bc8378
	goto loc_82BC8378;
loc_82BC8370:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82BC8378:
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
	ctx.lr = 0x82BC8390;
	sub_82D1EBF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC839C"))) PPC_WEAK_FUNC(sub_82BC839C);
PPC_FUNC_IMPL(__imp__sub_82BC839C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC83A0"))) PPC_WEAK_FUNC(sub_82BC83A0);
PPC_FUNC_IMPL(__imp__sub_82BC83A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BC83A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r4,100
	ctx.r31.s64 = ctx.r4.s64 + 100;
	// addi r30,r11,-32300
	ctx.r30.s64 = ctx.r11.s64 + -32300;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC83D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc8460
	if (cr6.eq) goto loc_82BC8460;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,23940
	ctx.r8.s64 = ctx.r9.s64 + 23940;
	// lwzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r6,112(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// lwzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82BC8410;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
	ctx.lr = 0x82BC8428;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc8460
	if (cr6.eq) goto loc_82BC8460;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x831a0660
	ctx.lr = 0x82BC8444;
	sub_831A0660(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82BC8458;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82BC8460;
	sub_8387E8E0(ctx, base);
loc_82BC8460:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC8468"))) PPC_WEAK_FUNC(sub_82BC8468);
PPC_FUNC_IMPL(__imp__sub_82BC8468) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bc83a0
	sub_82BC83A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC846C"))) PPC_WEAK_FUNC(sub_82BC846C);
PPC_FUNC_IMPL(__imp__sub_82BC846C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8470"))) PPC_WEAK_FUNC(sub_82BC8470);
PPC_FUNC_IMPL(__imp__sub_82BC8470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC8478;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC8484;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-32324
	ctx.r4.s64 = ctx.r11.s64 + -32324;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC84A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc850c
	if (cr6.eq) goto loc_82BC850C;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d33c10
	ctx.lr = 0x82BC84B4;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc850c
	if (cr6.eq) goto loc_82BC850C;
loc_82BC84BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BC84C8;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc850c
	if (cr6.eq) goto loc_82BC850C;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82bc850c
	if (!cr6.gt) goto loc_82BC850C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc83a0
	ctx.lr = 0x82BC84F8;
	sub_82BC83A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82BC8504;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82bc84bc
	if (cr6.lt) goto loc_82BC84BC;
loc_82BC850C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC8514"))) PPC_WEAK_FUNC(sub_82BC8514);
PPC_FUNC_IMPL(__imp__sub_82BC8514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8518"))) PPC_WEAK_FUNC(sub_82BC8518);
PPC_FUNC_IMPL(__imp__sub_82BC8518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC8520;
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
	ctx.lr = 0x82BC8534;
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
	ctx.lr = 0x82BC854C;
	sub_82D253F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-32176
	ctx.r9.s64 = ctx.r11.s64 + -32176;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// addi r31,r7,-32732
	ctx.r31.s64 = ctx.r7.s64 + -32732;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// bl 0x82d20ae0
	ctx.lr = 0x82BC8588;
	sub_82D20AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82BC8598;
	sub_82D23390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC85A4"))) PPC_WEAK_FUNC(sub_82BC85A4);
PPC_FUNC_IMPL(__imp__sub_82BC85A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC85A8"))) PPC_WEAK_FUNC(sub_82BC85A8);
PPC_FUNC_IMPL(__imp__sub_82BC85A8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-32176
	ctx.r9.s64 = ctx.r11.s64 + -32176;
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
	// beq cr6,0x82bc85f0
	if (cr6.eq) goto loc_82BC85F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BC85F0;
	sub_825952B8(ctx, base);
loc_82BC85F0:
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
	ctx.lr = 0x82BC8608;
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

__attribute__((alias("__imp__sub_82BC861C"))) PPC_WEAK_FUNC(sub_82BC861C);
PPC_FUNC_IMPL(__imp__sub_82BC861C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8620"))) PPC_WEAK_FUNC(sub_82BC8620);
PPC_FUNC_IMPL(__imp__sub_82BC8620) {
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
	// bl 0x82bc85a8
	ctx.lr = 0x82BC8640;
	sub_82BC85A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc8658
	if (cr6.eq) goto loc_82BC8658;
	// bl 0x82416268
	ctx.lr = 0x82BC8654;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC8658:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC8670"))) PPC_WEAK_FUNC(sub_82BC8670);
PPC_FUNC_IMPL(__imp__sub_82BC8670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82BC8678;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BC8684;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r25,r11,-32272
	ctx.r25.s64 = ctx.r11.s64 + -32272;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-20
	ctx.r4.s64 = ctx.r25.s64 + -20;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC86A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc8840
	if (cr6.eq) goto loc_82BC8840;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82BC86C0;
	sub_82D2B608(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// bl 0x831a09f0
	ctx.lr = 0x82BC86DC;
	sub_831A09F0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82BC86E8;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc8824
	if (cr6.eq) goto loc_82BC8824;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82BC86F4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BC8700;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc8824
	if (cr6.eq) goto loc_82BC8824;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC8718;
	sub_82D2AEC8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// bge cr6,0x82bc880c
	if (!cr6.lt) goto loc_82BC880C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC8740;
	sub_82D2AEC8(ctx, base);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r25,-12
	ctx.r4.s64 = ctx.r25.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC875C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc8848
	if (cr6.eq) goto loc_82BC8848;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC8780;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc886c
	if (cr6.eq) goto loc_82BC886C;
	// bl 0x831156e8
	ctx.lr = 0x82BC8790;
	sub_831156E8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82bc887c
	if (!cr6.gt) goto loc_82BC887C;
	// lhzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x8311c338
	ctx.lr = 0x82BC87B4;
	sub_8311C338(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r23,88(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 88);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82BC87C8;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82BC87DC;
	sub_82D32C58(ctx, base);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83125548
	ctx.lr = 0x82BC87F0;
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
	ctx.lr = 0x82BC8804;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82BC880C;
	sub_8387E8E0(ctx, base);
loc_82BC880C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// bl 0x82d33c10
	ctx.lr = 0x82BC881C;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// blt cr6,0x82bc86f4
	if (cr6.lt) goto loc_82BC86F4;
loc_82BC8824:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bc8840
	if (cr6.eq) goto loc_82BC8840;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BC8840;
	sub_825952B8(ctx, base);
loc_82BC8840:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82BC8848:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bc8840
	if (cr6.eq) goto loc_82BC8840;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BC8864;
	sub_825952B8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82BC886C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82BC8874;
	sub_82F73D60(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82BC887C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BC8888;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82BC8888"))) PPC_WEAK_FUNC(sub_82BC8888);
PPC_FUNC_IMPL(__imp__sub_82BC8888) {
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
	// blt cr6,0x82bc88b0
	if (cr6.lt) goto loc_82BC88B0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc88b4
	goto loc_82BC88B4;
loc_82BC88B0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BC88B4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BC88D0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc88ec
	if (cr6.eq) goto loc_82BC88EC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bc8518
	ctx.lr = 0x82BC88E4;
	sub_82BC8518(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bc88f0
	if (!cr6.eq) goto loc_82BC88F0;
loc_82BC88EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC88F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC8908"))) PPC_WEAK_FUNC(sub_82BC8908);
PPC_FUNC_IMPL(__imp__sub_82BC8908) {
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
	// bl 0x82d19cd0
	ctx.lr = 0x82BC8920;
	sub_82D19CD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82bc8670
	ctx.lr = 0x82BC8938;
	sub_82BC8670(ctx, base);
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

__attribute__((alias("__imp__sub_82BC894C"))) PPC_WEAK_FUNC(sub_82BC894C);
PPC_FUNC_IMPL(__imp__sub_82BC894C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8950"))) PPC_WEAK_FUNC(sub_82BC8950);
PPC_FUNC_IMPL(__imp__sub_82BC8950) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19858
	ctx.lr = 0x82BC8970;
	sub_82D19858(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82BC8978;
	sub_82D19BA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82BC8984;
	sub_82D19CD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r7,-32356
	ctx.r4.s64 = ctx.r7.s64 + -32356;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r30,r9,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82BC89B8;
	sub_8259CC28(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d22d48
	ctx.lr = 0x82BC89C8;
	sub_82D22D48(ctx, base);
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

__attribute__((alias("__imp__sub_82BC89E0"))) PPC_WEAK_FUNC(sub_82BC89E0);
PPC_FUNC_IMPL(__imp__sub_82BC89E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BC89E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82BC89FC:
	// bl 0x830ff290
	ctx.lr = 0x82BC8A00;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82BC8A04;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bne cr6,0x82bc8a14
	if (!cr6.eq) goto loc_82BC8A14;
	// cmplwi cr6,r30,13
	cr6.compare<uint32_t>(ctx.r30.u32, 13, xer);
	// beq cr6,0x82bc8a8c
	if (cr6.eq) goto loc_82BC8A8C;
loc_82BC8A14:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x831a09f0
	ctx.lr = 0x82BC8A30;
	sub_831A09F0(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi. r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bc8a58
	if (!cr0.eq) goto loc_82BC8A58;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bc8a80
	if (cr6.eq) goto loc_82BC8A80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// b 0x82bc8a7c
	goto loc_82BC8A7C;
loc_82BC8A58:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x82BC8A68;
	sub_835977D8(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bc8a80
	if (cr6.eq) goto loc_82BC8A80;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_82BC8A7C:
	// bl 0x825952b8
	ctx.lr = 0x82BC8A80;
	sub_825952B8(ctx, base);
loc_82BC8A80:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82BC8A8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,14
	cr6.compare<uint32_t>(ctx.r30.u32, 14, xer);
	// blt cr6,0x82bc89fc
	if (cr6.lt) goto loc_82BC89FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc8470
	ctx.lr = 0x82BC8AA0;
	sub_82BC8470(ctx, base);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// srawi r5,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// bl 0x82d20f50
	ctx.lr = 0x82BC8AC4;
	sub_82D20F50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc8670
	ctx.lr = 0x82BC8AD0;
	sub_82BC8670(ctx, base);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r4,r6,-32388
	ctx.r4.s64 = ctx.r6.s64 + -32388;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82BC8AFC;
	sub_8259CC28(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d21bf8
	ctx.lr = 0x82BC8B0C;
	sub_82D21BF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC8B14;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d510
	ctx.lr = 0x82BC8B24;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc8b34
	if (cr6.eq) goto loc_82BC8B34;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d30530
	ctx.lr = 0x82BC8B34;
	sub_82D30530(ctx, base);
loc_82BC8B34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC8B3C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d2d510
	ctx.lr = 0x82BC8B4C;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc8b5c
	if (cr6.eq) goto loc_82BC8B5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d30530
	ctx.lr = 0x82BC8B5C;
	sub_82D30530(ctx, base);
loc_82BC8B5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC8B68"))) PPC_WEAK_FUNC(sub_82BC8B68);
PPC_FUNC_IMPL(__imp__sub_82BC8B68) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20976
	ctx.r9.s64 = ctx.r11.s64 + -20976;
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
	// bl 0x82c04df8
	ctx.lr = 0x82BC8BA0;
	sub_82C04DF8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bc8bb8
	if (cr6.eq) goto loc_82BC8BB8;
	// bl 0x82416268
	ctx.lr = 0x82BC8BB4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC8BB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC8BD0"))) PPC_WEAK_FUNC(sub_82BC8BD0);
PPC_FUNC_IMPL(__imp__sub_82BC8BD0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c05d10
	ctx.lr = 0x82BC8BEC;
	sub_82C05D10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC8BF4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,-31456
	ctx.r31.s64 = ctx.r11.s64 + -31456;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC8C14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC8C1C;
	sub_82D19A78(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC8C34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC8C3C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82BC8C54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BC8C68;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC8C78;
	sub_82D2AEC8(ctx, base);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,507
	ctx.r4.u64 = ctx.r4.u64 | 507;
	// bl 0x82c04a20
	ctx.lr = 0x82BC8C88;
	sub_82C04A20(ctx, base);
	// lis r4,700
	ctx.r4.s64 = 45875200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// bl 0x82c04a78
	ctx.lr = 0x82BC8C98;
	sub_82C04A78(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC8CB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82BC8CD0"))) PPC_WEAK_FUNC(sub_82BC8CD0);
PPC_FUNC_IMPL(__imp__sub_82BC8CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC8CD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82BC8CE4;
	sub_82D19CD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c04c10
	ctx.lr = 0x82BC8CF4;
	sub_82C04C10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, xer);
	// bne cr6,0x82bc8dec
	if (!cr6.eq) goto loc_82BC8DEC;
	// bl 0x82d19a78
	ctx.lr = 0x82BC8D08;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-31608
	ctx.r30.s64 = ctx.r11.s64 + -31608;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r30,328
	ctx.r4.s64 = ctx.r30.s64 + 328;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC8D28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC8D30;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,348
	ctx.r4.s64 = ctx.r30.s64 + 348;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC8D48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BC8D5C;
	sub_82D2B608(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC8D6C;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC8D74;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,364
	ctx.r4.s64 = ctx.r30.s64 + 364;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82BC8D8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BC8DA0;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC8DB0;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC8DB8;
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
	ctx.lr = 0x82BC8DD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc8ebc
	if (cr6.eq) goto loc_82BC8EBC;
	// lis r4,225
	ctx.r4.s64 = 14745600;
	// ori r4,r4,75
	ctx.r4.u64 = ctx.r4.u64 | 75;
	// bl 0x82d39ab8
	ctx.lr = 0x82BC8DE4;
	sub_82D39AB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BC8DEC:
	// bl 0x82d19a78
	ctx.lr = 0x82BC8DF0;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-31608
	ctx.r30.s64 = ctx.r11.s64 + -31608;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r30,372
	ctx.r4.s64 = ctx.r30.s64 + 372;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC8E10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC8E18;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,392
	ctx.r4.s64 = ctx.r30.s64 + 392;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC8E30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BC8E44;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC8E54;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC8E5C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,400
	ctx.r4.s64 = ctx.r30.s64 + 400;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82BC8E74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BC8E88;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC8E98;
	sub_82D2AEC8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r30,416
	ctx.r4.s64 = ctx.r30.s64 + 416;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC8EB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,225
	ctx.r4.s64 = 14745600;
	// ori r4,r4,74
	ctx.r4.u64 = ctx.r4.u64 | 74;
	// bl 0x82d29598
	ctx.lr = 0x82BC8EBC;
	sub_82D29598(ctx, base);
loc_82BC8EBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC8EC4"))) PPC_WEAK_FUNC(sub_82BC8EC4);
PPC_FUNC_IMPL(__imp__sub_82BC8EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8EC8"))) PPC_WEAK_FUNC(sub_82BC8EC8);
PPC_FUNC_IMPL(__imp__sub_82BC8EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC8ED0;
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
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BC8EF4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc8f44
	if (cr6.eq) goto loc_82BC8F44;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ad0d40
	ctx.lr = 0x82BC8F0C;
	sub_82AD0D40(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-31096
	ctx.r9.s64 = ctx.r11.s64 + -31096;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,59
	ctx.r4.u64 = ctx.r4.u64 | 59;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21730
	ctx.lr = 0x82BC8F38;
	sub_82D21730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BC8F44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC8F50"))) PPC_WEAK_FUNC(sub_82BC8F50);
PPC_FUNC_IMPL(__imp__sub_82BC8F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc8f60
	if (cr6.lt) goto loc_82BC8F60;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82BC8F60:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82bc8ec8
	sub_82BC8EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC8F68"))) PPC_WEAK_FUNC(sub_82BC8F68);
PPC_FUNC_IMPL(__imp__sub_82BC8F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82BC8F70;
	__savegprlr_20(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82BC8F84;
	sub_82D19CD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c04c10
	ctx.lr = 0x82BC8F94;
	sub_82C04C10(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82c1f4e0
	ctx.lr = 0x82BC8F9C;
	sub_82C1F4E0(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r1,236
	ctx.r10.s64 = ctx.r1.s64 + 236;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82BC8FAC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82bc8fac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BC8FAC;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82c1f550
	ctx.lr = 0x82BC8FC0;
	sub_82C1F550(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82bc9278
	if (cr6.eq) goto loc_82BC9278;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC8FD4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r25,r11,-31296
	ctx.r25.s64 = ctx.r11.s64 + -31296;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-152
	ctx.r4.s64 = ctx.r25.s64 + -152;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC8FF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r26,r11,24132
	ctx.r26.s64 = ctx.r11.s64 + 24132;
loc_82BC900C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r29,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC9024;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r1,244
	ctx.r31.s64 = ctx.r1.s64 + 244;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwzx r9,r29,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82bc9048
	if (!cr6.eq) goto loc_82BC9048;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC9044;
	sub_82D2AEC8(ctx, base);
	// b 0x82bc9080
	goto loc_82BC9080;
loc_82BC9048:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC9050;
	sub_82D2AEC8(ctx, base);
	// lwzx r31,r29,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// ble cr6,0x82bc9064
	if (!cr6.gt) goto loc_82BC9064;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82BC9064:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82BC906C;
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
	ctx.lr = 0x82BC9080;
	sub_82D32C58(ctx, base);
loc_82BC9080:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x82bc900c
	if (cr6.lt) goto loc_82BC900C;
	// li r24,15
	ctx.r24.s64 = 15;
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// stb r23,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r23.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r24,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r24.u32);
	// stw r23,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r23.u32);
	// stb r23,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r23.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC90C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82bc90d8
	if (cr6.eq) goto loc_82BC90D8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BC90D8:
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bne cr6,0x82bc91a0
	if (!cr6.eq) goto loc_82BC91A0;
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8315e518
	ctx.lr = 0x82BC9108;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cb28
	ctx.lr = 0x82BC911C;
	sub_8259CB28(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bc9138
	if (cr6.lt) goto loc_82BC9138;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82BC9138;
	sub_825952B8(ctx, base);
loc_82BC9138:
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stb r23,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r23.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// bl 0x8315e518
	ctx.lr = 0x82BC9158;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x8259cb28
	ctx.lr = 0x82BC916C;
	sub_8259CB28(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc9188
	if (cr6.lt) goto loc_82BC9188;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82BC9188;
	sub_825952B8(ctx, base);
loc_82BC9188:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// stb r23,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r23.u8);
	// ori r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 | 10;
	// b 0x82bc91a8
	goto loc_82BC91A8;
loc_82BC91A0:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
loc_82BC91A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82BC91B0;
	sub_82D29598(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r29,r1,176
	ctx.r29.s64 = ctx.r1.s64 + 176;
	// addi r31,r11,24124
	ctx.r31.s64 = ctx.r11.s64 + 24124;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82BC91C0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC91D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x82bc9208
	if (!cr6.eq) goto loc_82BC9208;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC91F0;
	sub_82D2AEC8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BC9204;
	sub_82D291E0(ctx, base);
	// b 0x82bc9210
	goto loc_82BC9210;
loc_82BC9208:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BC9210;
	sub_82D2AEC8(ctx, base);
loc_82BC9210:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x82bc91c0
	if (!cr0.eq) goto loc_82BC91C0;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC923C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r1,232
	ctx.r31.s64 = ctx.r1.s64 + 232;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82BC9244:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc9264
	if (cr6.lt) goto loc_82BC9264;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BC9264;
	sub_825952B8(ctx, base);
loc_82BC9264:
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// stb r23,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// bge 0x82bc9244
	if (!cr0.lt) goto loc_82BC9244;
loc_82BC9278:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC9280"))) PPC_WEAK_FUNC(sub_82BC9280);
PPC_FUNC_IMPL(__imp__sub_82BC9280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,604(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 604);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc9294
	if (!cr6.eq) goto loc_82BC9294;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BC9294:
	// b 0x82d29ce0
	sub_82D29CE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC9298"))) PPC_WEAK_FUNC(sub_82BC9298);
PPC_FUNC_IMPL(__imp__sub_82BC9298) {
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
	// lis r11,261
	ctx.r11.s64 = 17104896;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,20
	ctx.r9.u64 = ctx.r11.u64 | 20;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bc9310
	if (!cr6.eq) goto loc_82BC9310;
	// lbz r11,604(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 604);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc9310
	if (!cr6.eq) goto loc_82BC9310;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,604(r3)
	PPC_STORE_U8(ctx.r3.u32 + 604, ctx.r11.u8);
	// bl 0x831021a0
	ctx.lr = 0x82BC92D8;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// bl 0x83102a08
	ctx.lr = 0x82BC92E8;
	sub_83102A08(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82BC92EC;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// bl 0x83102a08
	ctx.lr = 0x82BC92FC;
	sub_83102A08(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,-30528
	ctx.r5.s64 = ctx.r10.s64 + -30528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BC9310;
	sub_82D20DA8(ctx, base);
loc_82BC9310:
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

__attribute__((alias("__imp__sub_82BC9328"))) PPC_WEAK_FUNC(sub_82BC9328);
PPC_FUNC_IMPL(__imp__sub_82BC9328) {
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
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2ed88
	ctx.lr = 0x82BC9348;
	sub_82D2ED88(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-30432
	ctx.r9.s64 = ctx.r11.s64 + -30432;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r6,r7,-24636
	ctx.r6.s64 = ctx.r7.s64 + -24636;
	// stb r11,588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 588, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r6.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// stb r11,604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 604, ctx.r11.u8);
	// bl 0x82d19788
	ctx.lr = 0x82BC9394;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_82BC93AC"))) PPC_WEAK_FUNC(sub_82BC93AC);
PPC_FUNC_IMPL(__imp__sub_82BC93AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC93B0"))) PPC_WEAK_FUNC(sub_82BC93B0);
PPC_FUNC_IMPL(__imp__sub_82BC93B0) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-30432
	ctx.r8.s64 = ctx.r11.s64 + -30432;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r6,r9,-24712
	ctx.r6.s64 = ctx.r9.s64 + -24712;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r30,r3,584
	ctx.r30.s64 = ctx.r3.s64 + 584;
	// stw r6,584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 584, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0cf8
	ctx.lr = 0x82BC93F8;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bc9424
	if (cr6.eq) goto loc_82BC9424;
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
	ctx.lr = 0x82BC941C;
	sub_8353F3B8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_82BC9424:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2ede8
	ctx.lr = 0x82BC942C;
	sub_82D2EDE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC9444"))) PPC_WEAK_FUNC(sub_82BC9444);
PPC_FUNC_IMPL(__imp__sub_82BC9444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC9448"))) PPC_WEAK_FUNC(sub_82BC9448);
PPC_FUNC_IMPL(__imp__sub_82BC9448) {
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
	// bl 0x82bc93b0
	ctx.lr = 0x82BC9468;
	sub_82BC93B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc9480
	if (cr6.eq) goto loc_82BC9480;
	// bl 0x82416268
	ctx.lr = 0x82BC947C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC9480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC9498"))) PPC_WEAK_FUNC(sub_82BC9498);
PPC_FUNC_IMPL(__imp__sub_82BC9498) {
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
	// li r4,608
	ctx.r4.s64 = 608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BC94CC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc9500
	if (cr6.eq) goto loc_82BC9500;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc94f0
	if (cr6.lt) goto loc_82BC94F0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82bc9328
	ctx.lr = 0x82BC94EC;
	sub_82BC9328(ctx, base);
	// b 0x82bc9504
	goto loc_82BC9504;
loc_82BC94F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82bc9328
	ctx.lr = 0x82BC94FC;
	sub_82BC9328(ctx, base);
	// b 0x82bc9504
	goto loc_82BC9504;
loc_82BC9500:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC9504:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC951C"))) PPC_WEAK_FUNC(sub_82BC951C);
PPC_FUNC_IMPL(__imp__sub_82BC951C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC9520"))) PPC_WEAK_FUNC(sub_82BC9520);
PPC_FUNC_IMPL(__imp__sub_82BC9520) {
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
	// lbz r11,588(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 588);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,584
	ctx.r30.s64 = ctx.r3.s64 + 584;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc9550
	if (!cr6.eq) goto loc_82BC9550;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825aa080
	ctx.lr = 0x82BC9550;
	sub_825AA080(ctx, base);
loc_82BC9550:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bc956c
	if (!cr6.eq) goto loc_82BC956C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_82BC956C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82dad040
	ctx.lr = 0x82BC9574;
	sub_82DAD040(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc9588
	if (cr6.eq) goto loc_82BC9588;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82BC9588:
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// bgt cr6,0x82bc96ec
	if (cr6.gt) goto loc_82BC96EC;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27220
	ctx.r12.s64 = ctx.r12.s64 + -27220;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82BC95FC;
	case 1:
		goto loc_82BC9608;
	case 2:
		goto loc_82BC9614;
	case 3:
		goto loc_82BC9620;
	case 4:
		goto loc_82BC962C;
	case 5:
		goto loc_82BC9638;
	case 6:
		goto loc_82BC9644;
	case 7:
		goto loc_82BC9650;
	case 8:
		goto loc_82BC965C;
	case 9:
		goto loc_82BC9668;
	case 10:
		goto loc_82BC9674;
	case 11:
		goto loc_82BC9680;
	case 12:
		goto loc_82BC968C;
	case 13:
		goto loc_82BC9698;
	case 14:
		goto loc_82BC96A4;
	case 15:
		goto loc_82BC96B0;
	case 16:
		goto loc_82BC96BC;
	case 17:
		goto loc_82BC96C8;
	case 18:
		goto loc_82BC96D4;
	case 19:
		goto loc_82BC96E0;
	default:
		return;
	}
	// lwz r21,-27140(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27140);
	// lwz r21,-27128(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27128);
	// lwz r21,-27116(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27116);
	// lwz r21,-27104(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27104);
	// lwz r21,-27092(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27092);
	// lwz r21,-27080(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27080);
	// lwz r21,-27068(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27068);
	// lwz r21,-27056(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27056);
	// lwz r21,-27044(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27044);
	// lwz r21,-27032(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27032);
	// lwz r21,-27020(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27020);
	// lwz r21,-27008(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27008);
	// lwz r21,-26996(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26996);
	// lwz r21,-26984(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26984);
	// lwz r21,-26972(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26972);
	// lwz r21,-26960(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26960);
	// lwz r21,-26948(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26948);
	// lwz r21,-26936(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26936);
	// lwz r21,-26924(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26924);
	// lwz r21,-26912(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26912);
loc_82BC95FC:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,432
	ctx.r4.u64 = ctx.r4.u64 | 432;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC9608:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,433
	ctx.r4.u64 = ctx.r4.u64 | 433;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC9614:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,437
	ctx.r4.u64 = ctx.r4.u64 | 437;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC9620:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,330
	ctx.r4.u64 = ctx.r4.u64 | 330;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC962C:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,331
	ctx.r4.u64 = ctx.r4.u64 | 331;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC9638:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,340
	ctx.r4.u64 = ctx.r4.u64 | 340;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC9644:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,343
	ctx.r4.u64 = ctx.r4.u64 | 343;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC9650:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,443
	ctx.r4.u64 = ctx.r4.u64 | 443;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC965C:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,319
	ctx.r4.u64 = ctx.r4.u64 | 319;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC9668:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,320
	ctx.r4.u64 = ctx.r4.u64 | 320;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC9674:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,359
	ctx.r4.u64 = ctx.r4.u64 | 359;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC9680:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,360
	ctx.r4.u64 = ctx.r4.u64 | 360;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC968C:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,446
	ctx.r4.u64 = ctx.r4.u64 | 446;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC9698:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,310
	ctx.r4.u64 = ctx.r4.u64 | 310;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC96A4:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,311
	ctx.r4.u64 = ctx.r4.u64 | 311;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC96B0:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,312
	ctx.r4.u64 = ctx.r4.u64 | 312;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC96BC:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,316
	ctx.r4.u64 = ctx.r4.u64 | 316;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC96C8:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,346
	ctx.r4.u64 = ctx.r4.u64 | 346;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC96D4:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,347
	ctx.r4.u64 = ctx.r4.u64 | 347;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC96E0:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,348
	ctx.r4.u64 = ctx.r4.u64 | 348;
	// b 0x82bc96f4
	goto loc_82BC96F4;
loc_82BC96EC:
	// lis r4,223
	ctx.r4.s64 = 14614528;
	// ori r4,r4,321
	ctx.r4.u64 = ctx.r4.u64 | 321;
loc_82BC96F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2ada8
	ctx.lr = 0x82BC96FC;
	sub_82D2ADA8(ctx, base);
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

__attribute__((alias("__imp__sub_82BC9718"))) PPC_WEAK_FUNC(sub_82BC9718);
PPC_FUNC_IMPL(__imp__sub_82BC9718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC9720;
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
	ctx.lr = 0x82BC9734;
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
	ctx.lr = 0x82BC974C;
	sub_82D253F8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-28776
	ctx.r8.s64 = ctx.r10.s64 + -28776;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// stb r11,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r11.u8);
	// stb r11,106(r31)
	PPC_STORE_U8(ctx.r31.u32 + 106, ctx.r11.u8);
	// stb r11,107(r31)
	PPC_STORE_U8(ctx.r31.u32 + 107, ctx.r11.u8);
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// stb r11,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r11.u8);
	// stb r11,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r11.u8);
	// std r11,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r11.u64);
	// lwz r4,24412(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24412);
	// bl 0x82d20ae0
	ctx.lr = 0x82BC97A0;
	sub_82D20AE0(ctx, base);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,-29768
	ctx.r4.s64 = ctx.r5.s64 + -29768;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82BC97B4;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC97C0"))) PPC_WEAK_FUNC(sub_82BC97C0);
PPC_FUNC_IMPL(__imp__sub_82BC97C0) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-28776
	ctx.r9.s64 = ctx.r11.s64 + -28776;
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
	ctx.lr = 0x82BC97F8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bc9810
	if (cr6.eq) goto loc_82BC9810;
	// bl 0x82416268
	ctx.lr = 0x82BC980C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC9810:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC9828"))) PPC_WEAK_FUNC(sub_82BC9828);
PPC_FUNC_IMPL(__imp__sub_82BC9828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BC9830;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// blt cr6,0x82bc98b0
	if (cr6.lt) goto loc_82BC98B0;
	// cmpw cr6,r6,r4
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// blt cr6,0x82bc98b0
	if (cr6.lt) goto loc_82BC98B0;
	// bl 0x831156e8
	ctx.lr = 0x82BC9854;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// bgt cr6,0x82bc9898
	if (cr6.gt) goto loc_82BC9898;
	// addi r9,r31,27544
	ctx.r9.s64 = ctx.r31.s64 + 27544;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82BC9874:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// blt cr6,0x82bc9894
	if (cr6.lt) goto loc_82BC9894;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// ble cr6,0x82bc9874
	if (!cr6.gt) goto loc_82BC9874;
	// b 0x82bc9898
	goto loc_82BC9898;
loc_82BC9894:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82BC9898:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bc98b0
	if (cr6.eq) goto loc_82BC98B0;
	// bl 0x83105358
	ctx.lr = 0x82BC98A8;
	sub_83105358(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b1b640
	ctx.lr = 0x82BC98B0;
	sub_82B1B640(ctx, base);
loc_82BC98B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC98B8"))) PPC_WEAK_FUNC(sub_82BC98B8);
PPC_FUNC_IMPL(__imp__sub_82BC98B8) {
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
	// blt cr6,0x82bc98e0
	if (cr6.lt) goto loc_82BC98E0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bc98e4
	goto loc_82BC98E4;
loc_82BC98E0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BC98E4:
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
	ctx.lr = 0x82BC9900;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc991c
	if (cr6.eq) goto loc_82BC991C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bc9718
	ctx.lr = 0x82BC9914;
	sub_82BC9718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bc9920
	if (!cr6.eq) goto loc_82BC9920;
loc_82BC991C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC9920:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC9938"))) PPC_WEAK_FUNC(sub_82BC9938);
PPC_FUNC_IMPL(__imp__sub_82BC9938) {
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
	// li r7,33
	ctx.r7.s64 = 33;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82bc9828
	ctx.lr = 0x82BC9964;
	sub_82BC9828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,11
	ctx.r6.s64 = 11;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x82bc9828
	ctx.lr = 0x82BC997C;
	sub_82BC9828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,35
	ctx.r7.s64 = 35;
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82bc9828
	ctx.lr = 0x82BC9994;
	sub_82BC9828(ctx, base);
	// li r7,36
	ctx.r7.s64 = 36;
	// li r6,22
	ctx.r6.s64 = 22;
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc9828
	ctx.lr = 0x82BC99AC;
	sub_82BC9828(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC99C4"))) PPC_WEAK_FUNC(sub_82BC99C4);
PPC_FUNC_IMPL(__imp__sub_82BC99C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC99C8"))) PPC_WEAK_FUNC(sub_82BC99C8);
PPC_FUNC_IMPL(__imp__sub_82BC99C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82BC99D0;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r22,10
	ctx.r22.s64 = 10;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bc9a18
	if (cr6.eq) goto loc_82BC9A18;
loc_82BC99F4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu. r10,r30,r31
	ctx.r10.u32 = PPCDivide(ctx.r30.u32, ctx.r31.u32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// twllei r31,0
	// bne 0x82bc99f4
	if (!cr0.eq) goto loc_82BC99F4;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// divwu r31,r31,r22
	ctx.r31.u32 = PPCDivide(ctx.r31.u32, ctx.r22.u32);
loc_82BC9A18:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
loc_82BC9A30:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc9a30
	if (!cr6.eq) goto loc_82BC9A30;
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
	ctx.lr = 0x82BC9A58;
	sub_8259CC28(ctx, base);
	// addi r10,r26,48
	ctx.r10.s64 = ctx.r26.s64 + 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x82b142a0
	ctx.lr = 0x82BC9A68;
	sub_82B142A0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC9A70;
	sub_82D19A78(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82bc9a84
	if (!cr6.lt) goto loc_82BC9A84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82BC9A84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC9A98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82bc9b88
	if (cr6.eq) goto loc_82BC9B88;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r25,r11,-29752
	ctx.r25.s64 = ctx.r11.s64 + -29752;
loc_82BC9AAC:
	// divwu r28,r27,r31
	ctx.r28.u32 = PPCDivide(ctx.r27.u32, ctx.r31.u32);
	// twllei r31,0
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82BC9AB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bc9ab8
	if (!cr6.eq) goto loc_82BC9AB8;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BC9AE0;
	sub_8259CC28(ctx, base);
	// addi r10,r29,49
	ctx.r10.s64 = ctx.r29.s64 + 49;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x82b142a0
	ctx.lr = 0x82BC9AF0;
	sub_82B142A0(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x82bc9b04
	if (!cr6.lt) goto loc_82BC9B04;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82BC9B04:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC9B0C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82BC9B18;
	sub_82D2E228(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82BC9B2C;
	sub_8259CC28(ctx, base);
	// addi r11,r28,48
	ctx.r11.s64 = ctx.r28.s64 + 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82b142a0
	ctx.lr = 0x82BC9B3C;
	sub_82B142A0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bc9b70
	if (cr6.eq) goto loc_82BC9B70;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bc9b58
	if (!cr6.lt) goto loc_82BC9B58;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82BC9B58:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC9B70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BC9B70:
	// mullw r11,r28,r31
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r31.s32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// subf r27,r11,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r11.s64;
	// divwu r31,r31,r22
	ctx.r31.u32 = PPCDivide(ctx.r31.u32, ctx.r22.u32);
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// blt cr6,0x82bc9aac
	if (cr6.lt) goto loc_82BC9AAC;
loc_82BC9B88:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bc9ba8
	if (cr6.lt) goto loc_82BC9BA8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BC9BA8;
	sub_825952B8(ctx, base);
loc_82BC9BA8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC9BB0"))) PPC_WEAK_FUNC(sub_82BC9BB0);
PPC_FUNC_IMPL(__imp__sub_82BC9BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82BC9BB8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r29.u32);
	// stb r29,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r29.u8);
	// stb r29,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r29.u8);
	// stb r29,106(r3)
	PPC_STORE_U8(ctx.r3.u32 + 106, ctx.r29.u8);
	// stb r29,107(r3)
	PPC_STORE_U8(ctx.r3.u32 + 107, ctx.r29.u8);
	// bl 0x831156e8
	ctx.lr = 0x82BC9BE0;
	sub_831156E8(ctx, base);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r27,r28,6
	ctx.r27.s64 = ctx.r28.s64 + 393216;
	// addi r27,r27,-30316
	ctx.r27.s64 = ctx.r27.s64 + -30316;
	// lwz r24,40(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// bl 0x831021a0
	ctx.lr = 0x82BC9BF4;
	sub_831021A0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// addi r31,r11,-29276
	ctx.r31.s64 = ctx.r11.s64 + -29276;
	// ori r4,r4,35
	ctx.r4.u64 = ctx.r4.u64 | 35;
	// addi r5,r31,-810
	ctx.r5.s64 = ctx.r31.s64 + -810;
	// bl 0x83102a08
	ctx.lr = 0x82BC9C0C;
	sub_83102A08(ctx, base);
	// lwz r3,40(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// bl 0x83131890
	ctx.lr = 0x82BC9C14;
	sub_83131890(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82BC9C28;
	sub_82D19788(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83102db0
	ctx.lr = 0x82BC9C34;
	sub_83102DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC9C3C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-468
	ctx.r4.s64 = ctx.r31.s64 + -468;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC9C54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc9c64
	if (cr6.eq) goto loc_82BC9C64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d29598
	ctx.lr = 0x82BC9C64;
	sub_82D29598(ctx, base);
loc_82BC9C64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC9C6C;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-452
	ctx.r4.s64 = ctx.r31.s64 + -452;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC9C84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r8,r9,-24636
	ctx.r8.s64 = ctx.r9.s64 + -24636;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x825aa080
	ctx.lr = 0x82BC9CA8;
	sub_825AA080(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bc9cc4
	if (!cr6.eq) goto loc_82BC9CC4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
loc_82BC9CC4:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82BC9CCC;
	sub_82A181B8(ctx, base);
	// addi r11,r24,27573
	ctx.r11.s64 = ctx.r24.s64 + 27573;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// stw r10,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r10.u32);
	// bl 0x831f8200
	ctx.lr = 0x82BC9CE8;
	sub_831F8200(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831f8200
	ctx.lr = 0x82BC9CF4;
	sub_831F8200(ctx, base);
	// lwzx r9,r27,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// ble cr6,0x82bc9d04
	if (!cr6.gt) goto loc_82BC9D04;
	// stwx r3,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r3.u32);
loc_82BC9D04:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f3e0
	ctx.lr = 0x82BC9D0C;
	sub_82A2F3E0(ctx, base);
	// addi r11,r24,27544
	ctx.r11.s64 = ctx.r24.s64 + 27544;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// ble cr6,0x82bc9d24
	if (!cr6.gt) goto loc_82BC9D24;
	// stwx r3,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u32);
loc_82BC9D24:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BC9D40;
	sub_82D19A78(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-440
	ctx.r4.s64 = ctx.r31.s64 + -440;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC9D5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// addi r4,r31,-420
	ctx.r4.s64 = ctx.r31.s64 + -420;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r28,r27,100
	ctx.r28.s64 = ctx.r27.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82BC9D80;
	sub_8259CC28(ctx, base);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r5,r5,410
	ctx.r5.u64 = ctx.r5.u64 | 410;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82a69a28
	ctx.lr = 0x82BC9D94;
	sub_82A69A28(ctx, base);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r4,r31,-404
	ctx.r4.s64 = ctx.r31.s64 + -404;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82BC9DB0;
	sub_8259CC28(ctx, base);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ori r5,r5,407
	ctx.r5.u64 = ctx.r5.u64 | 407;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82BC9DC4;
	sub_82A69A28(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f370
	ctx.lr = 0x82BC9DCC;
	sub_82A2F370(ctx, base);
	// cmplw cr6,r23,r3
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, xer);
	// bge cr6,0x82bc9e14
	if (!cr6.lt) goto loc_82BC9E14;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC9DF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,-376
	ctx.r4.s64 = ctx.r31.s64 + -376;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82BC9DFC;
	sub_837B0C10(ctx, base);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r5,r5,406
	ctx.r5.u64 = ctx.r5.u64 | 406;
	// bl 0x82a69a28
	ctx.lr = 0x82BC9E10;
	sub_82A69A28(ctx, base);
	// b 0x82bc9e50
	goto loc_82BC9E50;
loc_82BC9E14:
	// addi r4,r31,-360
	ctx.r4.s64 = ctx.r31.s64 + -360;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82BC9E20;
	sub_837B0C10(ctx, base);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r5,r5,409
	ctx.r5.u64 = ctx.r5.u64 | 409;
	// bl 0x82a69a28
	ctx.lr = 0x82BC9E34;
	sub_82A69A28(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f390
	ctx.lr = 0x82BC9E3C;
	sub_82A2F390(ctx, base);
	// cmplw cr6,r23,r3
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, xer);
	// blt cr6,0x82bc9e50
	if (cr6.lt) goto loc_82BC9E50;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc9938
	ctx.lr = 0x82BC9E50;
	sub_82BC9938(ctx, base);
loc_82BC9E50:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-13652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13652);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// bne cr6,0x82bc9ef0
	if (!cr6.eq) goto loc_82BC9EF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC9E68;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-344
	ctx.r4.s64 = ctx.r31.s64 + -344;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC9E80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc9e90
	if (cr6.eq) goto loc_82BC9E90;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d28498
	ctx.lr = 0x82BC9E90;
	sub_82D28498(ctx, base);
loc_82BC9E90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC9E98;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-328
	ctx.r4.s64 = ctx.r31.s64 + -328;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC9EB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc9ec0
	if (cr6.eq) goto loc_82BC9EC0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d28498
	ctx.lr = 0x82BC9EC0;
	sub_82D28498(ctx, base);
loc_82BC9EC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BC9EC8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-316
	ctx.r4.s64 = ctx.r31.s64 + -316;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC9EE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc9ef0
	if (cr6.eq) goto loc_82BC9EF0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d28498
	ctx.lr = 0x82BC9EF0;
	sub_82D28498(ctx, base);
loc_82BC9EF0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,-300
	ctx.r4.s64 = ctx.r31.s64 + -300;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC9F0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r31,-288
	ctx.r6.s64 = ctx.r31.s64 + -288;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r5,r31,-272
	ctx.r5.s64 = ctx.r31.s64 + -272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc99c8
	ctx.lr = 0x82BC9F20;
	sub_82BC99C8(ctx, base);
	// addi r6,r31,-256
	ctx.r6.s64 = ctx.r31.s64 + -256;
	// addi r5,r31,-240
	ctx.r5.s64 = ctx.r31.s64 + -240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc99c8
	ctx.lr = 0x82BC9F34;
	sub_82BC99C8(ctx, base);
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82BC9F40;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bc9fb4
	if (cr6.eq) goto loc_82BC9FB4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f370
	ctx.lr = 0x82BC9F54;
	sub_82A2F370(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,-200
	ctx.r5.s64 = ctx.r31.s64 + -200;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831d0b08
	ctx.lr = 0x82BC9F68;
	sub_831D0B08(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r25,r29,100
	ctx.r25.s64 = ctx.r29.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82BC9F78;
	sub_837B0C10(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r31,-196
	ctx.r4.s64 = ctx.r31.s64 + -196;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82BC9F88;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82BC9F98;
	sub_82A69AD0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,-184
	ctx.r4.s64 = ctx.r31.s64 + -184;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC9FB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BC9FB4:
	// addi r4,r31,-164
	ctx.r4.s64 = ctx.r31.s64 + -164;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82BC9FC0;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bca034
	if (cr6.eq) goto loc_82BCA034;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f390
	ctx.lr = 0x82BC9FD4;
	sub_82A2F390(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,-140
	ctx.r5.s64 = ctx.r31.s64 + -140;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831d0b08
	ctx.lr = 0x82BC9FE8;
	sub_831D0B08(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r25,r29,100
	ctx.r25.s64 = ctx.r29.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82BC9FF8;
	sub_837B0C10(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82BCA008;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82BCA018;
	sub_82A69AD0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,-124
	ctx.r4.s64 = ctx.r31.s64 + -124;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCA034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BCA034:
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82BCA040;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bca0b4
	if (cr6.eq) goto loc_82BCA0B4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f3b0
	ctx.lr = 0x82BCA054;
	sub_82A2F3B0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,-84
	ctx.r5.s64 = ctx.r31.s64 + -84;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831d0b08
	ctx.lr = 0x82BCA068;
	sub_831D0B08(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r28,r29,100
	ctx.r28.s64 = ctx.r29.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82BCA078;
	sub_837B0C10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82BCA088;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82BCA098;
	sub_82A69AD0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCA0B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BCA0B4:
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815d38
	ctx.lr = 0x82BCA0C0;
	sub_83815D38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82BCA0D4;
	sub_83815B68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815b68
	ctx.lr = 0x82BCA0E4;
	sub_83815B68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815b48
	ctx.lr = 0x82BCA0F4;
	sub_83815B48(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f370
	ctx.lr = 0x82BCA100;
	sub_82A2F370(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x83815be8
	ctx.lr = 0x82BCA120;
	sub_83815BE8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f3b0
	ctx.lr = 0x82BCA128;
	sub_82A2F3B0(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x83815be8
	ctx.lr = 0x82BCA148;
	sub_83815BE8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815bd8
	ctx.lr = 0x82BCA158;
	sub_83815BD8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// bl 0x838153c8
	ctx.lr = 0x82BCA164;
	sub_838153C8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f390
	ctx.lr = 0x82BCA16C;
	sub_82A2F390(ctx, base);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// bl 0x83815be8
	ctx.lr = 0x82BCA18C;
	sub_83815BE8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f3b0
	ctx.lr = 0x82BCA194;
	sub_82A2F3B0(ctx, base);
	// clrldi r7,r3,32
	ctx.r7.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f8,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// bl 0x83815be8
	ctx.lr = 0x82BCA1B4;
	sub_83815BE8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815bd8
	ctx.lr = 0x82BCA1C4;
	sub_83815BD8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// bl 0x838153c8
	ctx.lr = 0x82BCA1D0;
	sub_838153C8(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83815d38
	ctx.lr = 0x82BCA1DC;
	sub_83815D38(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82BCA1E8;
	sub_83815B68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82BCA1F8;
	sub_83815B68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83815b48
	ctx.lr = 0x82BCA208;
	sub_83815B48(ctx, base);
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f6,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// bl 0x83815be8
	ctx.lr = 0x82BCA22C;
	sub_83815BE8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f3b0
	ctx.lr = 0x82BCA234;
	sub_82A2F3B0(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f4,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// bl 0x83815be8
	ctx.lr = 0x82BCA254;
	sub_83815BE8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83815bd8
	ctx.lr = 0x82BCA264;
	sub_83815BD8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// bl 0x838153c8
	ctx.lr = 0x82BCA270;
	sub_838153C8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83815cb8
	ctx.lr = 0x82BCA278;
	sub_83815CB8(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83815d38
	ctx.lr = 0x82BCA284;
	sub_83815D38(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82BCA290;
	sub_83815B68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83815b48
	ctx.lr = 0x82BCA2A0;
	sub_83815B48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83815be8
	ctx.lr = 0x82BCA2B4;
	sub_83815BE8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83815bd8
	ctx.lr = 0x82BCA2C4;
	sub_83815BD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCA2CC;
	sub_82D19A78(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x838153c8
	ctx.lr = 0x82BCA2D8;
	sub_838153C8(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82bca2fc
	if (cr6.eq) goto loc_82BCA2FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// bl 0x830eab70
	ctx.lr = 0x82BCA2FC;
	sub_830EAB70(ctx, base);
loc_82BCA2FC:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83815cb8
	ctx.lr = 0x82BCA304;
	sub_83815CB8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815cb8
	ctx.lr = 0x82BCA30C;
	sub_83815CB8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82BCA320;
	sub_825E0CF8(ctx, base);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bca340
	if (cr6.eq) goto loc_82BCA340;
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
	ctx.lr = 0x82BCA340;
	sub_8353F3B8(ctx, base);
loc_82BCA340:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCA350"))) PPC_WEAK_FUNC(sub_82BCA350);
PPC_FUNC_IMPL(__imp__sub_82BCA350) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-24636
	ctx.r9.s64 = ctx.r10.s64 + -24636;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825aa080
	ctx.lr = 0x82BCA38C;
	sub_825AA080(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bca3a8
	if (!cr6.eq) goto loc_82BCA3A8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_82BCA3A8:
	// bl 0x831f8200
	ctx.lr = 0x82BCA3AC;
	sub_831F8200(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// bne cr6,0x82bca3e4
	if (!cr6.eq) goto loc_82BCA3E4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-29260
	ctx.r5.s64 = ctx.r11.s64 + -29260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BCA3E0;
	sub_82D20DA8(ctx, base);
	// b 0x82bca3e8
	goto loc_82BCA3E8;
loc_82BCA3E4:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
loc_82BCA3E8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82BCA3FC;
	sub_825E0CF8(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bca41c
	if (cr6.eq) goto loc_82BCA41C;
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
	ctx.lr = 0x82BCA41C;
	sub_8353F3B8(ctx, base);
loc_82BCA41C:
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

__attribute__((alias("__imp__sub_82BCA430"))) PPC_WEAK_FUNC(sub_82BCA430);
PPC_FUNC_IMPL(__imp__sub_82BCA430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82BCA438;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCA44C;
	sub_82D19A78(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-24636
	ctx.r9.s64 = ctx.r10.s64 + -24636;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x825aa080
	ctx.lr = 0x82BCA478;
	sub_825AA080(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bca494
	if (!cr6.eq) goto loc_82BCA494;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
loc_82BCA494:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82BCA49C;
	sub_82A181B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f8200
	ctx.lr = 0x82BCA4A8;
	sub_831F8200(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f3b0
	ctx.lr = 0x82BCA4B4;
	sub_82A2F3B0(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,32036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32036);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fadds f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// blt cr6,0x82bca504
	if (cr6.lt) goto loc_82BCA504;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BCA504:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r30,r10,-28876
	ctx.r30.s64 = ctx.r10.s64 + -28876;
	// bne cr6,0x82bca5a0
	if (!cr6.eq) goto loc_82BCA5A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eb168
	ctx.lr = 0x82BCA52C;
	sub_830EB168(ctx, base);
	// lbz r11,109(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 109);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bca5a0
	if (!cr6.eq) goto loc_82BCA5A0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f370
	ctx.lr = 0x82BCA540;
	sub_82A2F370(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x82bca59c
	if (cr6.lt) goto loc_82BCA59C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f390
	ctx.lr = 0x82BCA554;
	sub_82A2F390(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bge cr6,0x82bca568
	if (!cr6.lt) goto loc_82BCA568;
	// addi r4,r30,-376
	ctx.r4.s64 = ctx.r30.s64 + -376;
	// b 0x82bca584
	goto loc_82BCA584;
loc_82BCA568:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f3b0
	ctx.lr = 0x82BCA570;
	sub_82A2F3B0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r30,-360
	ctx.r4.s64 = ctx.r30.s64 + -360;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x82bca584
	if (cr6.lt) goto loc_82BCA584;
	// addi r4,r30,-344
	ctx.r4.s64 = ctx.r30.s64 + -344;
loc_82BCA584:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCA59C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BCA59C:
	// stb r25,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r25.u8);
loc_82BCA5A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x82bca6c8
	if (!cr6.gt) goto loc_82BCA6C8;
	// lbz r11,110(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 110);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bca6c8
	if (!cr6.eq) goto loc_82BCA6C8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r30,-332
	ctx.r4.s64 = ctx.r30.s64 + -332;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCA5E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r30,-312
	ctx.r4.s64 = ctx.r30.s64 + -312;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r29,r27,100
	ctx.r29.s64 = ctx.r27.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82BCA5F0;
	sub_837B0C10(ctx, base);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,378
	ctx.r5.u64 = ctx.r5.u64 | 378;
	// bl 0x82a69a28
	ctx.lr = 0x82BCA604;
	sub_82A69A28(ctx, base);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r30,-296
	ctx.r4.s64 = ctx.r30.s64 + -296;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BCA620;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCA628;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-280
	ctx.r4.s64 = ctx.r30.s64 + -280;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BCA640;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bca6c4
	if (cr6.eq) goto loc_82BCA6C4;
	// addi r4,r30,-264
	ctx.r4.s64 = ctx.r30.s64 + -264;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83815d38
	ctx.lr = 0x82BCA658;
	sub_83815D38(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82BCA664;
	sub_83815B68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835d31b0
	ctx.lr = 0x82BCA670;
	sub_835D31B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCA680;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835d31b0
	ctx.lr = 0x82BCA688;
	sub_835D31B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f13,72(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-11316(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x83815be8
	ctx.lr = 0x82BCA6A8;
	sub_83815BE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCA6B0;
	sub_82D19A78(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x838153c8
	ctx.lr = 0x82BCA6BC;
	sub_838153C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83815cb8
	ctx.lr = 0x82BCA6C4;
	sub_83815CB8(ctx, base);
loc_82BCA6C4:
	// stb r25,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r25.u8);
loc_82BCA6C8:
	// addi r6,r30,-244
	ctx.r6.s64 = ctx.r30.s64 + -244;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r5,r30,-228
	ctx.r5.s64 = ctx.r30.s64 + -228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc99c8
	ctx.lr = 0x82BCA6DC;
	sub_82BC99C8(ctx, base);
	// addi r4,r30,-212
	ctx.r4.s64 = ctx.r30.s64 + -212;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83815d38
	ctx.lr = 0x82BCA6E8;
	sub_83815D38(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82BCA6F4;
	sub_83815B68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83815b48
	ctx.lr = 0x82BCA704;
	sub_83815B48(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// bl 0x82a2f3b0
	ctx.lr = 0x82BCA724;
	sub_82A2F3B0(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f30,f10
	ctx.f1.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82bca754
	if (!cr6.gt) goto loc_82BCA754;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x82bca760
	goto loc_82BCA760;
loc_82BCA754:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82bca760
	if (!cr6.lt) goto loc_82BCA760;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
loc_82BCA760:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83815be8
	ctx.lr = 0x82BCA76C;
	sub_83815BE8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83815bd8
	ctx.lr = 0x82BCA77C;
	sub_83815BD8(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// bl 0x838153c8
	ctx.lr = 0x82BCA788;
	sub_838153C8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f3b0
	ctx.lr = 0x82BCA790;
	sub_82A2F3B0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82bca848
	if (cr6.gt) goto loc_82BCA848;
	// addi r4,r30,-196
	ctx.r4.s64 = ctx.r30.s64 + -196;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83815d38
	ctx.lr = 0x82BCA7A8;
	sub_83815D38(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82BCA7B4;
	sub_83815B68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82BCA7C4;
	sub_83815B68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83815b48
	ctx.lr = 0x82BCA7D4;
	sub_83815B48(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x83815be8
	ctx.lr = 0x82BCA7F8;
	sub_83815BE8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f3b0
	ctx.lr = 0x82BCA800;
	sub_82A2F3B0(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x83815be8
	ctx.lr = 0x82BCA820;
	sub_83815BE8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83815bd8
	ctx.lr = 0x82BCA830;
	sub_83815BD8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// bl 0x838153c8
	ctx.lr = 0x82BCA83C;
	sub_838153C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83815cb8
	ctx.lr = 0x82BCA844;
	sub_83815CB8(ctx, base);
	// b 0x82bca884
	goto loc_82BCA884;
loc_82BCA848:
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bca884
	if (!cr6.eq) goto loc_82BCA884;
	// addi r4,r30,-184
	ctx.r4.s64 = ctx.r30.s64 + -184;
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x82BCA860;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bca884
	if (cr6.eq) goto loc_82BCA884;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-160
	ctx.r4.s64 = ctx.r30.s64 + -160;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCA880;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r25,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
loc_82BCA884:
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bca8f8
	if (!cr6.eq) goto loc_82BCA8F8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f370
	ctx.lr = 0x82BCA898;
	sub_82A2F370(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x82bca8f8
	if (cr6.lt) goto loc_82BCA8F8;
	// addi r4,r30,-148
	ctx.r4.s64 = ctx.r30.s64 + -148;
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x82BCA8B0;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bca8f8
	if (cr6.eq) goto loc_82BCA8F8;
	// addi r3,r30,-124
	ctx.r3.s64 = ctx.r30.s64 + -124;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x82BCA8D8;
	sub_830EAB70(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-112
	ctx.r4.s64 = ctx.r30.s64 + -112;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCA8F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r25,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r25.u8);
loc_82BCA8F8:
	// lbz r11,105(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 105);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bca96c
	if (!cr6.eq) goto loc_82BCA96C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f390
	ctx.lr = 0x82BCA90C;
	sub_82A2F390(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x82bca96c
	if (cr6.lt) goto loc_82BCA96C;
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x82BCA924;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bca96c
	if (cr6.eq) goto loc_82BCA96C;
	// addi r3,r30,-72
	ctx.r3.s64 = ctx.r30.s64 + -72;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x82BCA94C;
	sub_830EAB70(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCA968;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r25,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r25.u8);
loc_82BCA96C:
	// lbz r11,106(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 106);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bca9e0
	if (!cr6.eq) goto loc_82BCA9E0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f3b0
	ctx.lr = 0x82BCA980;
	sub_82A2F3B0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x82bca9e0
	if (cr6.lt) goto loc_82BCA9E0;
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x82BCA998;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bca9e0
	if (cr6.eq) goto loc_82BCA9E0;
	// addi r3,r30,-24
	ctx.r3.s64 = ctx.r30.s64 + -24;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x82BCA9C0;
	sub_830EAB70(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCA9DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r25,106(r31)
	PPC_STORE_U8(ctx.r31.u32 + 106, ctx.r25.u8);
loc_82BCA9E0:
	// lbz r11,107(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 107);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcaa20
	if (!cr6.eq) goto loc_82BCAA20;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2f3b0
	ctx.lr = 0x82BCA9F4;
	sub_82A2F3B0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// ble cr6,0x82bcaa20
	if (!cr6.gt) goto loc_82BCAA20;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCAA1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r25,107(r31)
	PPC_STORE_U8(ctx.r31.u32 + 107, ctx.r25.u8);
loc_82BCAA20:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x83815cb8
	ctx.lr = 0x82BCAA3C;
	sub_83815CB8(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r6,-24712
	ctx.r5.s64 = ctx.r6.s64 + -24712;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82BCAA50;
	sub_825E0CF8(ctx, base);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bcaa70
	if (cr6.eq) goto loc_82BCAA70;
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
	ctx.lr = 0x82BCAA70;
	sub_8353F3B8(ctx, base);
loc_82BCAA70:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCAA80"))) PPC_WEAK_FUNC(sub_82BCAA80);
PPC_FUNC_IMPL(__imp__sub_82BCAA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BCAA88;
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
	ctx.lr = 0x82BCAAA0;
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
	ctx.lr = 0x82BCAAB8;
	sub_82D253F8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-27872
	ctx.r8.s64 = ctx.r10.s64 + -27872;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// stb r11,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r11.u8);
	// stb r6,106(r31)
	PPC_STORE_U8(ctx.r31.u32 + 106, ctx.r6.u8);
	// lwz r4,24544(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24544);
	// bl 0x82d20ae0
	ctx.lr = 0x82BCAB00;
	sub_82D20AE0(ctx, base);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,-28164
	ctx.r4.s64 = ctx.r4.s64 + -28164;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82BCAB14;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCAB20"))) PPC_WEAK_FUNC(sub_82BCAB20);
PPC_FUNC_IMPL(__imp__sub_82BCAB20) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82bcab68
	if (cr6.eq) goto loc_82BCAB68;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82bcab60
	if (!cr6.eq) goto loc_82BCAB60;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82BCAB58;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82bcab78
	goto loc_82BCAB78;
loc_82BCAB60:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82bcab70
	goto loc_82BCAB70;
loc_82BCAB68:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BCAB70:
	// bl 0x82d19788
	ctx.lr = 0x82BCAB74;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82BCAB78:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BCAB84;
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

__attribute__((alias("__imp__sub_82BCAB98"))) PPC_WEAK_FUNC(sub_82BCAB98);
PPC_FUNC_IMPL(__imp__sub_82BCAB98) {
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
	// bl 0x830f0f30
	ctx.lr = 0x82BCABB0;
	sub_830F0F30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcabe0
	if (cr6.eq) goto loc_82BCABE0;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcabe0
	if (cr6.eq) goto loc_82BCABE0;
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
loc_82BCABE0:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82bcac20
	if (cr6.eq) goto loc_82BCAC20;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82bcac20
	if (cr6.eq) goto loc_82BCAC20;
	// bl 0x831021a0
	ctx.lr = 0x82BCABF8;
	sub_831021A0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// addi r5,r11,-28120
	ctx.r5.s64 = ctx.r11.s64 + -28120;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x83102a08
	ctx.lr = 0x82BCAC0C;
	sub_83102A08(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82BCAC10;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// bl 0x83102a08
	ctx.lr = 0x82BCAC20;
	sub_83102A08(ctx, base);
loc_82BCAC20:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82bcac40
	if (!cr6.eq) goto loc_82BCAC40;
	// bl 0x831021a0
	ctx.lr = 0x82BCAC30;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// bl 0x83102a08
	ctx.lr = 0x82BCAC40;
	sub_83102A08(ctx, base);
loc_82BCAC40:
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

__attribute__((alias("__imp__sub_82BCAC58"))) PPC_WEAK_FUNC(sub_82BCAC58);
PPC_FUNC_IMPL(__imp__sub_82BCAC58) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BCAC78;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82BCAC88;
	sub_82D19788(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-28104
	ctx.r5.s64 = ctx.r11.s64 + -28104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BCAC9C;
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

__attribute__((alias("__imp__sub_82BCACB0"))) PPC_WEAK_FUNC(sub_82BCACB0);
PPC_FUNC_IMPL(__imp__sub_82BCACB0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BCACD0;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82BCACE0;
	sub_82D19788(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-28096
	ctx.r5.s64 = ctx.r11.s64 + -28096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BCACF4;
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

__attribute__((alias("__imp__sub_82BCAD08"))) PPC_WEAK_FUNC(sub_82BCAD08);
PPC_FUNC_IMPL(__imp__sub_82BCAD08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,104(r11)
	PPC_STORE_U8(ctx.r11.u32 + 104, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BCAD30"))) PPC_WEAK_FUNC(sub_82BCAD30);
PPC_FUNC_IMPL(__imp__sub_82BCAD30) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
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
	ctx.lr = 0x82BCAD68;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bcad80
	if (cr6.eq) goto loc_82BCAD80;
	// bl 0x82416268
	ctx.lr = 0x82BCAD7C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BCAD80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BCAD98"))) PPC_WEAK_FUNC(sub_82BCAD98);
PPC_FUNC_IMPL(__imp__sub_82BCAD98) {
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
	// blt cr6,0x82bcadc0
	if (cr6.lt) goto loc_82BCADC0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bcadc4
	goto loc_82BCADC4;
loc_82BCADC0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BCADC4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BCADE0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcae00
	if (cr6.eq) goto loc_82BCAE00;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bcaa80
	ctx.lr = 0x82BCADF8;
	sub_82BCAA80(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bcae04
	if (!cr6.eq) goto loc_82BCAE04;
loc_82BCAE00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BCAE04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BCAE1C"))) PPC_WEAK_FUNC(sub_82BCAE1C);
PPC_FUNC_IMPL(__imp__sub_82BCAE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCAE20"))) PPC_WEAK_FUNC(sub_82BCAE20);
PPC_FUNC_IMPL(__imp__sub_82BCAE20) {
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
	// blt cr6,0x82bcae48
	if (cr6.lt) goto loc_82BCAE48;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bcae4c
	goto loc_82BCAE4C;
loc_82BCAE48:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BCAE4C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BCAE68;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcae88
	if (cr6.eq) goto loc_82BCAE88;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bcaa80
	ctx.lr = 0x82BCAE80;
	sub_82BCAA80(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bcae8c
	if (!cr6.eq) goto loc_82BCAE8C;
loc_82BCAE88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BCAE8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BCAEA4"))) PPC_WEAK_FUNC(sub_82BCAEA4);
PPC_FUNC_IMPL(__imp__sub_82BCAEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCAEA8"))) PPC_WEAK_FUNC(sub_82BCAEA8);
PPC_FUNC_IMPL(__imp__sub_82BCAEA8) {
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
	// blt cr6,0x82bcaed0
	if (cr6.lt) goto loc_82BCAED0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bcaed4
	goto loc_82BCAED4;
loc_82BCAED0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BCAED4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BCAEF0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcaf10
	if (cr6.eq) goto loc_82BCAF10;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bcaa80
	ctx.lr = 0x82BCAF08;
	sub_82BCAA80(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bcaf14
	if (!cr6.eq) goto loc_82BCAF14;
loc_82BCAF10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BCAF14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BCAF2C"))) PPC_WEAK_FUNC(sub_82BCAF2C);
PPC_FUNC_IMPL(__imp__sub_82BCAF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCAF30"))) PPC_WEAK_FUNC(sub_82BCAF30);
PPC_FUNC_IMPL(__imp__sub_82BCAF30) {
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
	// blt cr6,0x82bcaf58
	if (cr6.lt) goto loc_82BCAF58;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bcaf5c
	goto loc_82BCAF5C;
loc_82BCAF58:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BCAF5C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BCAF78;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcaf98
	if (cr6.eq) goto loc_82BCAF98;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bcaa80
	ctx.lr = 0x82BCAF90;
	sub_82BCAA80(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bcaf9c
	if (!cr6.eq) goto loc_82BCAF9C;
loc_82BCAF98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BCAF9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BCAFB4"))) PPC_WEAK_FUNC(sub_82BCAFB4);
PPC_FUNC_IMPL(__imp__sub_82BCAFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCAFB8"))) PPC_WEAK_FUNC(sub_82BCAFB8);
PPC_FUNC_IMPL(__imp__sub_82BCAFB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82BCAFC0;
	__savegprlr_22(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x83131890
	ctx.lr = 0x82BCAFD0;
	sub_83131890(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BCAFDC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r23,r11,-27964
	ctx.r23.s64 = ctx.r11.s64 + -27964;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r23,-124
	ctx.r4.s64 = ctx.r23.s64 + -124;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCAFFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82BCB004;
	sub_82D29598(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r8,r9,-24636
	ctx.r8.s64 = ctx.r9.s64 + -24636;
	// stb r29,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r29.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// bl 0x825aa080
	ctx.lr = 0x82BCB030;
	sub_825AA080(ctx, base);
	// lbz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82bcb044
	if (!cr6.eq) goto loc_82BCB044;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825aa080
	ctx.lr = 0x82BCB044;
	sub_825AA080(ctx, base);
loc_82BCB044:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bcb064
	if (!cr6.eq) goto loc_82BCB064;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r3,r10,4
	xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r3.s64 = ctx.r10.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// beq 0x82bcb080
	if (cr0.eq) goto loc_82BCB080;
loc_82BCB064:
	// bl 0x83a970c8
	ctx.lr = 0x82BCB068;
	sub_83A970C8(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
loc_82BCB080:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a189f0
	ctx.lr = 0x82BCB088;
	sub_82A189F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x82BCB094;
	sub_83102DB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837475e8
	ctx.lr = 0x82BCB0A0;
	sub_837475E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bcb0c4
	if (!cr6.eq) goto loc_82BCB0C4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x82BCB0B4;
	sub_83102DB0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a8d40
	ctx.lr = 0x82BCB0BC;
	sub_825A8D40(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82BCB0C4:
	// li r22,15
	ctx.r22.s64 = 15;
	// lwz r27,2844(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2844);
	// lwz r31,2852(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2852);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r28,2848(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2848);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stb r29,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r29.u8);
	// bl 0x82a8c428
	ctx.lr = 0x82BCB0F0;
	sub_82A8C428(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82474050
	ctx.lr = 0x82BCB0FC;
	sub_82474050(ctx, base);
	// addi r4,r1,472
	ctx.r4.s64 = ctx.r1.s64 + 472;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82a79bf8
	ctx.lr = 0x82BCB108;
	sub_82A79BF8(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bcb11c
	if (!cr6.lt) goto loc_82BCB11C;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
loc_82BCB11C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BCB120:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bcb120
	if (!cr6.eq) goto loc_82BCB120;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BCB144;
	sub_8259CC28(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bcb158
	if (cr6.lt) goto loc_82BCB158;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x82BCB158;
	sub_82416268(ctx, base);
loc_82BCB158:
	// stw r22,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r22.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r29,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r29.u32);
	// stb r29,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r29.u8);
	// bl 0x82d19a68
	ctx.lr = 0x82BCB16C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r23,-108
	ctx.r4.s64 = ctx.r23.s64 + -108;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCB184;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82d291e0
	ctx.lr = 0x82BCB194;
	sub_82D291E0(ctx, base);
	// addi r4,r23,-473
	ctx.r4.s64 = ctx.r23.s64 + -473;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82475d40
	ctx.lr = 0x82BCB1A0;
	sub_82475D40(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82a79608
	ctx.lr = 0x82BCB1AC;
	sub_82A79608(ctx, base);
	// lwz r9,404(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bcb1c0
	if (cr6.lt) goto loc_82BCB1C0;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x82BCB1C0;
	sub_82416268(ctx, base);
loc_82BCB1C0:
	// stw r22,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r22.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r29.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stb r29,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r29.u8);
	// bl 0x82474050
	ctx.lr = 0x82BCB1D8;
	sub_82474050(ctx, base);
	// addi r4,r1,472
	ctx.r4.s64 = ctx.r1.s64 + 472;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82a79bf8
	ctx.lr = 0x82BCB1E4;
	sub_82A79BF8(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bcb1f8
	if (!cr6.lt) goto loc_82BCB1F8;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_82BCB1F8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BCB1FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bcb1fc
	if (!cr6.eq) goto loc_82BCB1FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BCB220;
	sub_8259CC28(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bcb234
	if (cr6.lt) goto loc_82BCB234;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x82BCB234;
	sub_82416268(ctx, base);
loc_82BCB234:
	// stw r22,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r22.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r29,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r29.u32);
	// stb r29,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r29.u8);
	// bl 0x82d19a68
	ctx.lr = 0x82BCB248;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r23,-88
	ctx.r4.s64 = ctx.r23.s64 + -88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCB260;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82d291e0
	ctx.lr = 0x82BCB270;
	sub_82D291E0(ctx, base);
	// addi r4,r23,-442
	ctx.r4.s64 = ctx.r23.s64 + -442;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82475d40
	ctx.lr = 0x82BCB27C;
	sub_82475D40(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82a79608
	ctx.lr = 0x82BCB288;
	sub_82A79608(ctx, base);
	// lwz r9,436(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bcb29c
	if (cr6.lt) goto loc_82BCB29C;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x82BCB29C;
	sub_82416268(ctx, base);
loc_82BCB29C:
	// stw r22,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r22.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r29,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r29.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stb r29,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r29.u8);
	// bl 0x82474050
	ctx.lr = 0x82BCB2B4;
	sub_82474050(ctx, base);
	// addi r4,r1,472
	ctx.r4.s64 = ctx.r1.s64 + 472;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82a79bf8
	ctx.lr = 0x82BCB2C0;
	sub_82A79BF8(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bcb2d4
	if (!cr6.lt) goto loc_82BCB2D4;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
loc_82BCB2D4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BCB2D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bcb2d8
	if (!cr6.eq) goto loc_82BCB2D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BCB2FC;
	sub_8259CC28(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bcb310
	if (cr6.lt) goto loc_82BCB310;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x82BCB310;
	sub_82416268(ctx, base);
loc_82BCB310:
	// stw r22,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r22.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// stb r29,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r29.u8);
	// bl 0x82d19a68
	ctx.lr = 0x82BCB324;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r23,-68
	ctx.r4.s64 = ctx.r23.s64 + -68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCB33C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82d291e0
	ctx.lr = 0x82BCB34C;
	sub_82D291E0(ctx, base);
	// lwz r3,96(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// bl 0x83131930
	ctx.lr = 0x82BCB354;
	sub_83131930(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,96(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// bl 0x83131980
	ctx.lr = 0x82BCB360;
	sub_83131980(ctx, base);
	// stw r22,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
loc_82BCB37C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,96(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// bl 0x831319d0
	ctx.lr = 0x82BCB388;
	sub_831319D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcb394
	if (cr6.eq) goto loc_82BCB394;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82BCB394:
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82bcb458
	if (cr6.gt) goto loc_82BCB458;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-19528
	ctx.r12.s64 = ctx.r12.s64 + -19528;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82BCB3E0;
	case 1:
		goto loc_82BCB3EC;
	case 2:
		goto loc_82BCB3F8;
	case 3:
		goto loc_82BCB404;
	case 4:
		goto loc_82BCB410;
	case 5:
		goto loc_82BCB41C;
	case 6:
		goto loc_82BCB428;
	case 7:
		goto loc_82BCB434;
	case 8:
		goto loc_82BCB440;
	case 9:
		goto loc_82BCB44C;
	default:
		return;
	}
	// lwz r21,-19488(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19488);
	// lwz r21,-19476(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19476);
	// lwz r21,-19464(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19464);
	// lwz r21,-19452(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19452);
	// lwz r21,-19440(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19440);
	// lwz r21,-19428(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19428);
	// lwz r21,-19416(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19416);
	// lwz r21,-19404(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19404);
	// lwz r21,-19392(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19392);
	// lwz r21,-19380(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19380);
loc_82BCB3E0:
	// lwz r11,2856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2856);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82bcb45c
	goto loc_82BCB45C;
loc_82BCB3EC:
	// lwz r11,2860(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2860);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82bcb45c
	goto loc_82BCB45C;
loc_82BCB3F8:
	// lwz r11,2864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2864);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82bcb45c
	goto loc_82BCB45C;
loc_82BCB404:
	// lwz r11,2868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2868);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82bcb45c
	goto loc_82BCB45C;
loc_82BCB410:
	// lwz r11,2872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2872);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82bcb45c
	goto loc_82BCB45C;
loc_82BCB41C:
	// lwz r11,2876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2876);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82bcb45c
	goto loc_82BCB45C;
loc_82BCB428:
	// lwz r11,2880(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2880);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82bcb45c
	goto loc_82BCB45C;
loc_82BCB434:
	// lwz r11,2884(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2884);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82bcb45c
	goto loc_82BCB45C;
loc_82BCB440:
	// lwz r11,2888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2888);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82bcb45c
	goto loc_82BCB45C;
loc_82BCB44C:
	// lwz r11,2892(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2892);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82bcb45c
	goto loc_82BCB45C;
loc_82BCB458:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82BCB45C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// blt cr6,0x82bcb37c
	if (cr6.lt) goto loc_82BCB37C;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82bcb4f4
	if (cr6.gt) goto loc_82BCB4F4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bcb4a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BCB4A0;
	// bdzf 4*cr6+eq,0x82bcb4b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BCB4B8;
	// bne cr6,0x82bcb4d4
	if (!cr6.eq) goto loc_82BCB4D4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d042a8
	ctx.lr = 0x82BCB49C;
	sub_82D042A8(ctx, base);
	// b 0x82bcb500
	goto loc_82BCB500;
loc_82BCB4A0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82d042a8
	ctx.lr = 0x82BCB4B4;
	sub_82D042A8(ctx, base);
	// b 0x82bcb500
	goto loc_82BCB500;
loc_82BCB4B8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82d042a8
	ctx.lr = 0x82BCB4D0;
	sub_82D042A8(ctx, base);
	// b 0x82bcb500
	goto loc_82BCB500;
loc_82BCB4D4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82d042a8
	ctx.lr = 0x82BCB4F0;
	sub_82D042A8(ctx, base);
	// b 0x82bcb500
	goto loc_82BCB500;
loc_82BCB4F4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d04220
	ctx.lr = 0x82BCB500;
	sub_82D04220(ctx, base);
loc_82BCB500:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BCB508;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r23,-52
	ctx.r4.s64 = ctx.r23.s64 + -52;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCB520;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,96(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// li r28,2
	ctx.r28.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,22
	cr6.compare<uint32_t>(ctx.r9.u32, 22, xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bne cr6,0x82bcb598
	if (!cr6.eq) goto loc_82BCB598;
	// stw r22,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r22.u32);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r29,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r29.u8);
	// lwz r10,2904(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2904);
	// divwu r5,r10,r11
	ctx.r5.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82BCB558;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BCB56C;
	sub_82D291E0(ctx, base);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bcb588
	if (cr6.lt) goto loc_82BCB588;
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82BCB588;
	sub_825952B8(ctx, base);
loc_82BCB588:
	// stw r22,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r22.u32);
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// stb r29,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r29.u8);
	// b 0x82bcb5a0
	goto loc_82BCB5A0;
loc_82BCB598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82BCB5A0;
	sub_82D29598(ctx, base);
loc_82BCB5A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d31b0
	ctx.lr = 0x82BCB5A8;
	sub_835D31B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCB5B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d31b0
	ctx.lr = 0x82BCB5C0;
	sub_835D31B0(ctx, base);
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r4,r23,-28
	ctx.r4.s64 = ctx.r23.s64 + -28;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82BCB5E0;
	sub_8259CC28(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x82bcb5fc
	if (cr6.gt) goto loc_82BCB5FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9132
	ctx.r3.s64 = ctx.r11.s64 + 9132;
	// bl 0x831cc150
	ctx.lr = 0x82BCB5FC;
	sub_831CC150(ctx, base);
loc_82BCB5FC:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259ca68
	ctx.lr = 0x82BCB610;
	sub_8259CA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcb65c
	if (cr6.eq) goto loc_82BCB65C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// bge cr6,0x82bcb638
	if (!cr6.lt) goto loc_82BCB638;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82BCB638:
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bge cr6,0x82bcb658
	if (!cr6.lt) goto loc_82BCB658;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82BCB658:
	// stbx r29,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u8);
loc_82BCB65C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCB664;
	sub_82D19A78(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bcb678
	if (!cr6.lt) goto loc_82BCB678;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82BCB678:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCB68C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BCB694;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r23,-20
	ctx.r4.s64 = ctx.r23.s64 + -20;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BCB6AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BCB6C0;
	sub_82D291E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d31b0
	ctx.lr = 0x82BCB6C8;
	sub_835D31B0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,80(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BCB6D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d31b0
	ctx.lr = 0x82BCB6E0;
	sub_835D31B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,68(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x8259cc28
	ctx.lr = 0x82BCB6F8;
	sub_8259CC28(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subfic r10,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x82bcb714
	if (cr6.gt) goto loc_82BCB714;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9132
	ctx.r3.s64 = ctx.r11.s64 + 9132;
	// bl 0x831cc150
	ctx.lr = 0x82BCB714;
	sub_831CC150(ctx, base);
loc_82BCB714:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259ca68
	ctx.lr = 0x82BCB728;
	sub_8259CA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcb774
	if (cr6.eq) goto loc_82BCB774;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// bge cr6,0x82bcb750
	if (!cr6.lt) goto loc_82BCB750;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82BCB750:
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82bcb770
	if (!cr6.lt) goto loc_82BCB770;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82BCB770:
	// stbx r29,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u8);
loc_82BCB774:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCB77C;
	sub_82D19A78(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bcb790
	if (!cr6.lt) goto loc_82BCB790;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82BCB790:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCB7A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bcb7c0
	if (cr6.lt) goto loc_82BCB7C0;
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BCB7C0;
	sub_825952B8(ctx, base);
loc_82BCB7C0:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// blt cr6,0x82bcb7e8
	if (cr6.lt) goto loc_82BCB7E8;
	// stw r28,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r28.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82BCB7E8;
	sub_825952B8(ctx, base);
loc_82BCB7E8:
	// stw r22,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// bl 0x82a79160
	ctx.lr = 0x82BCB7FC;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82BCB810;
	sub_831CCF00(ctx, base);
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bcb82c
	if (cr6.lt) goto loc_82BCB82C;
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82BCB82C;
	sub_825952B8(ctx, base);
loc_82BCB82C:
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stb r29,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r29.u8);
	// bl 0x83102db0
	ctx.lr = 0x82BCB840;
	sub_83102DB0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// beq cr6,0x82bcb880
	if (cr6.eq) goto loc_82BCB880;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bcb880
	if (cr6.eq) goto loc_82BCB880;
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
	ctx.lr = 0x82BCB878;
	sub_8353F3B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
loc_82BCB880:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r29,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r29.u8);
	// beq cr6,0x82bcb8a0
	if (cr6.eq) goto loc_82BCB8A0;
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
	ctx.lr = 0x82BCB8A0;
	sub_8353F3B8(ctx, base);
loc_82BCB8A0:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCB8A8"))) PPC_WEAK_FUNC(sub_82BCB8A8);
PPC_FUNC_IMPL(__imp__sub_82BCB8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BCB8B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x82BCB8C0;
	sub_83102DB0(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82BCB8C4;
	sub_831021A0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82bcb8e0
	if (cr6.eq) goto loc_82BCB8E0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82bcb8e8
	if (!cr6.eq) goto loc_82BCB8E8;
loc_82BCB8E0:
	// stb r26,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r26.u8);
	// stb r26,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r26.u8);
loc_82BCB8E8:
	// lbz r10,105(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 105);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r11,-28438
	ctx.r27.s64 = ctx.r11.s64 + -28438;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bcb978
	if (!cr6.eq) goto loc_82BCB978;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcab20
	ctx.lr = 0x82BCB90C;
	sub_82BCAB20(ctx, base);
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// addi r5,r27,294
	ctx.r5.s64 = ctx.r27.s64 + 294;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83102a08
	ctx.lr = 0x82BCB920;
	sub_83102A08(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83102a08
	ctx.lr = 0x82BCB934;
	sub_83102A08(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83102a08
	ctx.lr = 0x82BCB948;
	sub_83102A08(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stb r30,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r30.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcb970
	if (!cr6.eq) goto loc_82BCB970;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82d4f040
	ctx.lr = 0x82BCB968;
	sub_82D4F040(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17aa0
	ctx.lr = 0x82BCB970;
	sub_82D17AA0(ctx, base);
loc_82BCB970:
	// stb r30,106(r31)
	PPC_STORE_U8(ctx.r31.u32 + 106, ctx.r30.u8);
	// stb r26,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r26.u8);
loc_82BCB978:
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcb990
	if (!cr6.eq) goto loc_82BCB990;
loc_82BCB984:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82BCB990:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcb9ec
	if (!cr6.eq) goto loc_82BCB9EC;
	// lbz r11,106(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 106);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcb9dc
	if (!cr6.eq) goto loc_82BCB9DC;
	// bl 0x82d4de10
	ctx.lr = 0x82BCB9AC;
	sub_82D4DE10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcb9dc
	if (cr6.eq) goto loc_82BCB9DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d4de98
	ctx.lr = 0x82BCB9C4;
	sub_82D4DE98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x82BCB9CC;
	sub_82D17AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r26,106(r31)
	PPC_STORE_U8(ctx.r31.u32 + 106, ctx.r26.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82BCB9DC:
	// bl 0x82d4df50
	ctx.lr = 0x82BCB9E0;
	sub_82D4DF50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcb984
	if (cr6.eq) goto loc_82BCB984;
loc_82BCB9EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcab20
	ctx.lr = 0x82BCB9F8;
	sub_82BCAB20(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82BCB9FC;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r29,52(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r10,r11,35260
	ctx.r10.u64 = ctx.r11.u64 | 35260;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// beq cr6,0x82bcba38
	if (cr6.eq) goto loc_82BCBA38;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82bcba38
	if (cr6.eq) goto loc_82BCBA38;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r4,r4,34
	ctx.r4.u64 = ctx.r4.u64 | 34;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83102a08
	ctx.lr = 0x82BCBA38;
	sub_83102A08(ctx, base);
loc_82BCBA38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcafb8
	ctx.lr = 0x82BCBA40;
	sub_82BCAFB8(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// oris r4,r6,65532
	ctx.r4.u64 = ctx.r6.u64 | 4294705152;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// oris r3,r5,65532
	ctx.r3.u64 = ctx.r5.u64 | 4294705152;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// or r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 | ctx.r7.u64;
	// lwz r11,24628(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24628);
	// or r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 | ctx.r7.u64;
	// clrlwi r7,r10,14
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFFF;
	// rlwinm r8,r11,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC0000;
	// clrlwi r6,r9,14
	ctx.r6.u64 = ctx.r9.u32 & 0x3FFFF;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// clrlwi r3,r11,14
	ctx.r3.u64 = ctx.r11.u32 & 0x3FFFF;
	// rlwinm r11,r5,0,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFC0000;
	// rlwinm r10,r4,0,0,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFC0000;
	// or r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 | ctx.r3.u64;
	// or r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 | ctx.r3.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x830ff290
	ctx.lr = 0x82BCBAB8;
	sub_830FF290(ctx, base);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stb r26,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r26.u8);
	// addis r3,r29,2
	ctx.r3.s64 = ctx.r29.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,-20656
	ctx.r3.s64 = ctx.r3.s64 + -20656;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x83126148
	ctx.lr = 0x82BCBAD8;
	sub_83126148(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCBAE4"))) PPC_WEAK_FUNC(sub_82BCBAE4);
PPC_FUNC_IMPL(__imp__sub_82BCBAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCBAE8"))) PPC_WEAK_FUNC(sub_82BCBAE8);
PPC_FUNC_IMPL(__imp__sub_82BCBAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCBAF0;
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
	ctx.lr = 0x82BCBB04;
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
	ctx.lr = 0x82BCBB1C;
	sub_82D253F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27032
	ctx.r9.s64 = ctx.r11.s64 + -27032;
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
	// lwz r4,24848(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24848);
	// bl 0x82d20ae0
	ctx.lr = 0x82BCBB44;
	sub_82D20AE0(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-27244
	ctx.r4.s64 = ctx.r6.s64 + -27244;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d233a0
	ctx.lr = 0x82BCBB58;
	sub_82D233A0(ctx, base);
	// bl 0x82d17d90
	ctx.lr = 0x82BCBB5C;
	sub_82D17D90(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCBB6C"))) PPC_WEAK_FUNC(sub_82BCBB6C);
PPC_FUNC_IMPL(__imp__sub_82BCBB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCBB70"))) PPC_WEAK_FUNC(sub_82BCBB70);
PPC_FUNC_IMPL(__imp__sub_82BCBB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCBB78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82BCBB84;
	sub_82D1C1A8(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,24700
	ctx.r30.s64 = ctx.r11.s64 + 24700;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,-20
	ctx.r8.s64 = ctx.r30.s64 + -20;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// blt cr6,0x82bcbc30
	if (cr6.lt) goto loc_82BCBC30;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BCBBB8;
	sub_82D19788(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82BCBBBC;
	sub_831156E8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(ctx.r11.s32, 28, xer);
	// bge cr6,0x82bcbbe4
	if (!cr6.lt) goto loc_82BCBBE4;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r8,r10,35260
	ctx.r8.u64 = ctx.r10.u64 | 35260;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
loc_82BCBBE4:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82bcbc10
	if (cr6.eq) goto loc_82BCBC10;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-27192
	ctx.r11.s64 = ctx.r11.s64 + -27192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x82d20da8
	ctx.lr = 0x82BCBC08;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BCBC10:
	// bl 0x82d26ed8
	ctx.lr = 0x82BCBC14;
	sub_82D26ED8(ctx, base);
	// li r4,200
	ctx.r4.s64 = 200;
	// bl 0x82d26960
	ctx.lr = 0x82BCBC1C;
	sub_82D26960(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-27192
	ctx.r5.s64 = ctx.r11.s64 + -27192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BCBC30;
	sub_82D20DA8(ctx, base);
loc_82BCBC30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCBC38"))) PPC_WEAK_FUNC(sub_82BCBC38);
PPC_FUNC_IMPL(__imp__sub_82BCBC38) {
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
	// blt cr6,0x82bcbc60
	if (cr6.lt) goto loc_82BCBC60;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bcbc64
	goto loc_82BCBC64;
loc_82BCBC60:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BCBC64:
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
	ctx.lr = 0x82BCBC80;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcbc9c
	if (cr6.eq) goto loc_82BCBC9C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bcbae8
	ctx.lr = 0x82BCBC94;
	sub_82BCBAE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bcbca0
	if (!cr6.eq) goto loc_82BCBCA0;
loc_82BCBC9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BCBCA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BCBCB8"))) PPC_WEAK_FUNC(sub_82BCBCB8);
PPC_FUNC_IMPL(__imp__sub_82BCBCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BCBCC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82BCBCCC;
	sub_82D1C1A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BCBCD8;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-27184
	ctx.r4.s64 = ctx.r11.s64 + -27184;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BCBCF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,96(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r7,24700
	ctx.r6.s64 = ctx.r7.s64 + 24700;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831318e0
	ctx.lr = 0x82BCBD18;
	sub_831318E0(ctx, base);
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bne cr6,0x82bcbdd8
	if (!cr6.eq) goto loc_82BCBDD8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x83131890
	ctx.lr = 0x82BCBD50;
	sub_83131890(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04220
	ctx.lr = 0x82BCBD5C;
	sub_82D04220(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bcbd70
	if (!cr6.lt) goto loc_82BCBD70;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82BCBD70:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x82BCBD7C;
	sub_82D042A8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d39b70
	ctx.lr = 0x82BCBD88;
	sub_82D39B70(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bcbda8
	if (cr6.lt) goto loc_82BCBDA8;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BCBDA8;
	sub_825952B8(ctx, base);
loc_82BCBDA8:
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
	// blt cr6,0x82bcbde4
	if (cr6.lt) goto loc_82BCBDE4;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BCBDD0;
	sub_825952B8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BCBDD8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d39ab8
	ctx.lr = 0x82BCBDE4;
	sub_82D39AB8(ctx, base);
loc_82BCBDE4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCBDEC"))) PPC_WEAK_FUNC(sub_82BCBDEC);
PPC_FUNC_IMPL(__imp__sub_82BCBDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCBDF0"))) PPC_WEAK_FUNC(sub_82BCBDF0);
PPC_FUNC_IMPL(__imp__sub_82BCBDF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bcbcb8
	sub_82BCBCB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCBDF4"))) PPC_WEAK_FUNC(sub_82BCBDF4);
PPC_FUNC_IMPL(__imp__sub_82BCBDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCBDF8"))) PPC_WEAK_FUNC(sub_82BCBDF8);
PPC_FUNC_IMPL(__imp__sub_82BCBDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82BCBE00;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce770
	ctx.lr = 0x82BCBE08;
	__savefpr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82BCBE18;
	sub_82D19A88(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r26,r11,24676
	ctx.r26.s64 = ctx.r11.s64 + 24676;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r26,4
	ctx.r8.s64 = ctx.r26.s64 + 4;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lwzx r23,r9,r8
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82bcc01c
	if (cr6.eq) goto loc_82BCC01C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lfs f26,-27732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27732);
	ctx.f26.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f27,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f27.f64 = double(temp.f32);
	// lfs f30,-11352(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11352);
	ctx.f30.f64 = double(temp.f32);
	// li r24,15
	ctx.r24.s64 = 15;
	// lfs f28,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f28.f64 = double(temp.f32);
	// addi r29,r11,-27128
	ctx.r29.s64 = ctx.r11.s64 + -27128;
	// lfs f29,-26744(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26744);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,-26260(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_82BCBE80:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BCBE8C;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc010
	if (cr6.eq) goto loc_82BCC010;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// addi r10,r26,24
	ctx.r10.s64 = ctx.r26.s64 + 24;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x83131890
	ctx.lr = 0x82BCBEB4;
	sub_83131890(ctx, base);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
	// addi r4,r29,-44
	ctx.r4.s64 = ctx.r29.s64 + -44;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82BCBED4;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82a69a28
	ctx.lr = 0x82BCBEE4;
	sub_82A69A28(ctx, base);
	// lwz r7,100(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r6,96(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// addi r8,r26,24
	ctx.r8.s64 = ctx.r26.s64 + 24;
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwzx r11,r5,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCBF10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc010
	if (cr6.eq) goto loc_82BCC010;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82d3a058
	ctx.lr = 0x82BCBF24;
	sub_82D3A058(ctx, base);
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82bcbf38
	if (!cr6.eq) goto loc_82BCBF38;
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// b 0x82bcbff8
	goto loc_82BCBFF8;
loc_82BCBF38:
	// bl 0x831156e8
	ctx.lr = 0x82BCBF3C;
	sub_831156E8(ctx, base);
	// addi r11,r30,27544
	ctx.r11.s64 = ctx.r30.s64 + 27544;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82bcbff4
	if (!cr6.gt) goto loc_82BCBFF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCBF70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82BCBF74;
	sub_831156E8(ctx, base);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwzx r11,r9,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82bcbfd4
	if (cr6.eq) goto loc_82BCBFD4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82bcbfb4
	if (cr6.eq) goto loc_82BCBFB4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82bcc010
	if (!cr6.eq) goto loc_82BCC010;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82d2b238
	ctx.lr = 0x82BCBFB0;
	sub_82D2B238(ctx, base);
	// b 0x82bcc010
	goto loc_82BCC010;
loc_82BCBFB4:
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82d2b238
	ctx.lr = 0x82BCBFD0;
	sub_82D2B238(ctx, base);
	// b 0x82bcc010
	goto loc_82BCC010;
loc_82BCBFD4:
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f27,116(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f26,120(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82d2b238
	ctx.lr = 0x82BCBFF0;
	sub_82D2B238(ctx, base);
	// b 0x82bcc010
	goto loc_82BCC010;
loc_82BCBFF4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BCBFF8:
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
	ctx.lr = 0x82BCC010;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BCC010:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, xer);
	// blt cr6,0x82bcbe80
	if (cr6.lt) goto loc_82BCBE80;
loc_82BCC01C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce7bc
	ctx.lr = 0x82BCC028;
	__restfpr_26(ctx, base);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCC02C"))) PPC_WEAK_FUNC(sub_82BCC02C);
PPC_FUNC_IMPL(__imp__sub_82BCC02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCC030"))) PPC_WEAK_FUNC(sub_82BCC030);
PPC_FUNC_IMPL(__imp__sub_82BCC030) {
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
	// bl 0x82bcbdf8
	ctx.lr = 0x82BCC04C;
	sub_82BCBDF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BCC054;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r11,-27212
	ctx.r30.s64 = ctx.r11.s64 + -27212;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCC074;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82bcc0c8
	if (cr6.gt) goto loc_82BCC0C8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bcc0a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BCC0A4;
	// bdzf 4*cr6+eq,0x82bcc0b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BCC0B0;
	// bne cr6,0x82bcc0bc
	if (!cr6.eq) goto loc_82BCC0BC;
	// lis r4,23
	ctx.r4.s64 = 1507328;
	// ori r4,r4,345
	ctx.r4.u64 = ctx.r4.u64 | 345;
	// b 0x82bcc0d0
	goto loc_82BCC0D0;
loc_82BCC0A4:
	// lis r4,69
	ctx.r4.s64 = 4521984;
	// ori r4,r4,42
	ctx.r4.u64 = ctx.r4.u64 | 42;
	// b 0x82bcc0d0
	goto loc_82BCC0D0;
loc_82BCC0B0:
	// lis r4,23
	ctx.r4.s64 = 1507328;
	// ori r4,r4,346
	ctx.r4.u64 = ctx.r4.u64 | 346;
	// b 0x82bcc0d0
	goto loc_82BCC0D0;
loc_82BCC0BC:
	// lis r4,23
	ctx.r4.s64 = 1507328;
	// ori r4,r4,347
	ctx.r4.u64 = ctx.r4.u64 | 347;
	// b 0x82bcc0d0
	goto loc_82BCC0D0;
loc_82BCC0C8:
	// lis r4,69
	ctx.r4.s64 = 4521984;
	// ori r4,r4,41
	ctx.r4.u64 = ctx.r4.u64 | 41;
loc_82BCC0D0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc0e0
	if (cr6.eq) goto loc_82BCC0E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d30340
	ctx.lr = 0x82BCC0E0;
	sub_82D30340(ctx, base);
loc_82BCC0E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BCC0E8;
	sub_82D19A68(ctx, base);
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
	ctx.lr = 0x82BCC100;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc118
	if (cr6.eq) goto loc_82BCC118;
	// lis r4,23
	ctx.r4.s64 = 1507328;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,312
	ctx.r4.u64 = ctx.r4.u64 | 312;
	// bl 0x82d30340
	ctx.lr = 0x82BCC118;
	sub_82D30340(ctx, base);
loc_82BCC118:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82BCC120;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcc13c
	if (!cr6.eq) goto loc_82BCC13C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82BCC13C;
	sub_82D1EAC0(ctx, base);
loc_82BCC13C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbcb8
	ctx.lr = 0x82BCC144;
	sub_82BCBCB8(ctx, base);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,24680
	ctx.r10.s64 = ctx.r11.s64 + 24680;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x82d1ed60
	ctx.lr = 0x82BCC164;
	sub_82D1ED60(ctx, base);
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

__attribute__((alias("__imp__sub_82BCC180"))) PPC_WEAK_FUNC(sub_82BCC180);
PPC_FUNC_IMPL(__imp__sub_82BCC180) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24144
	ctx.r9.s64 = ctx.r11.s64 + -24144;
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
	// bl 0x82f00728
	ctx.lr = 0x82BCC1B8;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc1cc
	if (cr6.eq) goto loc_82BCC1CC;
	// bl 0x82eff1a8
	ctx.lr = 0x82BCC1C4;
	sub_82EFF1A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,272(r3)
	PPC_STORE_U8(ctx.r3.u32 + 272, ctx.r11.u8);
loc_82BCC1CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82BCC1D4;
	sub_82D25548(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcc1ec
	if (cr6.eq) goto loc_82BCC1EC;
	// bl 0x82416268
	ctx.lr = 0x82BCC1E8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BCC1EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BCC204"))) PPC_WEAK_FUNC(sub_82BCC204);
PPC_FUNC_IMPL(__imp__sub_82BCC204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCC208"))) PPC_WEAK_FUNC(sub_82BCC208);
PPC_FUNC_IMPL(__imp__sub_82BCC208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCC210;
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
	ctx.lr = 0x82BCC224;
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
	ctx.lr = 0x82BCC23C;
	sub_82D253F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-31761
	ctx.r9.s64 = -2081488896;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r8,r11,-24144
	ctx.r8.s64 = ctx.r11.s64 + -24144;
	// lis r6,-31761
	ctx.r6.s64 = -2081488896;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,26648(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26648);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r10,26648(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26648);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// lwz r10,26652(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 26652);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// stb r11,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r11.u8);
	// stb r11,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r11.u8);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stb r5,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r5.u8);
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// bl 0x825952f0
	ctx.lr = 0x82BCC298;
	sub_825952F0(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82BCC29C;
	sub_8311E3D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc2c0
	if (cr6.eq) goto loc_82BCC2C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82BCC2AC;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcc2c0
	if (!cr6.eq) goto loc_82BCC2C0;
	// bl 0x8311e3d0
	ctx.lr = 0x82BCC2BC;
	sub_8311E3D0(ctx, base);
	// bl 0x8311dfc0
	ctx.lr = 0x82BCC2C0;
	sub_8311DFC0(ctx, base);
loc_82BCC2C0:
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r30,24884
	ctx.r29.s64 = ctx.r30.s64 + 24884;
	// lwz r4,-20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20);
	// bl 0x82d20ae0
	ctx.lr = 0x82BCC2D4;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82BCC2E4;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// bl 0x82d20ae0
	ctx.lr = 0x82BCC2F0;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// bl 0x82d20ae0
	ctx.lr = 0x82BCC2FC;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24884(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24884);
	// bl 0x82d20ae0
	ctx.lr = 0x82BCC308;
	sub_82D20AE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82BCC314;
	sub_83102DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19730
	ctx.lr = 0x82BCC320;
	sub_82D19730(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BCC330;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BCC340;
	sub_82D19788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82BCC34C;
	sub_82D198D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19710
	ctx.lr = 0x82BCC358;
	sub_82D19710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCC364"))) PPC_WEAK_FUNC(sub_82BCC364);
PPC_FUNC_IMPL(__imp__sub_82BCC364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCC368"))) PPC_WEAK_FUNC(sub_82BCC368);
PPC_FUNC_IMPL(__imp__sub_82BCC368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BCC370;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d19a78
	ctx.lr = 0x82BCC378;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r11,-24704
	ctx.r29.s64 = ctx.r11.s64 + -24704;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCC398;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc450
	if (cr6.eq) goto loc_82BCC450;
	// addi r28,r29,-1384
	ctx.r28.s64 = ctx.r29.s64 + -1384;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r3,100
	ctx.r25.s64 = ctx.r3.s64 + 100;
	// lis r26,-31772
	ctx.r26.s64 = -2082209792;
loc_82BCC3B0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82BCC3BC;
	sub_82D2D580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc438
	if (cr6.eq) goto loc_82BCC438;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCC3E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc40c
	if (cr6.eq) goto loc_82BCC40C;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82BCC3F4;
	sub_82D29598(ctx, base);
	// lwz r11,-13652(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13652);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// bne cr6,0x82bcc40c
	if (!cr6.eq) goto loc_82BCC40C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d28498
	ctx.lr = 0x82BCC40C;
	sub_82D28498(ctx, base);
loc_82BCC40C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCC424;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc438
	if (cr6.eq) goto loc_82BCC438;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BCC438;
	sub_82D2AEC8(ctx, base);
loc_82BCC438:
	// addi r11,r29,-1384
	ctx.r11.s64 = ctx.r29.s64 + -1384;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x82bcc3b0
	if (cr6.lt) goto loc_82BCC3B0;
loc_82BCC450:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCC458"))) PPC_WEAK_FUNC(sub_82BCC458);
PPC_FUNC_IMPL(__imp__sub_82BCC458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcc470
	if (cr6.eq) goto loc_82BCC470;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r11.u8);
	// blr 
	return;
loc_82BCC470:
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x82d17da0
	sub_82D17DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCC478"))) PPC_WEAK_FUNC(sub_82BCC478);
PPC_FUNC_IMPL(__imp__sub_82BCC478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,113(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 113);
	// stw r5,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,113(r3)
	PPC_STORE_U8(ctx.r3.u32 + 113, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BCC494"))) PPC_WEAK_FUNC(sub_82BCC494);
PPC_FUNC_IMPL(__imp__sub_82BCC494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCC498"))) PPC_WEAK_FUNC(sub_82BCC498);
PPC_FUNC_IMPL(__imp__sub_82BCC498) {
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
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcc58c
	if (cr6.eq) goto loc_82BCC58C;
	// bl 0x82d19a78
	ctx.lr = 0x82BCC4C0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r11,-24472
	ctx.r30.s64 = ctx.r11.s64 + -24472;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCC4E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc514
	if (cr6.eq) goto loc_82BCC514;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d2d580
	ctx.lr = 0x82BCC4F4;
	sub_82D2D580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc514
	if (cr6.eq) goto loc_82BCC514;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCC514;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BCC514:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCC51C;
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
	ctx.lr = 0x82BCC534;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc54c
	if (cr6.eq) goto loc_82BCC54C;
	// li r6,271
	ctx.r6.s64 = 271;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82BCC54C;
	sub_82D2B608(ctx, base);
loc_82BCC54C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCC568;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r9,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r9.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BCC580;
	sub_82D19788(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82BCC58C;
	sub_82D17DA0(ctx, base);
loc_82BCC58C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BCC5A4"))) PPC_WEAK_FUNC(sub_82BCC5A4);
PPC_FUNC_IMPL(__imp__sub_82BCC5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCC5A8"))) PPC_WEAK_FUNC(sub_82BCC5A8);
PPC_FUNC_IMPL(__imp__sub_82BCC5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,114(r3)
	PPC_STORE_U8(ctx.r3.u32 + 114, ctx.r11.u8);
	// lwz r9,184(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BCC5C0"))) PPC_WEAK_FUNC(sub_82BCC5C0);
PPC_FUNC_IMPL(__imp__sub_82BCC5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,114(r3)
	PPC_STORE_U8(ctx.r3.u32 + 114, ctx.r11.u8);
	// lwz r9,188(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BCC5D8"))) PPC_WEAK_FUNC(sub_82BCC5D8);
PPC_FUNC_IMPL(__imp__sub_82BCC5D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r8,r10,6
	ctx.r8.u64 = ctx.r10.u64 | 6;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,115(r11)
	PPC_STORE_U8(ctx.r11.u32 + 115, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BCC600"))) PPC_WEAK_FUNC(sub_82BCC600);
PPC_FUNC_IMPL(__imp__sub_82BCC600) {
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
	// bl 0x831021a0
	ctx.lr = 0x82BCC618;
	sub_831021A0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// addi r5,r11,-24248
	ctx.r5.s64 = ctx.r11.s64 + -24248;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x83102a08
	ctx.lr = 0x82BCC62C;
	sub_83102A08(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82BCC630;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x83102a08
	ctx.lr = 0x82BCC640;
	sub_83102A08(ctx, base);
	// lis r9,-31761
	ctx.r9.s64 = -2081488896;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r10,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,26648(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26648, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,26652(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26652, ctx.r10.u32);
	// bl 0x82d19858
	ctx.lr = 0x82BCC668;
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

__attribute__((alias("__imp__sub_82BCC67C"))) PPC_WEAK_FUNC(sub_82BCC67C);
PPC_FUNC_IMPL(__imp__sub_82BCC67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCC680"))) PPC_WEAK_FUNC(sub_82BCC680);
PPC_FUNC_IMPL(__imp__sub_82BCC680) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,115(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 115);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BCC688"))) PPC_WEAK_FUNC(sub_82BCC688);
PPC_FUNC_IMPL(__imp__sub_82BCC688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCC690;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82BCC6A0;
	sub_82D19A10(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcc704
	if (cr6.eq) goto loc_82BCC704;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82bcc704
	if (cr6.eq) goto loc_82BCC704;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc6f4
	if (cr6.eq) goto loc_82BCC6F4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bcc6d0
	if (cr6.lt) goto loc_82BCC6D0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82bcc6d4
	goto loc_82BCC6D4;
loc_82BCC6D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82BCC6D4:
	// bl 0x83815208
	ctx.lr = 0x82BCC6D8;
	sub_83815208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc6f4
	if (cr6.eq) goto loc_82BCC6F4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83812ca8
	ctx.lr = 0x82BCC6EC;
	sub_83812CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812c48
	ctx.lr = 0x82BCC6F4;
	sub_83812C48(ctx, base);
loc_82BCC6F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82BCC6FC;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BCC704:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bcc724
	if (cr6.lt) goto loc_82BCC724;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BCC724;
	sub_825952B8(ctx, base);
loc_82BCC724:
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

__attribute__((alias("__imp__sub_82BCC740"))) PPC_WEAK_FUNC(sub_82BCC740);
PPC_FUNC_IMPL(__imp__sub_82BCC740) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bcc768
	if (cr6.lt) goto loc_82BCC768;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bcc76c
	goto loc_82BCC76C;
loc_82BCC768:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BCC76C:
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
	ctx.lr = 0x82BCC788;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc7a8
	if (cr6.eq) goto loc_82BCC7A8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bcc208
	ctx.lr = 0x82BCC79C;
	sub_82BCC208(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bcc7b0
	if (!cr6.eq) goto loc_82BCC7B0;
loc_82BCC7A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bcc7dc
	goto loc_82BCC7DC;
loc_82BCC7B0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-25036
	ctx.r4.s64 = ctx.r11.s64 + -25036;
	// bl 0x837b0c10
	ctx.lr = 0x82BCC7C0;
	sub_837B0C10(ctx, base);
	// bl 0x82bd0460
	ctx.lr = 0x82BCC7C4;
	sub_82BD0460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcc7d8
	if (cr6.eq) goto loc_82BCC7D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82BCC7D8;
	sub_83103100(ctx, base);
loc_82BCC7D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BCC7DC:
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

__attribute__((alias("__imp__sub_82BCC7F4"))) PPC_WEAK_FUNC(sub_82BCC7F4);
PPC_FUNC_IMPL(__imp__sub_82BCC7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCC7F8"))) PPC_WEAK_FUNC(sub_82BCC7F8);
PPC_FUNC_IMPL(__imp__sub_82BCC7F8) {
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
	ctx.lr = 0x82BCC844;
	sub_8259CB28(ctx, base);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BCC868"))) PPC_WEAK_FUNC(sub_82BCC868);
PPC_FUNC_IMPL(__imp__sub_82BCC868) {
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
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcc97c
	if (!cr6.eq) goto loc_82BCC97C;
	// bl 0x82d19bb0
	ctx.lr = 0x82BCC890;
	sub_82D19BB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82bcc97c
	if (cr6.eq) goto loc_82BCC97C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r9,-31761
	ctx.r9.s64 = -2081488896;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,27024
	ctx.r9.s64 = ctx.r9.s64 + 27024;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82bcc7f8
	ctx.lr = 0x82BCC8D0;
	sub_82BCC7F8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// beq cr6,0x82bcc974
	if (cr6.eq) goto loc_82BCC974;
	// bl 0x830ff290
	ctx.lr = 0x82BCC8E0;
	sub_830FF290(ctx, base);
	// lis r10,-31761
	ctx.r10.s64 = -2081488896;
	// lis r9,-31761
	ctx.r9.s64 = -2081488896;
	// li r8,67
	ctx.r8.s64 = 67;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,26652(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26652, ctx.r30.u32);
	// stw r11,26648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26648, ctx.r11.u32);
	// bl 0x82d19788
	ctx.lr = 0x82BCC90C;
	sub_82D19788(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82BCC910;
	sub_831156E8(ctx, base);
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r6,25004
	ctx.r4.s64 = ctx.r6.s64 + 25004;
	// lwzx r11,r5,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(ctx.r11.s32, 28, xer);
	// bge cr6,0x82bcc940
	if (!cr6.lt) goto loc_82BCC940;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r8,r10,35260
	ctx.r8.u64 = ctx.r10.u64 | 35260;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
loc_82BCC940:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bcc954
	if (!cr6.lt) goto loc_82BCC954;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
loc_82BCC954:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BCC960;
	sub_82D20DA8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82BCC96C;
	sub_82D17DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1b890
	ctx.lr = 0x82BCC974;
	sub_82D1B890(ctx, base);
loc_82BCC974:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838760e0
	ctx.lr = 0x82BCC97C;
	sub_838760E0(ctx, base);
loc_82BCC97C:
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

__attribute__((alias("__imp__sub_82BCC994"))) PPC_WEAK_FUNC(sub_82BCC994);
PPC_FUNC_IMPL(__imp__sub_82BCC994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCC998"))) PPC_WEAK_FUNC(sub_82BCC998);
PPC_FUNC_IMPL(__imp__sub_82BCC998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82BCC9A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bccf70
	if (cr6.eq) goto loc_82BCCF70;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82BCC9C0;
	sub_82D33C10(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r29,r11,-24520
	ctx.r29.s64 = ctx.r11.s64 + -24520;
	// beq cr6,0x82bcca3c
	if (cr6.eq) goto loc_82BCCA3C;
	// lis r26,-31772
	ctx.r26.s64 = -2082209792;
loc_82BCC9E0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BCC9EC;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcca30
	if (cr6.eq) goto loc_82BCCA30;
	// lwz r11,-13652(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13652);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r29,-172
	ctx.r4.s64 = ctx.r29.s64 + -172;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82bcca1c
	if (cr6.eq) goto loc_82BCCA1C;
	// addi r4,r29,-164
	ctx.r4.s64 = ctx.r29.s64 + -164;
loc_82BCCA1C:
	// bctrl 
	ctx.lr = 0x82BCCA20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,271
	ctx.r5.s64 = 271;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BCCA30;
	sub_82D2AEC8(ctx, base);
loc_82BCCA30:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// blt cr6,0x82bcc9e0
	if (cr6.lt) goto loc_82BCC9E0;
loc_82BCCA3C:
	// bl 0x831156e8
	ctx.lr = 0x82BCCA40;
	sub_831156E8(ctx, base);
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r29,-156
	ctx.r4.s64 = ctx.r29.s64 + -156;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r21,52(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BCCA64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r20,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// add r8,r20,r11
	ctx.r8.u64 = ctx.r20.u64 + ctx.r11.u64;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// rlwinm r16,r8,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r19,-1
	ctx.r19.s64 = -1;
	// li r15,2
	ctx.r15.s64 = 2;
	// addi r22,r10,24856
	ctx.r22.s64 = ctx.r10.s64 + 24856;
	// addi r17,r11,27024
	ctx.r17.s64 = ctx.r11.s64 + 27024;
loc_82BCCA90:
	// add r11,r16,r27
	ctx.r11.u64 = ctx.r16.u64 + ctx.r27.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r17
	ctx.r31.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwzx r10,r11,r17
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82BCCACC;
	sub_8259CB28(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// beq cr6,0x82bccf3c
	if (cr6.eq) goto loc_82BCCF3C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BCCAEC;
	sub_82D33DB0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bccf3c
	if (cr6.eq) goto loc_82BCCF3C;
	// lwz r11,96(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 96);
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, xer);
	// bne cr6,0x82bccb0c
	if (!cr6.eq) goto loc_82BCCB0C;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// b 0x82bccb10
	goto loc_82BCCB10;
loc_82BCCB0C:
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
loc_82BCCB10:
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
loc_82BCCB20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bccb20
	if (!cr6.eq) goto loc_82BCCB20;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BCCB44;
	sub_8259CC28(ctx, base);
	// addi r4,r29,-152
	ctx.r4.s64 = ctx.r29.s64 + -152;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825a1eb8
	ctx.lr = 0x82BCCB54;
	sub_825A1EB8(ctx, base);
	// addi r10,r27,48
	ctx.r10.s64 = ctx.r27.s64 + 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82a9c298
	ctx.lr = 0x82BCCB68;
	sub_82A9C298(ctx, base);
	// addi r4,r29,-144
	ctx.r4.s64 = ctx.r29.s64 + -144;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825a1eb8
	ctx.lr = 0x82BCCB78;
	sub_825A1EB8(ctx, base);
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// stb r30,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8259cb28
	ctx.lr = 0x82BCCB98;
	sub_8259CB28(ctx, base);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r9,r22,40
	ctx.r9.s64 = ctx.r22.s64 + 40;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwzx r5,r7,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x82bcc688
	ctx.lr = 0x82BCCBB4;
	sub_82BCC688(ctx, base);
	// lwz r6,100(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// addi r26,r23,100
	ctx.r26.s64 = ctx.r23.s64 + 100;
	// addi r4,r29,-132
	ctx.r4.s64 = ctx.r29.s64 + -132;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82BCCBD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bccc5c
	if (cr6.eq) goto loc_82BCCC5C;
	// lwz r4,24(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// bl 0x82d3a058
	ctx.lr = 0x82BCCBE4;
	sub_82D3A058(ctx, base);
	// addi r11,r22,148
	ctx.r11.s64 = ctx.r22.s64 + 148;
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r9,r11,27544
	ctx.r9.s64 = ctx.r11.s64 + 27544;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r21.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82bccc44
	if (cr6.eq) goto loc_82BCCC44;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82bccc3c
	if (cr6.eq) goto loc_82BCCC3C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82bccc34
	if (cr6.eq) goto loc_82BCCC34;
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// b 0x82bccc58
	goto loc_82BCCC58;
loc_82BCCC34:
	// addi r4,r29,-120
	ctx.r4.s64 = ctx.r29.s64 + -120;
	// b 0x82bccc58
	goto loc_82BCCC58;
loc_82BCCC3C:
	// addi r4,r29,-112
	ctx.r4.s64 = ctx.r29.s64 + -112;
	// b 0x82bccc48
	goto loc_82BCCC48;
loc_82BCCC44:
	// addi r4,r29,-104
	ctx.r4.s64 = ctx.r29.s64 + -104;
loc_82BCCC48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82BCCC58:
	// bctrl 
	ctx.lr = 0x82BCCC5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BCCC5C:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// addi r4,r29,-2134
	ctx.r4.s64 = ctx.r29.s64 + -2134;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x82BCCC78;
	sub_8259CC28(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82d04220
	ctx.lr = 0x82BCCC84;
	sub_82D04220(ctx, base);
	// addi r24,r22,148
	ctx.r24.s64 = ctx.r22.s64 + 148;
	// rlwinm r25,r20,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r25,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r24.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,27544
	ctx.r11.s64 = ctx.r11.s64 + 27544;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82bcccf0
	if (cr6.gt) goto loc_82BCCCF0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bcccc4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BCCCC4;
	// bdzf 4*cr6+eq,0x82bccccc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BCCCCC;
	// bne cr6,0x82bcccd4
	if (!cr6.eq) goto loc_82BCCCD4;
	// addi r4,r29,-88
	ctx.r4.s64 = ctx.r29.s64 + -88;
	// b 0x82bcccd8
	goto loc_82BCCCD8;
loc_82BCCCC4:
	// addi r4,r29,-80
	ctx.r4.s64 = ctx.r29.s64 + -80;
	// b 0x82bcccd8
	goto loc_82BCCCD8;
loc_82BCCCCC:
	// addi r4,r29,-72
	ctx.r4.s64 = ctx.r29.s64 + -72;
	// b 0x82bcccd8
	goto loc_82BCCCD8;
loc_82BCCCD4:
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
loc_82BCCCD8:
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
	ctx.lr = 0x82BCCCF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BCCCF0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r29,-56
	ctx.r4.s64 = ctx.r29.s64 + -56;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCCD08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcce00
	if (cr6.eq) goto loc_82BCCE00;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bccd28
	if (!cr6.lt) goto loc_82BCCD28;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82BCCD28:
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
loc_82BCCD38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bccd38
	if (!cr6.eq) goto loc_82BCCD38;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BCCD5C;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BCCD70;
	sub_82D291E0(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bccd8c
	if (cr6.lt) goto loc_82BCCD8C;
	// stw r15,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r15.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82BCCD8C;
	sub_825952B8(ctx, base);
loc_82BCCD8C:
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// li r5,271
	ctx.r5.s64 = 271;
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BCCDA8;
	sub_82D2AEC8(ctx, base);
	// lwz r11,96(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 96);
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, xer);
	// bne cr6,0x82bccdd0
	if (!cr6.eq) goto loc_82BCCDD0;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCCDD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BCCDD0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcce00
	if (cr6.eq) goto loc_82BCCE00;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bccdf0
	if (!cr6.lt) goto loc_82BCCDF0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
loc_82BCCDF0:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,108(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 108);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82BCCE00;
	sub_82D233B0(ctx, base);
loc_82BCCE00:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCCE18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcce2c
	if (cr6.eq) goto loc_82BCCE2C;
	// lis r4,15
	ctx.r4.s64 = 983040;
	// ori r4,r4,13
	ctx.r4.u64 = ctx.r4.u64 | 13;
	// bl 0x82d29598
	ctx.lr = 0x82BCCE2C;
	sub_82D29598(ctx, base);
loc_82BCCE2C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCCE44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcceec
	if (cr6.eq) goto loc_82BCCEEC;
	// lwzx r11,r25,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r24.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r11,r11,27573
	ctx.r11.s64 = ctx.r11.s64 + 27573;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r21
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// bl 0x831d0b08
	ctx.lr = 0x82BCCE74;
	sub_831D0B08(ctx, base);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
loc_82BCCE88:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bcce88
	if (!cr6.eq) goto loc_82BCCE88;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BCCEB0;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BCCEC4;
	sub_82D291E0(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bccee0
	if (cr6.lt) goto loc_82BCCEE0;
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82BCCEE0;
	sub_825952B8(ctx, base);
loc_82BCCEE0:
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
loc_82BCCEEC:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bccf08
	if (cr6.lt) goto loc_82BCCF08;
	// stw r15,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82BCCF08;
	sub_825952B8(ctx, base);
loc_82BCCF08:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// blt cr6,0x82bccf30
	if (cr6.lt) goto loc_82BCCF30;
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82BCCF30;
	sub_825952B8(ctx, base);
loc_82BCCF30:
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
loc_82BCCF3C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bccf58
	if (cr6.lt) goto loc_82BCCF58;
	// stw r15,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x82BCCF58;
	sub_825952B8(ctx, base);
loc_82BCCF58:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// cmplwi cr6,r27,6
	cr6.compare<uint32_t>(ctx.r27.u32, 6, xer);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// blt cr6,0x82bcca90
	if (cr6.lt) goto loc_82BCCA90;
loc_82BCCF70:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

